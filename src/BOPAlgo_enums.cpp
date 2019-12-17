
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BOPAlgo_PaveFiller.hxx>
#include <IntTools_Context.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_ArgumentAnalyzer.hxx>
#include <BOPAlgo_WireEdgeSet.hxx>
#include <IntTools_Context.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_CommonBlock.hxx>
#include <TopoDS_Face.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_WireEdgeSet.hxx>
#include <BOPAlgo_BOP.hxx>
#include <Message_ProgressIndicator.hxx>
#include <BOPAlgo_Section.hxx>
#include <IntTools_Context.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_Builder.hxx>
#include <BOPDS_CommonBlock.hxx>
#include <IntTools_Context.hxx>

// module includes
#include <BOPAlgo_Alerts.hxx>
#include <BOPAlgo_Algo.hxx>
#include <BOPAlgo_ArgumentAnalyzer.hxx>
#include <BOPAlgo_BOP.hxx>
#include <BOPAlgo_Builder.hxx>
#include <BOPAlgo_BuilderArea.hxx>
#include <BOPAlgo_BuilderFace.hxx>
#include <BOPAlgo_BuilderShape.hxx>
#include <BOPAlgo_BuilderSolid.hxx>
#include <BOPAlgo_CellsBuilder.hxx>
#include <BOPAlgo_CheckerSI.hxx>
#include <BOPAlgo_CheckResult.hxx>
#include <BOPAlgo_CheckStatus.hxx>
#include <BOPAlgo_GlueEnum.hxx>
#include <BOPAlgo_ListOfCheckResult.hxx>
#include <BOPAlgo_MakerVolume.hxx>
#include <BOPAlgo_Operation.hxx>
#include <BOPAlgo_Options.hxx>
#include <BOPAlgo_PArgumentAnalyzer.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PBOP.hxx>
#include <BOPAlgo_PBuilder.hxx>
#include <BOPAlgo_PPaveFiller.hxx>
#include <BOPAlgo_PSection.hxx>
#include <BOPAlgo_PWireEdgeSet.hxx>
#include <BOPAlgo_RemoveFeatures.hxx>
#include <BOPAlgo_Section.hxx>
#include <BOPAlgo_SectionAttribute.hxx>
#include <BOPAlgo_ShellSplitter.hxx>
#include <BOPAlgo_Splitter.hxx>
#include <BOPAlgo_Tools.hxx>
#include <BOPAlgo_ToolsProvider.hxx>
#include <BOPAlgo_WireEdgeSet.hxx>
#include <BOPAlgo_WireSplitter.hxx>

// template related includes
// ./opencascade/BOPAlgo_WireSplitter.hxx
#include "NCollection.hxx"
// ./opencascade/BOPAlgo_WireSplitter.hxx
#include "NCollection.hxx"
// ./opencascade/BOPAlgo_ListOfCheckResult.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BOPAlgo_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BOPAlgo", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BOPAlgo_GlueEnum>(m, "BOPAlgo_GlueEnum",R"#(The Enumeration describes an additional option for the algorithms in the Boolean Component such as General Fuse, Boolean operations, Section, Maker Volume, Splitter and Cells Builder algorithms.)#")
        .value("BOPAlgo_GlueOff",BOPAlgo_GlueEnum::BOPAlgo_GlueOff)
        .value("BOPAlgo_GlueShift",BOPAlgo_GlueEnum::BOPAlgo_GlueShift)
        .value("BOPAlgo_GlueFull",BOPAlgo_GlueEnum::BOPAlgo_GlueFull).export_values();
    py::enum_<BOPAlgo_Operation>(m, "BOPAlgo_Operation",R"#(None)#")
        .value("BOPAlgo_COMMON",BOPAlgo_Operation::BOPAlgo_COMMON)
        .value("BOPAlgo_FUSE",BOPAlgo_Operation::BOPAlgo_FUSE)
        .value("BOPAlgo_CUT",BOPAlgo_Operation::BOPAlgo_CUT)
        .value("BOPAlgo_CUT21",BOPAlgo_Operation::BOPAlgo_CUT21)
        .value("BOPAlgo_SECTION",BOPAlgo_Operation::BOPAlgo_SECTION)
        .value("BOPAlgo_UNKNOWN",BOPAlgo_Operation::BOPAlgo_UNKNOWN).export_values();
    py::enum_<BOPAlgo_CheckStatus>(m, "BOPAlgo_CheckStatus",R"#(None)#")
        .value("BOPAlgo_CheckUnknown",BOPAlgo_CheckStatus::BOPAlgo_CheckUnknown)
        .value("BOPAlgo_BadType",BOPAlgo_CheckStatus::BOPAlgo_BadType)
        .value("BOPAlgo_SelfIntersect",BOPAlgo_CheckStatus::BOPAlgo_SelfIntersect)
        .value("BOPAlgo_TooSmallEdge",BOPAlgo_CheckStatus::BOPAlgo_TooSmallEdge)
        .value("BOPAlgo_NonRecoverableFace",BOPAlgo_CheckStatus::BOPAlgo_NonRecoverableFace)
        .value("BOPAlgo_IncompatibilityOfVertex",BOPAlgo_CheckStatus::BOPAlgo_IncompatibilityOfVertex)
        .value("BOPAlgo_IncompatibilityOfEdge",BOPAlgo_CheckStatus::BOPAlgo_IncompatibilityOfEdge)
        .value("BOPAlgo_IncompatibilityOfFace",BOPAlgo_CheckStatus::BOPAlgo_IncompatibilityOfFace)
        .value("BOPAlgo_OperationAborted",BOPAlgo_CheckStatus::BOPAlgo_OperationAborted)
        .value("BOPAlgo_GeomAbs_C0",BOPAlgo_CheckStatus::BOPAlgo_GeomAbs_C0)
        .value("BOPAlgo_InvalidCurveOnSurface",BOPAlgo_CheckStatus::BOPAlgo_InvalidCurveOnSurface)
        .value("BOPAlgo_NotValid",BOPAlgo_CheckStatus::BOPAlgo_NotValid).export_values();

