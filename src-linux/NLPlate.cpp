
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <gp_XYZ.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>

// module includes
#include <NLPlate_HGPPConstraint.hxx>
#include <NLPlate_HPG0Constraint.hxx>
#include <NLPlate_HPG0G1Constraint.hxx>
#include <NLPlate_HPG0G2Constraint.hxx>
#include <NLPlate_HPG0G3Constraint.hxx>
#include <NLPlate_HPG1Constraint.hxx>
#include <NLPlate_HPG2Constraint.hxx>
#include <NLPlate_HPG3Constraint.hxx>
#include <NLPlate_ListIteratorOfStackOfPlate.hxx>
#include <NLPlate_NLPlate.hxx>
#include <NLPlate_SequenceOfHGPPConstraint.hxx>
#include <NLPlate_StackOfPlate.hxx>

// template related includes
// ./opencascade/NLPlate_StackOfPlate.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/NLPlate_StackOfPlate.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/NLPlate_SequenceOfHGPPConstraint.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_NLPlate(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("NLPlate"));


//Python trampoline classes
    class Py_NLPlate_HGPPConstraint : public NLPlate_HGPPConstraint{
    public:
        using NLPlate_HGPPConstraint::NLPlate_HGPPConstraint;


        // public pure virtual
        Standard_Integer ActiveOrder() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,NLPlate_HGPPConstraint,ActiveOrder,) };
        Standard_Boolean IsG0() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,NLPlate_HGPPConstraint,IsG0,) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<NLPlate_HGPPConstraint ,opencascade::handle<NLPlate_HGPPConstraint>,Py_NLPlate_HGPPConstraint , Standard_Transient>>(m.attr("NLPlate_HGPPConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("SetUVFreeSliding",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Boolean ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Boolean ) >(&NLPlate_HGPPConstraint::SetUVFreeSliding),
             R"#(None)#"  , py::arg("UVFree"))
        .def("SetIncrementalLoadAllowed",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Boolean ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Boolean ) >(&NLPlate_HGPPConstraint::SetIncrementalLoadAllowed),
             R"#(None)#"  , py::arg("ILA"))
        .def("SetActiveOrder",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Integer ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Integer ) >(&NLPlate_HGPPConstraint::SetActiveOrder),
             R"#(None)#"  , py::arg("ActiveOrder"))
        .def("SetUV",
             (void (NLPlate_HGPPConstraint::*)( const gp_XY & ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const gp_XY & ) >(&NLPlate_HGPPConstraint::SetUV),
             R"#(None)#"  , py::arg("UV"))
        .def("SetOrientation",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Integer ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Integer ) >(&NLPlate_HGPPConstraint::SetOrientation),
             R"#(None)#"  , py::arg("Orient")=static_cast<const Standard_Integer>(0))
        .def("SetG0Criterion",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Real ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Real ) >(&NLPlate_HGPPConstraint::SetG0Criterion),
             R"#(None)#"  , py::arg("TolDist"))
        .def("SetG1Criterion",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Real ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Real ) >(&NLPlate_HGPPConstraint::SetG1Criterion),
             R"#(None)#"  , py::arg("TolAng"))
        .def("SetG2Criterion",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Real ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Real ) >(&NLPlate_HGPPConstraint::SetG2Criterion),
             R"#(None)#"  , py::arg("TolCurv"))
        .def("SetG3Criterion",
             (void (NLPlate_HGPPConstraint::*)( const Standard_Real ) ) static_cast<void (NLPlate_HGPPConstraint::*)( const Standard_Real ) >(&NLPlate_HGPPConstraint::SetG3Criterion),
             R"#(None)#"  , py::arg("TolG3"))
        .def("UVFreeSliding",
             (Standard_Boolean (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Boolean (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::UVFreeSliding),
             R"#(None)#" )
        .def("IncrementalLoadAllowed",
             (Standard_Boolean (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Boolean (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::IncrementalLoadAllowed),
             R"#(None)#" )
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Integer (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::ActiveOrder),
             R"#(None)#" )
        .def("UV",
             (const gp_XY & (NLPlate_HGPPConstraint::*)() const) static_cast<const gp_XY & (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::UV),
             R"#(None)#" )
        .def("Orientation",
             (Standard_Integer (NLPlate_HGPPConstraint::*)() ) static_cast<Standard_Integer (NLPlate_HGPPConstraint::*)() >(&NLPlate_HGPPConstraint::Orientation),
             R"#(None)#" )
        .def("IsG0",
             (Standard_Boolean (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Boolean (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::IsG0),
             R"#(None)#" )
        .def("G0Target",
             (const gp_XYZ & (NLPlate_HGPPConstraint::*)() const) static_cast<const gp_XYZ & (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G0Target),
             R"#(None)#" )
        .def("G1Target",
             (const Plate_D1 & (NLPlate_HGPPConstraint::*)() const) static_cast<const Plate_D1 & (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G1Target),
             R"#(None)#" )
        .def("G2Target",
             (const Plate_D2 & (NLPlate_HGPPConstraint::*)() const) static_cast<const Plate_D2 & (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G2Target),
             R"#(None)#" )
        .def("G3Target",
             (const Plate_D3 & (NLPlate_HGPPConstraint::*)() const) static_cast<const Plate_D3 & (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G3Target),
             R"#(None)#" )
        .def("G0Criterion",
             (Standard_Real (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Real (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G0Criterion),
             R"#(None)#" )
        .def("G1Criterion",
             (Standard_Real (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Real (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G1Criterion),
             R"#(None)#" )
        .def("G2Criterion",
             (Standard_Real (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Real (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G2Criterion),
             R"#(None)#" )
        .def("G3Criterion",
             (Standard_Real (NLPlate_HGPPConstraint::*)() const) static_cast<Standard_Real (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::G3Criterion),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HGPPConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HGPPConstraint::*)() const>(&NLPlate_HGPPConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HGPPConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HGPPConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_NLPlate , shared_ptr<NLPlate_NLPlate> >>(m.attr("NLPlate_NLPlate"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Surface> & >()  , py::arg("InitialSurface") )
    // custom constructors
    // methods
        .def("Load",
             (void (NLPlate_NLPlate::*)( const opencascade::handle<NLPlate_HGPPConstraint> & ) ) static_cast<void (NLPlate_NLPlate::*)( const opencascade::handle<NLPlate_HGPPConstraint> & ) >(&NLPlate_NLPlate::Load),
             R"#(None)#"  , py::arg("GConst"))
        .def("Solve",
             (void (NLPlate_NLPlate::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (NLPlate_NLPlate::*)( const Standard_Integer , const Standard_Integer ) >(&NLPlate_NLPlate::Solve),
             R"#(None)#"  , py::arg("ord")=static_cast<const Standard_Integer>(2),  py::arg("InitialConsraintOrder")=static_cast<const Standard_Integer>(1))
        .def("Solve2",
             (void (NLPlate_NLPlate::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (NLPlate_NLPlate::*)( const Standard_Integer , const Standard_Integer ) >(&NLPlate_NLPlate::Solve2),
             R"#(None)#"  , py::arg("ord")=static_cast<const Standard_Integer>(2),  py::arg("InitialConsraintOrder")=static_cast<const Standard_Integer>(1))
        .def("IncrementalSolve",
             (void (NLPlate_NLPlate::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (NLPlate_NLPlate::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&NLPlate_NLPlate::IncrementalSolve),
             R"#(None)#"  , py::arg("ord")=static_cast<const Standard_Integer>(2),  py::arg("InitialConsraintOrder")=static_cast<const Standard_Integer>(1),  py::arg("NbIncrements")=static_cast<const Standard_Integer>(4),  py::arg("UVSliding")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (NLPlate_NLPlate::*)() const) static_cast<Standard_Boolean (NLPlate_NLPlate::*)() const>(&NLPlate_NLPlate::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("destroy",
             (void (NLPlate_NLPlate::*)() ) static_cast<void (NLPlate_NLPlate::*)() >(&NLPlate_NLPlate::destroy),
             R"#(None)#" )
        .def("Init",
             (void (NLPlate_NLPlate::*)() ) static_cast<void (NLPlate_NLPlate::*)() >(&NLPlate_NLPlate::Init),
             R"#(reset the Plate in the initial state ( same as after Create((Surface)))#" )
        .def("Evaluate",
             (gp_XYZ (NLPlate_NLPlate::*)( const gp_XY & ) const) static_cast<gp_XYZ (NLPlate_NLPlate::*)( const gp_XY & ) const>(&NLPlate_NLPlate::Evaluate),
             R"#(None)#"  , py::arg("point2d"))
        .def("EvaluateDerivative",
             (gp_XYZ (NLPlate_NLPlate::*)( const gp_XY & , const Standard_Integer , const Standard_Integer ) const) static_cast<gp_XYZ (NLPlate_NLPlate::*)( const gp_XY & , const Standard_Integer , const Standard_Integer ) const>(&NLPlate_NLPlate::EvaluateDerivative),
             R"#(None)#"  , py::arg("point2d"),  py::arg("iu"),  py::arg("iv"))
        .def("Continuity",
             (Standard_Integer (NLPlate_NLPlate::*)() const) static_cast<Standard_Integer (NLPlate_NLPlate::*)() const>(&NLPlate_NLPlate::Continuity),
             R"#(None)#" )
        .def("ConstraintsSliding",
             (void (NLPlate_NLPlate::*)( const Standard_Integer ) ) static_cast<void (NLPlate_NLPlate::*)( const Standard_Integer ) >(&NLPlate_NLPlate::ConstraintsSliding),
             R"#(None)#"  , py::arg("NbIterations")=static_cast<const Standard_Integer>(3))
        .def("MaxActiveConstraintOrder",
             (Standard_Integer (NLPlate_NLPlate::*)() const) static_cast<Standard_Integer (NLPlate_NLPlate::*)() const>(&NLPlate_NLPlate::MaxActiveConstraintOrder),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_HPG0Constraint ,opencascade::handle<NLPlate_HPG0Constraint> , NLPlate_HGPPConstraint>>(m.attr("NLPlate_HPG0Constraint"))
    // constructors
        .def(py::init< const gp_XY &,const gp_XYZ & >()  , py::arg("UV"),  py::arg("Value") )
    // custom constructors
    // methods
        .def("SetUVFreeSliding",
             (void (NLPlate_HPG0Constraint::*)( const Standard_Boolean ) ) static_cast<void (NLPlate_HPG0Constraint::*)( const Standard_Boolean ) >(&NLPlate_HPG0Constraint::SetUVFreeSliding),
             R"#(None)#"  , py::arg("UVFree"))
        .def("SetIncrementalLoadAllowed",
             (void (NLPlate_HPG0Constraint::*)( const Standard_Boolean ) ) static_cast<void (NLPlate_HPG0Constraint::*)( const Standard_Boolean ) >(&NLPlate_HPG0Constraint::SetIncrementalLoadAllowed),
             R"#(None)#"  , py::arg("ILA"))
        .def("UVFreeSliding",
             (Standard_Boolean (NLPlate_HPG0Constraint::*)() const) static_cast<Standard_Boolean (NLPlate_HPG0Constraint::*)() const>(&NLPlate_HPG0Constraint::UVFreeSliding),
             R"#(None)#" )
        .def("IncrementalLoadAllowed",
             (Standard_Boolean (NLPlate_HPG0Constraint::*)() const) static_cast<Standard_Boolean (NLPlate_HPG0Constraint::*)() const>(&NLPlate_HPG0Constraint::IncrementalLoadAllowed),
             R"#(None)#" )
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HPG0Constraint::*)() const) static_cast<Standard_Integer (NLPlate_HPG0Constraint::*)() const>(&NLPlate_HPG0Constraint::ActiveOrder),
             R"#(None)#" )
        .def("IsG0",
             (Standard_Boolean (NLPlate_HPG0Constraint::*)() const) static_cast<Standard_Boolean (NLPlate_HPG0Constraint::*)() const>(&NLPlate_HPG0Constraint::IsG0),
             R"#(None)#" )
        .def("G0Target",
             (const gp_XYZ & (NLPlate_HPG0Constraint::*)() const) static_cast<const gp_XYZ & (NLPlate_HPG0Constraint::*)() const>(&NLPlate_HPG0Constraint::G0Target),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HPG0Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HPG0Constraint::*)() const>(&NLPlate_HPG0Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HPG0Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HPG0Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_HPG1Constraint ,opencascade::handle<NLPlate_HPG1Constraint> , NLPlate_HGPPConstraint>>(m.attr("NLPlate_HPG1Constraint"))
    // constructors
        .def(py::init< const gp_XY &,const Plate_D1 & >()  , py::arg("UV"),  py::arg("D1T") )
    // custom constructors
    // methods
        .def("SetIncrementalLoadAllowed",
             (void (NLPlate_HPG1Constraint::*)( const Standard_Boolean ) ) static_cast<void (NLPlate_HPG1Constraint::*)( const Standard_Boolean ) >(&NLPlate_HPG1Constraint::SetIncrementalLoadAllowed),
             R"#(None)#"  , py::arg("ILA"))
        .def("SetOrientation",
             (void (NLPlate_HPG1Constraint::*)( const Standard_Integer ) ) static_cast<void (NLPlate_HPG1Constraint::*)( const Standard_Integer ) >(&NLPlate_HPG1Constraint::SetOrientation),
             R"#(None)#"  , py::arg("Orient")=static_cast<const Standard_Integer>(0))
        .def("IncrementalLoadAllowed",
             (Standard_Boolean (NLPlate_HPG1Constraint::*)() const) static_cast<Standard_Boolean (NLPlate_HPG1Constraint::*)() const>(&NLPlate_HPG1Constraint::IncrementalLoadAllowed),
             R"#(None)#" )
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HPG1Constraint::*)() const) static_cast<Standard_Integer (NLPlate_HPG1Constraint::*)() const>(&NLPlate_HPG1Constraint::ActiveOrder),
             R"#(None)#" )
        .def("IsG0",
             (Standard_Boolean (NLPlate_HPG1Constraint::*)() const) static_cast<Standard_Boolean (NLPlate_HPG1Constraint::*)() const>(&NLPlate_HPG1Constraint::IsG0),
             R"#(None)#" )
        .def("Orientation",
             (Standard_Integer (NLPlate_HPG1Constraint::*)() ) static_cast<Standard_Integer (NLPlate_HPG1Constraint::*)() >(&NLPlate_HPG1Constraint::Orientation),
             R"#(None)#" )
        .def("G1Target",
             (const Plate_D1 & (NLPlate_HPG1Constraint::*)() const) static_cast<const Plate_D1 & (NLPlate_HPG1Constraint::*)() const>(&NLPlate_HPG1Constraint::G1Target),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HPG1Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HPG1Constraint::*)() const>(&NLPlate_HPG1Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HPG1Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HPG1Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_HPG0G1Constraint ,opencascade::handle<NLPlate_HPG0G1Constraint> , NLPlate_HPG0Constraint>>(m.attr("NLPlate_HPG0G1Constraint"))
    // constructors
        .def(py::init< const gp_XY &,const gp_XYZ &,const Plate_D1 & >()  , py::arg("UV"),  py::arg("Value"),  py::arg("D1T") )
    // custom constructors
    // methods
        .def("SetOrientation",
             (void (NLPlate_HPG0G1Constraint::*)( const Standard_Integer ) ) static_cast<void (NLPlate_HPG0G1Constraint::*)( const Standard_Integer ) >(&NLPlate_HPG0G1Constraint::SetOrientation),
             R"#(None)#"  , py::arg("Orient")=static_cast<const Standard_Integer>(0))
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HPG0G1Constraint::*)() const) static_cast<Standard_Integer (NLPlate_HPG0G1Constraint::*)() const>(&NLPlate_HPG0G1Constraint::ActiveOrder),
             R"#(None)#" )
        .def("Orientation",
             (Standard_Integer (NLPlate_HPG0G1Constraint::*)() ) static_cast<Standard_Integer (NLPlate_HPG0G1Constraint::*)() >(&NLPlate_HPG0G1Constraint::Orientation),
             R"#(None)#" )
        .def("G1Target",
             (const Plate_D1 & (NLPlate_HPG0G1Constraint::*)() const) static_cast<const Plate_D1 & (NLPlate_HPG0G1Constraint::*)() const>(&NLPlate_HPG0G1Constraint::G1Target),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HPG0G1Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HPG0G1Constraint::*)() const>(&NLPlate_HPG0G1Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HPG0G1Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HPG0G1Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_HPG2Constraint ,opencascade::handle<NLPlate_HPG2Constraint> , NLPlate_HPG1Constraint>>(m.attr("NLPlate_HPG2Constraint"))
    // constructors
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D2 & >()  , py::arg("UV"),  py::arg("D1T"),  py::arg("D2T") )
    // custom constructors
    // methods
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HPG2Constraint::*)() const) static_cast<Standard_Integer (NLPlate_HPG2Constraint::*)() const>(&NLPlate_HPG2Constraint::ActiveOrder),
             R"#(None)#" )
        .def("G2Target",
             (const Plate_D2 & (NLPlate_HPG2Constraint::*)() const) static_cast<const Plate_D2 & (NLPlate_HPG2Constraint::*)() const>(&NLPlate_HPG2Constraint::G2Target),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HPG2Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HPG2Constraint::*)() const>(&NLPlate_HPG2Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HPG2Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HPG2Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_HPG0G2Constraint ,opencascade::handle<NLPlate_HPG0G2Constraint> , NLPlate_HPG0G1Constraint>>(m.attr("NLPlate_HPG0G2Constraint"))
    // constructors
        .def(py::init< const gp_XY &,const gp_XYZ &,const Plate_D1 &,const Plate_D2 & >()  , py::arg("UV"),  py::arg("Value"),  py::arg("D1T"),  py::arg("D2T") )
    // custom constructors
    // methods
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HPG0G2Constraint::*)() const) static_cast<Standard_Integer (NLPlate_HPG0G2Constraint::*)() const>(&NLPlate_HPG0G2Constraint::ActiveOrder),
             R"#(None)#" )
        .def("G2Target",
             (const Plate_D2 & (NLPlate_HPG0G2Constraint::*)() const) static_cast<const Plate_D2 & (NLPlate_HPG0G2Constraint::*)() const>(&NLPlate_HPG0G2Constraint::G2Target),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HPG0G2Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HPG0G2Constraint::*)() const>(&NLPlate_HPG0G2Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HPG0G2Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HPG0G2Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_HPG3Constraint ,opencascade::handle<NLPlate_HPG3Constraint> , NLPlate_HPG2Constraint>>(m.attr("NLPlate_HPG3Constraint"))
    // constructors
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D2 &,const Plate_D3 & >()  , py::arg("UV"),  py::arg("D1T"),  py::arg("D2T"),  py::arg("D3T") )
    // custom constructors
    // methods
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HPG3Constraint::*)() const) static_cast<Standard_Integer (NLPlate_HPG3Constraint::*)() const>(&NLPlate_HPG3Constraint::ActiveOrder),
             R"#(None)#" )
        .def("G3Target",
             (const Plate_D3 & (NLPlate_HPG3Constraint::*)() const) static_cast<const Plate_D3 & (NLPlate_HPG3Constraint::*)() const>(&NLPlate_HPG3Constraint::G3Target),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HPG3Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HPG3Constraint::*)() const>(&NLPlate_HPG3Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HPG3Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HPG3Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<NLPlate_HPG0G3Constraint ,opencascade::handle<NLPlate_HPG0G3Constraint> , NLPlate_HPG0G2Constraint>>(m.attr("NLPlate_HPG0G3Constraint"))
    // constructors
        .def(py::init< const gp_XY &,const gp_XYZ &,const Plate_D1 &,const Plate_D2 &,const Plate_D3 & >()  , py::arg("UV"),  py::arg("Value"),  py::arg("D1T"),  py::arg("D2T"),  py::arg("D3T") )
    // custom constructors
    // methods
        .def("ActiveOrder",
             (Standard_Integer (NLPlate_HPG0G3Constraint::*)() const) static_cast<Standard_Integer (NLPlate_HPG0G3Constraint::*)() const>(&NLPlate_HPG0G3Constraint::ActiveOrder),
             R"#(None)#" )
        .def("G3Target",
             (const Plate_D3 & (NLPlate_HPG0G3Constraint::*)() const) static_cast<const Plate_D3 & (NLPlate_HPG0G3Constraint::*)() const>(&NLPlate_HPG0G3Constraint::G3Target),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NLPlate_HPG0G3Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NLPlate_HPG0G3Constraint::*)() const>(&NLPlate_HPG0G3Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NLPlate_HPG0G3Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NLPlate_HPG0G3Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/NLPlate_HPG2Constraint.hxx
// ./opencascade/NLPlate_StackOfPlate.hxx
// ./opencascade/NLPlate_HPG0G3Constraint.hxx
// ./opencascade/NLPlate_ListIteratorOfStackOfPlate.hxx
// ./opencascade/NLPlate_HPG0Constraint.hxx
// ./opencascade/NLPlate_HPG0G2Constraint.hxx
// ./opencascade/NLPlate_SequenceOfHGPPConstraint.hxx
// ./opencascade/NLPlate_HPG0G1Constraint.hxx
// ./opencascade/NLPlate_NLPlate.hxx
// ./opencascade/NLPlate_HPG1Constraint.hxx
// ./opencascade/NLPlate_HGPPConstraint.hxx
// ./opencascade/NLPlate_HPG3Constraint.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<Plate_Plate>(m,"NLPlate_StackOfPlate");
    register_template_NCollection_Sequence<opencascade::handle<NLPlate_HGPPConstraint> >(m,"NLPlate_SequenceOfHGPPConstraint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
