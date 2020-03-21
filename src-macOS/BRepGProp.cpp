
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <Poly_Triangulation.hxx>
#include <TopLoc_Location.hxx>
#include <BRepGProp_Face.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <GProp_GProps.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_EdgeTool.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_Cinert.hxx>
#include <BRepGProp_Sinert.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp_VinertGK.hxx>
#include <BRepGProp_UFunction.hxx>
#include <BRepGProp_TFunction.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>

// module includes
#include <BRepGProp.hxx>
#include <BRepGProp_Cinert.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_EdgeTool.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_MeshCinert.hxx>
#include <BRepGProp_MeshProps.hxx>
#include <BRepGProp_Sinert.hxx>
#include <BRepGProp_TFunction.hxx>
#include <BRepGProp_UFunction.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp_VinertGK.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepGProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepGProp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepGProp , shared_ptr<BRepGProp>>(m,"BRepGProp");

    static_cast<py::class_<BRepGProp , shared_ptr<BRepGProp> >>(m.attr("BRepGProp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Cinert , shared_ptr<BRepGProp_Cinert> , GProp_GProps>>(m.attr("BRepGProp_Cinert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Domain , shared_ptr<BRepGProp_Domain> >>(m.attr("BRepGProp_Domain"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepGProp_Domain::*)( const TopoDS_Face & ) ) static_cast<void (BRepGProp_Domain::*)( const TopoDS_Face & ) >(&BRepGProp_Domain::Init),
             R"#(Initializes the domain with the face.)#"  , py::arg("F"))
        .def("More",
             (Standard_Boolean (BRepGProp_Domain::*)() ) static_cast<Standard_Boolean (BRepGProp_Domain::*)() >(&BRepGProp_Domain::More),
             R"#(Returns True if there is another arc of curve in the list.)#" )
        .def("Init",
             (void (BRepGProp_Domain::*)() ) static_cast<void (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Init),
             R"#(Initializes the exploration with the face already set.)#" )
        .def("Value",
             (const TopoDS_Edge & (BRepGProp_Domain::*)() ) static_cast<const TopoDS_Edge & (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Value),
             R"#(Returns the current edge.)#" )
        .def("Init",
             (void (BRepGProp_Domain::*)( const TopoDS_Face & ) ) static_cast<void (BRepGProp_Domain::*)( const TopoDS_Face & ) >(&BRepGProp_Domain::Init),
             R"#(Initializes the domain with the face.)#"  , py::arg("F"))
        .def("More",
             (Standard_Boolean (BRepGProp_Domain::*)() ) static_cast<Standard_Boolean (BRepGProp_Domain::*)() >(&BRepGProp_Domain::More),
             R"#(Returns True if there is another arc of curve in the list.)#" )
        .def("Init",
             (void (BRepGProp_Domain::*)() ) static_cast<void (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Init),
             R"#(Initializes the exploration with the face already set.)#" )
        .def("Value",
             (const TopoDS_Edge & (BRepGProp_Domain::*)() ) static_cast<const TopoDS_Edge & (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Value),
             R"#(Returns the current edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepGProp_EdgeTool , shared_ptr<BRepGProp_EdgeTool>>(m,"BRepGProp_EdgeTool");

    static_cast<py::class_<BRepGProp_EdgeTool , shared_ptr<BRepGProp_EdgeTool> >>(m.attr("BRepGProp_EdgeTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Face , shared_ptr<BRepGProp_Face> >>(m.attr("BRepGProp_Face"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("IsUseSpan")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Face &,const Standard_Boolean >()  , py::arg("F"),  py::arg("IsUseSpan")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("NaturalRestriction",
             (Standard_Boolean (BRepGProp_Face::*)() const) static_cast<Standard_Boolean (BRepGProp_Face::*)() const>(&BRepGProp_Face::NaturalRestriction),
             R"#(Returns Standard_True if the face is not trimmed.)#" )
        .def("GetFace",
             (const TopoDS_Face & (BRepGProp_Face::*)() const) static_cast<const TopoDS_Face & (BRepGProp_Face::*)() const>(&BRepGProp_Face::GetFace),
             R"#(Returns the TopoDS face.)#" )
        .def("Value2d",
             (gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const>(&BRepGProp_Face::Value2d),
             R"#(Returns the value of the boundary curve of the face.)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::FirstParameter),
             R"#(Returns the parametric value of the start point of the current arc of curve.)#" )
        .def("LastParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::LastParameter),
             R"#(Returns the parametric value of the end point of the current arc of curve.)#" )
        .def("D12d",
             (void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&BRepGProp_Face::D12d),
             R"#(Returns the point of parameter U and the first derivative at this point of a boundary curve.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("NaturalRestriction",
             (Standard_Boolean (BRepGProp_Face::*)() const) static_cast<Standard_Boolean (BRepGProp_Face::*)() const>(&BRepGProp_Face::NaturalRestriction),
             R"#(Returns Standard_True if the face is not trimmed.)#" )
        .def("GetFace",
             (const TopoDS_Face & (BRepGProp_Face::*)() const) static_cast<const TopoDS_Face & (BRepGProp_Face::*)() const>(&BRepGProp_Face::GetFace),
             R"#(Returns the TopoDS face.)#" )
        .def("Value2d",
             (gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const>(&BRepGProp_Face::Value2d),
             R"#(Returns the value of the boundary curve of the face.)#"  , py::arg("U"))
        .def("D12d",
             (void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&BRepGProp_Face::D12d),
             R"#(Returns the point of parameter U and the first derivative at this point of a boundary curve.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("FirstParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::FirstParameter),
             R"#(Returns the parametric value of the start point of the current arc of curve.)#" )
        .def("LastParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::LastParameter),
             R"#(Returns the parametric value of the end point of the current arc of curve.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_MeshCinert , shared_ptr<BRepGProp_MeshCinert> , GProp_GProps>>(m.attr("BRepGProp_MeshCinert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_MeshProps , shared_ptr<BRepGProp_MeshProps> , GProp_GProps>>(m.attr("BRepGProp_MeshProps"))
    // constructors
        .def(py::init< const BRepGProp_MeshProps::BRepGProp_MeshObjType >()  , py::arg("theType") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_MeshProps::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_MeshProps::*)( const gp_Pnt & ) >(&BRepGProp_MeshProps::SetLocation),
             R"#(Sets the point relative which the calculation is to be done)#"  , py::arg("theLocation"))
        .def("GetMeshObjType",
             (BRepGProp_MeshProps::BRepGProp_MeshObjType (BRepGProp_MeshProps::*)() const) static_cast<BRepGProp_MeshProps::BRepGProp_MeshObjType (BRepGProp_MeshProps::*)() const>(&BRepGProp_MeshProps::GetMeshObjType),
             R"#(Get type of mesh object)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Sinert , shared_ptr<BRepGProp_Sinert> , GProp_GProps>>(m.attr("BRepGProp_Sinert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_TFunction , shared_ptr<BRepGProp_TFunction> , math_Function>>(m.attr("BRepGProp_TFunction"))
    // constructors
    // custom constructors
    // methods
        .def("SetNbKronrodPoints",
             (void (BRepGProp_TFunction::*)( const Standard_Integer ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Integer ) >(&BRepGProp_TFunction::SetNbKronrodPoints),
             R"#(Setting the expected number of Kronrod points for the outer integral computation. This number is required for computation of a value of tolerance for inner integral computation. After GetStateNumber method call, this number is recomputed by the same law as in math_KronrodSingleIntegration, i.e. next number of points is equal to the current number plus a square root of the current number. If the law in math_KronrodSingleIntegration is changed, the modification algo should be modified accordingly.)#"  , py::arg("theNbPoints"))
        .def("SetValueType",
             (void (BRepGProp_TFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_TFunction::*)( const GProp_ValueType ) >(&BRepGProp_TFunction::SetValueType),
             R"#(Setting the type of the value to be returned. This parameter is directly passed to the UFunction.)#"  , py::arg("aType"))
        .def("SetTolerance",
             (void (BRepGProp_TFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Real ) >(&BRepGProp_TFunction::SetTolerance),
             R"#(Setting the tolerance for inner integration)#"  , py::arg("aTol"))
        .def("ErrorReached",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::ErrorReached),
             R"#(Returns the relative reached error of all values computation since the last call of GetStateNumber method.)#" )
        .def("AbsolutError",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::AbsolutError),
             R"#(Returns the absolut reached error of all values computation since the last call of GetStateNumber method.)#" )
        .def("Value",
             (Standard_Boolean (BRepGProp_TFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (BRepGProp_TFunction::*)( const Standard_Real , Standard_Real & ) >(&BRepGProp_TFunction::Value),
             R"#(Returns a value of the function. The value represents an integral of UFunction. It is computed with the predefined tolerance using the adaptive Gauss-Kronrod method.)#"  , py::arg("X"),  py::arg("F"))
        .def("GetStateNumber",
             (Standard_Integer (BRepGProp_TFunction::*)() ) static_cast<Standard_Integer (BRepGProp_TFunction::*)() >(&BRepGProp_TFunction::GetStateNumber),
             R"#(Redefined method. Remembers the error reached during computation of integral values since the object creation or the last call of GetStateNumber. It is invoked in each algorithm from the package math. Particularly in the algorithm math_KronrodSingleIntegration that is used to compute the integral of TFunction.)#" )
        .def("SetNbKronrodPoints",
             (void (BRepGProp_TFunction::*)( const Standard_Integer ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Integer ) >(&BRepGProp_TFunction::SetNbKronrodPoints),
             R"#(Setting the expected number of Kronrod points for the outer integral computation. This number is required for computation of a value of tolerance for inner integral computation. After GetStateNumber method call, this number is recomputed by the same law as in math_KronrodSingleIntegration, i.e. next number of points is equal to the current number plus a square root of the current number. If the law in math_KronrodSingleIntegration is changed, the modification algo should be modified accordingly.)#"  , py::arg("theNbPoints"))
        .def("SetValueType",
             (void (BRepGProp_TFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_TFunction::*)( const GProp_ValueType ) >(&BRepGProp_TFunction::SetValueType),
             R"#(Setting the type of the value to be returned. This parameter is directly passed to the UFunction.)#"  , py::arg("theType"))
        .def("SetTolerance",
             (void (BRepGProp_TFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Real ) >(&BRepGProp_TFunction::SetTolerance),
             R"#(Setting the tolerance for inner integration)#"  , py::arg("theTolerance"))
        .def("ErrorReached",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::ErrorReached),
             R"#(Returns the relative reached error of all values computation since the last call of GetStateNumber method.)#" )
        .def("AbsolutError",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::AbsolutError),
             R"#(Returns the absolut reached error of all values computation since the last call of GetStateNumber method.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_UFunction , shared_ptr<BRepGProp_UFunction> , math_Function>>(m.attr("BRepGProp_UFunction"))
    // constructors
    // custom constructors
    // methods
        .def("SetValueType",
             (void (BRepGProp_UFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_UFunction::*)( const GProp_ValueType ) >(&BRepGProp_UFunction::SetValueType),
             R"#(Setting the type of the value to be returned.)#"  , py::arg("theType"))
        .def("SetVParam",
             (void (BRepGProp_UFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_UFunction::*)( const Standard_Real ) >(&BRepGProp_UFunction::SetVParam),
             R"#(Setting the V parameter that is constant during the integral computation.)#"  , py::arg("theVParam"))
        .def("Value",
             (Standard_Boolean (BRepGProp_UFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (BRepGProp_UFunction::*)( const Standard_Real , Standard_Real & ) >(&BRepGProp_UFunction::Value),
             R"#(Returns a value of the function.)#"  , py::arg("X"),  py::arg("F"))
        .def("SetValueType",
             (void (BRepGProp_UFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_UFunction::*)( const GProp_ValueType ) >(&BRepGProp_UFunction::SetValueType),
             R"#(Setting the type of the value to be returned.)#"  , py::arg("theType"))
        .def("SetVParam",
             (void (BRepGProp_UFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_UFunction::*)( const Standard_Real ) >(&BRepGProp_UFunction::SetVParam),
             R"#(Setting the V parameter that is constant during the integral computation.)#"  , py::arg("theVParam"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Vinert , shared_ptr<BRepGProp_Vinert> , GProp_GProps>>(m.attr("BRepGProp_Vinert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_VinertGK , shared_ptr<BRepGProp_VinertGK> , GProp_GProps>>(m.attr("BRepGProp_VinertGK"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_VinertGK::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_VinertGK::*)( const gp_Pnt & ) >(&BRepGProp_VinertGK::SetLocation),
             R"#(Sets the vertex that delimit 3D closed region of space.)#"  , py::arg("theLocation"))
        .def("GetErrorReached",
             (Standard_Real (BRepGProp_VinertGK::*)() const) static_cast<Standard_Real (BRepGProp_VinertGK::*)() const>(&BRepGProp_VinertGK::GetErrorReached),
             R"#(Returns the relative reached computation error.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepGProp_Face.hxx
// ./opencascade/BRepGProp_TFunction.hxx
// ./opencascade/BRepGProp_MeshCinert.hxx
// ./opencascade/BRepGProp_MeshProps.hxx
// ./opencascade/BRepGProp_Vinert.hxx
// ./opencascade/BRepGProp_UFunction.hxx
// ./opencascade/BRepGProp_VinertGK.hxx
// ./opencascade/BRepGProp_Domain.hxx
// ./opencascade/BRepGProp.hxx
// ./opencascade/BRepGProp_EdgeTool.hxx
// ./opencascade/BRepGProp_Cinert.hxx
// ./opencascade/BRepGProp_Sinert.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
