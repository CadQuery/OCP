
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Message_Msg.hxx>
#include <TopoDS_Shape.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>

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
#include "NCollection.hxx"
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
#include "NCollection.hxx"


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

    static_cast<py::class_<ShapeExtend , shared_ptr<ShapeExtend>  >>(m.attr("ShapeExtend"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&ShapeExtend::Init),
                    R"#(Inits using of ShapeExtend. Currently, loads messages output by ShapeHealing algorithms.)#" )
        .def_static("EncodeStatus_s",
                    (Standard_Integer (*)( const ShapeExtend_Status  ) ) static_cast<Standard_Integer (*)( const ShapeExtend_Status  ) >(&ShapeExtend::EncodeStatus),
                    R"#(Encodes status (enumeration) to a bit flag)#"  , py::arg("status"))
        .def_static("DecodeStatus_s",
                    (Standard_Boolean (*)( const Standard_Integer ,  const ShapeExtend_Status  ) ) static_cast<Standard_Boolean (*)( const Standard_Integer ,  const ShapeExtend_Status  ) >(&ShapeExtend::DecodeStatus),
                    R"#(Tells if a bit flag contains bit corresponding to enumerated status)#"  , py::arg("flag"),  py::arg("status"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_BasicMsgRegistrator ,opencascade::handle<ShapeExtend_BasicMsgRegistrator>  , Standard_Transient >>(m.attr("ShapeExtend_BasicMsgRegistrator"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Send",
             (void (ShapeExtend_BasicMsgRegistrator::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg & ,  const Message_Gravity  ) ) static_cast<void (ShapeExtend_BasicMsgRegistrator::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg & ,  const Message_Gravity  ) >(&ShapeExtend_BasicMsgRegistrator::Send),
             R"#(Sends a message to be attached to the object. Object can be of any type interpreted by redefined MsgRegistrator.)#"  , py::arg("object"),  py::arg("message"),  py::arg("gravity"))
        .def("Send",
             (void (ShapeExtend_BasicMsgRegistrator::*)( const TopoDS_Shape & ,  const Message_Msg & ,  const Message_Gravity  ) ) static_cast<void (ShapeExtend_BasicMsgRegistrator::*)( const TopoDS_Shape & ,  const Message_Msg & ,  const Message_Gravity  ) >(&ShapeExtend_BasicMsgRegistrator::Send),
             R"#(Sends a message to be attached to the shape.)#"  , py::arg("shape"),  py::arg("message"),  py::arg("gravity"))
        .def("Send",
             (void (ShapeExtend_BasicMsgRegistrator::*)( const Message_Msg & ,  const Message_Gravity  ) ) static_cast<void (ShapeExtend_BasicMsgRegistrator::*)( const Message_Msg & ,  const Message_Gravity  ) >(&ShapeExtend_BasicMsgRegistrator::Send),
             R"#(Calls Send method with Null Transient.)#"  , py::arg("message"),  py::arg("gravity"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_BasicMsgRegistrator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_BasicMsgRegistrator::*)() const>(&ShapeExtend_BasicMsgRegistrator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_BasicMsgRegistrator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeExtend_BasicMsgRegistrator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_ComplexCurve ,opencascade::handle<ShapeExtend_ComplexCurve> ,Py_ShapeExtend_ComplexCurve , Geom_Curve >>(m.attr("ShapeExtend_ComplexCurve"))
    // constructors
    // custom constructors
    // methods
        .def("NbCurves",
             (Standard_Integer (ShapeExtend_ComplexCurve::*)() const) static_cast<Standard_Integer (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::NbCurves),
             R"#(Returns number of curves)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Geom_Curve> & (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const>(&ShapeExtend_ComplexCurve::Curve),
             R"#(Returns curve given by its index)#"  , py::arg("index"))
        .def("LocateParameter",
             (Standard_Integer (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  Standard_Real &  ) const) static_cast<Standard_Integer (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  Standard_Real &  ) const>(&ShapeExtend_ComplexCurve::LocateParameter),
             R"#(Returns number of the curve for the given parameter U and local paramete r UOut for the found curve)#"  , py::arg("U"),  py::arg("UOut"))
        .def("LocalToGlobal",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer ,  const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer ,  const Standard_Real  ) const>(&ShapeExtend_ComplexCurve::LocalToGlobal),
             R"#(Returns global parameter for the whole curve according to the segment and local parameter on it)#"  , py::arg("index"),  py::arg("Ulocal"))
        .def("Transform",
             (void (ShapeExtend_ComplexCurve::*)( const gp_Trsf &  ) ) static_cast<void (ShapeExtend_ComplexCurve::*)( const gp_Trsf &  ) >(&ShapeExtend_ComplexCurve::Transform),
             R"#(Applies transformation to each curve)#"  , py::arg("T"))
        .def("ReversedParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real  ) const>(&ShapeExtend_ComplexCurve::ReversedParameter),
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
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const>(&ShapeExtend_ComplexCurve::IsCN),
             R"#(Returns False if N > 0)#"  , py::arg("N"))
        .def("D0",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&ShapeExtend_ComplexCurve::D0),
             R"#(Returns point at parameter U. Finds appropriate curve and local parameter on it.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&ShapeExtend_ComplexCurve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&ShapeExtend_ComplexCurve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&ShapeExtend_ComplexCurve::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (ShapeExtend_ComplexCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&ShapeExtend_ComplexCurve::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("GetScaleFactor",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const>(&ShapeExtend_ComplexCurve::GetScaleFactor),
             R"#(Returns scale factor for recomputing of deviatives.)#"  , py::arg("ind"))
        .def("CheckConnectivity",
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Real  ) >(&ShapeExtend_ComplexCurve::CheckConnectivity),
             R"#(Checks geometrical connectivity of the curves, including closure (sets fields myClosed))#"  , py::arg("Preci"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_ComplexCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_ComplexCurve::*)() const>(&ShapeExtend_ComplexCurve::DynamicType),
             R"#(None)#" )
        .def("ReversedParameter",
             (Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_ComplexCurve::*)( const Standard_Real  ) const>(&ShapeExtend_ComplexCurve::ReversedParameter),
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
             (Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (ShapeExtend_ComplexCurve::*)( const Standard_Integer  ) const>(&ShapeExtend_ComplexCurve::IsCN),
             R"#(Returns False if N > 0)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_ComplexCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeExtend_ComplexCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_CompositeSurface ,opencascade::handle<ShapeExtend_CompositeSurface>  , Geom_Surface >>(m.attr("ShapeExtend_CompositeSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TColGeom_HArray2OfSurface> &,const ShapeExtend_Parametrisation >()  , py::arg("GridSurf"),  py::arg("param")=static_cast<const ShapeExtend_Parametrisation>(ShapeExtend_Natural) )
        .def(py::init< const opencascade::handle<TColGeom_HArray2OfSurface> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("GridSurf"),  py::arg("UJoints"),  py::arg("VJoints") )
    // custom constructors
    // methods
        .def("Init",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const opencascade::handle<TColGeom_HArray2OfSurface> & ,  const ShapeExtend_Parametrisation  ) ) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const opencascade::handle<TColGeom_HArray2OfSurface> & ,  const ShapeExtend_Parametrisation  ) >(&ShapeExtend_CompositeSurface::Init),
             R"#(Initializes by a grid of surfaces. All the Surfaces of the grid must have geometrical connectivity as stated above. If geometrical connectivity is not satisfied, method returns False. However, class is initialized even in that case.)#"  , py::arg("GridSurf"),  py::arg("param")=static_cast<const ShapeExtend_Parametrisation>(ShapeExtend_Natural))
        .def("Init",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const opencascade::handle<TColGeom_HArray2OfSurface> & ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const opencascade::handle<TColGeom_HArray2OfSurface> & ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> &  ) >(&ShapeExtend_CompositeSurface::Init),
             R"#(Initializes by a grid of surfaces with given global parametrisation defined by UJoints and VJoints arrays, each having langth equal to number of patches in corresponding direction + 1. Global joint values should be sorted in increasing order. All the Surfaces of the grid must have geometrical connectivity as stated above. If geometrical connectivity is not satisfied, method returns False. However, class is initialized even in that case.)#"  , py::arg("GridSurf"),  py::arg("UJoints"),  py::arg("VJoints"))
        .def("NbUPatches",
             (Standard_Integer (ShapeExtend_CompositeSurface::*)() const) static_cast<Standard_Integer (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::NbUPatches),
             R"#(Returns number of patches in U direction.)#" )
        .def("NbVPatches",
             (Standard_Integer (ShapeExtend_CompositeSurface::*)() const) static_cast<Standard_Integer (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::NbVPatches),
             R"#(Returns number of patches in V direction.)#" )
        .def("Patch",
             (const opencascade::handle<Geom_Surface> & (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const opencascade::handle<Geom_Surface> & (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&ShapeExtend_CompositeSurface::Patch),
             R"#(Returns one surface patch)#"  , py::arg("i"),  py::arg("j"))
        .def("Patches",
             (const opencascade::handle<TColGeom_HArray2OfSurface> & (ShapeExtend_CompositeSurface::*)() const) static_cast<const opencascade::handle<TColGeom_HArray2OfSurface> & (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::Patches),
             R"#(Returns grid of surfaces)#" )
        .def("UJointValues",
             (opencascade::handle<TColStd_HArray1OfReal> (ShapeExtend_CompositeSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::UJointValues),
             R"#(Returns the array of U values corresponding to joint points between patches as well as to start and end points, which define global parametrisation of the surface)#" )
        .def("VJointValues",
             (opencascade::handle<TColStd_HArray1OfReal> (ShapeExtend_CompositeSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::VJointValues),
             R"#(Returns the array of V values corresponding to joint points between patches as well as to start and end points, which define global parametrisation of the surface)#" )
        .def("UJointValue",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const>(&ShapeExtend_CompositeSurface::UJointValue),
             R"#(Returns i-th joint value in U direction (1-st is global Umin, (NbUPatches()+1)-th is global Umax on the composite surface))#"  , py::arg("i"))
        .def("VJointValue",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const>(&ShapeExtend_CompositeSurface::VJointValue),
             R"#(Returns j-th joint value in V direction (1-st is global Vmin, (NbVPatches()+1)-th is global Vmax on the composite surface))#"  , py::arg("j"))
        .def("SetUJointValues",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)(  const NCollection_Array1<Standard_Real> &  ) >(&ShapeExtend_CompositeSurface::SetUJointValues),
             R"#(Sets the array of U values corresponding to joint points, which define global parametrisation of the surface. Number of values in array should be equal to NbUPatches()+1. All the values should be sorted in increasing order. If this is not satisfied, does nothing and returns False.)#"  , py::arg("UJoints"))
        .def("SetVJointValues",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)(  const NCollection_Array1<Standard_Real> &  ) >(&ShapeExtend_CompositeSurface::SetVJointValues),
             R"#(Sets the array of V values corresponding to joint points, which define global parametrisation of the surface Number of values in array should be equal to NbVPatches()+1. All the values should be sorted in increasing order. If this is not satisfied, does nothing and returns False.)#"  , py::arg("VJoints"))
        .def("SetUFirstValue",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) ) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) >(&ShapeExtend_CompositeSurface::SetUFirstValue),
             R"#(Changes starting value for global U parametrisation (all other joint values are shifted accordingly))#"  , py::arg("UFirst"))
        .def("SetVFirstValue",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) ) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) >(&ShapeExtend_CompositeSurface::SetVFirstValue),
             R"#(Changes starting value for global V parametrisation (all other joint values are shifted accordingly))#"  , py::arg("VFirst"))
        .def("LocateUParameter",
             (Standard_Integer (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const) static_cast<Standard_Integer (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::LocateUParameter),
             R"#(Returns number of col that contains given (global) parameter)#"  , py::arg("U"))
        .def("LocateVParameter",
             (Standard_Integer (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const) static_cast<Standard_Integer (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::LocateVParameter),
             R"#(Returns number of row that contains given (global) parameter)#"  , py::arg("V"))
        .def("Patch",
             (const opencascade::handle<Geom_Surface> & (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<const opencascade::handle<Geom_Surface> & (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::Patch),
             R"#(Returns one surface patch that contains given (global) parameters)#"  , py::arg("U"),  py::arg("V"))
        .def("Patch",
             (const opencascade::handle<Geom_Surface> & (ShapeExtend_CompositeSurface::*)( const gp_Pnt2d &  ) const) static_cast<const opencascade::handle<Geom_Surface> & (ShapeExtend_CompositeSurface::*)( const gp_Pnt2d &  ) const>(&ShapeExtend_CompositeSurface::Patch),
             R"#(Returns one surface patch that contains given point)#"  , py::arg("pnt"))
        .def("ULocalToGlobal",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::ULocalToGlobal),
             R"#(Converts local parameter u on patch i,j to global parameter U)#"  , py::arg("i"),  py::arg("j"),  py::arg("u"))
        .def("VLocalToGlobal",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::VLocalToGlobal),
             R"#(Converts local parameter v on patch i,j to global parameter V)#"  , py::arg("i"),  py::arg("j"),  py::arg("v"))
        .def("LocalToGlobal",
             (gp_Pnt2d (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt2d &  ) const) static_cast<gp_Pnt2d (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt2d &  ) const>(&ShapeExtend_CompositeSurface::LocalToGlobal),
             R"#(Converts local parameters uv on patch i,j to global parameters UV)#"  , py::arg("i"),  py::arg("j"),  py::arg("uv"))
        .def("UGlobalToLocal",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::UGlobalToLocal),
             R"#(Converts global parameter U to local parameter u on patch i,j)#"  , py::arg("i"),  py::arg("j"),  py::arg("U"))
        .def("VGlobalToLocal",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::VGlobalToLocal),
             R"#(Converts global parameter V to local parameter v on patch i,j)#"  , py::arg("i"),  py::arg("j"),  py::arg("V"))
        .def("GlobalToLocal",
             (gp_Pnt2d (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt2d &  ) const) static_cast<gp_Pnt2d (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt2d &  ) const>(&ShapeExtend_CompositeSurface::GlobalToLocal),
             R"#(Converts global parameters UV to local parameters uv on patch i,j)#"  , py::arg("i"),  py::arg("j"),  py::arg("UV"))
        .def("GlobalToLocalTransformation",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  gp_Trsf2d &  ) const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  gp_Trsf2d &  ) const>(&ShapeExtend_CompositeSurface::GlobalToLocalTransformation),
             R"#(Computes transformation operator and uFactor descrinbing affine transformation required to convert global parameters on composite surface to local parameters on patch (i,j): uv = ( uFactor, 1. ) X Trsf * UV; NOTE: Thus Trsf contains shift and scale by V, scale by U is stored in uFact. Returns True if transformation is not an identity)#"  , py::arg("i"),  py::arg("j"),  py::arg("uFact"),  py::arg("Trsf"))
        .def("Transform",
             (void (ShapeExtend_CompositeSurface::*)( const gp_Trsf &  ) ) static_cast<void (ShapeExtend_CompositeSurface::*)( const gp_Trsf &  ) >(&ShapeExtend_CompositeSurface::Transform),
             R"#(Applies transformation to all the patches)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (ShapeExtend_CompositeSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::Copy),
             R"#(Returns a copy of the surface)#" )
        .def("UReverse",
             (void (ShapeExtend_CompositeSurface::*)() ) static_cast<void (ShapeExtend_CompositeSurface::*)() >(&ShapeExtend_CompositeSurface::UReverse),
             R"#(NOT IMPLEMENTED (does nothing))#" )
        .def("UReversedParameter",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::UReversedParameter),
             R"#(Returns U)#"  , py::arg("U"))
        .def("VReverse",
             (void (ShapeExtend_CompositeSurface::*)() ) static_cast<void (ShapeExtend_CompositeSurface::*)() >(&ShapeExtend_CompositeSurface::VReverse),
             R"#(NOT IMPLEMENTED (does nothing))#" )
        .def("VReversedParameter",
             (Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::VReversedParameter),
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
             (opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::UIso),
             R"#(NOT IMPLEMENTED (returns Null curve))#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) const>(&ShapeExtend_CompositeSurface::VIso),
             R"#(NOT IMPLEMENTED (returns Null curve))#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (ShapeExtend_CompositeSurface::*)() const) static_cast<GeomAbs_Shape (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::Continuity),
             R"#(returns C0)#" )
        .def("IsCNu",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const>(&ShapeExtend_CompositeSurface::IsCNu),
             R"#(returns True if N <=0)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Integer  ) const>(&ShapeExtend_CompositeSurface::IsCNv),
             R"#(returns True if N <=0)#"  , py::arg("N"))
        .def("D0",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&ShapeExtend_CompositeSurface::D0),
             R"#(Computes the point of parameter U,V on the grid.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&ShapeExtend_CompositeSurface::D1),
             R"#(Computes the point P and the first derivatives in the directions U and V at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&ShapeExtend_CompositeSurface::D2),
             R"#(Computes the point P, the first and the second derivatives in the directions U and V at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&ShapeExtend_CompositeSurface::D3),
             R"#(Computes the point P, the first,the second and the third derivatives in the directions U and V at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (ShapeExtend_CompositeSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&ShapeExtend_CompositeSurface::DN),
             R"#(Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Value",
             (gp_Pnt (ShapeExtend_CompositeSurface::*)( const gp_Pnt2d &  ) const) static_cast<gp_Pnt (ShapeExtend_CompositeSurface::*)( const gp_Pnt2d &  ) const>(&ShapeExtend_CompositeSurface::Value),
             R"#(Computes the point of parameter pnt on the grid.)#"  , py::arg("pnt"))
        .def("ComputeJointValues",
             (void (ShapeExtend_CompositeSurface::*)( const ShapeExtend_Parametrisation  ) ) static_cast<void (ShapeExtend_CompositeSurface::*)( const ShapeExtend_Parametrisation  ) >(&ShapeExtend_CompositeSurface::ComputeJointValues),
             R"#(Computes Joint values according to parameter)#"  , py::arg("param")=static_cast<const ShapeExtend_Parametrisation>(ShapeExtend_Natural))
        .def("CheckConnectivity",
             (Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeExtend_CompositeSurface::*)( const Standard_Real  ) >(&ShapeExtend_CompositeSurface::CheckConnectivity),
             R"#(Checks geometrical connectivity of the patches, including closedness (sets fields muUClosed and myVClosed))#"  , py::arg("prec"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_CompositeSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_CompositeSurface::*)() const>(&ShapeExtend_CompositeSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("LocateUVPoint",
             []( ShapeExtend_CompositeSurface &self , const gp_Pnt2d & pnt ){ Standard_Integer  i; Standard_Integer  j; self.LocateUVPoint(pnt,i,j); return std::make_tuple(i,j); },
             R"#(Returns number of row and col of surface that contains given point)#"  , py::arg("pnt"))
        .def("Bounds",
             []( ShapeExtend_CompositeSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds of grid)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_CompositeSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeExtend_CompositeSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_Explorer , shared_ptr<ShapeExtend_Explorer>  >>(m.attr("ShapeExtend_Explorer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CompoundFromSeq",
             (TopoDS_Shape (ShapeExtend_Explorer::*)( const opencascade::handle<TopTools_HSequenceOfShape> &  ) const) static_cast<TopoDS_Shape (ShapeExtend_Explorer::*)( const opencascade::handle<TopTools_HSequenceOfShape> &  ) const>(&ShapeExtend_Explorer::CompoundFromSeq),
             R"#(Converts a sequence of Shapes to a Compound)#"  , py::arg("seqval"))
        .def("SeqFromCompound",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeExtend_Explorer::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeExtend_Explorer::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const>(&ShapeExtend_Explorer::SeqFromCompound),
             R"#(Converts a Compound to a list of Shapes if <comp> is not a compound, the list contains only <comp> if <comp> is Null, the list is empty if <comp> is a Compound, its sub-shapes are put into the list then if <expcomp> is True, if a sub-shape is a Compound, it is not put to the list but its sub-shapes are (recursive))#"  , py::arg("comp"),  py::arg("expcomp"))
        .def("ListFromSeq",
             (void (ShapeExtend_Explorer::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  NCollection_List<TopoDS_Shape> & ,  const Standard_Boolean  ) const) static_cast<void (ShapeExtend_Explorer::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  NCollection_List<TopoDS_Shape> & ,  const Standard_Boolean  ) const>(&ShapeExtend_Explorer::ListFromSeq),
             R"#(Converts a Sequence of Shapes to a List of Shapes <clear> if True (D), commands the list to start from scratch else, the list is cumulated)#"  , py::arg("seqval"),  py::arg("lisval"),  py::arg("clear")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SeqFromList",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeExtend_Explorer::*)(  const NCollection_List<TopoDS_Shape> &  ) const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeExtend_Explorer::*)(  const NCollection_List<TopoDS_Shape> &  ) const>(&ShapeExtend_Explorer::SeqFromList),
             R"#(Converts a List of Shapes to a Sequence of Shapes)#"  , py::arg("lisval"))
        .def("ShapeType",
             (TopAbs_ShapeEnum (ShapeExtend_Explorer::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const) static_cast<TopAbs_ShapeEnum (ShapeExtend_Explorer::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) const>(&ShapeExtend_Explorer::ShapeType),
             R"#(Returns the type of a Shape: true type if <compound> is False If <compound> is True and <shape> is a Compound, iterates on its items. If all are of the same type, returns this type. Else, returns COMPOUND. If it is empty, returns SHAPE For a Null Shape, returns SHAPE)#"  , py::arg("shape"),  py::arg("compound"))
        .def("SortedCompound",
             (TopoDS_Shape (ShapeExtend_Explorer::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const Standard_Boolean ,  const Standard_Boolean  ) const) static_cast<TopoDS_Shape (ShapeExtend_Explorer::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const Standard_Boolean ,  const Standard_Boolean  ) const>(&ShapeExtend_Explorer::SortedCompound),
             R"#(Builds a COMPOUND from the given shape. It explores the shape level by level, according to the <explore> argument. If <explore> is False, only COMPOUND items are explored, else all items are. The following shapes are added to resulting compound: - shapes which comply to <type> - if <type> is WIRE, considers also free edges (and makes wires) - if <type> is SHELL, considers also free faces (and makes shells) If <compound> is True, gathers items in compounds which correspond to starting COMPOUND,SOLID or SHELL containers, or items directly contained in a Compound)#"  , py::arg("shape"),  py::arg("type"),  py::arg("explore"),  py::arg("compound"))
        .def("DispatchList",
             (void (ShapeExtend_Explorer::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) const) static_cast<void (ShapeExtend_Explorer::*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) const>(&ShapeExtend_Explorer::DispatchList),
             R"#(Dispatches starting list of shapes according to their type, to the appropriate resulting lists For each of these lists, if it is null, it is firstly created else, new items are appended to the already existing ones)#"  , py::arg("list"),  py::arg("vertices"),  py::arg("edges"),  py::arg("wires"),  py::arg("faces"),  py::arg("shells"),  py::arg("solids"),  py::arg("compsols"),  py::arg("compounds"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_WireData ,opencascade::handle<ShapeExtend_WireData>  , Standard_Transient >>(m.attr("ShapeExtend_WireData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("wire"),  py::arg("chained")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theManifoldMode")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeExtend_WireData::*)( const opencascade::handle<ShapeExtend_WireData> &  ) ) static_cast<void (ShapeExtend_WireData::*)( const opencascade::handle<ShapeExtend_WireData> &  ) >(&ShapeExtend_WireData::Init),
             R"#(Copies data from another WireData)#"  , py::arg("other"))
        .def("Init",
             (Standard_Boolean (ShapeExtend_WireData::*)( const TopoDS_Wire & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (ShapeExtend_WireData::*)( const TopoDS_Wire & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&ShapeExtend_WireData::Init),
             R"#(Loads an already existing wire If <chained> is True (default), edges are added in the sequence as they are explored by TopoDS_Iterator Else, if <chained> is False, wire is explored by BRepTools_WireExplorer and it is guaranteed that edges will be sequencially connected. Remark : In the latter case it can happen that not all edges will be found (because of limitations of BRepTools_WireExplorer for disconnected wires and wires with seam edges).)#"  , py::arg("wire"),  py::arg("chained")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theManifoldMode")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (ShapeExtend_WireData::*)() ) static_cast<void (ShapeExtend_WireData::*)() >(&ShapeExtend_WireData::Clear),
             R"#(Clears data about Wire.)#" )
        .def("ComputeSeams",
             (void (ShapeExtend_WireData::*)( const Standard_Boolean  ) ) static_cast<void (ShapeExtend_WireData::*)( const Standard_Boolean  ) >(&ShapeExtend_WireData::ComputeSeams),
             R"#(Computes the list of seam edges By default (direct call), computing is enforced For indirect call (from IsSeam) it is redone only if not yet already done or if the list of edges has changed Remark : A Seam Edge is an Edge present twice in the list, once as FORWARD and once as REVERSED Each sense has its own PCurve, the one for FORWARD must be set in first)#"  , py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetLast",
             (void (ShapeExtend_WireData::*)( const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const Standard_Integer  ) >(&ShapeExtend_WireData::SetLast),
             R"#(Does a circular permutation in order to set <num>th edge last)#"  , py::arg("num"))
        .def("SetDegeneratedLast",
             (void (ShapeExtend_WireData::*)() ) static_cast<void (ShapeExtend_WireData::*)() >(&ShapeExtend_WireData::SetDegeneratedLast),
             R"#(When the wire contains at least one degenerated edge, sets it as last one Note : It is useful to process pcurves, for instance, while the pcurve of a DGNR may not be computed from its 3D part (there is none) it is computed after the other edges have been computed and chained.)#" )
        .def("Add",
             (void (ShapeExtend_WireData::*)( const TopoDS_Edge & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Edge & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::Add),
             R"#(Adds an edge to a wire, being defined (not yet ended) This is the plain, basic, function to add an edge <num> = 0 (D): Appends at end <num> = 1: Preprends at start else, Insert before <num> Remark : Null Edge is simply ignored)#"  , py::arg("edge"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("Add",
             (void (ShapeExtend_WireData::*)( const TopoDS_Wire & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Wire & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::Add),
             R"#(Adds an entire wire, considered as a list of edges Remark : The wire is assumed to be ordered (TopoDS_Iterator is used))#"  , py::arg("wire"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("Add",
             (void (ShapeExtend_WireData::*)( const opencascade::handle<ShapeExtend_WireData> & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const opencascade::handle<ShapeExtend_WireData> & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::Add),
             R"#(Adds a wire in the form of WireData)#"  , py::arg("wire"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("Add",
             (void (ShapeExtend_WireData::*)( const TopoDS_Shape & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Shape & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::Add),
             R"#(Adds an edge or a wire invoking corresponding method Add)#"  , py::arg("shape"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("AddOriented",
             (void (ShapeExtend_WireData::*)( const TopoDS_Edge & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Edge & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::AddOriented),
             R"#(Adds an edge to start or end of <me>, according to <mode> 0: at end, as direct 1: at end, as reversed 2: at start, as direct 3: at start, as reversed < 0: no adding)#"  , py::arg("edge"),  py::arg("mode"))
        .def("AddOriented",
             (void (ShapeExtend_WireData::*)( const TopoDS_Wire & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Wire & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::AddOriented),
             R"#(Adds a wire to start or end of <me>, according to <mode> 0: at end, as direct 1: at end, as reversed 2: at start, as direct 3: at start, as reversed < 0: no adding)#"  , py::arg("wire"),  py::arg("mode"))
        .def("AddOriented",
             (void (ShapeExtend_WireData::*)( const TopoDS_Shape & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Shape & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::AddOriented),
             R"#(Adds an edge or a wire invoking corresponding method AddOriented)#"  , py::arg("shape"),  py::arg("mode"))
        .def("Remove",
             (void (ShapeExtend_WireData::*)( const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const Standard_Integer  ) >(&ShapeExtend_WireData::Remove),
             R"#(Removes an Edge, given its rank. By default removes the last edge.)#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("Set",
             (void (ShapeExtend_WireData::*)( const TopoDS_Edge & ,  const Standard_Integer  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Edge & ,  const Standard_Integer  ) >(&ShapeExtend_WireData::Set),
             R"#(Replaces an edge at the given rank number <num> with new one. Default is last edge (<num> = 0).)#"  , py::arg("edge"),  py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("Reverse",
             (void (ShapeExtend_WireData::*)() ) static_cast<void (ShapeExtend_WireData::*)() >(&ShapeExtend_WireData::Reverse),
             R"#(Reverses the sense of the list and the orientation of each Edge This method should be called when either wire has no seam edges or face is not available)#" )
        .def("Reverse",
             (void (ShapeExtend_WireData::*)( const TopoDS_Face &  ) ) static_cast<void (ShapeExtend_WireData::*)( const TopoDS_Face &  ) >(&ShapeExtend_WireData::Reverse),
             R"#(Reverses the sense of the list and the orientation of each Edge The face is necessary for swapping pcurves for seam edges (first pcurve corresponds to orientation FORWARD, and second to REVERSED; when edge is reversed, pcurves must be swapped) If face is NULL, no swapping is performed)#"  , py::arg("face"))
        .def("NbEdges",
             (Standard_Integer (ShapeExtend_WireData::*)() const) static_cast<Standard_Integer (ShapeExtend_WireData::*)() const>(&ShapeExtend_WireData::NbEdges),
             R"#(Returns the count of currently recorded edges)#" )
        .def("NbNonManifoldEdges",
             (Standard_Integer (ShapeExtend_WireData::*)() const) static_cast<Standard_Integer (ShapeExtend_WireData::*)() const>(&ShapeExtend_WireData::NbNonManifoldEdges),
             R"#(Returns the count of currently recorded non-manifold edges)#" )
        .def("NonmanifoldEdge",
             (TopoDS_Edge (ShapeExtend_WireData::*)( const Standard_Integer  ) const) static_cast<TopoDS_Edge (ShapeExtend_WireData::*)( const Standard_Integer  ) const>(&ShapeExtend_WireData::NonmanifoldEdge),
             R"#(Returns <num>th nonmanifold Edge)#"  , py::arg("num"))
        .def("NonmanifoldEdges",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeExtend_WireData::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeExtend_WireData::*)() const>(&ShapeExtend_WireData::NonmanifoldEdges),
             R"#(Returns sequence of non-manifold edges This sequence can be not empty if wire data set in manifold mode but initial wire has INTERNAL orientation or contains INTERNAL edges)#" )
        .def("ManifoldMode",
             (Standard_Boolean & (ShapeExtend_WireData::*)() ) static_cast<Standard_Boolean & (ShapeExtend_WireData::*)() >(&ShapeExtend_WireData::ManifoldMode),
             R"#(Returns mode defining manifold wire data or not. If manifold that nonmanifold edges will not be not consider during operations(previous behaviour) and they will be added only in result wire else non-manifold edges will consider during operations)#" )
        .def("Edge",
             (TopoDS_Edge (ShapeExtend_WireData::*)( const Standard_Integer  ) const) static_cast<TopoDS_Edge (ShapeExtend_WireData::*)( const Standard_Integer  ) const>(&ShapeExtend_WireData::Edge),
             R"#(Returns <num>th Edge)#"  , py::arg("num"))
        .def("Index",
             (Standard_Integer (ShapeExtend_WireData::*)( const TopoDS_Edge &  ) ) static_cast<Standard_Integer (ShapeExtend_WireData::*)( const TopoDS_Edge &  ) >(&ShapeExtend_WireData::Index),
             R"#(Returns the index of the edge If the edge is a seam the orientation is also checked Returns 0 if the edge is not found in the list)#"  , py::arg("edge"))
        .def("IsSeam",
             (Standard_Boolean (ShapeExtend_WireData::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeExtend_WireData::*)( const Standard_Integer  ) >(&ShapeExtend_WireData::IsSeam),
             R"#(Tells if an Edge is seam (see ComputeSeams) An edge is considered as seam if it presents twice in the edge list, once as FORWARD and once as REVERSED.)#"  , py::arg("num"))
        .def("Wire",
             (TopoDS_Wire (ShapeExtend_WireData::*)() const) static_cast<TopoDS_Wire (ShapeExtend_WireData::*)() const>(&ShapeExtend_WireData::Wire),
             R"#(Makes TopoDS_Wire using BRep_Builder (just creates the TopoDS_Wire object and adds all edges into it). This method should be called when the wire is correct (for example, after successful fixes by ShapeFix_Wire) and adjacent edges share common vertices. In case if adjacent edges do not share the same vertices the resulting TopoDS_Wire will be invalid.)#" )
        .def("WireAPIMake",
             (TopoDS_Wire (ShapeExtend_WireData::*)() const) static_cast<TopoDS_Wire (ShapeExtend_WireData::*)() const>(&ShapeExtend_WireData::WireAPIMake),
             R"#(Makes TopoDS_Wire using BRepAPI_MakeWire. Class BRepAPI_MakeWire merges geometrically coincided vertices and can disturb correct order of edges in the wire. If this class fails, null shape is returned.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeExtend_WireData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeExtend_WireData::*)() const>(&ShapeExtend_WireData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeExtend_WireData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeExtend_WireData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeExtend_MsgRegistrator ,opencascade::handle<ShapeExtend_MsgRegistrator>  , ShapeExtend_BasicMsgRegistrator >>(m.attr("ShapeExtend_MsgRegistrator"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Send",
             (void (ShapeExtend_MsgRegistrator::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg & ,  const Message_Gravity  ) ) static_cast<void (ShapeExtend_MsgRegistrator::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg & ,  const Message_Gravity  ) >(&ShapeExtend_MsgRegistrator::Send),
             R"#(Sends a message to be attached to the object. If the object is in the map then the message is added to the list, otherwise the object is firstly added to the map.)#"  , py::arg("object"),  py::arg("message"),  py::arg("gravity"))
        .def("Send",
             (void (ShapeExtend_MsgRegistrator::*)( const TopoDS_Shape & ,  const Message_Msg & ,  const Message_Gravity  ) ) static_cast<void (ShapeExtend_MsgRegistrator::*)( const TopoDS_Shape & ,  const Message_Msg & ,  const Message_Gravity  ) >(&ShapeExtend_MsgRegistrator::Send),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeExtend_MsgRegistrator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
// ./opencascade/ShapeExtend_ComplexCurve.hxx
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx
// ./opencascade/ShapeExtend_MsgRegistrator.hxx
// ./opencascade/ShapeExtend_BasicMsgRegistrator.hxx
// ./opencascade/ShapeExtend.hxx
// ./opencascade/ShapeExtend_Status.hxx
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx
// ./opencascade/ShapeExtend_Explorer.hxx
// ./opencascade/ShapeExtend_Parametrisation.hxx
// ./opencascade/ShapeExtend_CompositeSurface.hxx
// ./opencascade/ShapeExtend_WireData.hxx
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx

// operators

// register typdefs
    register_template_NCollection_DataMap<opencascade::handle<Standard_Transient>, Message_ListOfMsg, TColStd_MapTransientHasher>(m,"ShapeExtend_DataMapOfTransientListOfMsg");  
    register_template_NCollection_DataMap<TopoDS_Shape, Message_ListOfMsg, TopTools_ShapeMapHasher>(m,"ShapeExtend_DataMapOfShapeListOfMsg");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
