#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BOPAlgo_Builder.hxx>
#include <BOPAlgo_Section.hxx>
#include <BOPDS_CommonBlock.hxx>
#include <IntTools_Context.hxx>
#include <BOPAlgo_ArgumentAnalyzer.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_BOP.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_WireEdgeSet.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_Context.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <TopoDS_Solid.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <Message_ProgressIndicator.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <IntTools_Context.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_CommonBlock.hxx>
#include <TopoDS_Face.hxx>
#include <BOPAlgo_WireEdgeSet.hxx>

// module includes
#include <BOPAlgo_WireEdgeSet.hxx>
#include <BOPAlgo_BuilderFace.hxx>
#include <BOPAlgo_Algo.hxx>
#include <BOPAlgo_PBuilder.hxx>
#include <BOPAlgo_ArgumentAnalyzer.hxx>
#include <BOPAlgo_PSection.hxx>
#include <BOPAlgo_Tools.hxx>
#include <BOPAlgo_MakePeriodic.hxx>
#include <BOPAlgo_PArgumentAnalyzer.hxx>
#include <BOPAlgo_Section.hxx>
#include <BOPAlgo_RemoveFeatures.hxx>
#include <BOPAlgo_PBOP.hxx>
#include <BOPAlgo_BuilderShape.hxx>
#include <BOPAlgo_BOP.hxx>
#include <BOPAlgo_CheckResult.hxx>
#include <BOPAlgo_ShellSplitter.hxx>
#include <BOPAlgo_GlueEnum.hxx>
#include <BOPAlgo_Operation.hxx>
#include <BOPAlgo_Alerts.hxx>
#include <BOPAlgo_CellsBuilder.hxx>
#include <BOPAlgo_PWireEdgeSet.hxx>
#include <BOPAlgo_BuilderArea.hxx>
#include <BOPAlgo_Builder.hxx>
#include <BOPAlgo_BuilderSolid.hxx>
#include <BOPAlgo_SectionAttribute.hxx>
#include <BOPAlgo_PPaveFiller.hxx>
#include <BOPAlgo_Options.hxx>
#include <BOPAlgo_MakerVolume.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_ToolsProvider.hxx>
#include <BOPAlgo_Splitter.hxx>
#include <BOPAlgo_WireSplitter.hxx>
#include <BOPAlgo_CheckStatus.hxx>
#include <BOPAlgo_CheckerSI.hxx>
#include <BOPAlgo_ListOfCheckResult.hxx>
#include <BOPAlgo_MakeConnected.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BOPAlgo_WireEdgeSet.hxx
// ./opencascade/BOPAlgo_BuilderFace.hxx
// ./opencascade/BOPAlgo_Algo.hxx
// ./opencascade/BOPAlgo_PBuilder.hxx
// ./opencascade/BOPAlgo_ArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_PSection.hxx
// ./opencascade/BOPAlgo_Tools.hxx
// ./opencascade/BOPAlgo_MakePeriodic.hxx
// ./opencascade/BOPAlgo_PArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_Section.hxx
// ./opencascade/BOPAlgo_RemoveFeatures.hxx
// ./opencascade/BOPAlgo_PBOP.hxx
// ./opencascade/BOPAlgo_BuilderShape.hxx
// ./opencascade/BOPAlgo_BOP.hxx
// ./opencascade/BOPAlgo_CheckResult.hxx
// ./opencascade/BOPAlgo_ShellSplitter.hxx
// ./opencascade/BOPAlgo_GlueEnum.hxx
// ./opencascade/BOPAlgo_Operation.hxx
// ./opencascade/BOPAlgo_Alerts.hxx
// ./opencascade/BOPAlgo_CellsBuilder.hxx
// ./opencascade/BOPAlgo_PWireEdgeSet.hxx
// ./opencascade/BOPAlgo_BuilderArea.hxx
// ./opencascade/BOPAlgo_Builder.hxx
// ./opencascade/BOPAlgo_BuilderSolid.hxx
// ./opencascade/BOPAlgo_SectionAttribute.hxx
// ./opencascade/BOPAlgo_PPaveFiller.hxx
// ./opencascade/BOPAlgo_Options.hxx
// ./opencascade/BOPAlgo_MakerVolume.hxx
// ./opencascade/BOPAlgo_PaveFiller.hxx
// ./opencascade/BOPAlgo_ToolsProvider.hxx
// ./opencascade/BOPAlgo_Splitter.hxx
// ./opencascade/BOPAlgo_WireSplitter.hxx
// ./opencascade/BOPAlgo_CheckStatus.hxx
// ./opencascade/BOPAlgo_CheckerSI.hxx
// ./opencascade/BOPAlgo_ListOfCheckResult.hxx
// ./opencascade/BOPAlgo_MakeConnected.hxx

// user-defined post
