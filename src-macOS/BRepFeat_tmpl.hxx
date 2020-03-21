#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <BRepTopAdaptor_FClass2d.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepFeat_Builder.hxx>
#include <BRepFeat_MakeCylindricalHole.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <BRepFeat_Form.hxx>
#include <BRepFeat_RibSlot.hxx>
#include <BRepFeat_MakePrism.hxx>
#include <BRepFeat_MakeRevol.hxx>
#include <BRepFeat_MakePipe.hxx>
#include <BRepFeat_Gluer.hxx>
#include <BRepFeat_MakeDPrism.hxx>
#include <BRepFeat_MakeLinearForm.hxx>
#include <BRepFeat_MakeRevolutionForm.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <BRepFeat_Status.hxx>
#include <BRepFeat_RibSlot.hxx>
#include <BRepFeat_MakePrism.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <BRepFeat_MakeDPrism.hxx>
#include <BRepFeat_MakeCylindricalHole.hxx>
#include <BRepFeat_MakeRevolutionForm.hxx>
#include <BRepFeat_StatusError.hxx>
#include <BRepFeat.hxx>
#include <BRepFeat_Gluer.hxx>
#include <BRepFeat_PerfSelection.hxx>
#include <BRepFeat_MakeRevol.hxx>
#include <BRepFeat_Form.hxx>
#include <BRepFeat_MakePipe.hxx>
#include <BRepFeat_MakeLinearForm.hxx>
#include <BRepFeat_Builder.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepFeat_Status.hxx
// ./opencascade/BRepFeat_RibSlot.hxx
// ./opencascade/BRepFeat_MakePrism.hxx
// ./opencascade/BRepFeat_SplitShape.hxx
// ./opencascade/BRepFeat_MakeDPrism.hxx
// ./opencascade/BRepFeat_MakeCylindricalHole.hxx
// ./opencascade/BRepFeat_MakeRevolutionForm.hxx
// ./opencascade/BRepFeat_StatusError.hxx
// ./opencascade/BRepFeat.hxx
// ./opencascade/BRepFeat_Gluer.hxx
// ./opencascade/BRepFeat_PerfSelection.hxx
// ./opencascade/BRepFeat_MakeRevol.hxx
// ./opencascade/BRepFeat_Form.hxx
// ./opencascade/BRepFeat_MakePipe.hxx
// ./opencascade/BRepFeat_MakeLinearForm.hxx
// ./opencascade/BRepFeat_Builder.hxx

// user-defined post
