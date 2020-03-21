
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
// ./opencascade/AppParCurves_Array1OfConstraintCouple.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_SequenceOfMultiBSpCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiBSpCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_SequenceOfMultiCurve.hxx
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
        .def_static("BernsteinMatrix_s",
                    (void (*)( const Standard_Integer , const math_Vector & , math_Matrix & ) ) static_cast<void (*)( const Standard_Integer , const math_Vector & , math_Matrix & ) >(&AppParCurves::BernsteinMatrix),
                    R"#(None)#"  , py::arg("NbPoles"),  py::arg("U"),  py::arg("A"))
        .def_static("Bernstein_s",
                    (void (*)( const Standard_Integer , const math_Vector & , math_Matrix & , math_Matrix & ) ) static_cast<void (*)( const Standard_Integer , const math_Vector & , math_Matrix & , math_Matrix & ) >(&AppParCurves::Bernstein),
                    R"#(None)#"  , py::arg("NbPoles"),  py::arg("U"),  py::arg("A"),  py::arg("DA"))
        .def_static("SecondDerivativeBernstein_s",
                    (void (*)( const Standard_Real , math_Vector & ) ) static_cast<void (*)( const Standard_Real , math_Vector & ) >(&AppParCurves::SecondDerivativeBernstein),
                    R"#(None)#"  , py::arg("U"),  py::arg("DDA"))
        .def_static("SplineFunction_s",
                    (void (*)( const Standard_Integer , const Standard_Integer , const math_Vector & , const math_Vector & , math_Matrix & , math_Matrix & , math_IntegerVector & ) ) static_cast<void (*)( const Standard_Integer , const Standard_Integer , const math_Vector & , const math_Vector & , math_Matrix & , math_Matrix & , math_IntegerVector & ) >(&AppParCurves::SplineFunction),
                    R"#(None)#"  , py::arg("NbPoles"),  py::arg("Degree"),  py::arg("Parameters"),  py::arg("FlatKnots"),  py::arg("A"),  py::arg("DA"),  py::arg("Index"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppParCurves_ConstraintCouple , shared_ptr<AppParCurves_ConstraintCouple> >>(m.attr("AppParCurves_ConstraintCouple"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const AppParCurves_Constraint >()  , py::arg("TheIndex"),  py::arg("Cons") )
    // custom constructors
    // methods
        .def("Index",
             (Standard_Integer (AppParCurves_ConstraintCouple::*)() const) static_cast<Standard_Integer (AppParCurves_ConstraintCouple::*)() const>(&AppParCurves_ConstraintCouple::Index),
             R"#(returns the index of the constraint object.)#" )
        .def("Constraint",
             (AppParCurves_Constraint (AppParCurves_ConstraintCouple::*)() const) static_cast<AppParCurves_Constraint (AppParCurves_ConstraintCouple::*)() const>(&AppParCurves_ConstraintCouple::Constraint),
             R"#(returns the constraint of the object.)#" )
        .def("SetIndex",
             (void (AppParCurves_ConstraintCouple::*)( const Standard_Integer ) ) static_cast<void (AppParCurves_ConstraintCouple::*)( const Standard_Integer ) >(&AppParCurves_ConstraintCouple::SetIndex),
             R"#(Changes the index of the constraint object.)#"  , py::arg("TheIndex"))
        .def("SetConstraint",
             (void (AppParCurves_ConstraintCouple::*)( const AppParCurves_Constraint ) ) static_cast<void (AppParCurves_ConstraintCouple::*)( const AppParCurves_Constraint ) >(&AppParCurves_ConstraintCouple::SetConstraint),
             R"#(Changes the constraint of the object.)#"  , py::arg("Cons"))
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
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("NbPol") )
        .def(py::init<  const NCollection_Array1<AppParCurves_MultiPoint> & >()  , py::arg("tabMU") )
    // custom constructors
    // methods
        .def("SetNbPoles",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer ) ) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer ) >(&AppParCurves_MultiCurve::SetNbPoles),
             R"#(The number of poles of the MultiCurve will be set to <nbPoles>.)#"  , py::arg("nbPoles"))
        .def("SetValue",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const AppParCurves_MultiPoint & ) ) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const AppParCurves_MultiPoint & ) >(&AppParCurves_MultiCurve::SetValue),
             R"#(sets the MultiPoint of range Index to the value <MPoint>. An exception is raised if Index <0 or Index >NbMPoint.)#"  , py::arg("Index"),  py::arg("MPoint"))
        .def("NbCurves",
             (Standard_Integer (AppParCurves_MultiCurve::*)() const) static_cast<Standard_Integer (AppParCurves_MultiCurve::*)() const>(&AppParCurves_MultiCurve::NbCurves),
             R"#(Returns the number of curves resulting from the approximation of a MultiLine.)#" )
        .def("NbPoles",
             (Standard_Integer (AppParCurves_MultiCurve::*)() const) static_cast<Standard_Integer (AppParCurves_MultiCurve::*)() const>(&AppParCurves_MultiCurve::NbPoles),
             R"#(Returns the number of poles on curves resulting from the approximation of a MultiLine.)#" )
        .def("Degree",
             (Standard_Integer (AppParCurves_MultiCurve::*)() const) static_cast<Standard_Integer (AppParCurves_MultiCurve::*)() const>(&AppParCurves_MultiCurve::Degree),
             R"#(returns the degree of the curves.)#" )
        .def("Dimension",
             (Standard_Integer (AppParCurves_MultiCurve::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AppParCurves_MultiCurve::*)( const Standard_Integer ) const>(&AppParCurves_MultiCurve::Dimension),
             R"#(returns the dimension of the CuIndex curve. An exception is raised if CuIndex<0 or CuIndex>NbCurves.)#"  , py::arg("CuIndex"))
        .def("Curve",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & ) const>(&AppParCurves_MultiCurve::Curve),
             R"#(returns the Pole array of the curve of range CuIndex. An exception is raised if the dimension of the curve is 2d.)#"  , py::arg("CuIndex"),  py::arg("TabPnt"))
        .def("Curve",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) const) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) const>(&AppParCurves_MultiCurve::Curve),
             R"#(returns the Pole array of the curve of range CuIndex. An exception is raised if the dimension of the curve is 3d.)#"  , py::arg("CuIndex"),  py::arg("TabPnt"))
        .def("Value",
             (const AppParCurves_MultiPoint & (AppParCurves_MultiCurve::*)( const Standard_Integer ) const) static_cast<const AppParCurves_MultiPoint & (AppParCurves_MultiCurve::*)( const Standard_Integer ) const>(&AppParCurves_MultiCurve::Value),
             R"#(returns the Index MultiPoint. An exception is raised if Index <0 or Index >Degree+1.)#"  , py::arg("Index"))
        .def("Pole",
             (const gp_Pnt & (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const gp_Pnt & (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Integer ) const>(&AppParCurves_MultiCurve::Pole),
             R"#(returns the Nieme pole of the CuIndex curve. the curve must be a 3D curve.)#"  , py::arg("CuIndex"),  py::arg("Nieme"))
        .def("Pole2d",
             (const gp_Pnt2d & (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const gp_Pnt2d & (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Integer ) const>(&AppParCurves_MultiCurve::Pole2d),
             R"#(returns the Nieme pole of the CuIndex curve. the curve must be a 2D curve.)#"  , py::arg("CuIndex"),  py::arg("Nieme"))
        .def("Transform",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppParCurves_MultiCurve::Transform),
             R"#(Applies a transformation to the curve of range <CuIndex>. newx = x + dx*oldx newy = y + dy*oldy for all points of the curve. newz = z + dz*oldz)#"  , py::arg("CuIndex"),  py::arg("x"),  py::arg("dx"),  py::arg("y"),  py::arg("dy"),  py::arg("z"),  py::arg("dz"))
        .def("Transform2d",
             (void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppParCurves_MultiCurve::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppParCurves_MultiCurve::Transform2d),
             R"#(Applies a transformation to the Curve of range <CuIndex>. newx = x + dx*oldx newy = y + dy*oldy for all points of the curve.)#"  , py::arg("CuIndex"),  py::arg("x"),  py::arg("dx"),  py::arg("y"),  py::arg("dy"))
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
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("NbPoints"),  py::arg("NbPoints2d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("tabP") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("tabP2d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("tabP"),  py::arg("tabP2d") )
    // custom constructors
    // methods
        .def("SetPoint",
             (void (AppParCurves_MultiPoint::*)( const Standard_Integer , const gp_Pnt & ) ) static_cast<void (AppParCurves_MultiPoint::*)( const Standard_Integer , const gp_Pnt & ) >(&AppParCurves_MultiPoint::SetPoint),
             R"#(the 3d Point of range Index of this MultiPoint is set to <Point>. An exception is raised if Index < 0 or Index > number of 3d Points.)#"  , py::arg("Index"),  py::arg("Point"))
        .def("Point",
             (const gp_Pnt & (AppParCurves_MultiPoint::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (AppParCurves_MultiPoint::*)( const Standard_Integer ) const>(&AppParCurves_MultiPoint::Point),
             R"#(returns the 3d Point of range Index. An exception is raised if Index < 0 or Index < number of 3d Points.)#"  , py::arg("Index"))
        .def("SetPoint2d",
             (void (AppParCurves_MultiPoint::*)( const Standard_Integer , const gp_Pnt2d & ) ) static_cast<void (AppParCurves_MultiPoint::*)( const Standard_Integer , const gp_Pnt2d & ) >(&AppParCurves_MultiPoint::SetPoint2d),
             R"#(The 2d Point of range Index is set to <Point>. An exception is raised if Index > 3d Points or Index > total number of Points.)#"  , py::arg("Index"),  py::arg("Point"))
        .def("Point2d",
             (const gp_Pnt2d & (AppParCurves_MultiPoint::*)( const Standard_Integer ) const) static_cast<const gp_Pnt2d & (AppParCurves_MultiPoint::*)( const Standard_Integer ) const>(&AppParCurves_MultiPoint::Point2d),
             R"#(returns the 2d Point of range Index. An exception is raised if index <= number of 3d Points or Index > total number of Points.)#"  , py::arg("Index"))
        .def("Dimension",
             (Standard_Integer (AppParCurves_MultiPoint::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)( const Standard_Integer ) const>(&AppParCurves_MultiPoint::Dimension),
             R"#(returns the dimension of the point of range Index. An exception is raised if Index <0 or Index > NbCurves.)#"  , py::arg("Index"))
        .def("NbPoints",
             (Standard_Integer (AppParCurves_MultiPoint::*)() const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)() const>(&AppParCurves_MultiPoint::NbPoints),
             R"#(returns the number of points of dimension 3D.)#" )
        .def("NbPoints2d",
             (Standard_Integer (AppParCurves_MultiPoint::*)() const) static_cast<Standard_Integer (AppParCurves_MultiPoint::*)() const>(&AppParCurves_MultiPoint::NbPoints2d),
             R"#(returns the number of points of dimension 2D.)#" )
        .def("Transform",
             (void (AppParCurves_MultiPoint::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppParCurves_MultiPoint::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppParCurves_MultiPoint::Transform),
             R"#(Applies a transformation to the curve of range <CuIndex>. newx = x + dx*oldx newy = y + dy*oldy for all points of the curve. newz = z + dz*oldz)#"  , py::arg("CuIndex"),  py::arg("x"),  py::arg("dx"),  py::arg("y"),  py::arg("dy"),  py::arg("z"),  py::arg("dz"))
        .def("Transform2d",
             (void (AppParCurves_MultiPoint::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppParCurves_MultiPoint::*)( const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppParCurves_MultiPoint::Transform2d),
             R"#(Applies a transformation to the Curve of range <CuIndex>. newx = x + dx*oldx newy = y + dy*oldy for all points of the curve.)#"  , py::arg("CuIndex"),  py::arg("x"),  py::arg("dx"),  py::arg("y"),  py::arg("dy"))
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
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("NbPol") )
        .def(py::init<  const NCollection_Array1<AppParCurves_MultiPoint> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> & >()  , py::arg("tabMU"),  py::arg("Knots"),  py::arg("Mults") )
        .def(py::init< const AppParCurves_MultiCurve &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> & >()  , py::arg("SC"),  py::arg("Knots"),  py::arg("Mults") )
    // custom constructors
    // methods
        .def("SetKnots",
             (void (AppParCurves_MultiBSpCurve::*)(  const NCollection_Array1<Standard_Real> & ) ) static_cast<void (AppParCurves_MultiBSpCurve::*)(  const NCollection_Array1<Standard_Real> & ) >(&AppParCurves_MultiBSpCurve::SetKnots),
             R"#(Knots of the multiBSpCurve are assigned to <theknots>.)#"  , py::arg("theKnots"))
        .def("SetMultiplicities",
             (void (AppParCurves_MultiBSpCurve::*)(  const NCollection_Array1<Standard_Integer> & ) ) static_cast<void (AppParCurves_MultiBSpCurve::*)(  const NCollection_Array1<Standard_Integer> & ) >(&AppParCurves_MultiBSpCurve::SetMultiplicities),
             R"#(Multiplicities of the multiBSpCurve are assigned to <theMults>.)#"  , py::arg("theMults"))
        .def("Knots",
             (const TColStd_Array1OfReal & (AppParCurves_MultiBSpCurve::*)() const) static_cast<const TColStd_Array1OfReal & (AppParCurves_MultiBSpCurve::*)() const>(&AppParCurves_MultiBSpCurve::Knots),
             R"#(Returns an array of Reals containing the multiplicities of curves resulting from the approximation.)#" )
        .def("Multiplicities",
             (const TColStd_Array1OfInteger & (AppParCurves_MultiBSpCurve::*)() const) static_cast<const TColStd_Array1OfInteger & (AppParCurves_MultiBSpCurve::*)() const>(&AppParCurves_MultiBSpCurve::Multiplicities),
             R"#(Returns an array of Reals containing the multiplicities of curves resulting from the approximation.)#" )
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
// ./opencascade/AppParCurves_MultiBSpCurve.hxx
// ./opencascade/AppParCurves_Array1OfConstraintCouple.hxx
// ./opencascade/AppParCurves_SequenceOfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_MultiCurve.hxx
// ./opencascade/AppParCurves_ConstraintCouple.hxx
// ./opencascade/AppParCurves_HArray1OfConstraintCouple.hxx
// ./opencascade/AppParCurves_Array1OfMultiCurve.hxx
// ./opencascade/AppParCurves_HArray1OfMultiCurve.hxx
// ./opencascade/AppParCurves_Array1OfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_HArray1OfMultiPoint.hxx
// ./opencascade/AppParCurves_Array1OfMultiPoint.hxx
// ./opencascade/AppParCurves_SequenceOfMultiCurve.hxx
// ./opencascade/AppParCurves_MultiPoint.hxx
// ./opencascade/AppParCurves.hxx
// ./opencascade/AppParCurves_Constraint.hxx
// ./opencascade/AppParCurves_HArray1OfMultiBSpCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<AppParCurves_ConstraintCouple>(m,"AppParCurves_Array1OfConstraintCouple");
    register_template_NCollection_Sequence<AppParCurves_MultiBSpCurve>(m,"AppParCurves_SequenceOfMultiBSpCurve");
    register_template_NCollection_Array1<AppParCurves_MultiCurve>(m,"AppParCurves_Array1OfMultiCurve");
    register_template_NCollection_Array1<AppParCurves_MultiBSpCurve>(m,"AppParCurves_Array1OfMultiBSpCurve");
    register_template_NCollection_Array1<AppParCurves_MultiPoint>(m,"AppParCurves_Array1OfMultiPoint");
    register_template_NCollection_Sequence<AppParCurves_MultiCurve>(m,"AppParCurves_SequenceOfMultiCurve");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