//Python trampoline classes
    class Py_BOPAlgo_Algo : public BOPAlgo_Algo{
    public:
        using BOPAlgo_Algo::BOPAlgo_Algo;
        
        // public pure virtual
        void Perform() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_Algo,Perform,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_BOPAlgo_BuilderShape : public BOPAlgo_BuilderShape{
    public:
        using BOPAlgo_BuilderShape::BOPAlgo_BuilderShape;
        
        // public pure virtual
        
        void Perform() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_Algo,Perform,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_BOPAlgo_BuilderArea : public BOPAlgo_BuilderArea{
    public:
        using BOPAlgo_BuilderArea::BOPAlgo_BuilderArea;
        
        // public pure virtual
        
        void Perform() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_Algo,Perform,) };
        
        // protected pure virtual
        void PerformShapesToAvoid() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_BuilderArea,PerformShapesToAvoid,) };
        void PerformLoops() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_BuilderArea,PerformLoops,) };
        void PerformAreas() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_BuilderArea,PerformAreas,) };
        void PerformInternalShapes() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_BuilderArea,PerformInternalShapes,) };
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<BOPAlgo_Options ,std::unique_ptr<BOPAlgo_Options>  >(m,"BOPAlgo_Options",R"#(The class provides the following options for the algorithms in Boolean Component: - *Memory allocation tool* - tool for memory allocations; - *Error and warning reporting* - allows recording warnings and errors occurred during the operation. Error means that the algorithm has failed. - *Parallel processing mode* - provides the possibility to perform operation in parallel mode; - *Fuzzy tolerance* - additional tolerance for the operation to detect touching or coinciding cases; - *Progress indicator* - provides interface to track the progress of operation and stop the operation by user's break. - *Using the Oriented Bounding Boxes* - Allows using the Oriented Bounding Boxes of the shapes for filtering the intersections.)#");
    py::class_<BOPAlgo_EdgeInfo ,std::unique_ptr<BOPAlgo_EdgeInfo>  >(m,"BOPAlgo_EdgeInfo",R"#(None)#");
    py::class_<BOPAlgo_SectionAttribute ,std::unique_ptr<BOPAlgo_SectionAttribute>  >(m,"BOPAlgo_SectionAttribute",R"#(Class is a container of the flags used by intersection algorithm)#");
    py::class_<BOPAlgo_AlertBOPNotAllowed ,opencascade::handle<BOPAlgo_AlertBOPNotAllowed>  , Message_Alert >(m,"BOPAlgo_AlertBOPNotAllowed",R"#(Boolean operation of given type is not allowed on the given inputs)#");
    py::class_<BOPAlgo_AlertBuilderFailed ,opencascade::handle<BOPAlgo_AlertBuilderFailed>  , Message_Alert >(m,"BOPAlgo_AlertBuilderFailed",R"#(Building of the result shape has failed)#");
    py::class_<BOPAlgo_AlertMultipleArguments ,opencascade::handle<BOPAlgo_AlertMultipleArguments>  , Message_Alert >(m,"BOPAlgo_AlertMultipleArguments",R"#(The type of Boolean Operation is not set)#");
    py::class_<BOPAlgo_AlertNullInputShapes ,opencascade::handle<BOPAlgo_AlertNullInputShapes>  , Message_Alert >(m,"BOPAlgo_AlertNullInputShapes",R"#(Null input shapes)#");
    py::class_<BOPAlgo_AlertSolidBuilderFailed ,opencascade::handle<BOPAlgo_AlertSolidBuilderFailed>  , Message_Alert >(m,"BOPAlgo_AlertSolidBuilderFailed",R"#(The BuilderSolid algorithm has failed)#");
    py::class_<BOPAlgo_AlertBadPositioning ,opencascade::handle<BOPAlgo_AlertBadPositioning>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertBadPositioning",R"#(The positioning of the shapes leads to creation of the small edges without valid range)#");
    py::class_<BOPAlgo_AlertNotSplittableEdge ,opencascade::handle<BOPAlgo_AlertNotSplittableEdge>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertNotSplittableEdge",R"#(Some edges are very small and have such a small valid range, that they cannot be split)#");
    py::class_<BOPAlgo_AlertRemovalOfIBForFacesFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForFacesFailed>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertRemovalOfIBForFacesFailed",R"#(Removal of internal boundaries among Faces has failed)#");
    py::class_<BOPAlgo_AlertRemovalOfIBForSolidsFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForSolidsFailed>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertRemovalOfIBForSolidsFailed",R"#(Removal of internal boundaries among Solids has failed)#");
    py::class_<BOPAlgo_AlertShellSplitterFailed ,opencascade::handle<BOPAlgo_AlertShellSplitterFailed>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertShellSplitterFailed",R"#(The positioning of the shapes leads to creation of the small edges without valid range)#");
    py::class_<BOPAlgo_AlertIntersectionOfPairOfShapesFailed ,opencascade::handle<BOPAlgo_AlertIntersectionOfPairOfShapesFailed>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertIntersectionOfPairOfShapesFailed",R"#(Intersection of pair of shapes has failed)#");
    py::class_<BOPAlgo_AlertAcquiredSelfIntersection ,opencascade::handle<BOPAlgo_AlertAcquiredSelfIntersection>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertAcquiredSelfIntersection",R"#(Some sub-shapes of some of the argument become connected through other shapes and the argument became self-interfered)#");
    py::class_<BOPAlgo_AlertNoFacesToRemove ,opencascade::handle<BOPAlgo_AlertNoFacesToRemove>  , Message_Alert >(m,"BOPAlgo_AlertNoFacesToRemove",R"#(No faces have been found for removal)#");
    py::class_<BOPAlgo_AlertRemoveFeaturesFailed ,opencascade::handle<BOPAlgo_AlertRemoveFeaturesFailed>  , Message_Alert >(m,"BOPAlgo_AlertRemoveFeaturesFailed",R"#(The Feature Removal algorithm has failed)#");
    py::class_<BOPAlgo_AlertUnableToOrientTheShape ,opencascade::handle<BOPAlgo_AlertUnableToOrientTheShape>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertUnableToOrientTheShape",R"#(Unable to orient the shape correctly)#");
    py::class_<BOPAlgo_Tools ,std::unique_ptr<BOPAlgo_Tools>  >(m,"BOPAlgo_Tools",R"#(Provides tools used in the intersection part of Boolean operations)#");
    py::class_<BOPAlgo_Algo ,std::unique_ptr<BOPAlgo_Algo, py::nodelete> ,Py_BOPAlgo_Algo , BOPAlgo_Options >(m,"BOPAlgo_Algo",R"#(The class provides the root interface for the algorithms in Boolean Component.)#");
    py::class_<BOPAlgo_BuilderShape ,std::unique_ptr<BOPAlgo_BuilderShape, py::nodelete> ,Py_BOPAlgo_BuilderShape , BOPAlgo_Algo >(m,"BOPAlgo_BuilderShape",R"#(Root class for algorithms that has shape as result. The class provides the History mechanism, which allows tracking the modification of the input shapes during the operation.)#");
    py::class_<BOPAlgo_BuilderArea ,std::unique_ptr<BOPAlgo_BuilderArea, py::nodelete> ,Py_BOPAlgo_BuilderArea , BOPAlgo_Algo >(m,"BOPAlgo_BuilderArea",R"#(The root class for algorithms to build faces/solids from set of edges/faces)#");
    py::class_<BOPAlgo_WireSplitter ,std::unique_ptr<BOPAlgo_WireSplitter>  , BOPAlgo_Algo >(m,"BOPAlgo_WireSplitter",R"#(The class is to build loops from the given set of edges.)#");
    py::class_<BOPAlgo_PaveFiller ,std::unique_ptr<BOPAlgo_PaveFiller>  , BOPAlgo_Algo >(m,"BOPAlgo_PaveFiller",R"#(The class represents the Intersection phase of the Boolean Operations algorithm. It performs the pairwise intersection of the sub-shapes of the arguments in the following order: 1. Vertex/Vertex; 2. Vertex/Edge; 3. Edge/Edge; 4. Vertex/Face; 5. Edge/Face; 6. Face/Face.)#");
    py::class_<BOPAlgo_ArgumentAnalyzer ,std::unique_ptr<BOPAlgo_ArgumentAnalyzer>  , BOPAlgo_Algo >(m,"BOPAlgo_ArgumentAnalyzer",R"#(check the validity of argument(s) for Boolean Operations)#");
    py::class_<BOPAlgo_Builder ,std::unique_ptr<BOPAlgo_Builder>  , BOPAlgo_BuilderShape >(m,"BOPAlgo_Builder",R"#(The class is a General Fuse algorithm - base algorithm for the algorithms in the Boolean Component. Its main purpose is to build the split parts of the argument shapes from which the result of the operations is combined. The result of the General Fuse algorithm itself is a compound containing all split parts of the arguments.)#");
    py::class_<BOPAlgo_AlertBOPNotSet ,opencascade::handle<BOPAlgo_AlertBOPNotSet>  , Message_Alert >(m,"BOPAlgo_AlertBOPNotSet",R"#(The type of Boolean Operation is not set)#");
    py::class_<BOPAlgo_AlertNoFiller ,opencascade::handle<BOPAlgo_AlertNoFiller>  , Message_Alert >(m,"BOPAlgo_AlertNoFiller",R"#(The Pave Filler (the intersection tool) has not been created)#");
    py::class_<BOPAlgo_AlertTooFewArguments ,opencascade::handle<BOPAlgo_AlertTooFewArguments>  , Message_Alert >(m,"BOPAlgo_AlertTooFewArguments",R"#(There are no enough arguments to perform the operation)#");
    py::class_<BOPAlgo_AlertRemovalOfIBForEdgesFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForEdgesFailed>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertRemovalOfIBForEdgesFailed",R"#(Removal of internal boundaries among Edges has failed)#");
    py::class_<BOPAlgo_AlertSelfInterferingShape ,opencascade::handle<BOPAlgo_AlertSelfInterferingShape>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertSelfInterferingShape",R"#(Some of the arguments are self-interfering shapes)#");
    py::class_<BOPAlgo_AlertBuildingPCurveFailed ,opencascade::handle<BOPAlgo_AlertBuildingPCurveFailed>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertBuildingPCurveFailed",R"#(Building 2D curve of edge on face has failed)#");
    py::class_<BOPAlgo_AlertUnableToRemoveTheFeature ,opencascade::handle<BOPAlgo_AlertUnableToRemoveTheFeature>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertUnableToRemoveTheFeature",R"#(Unable to remove the feature)#");
    py::class_<BOPAlgo_CheckResult ,std::unique_ptr<BOPAlgo_CheckResult>  >(m,"BOPAlgo_CheckResult",R"#(contains information about faulty shapes and faulty types can't be processed by Boolean Operations)#");
    py::class_<BOPAlgo_WireEdgeSet ,std::unique_ptr<BOPAlgo_WireEdgeSet>  >(m,"BOPAlgo_WireEdgeSet",R"#(None)#");
    py::class_<BOPAlgo_ShellSplitter ,std::unique_ptr<BOPAlgo_ShellSplitter>  , BOPAlgo_Algo >(m,"BOPAlgo_ShellSplitter",R"#(The class provides the splitting of the set of connected faces on separate loops)#");
    py::class_<BOPAlgo_Section ,std::unique_ptr<BOPAlgo_Section>  , BOPAlgo_Builder >(m,"BOPAlgo_Section",R"#(The algorithm to build a Section between the arguments. The Section consists of vertices and edges. The Section contains: 1. new vertices that are subjects of V/V, E/E, E/F, F/F interferences 2. vertices that are subjects of V/E, V/F interferences 3. new edges that are subjects of F/F interferences 4. edges that are Common Blocks)#");
    py::class_<BOPAlgo_MakerVolume ,std::unique_ptr<BOPAlgo_MakerVolume>  , BOPAlgo_Builder >(m,"BOPAlgo_MakerVolume",R"#(The algorithm is to build solids from set of shapes. It uses the BOPAlgo_Builder algorithm to intersect the given shapes and build the images of faces (if needed) and BOPAlgo_BuilderSolid algorithm to build the solids.)#");
    py::class_<BOPAlgo_CellsBuilder ,std::unique_ptr<BOPAlgo_CellsBuilder>  , BOPAlgo_Builder >(m,"BOPAlgo_CellsBuilder",R"#(The algorithm is based on the General Fuse algorithm (GFA). The result of GFA is all split parts of the Arguments.)#");
    py::class_<BOPAlgo_AlertPostTreatFF ,opencascade::handle<BOPAlgo_AlertPostTreatFF>  , Message_Alert >(m,"BOPAlgo_AlertPostTreatFF",R"#(Cannot connect face intersection curves)#");
    py::class_<BOPAlgo_AlertRemovalOfIBForMDimShapes ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForMDimShapes>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertRemovalOfIBForMDimShapes",R"#(Removal of internal boundaries among the multi-dimensional shapes is not supported yet)#");
    py::class_<BOPAlgo_AlertUnsupportedType ,opencascade::handle<BOPAlgo_AlertUnsupportedType>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertUnsupportedType",R"#(Unsupported type of input shape)#");
    py::class_<BOPAlgo_ToolsProvider ,std::unique_ptr<BOPAlgo_ToolsProvider>  , BOPAlgo_Builder >(m,"BOPAlgo_ToolsProvider",R"#(Auxiliary class providing API to operate tool arguments.)#");
    py::class_<BOPAlgo_RemoveFeatures ,std::unique_ptr<BOPAlgo_RemoveFeatures>  , BOPAlgo_Options >(m,"BOPAlgo_RemoveFeatures",R"#(The RemoveFeatures algorithm is intended for reconstruction of the shape by removal of the unwanted parts from it. These parts can be holes, protrusions, spikes, fillets etc. The shape itself is not modified, the new shape is built in the result.)#");
    py::class_<BOPAlgo_BuilderSolid ,std::unique_ptr<BOPAlgo_BuilderSolid>  , BOPAlgo_BuilderArea >(m,"BOPAlgo_BuilderSolid",R"#(Solid Builder is the algorithm for building solids from set of faces. The given faces should be non-intersecting, i.e. all coinciding parts of the faces should be shared among them.)#");
    py::class_<BOPAlgo_Splitter ,std::unique_ptr<BOPAlgo_Splitter>  , BOPAlgo_ToolsProvider >(m,"BOPAlgo_Splitter",R"#(The **Splitter algorithm** is the algorithm for splitting a group of arbitrary shapes by the other group of arbitrary shapes. The arguments of the operation are divided on two groups: *Objects* - shapes that will be split; *Tools* - shapes by which the *Objects* will be split. The result of the operation contains only the split parts of the shapes from the group of *Objects*. The split parts of the shapes from the group of *Tools* are excluded from the result. The shapes can be split by the other shapes from the same group (in case these shapes are interfering).)#");
    py::class_<BOPAlgo_AlertIntersectionFailed ,opencascade::handle<BOPAlgo_AlertIntersectionFailed>  , Message_Alert >(m,"BOPAlgo_AlertIntersectionFailed",R"#(The intersection of the arguments has failed)#");
    py::class_<BOPAlgo_AlertTooSmallEdge ,opencascade::handle<BOPAlgo_AlertTooSmallEdge>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertTooSmallEdge",R"#(Some edges are too small and have no valid range)#");
    py::class_<BOPAlgo_CheckerSI ,std::unique_ptr<BOPAlgo_CheckerSI>  , BOPAlgo_PaveFiller >(m,"BOPAlgo_CheckerSI",R"#(Checks the shape on self-interference.)#");
    py::class_<BOPAlgo_BOP ,std::unique_ptr<BOPAlgo_BOP>  , BOPAlgo_ToolsProvider >(m,"BOPAlgo_BOP",R"#(The class represents the Building part of the Boolean Operations algorithm. The arguments of the algorithms are divided in two groups - *Objects* and *Tools*. The algorithm builds the splits of the given arguments using the intersection results and combines the result of Boolean Operation of given type: - *FUSE* - union of two groups of objects; - *COMMON* - intersection of two groups of objects; - *CUT* - subtraction of one group from the other.)#");
    py::class_<BOPAlgo_AlertEmptyShape ,opencascade::handle<BOPAlgo_AlertEmptyShape>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertEmptyShape",R"#(Some of the arguments are empty shapes)#");
    py::class_<BOPAlgo_BuilderFace ,std::unique_ptr<BOPAlgo_BuilderFace>  , BOPAlgo_BuilderArea >(m,"BOPAlgo_BuilderFace",R"#(The algorithm to build new faces from the given faces and set of edges lying on this face.)#");
    py::class_<BOPAlgo_AlertSolidBuilderUnusedFaces ,opencascade::handle<BOPAlgo_AlertSolidBuilderUnusedFaces>  , TopoDS_AlertWithShape >(m,"BOPAlgo_AlertSolidBuilderUnusedFaces",R"#(Some of the faces passed to the Solid Builder algorithm have not been classified and not used for solids creation)#");

