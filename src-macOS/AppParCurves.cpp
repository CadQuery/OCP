
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <math_Matrix.hxx>
#include <AppParCurves_MultiPoint.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_ConstraintCouple.hxx>

// module includes
#include <AppParCurves.hxx>
#include <AppParCurves_Array1OfConstraintCouple.hxx>
#include <AppParCurves_Array1OfMultiBSpCurve.hxx>
#include <AppParCurves_Array1OfMultiCurve.hxx>
#include <AppParCurves_Array1OfMultiPoint.hxx>
#include <AppParCurves_Constraint.hxx>
#include <AppParCurves_ConstraintCouple.hxx>
#include <AppParCurves_HArray1OfConstraintCouple.hxx>
#include <AppParCurves_HArray1OfMultiBSpCurve.hxx>
#include <AppParCurves_HArray1OfMultiCurve.hxx>
#include <AppParCurves_HArray1OfMultiPoint.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppParCurves_MultiPoint.hxx>
#include <AppParCurves_SequenceOfMultiBSpCurve.hxx>
#include <AppParCurves_SequenceOfMultiCurve.hxx>

// template related includes
// ./opencascade/AppParCurves_SequenceOfMultiCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_SequenceOfMultiBSpCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfConstraintCouple.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiBSpCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiCurve.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppParCurves(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AppParCurves"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<AppParCurves , shared_ptr<AppParCurves>>(m,"AppParCurves");

    static_cast<py::class_<AppParCurves , shared_ptr<AppParCurves> >>(m.attr("AppParCurves"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_ConstraintCouple , shared_ptr<AppParCurves_ConstraintCouple> >>(m.attr("AppParCurves_ConstraintCouple"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_HArray1OfConstraintCouple ,opencascade::handle<AppParCurves_HArray1OfConstraintCouple> , AppParCurves_Array1OfConstraintCouple, Standard_Transient>>(m.attr("AppParCurves_HArray1OfConstraintCouple"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const AppParCurves_ConstraintCouple & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<AppParCurves_ConstraintCouple> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const AppParCurves_Array1OfConstraintCouple & (AppParCurves_HArray1OfConstraintCouple::*)() const) static_cast<const AppParCurves_Array1OfConstraintCouple & (AppParCurves_HArray1OfConstraintCouple::*)() const>(&AppParCurves_HArray1OfConstraintCouple::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (AppParCurves_Array1OfConstraintCouple & (AppParCurves_HArray1OfConstraintCouple::*)() ) static_cast<AppParCurves_Array1OfConstraintCouple & (AppParCurves_HArray1OfConstraintCouple::*)() >(&AppParCurves_HArray1OfConstraintCouple::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfConstraintCouple::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfConstraintCouple::*)() const>(&AppParCurves_HArray1OfConstraintCouple::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppParCurves_HArray1OfConstraintCouple::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppParCurves_HArray1OfConstraintCouple::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_HArray1OfMultiBSpCurve ,opencascade::handle<AppParCurves_HArray1OfMultiBSpCurve> , AppParCurves_Array1OfMultiBSpCurve, Standard_Transient>>(m.attr("AppParCurves_HArray1OfMultiBSpCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const AppParCurves_MultiBSpCurve & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<AppParCurves_MultiBSpCurve> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const AppParCurves_Array1OfMultiBSpCurve & (AppParCurves_HArray1OfMultiBSpCurve::*)() const) static_cast<const AppParCurves_Array1OfMultiBSpCurve & (AppParCurves_HArray1OfMultiBSpCurve::*)() const>(&AppParCurves_HArray1OfMultiBSpCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (AppParCurves_Array1OfMultiBSpCurve & (AppParCurves_HArray1OfMultiBSpCurve::*)() ) static_cast<AppParCurves_Array1OfMultiBSpCurve & (AppParCurves_HArray1OfMultiBSpCurve::*)() >(&AppParCurves_HArray1OfMultiBSpCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfMultiBSpCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfMultiBSpCurve::*)() const>(&AppParCurves_HArray1OfMultiBSpCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppParCurves_HArray1OfMultiBSpCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppParCurves_HArray1OfMultiBSpCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_HArray1OfMultiCurve ,opencascade::handle<AppParCurves_HArray1OfMultiCurve> , AppParCurves_Array1OfMultiCurve, Standard_Transient>>(m.attr("AppParCurves_HArray1OfMultiCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const AppParCurves_MultiCurve & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<AppParCurves_MultiCurve> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const AppParCurves_Array1OfMultiCurve & (AppParCurves_HArray1OfMultiCurve::*)() const) static_cast<const AppParCurves_Array1OfMultiCurve & (AppParCurves_HArray1OfMultiCurve::*)() const>(&AppParCurves_HArray1OfMultiCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (AppParCurves_Array1OfMultiCurve & (AppParCurves_HArray1OfMultiCurve::*)() ) static_cast<AppParCurves_Array1OfMultiCurve & (AppParCurves_HArray1OfMultiCurve::*)() >(&AppParCurves_HArray1OfMultiCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfMultiCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfMultiCurve::*)() const>(&AppParCurves_HArray1OfMultiCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppParCurves_HArray1OfMultiCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppParCurves_HArray1OfMultiCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_HArray1OfMultiPoint ,opencascade::handle<AppParCurves_HArray1OfMultiPoint> , AppParCurves_Array1OfMultiPoint, Standard_Transient>>(m.attr("AppParCurves_HArray1OfMultiPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const AppParCurves_MultiPoint & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<AppParCurves_MultiPoint> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const AppParCurves_Array1OfMultiPoint & (AppParCurves_HArray1OfMultiPoint::*)() const) static_cast<const AppParCurves_Array1OfMultiPoint & (AppParCurves_HArray1OfMultiPoint::*)() const>(&AppParCurves_HArray1OfMultiPoint::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (AppParCurves_Array1OfMultiPoint & (AppParCurves_HArray1OfMultiPoint::*)() ) static_cast<AppParCurves_Array1OfMultiPoint & (AppParCurves_HArray1OfMultiPoint::*)() >(&AppParCurves_HArray1OfMultiPoint::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfMultiPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppParCurves_HArray1OfMultiPoint::*)() const>(&AppParCurves_HArray1OfMultiPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppParCurves_HArray1OfMultiPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppParCurves_HArray1OfMultiPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_MultiCurve , shared_ptr<AppParCurves_MultiCurve> >>(m.attr("AppParCurves_MultiCurve"))
    // constructors
    // custom constructors
    // methods
        .def("NbPoles",
             (Standard_Integer (AppParCurves_MultiCurve::*)() const) static_cast<Standard_Integer (AppParCurves_MultiCurve::*)() const>(&AppParCurves_MultiCurve::NbPoles),
             R"#(Returns the number of poles on curves resulting from the approximation of a MultiLine.)#" )
        .def("Degree",
             (Standard_Integer (AppParCurves_MultiCurve::*)() const) static_cast<Standard_Integer (AppParCurves_MultiCurve::*)() const>(&AppParCurves_MultiCurve::Degree),
             R"#(returns the degree of the curves.)#" )
        .def("Value",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & ) const>(&AppParCurves_MultiCurve::Value),
             R"#(returns the value of the point with a parameter U on the Bezier curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 2d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"))
        .def("Value",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & ) const>(&AppParCurves_MultiCurve::Value),
             R"#(returns the value of the point with a parameter U on the Bezier curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 3d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"))
        .def("D1",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&AppParCurves_MultiCurve::D1),
             R"#(returns the value of the point with a parameter U on the Bezier curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 3d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"))
        .def("D1",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&AppParCurves_MultiCurve::D1),
             R"#(returns the value of the point with a parameter U on the Bezier curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 2d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"))
        .def("D2",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&AppParCurves_MultiCurve::D2),
             R"#(returns the value of the point with a parameter U on the Bezier curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 3d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"),  py::arg("V2"))
        .def("D2",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&AppParCurves_MultiCurve::D2),
             R"#(returns the value of the point with a parameter U on the Bezier curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 2d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"),  py::arg("V2"))
        .def("Dump",
             (void (AppParCurves_MultiCurve::*)( std::ostream & ) const) static_cast<void (AppParCurves_MultiCurve::*)( std::ostream & ) const>(&AppParCurves_MultiCurve::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_MultiPoint , shared_ptr<AppParCurves_MultiPoint> >>(m.attr("AppParCurves_MultiPoint"))
    // constructors
    // custom constructors
    // methods
        .def("Dimension",
             (Standard_Integer (AppParCurves_MultiPoint::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)( const Standard_Integer ) const>(&AppParCurves_MultiPoint::Dimension),
             R"#(returns the dimension of the point of range Index. An exception is raised if Index <0 or Index > NbCurves.)#"  , py::arg("Index"))
        .def("NbPoints",
             (Standard_Integer (AppParCurves_MultiPoint::*)() const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)() const>(&AppParCurves_MultiPoint::NbPoints),
             R"#(returns the number of points of dimension 3D.)#" )
        .def("NbPoints2d",
             (Standard_Integer (AppParCurves_MultiPoint::*)() const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)() const>(&AppParCurves_MultiPoint::NbPoints2d),
             R"#(returns the number of points of dimension 2D.)#" )
        .def("Dump",
             (void (AppParCurves_MultiPoint::*)( std::ostream & ) const) static_cast<void (AppParCurves_MultiPoint::*)( std::ostream & ) const>(&AppParCurves_MultiPoint::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("NbPoints",
             (Standard_Integer (AppParCurves_MultiPoint::*)() const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)() const>(&AppParCurves_MultiPoint::NbPoints),
             R"#(returns the number of points of dimension 3D.)#" )
        .def("NbPoints2d",
             (Standard_Integer (AppParCurves_MultiPoint::*)() const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)() const>(&AppParCurves_MultiPoint::NbPoints2d),
             R"#(returns the number of points of dimension 2D.)#" )
        .def("Dimension",
             (Standard_Integer (AppParCurves_MultiPoint::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)( const Standard_Integer ) const>(&AppParCurves_MultiPoint::Dimension),
             R"#(returns the dimension of the point of range Index. An exception is raised if Index <0 or Index > NbCurves.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_MultiBSpCurve , shared_ptr<AppParCurves_MultiBSpCurve> , AppParCurves_MultiCurve>>(m.attr("AppParCurves_MultiBSpCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Degree",
             (Standard_Integer (AppParCurves_MultiBSpCurve::*)() const) static_cast<Standard_Integer (AppParCurves_MultiBSpCurve::*)() const>(&AppParCurves_MultiBSpCurve::Degree),
             R"#(returns the degree of the curve(s).)#" )
        .def("Value",
             (void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & ) const) static_cast<void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & ) const>(&AppParCurves_MultiBSpCurve::Value),
             R"#(returns the value of the point with a parameter U on the BSpline curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 2d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"))
        .def("Value",
             (void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & ) const) static_cast<void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & ) const>(&AppParCurves_MultiBSpCurve::Value),
             R"#(returns the value of the point with a parameter U on the BSpline curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 3d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"))
        .def("D1",
             (void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&AppParCurves_MultiBSpCurve::D1),
             R"#(returns the value of the point with a parameter U on the BSpline curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 3d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"))
        .def("D1",
             (void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&AppParCurves_MultiBSpCurve::D1),
             R"#(returns the value of the point with a parameter U on the BSpline curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 2d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"))
        .def("D2",
             (void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&AppParCurves_MultiBSpCurve::D2),
             R"#(returns the value of the point with a parameter U on the BSpline curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 3d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"),  py::arg("V2"))
        .def("D2",
             (void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (AppParCurves_MultiBSpCurve::*)( const Standard_Integer , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&AppParCurves_MultiBSpCurve::D2),
             R"#(returns the value of the point with a parameter U on the BSpline curve number CuIndex. An exception is raised if CuIndex <0 or > NbCurves. An exception is raised if the curve dimension is 2d.)#"  , py::arg("CuIndex"),  py::arg("U"),  py::arg("Pt"),  py::arg("V1"),  py::arg("V2"))
        .def("Dump",
             (void (AppParCurves_MultiBSpCurve::*)( std::ostream & ) const) static_cast<void (AppParCurves_MultiBSpCurve::*)( std::ostream & ) const>(&AppParCurves_MultiBSpCurve::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/AppParCurves_MultiCurve.hxx
// ./opencascade/AppParCurves_MultiBSpCurve.hxx
// ./opencascade/AppParCurves_ConstraintCouple.hxx
// ./opencascade/AppParCurves_HArray1OfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_HArray1OfConstraintCouple.hxx
// ./opencascade/AppParCurves_SequenceOfMultiCurve.hxx
// ./opencascade/AppParCurves_HArray1OfMultiPoint.hxx
// ./opencascade/AppParCurves_SequenceOfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_Constraint.hxx
// ./opencascade/AppParCurves_Array1OfMultiPoint.hxx
// ./opencascade/AppParCurves_Array1OfConstraintCouple.hxx
// ./opencascade/AppParCurves_HArray1OfMultiCurve.hxx
// ./opencascade/AppParCurves.hxx
// ./opencascade/AppParCurves_Array1OfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_MultiPoint.hxx
// ./opencascade/AppParCurves_Array1OfMultiCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<AppParCurves_MultiCurve>(m,"AppParCurves_SequenceOfMultiCurve");
    register_template_NCollection_Sequence<AppParCurves_MultiBSpCurve>(m,"AppParCurves_SequenceOfMultiBSpCurve");
    register_template_NCollection_Array1<AppParCurves_MultiPoint>(m,"AppParCurves_Array1OfMultiPoint");
    register_template_NCollection_Array1<AppParCurves_ConstraintCouple>(m,"AppParCurves_Array1OfConstraintCouple");
    register_template_NCollection_Array1<AppParCurves_MultiBSpCurve>(m,"AppParCurves_Array1OfMultiBSpCurve");
    register_template_NCollection_Array1<AppParCurves_MultiCurve>(m,"AppParCurves_Array1OfMultiCurve");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
