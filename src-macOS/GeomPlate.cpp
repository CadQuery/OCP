
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Plane.hxx>
#include <Geom_Line.hxx>
#include <GeomPlate_Surface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <Geom_Surface.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_Surface.hxx>
#include <GeomPlate_Surface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Message_ProgressIndicator.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>

// module includes
#include <GeomPlate_Aij.hxx>
#include <GeomPlate_Array1OfHCurve.hxx>
#include <GeomPlate_Array1OfSequenceOfReal.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <GeomPlate_BuildPlateSurface.hxx>
#include <GeomPlate_CurveConstraint.hxx>
#include <GeomPlate_HArray1OfHCurve.hxx>
#include <GeomPlate_HArray1OfSequenceOfReal.hxx>
#include <GeomPlate_HSequenceOfCurveConstraint.hxx>
#include <GeomPlate_HSequenceOfPointConstraint.hxx>
#include <GeomPlate_MakeApprox.hxx>
#include <GeomPlate_PlateG0Criterion.hxx>
#include <GeomPlate_PlateG1Criterion.hxx>
#include <GeomPlate_PointConstraint.hxx>
#include <GeomPlate_SequenceOfAij.hxx>
#include <GeomPlate_SequenceOfCurveConstraint.hxx>
#include <GeomPlate_SequenceOfPointConstraint.hxx>
#include <GeomPlate_Surface.hxx>

// template related includes
// ./opencascade/GeomPlate_SequenceOfAij.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_SequenceOfPointConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_Array1OfHCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_SequenceOfCurveConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_Array1OfSequenceOfReal.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomPlate(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomPlate"));


//Python trampoline classes