// pre-register typdefs
// ./opencascade/BOPAlgo_GlueEnum.hxx
// ./opencascade/BOPAlgo_Section.hxx
// ./opencascade/BOPAlgo_BuilderArea.hxx
// ./opencascade/BOPAlgo_BuilderSolid.hxx
// ./opencascade/BOPAlgo_BOP.hxx
// ./opencascade/BOPAlgo_PArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_Operation.hxx
// ./opencascade/BOPAlgo_WireSplitter.hxx
    preregister_template_NCollection_List<BOPAlgo_EdgeInfo>(m,"BOPAlgo_ListOfEdgeInfo");  
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, BOPAlgo_ListOfEdgeInfo, TopTools_ShapeMapHasher>(m,"BOPAlgo_IndexedDataMapOfShapeListOfEdgeInfo");  
// ./opencascade/BOPAlgo_Splitter.hxx
// ./opencascade/BOPAlgo_PaveFiller.hxx
// ./opencascade/BOPAlgo_PPaveFiller.hxx
// ./opencascade/BOPAlgo_MakerVolume.hxx
// ./opencascade/BOPAlgo_PWireEdgeSet.hxx
// ./opencascade/BOPAlgo_CheckStatus.hxx
// ./opencascade/BOPAlgo_PBOP.hxx
// ./opencascade/BOPAlgo_ArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_Options.hxx
// ./opencascade/BOPAlgo_SectionAttribute.hxx
// ./opencascade/BOPAlgo_BuilderFace.hxx
// ./opencascade/BOPAlgo_PSection.hxx
// ./opencascade/BOPAlgo_Builder.hxx
// ./opencascade/BOPAlgo_CellsBuilder.hxx
// ./opencascade/BOPAlgo_Alerts.hxx
// ./opencascade/BOPAlgo_PBuilder.hxx
// ./opencascade/BOPAlgo_CheckResult.hxx
// ./opencascade/BOPAlgo_ToolsProvider.hxx
// ./opencascade/BOPAlgo_Tools.hxx
// ./opencascade/BOPAlgo_WireEdgeSet.hxx
// ./opencascade/BOPAlgo_ListOfCheckResult.hxx
    preregister_template_NCollection_List<BOPAlgo_CheckResult>(m,"BOPAlgo_ListOfCheckResult");  
// ./opencascade/BOPAlgo_CheckerSI.hxx
// ./opencascade/BOPAlgo_ShellSplitter.hxx
// ./opencascade/BOPAlgo_Algo.hxx
// ./opencascade/BOPAlgo_RemoveFeatures.hxx
// ./opencascade/BOPAlgo_BuilderShape.hxx

};

// user-defined post-inclusion per module

// user-defined post
