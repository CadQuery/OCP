
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESToBRep_IGESBoundary.hxx>
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
#include <Interface_InterfaceModel.hxx>
#include <Transfer_TransientProcess.hxx>
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
#include <IGESToBRep_ToolContainer.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESToBRep_Actor.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Geom_Surface.hxx>
#include <IGESData_IGESModel.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Msg.hxx>

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
void register_IGESToBRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESToBRep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<IGESToBRep , shared_ptr<IGESToBRep> >(m,"IGESToBRep",R"#(Provides tools in order to transfer IGES entities to CAS.CADE.)#");
    py::class_<IGESToBRep_Actor ,opencascade::handle<IGESToBRep_Actor> , Transfer_ActorOfTransientProcess>(m,"IGESToBRep_Actor",R"#(This class performs the transfer of an Entity from IGESToBRepThis class performs the transfer of an Entity from IGESToBRepThis class performs the transfer of an Entity from IGESToBRep)#");
    py::class_<IGESToBRep_AlgoContainer ,opencascade::handle<IGESToBRep_AlgoContainer> , Standard_Transient>(m,"IGESToBRep_AlgoContainer",R"#()#");
    py::class_<IGESToBRep_CurveAndSurface , shared_ptr<IGESToBRep_CurveAndSurface> >(m,"IGESToBRep_CurveAndSurface",R"#(Provides methods to transfer CurveAndSurface from IGES to CASCADE.)#");
    py::class_<IGESToBRep_IGESBoundary ,opencascade::handle<IGESToBRep_IGESBoundary> , Standard_Transient>(m,"IGESToBRep_IGESBoundary",R"#(This class is intended to translate IGES boundary entity (142-CurveOnSurface, 141-Boundary or 508-Loop) into the wire. Methods Transfer are virtual and are redefined in Advanced Data Exchange to optimize the translation and take into account advanced parameters.This class is intended to translate IGES boundary entity (142-CurveOnSurface, 141-Boundary or 508-Loop) into the wire. Methods Transfer are virtual and are redefined in Advanced Data Exchange to optimize the translation and take into account advanced parameters.This class is intended to translate IGES boundary entity (142-CurveOnSurface, 141-Boundary or 508-Loop) into the wire. Methods Transfer are virtual and are redefined in Advanced Data Exchange to optimize the translation and take into account advanced parameters.)#");
    py::class_<IGESToBRep_Reader , shared_ptr<IGESToBRep_Reader> >(m,"IGESToBRep_Reader",R"#(A simple way to read geometric IGES data. Encapsulates reading file and calling transfer tools)#");
    py::class_<IGESToBRep_ToolContainer ,opencascade::handle<IGESToBRep_ToolContainer> , Standard_Transient>(m,"IGESToBRep_ToolContainer",R"#()#");
    py::class_<IGESToBRep_BRepEntity , shared_ptr<IGESToBRep_BRepEntity> , IGESToBRep_CurveAndSurface>(m,"IGESToBRep_BRepEntity",R"#(Provides methods to transfer BRep entities ( VertexList 502, EdgeList 504, Loop 508, Face 510, Shell 514, ManifoldSolid 186) from IGES to CASCADE.)#");
    py::class_<IGESToBRep_BasicCurve , shared_ptr<IGESToBRep_BasicCurve> , IGESToBRep_CurveAndSurface>(m,"IGESToBRep_BasicCurve",R"#(Provides methods to transfer basic geometric curves entities from IGES to CASCADE. These can be : * Circular arc * Conic arc * Spline curve * BSpline curve * Line * Copious data * Point * Transformation matrix)#");
    py::class_<IGESToBRep_BasicSurface , shared_ptr<IGESToBRep_BasicSurface> , IGESToBRep_CurveAndSurface>(m,"IGESToBRep_BasicSurface",R"#(Provides methods to transfer basic geometric surface entities from IGES to CASCADE. These can be : * Spline surface * BSpline surface)#");
    py::class_<IGESToBRep_TopoCurve , shared_ptr<IGESToBRep_TopoCurve> , IGESToBRep_CurveAndSurface>(m,"IGESToBRep_TopoCurve",R"#(Provides methods to transfer topologic curves entities from IGES to CASCADE.)#");
    py::class_<IGESToBRep_TopoSurface , shared_ptr<IGESToBRep_TopoSurface> , IGESToBRep_CurveAndSurface>(m,"IGESToBRep_TopoSurface",R"#(Provides methods to transfer topologic surfaces entities from IGES to CASCADE.)#");

};

// user-defined post-inclusion per module

// user-defined post
