
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <IGESSolid_VertexList.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_Loop.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Trsf2d.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <IGESGeom_BSplineCurve.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_ConicArc.hxx>
#include <Geom_BSplineCurve.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IGESGeom_Line.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <Geom_Transformation.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Trsf2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESGeom_OffsetCurve.hxx>
#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESGeom_Boundary.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopoDS_Shape.hxx>
#include <IGESGeom_RuledSurface.hxx>
#include <IGESGeom_SurfaceOfRevolution.hxx>
#include <IGESGeom_TabulatedCylinder.hxx>
#include <IGESGeom_OffsetSurface.hxx>
#include <IGESGeom_TrimmedSurface.hxx>
#include <IGESGeom_BoundedSurface.hxx>
#include <IGESGeom_Plane.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESBasic_SingleParent.hxx>
#include <gp_Pln.hxx>
#include <gp_Trsf.hxx>
#include <gp_Trsf2d.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_TransientProcess.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESToBRep_Actor.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Geom_Surface.hxx>
#include <IGESData_IGESModel.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Msg.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IGESToBRep_CurveAndSurface.hxx>
#include <IGESToBRep_BasicSurface.hxx>
#include <IGESToBRep_BasicCurve.hxx>
#include <IGESToBRep_TopoSurface.hxx>
#include <IGESToBRep_TopoCurve.hxx>
#include <IGESToBRep_BRepEntity.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <IGESToBRep_Reader.hxx>
#include <IGESToBRep_Actor.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <IGESGeom_BSplineSurface.hxx>