// classes


    static_cast<py::class_<GeomPlate_Aij , shared_ptr<GeomPlate_Aij> >>(m.attr("GeomPlate_Aij"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_BuildAveragePlane , shared_ptr<GeomPlate_BuildAveragePlane> >>(m.attr("GeomPlate_BuildAveragePlane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_BuildPlateSurface , shared_ptr<GeomPlate_BuildPlateSurface> >>(m.attr("GeomPlate_BuildPlateSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_CurveConstraint ,opencascade::handle<GeomPlate_CurveConstraint> , Standard_Transient>>(m.attr("GeomPlate_CurveConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_CurveConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_CurveConstraint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HArray1OfHCurve ,opencascade::handle<GeomPlate_HArray1OfHCurve> , GeomPlate_Array1OfHCurve, Standard_Transient>>(m.attr("GeomPlate_HArray1OfHCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Adaptor3d_HCurve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() const) static_cast<const GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() const>(&GeomPlate_HArray1OfHCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() ) static_cast<GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() >(&GeomPlate_HArray1OfHCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfHCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfHCurve::*)() const>(&GeomPlate_HArray1OfHCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HArray1OfHCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HArray1OfHCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HArray1OfSequenceOfReal ,opencascade::handle<GeomPlate_HArray1OfSequenceOfReal> , GeomPlate_Array1OfSequenceOfReal, Standard_Transient>>(m.attr("GeomPlate_HArray1OfSequenceOfReal"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_Sequence<double> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TColStd_SequenceOfReal> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() const) static_cast<const GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() const>(&GeomPlate_HArray1OfSequenceOfReal::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() ) static_cast<GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() >(&GeomPlate_HArray1OfSequenceOfReal::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfSequenceOfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfSequenceOfReal::*)() const>(&GeomPlate_HArray1OfSequenceOfReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HArray1OfSequenceOfReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HArray1OfSequenceOfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HSequenceOfCurveConstraint ,opencascade::handle<GeomPlate_HSequenceOfCurveConstraint> , GeomPlate_SequenceOfCurveConstraint, Standard_Transient>>(m.attr("GeomPlate_HSequenceOfCurveConstraint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() const) static_cast<const GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() const>(&GeomPlate_HSequenceOfCurveConstraint::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (GeomPlate_HSequenceOfCurveConstraint::*)(  const opencascade::handle<GeomPlate_CurveConstraint> & ) ) static_cast<void (GeomPlate_HSequenceOfCurveConstraint::*)(  const opencascade::handle<GeomPlate_CurveConstraint> & ) >(&GeomPlate_HSequenceOfCurveConstraint::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (GeomPlate_HSequenceOfCurveConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> > & ) ) static_cast<void (GeomPlate_HSequenceOfCurveConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> > & ) >(&GeomPlate_HSequenceOfCurveConstraint::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() ) static_cast<GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() >(&GeomPlate_HSequenceOfCurveConstraint::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfCurveConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfCurveConstraint::*)() const>(&GeomPlate_HSequenceOfCurveConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HSequenceOfCurveConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HSequenceOfCurveConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HSequenceOfPointConstraint ,opencascade::handle<GeomPlate_HSequenceOfPointConstraint> , GeomPlate_SequenceOfPointConstraint, Standard_Transient>>(m.attr("GeomPlate_HSequenceOfPointConstraint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() const) static_cast<const GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() const>(&GeomPlate_HSequenceOfPointConstraint::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (GeomPlate_HSequenceOfPointConstraint::*)(  const opencascade::handle<GeomPlate_PointConstraint> & ) ) static_cast<void (GeomPlate_HSequenceOfPointConstraint::*)(  const opencascade::handle<GeomPlate_PointConstraint> & ) >(&GeomPlate_HSequenceOfPointConstraint::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (GeomPlate_HSequenceOfPointConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> > & ) ) static_cast<void (GeomPlate_HSequenceOfPointConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> > & ) >(&GeomPlate_HSequenceOfPointConstraint::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() ) static_cast<GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() >(&GeomPlate_HSequenceOfPointConstraint::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfPointConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfPointConstraint::*)() const>(&GeomPlate_HSequenceOfPointConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HSequenceOfPointConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HSequenceOfPointConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_MakeApprox , shared_ptr<GeomPlate_MakeApprox> >>(m.attr("GeomPlate_MakeApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_PlateG0Criterion , shared_ptr<GeomPlate_PlateG0Criterion> , AdvApp2Var_Criterion>>(m.attr("GeomPlate_PlateG0Criterion"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (void (GeomPlate_PlateG0Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const) static_cast<void (GeomPlate_PlateG0Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const>(&GeomPlate_PlateG0Criterion::Value),
             R"#(None)#"  , py::arg("P"),  py::arg("C"))
        .def("IsSatisfied",
             (Standard_Boolean (GeomPlate_PlateG0Criterion::*)( const AdvApp2Var_Patch & ) const) static_cast<Standard_Boolean (GeomPlate_PlateG0Criterion::*)( const AdvApp2Var_Patch & ) const>(&GeomPlate_PlateG0Criterion::IsSatisfied),
             R"#(None)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_PlateG1Criterion , shared_ptr<GeomPlate_PlateG1Criterion> , AdvApp2Var_Criterion>>(m.attr("GeomPlate_PlateG1Criterion"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (void (GeomPlate_PlateG1Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const) static_cast<void (GeomPlate_PlateG1Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const>(&GeomPlate_PlateG1Criterion::Value),
             R"#(None)#"  , py::arg("P"),  py::arg("C"))
        .def("IsSatisfied",
             (Standard_Boolean (GeomPlate_PlateG1Criterion::*)( const AdvApp2Var_Patch & ) const) static_cast<Standard_Boolean (GeomPlate_PlateG1Criterion::*)( const AdvApp2Var_Patch & ) const>(&GeomPlate_PlateG1Criterion::IsSatisfied),
             R"#(None)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_PointConstraint ,opencascade::handle<GeomPlate_PointConstraint> , Standard_Transient>>(m.attr("GeomPlate_PointConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_PointConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_PointConstraint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_Surface ,opencascade::handle<GeomPlate_Surface> , Geom_Surface>>(m.attr("GeomPlate_Surface"))
    // constructors
    // custom constructors
    // methods
        .def("UReverse",
             (void (GeomPlate_Surface::*)() ) static_cast<void (GeomPlate_Surface::*)() >(&GeomPlate_Surface::UReverse),
             R"#(Reverses the U direction of parametrization of <me>. The bounds of the surface are not modified.)#" )
        .def("UReversedParameter",
             (Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::UReversedParameter),
             R"#(Return the parameter on the Ureversed surface for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("VReverse",
             (void (GeomPlate_Surface::*)() ) static_cast<void (GeomPlate_Surface::*)() >(&GeomPlate_Surface::VReverse),
             R"#(Reverses the V direction of parametrization of <me>. The bounds of the surface are not modified.)#" )
        .def("VReversedParameter",
             (Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::VReversedParameter),
             R"#(Return the parameter on the Vreversed surface for the point of parameter V on <me>.)#"  , py::arg("V"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (GeomPlate_Surface::*)( const gp_Trsf & ) const) static_cast<gp_GTrsf2d (GeomPlate_Surface::*)( const gp_Trsf & ) const>(&GeomPlate_Surface::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("IsUClosed",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsUClosed),
             R"#(Is the surface closed in the parametric direction U ? Returns True if for each parameter V the distance between the point P (UFirst, V) and P (ULast, V) is lower or equal to Resolution from gp. UFirst and ULast are the parametric bounds in the U direction.)#" )
        .def("IsVClosed",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsVClosed),
             R"#(Is the surface closed in the parametric direction V ? Returns True if for each parameter U the distance between the point P (U, VFirst) and P (U, VLast) is lower or equal to Resolution from gp. VFirst and VLast are the parametric bounds in the V direction.)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsUPeriodic),
             R"#(Is the parametrization of a surface periodic in the direction U ? It is possible only if the surface is closed in this parametric direction and if the following relation is satisfied : for each parameter V the distance between the point P (U, V) and the point P (U + T, V) is lower or equal to Resolution from package gp. T is the parametric period and must be a constant.)#" )
        .def("UPeriod",
             (Standard_Real (GeomPlate_Surface::*)() const) static_cast<Standard_Real (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::UPeriod),
             R"#(returns the Uperiod. raises if the surface is not uperiodic.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsVPeriodic),
             R"#(Is the parametrization of a surface periodic in the direction U ? It is possible only if the surface is closed in this parametric direction and if the following relation is satisfied : for each parameter V the distance between the point P (U, V) and the point P (U + T, V) is lower or equal to Resolution from package gp. T is the parametric period and must be a constant.)#" )
        .def("VPeriod",
             (Standard_Real (GeomPlate_Surface::*)() const) static_cast<Standard_Real (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::VPeriod),
             R"#(returns the Vperiod. raises if the surface is not vperiodic.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::UIso),
             R"#(Computes the U isoparametric curve.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::VIso),
             R"#(Computes the V isoparametric curve.)#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (GeomPlate_Surface::*)() const) static_cast<GeomAbs_Shape (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::Continuity),
             R"#(Global Continuity of the surface in direction U and V : C0 : only geometric continuity, C1 : continuity of the first derivative all along the surface, C2 : continuity of the second derivative all along the surface, C3 : continuity of the third derivative all along the surface, G1 : tangency continuity all along the surface, G2 : curvature continuity all along the surface, CN : the order of continuity is infinite. Example : If the surface is C1 in the V parametric direction and C2 in the U parametric direction Shape = C1.)#" )
        .def("IsCNu",
             (Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const>(&GeomPlate_Surface::IsCNu),
             R"#(Returns the order of continuity of the surface in the U parametric direction. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const>(&GeomPlate_Surface::IsCNv),
             R"#(Returns the order of continuity of the surface in the V parametric direction. Raised if N < 0.)#"  , py::arg("N"))
        .def("D0",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const>(&GeomPlate_Surface::D0),
             R"#(Computes the point of parameter U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_Surface::D1),
             R"#(Computes the point P and the first derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_Surface::D2),
             R"#(Computes the point P, the first and the second derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_Surface::D3),
             R"#(Computes the point P, the first,the second and the third derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Vec (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const>(&GeomPlate_Surface::DN),
             R"#(---Purpose ; Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (GeomPlate_Surface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (GeomPlate_Surface::*)( const gp_Trsf & ) ) static_cast<void (GeomPlate_Surface::*)( const gp_Trsf & ) >(&GeomPlate_Surface::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations. (see class Transformation of the package Geom).)#"  , py::arg("T"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_Surface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("TransformParameters",
             []( GeomPlate_Surface &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
        .def("Bounds",
             []( GeomPlate_Surface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_Surface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomPlate_SequenceOfAij.hxx
// ./opencascade/GeomPlate_BuildAveragePlane.hxx
// ./opencascade/GeomPlate_MakeApprox.hxx
// ./opencascade/GeomPlate_PointConstraint.hxx
// ./opencascade/GeomPlate_Surface.hxx
// ./opencascade/GeomPlate_HSequenceOfPointConstraint.hxx
// ./opencascade/GeomPlate_BuildPlateSurface.hxx
// ./opencascade/GeomPlate_SequenceOfPointConstraint.hxx
// ./opencascade/GeomPlate_Array1OfHCurve.hxx
// ./opencascade/GeomPlate_HSequenceOfCurveConstraint.hxx
// ./opencascade/GeomPlate_PlateG1Criterion.hxx
// ./opencascade/GeomPlate_PlateG0Criterion.hxx
// ./opencascade/GeomPlate_SequenceOfCurveConstraint.hxx
// ./opencascade/GeomPlate_HArray1OfHCurve.hxx
// ./opencascade/GeomPlate_CurveConstraint.hxx
// ./opencascade/GeomPlate_Aij.hxx
// ./opencascade/GeomPlate_HArray1OfSequenceOfReal.hxx
// ./opencascade/GeomPlate_Array1OfSequenceOfReal.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<GeomPlate_Aij>(m,"GeomPlate_SequenceOfAij");
    register_template_NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> >(m,"GeomPlate_SequenceOfPointConstraint");
    register_template_NCollection_Array1<opencascade::handle<Adaptor3d_HCurve> >(m,"GeomPlate_Array1OfHCurve");
    register_template_NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> >(m,"GeomPlate_SequenceOfCurveConstraint");
    register_template_NCollection_Array1<TColStd_SequenceOfReal>(m,"GeomPlate_Array1OfSequenceOfReal");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
