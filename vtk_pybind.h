#pragma once

/// @file
/// Generic VTK class + smart pointer casters.
/// Based on: https://gitlab.kitware.com/cmb/smtk/blob/9bf5b4f9/smtk/extension/vtk/pybind11/PybindVTKTypeCaster.h
/// which uses the SMTK License Version 1.0 (similar to BSD 3-Clause?).
/// @authors Kitware, Inc; Eric Cousineau

#include <type_traits>

#include <pybind11/cast.h>
#include <pybind11/pybind11.h>
#include <vtkObjectBase.h>
#include <vtkPythonUtil.h>
#include <vtkSmartPointer.h>

namespace pybind11 {
namespace detail {

/// Direct access to VTK class.
template <typename Class>
struct type_caster<
    Class,
    enable_if_t<std::is_base_of<vtkObjectBase, Class>::value>
    > {
 private:
  Class* value;
 public:
  static constexpr auto name = _<Class>();

  static handle cast(
      const Class *src, return_value_policy policy, handle parent) {
    if (!src)
      return none().release();
    if (policy == return_value_policy::take_ownership) {
      throw cast_error(
          "vtk_pybind: `take_ownership` does not make sense in VTK?");
    }
    if (policy == return_value_policy::copy) {
      throw cast_error(
          "vtk_pybind: `copy` does not make sense in VTK?");
    }
    return vtkPythonUtil::GetObjectFromPointer(const_cast<Class*>(src));
  }

  static handle cast(
      const Class& src, return_value_policy policy, handle parent) {
    return cast(&src, policy, parent);
  }

  operator Class*() { return value; }
  operator Class&() { return *value; }
  // Does this even make sense in VTK?
  operator Class&&() && { return std::move(*value); }

  template <typename T_>
  using cast_op_type = pybind11::detail::movable_cast_op_type<T_>;

  bool load(handle src, bool /* convert */) {
    value = dynamic_cast<Class*>(
        vtkPythonUtil::GetPointerFromObject(
            src.ptr(), type_id<Class>().c_str()));
    return value != nullptr;
  }
};

/// VTK Pointer-like object - may be non-copyable.
template <typename Ptr>
struct vtk_ptr_cast_only {
 protected:
  using Class = intrinsic_t<decltype(*std::declval<Ptr>())>;
  using value_caster_type = type_caster<Class>;
 public:
  static constexpr auto name = _<Class>();
  static handle cast(
      const Ptr& ptr, return_value_policy policy, handle parent) {
    return value_caster_type::cast(*ptr, policy, parent);;
  }
};

/// VTK Pointer-like object - copyable / movable.
template <typename Ptr>
struct vtk_ptr_cast_and_load : public vtk_ptr_cast_only<Ptr> {
 private:
  Ptr value;
  // N.B. Can't easily access base versions...
  using Class = intrinsic_t<decltype(*std::declval<Ptr>())>;
  using value_caster_type = type_caster<Class>;
 public:
  operator Ptr&() { return value; }
  // Does this even make sense in VTK?
  operator Ptr&&() && { return std::move(value); }

  template <typename T_>
  using cast_op_type = pybind11::detail::movable_cast_op_type<T_>;

  bool load(handle src, bool convert) {
    value_caster_type value_caster;
    if (!value_caster.load(src, convert)) {
      return false;
    }
    value = Ptr(value_caster.operator Class*());
    return true;
  }
};

template <typename Class>
struct type_caster<vtkSmartPointer<Class>>
    : public vtk_ptr_cast_and_load<vtkSmartPointer<Class>> {};

template <typename Class>
struct type_caster<vtkNew<Class>>
    : public vtk_ptr_cast_only<vtkNew<Class>> {};

}  // namespace detail
}  // namespace pybind11
