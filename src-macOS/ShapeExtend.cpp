
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_TypeMismatch.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Message_Msg.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

// module includes
#include <ShapeExtend.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx>
#include <ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx>
#include <ShapeExtend_DataMapOfShapeListOfMsg.hxx>
#include <ShapeExtend_DataMapOfTransientListOfMsg.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_Parametrisation.hxx>
#include <ShapeExtend_Status.hxx>
#include <ShapeExtend_WireData.hxx>

// template related includes
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeExtend(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeExtend"));


//Python trampoline classes
    class Py_ShapeExtend_ComplexCurve : public ShapeExtend_ComplexCurve{
    public:
        using ShapeExtend_ComplexCurve::ShapeExtend_ComplexCurve;


        // public pure virtual
        Standard_Integer NbCurves() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,ShapeExtend_ComplexCurve,NbCurves,) };
        const opencascade::handle<Geom_Curve> & Curve(const Standard_Integer index) const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Geom_Curve> &,ShapeExtend_ComplexCurve,Curve,index) };
        Standard_Integer LocateParameter(const Standard_Real U,Standard_Real & UOut) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,ShapeExtend_ComplexCurve,LocateParameter,U,UOut) };
        Standard_Real LocalToGlobal(const Standard_Integer index,const Standard_Real Ulocal) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,ShapeExtend_ComplexCurve,LocalToGlobal,index,Ulocal) };
        Standard_Real GetScaleFactor(const Standard_Integer ind) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,ShapeExtend_ComplexCurve,GetScaleFactor,ind) };

        void Reverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,Reverse,) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };

        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<ShapeExtend , shared_ptr<ShapeExtend>>(m,"ShapeExtend");

    static_cast<py::class_<ShapeExtend , shared_ptr<ShapeExtend> >>(m.attr("ShapeExtend"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_BasicMsgRegistrator ,opencascade::handle<ShapeExtend_BasicMsgRegistrator> , Standard_Transient>>(m.attr("ShapeExtend_BasicMsgRegistrator"))
    // constructors
    // custom constructors
    // methods
        .def("Send",
             (void (ShapeExtend_BasicMsgRegistrator::*)( const opencascade::handle<Standard_Transient> & , const Message_Msg & , const Message_Gravity ) ) static_cast<void (ShapeExtend_BasicMsgRegistrator::*)( const opencascade::handle<Standard_Transient> & , const Message_Msg & , const Message_Gravity ) >(&ShapeExtend_BasicMsgRegistrator::Send),
             R"#(Sends a message to be attached to the object. Object can be of any type interpreted by redefined MsgRegistrator.)#"  , py::arg("object"),  py::arg("message"),  py::arg("gravity"))
        .def("Send",
             (void (ShapeExtend_BasicMsgRegistrator::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) ) static_cast<void (ShapeExtend_BasicMsgRegistrator::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) >(&ShapeExtend_BasicMsgRegistrator::Send),
             R"#(Sends a message to be attached to the shape.)#"  , py::arg("shape"),  py::arg("message"),  py::arg("gravity"))
        .def("Send",
             (void (ShapeExtend_BasicMsgRegistrator::*)( const Message_Msg & , const Message_Gravity ) ) static_cast<void (ShapeExtend_BasicMsgRegistrator::*)( const Message_Msg & , const Message_Gravity ) >(&ShapeExtend_BasicMsgRegistrator::Send),
             R"#(Calls Send method with Null Transient.)#"  , py::arg("message"),  py::arg("gravity"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_BasicMsgRegistrator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_BasicMsgRegistrator::*)() const>(&ShapeExtend_BasicMsgRegistrator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_BasicMsgRegistrator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_ComplexCurve ,opencascade::handle<ShapeExtend_ComplexCurve>,Py_ShapeExtend_ComplexCurve , Geom_Curve>>(m.attr("ShapeExtend_ComplexCurve"))
    // constructors
    // custom constructors
    // methods
        .def("NbCurves",
             (Standard_Integer (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Integer (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::NbCurves),
             R"#(Returns number of curves)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const>(&ShapeExtend_ComplexCurve::Curve),
             R"#(Returns curve given by its index)#"  , py::arg("index"))
        .def("LocateParameter",
             (Standard_Integer (ShapeExtend_ComplexCurve::*)( const Standard_Real , Standard_Real & ) const) static_cast<Standard_Integer (ShapeExtend_ComplexCurve::*)( const Standard_Real , Standard_Real & ) const>(&ShapeExtend_ComplexCurve::LocateParameter),
             R"#(Returns number of the curve for the given parameter U and local paramete r UOut for the found curve)#"  , py::arg("U"),  py::arg("UOut"))
        .def("LocalToGlobal",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer , const Standard_Real ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer , const Standard_Real ) const>(&ShapeExtend_ComplexCurve::LocalToGlobal),
             R"#(Returns global parameter for the whole curve according to the segment and local parameter on it)#"  , py::arg("index"),  py::arg("Ulocal"))
        .def("Transform",
             (void (ShapeExtend_ComplexCurve::*)( const gp_Trsf & ) ) static_cast<void (ShapeExtend_ComplexCurve::*)( const gp_Trsf & ) >(&ShapeExtend_ComplexCurve::Transform),
             R"#(Applies transformation to each curve)#"  , py::arg("T"))
        .def("ReversedParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real ) const>(&ShapeExtend_ComplexCurve::ReversedParameter),
             R"#(Returns 1 - U)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::FirstParameter),
             R"#(Returns 0)#" )
        .def("LastParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::LastParameter),
             R"#(Returns 1)#" )
        .def("IsClosed",
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::IsClosed),
             R"#(Returns True if the curve is closed)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::IsPeriodic),
             R"#(Returns False)#" )
        .def("Continuity",
             (GeomAbs_Shape (ShapeExtend_ComplexCurve::*)() const) static_cast<GeomAbs_Shape (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::Continuity),
             R"#(Returns GeomAbs_C0)#" )
        .def("IsCN",
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const>(&ShapeExtend_ComplexCurve::IsCN),
             R"#(Returns False if N > 0)#"  , py::arg("N"))
        .def("D0",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & ) const>(&ShapeExtend_ComplexCurve::D0),
             R"#(Returns point at parameter U. Finds appropriate curve and local parameter on it.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&ShapeExtend_ComplexCurve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&ShapeExtend_ComplexCurve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&ShapeExtend_ComplexCurve::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (ShapeExtend_ComplexCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec (ShapeExtend_ComplexCurve::*)( const Standard_Real , const Standard_Integer ) const>(&ShapeExtend_ComplexCurve::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("GetScaleFactor",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const>(&ShapeExtend_ComplexCurve::GetScaleFactor),
             R"#(Returns scale factor for recomputing of deviatives.)#"  , py::arg("ind"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_ComplexCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::DynamicType),
             R"#(None)#" )
        .def("ReversedParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real ) const>(&ShapeExtend_ComplexCurve::ReversedParameter),
             R"#(Returns 1 - U)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::FirstParameter),
             R"#(Returns 0)#" )
        .def("LastParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::LastParameter),
             R"#(Returns 1)#" )
        .def("IsClosed",
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::IsClosed),
             R"#(Returns True if the curve is closed)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::IsPeriodic),
             R"#(Returns False)#" )
        .def("Continuity",
             (GeomAbs_Shape (ShapeExtend_ComplexCurve::*)() const) static_cast<GeomAbs_Shape (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::Continuity),
             R"#(Returns GeomAbs_C0)#" )
        .def("IsCN",
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer ) const>(&ShapeExtend_ComplexCurve::IsCN),
             R"#(Returns False if N > 0)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_ComplexCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_CompositeSurface ,opencascade::handle<ShapeExtend_CompositeSurface> , Geom_Surface>>(m.attr("ShapeExtend_CompositeSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Transform",
             (void (ShapeExtend_CompositeSurface::*)( const gp_Trsf & ) ) static_cast<void (ShapeExtend_CompositeSurface::*)( const gp_Trsf & ) >(&ShapeExtend_CompositeSurface::Transform),
             R"#(Applies transformation to all the patches)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (ShapeExtend_CompositeSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::Copy),
             R"#(Returns a copy of the surface)#" )
        .def("UReverse",
             (void (ShapeExtend_CompositeSurface::*)() ) static_cast<void (ShapeExtend_CompositeSurface::*)() >(&ShapeExtend_CompositeSurface::UReverse),
             R"#(NOT IMPLEMENTED (does nothing))#" )
        .def("UReversedParameter",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const>(&ShapeExtend_CompositeSurface::UReversedParameter),
             R"#(Returns U)#"  , py::arg("U"))
        .def("VReverse",
             (void (ShapeExtend_CompositeSurface::*)() ) static_cast<void (ShapeExtend_CompositeSurface::*)() >(&ShapeExtend_CompositeSurface::VReverse),
             R"#(NOT IMPLEMENTED (does nothing))#" )
        .def("VReversedParameter",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const>(&ShapeExtend_CompositeSurface::VReversedParameter),
             R"#(Returns V)#"  , py::arg("V"))
        .def("IsUClosed",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)() const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::IsUClosed),
             R"#(Returns True if grid is closed in U direction (i.e. connected with Precision::Confusion))#" )
        .def("IsVClosed",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)() const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::IsVClosed),
             R"#(Returns True if grid is closed in V direction (i.e. connected with Precision::Confusion))#" )
        .def("IsUPeriodic",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)() const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::IsUPeriodic),
             R"#(Returns False)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)() const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::IsVPeriodic),
             R"#(Returns False)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const>(&ShapeExtend_CompositeSurface::UIso),
             R"#(NOT IMPLEMENTED (returns Null curve))#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real ) const>(&ShapeExtend_CompositeSurface::VIso),
             R"#(NOT IMPLEMENTED (returns Null curve))#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (ShapeExtend_CompositeSurface::*)() const) static_cast<GeomAbs_Shape (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::Continuity),
             R"#(returns C0)#" )
        .def("IsCNu",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer ) const>(&ShapeExtend_CompositeSurface::IsCNu),
             R"#(returns True if N <=0)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer ) const>(&ShapeExtend_CompositeSurface::IsCNv),
             R"#(returns True if N <=0)#"  , py::arg("N"))
        .def("D0",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const>(&ShapeExtend_CompositeSurface::D0),
             R"#(Computes the point of parameter U,V on the grid.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&ShapeExtend_CompositeSurface::D1),
             R"#(Computes the point P and the first derivatives in the directions U and V at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&ShapeExtend_CompositeSurface::D2),
             R"#(Computes the point P, the first and the second derivatives in the directions U and V at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&ShapeExtend_CompositeSurface::D3),
             R"#(Computes the point P, the first,the second and the third derivatives in the directions U and V at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Vec (ShapeExtend_CompositeSurface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const>(&ShapeExtend_CompositeSurface::DN),
             R"#(Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_CompositeSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( ShapeExtend_CompositeSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds of grid)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_CompositeSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_Explorer , shared_ptr<ShapeExtend_Explorer> >>(m.attr("ShapeExtend_Explorer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_WireData ,opencascade::handle<ShapeExtend_WireData> , Standard_Transient>>(m.attr("ShapeExtend_WireData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_WireData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_WireData::*)() const>(&ShapeExtend_WireData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_WireData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_MsgRegistrator ,opencascade::handle<ShapeExtend_MsgRegistrator> , ShapeExtend_BasicMsgRegistrator>>(m.attr("ShapeExtend_MsgRegistrator"))
    // constructors
    // custom constructors
    // methods
        .def("Send",
             (void (ShapeExtend_MsgRegistrator::*)( const opencascade::handle<Standard_Transient> & , const Message_Msg & , const Message_Gravity ) ) static_cast<void (ShapeExtend_MsgRegistrator::*)( const opencascade::handle<Standard_Transient> & , const Message_Msg & , const Message_Gravity ) >(&ShapeExtend_MsgRegistrator::Send),
             R"#(Sends a message to be attached to the object. If the object is in the map then the message is added to the list, otherwise the object is firstly added to the map.)#"  , py::arg("object"),  py::arg("message"),  py::arg("gravity"))
        .def("Send",
             (void (ShapeExtend_MsgRegistrator::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) ) static_cast<void (ShapeExtend_MsgRegistrator::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) >(&ShapeExtend_MsgRegistrator::Send),
             R"#(Sends a message to be attached to the shape. If the shape is in the map then the message is added to the list, otherwise the shape is firstly added to the map.)#"  , py::arg("shape"),  py::arg("message"),  py::arg("gravity"))
        .def("MapTransient",
             (const ShapeExtend_DataMapOfTransientListOfMsg & (ShapeExtend_MsgRegistrator::*)() const) static_cast<const ShapeExtend_DataMapOfTransientListOfMsg & (ShapeExtend_MsgRegistrator::*)() const>(&ShapeExtend_MsgRegistrator::MapTransient),
             R"#(Returns a Map of objects and message list)#" )
        .def("MapShape",
             (const ShapeExtend_DataMapOfShapeListOfMsg & (ShapeExtend_MsgRegistrator::*)() const) static_cast<const ShapeExtend_DataMapOfShapeListOfMsg & (ShapeExtend_MsgRegistrator::*)() const>(&ShapeExtend_MsgRegistrator::MapShape),
             R"#(Returns a Map of shapes and message list)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_MsgRegistrator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_MsgRegistrator::*)() const>(&ShapeExtend_MsgRegistrator::DynamicType),
             R"#(None)#" )
        .def("MapTransient",
             (const ShapeExtend_DataMapOfTransientListOfMsg & (ShapeExtend_MsgRegistrator::*)() const) static_cast<const ShapeExtend_DataMapOfTransientListOfMsg & (ShapeExtend_MsgRegistrator::*)() const>(&ShapeExtend_MsgRegistrator::MapTransient),
             R"#(Returns a Map of objects and message list)#" )
        .def("MapShape",
             (const ShapeExtend_DataMapOfShapeListOfMsg & (ShapeExtend_MsgRegistrator::*)() const) static_cast<const ShapeExtend_DataMapOfShapeListOfMsg & (ShapeExtend_MsgRegistrator::*)() const>(&ShapeExtend_MsgRegistrator::MapShape),
             R"#(Returns a Map of shapes and message list)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_MsgRegistrator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeExtend_Explorer.hxx
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
// ./opencascade/ShapeExtend_MsgRegistrator.hxx
// ./opencascade/ShapeExtend_Status.hxx
// ./opencascade/ShapeExtend_ComplexCurve.hxx
// ./opencascade/ShapeExtend_BasicMsgRegistrator.hxx
// ./opencascade/ShapeExtend_WireData.hxx
// ./opencascade/ShapeExtend.hxx
// ./opencascade/ShapeExtend_Parametrisation.hxx
// ./opencascade/ShapeExtend_CompositeSurface.hxx
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<opencascade::handle<Standard_Transient>, Message_ListOfMsg, TColStd_MapTransientHasher>(m,"ShapeExtend_DataMapOfTransientListOfMsg");
    register_template_NCollection_DataMap<TopoDS_Shape, Message_ListOfMsg, TopTools_ShapeMapHasher>(m,"ShapeExtend_DataMapOfShapeListOfMsg");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