// module includes
#include <IGESToBRep.hxx>
#include <IGESToBRep_Actor.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESToBRep_BasicCurve.hxx>
#include <IGESToBRep_BasicSurface.hxx>
#include <IGESToBRep_BRepEntity.hxx>
#include <IGESToBRep_CurveAndSurface.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <IGESToBRep_Reader.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <IGESToBRep_TopoCurve.hxx>
#include <IGESToBRep_TopoSurface.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESToBRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESToBRep"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESToBRep , shared_ptr<IGESToBRep>>(m,"IGESToBRep");

    static_cast<py::class_<IGESToBRep , shared_ptr<IGESToBRep> >>(m.attr("IGESToBRep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_Actor ,opencascade::handle<IGESToBRep_Actor> , Transfer_ActorOfTransientProcess>>(m.attr("IGESToBRep_Actor"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & ) >(&IGESToBRep_Actor::Recognize),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) >(&IGESToBRep_Actor::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_Actor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_Actor::*)() const>(&IGESToBRep_Actor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_Actor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_AlgoContainer ,opencascade::handle<IGESToBRep_AlgoContainer> , Standard_Transient>>(m.attr("IGESToBRep_AlgoContainer"))
    // constructors
    // custom constructors
    // methods
        .def("SetToolContainer",
             (void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) ) static_cast<void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) >(&IGESToBRep_AlgoContainer::SetToolContainer),
             R"#(Sets ToolContainer)#"  , py::arg("TC"))
        .def("ToolContainer",
             (opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const) static_cast<opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const>(&IGESToBRep_AlgoContainer::ToolContainer),
             R"#(Returns ToolContainer)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_AlgoContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_AlgoContainer::*)() const>(&IGESToBRep_AlgoContainer::DynamicType),
             R"#(None)#" )
        .def("SetToolContainer",
             (void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) ) static_cast<void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) >(&IGESToBRep_AlgoContainer::SetToolContainer),
             R"#(Sets ToolContainer)#"  , py::arg("TC"))
        .def("ToolContainer",
             (opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const) static_cast<opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const>(&IGESToBRep_AlgoContainer::ToolContainer),
             R"#(Returns ToolContainer)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_AlgoContainer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_CurveAndSurface , shared_ptr<IGESToBRep_CurveAndSurface> >>(m.attr("IGESToBRep_CurveAndSurface"))
    // constructors
    // custom constructors
    // methods
        .def("SetEpsilon",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsilon),
             R"#(Changes the value of "myEps")#"  , py::arg("eps"))
        .def("GetEpsilon",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsilon),
             R"#(Returns the value of "myEps")#" )
        .def("SetEpsCoeff",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsCoeff),
             R"#(Changes the value of "myEpsCoeff")#"  , py::arg("eps"))
        .def("GetEpsCoeff",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsCoeff),
             R"#(Returns the value of "myEpsCoeff")#" )
        .def("GetEpsGeom",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsGeom),
             R"#(Returns the value of "myEpsGeom")#" )
        .def("SetMinTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMinTol),
             R"#(Changes the value of "myMinTol")#"  , py::arg("mintol"))
        .def("SetMaxTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMaxTol),
             R"#(Changes the value of "myMaxTol")#"  , py::arg("maxtol"))
        .def("GetMinTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMinTol),
             R"#(Returns the value of "myMinTol")#" )
        .def("GetMaxTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMaxTol),
             R"#(Returns the value of "myMaxTol")#" )
        .def("SetModeApprox",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeApprox),
             R"#(Changes the value of "myModeApprox")#"  , py::arg("mode"))
        .def("GetModeApprox",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeApprox),
             R"#(Returns the value of "myModeApprox")#" )
        .def("SetModeTransfer",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeTransfer),
             R"#(Changes the value of "myModeIsTopo")#"  , py::arg("mode"))
        .def("GetModeTransfer",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeTransfer),
             R"#(Returns the value of "myModeIsTopo")#" )
        .def("SetOptimized",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetOptimized),
             R"#(Changes the value of "myContIsOpti")#"  , py::arg("optimized"))
        .def("GetOptimized",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetOptimized),
             R"#(Returns the value of "myContIsOpti")#" )
        .def("GetUnitFactor",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetUnitFactor),
             R"#(Returns the value of " myUnitFactor")#" )
        .def("SetSurfaceCurve",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetSurfaceCurve),
             R"#(Changes the value of "mySurfaceCurve")#"  , py::arg("ival"))
        .def("GetSurfaceCurve",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetSurfaceCurve),
             R"#(Returns the value of " mySurfaceCurve" 0 = value in file , 2 = kepp 2d and compute 3d 3 = keep 3d and compute 2d)#" )
        .def("GetModel",
             (opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModel),
             R"#(Returns the value of "myModel")#" )
        .def("SetContinuity",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetContinuity),
             R"#(Changes the value of "myContinuity" if continuity = 0 do nothing else if continuity = 1 try C1 if continuity = 2 try C2)#"  , py::arg("continuity"))
        .def("GetContinuity",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetContinuity),
             R"#(Returns the value of "myContinuity")#" )
        .def("SetTransferProcess",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) >(&IGESToBRep_CurveAndSurface::SetTransferProcess),
             R"#(Set the value of "myMsgReg")#"  , py::arg("TP"))
        .def("GetTransferProcess",
             (opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetTransferProcess),
             R"#(Returns the value of "myMsgReg")#" )
        .def("SendFail",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendFail),
             R"#(Records a new Fail message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendWarning",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendWarning),
             R"#(Records a new Warning message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendMsg",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendMsg),
             R"#(Records a new Information message from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
        .def("SetEpsilon",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsilon),
             R"#(Changes the value of "myEps")#"  , py::arg("eps"))
        .def("GetEpsilon",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsilon),
             R"#(Returns the value of "myEps")#" )
        .def("SetEpsCoeff",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsCoeff),
             R"#(Changes the value of "myEpsCoeff")#"  , py::arg("eps"))
        .def("GetEpsCoeff",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsCoeff),
             R"#(Returns the value of "myEpsCoeff")#" )
        .def("GetEpsGeom",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsGeom),
             R"#(Returns the value of "myEpsGeom")#" )
        .def("SetMinTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMinTol),
             R"#(Changes the value of "myMinTol")#"  , py::arg("mintol"))
        .def("SetMaxTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMaxTol),
             R"#(Changes the value of "myMaxTol")#"  , py::arg("maxtol"))
        .def("GetMinTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMinTol),
             R"#(Returns the value of "myMinTol")#" )
        .def("GetMaxTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMaxTol),
             R"#(Returns the value of "myMaxTol")#" )
        .def("SetModeApprox",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeApprox),
             R"#(Changes the value of "myModeApprox")#"  , py::arg("mode"))
        .def("GetModeApprox",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeApprox),
             R"#(Returns the value of "myModeApprox")#" )
        .def("SetModeTransfer",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeTransfer),
             R"#(Changes the value of "myModeIsTopo")#"  , py::arg("mode"))
        .def("GetModeTransfer",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeTransfer),
             R"#(Returns the value of "myModeIsTopo")#" )
        .def("SetOptimized",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetOptimized),
             R"#(Changes the value of "myContIsOpti")#"  , py::arg("optimized"))
        .def("GetOptimized",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetOptimized),
             R"#(Returns the value of "myContIsOpti")#" )
        .def("GetUnitFactor",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetUnitFactor),
             R"#(Returns the value of " myUnitFactor")#" )
        .def("SetSurfaceCurve",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetSurfaceCurve),
             R"#(Changes the value of "mySurfaceCurve")#"  , py::arg("ival"))
        .def("GetSurfaceCurve",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetSurfaceCurve),
             R"#(Returns the value of " mySurfaceCurve" 0 = value in file , 2 = kepp 2d and compute 3d 3 = keep 3d and compute 2d)#" )
        .def("GetModel",
             (opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModel),
             R"#(Returns the value of "myModel")#" )
        .def("SetContinuity",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetContinuity),
             R"#(Changes the value of "myContinuity" if continuity = 0 do nothing else if continuity = 1 try C1 if continuity = 2 try C2)#"  , py::arg("continuity"))
        .def("GetContinuity",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetContinuity),
             R"#(Returns the value of "myContinuity")#" )
        .def("SetTransferProcess",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) >(&IGESToBRep_CurveAndSurface::SetTransferProcess),
             R"#(Set the value of "myMsgReg")#"  , py::arg("TP"))
        .def("GetTransferProcess",
             (opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetTransferProcess),
             R"#(Returns the value of "myMsgReg")#" )
        .def("SendFail",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendFail),
             R"#(Records a new Fail message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendWarning",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendWarning),
             R"#(Records a new Warning message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendMsg",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendMsg),
             R"#(Records a new Information message from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_IGESBoundary ,opencascade::handle<IGESToBRep_IGESBoundary> , Standard_Transient>>(m.attr("IGESToBRep_IGESBoundary"))
    // constructors
    // custom constructors
    // methods
        .def("WireData",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData),
             R"#(Returns the resulting wire)#" )
        .def("WireData3d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData3d),
             R"#(Returns the wire from 3D curves (edges contain 3D curves and may contain pcurves))#" )
        .def("WireData2d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData2d),
             R"#(Returns the the wire from 2D curves (edges contain pcurves only))#" )
        .def("Check",
             (void (IGESToBRep_IGESBoundary::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IGESToBRep_IGESBoundary::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&IGESToBRep_IGESBoundary::Check),
             R"#(Checks result of translation of IGES boundary entities (types 141, 142 or 508). Checks consistency of 2D and 3D representations and keeps only one if they are inconsistent. <result>: result of translation (returned by Transfer), <checkclosure>: False for 142 without parent 144 entity, otherwise True, <okCurve3d>, <okCurve2d>: those returned by Transfer.)#"  , py::arg("result"),  py::arg("checkclosure"),  py::arg("okCurve3d"),  py::arg("okCurve2d"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_IGESBoundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::DynamicType),
             R"#(None)#" )
        .def("WireData",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData),
             R"#(Returns the resulting wire)#" )
        .def("WireData3d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData3d),
             R"#(Returns the wire from 3D curves (edges contain 3D curves and may contain pcurves))#" )
        .def("WireData2d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData2d),
             R"#(Returns the the wire from 2D curves (edges contain pcurves only))#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_IGESBoundary::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_Reader , shared_ptr<IGESToBRep_Reader> >>(m.attr("IGESToBRep_Reader"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_ToolContainer ,opencascade::handle<IGESToBRep_ToolContainer> , Standard_Transient>>(m.attr("IGESToBRep_ToolContainer"))
    // constructors
    // custom constructors
    // methods
        .def("IGESBoundary",
             (opencascade::handle<IGESToBRep_IGESBoundary> (IGESToBRep_ToolContainer::*)() const) static_cast<opencascade::handle<IGESToBRep_IGESBoundary> (IGESToBRep_ToolContainer::*)() const>(&IGESToBRep_ToolContainer::IGESBoundary),
             R"#(Returns IGESToBRep_IGESBoundary)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_ToolContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_ToolContainer::*)() const>(&IGESToBRep_ToolContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_ToolContainer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_BRepEntity , shared_ptr<IGESToBRep_BRepEntity> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_BRepEntity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_BasicCurve , shared_ptr<IGESToBRep_BasicCurve> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_BasicCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_BasicSurface , shared_ptr<IGESToBRep_BasicSurface> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_BasicSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_TopoCurve , shared_ptr<IGESToBRep_TopoCurve> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_TopoCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_TopoSurface , shared_ptr<IGESToBRep_TopoSurface> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_TopoSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESToBRep_IGESBoundary.hxx
// ./opencascade/IGESToBRep_BRepEntity.hxx
// ./opencascade/IGESToBRep_ToolContainer.hxx
// ./opencascade/IGESToBRep_BasicCurve.hxx
// ./opencascade/IGESToBRep_TopoCurve.hxx
// ./opencascade/IGESToBRep_TopoSurface.hxx
// ./opencascade/IGESToBRep_Actor.hxx
// ./opencascade/IGESToBRep_Reader.hxx
// ./opencascade/IGESToBRep_CurveAndSurface.hxx
// ./opencascade/IGESToBRep_AlgoContainer.hxx
// ./opencascade/IGESToBRep.hxx
// ./opencascade/IGESToBRep_BasicSurface.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
