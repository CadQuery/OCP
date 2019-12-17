
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_BOPAlgo(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BOPAlgo"));


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

// classes


    static_cast<py::class_<BOPAlgo_Options ,std::unique_ptr<BOPAlgo_Options>  >>(m.attr("BOPAlgo_Options"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (BOPAlgo_Options::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::Allocator),
             R"#(Returns allocator)#" )
        .def("Clear",
             (void (BOPAlgo_Options::*)() ) static_cast<void (BOPAlgo_Options::*)() >(&BOPAlgo_Options::Clear),
             R"#(Clears all warnings and errors, and any data cached by the algorithm. User defined options are not cleared.)#" )
        .def("AddError",
             (void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> &  ) ) static_cast<void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> &  ) >(&BOPAlgo_Options::AddError),
             R"#(Adds the alert as error (fail))#"  , py::arg("theAlert"))
        .def("AddWarning",
             (void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> &  ) ) static_cast<void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> &  ) >(&BOPAlgo_Options::AddWarning),
             R"#(Adds the alert as warning)#"  , py::arg("theAlert"))
        .def("HasErrors",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::HasErrors),
             R"#(Returns true if algorithm has failed)#" )
        .def("HasError",
             (Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> &  ) const>(&BOPAlgo_Options::HasError),
             R"#(Returns true if algorithm has generated error of specified type)#"  , py::arg("theType"))
        .def("HasWarnings",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::HasWarnings),
             R"#(Returns true if algorithm has generated some warning alerts)#" )
        .def("HasWarning",
             (Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> &  ) const>(&BOPAlgo_Options::HasWarning),
             R"#(Returns true if algorithm has generated warning of specified type)#"  , py::arg("theType"))
        .def("GetReport",
             (const opencascade::handle<Message_Report> & (BOPAlgo_Options::*)() const) static_cast<const opencascade::handle<Message_Report> & (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::GetReport),
             R"#(Returns report collecting all errors and warnings)#" )
        .def("DumpErrors",
             (void (BOPAlgo_Options::*)( std::ostream &  ) const) static_cast<void (BOPAlgo_Options::*)( std::ostream &  ) const>(&BOPAlgo_Options::DumpErrors),
             R"#(Dumps the error status into the given stream)#"  , py::arg("theOS"))
        .def("DumpWarnings",
             (void (BOPAlgo_Options::*)( std::ostream &  ) const) static_cast<void (BOPAlgo_Options::*)( std::ostream &  ) const>(&BOPAlgo_Options::DumpWarnings),
             R"#(Dumps the warning statuses into the given stream)#"  , py::arg("theOS"))
        .def("ClearWarnings",
             (void (BOPAlgo_Options::*)() ) static_cast<void (BOPAlgo_Options::*)() >(&BOPAlgo_Options::ClearWarnings),
             R"#(Clears the warnings of the algorithm)#" )
        .def("SetRunParallel",
             (void (BOPAlgo_Options::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_Options::*)( const Standard_Boolean  ) >(&BOPAlgo_Options::SetRunParallel),
             R"#(Set the flag of parallel processing if <theFlag> is true the parallel processing is switched on if <theFlag> is false the parallel processing is switched off)#"  , py::arg("theFlag"))
        .def("RunParallel",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::RunParallel),
             R"#(Returns the flag of parallel processing)#" )
        .def("SetFuzzyValue",
             (void (BOPAlgo_Options::*)( const Standard_Real  ) ) static_cast<void (BOPAlgo_Options::*)( const Standard_Real  ) >(&BOPAlgo_Options::SetFuzzyValue),
             R"#(Sets the additional tolerance)#"  , py::arg("theFuzz"))
        .def("FuzzyValue",
             (Standard_Real (BOPAlgo_Options::*)() const) static_cast<Standard_Real (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::FuzzyValue),
             R"#(Returns the additional tolerance)#" )
        .def("SetProgressIndicator",
             (void (BOPAlgo_Options::*)( const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (BOPAlgo_Options::*)( const opencascade::handle<Message_ProgressIndicator> &  ) >(&BOPAlgo_Options::SetProgressIndicator),
             R"#(Set the Progress Indicator object.)#"  , py::arg("theObj"))
        .def("SetUseOBB",
             (void (BOPAlgo_Options::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_Options::*)( const Standard_Boolean  ) >(&BOPAlgo_Options::SetUseOBB),
             R"#(Enables/Disables the usage of OBB)#"  , py::arg("theUseOBB"))
        .def("UseOBB",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::UseOBB),
             R"#(Returns the flag defining usage of OBB)#" )
        .def_static("GetParallelMode_s",
                    (Standard_Boolean (*)() ) static_cast<Standard_Boolean (*)() >(&BOPAlgo_Options::GetParallelMode),
                    R"#(Gets the global parallel mode)#" )
        .def_static("SetParallelMode_s",
                    (void (*)( const Standard_Boolean  ) ) static_cast<void (*)( const Standard_Boolean  ) >(&BOPAlgo_Options::SetParallelMode),
                    R"#(Sets the global parallel mode)#"  , py::arg("theNewMode"))
;

    register_default_constructor<BOPAlgo_AlertBOPNotAllowed ,opencascade::handle<BOPAlgo_AlertBOPNotAllowed>>(m,"BOPAlgo_AlertBOPNotAllowed");

    static_cast<py::class_<BOPAlgo_AlertBOPNotAllowed ,opencascade::handle<BOPAlgo_AlertBOPNotAllowed>  , Message_Alert >>(m.attr("BOPAlgo_AlertBOPNotAllowed"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotAllowed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotAllowed::*)() const>(&BOPAlgo_AlertBOPNotAllowed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBOPNotAllowed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBOPNotAllowed::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertBuilderFailed ,opencascade::handle<BOPAlgo_AlertBuilderFailed>>(m,"BOPAlgo_AlertBuilderFailed");

    static_cast<py::class_<BOPAlgo_AlertBuilderFailed ,opencascade::handle<BOPAlgo_AlertBuilderFailed>  , Message_Alert >>(m.attr("BOPAlgo_AlertBuilderFailed"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuilderFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuilderFailed::*)() const>(&BOPAlgo_AlertBuilderFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBuilderFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBuilderFailed::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertMultipleArguments ,opencascade::handle<BOPAlgo_AlertMultipleArguments>>(m,"BOPAlgo_AlertMultipleArguments");

    static_cast<py::class_<BOPAlgo_AlertMultipleArguments ,opencascade::handle<BOPAlgo_AlertMultipleArguments>  , Message_Alert >>(m.attr("BOPAlgo_AlertMultipleArguments"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertMultipleArguments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertMultipleArguments::*)() const>(&BOPAlgo_AlertMultipleArguments::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertMultipleArguments::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertMultipleArguments::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertNullInputShapes ,opencascade::handle<BOPAlgo_AlertNullInputShapes>>(m,"BOPAlgo_AlertNullInputShapes");

    static_cast<py::class_<BOPAlgo_AlertNullInputShapes ,opencascade::handle<BOPAlgo_AlertNullInputShapes>  , Message_Alert >>(m.attr("BOPAlgo_AlertNullInputShapes"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNullInputShapes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNullInputShapes::*)() const>(&BOPAlgo_AlertNullInputShapes::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNullInputShapes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNullInputShapes::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertSolidBuilderFailed ,opencascade::handle<BOPAlgo_AlertSolidBuilderFailed>>(m,"BOPAlgo_AlertSolidBuilderFailed");

    static_cast<py::class_<BOPAlgo_AlertSolidBuilderFailed ,opencascade::handle<BOPAlgo_AlertSolidBuilderFailed>  , Message_Alert >>(m.attr("BOPAlgo_AlertSolidBuilderFailed"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderFailed::*)() const>(&BOPAlgo_AlertSolidBuilderFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertSolidBuilderFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertSolidBuilderFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertBadPositioning ,opencascade::handle<BOPAlgo_AlertBadPositioning>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertBadPositioning"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBadPositioning::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBadPositioning::*)() const>(&BOPAlgo_AlertBadPositioning::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBadPositioning::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBadPositioning::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertNotSplittableEdge ,opencascade::handle<BOPAlgo_AlertNotSplittableEdge>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertNotSplittableEdge"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNotSplittableEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNotSplittableEdge::*)() const>(&BOPAlgo_AlertNotSplittableEdge::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNotSplittableEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNotSplittableEdge::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForFacesFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForFacesFailed>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertRemovalOfIBForFacesFailed"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForFacesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForFacesFailed::*)() const>(&BOPAlgo_AlertRemovalOfIBForFacesFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForFacesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForFacesFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForSolidsFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForSolidsFailed>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertRemovalOfIBForSolidsFailed"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForSolidsFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForSolidsFailed::*)() const>(&BOPAlgo_AlertRemovalOfIBForSolidsFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForSolidsFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForSolidsFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertShellSplitterFailed ,opencascade::handle<BOPAlgo_AlertShellSplitterFailed>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertShellSplitterFailed"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertShellSplitterFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertShellSplitterFailed::*)() const>(&BOPAlgo_AlertShellSplitterFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertShellSplitterFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertShellSplitterFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertIntersectionOfPairOfShapesFailed ,opencascade::handle<BOPAlgo_AlertIntersectionOfPairOfShapesFailed>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertIntersectionOfPairOfShapesFailed"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionOfPairOfShapesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionOfPairOfShapesFailed::*)() const>(&BOPAlgo_AlertIntersectionOfPairOfShapesFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertIntersectionOfPairOfShapesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertIntersectionOfPairOfShapesFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertAcquiredSelfIntersection ,opencascade::handle<BOPAlgo_AlertAcquiredSelfIntersection>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertAcquiredSelfIntersection"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertAcquiredSelfIntersection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertAcquiredSelfIntersection::*)() const>(&BOPAlgo_AlertAcquiredSelfIntersection::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertAcquiredSelfIntersection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertAcquiredSelfIntersection::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertNoFacesToRemove ,opencascade::handle<BOPAlgo_AlertNoFacesToRemove>>(m,"BOPAlgo_AlertNoFacesToRemove");

    static_cast<py::class_<BOPAlgo_AlertNoFacesToRemove ,opencascade::handle<BOPAlgo_AlertNoFacesToRemove>  , Message_Alert >>(m.attr("BOPAlgo_AlertNoFacesToRemove"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFacesToRemove::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFacesToRemove::*)() const>(&BOPAlgo_AlertNoFacesToRemove::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNoFacesToRemove::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNoFacesToRemove::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertRemoveFeaturesFailed ,opencascade::handle<BOPAlgo_AlertRemoveFeaturesFailed>>(m,"BOPAlgo_AlertRemoveFeaturesFailed");

    static_cast<py::class_<BOPAlgo_AlertRemoveFeaturesFailed ,opencascade::handle<BOPAlgo_AlertRemoveFeaturesFailed>  , Message_Alert >>(m.attr("BOPAlgo_AlertRemoveFeaturesFailed"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemoveFeaturesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemoveFeaturesFailed::*)() const>(&BOPAlgo_AlertRemoveFeaturesFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemoveFeaturesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemoveFeaturesFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertUnableToOrientTheShape ,opencascade::handle<BOPAlgo_AlertUnableToOrientTheShape>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertUnableToOrientTheShape"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToOrientTheShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToOrientTheShape::*)() const>(&BOPAlgo_AlertUnableToOrientTheShape::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToOrientTheShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToOrientTheShape::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_Algo ,std::unique_ptr<BOPAlgo_Algo, py::nodelete> ,Py_BOPAlgo_Algo , BOPAlgo_Options >>(m.attr("BOPAlgo_Algo"))
        .def("Perform",
             (void (BOPAlgo_Algo::*)() ) static_cast<void (BOPAlgo_Algo::*)() >(&BOPAlgo_Algo::Perform),
             R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_BuilderShape ,std::unique_ptr<BOPAlgo_BuilderShape, py::nodelete> ,Py_BOPAlgo_BuilderShape , BOPAlgo_Algo >>(m.attr("BOPAlgo_BuilderShape"))
        .def("Shape",
             (const TopoDS_Shape & (BOPAlgo_BuilderShape::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::Shape),
             R"#(Returns the result of algorithm)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape &  ) >(&BOPAlgo_BuilderShape::Generated),
             R"#(Returns the list of shapes generated from the shape theS.)#"  , py::arg("theS"))
        .def("Modified",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape &  ) >(&BOPAlgo_BuilderShape::Modified),
             R"#(Returns the list of shapes modified from the shape theS.)#"  , py::arg("theS"))
        .def("IsDeleted",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)( const TopoDS_Shape &  ) >(&BOPAlgo_BuilderShape::IsDeleted),
             R"#(Returns true if the shape theS has been deleted.)#"  , py::arg("theS"))
        .def("HasDeleted",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::HasDeleted),
             R"#(Returns true if the at least one shape(or subshape) of arguments has been deleted.)#" )
        .def("HasGenerated",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::HasGenerated),
             R"#(Returns true if the at least one shape(or subshape) of arguments has generated shapes.)#" )
        .def("HasModified",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::HasModified),
             R"#(Returns true if the at least one shape(or subshape) of arguments has modified shapes.)#" )
        .def("ImagesResult",
             (const TopTools_IndexedDataMapOfShapeListOfShape & (BOPAlgo_BuilderShape::*)() const) static_cast<const TopTools_IndexedDataMapOfShapeListOfShape & (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::ImagesResult),
             R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_BuilderArea ,std::unique_ptr<BOPAlgo_BuilderArea, py::nodelete> ,Py_BOPAlgo_BuilderArea , BOPAlgo_Algo >>(m.attr("BOPAlgo_BuilderArea"))
        .def("SetContext",
             (void (BOPAlgo_BuilderArea::*)( const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (BOPAlgo_BuilderArea::*)( const opencascade::handle<IntTools_Context> &  ) >(&BOPAlgo_BuilderArea::SetContext),
             R"#(Sets the context for the algorithms)#"  , py::arg("theContext"))
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::Shapes),
             R"#(Returns the input shapes)#" )
        .def("SetShapes",
             (void (BOPAlgo_BuilderArea::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BOPAlgo_BuilderArea::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BOPAlgo_BuilderArea::SetShapes),
             R"#(Sets the shapes for building areas)#"  , py::arg("theLS"))
        .def("Loops",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::Loops),
             R"#(Returns the found loops)#" )
        .def("Areas",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::Areas),
             R"#(Returns the found areas)#" )
        .def("SetAvoidInternalShapes",
             (void (BOPAlgo_BuilderArea::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_BuilderArea::*)( const Standard_Boolean  ) >(&BOPAlgo_BuilderArea::SetAvoidInternalShapes),
             R"#(Defines the preventing of addition of internal parts into result. The default value is FALSE, i.e. the internal parts are added into result.)#"  , py::arg("theAvoidInternal"))
        .def("IsAvoidInternalShapes",
             (Standard_Boolean (BOPAlgo_BuilderArea::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::IsAvoidInternalShapes),
             R"#(Returns the AvoidInternalShapes flag)#" )
;


    static_cast<py::class_<BOPAlgo_WireSplitter ,std::unique_ptr<BOPAlgo_WireSplitter>  , BOPAlgo_Algo >>(m.attr("BOPAlgo_WireSplitter"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("SetWES",
             (void (BOPAlgo_WireSplitter::*)( const BOPAlgo_WireEdgeSet &  ) ) static_cast<void (BOPAlgo_WireSplitter::*)( const BOPAlgo_WireEdgeSet &  ) >(&BOPAlgo_WireSplitter::SetWES),
             R"#(None)#"  , py::arg("theWES"))
        .def("WES",
             (BOPAlgo_WireEdgeSet & (BOPAlgo_WireSplitter::*)() ) static_cast<BOPAlgo_WireEdgeSet & (BOPAlgo_WireSplitter::*)() >(&BOPAlgo_WireSplitter::WES),
             R"#(None)#" )
        .def("SetContext",
             (void (BOPAlgo_WireSplitter::*)( const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (BOPAlgo_WireSplitter::*)( const opencascade::handle<IntTools_Context> &  ) >(&BOPAlgo_WireSplitter::SetContext),
             R"#(Sets the context for the algorithm)#"  , py::arg("theContext"))
        .def("Context",
             (const opencascade::handle<IntTools_Context> & (BOPAlgo_WireSplitter::*)() ) static_cast<const opencascade::handle<IntTools_Context> & (BOPAlgo_WireSplitter::*)() >(&BOPAlgo_WireSplitter::Context),
             R"#(Returns the context)#" )
        .def("Perform",
             (void (BOPAlgo_WireSplitter::*)() ) static_cast<void (BOPAlgo_WireSplitter::*)() >(&BOPAlgo_WireSplitter::Perform),
             R"#(None)#" )
        .def_static("MakeWire_s",
                    (void (*)( NCollection_List<TopoDS_Shape> & ,  TopoDS_Wire &  ) ) static_cast<void (*)( NCollection_List<TopoDS_Shape> & ,  TopoDS_Wire &  ) >(&BOPAlgo_WireSplitter::MakeWire),
                    R"#(None)#"  , py::arg("theLE"),  py::arg("theW"))
        .def_static("SplitBlock_s",
                    (void (*)( const TopoDS_Face & ,  BOPTools_ConnexityBlock & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (*)( const TopoDS_Face & ,  BOPTools_ConnexityBlock & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPAlgo_WireSplitter::SplitBlock),
                    R"#(None)#"  , py::arg("theF"),  py::arg("theCB"),  py::arg("theContext"))
;


    static_cast<py::class_<BOPAlgo_PaveFiller ,std::unique_ptr<BOPAlgo_PaveFiller>  , BOPAlgo_Algo >>(m.attr("BOPAlgo_PaveFiller"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("DS",
             (const BOPDS_DS & (BOPAlgo_PaveFiller::*)() ) static_cast<const BOPDS_DS & (BOPAlgo_PaveFiller::*)() >(&BOPAlgo_PaveFiller::DS),
             R"#(None)#" )
        .def("PDS",
             (BOPDS_PDS (BOPAlgo_PaveFiller::*)() ) static_cast<BOPDS_PDS (BOPAlgo_PaveFiller::*)() >(&BOPAlgo_PaveFiller::PDS),
             R"#(None)#" )
        .def("SetArguments",
             (void (BOPAlgo_PaveFiller::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BOPAlgo_PaveFiller::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BOPAlgo_PaveFiller::SetArguments),
             R"#(None)#"  , py::arg("theLS"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BOPAlgo_PaveFiller::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_PaveFiller::*)() const>(&BOPAlgo_PaveFiller::Arguments),
             R"#(None)#" )
        .def("Context",
             (const opencascade::handle<IntTools_Context> & (BOPAlgo_PaveFiller::*)() ) static_cast<const opencascade::handle<IntTools_Context> & (BOPAlgo_PaveFiller::*)() >(&BOPAlgo_PaveFiller::Context),
             R"#(None)#" )
        .def("SetSectionAttribute",
             (void (BOPAlgo_PaveFiller::*)( const BOPAlgo_SectionAttribute &  ) ) static_cast<void (BOPAlgo_PaveFiller::*)( const BOPAlgo_SectionAttribute &  ) >(&BOPAlgo_PaveFiller::SetSectionAttribute),
             R"#(None)#"  , py::arg("theSecAttr"))
        .def("SetNonDestructive",
             (void (BOPAlgo_PaveFiller::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_PaveFiller::*)( const Standard_Boolean  ) >(&BOPAlgo_PaveFiller::SetNonDestructive),
             R"#(Sets the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#"  , py::arg("theFlag"))
        .def("NonDestructive",
             (Standard_Boolean (BOPAlgo_PaveFiller::*)() const) static_cast<Standard_Boolean (BOPAlgo_PaveFiller::*)() const>(&BOPAlgo_PaveFiller::NonDestructive),
             R"#(Returns the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#" )
        .def("Perform",
             (void (BOPAlgo_PaveFiller::*)() ) static_cast<void (BOPAlgo_PaveFiller::*)() >(&BOPAlgo_PaveFiller::Perform),
             R"#(None)#" )
        .def("SetGlue",
             (void (BOPAlgo_PaveFiller::*)( const BOPAlgo_GlueEnum  ) ) static_cast<void (BOPAlgo_PaveFiller::*)( const BOPAlgo_GlueEnum  ) >(&BOPAlgo_PaveFiller::SetGlue),
             R"#(Sets the glue option for the algorithm)#"  , py::arg("theGlue"))
        .def("Glue",
             (BOPAlgo_GlueEnum (BOPAlgo_PaveFiller::*)() const) static_cast<BOPAlgo_GlueEnum (BOPAlgo_PaveFiller::*)() const>(&BOPAlgo_PaveFiller::Glue),
             R"#(Returns the glue option of the algorithm)#" )
        .def("SetAvoidBuildPCurve",
             (void (BOPAlgo_PaveFiller::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_PaveFiller::*)( const Standard_Boolean  ) >(&BOPAlgo_PaveFiller::SetAvoidBuildPCurve),
             R"#(Sets the flag to avoid building of p-curves of edges on faces)#"  , py::arg("theValue"))
        .def("IsAvoidBuildPCurve",
             (Standard_Boolean (BOPAlgo_PaveFiller::*)() const) static_cast<Standard_Boolean (BOPAlgo_PaveFiller::*)() const>(&BOPAlgo_PaveFiller::IsAvoidBuildPCurve),
             R"#(Returns the flag to avoid building of p-curves of edges on faces)#" )
;


    static_cast<py::class_<BOPAlgo_ArgumentAnalyzer ,std::unique_ptr<BOPAlgo_ArgumentAnalyzer>  , BOPAlgo_Algo >>(m.attr("BOPAlgo_ArgumentAnalyzer"))
        .def(py::init<  >()  )
        .def("SetShape1",
             (void (BOPAlgo_ArgumentAnalyzer::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_ArgumentAnalyzer::*)( const TopoDS_Shape &  ) >(&BOPAlgo_ArgumentAnalyzer::SetShape1),
             R"#(sets object shape)#"  , py::arg("TheShape"))
        .def("SetShape2",
             (void (BOPAlgo_ArgumentAnalyzer::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_ArgumentAnalyzer::*)( const TopoDS_Shape &  ) >(&BOPAlgo_ArgumentAnalyzer::SetShape2),
             R"#(sets tool shape)#"  , py::arg("TheShape"))
        .def("GetShape1",
             (const TopoDS_Shape & (BOPAlgo_ArgumentAnalyzer::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_ArgumentAnalyzer::*)() const>(&BOPAlgo_ArgumentAnalyzer::GetShape1),
             R"#(returns object shape;)#" )
        .def("GetShape2",
             (const TopoDS_Shape & (BOPAlgo_ArgumentAnalyzer::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_ArgumentAnalyzer::*)() const>(&BOPAlgo_ArgumentAnalyzer::GetShape2),
             R"#(returns tool shape)#" )
        .def("OperationType",
             (BOPAlgo_Operation & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<BOPAlgo_Operation & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::OperationType),
             R"#(returns ref)#" )
        .def("StopOnFirstFaulty",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::StopOnFirstFaulty),
             R"#(returns ref)#" )
        .def("ArgumentTypeMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::ArgumentTypeMode),
             R"#(Returns (modifiable) mode that means checking types of shapes.)#" )
        .def("SelfInterMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::SelfInterMode),
             R"#(Returns (modifiable) mode that means checking of self-intersection of shapes.)#" )
        .def("SmallEdgeMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::SmallEdgeMode),
             R"#(Returns (modifiable) mode that means checking of small edges.)#" )
        .def("RebuildFaceMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::RebuildFaceMode),
             R"#(Returns (modifiable) mode that means checking of possibility to split or rebuild faces.)#" )
        .def("TangentMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::TangentMode),
             R"#(Returns (modifiable) mode that means checking of tangency between subshapes.)#" )
        .def("MergeVertexMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::MergeVertexMode),
             R"#(Returns (modifiable) mode that means checking of problem of merging vertices.)#" )
        .def("MergeEdgeMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::MergeEdgeMode),
             R"#(Returns (modifiable) mode that means checking of problem of merging edges.)#" )
        .def("ContinuityMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::ContinuityMode),
             R"#(Returns (modifiable) mode that means checking of problem of continuity of the shape.)#" )
        .def("CurveOnSurfaceMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::CurveOnSurfaceMode),
             R"#(Returns (modifiable) mode that means checking of problem of invalid curve on surface.)#" )
        .def("Perform",
             (void (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<void (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::Perform),
             R"#(performs analysis)#" )
        .def("HasFaulty",
             (Standard_Boolean (BOPAlgo_ArgumentAnalyzer::*)() const) static_cast<Standard_Boolean (BOPAlgo_ArgumentAnalyzer::*)() const>(&BOPAlgo_ArgumentAnalyzer::HasFaulty),
             R"#(result of test)#" )
        .def("GetCheckResult",
             (const BOPAlgo_ListOfCheckResult & (BOPAlgo_ArgumentAnalyzer::*)() const) static_cast<const BOPAlgo_ListOfCheckResult & (BOPAlgo_ArgumentAnalyzer::*)() const>(&BOPAlgo_ArgumentAnalyzer::GetCheckResult),
             R"#(returns a result of test)#" )
        .def("ArgumentTypeMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::ArgumentTypeMode),
             R"#(Returns (modifiable) mode that means checking types of shapes.)#" )
        .def("SelfInterMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::SelfInterMode),
             R"#(Returns (modifiable) mode that means checking of self-intersection of shapes.)#" )
        .def("SmallEdgeMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::SmallEdgeMode),
             R"#(Returns (modifiable) mode that means checking of small edges.)#" )
        .def("RebuildFaceMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::RebuildFaceMode),
             R"#(Returns (modifiable) mode that means checking of possibility to split or rebuild faces.)#" )
        .def("TangentMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::TangentMode),
             R"#(Returns (modifiable) mode that means checking of tangency between subshapes.)#" )
        .def("MergeVertexMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::MergeVertexMode),
             R"#(Returns (modifiable) mode that means checking of problem of merging vertices.)#" )
        .def("MergeEdgeMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::MergeEdgeMode),
             R"#(Returns (modifiable) mode that means checking of problem of merging edges.)#" )
        .def("ContinuityMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::ContinuityMode),
             R"#(Returns (modifiable) mode that means checking of problem of continuity of the shape.)#" )
        .def("CurveOnSurfaceMode",
             (Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() ) static_cast<Standard_Boolean & (BOPAlgo_ArgumentAnalyzer::*)() >(&BOPAlgo_ArgumentAnalyzer::CurveOnSurfaceMode),
             R"#(Returns (modifiable) mode that means checking of problem of invalid curve on surface.)#" )
;


    static_cast<py::class_<BOPAlgo_Builder ,std::unique_ptr<BOPAlgo_Builder>  , BOPAlgo_BuilderShape >>(m.attr("BOPAlgo_Builder"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Clear",
             (void (BOPAlgo_Builder::*)() ) static_cast<void (BOPAlgo_Builder::*)() >(&BOPAlgo_Builder::Clear),
             R"#(Clears the content of the algorithm.)#" )
        .def("PPaveFiller",
             (BOPAlgo_PPaveFiller (BOPAlgo_Builder::*)() ) static_cast<BOPAlgo_PPaveFiller (BOPAlgo_Builder::*)() >(&BOPAlgo_Builder::PPaveFiller),
             R"#(Returns the PaveFiller, algorithm for sub-shapes intersection.)#" )
        .def("PDS",
             (BOPDS_PDS (BOPAlgo_Builder::*)() ) static_cast<BOPDS_PDS (BOPAlgo_Builder::*)() >(&BOPAlgo_Builder::PDS),
             R"#(Returns the Data Structure, holder of intersection information.)#" )
        .def("Context",
             (opencascade::handle<IntTools_Context> (BOPAlgo_Builder::*)() const) static_cast<opencascade::handle<IntTools_Context> (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Context),
             R"#(Returns the Context, tool for cashing heavy algorithms.)#" )
        .def("AddArgument",
             (void (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) >(&BOPAlgo_Builder::AddArgument),
             R"#(Adds the argument to the operation.)#"  , py::arg("theShape"))
        .def("SetArguments",
             (void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BOPAlgo_Builder::SetArguments),
             R"#(Sets the list of arguments for the operation.)#"  , py::arg("theLS"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Arguments),
             R"#(Returns the list of arguments.)#" )
        .def("SetNonDestructive",
             (void (BOPAlgo_Builder::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_Builder::*)( const Standard_Boolean  ) >(&BOPAlgo_Builder::SetNonDestructive),
             R"#(Sets the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated. This flag is taken into account if internal PaveFiller is used only. In the case of calling PerformWithFiller the corresponding flag of that PaveFiller is in force.)#"  , py::arg("theFlag"))
        .def("NonDestructive",
             (Standard_Boolean (BOPAlgo_Builder::*)() const) static_cast<Standard_Boolean (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::NonDestructive),
             R"#(Returns the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#" )
        .def("SetGlue",
             (void (BOPAlgo_Builder::*)( const BOPAlgo_GlueEnum  ) ) static_cast<void (BOPAlgo_Builder::*)( const BOPAlgo_GlueEnum  ) >(&BOPAlgo_Builder::SetGlue),
             R"#(Sets the glue option for the algorithm)#"  , py::arg("theGlue"))
        .def("Glue",
             (BOPAlgo_GlueEnum (BOPAlgo_Builder::*)() const) static_cast<BOPAlgo_GlueEnum (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Glue),
             R"#(Returns the glue option of the algorithm)#" )
        .def("SetCheckInverted",
             (void (BOPAlgo_Builder::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_Builder::*)( const Standard_Boolean  ) >(&BOPAlgo_Builder::SetCheckInverted),
             R"#(Enables/Disables the check of the input solids for inverted status)#"  , py::arg("theCheck"))
        .def("CheckInverted",
             (Standard_Boolean (BOPAlgo_Builder::*)() const) static_cast<Standard_Boolean (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::CheckInverted),
             R"#(Returns the flag defining whether the check for input solids on inverted status should be performed or not.)#" )
        .def("Perform",
             (void (BOPAlgo_Builder::*)() ) static_cast<void (BOPAlgo_Builder::*)() >(&BOPAlgo_Builder::Perform),
             R"#(Performs the operation. The intersection will be performed also.)#" )
        .def("PerformWithFiller",
             (void (BOPAlgo_Builder::*)( const BOPAlgo_PaveFiller &  ) ) static_cast<void (BOPAlgo_Builder::*)( const BOPAlgo_PaveFiller &  ) >(&BOPAlgo_Builder::PerformWithFiller),
             R"#(Performs the operation with the prepared filler. The intersection will not be performed in this case.)#"  , py::arg("theFiller"))
        .def("Generated",
             (const TopTools_ListOfShape & (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) >(&BOPAlgo_Builder::Generated),
             R"#(Returns the list of shapes generated from the shape theS.)#"  , py::arg("theS"))
        .def("Modified",
             (const TopTools_ListOfShape & (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) >(&BOPAlgo_Builder::Modified),
             R"#(Returns the list of shapes modified from the shape theS.)#"  , py::arg("theS"))
        .def("IsDeleted",
             (Standard_Boolean (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BOPAlgo_Builder::*)( const TopoDS_Shape &  ) >(&BOPAlgo_Builder::IsDeleted),
             R"#(Returns true if the shape theS has been deleted.)#"  , py::arg("theS"))
        .def("Images",
             (const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Images),
             R"#(Returns the map of images.)#" )
        .def("Origins",
             (const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Origins),
             R"#(Returns the map of origins.)#" )
        .def("ShapesSD",
             (const TopTools_DataMapOfShapeShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_DataMapOfShapeShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::ShapesSD),
             R"#(Returns the map of Same Domain (SD) shapes - coinciding shapes from different arguments.)#" )
;

    register_default_constructor<BOPAlgo_AlertBOPNotSet ,opencascade::handle<BOPAlgo_AlertBOPNotSet>>(m,"BOPAlgo_AlertBOPNotSet");

    static_cast<py::class_<BOPAlgo_AlertBOPNotSet ,opencascade::handle<BOPAlgo_AlertBOPNotSet>  , Message_Alert >>(m.attr("BOPAlgo_AlertBOPNotSet"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotSet::*)() const>(&BOPAlgo_AlertBOPNotSet::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBOPNotSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBOPNotSet::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertNoFiller ,opencascade::handle<BOPAlgo_AlertNoFiller>>(m,"BOPAlgo_AlertNoFiller");

    static_cast<py::class_<BOPAlgo_AlertNoFiller ,opencascade::handle<BOPAlgo_AlertNoFiller>  , Message_Alert >>(m.attr("BOPAlgo_AlertNoFiller"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFiller::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFiller::*)() const>(&BOPAlgo_AlertNoFiller::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNoFiller::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNoFiller::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BOPAlgo_AlertTooFewArguments ,opencascade::handle<BOPAlgo_AlertTooFewArguments>>(m,"BOPAlgo_AlertTooFewArguments");

    static_cast<py::class_<BOPAlgo_AlertTooFewArguments ,opencascade::handle<BOPAlgo_AlertTooFewArguments>  , Message_Alert >>(m.attr("BOPAlgo_AlertTooFewArguments"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooFewArguments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooFewArguments::*)() const>(&BOPAlgo_AlertTooFewArguments::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertTooFewArguments::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertTooFewArguments::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForEdgesFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForEdgesFailed>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertRemovalOfIBForEdgesFailed"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForEdgesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForEdgesFailed::*)() const>(&BOPAlgo_AlertRemovalOfIBForEdgesFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForEdgesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForEdgesFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertSelfInterferingShape ,opencascade::handle<BOPAlgo_AlertSelfInterferingShape>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertSelfInterferingShape"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSelfInterferingShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSelfInterferingShape::*)() const>(&BOPAlgo_AlertSelfInterferingShape::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertSelfInterferingShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertSelfInterferingShape::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertBuildingPCurveFailed ,opencascade::handle<BOPAlgo_AlertBuildingPCurveFailed>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertBuildingPCurveFailed"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuildingPCurveFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuildingPCurveFailed::*)() const>(&BOPAlgo_AlertBuildingPCurveFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBuildingPCurveFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBuildingPCurveFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertUnableToRemoveTheFeature ,opencascade::handle<BOPAlgo_AlertUnableToRemoveTheFeature>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertUnableToRemoveTheFeature"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToRemoveTheFeature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToRemoveTheFeature::*)() const>(&BOPAlgo_AlertUnableToRemoveTheFeature::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToRemoveTheFeature::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToRemoveTheFeature::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_CheckResult ,std::unique_ptr<BOPAlgo_CheckResult>  >>(m.attr("BOPAlgo_CheckResult"))
        .def(py::init<  >()  )
        .def("SetShape1",
             (void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) >(&BOPAlgo_CheckResult::SetShape1),
             R"#(sets ancestor shape (object) for faulty sub-shapes)#"  , py::arg("TheShape"))
        .def("AddFaultyShape1",
             (void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) >(&BOPAlgo_CheckResult::AddFaultyShape1),
             R"#(adds faulty sub-shapes from object to a list)#"  , py::arg("TheShape"))
        .def("SetShape2",
             (void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) >(&BOPAlgo_CheckResult::SetShape2),
             R"#(sets ancestor shape (tool) for faulty sub-shapes)#"  , py::arg("TheShape"))
        .def("AddFaultyShape2",
             (void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const TopoDS_Shape &  ) >(&BOPAlgo_CheckResult::AddFaultyShape2),
             R"#(adds faulty sub-shapes from tool to a list)#"  , py::arg("TheShape"))
        .def("GetShape1",
             (const TopoDS_Shape & (BOPAlgo_CheckResult::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetShape1),
             R"#(returns ancestor shape (object) for faulties)#" )
        .def("GetShape2",
             (const TopoDS_Shape & (BOPAlgo_CheckResult::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetShape2),
             R"#(returns ancestor shape (tool) for faulties)#" )
        .def("GetFaultyShapes1",
             (const TopTools_ListOfShape & (BOPAlgo_CheckResult::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetFaultyShapes1),
             R"#(returns list of faulty shapes for object)#" )
        .def("GetFaultyShapes2",
             (const TopTools_ListOfShape & (BOPAlgo_CheckResult::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetFaultyShapes2),
             R"#(returns list of faulty shapes for tool)#" )
        .def("SetCheckStatus",
             (void (BOPAlgo_CheckResult::*)( const BOPAlgo_CheckStatus  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const BOPAlgo_CheckStatus  ) >(&BOPAlgo_CheckResult::SetCheckStatus),
             R"#(set status of faulty)#"  , py::arg("TheStatus"))
        .def("GetCheckStatus",
             (BOPAlgo_CheckStatus (BOPAlgo_CheckResult::*)() const) static_cast<BOPAlgo_CheckStatus (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetCheckStatus),
             R"#(gets status of faulty)#" )
        .def("SetMaxDistance1",
             (void (BOPAlgo_CheckResult::*)( const Standard_Real  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const Standard_Real  ) >(&BOPAlgo_CheckResult::SetMaxDistance1),
             R"#(Sets max distance for the first shape)#"  , py::arg("theDist"))
        .def("SetMaxDistance2",
             (void (BOPAlgo_CheckResult::*)( const Standard_Real  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const Standard_Real  ) >(&BOPAlgo_CheckResult::SetMaxDistance2),
             R"#(Sets max distance for the second shape)#"  , py::arg("theDist"))
        .def("SetMaxParameter1",
             (void (BOPAlgo_CheckResult::*)( const Standard_Real  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const Standard_Real  ) >(&BOPAlgo_CheckResult::SetMaxParameter1),
             R"#(Sets the parameter for the first shape)#"  , py::arg("thePar"))
        .def("SetMaxParameter2",
             (void (BOPAlgo_CheckResult::*)( const Standard_Real  ) ) static_cast<void (BOPAlgo_CheckResult::*)( const Standard_Real  ) >(&BOPAlgo_CheckResult::SetMaxParameter2),
             R"#(Sets the parameter for the second shape)#"  , py::arg("thePar"))
        .def("GetMaxDistance1",
             (Standard_Real (BOPAlgo_CheckResult::*)() const) static_cast<Standard_Real (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetMaxDistance1),
             R"#(Returns the distance for the first shape)#" )
        .def("GetMaxDistance2",
             (Standard_Real (BOPAlgo_CheckResult::*)() const) static_cast<Standard_Real (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetMaxDistance2),
             R"#(Returns the distance for the second shape)#" )
        .def("GetMaxParameter1",
             (Standard_Real (BOPAlgo_CheckResult::*)() const) static_cast<Standard_Real (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetMaxParameter1),
             R"#(Returns the parameter for the fircst shape)#" )
        .def("GetMaxParameter2",
             (Standard_Real (BOPAlgo_CheckResult::*)() const) static_cast<Standard_Real (BOPAlgo_CheckResult::*)() const>(&BOPAlgo_CheckResult::GetMaxParameter2),
             R"#(Returns the parameter for the second shape)#" )
;


    static_cast<py::class_<BOPAlgo_WireEdgeSet ,std::unique_ptr<BOPAlgo_WireEdgeSet>  >>(m.attr("BOPAlgo_WireEdgeSet"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Clear",
             (void (BOPAlgo_WireEdgeSet::*)() ) static_cast<void (BOPAlgo_WireEdgeSet::*)() >(&BOPAlgo_WireEdgeSet::Clear),
             R"#(None)#" )
        .def("SetFace",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face &  ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face &  ) >(&BOPAlgo_WireEdgeSet::SetFace),
             R"#(None)#"  , py::arg("aF"))
        .def("Face",
             (const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Face),
             R"#(None)#" )
        .def("AddStartElement",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&BOPAlgo_WireEdgeSet::AddStartElement),
             R"#(None)#"  , py::arg("sS"))
        .def("StartElements",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::StartElements),
             R"#(None)#" )
        .def("AddShape",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&BOPAlgo_WireEdgeSet::AddShape),
             R"#(None)#"  , py::arg("sS"))
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Shapes),
             R"#(None)#" )
        .def("Clear",
             (void (BOPAlgo_WireEdgeSet::*)() ) static_cast<void (BOPAlgo_WireEdgeSet::*)() >(&BOPAlgo_WireEdgeSet::Clear),
             R"#(None)#" )
        .def("SetFace",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face &  ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face &  ) >(&BOPAlgo_WireEdgeSet::SetFace),
             R"#(None)#"  , py::arg("aF"))
        .def("Face",
             (const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Face),
             R"#(None)#" )
        .def("AddStartElement",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&BOPAlgo_WireEdgeSet::AddStartElement),
             R"#(None)#"  , py::arg("aE"))
        .def("StartElements",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::StartElements),
             R"#(None)#" )
        .def("AddShape",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&BOPAlgo_WireEdgeSet::AddShape),
             R"#(None)#"  , py::arg("aW"))
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Shapes),
             R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_ShellSplitter ,std::unique_ptr<BOPAlgo_ShellSplitter>  , BOPAlgo_Algo >>(m.attr("BOPAlgo_ShellSplitter"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("AddStartElement",
             (void (BOPAlgo_ShellSplitter::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_ShellSplitter::*)( const TopoDS_Shape &  ) >(&BOPAlgo_ShellSplitter::AddStartElement),
             R"#(adds a face <theS> to process)#"  , py::arg("theS"))
        .def("StartElements",
             (const TopTools_ListOfShape & (BOPAlgo_ShellSplitter::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_ShellSplitter::*)() const>(&BOPAlgo_ShellSplitter::StartElements),
             R"#(return the faces to process)#" )
        .def("Perform",
             (void (BOPAlgo_ShellSplitter::*)() ) static_cast<void (BOPAlgo_ShellSplitter::*)() >(&BOPAlgo_ShellSplitter::Perform),
             R"#(performs the algorithm)#" )
        .def("Shells",
             (const TopTools_ListOfShape & (BOPAlgo_ShellSplitter::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_ShellSplitter::*)() const>(&BOPAlgo_ShellSplitter::Shells),
             R"#(returns the loops)#" )
        .def_static("SplitBlock_s",
                    (void (*)( BOPTools_ConnexityBlock &  ) ) static_cast<void (*)( BOPTools_ConnexityBlock &  ) >(&BOPAlgo_ShellSplitter::SplitBlock),
                    R"#(None)#"  , py::arg("theCB"))
;


    static_cast<py::class_<BOPAlgo_Section ,std::unique_ptr<BOPAlgo_Section>  , BOPAlgo_Builder >>(m.attr("BOPAlgo_Section"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
;


    static_cast<py::class_<BOPAlgo_MakerVolume ,std::unique_ptr<BOPAlgo_MakerVolume>  , BOPAlgo_Builder >>(m.attr("BOPAlgo_MakerVolume"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Clear",
             (void (BOPAlgo_MakerVolume::*)() ) static_cast<void (BOPAlgo_MakerVolume::*)() >(&BOPAlgo_MakerVolume::Clear),
             R"#(Clears the data.)#" )
        .def("SetIntersect",
             (void (BOPAlgo_MakerVolume::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_MakerVolume::*)( const Standard_Boolean  ) >(&BOPAlgo_MakerVolume::SetIntersect),
             R"#(Sets the flag myIntersect: if <bIntersect> is TRUE the shapes from <myArguments> will be intersected. if <bIntersect> is FALSE no intersection will be done.)#"  , py::arg("bIntersect"))
        .def("IsIntersect",
             (Standard_Boolean (BOPAlgo_MakerVolume::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakerVolume::*)() const>(&BOPAlgo_MakerVolume::IsIntersect),
             R"#(Returns the flag <myIntersect>.)#" )
        .def("Box",
             (const TopoDS_Solid & (BOPAlgo_MakerVolume::*)() const) static_cast<const TopoDS_Solid & (BOPAlgo_MakerVolume::*)() const>(&BOPAlgo_MakerVolume::Box),
             R"#(Returns the solid box <mySBox>.)#" )
        .def("Faces",
             (const TopTools_ListOfShape & (BOPAlgo_MakerVolume::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakerVolume::*)() const>(&BOPAlgo_MakerVolume::Faces),
             R"#(Returns the processed faces <myFaces>.)#" )
        .def("SetAvoidInternalShapes",
             (void (BOPAlgo_MakerVolume::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_MakerVolume::*)( const Standard_Boolean  ) >(&BOPAlgo_MakerVolume::SetAvoidInternalShapes),
             R"#(Defines the preventing of addition of internal for solid parts into the result. By default the internal parts are added into result.)#"  , py::arg("theAvoidInternal"))
        .def("IsAvoidInternalShapes",
             (Standard_Boolean (BOPAlgo_MakerVolume::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakerVolume::*)() const>(&BOPAlgo_MakerVolume::IsAvoidInternalShapes),
             R"#(Returns the AvoidInternalShapes flag)#" )
        .def("Perform",
             (void (BOPAlgo_MakerVolume::*)() ) static_cast<void (BOPAlgo_MakerVolume::*)() >(&BOPAlgo_MakerVolume::Perform),
             R"#(Performs the operation.)#" )
        .def("Clear",
             (void (BOPAlgo_MakerVolume::*)() ) static_cast<void (BOPAlgo_MakerVolume::*)() >(&BOPAlgo_MakerVolume::Clear),
             R"#(Clears the data.)#" )
        .def("SetIntersect",
             (void (BOPAlgo_MakerVolume::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_MakerVolume::*)( const Standard_Boolean  ) >(&BOPAlgo_MakerVolume::SetIntersect),
             R"#(Sets the flag myIntersect: if <bIntersect> is TRUE the shapes from <myArguments> will be intersected. if <bIntersect> is FALSE no intersection will be done.)#"  , py::arg("bIntersect"))
        .def("IsIntersect",
             (Standard_Boolean (BOPAlgo_MakerVolume::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakerVolume::*)() const>(&BOPAlgo_MakerVolume::IsIntersect),
             R"#(Returns the flag <myIntersect>.)#" )
        .def("Box",
             (const TopoDS_Solid & (BOPAlgo_MakerVolume::*)() const) static_cast<const TopoDS_Solid & (BOPAlgo_MakerVolume::*)() const>(&BOPAlgo_MakerVolume::Box),
             R"#(Returns the solid box <mySBox>.)#" )
        .def("Faces",
             (const TopTools_ListOfShape & (BOPAlgo_MakerVolume::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakerVolume::*)() const>(&BOPAlgo_MakerVolume::Faces),
             R"#(Returns the processed faces <myFaces>.)#" )
;


    static_cast<py::class_<BOPAlgo_CellsBuilder ,std::unique_ptr<BOPAlgo_CellsBuilder>  , BOPAlgo_Builder >>(m.attr("BOPAlgo_CellsBuilder"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Clear",
             (void (BOPAlgo_CellsBuilder::*)() ) static_cast<void (BOPAlgo_CellsBuilder::*)() >(&BOPAlgo_CellsBuilder::Clear),
             R"#(Redefined method Clear - clears the contents.)#" )
        .def("AddToResult",
             (void (BOPAlgo_CellsBuilder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BOPAlgo_CellsBuilder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&BOPAlgo_CellsBuilder::AddToResult),
             R"#(Adding the parts to result. The parts are defined by two lists of shapes: <theLSToTake> defines the arguments which parts should be taken into result; <theLSToAvoid> defines the arguments which parts should not be taken into result; To be taken into result the part must be IN for all shapes from the list <theLSToTake> and must be OUT of all shapes from the list <theLSToAvoid>.)#"  , py::arg("theLSToTake"),  py::arg("theLSToAvoid"),  py::arg("theMaterial")=static_cast<const Standard_Integer>(0),  py::arg("theUpdate")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AddAllToResult",
             (void (BOPAlgo_CellsBuilder::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BOPAlgo_CellsBuilder::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&BOPAlgo_CellsBuilder::AddAllToResult),
             R"#(Add all split parts to result. <theMaterial> defines the removal of internal boundaries; <theUpdate> parameter defines whether to remove boundaries now or not.)#"  , py::arg("theMaterial")=static_cast<const Standard_Integer>(0),  py::arg("theUpdate")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RemoveFromResult",
             (void (BOPAlgo_CellsBuilder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BOPAlgo_CellsBuilder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> &  ) >(&BOPAlgo_CellsBuilder::RemoveFromResult),
             R"#(Removing the parts from result. The parts are defined by two lists of shapes: <theLSToTake> defines the arguments which parts should be removed from result; <theLSToAvoid> defines the arguments which parts should not be removed from result. To be removed from the result the part must be IN for all shapes from the list <theLSToTake> and must be OUT of all shapes from the list <theLSToAvoid>.)#"  , py::arg("theLSToTake"),  py::arg("theLSToAvoid"))
        .def("RemoveAllFromResult",
             (void (BOPAlgo_CellsBuilder::*)() ) static_cast<void (BOPAlgo_CellsBuilder::*)() >(&BOPAlgo_CellsBuilder::RemoveAllFromResult),
             R"#(Remove all parts from result.)#" )
        .def("RemoveInternalBoundaries",
             (void (BOPAlgo_CellsBuilder::*)() ) static_cast<void (BOPAlgo_CellsBuilder::*)() >(&BOPAlgo_CellsBuilder::RemoveInternalBoundaries),
             R"#(Removes internal boundaries between cells with the same material. If the result contains the cells with same material but of different dimension the removal of internal boundaries between these cells will not be performed. In case of some errors during the removal the method will set the appropriate warning status - use GetReport() to access them.)#" )
        .def("GetAllParts",
             (const TopoDS_Shape & (BOPAlgo_CellsBuilder::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_CellsBuilder::*)() const>(&BOPAlgo_CellsBuilder::GetAllParts),
             R"#(Get all split parts.)#" )
        .def("MakeContainers",
             (void (BOPAlgo_CellsBuilder::*)() ) static_cast<void (BOPAlgo_CellsBuilder::*)() >(&BOPAlgo_CellsBuilder::MakeContainers),
             R"#(Makes the Containers of proper type from the parts added to result.)#" )
;

    register_default_constructor<BOPAlgo_AlertPostTreatFF ,opencascade::handle<BOPAlgo_AlertPostTreatFF>>(m,"BOPAlgo_AlertPostTreatFF");

    static_cast<py::class_<BOPAlgo_AlertPostTreatFF ,opencascade::handle<BOPAlgo_AlertPostTreatFF>  , Message_Alert >>(m.attr("BOPAlgo_AlertPostTreatFF"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertPostTreatFF::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertPostTreatFF::*)() const>(&BOPAlgo_AlertPostTreatFF::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertPostTreatFF::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertPostTreatFF::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForMDimShapes ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForMDimShapes>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertRemovalOfIBForMDimShapes"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForMDimShapes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForMDimShapes::*)() const>(&BOPAlgo_AlertRemovalOfIBForMDimShapes::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForMDimShapes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForMDimShapes::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertUnsupportedType ,opencascade::handle<BOPAlgo_AlertUnsupportedType>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertUnsupportedType"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnsupportedType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnsupportedType::*)() const>(&BOPAlgo_AlertUnsupportedType::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnsupportedType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnsupportedType::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_ToolsProvider ,std::unique_ptr<BOPAlgo_ToolsProvider>  , BOPAlgo_Builder >>(m.attr("BOPAlgo_ToolsProvider"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Clear",
             (void (BOPAlgo_ToolsProvider::*)() ) static_cast<void (BOPAlgo_ToolsProvider::*)() >(&BOPAlgo_ToolsProvider::Clear),
             R"#(Clears internal fields and arguments)#" )
        .def("AddTool",
             (void (BOPAlgo_ToolsProvider::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_ToolsProvider::*)( const TopoDS_Shape &  ) >(&BOPAlgo_ToolsProvider::AddTool),
             R"#(Adds Tool argument of the operation)#"  , py::arg("theShape"))
        .def("SetTools",
             (void (BOPAlgo_ToolsProvider::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BOPAlgo_ToolsProvider::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BOPAlgo_ToolsProvider::SetTools),
             R"#(Adds the Tool arguments of the operation)#"  , py::arg("theShapes"))
        .def("Tools",
             (const TopTools_ListOfShape & (BOPAlgo_ToolsProvider::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_ToolsProvider::*)() const>(&BOPAlgo_ToolsProvider::Tools),
             R"#(Returns the Tool arguments of the operation)#" )
;


    static_cast<py::class_<BOPAlgo_RemoveFeatures ,std::unique_ptr<BOPAlgo_RemoveFeatures>  , BOPAlgo_Options >>(m.attr("BOPAlgo_RemoveFeatures"))
        .def(py::init<  >()  )
        .def("SetShape",
             (void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape &  ) >(&BOPAlgo_RemoveFeatures::SetShape),
             R"#(Sets the shape for processing.)#"  , py::arg("theShape"))
        .def("InputShape",
             (const TopoDS_Shape & (BOPAlgo_RemoveFeatures::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_RemoveFeatures::*)() const>(&BOPAlgo_RemoveFeatures::InputShape),
             R"#(Returns the input shape)#" )
        .def("AddFaceToRemove",
             (void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape &  ) >(&BOPAlgo_RemoveFeatures::AddFaceToRemove),
             R"#(Adds the face to remove from the input shape.)#"  , py::arg("theFace"))
        .def("AddFacesToRemove",
             (void (BOPAlgo_RemoveFeatures::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BOPAlgo_RemoveFeatures::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BOPAlgo_RemoveFeatures::AddFacesToRemove),
             R"#(Adds the faces to remove from the input shape.)#"  , py::arg("theFaces"))
        .def("FacesToRemove",
             (const TopTools_ListOfShape & (BOPAlgo_RemoveFeatures::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_RemoveFeatures::*)() const>(&BOPAlgo_RemoveFeatures::FacesToRemove),
             R"#(Returns the list of faces which have been requested for removal from the input shape.)#" )
        .def("Perform",
             (void (BOPAlgo_RemoveFeatures::*)() ) static_cast<void (BOPAlgo_RemoveFeatures::*)() >(&BOPAlgo_RemoveFeatures::Perform),
             R"#(Performs the operation)#" )
        .def("Clear",
             (void (BOPAlgo_RemoveFeatures::*)() ) static_cast<void (BOPAlgo_RemoveFeatures::*)() >(&BOPAlgo_RemoveFeatures::Clear),
             R"#(Clears the contents of the algorithm from previous run, allowing reusing it for following removals.)#" )
        .def("TrackHistory",
             (void (BOPAlgo_RemoveFeatures::*)( const Standard_Boolean  ) ) static_cast<void (BOPAlgo_RemoveFeatures::*)( const Standard_Boolean  ) >(&BOPAlgo_RemoveFeatures::TrackHistory),
             R"#(Defines whether to track the modification of the shapes or not)#"  , py::arg("theFlag"))
        .def("History",
             (opencascade::handle<BRepTools_History> (BOPAlgo_RemoveFeatures::*)() ) static_cast<opencascade::handle<BRepTools_History> (BOPAlgo_RemoveFeatures::*)() >(&BOPAlgo_RemoveFeatures::History),
             R"#(Gets the History object)#" )
        .def("Shape",
             (const TopoDS_Shape & (BOPAlgo_RemoveFeatures::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_RemoveFeatures::*)() const>(&BOPAlgo_RemoveFeatures::Shape),
             R"#(Returns the resulting shape)#" )
;


    static_cast<py::class_<BOPAlgo_BuilderSolid ,std::unique_ptr<BOPAlgo_BuilderSolid>  , BOPAlgo_BuilderArea >>(m.attr("BOPAlgo_BuilderSolid"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Perform",
             (void (BOPAlgo_BuilderSolid::*)() ) static_cast<void (BOPAlgo_BuilderSolid::*)() >(&BOPAlgo_BuilderSolid::Perform),
             R"#(Performs the construction of the solids from the given faces)#" )
        .def("GetBoxesMap",
             (const TopTools_DataMapOfShapeBox & (BOPAlgo_BuilderSolid::*)() const) static_cast<const TopTools_DataMapOfShapeBox & (BOPAlgo_BuilderSolid::*)() const>(&BOPAlgo_BuilderSolid::GetBoxesMap),
             R"#(For classification purposes the algorithm builds the bounding boxes for all created solids. This method returns the data map of solid - box pairs.)#" )
;


    static_cast<py::class_<BOPAlgo_Splitter ,std::unique_ptr<BOPAlgo_Splitter>  , BOPAlgo_ToolsProvider >>(m.attr("BOPAlgo_Splitter"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Perform",
             (void (BOPAlgo_Splitter::*)() ) static_cast<void (BOPAlgo_Splitter::*)() >(&BOPAlgo_Splitter::Perform),
             R"#(Performs the operation)#" )
;

    register_default_constructor<BOPAlgo_AlertIntersectionFailed ,opencascade::handle<BOPAlgo_AlertIntersectionFailed>>(m,"BOPAlgo_AlertIntersectionFailed");

    static_cast<py::class_<BOPAlgo_AlertIntersectionFailed ,opencascade::handle<BOPAlgo_AlertIntersectionFailed>  , Message_Alert >>(m.attr("BOPAlgo_AlertIntersectionFailed"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionFailed::*)() const>(&BOPAlgo_AlertIntersectionFailed::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertIntersectionFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertIntersectionFailed::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertTooSmallEdge ,opencascade::handle<BOPAlgo_AlertTooSmallEdge>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertTooSmallEdge"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooSmallEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooSmallEdge::*)() const>(&BOPAlgo_AlertTooSmallEdge::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertTooSmallEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertTooSmallEdge::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_CheckerSI ,std::unique_ptr<BOPAlgo_CheckerSI>  , BOPAlgo_PaveFiller >>(m.attr("BOPAlgo_CheckerSI"))
        .def(py::init<  >()  )
        .def("Perform",
             (void (BOPAlgo_CheckerSI::*)() ) static_cast<void (BOPAlgo_CheckerSI::*)() >(&BOPAlgo_CheckerSI::Perform),
             R"#(None)#" )
        .def("SetLevelOfCheck",
             (void (BOPAlgo_CheckerSI::*)( const Standard_Integer  ) ) static_cast<void (BOPAlgo_CheckerSI::*)( const Standard_Integer  ) >(&BOPAlgo_CheckerSI::SetLevelOfCheck),
             R"#(Sets the level of checking shape on self-interference. It defines which interferences will be checked: 0 - only V/V; 1 - V/V and V/E; 2 - V/V, V/E and E/E; 3 - V/V, V/E, E/E and V/F; 4 - V/V, V/E, E/E, V/F and E/F; 5 - V/V, V/E, E/E, V/F, E/F and F/F; 6 - V/V, V/E, E/E, V/F, E/F, F/F and V/S; 7 - V/V, V/E, E/E, V/F, E/F, F/F, V/S and E/S; 8 - V/V, V/E, E/E, V/F, E/F, F/F, V/S, E/S and F/S; 9 - V/V, V/E, E/E, V/F, E/F, F/F, V/S, E/S, F/S and S/S - all interferences (Default value))#"  , py::arg("theLevel"))
;


    static_cast<py::class_<BOPAlgo_BOP ,std::unique_ptr<BOPAlgo_BOP>  , BOPAlgo_ToolsProvider >>(m.attr("BOPAlgo_BOP"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Clear",
             (void (BOPAlgo_BOP::*)() ) static_cast<void (BOPAlgo_BOP::*)() >(&BOPAlgo_BOP::Clear),
             R"#(Clears internal fields and arguments)#" )
        .def("SetOperation",
             (void (BOPAlgo_BOP::*)( const BOPAlgo_Operation  ) ) static_cast<void (BOPAlgo_BOP::*)( const BOPAlgo_Operation  ) >(&BOPAlgo_BOP::SetOperation),
             R"#(None)#"  , py::arg("theOperation"))
        .def("Operation",
             (BOPAlgo_Operation (BOPAlgo_BOP::*)() const) static_cast<BOPAlgo_Operation (BOPAlgo_BOP::*)() const>(&BOPAlgo_BOP::Operation),
             R"#(None)#" )
        .def("Perform",
             (void (BOPAlgo_BOP::*)() ) static_cast<void (BOPAlgo_BOP::*)() >(&BOPAlgo_BOP::Perform),
             R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertEmptyShape ,opencascade::handle<BOPAlgo_AlertEmptyShape>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertEmptyShape"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertEmptyShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertEmptyShape::*)() const>(&BOPAlgo_AlertEmptyShape::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertEmptyShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertEmptyShape::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_BuilderFace ,std::unique_ptr<BOPAlgo_BuilderFace>  , BOPAlgo_BuilderArea >>(m.attr("BOPAlgo_BuilderFace"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("SetFace",
             (void (BOPAlgo_BuilderFace::*)( const TopoDS_Face &  ) ) static_cast<void (BOPAlgo_BuilderFace::*)( const TopoDS_Face &  ) >(&BOPAlgo_BuilderFace::SetFace),
             R"#(Sets the face generatix)#"  , py::arg("theFace"))
        .def("Face",
             (const TopoDS_Face & (BOPAlgo_BuilderFace::*)() const) static_cast<const TopoDS_Face & (BOPAlgo_BuilderFace::*)() const>(&BOPAlgo_BuilderFace::Face),
             R"#(Returns the face generatix)#" )
        .def("Perform",
             (void (BOPAlgo_BuilderFace::*)() ) static_cast<void (BOPAlgo_BuilderFace::*)() >(&BOPAlgo_BuilderFace::Perform),
             R"#(Performs the algorithm)#" )
        .def("Orientation",
             (TopAbs_Orientation (BOPAlgo_BuilderFace::*)() const) static_cast<TopAbs_Orientation (BOPAlgo_BuilderFace::*)() const>(&BOPAlgo_BuilderFace::Orientation),
             R"#(None)#" )
;


    static_cast<py::class_<BOPAlgo_AlertSolidBuilderUnusedFaces ,opencascade::handle<BOPAlgo_AlertSolidBuilderUnusedFaces>  , TopoDS_AlertWithShape >>(m.attr("BOPAlgo_AlertSolidBuilderUnusedFaces"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderUnusedFaces::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderUnusedFaces::*)() const>(&BOPAlgo_AlertSolidBuilderUnusedFaces::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertSolidBuilderUnusedFaces::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertSolidBuilderUnusedFaces::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/BOPAlgo_GlueEnum.hxx
// ./opencascade/BOPAlgo_Section.hxx
// ./opencascade/BOPAlgo_BuilderArea.hxx
// ./opencascade/BOPAlgo_BuilderSolid.hxx
// ./opencascade/BOPAlgo_BOP.hxx
// ./opencascade/BOPAlgo_PArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_Operation.hxx
// ./opencascade/BOPAlgo_WireSplitter.hxx
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
// ./opencascade/BOPAlgo_CheckerSI.hxx
// ./opencascade/BOPAlgo_ShellSplitter.hxx
// ./opencascade/BOPAlgo_Algo.hxx
// ./opencascade/BOPAlgo_RemoveFeatures.hxx
// ./opencascade/BOPAlgo_BuilderShape.hxx

// operators

// register typdefs
// ./opencascade/BOPAlgo_GlueEnum.hxx
// ./opencascade/BOPAlgo_Section.hxx
// ./opencascade/BOPAlgo_BuilderArea.hxx
// ./opencascade/BOPAlgo_BuilderSolid.hxx
// ./opencascade/BOPAlgo_BOP.hxx
// ./opencascade/BOPAlgo_PArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_Operation.hxx
// ./opencascade/BOPAlgo_WireSplitter.hxx
    register_template_NCollection_List<BOPAlgo_EdgeInfo>(m,"BOPAlgo_ListOfEdgeInfo");  
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, BOPAlgo_ListOfEdgeInfo, TopTools_ShapeMapHasher>(m,"BOPAlgo_IndexedDataMapOfShapeListOfEdgeInfo");  
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
    register_template_NCollection_List<BOPAlgo_CheckResult>(m,"BOPAlgo_ListOfCheckResult");  
// ./opencascade/BOPAlgo_CheckerSI.hxx
// ./opencascade/BOPAlgo_ShellSplitter.hxx
// ./opencascade/BOPAlgo_Algo.hxx
// ./opencascade/BOPAlgo_RemoveFeatures.hxx
// ./opencascade/BOPAlgo_BuilderShape.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
