#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <IGESToBRep_IGESBoundary.hxx>
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
#include <IGESToBRep_ToolContainer.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_TransientProcess.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESToBRep_Actor.hxx>
#include <Transfer_TransientProcess.hxx>
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
#include <Geom_Surface.hxx>
#include <IGESData_IGESModel.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Msg.hxx>

// module includes
#include <IGESToBRep_ToolContainer.hxx>
#include <IGESToBRep_TopoCurve.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <IGESToBRep_TopoSurface.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESToBRep_Actor.hxx>
#include <IGESToBRep_Reader.hxx>
#include <IGESToBRep_BasicSurface.hxx>
#include <IGESToBRep_BasicCurve.hxx>
#include <IGESToBRep.hxx>
#include <IGESToBRep_BRepEntity.hxx>
#include <IGESToBRep_CurveAndSurface.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\IGESToBRep_ToolContainer.hxx
// ./opencascade\IGESToBRep_TopoCurve.hxx
// ./opencascade\IGESToBRep_IGESBoundary.hxx
// ./opencascade\IGESToBRep_TopoSurface.hxx
// ./opencascade\IGESToBRep_AlgoContainer.hxx
// ./opencascade\IGESToBRep_Actor.hxx
// ./opencascade\IGESToBRep_Reader.hxx
// ./opencascade\IGESToBRep_BasicSurface.hxx
// ./opencascade\IGESToBRep_BasicCurve.hxx
// ./opencascade\IGESToBRep.hxx
// ./opencascade\IGESToBRep_BRepEntity.hxx
// ./opencascade\IGESToBRep_CurveAndSurface.hxx

// user-defined post
