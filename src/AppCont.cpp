
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <AppCont_ContMatrices.hxx>
#include <AppCont_Function.hxx>
#include <AppCont_LeastSquare.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppCont(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AppCont"));


//Python trampoline classes
    class Py_AppCont_Function : public AppCont_Function{
    public:
        using AppCont_Function::AppCont_Function;
        
        // public pure virtual
        Standard_Real FirstParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,AppCont_Function,FirstParameter,) };
        Standard_Real LastParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,AppCont_Function,LastParameter,) };
        Standard_Boolean Value(const Standard_Real theU,NCollection_Array1<gp_Pnt2d> & thePnt2d,NCollection_Array1<gp_Pnt> & thePnt) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AppCont_Function,Value,theU,thePnt2d,thePnt) };
        Standard_Boolean D1(const Standard_Real theU,NCollection_Array1<gp_Vec2d> & theVec2d,NCollection_Array1<gp_Vec> & theVec) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AppCont_Function,D1,theU,theVec2d,theVec) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

// functions
// ./opencascade/AppCont_Function.hxx
// ./opencascade/AppCont_ContMatrices.hxx
    m.def("InvMMatrix", 
          (void (*)( const Standard_Integer ,  math_Matrix &  ))  static_cast<void (*)( const Standard_Integer ,  math_Matrix &  )>(&InvMMatrix),
          R"#(None)#"  , py::arg("classe"),  py::arg("M"));
    m.def("MMatrix", 
          (void (*)( const Standard_Integer ,  math_Matrix &  ))  static_cast<void (*)( const Standard_Integer ,  math_Matrix &  )>(&MMatrix),
          R"#(None)#"  , py::arg("classe"),  py::arg("M"));
    m.def("IBPMatrix", 
          (void (*)( const Standard_Integer ,  math_Matrix &  ))  static_cast<void (*)( const Standard_Integer ,  math_Matrix &  )>(&IBPMatrix),
          R"#(None)#"  , py::arg("classe"),  py::arg("M"));
    m.def("IBTMatrix", 
          (void (*)( const Standard_Integer ,  math_Matrix &  ))  static_cast<void (*)( const Standard_Integer ,  math_Matrix &  )>(&IBTMatrix),
          R"#(None)#"  , py::arg("classe"),  py::arg("M"));
    m.def("VBernstein", 
          (void (*)( const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  ))  static_cast<void (*)( const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  )>(&VBernstein),
          R"#(None)#"  , py::arg("classe"),  py::arg("nbpoints"),  py::arg("M"));
// ./opencascade/AppCont_LeastSquare.hxx

// operators

// register typdefs
// ./opencascade/AppCont_Function.hxx
// ./opencascade/AppCont_ContMatrices.hxx
// ./opencascade/AppCont_LeastSquare.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
