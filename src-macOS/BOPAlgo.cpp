
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_ProgressIndicator.hxx>
#include <IntTools_Context.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_CommonBlock.hxx>
#include <TopoDS_Face.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <IntTools_Context.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <TopoDS_Solid.hxx>
#include <BOPAlgo_WireEdgeSet.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_Builder.hxx>
#include <BOPAlgo_Section.hxx>
#include <BOPAlgo_BOP.hxx>
#include <BOPAlgo_ArgumentAnalyzer.hxx>
#include <IntTools_Context.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPDS_CommonBlock.hxx>
#include <IntTools_Context.hxx>
#include <BOPAlgo_WireEdgeSet.hxx>
#include <BOPAlgo_PaveFiller.hxx>

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
#include <BOPAlgo_MakeConnected.hxx>
#include <BOPAlgo_MakePeriodic.hxx>
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
// ./opencascade/BOPAlgo_ListOfCheckResult.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPAlgo_WireSplitter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPAlgo_WireSplitter.hxx
#include "NCollection_tmpl.hxx"


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
    class Py_BOPAlgo_BuilderShape : public BOPAlgo_BuilderShape{
    public:
        using BOPAlgo_BuilderShape::BOPAlgo_BuilderShape;


        // public pure virtual

        void Perform() override { PYBIND11_OVERLOAD_PURE(void,BOPAlgo_Algo,Perform,) };

        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<BOPAlgo_AlertAcquiredSelfIntersection ,opencascade::handle<BOPAlgo_AlertAcquiredSelfIntersection> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertAcquiredSelfIntersection"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertAcquiredSelfIntersection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertAcquiredSelfIntersection::*)() const>(&BOPAlgo_AlertAcquiredSelfIntersection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertAcquiredSelfIntersection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertAcquiredSelfIntersection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertBOPNotAllowed ,opencascade::handle<BOPAlgo_AlertBOPNotAllowed>>(m,"BOPAlgo_AlertBOPNotAllowed");

    static_cast<py::class_<BOPAlgo_AlertBOPNotAllowed ,opencascade::handle<BOPAlgo_AlertBOPNotAllowed> , Message_Alert>>(m.attr("BOPAlgo_AlertBOPNotAllowed"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotAllowed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotAllowed::*)() const>(&BOPAlgo_AlertBOPNotAllowed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBOPNotAllowed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBOPNotAllowed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertBOPNotSet ,opencascade::handle<BOPAlgo_AlertBOPNotSet>>(m,"BOPAlgo_AlertBOPNotSet");

    static_cast<py::class_<BOPAlgo_AlertBOPNotSet ,opencascade::handle<BOPAlgo_AlertBOPNotSet> , Message_Alert>>(m.attr("BOPAlgo_AlertBOPNotSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBOPNotSet::*)() const>(&BOPAlgo_AlertBOPNotSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBOPNotSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBOPNotSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertBadPositioning ,opencascade::handle<BOPAlgo_AlertBadPositioning> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertBadPositioning"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBadPositioning::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBadPositioning::*)() const>(&BOPAlgo_AlertBadPositioning::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBadPositioning::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBadPositioning::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertBuilderFailed ,opencascade::handle<BOPAlgo_AlertBuilderFailed>>(m,"BOPAlgo_AlertBuilderFailed");

    static_cast<py::class_<BOPAlgo_AlertBuilderFailed ,opencascade::handle<BOPAlgo_AlertBuilderFailed> , Message_Alert>>(m.attr("BOPAlgo_AlertBuilderFailed"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuilderFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuilderFailed::*)() const>(&BOPAlgo_AlertBuilderFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBuilderFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBuilderFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertBuildingPCurveFailed ,opencascade::handle<BOPAlgo_AlertBuildingPCurveFailed> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertBuildingPCurveFailed"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuildingPCurveFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertBuildingPCurveFailed::*)() const>(&BOPAlgo_AlertBuildingPCurveFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertBuildingPCurveFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertBuildingPCurveFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertEmptyShape ,opencascade::handle<BOPAlgo_AlertEmptyShape> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertEmptyShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertEmptyShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertEmptyShape::*)() const>(&BOPAlgo_AlertEmptyShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertEmptyShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertEmptyShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertFaceBuilderUnusedEdges ,opencascade::handle<BOPAlgo_AlertFaceBuilderUnusedEdges> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertFaceBuilderUnusedEdges"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertFaceBuilderUnusedEdges::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertFaceBuilderUnusedEdges::*)() const>(&BOPAlgo_AlertFaceBuilderUnusedEdges::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertFaceBuilderUnusedEdges::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertFaceBuilderUnusedEdges::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertIntersectionFailed ,opencascade::handle<BOPAlgo_AlertIntersectionFailed>>(m,"BOPAlgo_AlertIntersectionFailed");

    static_cast<py::class_<BOPAlgo_AlertIntersectionFailed ,opencascade::handle<BOPAlgo_AlertIntersectionFailed> , Message_Alert>>(m.attr("BOPAlgo_AlertIntersectionFailed"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionFailed::*)() const>(&BOPAlgo_AlertIntersectionFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertIntersectionFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertIntersectionFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertIntersectionOfPairOfShapesFailed ,opencascade::handle<BOPAlgo_AlertIntersectionOfPairOfShapesFailed> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertIntersectionOfPairOfShapesFailed"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionOfPairOfShapesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertIntersectionOfPairOfShapesFailed::*)() const>(&BOPAlgo_AlertIntersectionOfPairOfShapesFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertIntersectionOfPairOfShapesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertIntersectionOfPairOfShapesFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertMultiDimensionalArguments ,opencascade::handle<BOPAlgo_AlertMultiDimensionalArguments>>(m,"BOPAlgo_AlertMultiDimensionalArguments");

    static_cast<py::class_<BOPAlgo_AlertMultiDimensionalArguments ,opencascade::handle<BOPAlgo_AlertMultiDimensionalArguments> , Message_Alert>>(m.attr("BOPAlgo_AlertMultiDimensionalArguments"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertMultiDimensionalArguments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertMultiDimensionalArguments::*)() const>(&BOPAlgo_AlertMultiDimensionalArguments::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertMultiDimensionalArguments::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertMultiDimensionalArguments::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertMultipleArguments ,opencascade::handle<BOPAlgo_AlertMultipleArguments>>(m,"BOPAlgo_AlertMultipleArguments");

    static_cast<py::class_<BOPAlgo_AlertMultipleArguments ,opencascade::handle<BOPAlgo_AlertMultipleArguments> , Message_Alert>>(m.attr("BOPAlgo_AlertMultipleArguments"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertMultipleArguments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertMultipleArguments::*)() const>(&BOPAlgo_AlertMultipleArguments::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertMultipleArguments::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertMultipleArguments::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertNoFacesToRemove ,opencascade::handle<BOPAlgo_AlertNoFacesToRemove>>(m,"BOPAlgo_AlertNoFacesToRemove");

    static_cast<py::class_<BOPAlgo_AlertNoFacesToRemove ,opencascade::handle<BOPAlgo_AlertNoFacesToRemove> , Message_Alert>>(m.attr("BOPAlgo_AlertNoFacesToRemove"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFacesToRemove::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFacesToRemove::*)() const>(&BOPAlgo_AlertNoFacesToRemove::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNoFacesToRemove::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNoFacesToRemove::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertNoFiller ,opencascade::handle<BOPAlgo_AlertNoFiller>>(m,"BOPAlgo_AlertNoFiller");

    static_cast<py::class_<BOPAlgo_AlertNoFiller ,opencascade::handle<BOPAlgo_AlertNoFiller> , Message_Alert>>(m.attr("BOPAlgo_AlertNoFiller"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFiller::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoFiller::*)() const>(&BOPAlgo_AlertNoFiller::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNoFiller::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNoFiller::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertNoPeriodicityRequired ,opencascade::handle<BOPAlgo_AlertNoPeriodicityRequired>>(m,"BOPAlgo_AlertNoPeriodicityRequired");

    static_cast<py::class_<BOPAlgo_AlertNoPeriodicityRequired ,opencascade::handle<BOPAlgo_AlertNoPeriodicityRequired> , Message_Alert>>(m.attr("BOPAlgo_AlertNoPeriodicityRequired"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoPeriodicityRequired::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNoPeriodicityRequired::*)() const>(&BOPAlgo_AlertNoPeriodicityRequired::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNoPeriodicityRequired::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNoPeriodicityRequired::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertNotSplittableEdge ,opencascade::handle<BOPAlgo_AlertNotSplittableEdge> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertNotSplittableEdge"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNotSplittableEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNotSplittableEdge::*)() const>(&BOPAlgo_AlertNotSplittableEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNotSplittableEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNotSplittableEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertNullInputShapes ,opencascade::handle<BOPAlgo_AlertNullInputShapes>>(m,"BOPAlgo_AlertNullInputShapes");

    static_cast<py::class_<BOPAlgo_AlertNullInputShapes ,opencascade::handle<BOPAlgo_AlertNullInputShapes> , Message_Alert>>(m.attr("BOPAlgo_AlertNullInputShapes"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNullInputShapes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertNullInputShapes::*)() const>(&BOPAlgo_AlertNullInputShapes::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertNullInputShapes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertNullInputShapes::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertPostTreatFF ,opencascade::handle<BOPAlgo_AlertPostTreatFF>>(m,"BOPAlgo_AlertPostTreatFF");

    static_cast<py::class_<BOPAlgo_AlertPostTreatFF ,opencascade::handle<BOPAlgo_AlertPostTreatFF> , Message_Alert>>(m.attr("BOPAlgo_AlertPostTreatFF"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertPostTreatFF::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertPostTreatFF::*)() const>(&BOPAlgo_AlertPostTreatFF::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertPostTreatFF::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertPostTreatFF::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForEdgesFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForEdgesFailed> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertRemovalOfIBForEdgesFailed"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForEdgesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForEdgesFailed::*)() const>(&BOPAlgo_AlertRemovalOfIBForEdgesFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForEdgesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForEdgesFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForFacesFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForFacesFailed> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertRemovalOfIBForFacesFailed"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForFacesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForFacesFailed::*)() const>(&BOPAlgo_AlertRemovalOfIBForFacesFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForFacesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForFacesFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForMDimShapes ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForMDimShapes> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertRemovalOfIBForMDimShapes"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForMDimShapes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForMDimShapes::*)() const>(&BOPAlgo_AlertRemovalOfIBForMDimShapes::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForMDimShapes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForMDimShapes::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertRemovalOfIBForSolidsFailed ,opencascade::handle<BOPAlgo_AlertRemovalOfIBForSolidsFailed> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertRemovalOfIBForSolidsFailed"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForSolidsFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemovalOfIBForSolidsFailed::*)() const>(&BOPAlgo_AlertRemovalOfIBForSolidsFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemovalOfIBForSolidsFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemovalOfIBForSolidsFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertRemoveFeaturesFailed ,opencascade::handle<BOPAlgo_AlertRemoveFeaturesFailed>>(m,"BOPAlgo_AlertRemoveFeaturesFailed");

    static_cast<py::class_<BOPAlgo_AlertRemoveFeaturesFailed ,opencascade::handle<BOPAlgo_AlertRemoveFeaturesFailed> , Message_Alert>>(m.attr("BOPAlgo_AlertRemoveFeaturesFailed"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemoveFeaturesFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertRemoveFeaturesFailed::*)() const>(&BOPAlgo_AlertRemoveFeaturesFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertRemoveFeaturesFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertRemoveFeaturesFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertSelfInterferingShape ,opencascade::handle<BOPAlgo_AlertSelfInterferingShape> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertSelfInterferingShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSelfInterferingShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSelfInterferingShape::*)() const>(&BOPAlgo_AlertSelfInterferingShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertSelfInterferingShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertSelfInterferingShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertShapeIsNotPeriodic ,opencascade::handle<BOPAlgo_AlertShapeIsNotPeriodic> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertShapeIsNotPeriodic"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertShapeIsNotPeriodic::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertShapeIsNotPeriodic::*)() const>(&BOPAlgo_AlertShapeIsNotPeriodic::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertShapeIsNotPeriodic::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertShapeIsNotPeriodic::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertShellSplitterFailed ,opencascade::handle<BOPAlgo_AlertShellSplitterFailed> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertShellSplitterFailed"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertShellSplitterFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertShellSplitterFailed::*)() const>(&BOPAlgo_AlertShellSplitterFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertShellSplitterFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertShellSplitterFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertSolidBuilderFailed ,opencascade::handle<BOPAlgo_AlertSolidBuilderFailed>>(m,"BOPAlgo_AlertSolidBuilderFailed");

    static_cast<py::class_<BOPAlgo_AlertSolidBuilderFailed ,opencascade::handle<BOPAlgo_AlertSolidBuilderFailed> , Message_Alert>>(m.attr("BOPAlgo_AlertSolidBuilderFailed"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderFailed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderFailed::*)() const>(&BOPAlgo_AlertSolidBuilderFailed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertSolidBuilderFailed::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertSolidBuilderFailed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertSolidBuilderUnusedFaces ,opencascade::handle<BOPAlgo_AlertSolidBuilderUnusedFaces> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertSolidBuilderUnusedFaces"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderUnusedFaces::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertSolidBuilderUnusedFaces::*)() const>(&BOPAlgo_AlertSolidBuilderUnusedFaces::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertSolidBuilderUnusedFaces::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertSolidBuilderUnusedFaces::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_AlertTooFewArguments ,opencascade::handle<BOPAlgo_AlertTooFewArguments>>(m,"BOPAlgo_AlertTooFewArguments");

    static_cast<py::class_<BOPAlgo_AlertTooFewArguments ,opencascade::handle<BOPAlgo_AlertTooFewArguments> , Message_Alert>>(m.attr("BOPAlgo_AlertTooFewArguments"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooFewArguments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooFewArguments::*)() const>(&BOPAlgo_AlertTooFewArguments::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertTooFewArguments::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertTooFewArguments::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertTooSmallEdge ,opencascade::handle<BOPAlgo_AlertTooSmallEdge> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertTooSmallEdge"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooSmallEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertTooSmallEdge::*)() const>(&BOPAlgo_AlertTooSmallEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertTooSmallEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertTooSmallEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnableToGlue ,opencascade::handle<BOPAlgo_AlertUnableToGlue> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnableToGlue"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToGlue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToGlue::*)() const>(&BOPAlgo_AlertUnableToGlue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToGlue::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToGlue::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnableToMakeIdentical ,opencascade::handle<BOPAlgo_AlertUnableToMakeIdentical> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnableToMakeIdentical"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToMakeIdentical::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToMakeIdentical::*)() const>(&BOPAlgo_AlertUnableToMakeIdentical::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToMakeIdentical::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToMakeIdentical::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnableToMakePeriodic ,opencascade::handle<BOPAlgo_AlertUnableToMakePeriodic> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnableToMakePeriodic"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToMakePeriodic::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToMakePeriodic::*)() const>(&BOPAlgo_AlertUnableToMakePeriodic::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToMakePeriodic::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToMakePeriodic::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnableToOrientTheShape ,opencascade::handle<BOPAlgo_AlertUnableToOrientTheShape> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnableToOrientTheShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToOrientTheShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToOrientTheShape::*)() const>(&BOPAlgo_AlertUnableToOrientTheShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToOrientTheShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToOrientTheShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnableToRemoveTheFeature ,opencascade::handle<BOPAlgo_AlertUnableToRemoveTheFeature> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnableToRemoveTheFeature"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToRemoveTheFeature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToRemoveTheFeature::*)() const>(&BOPAlgo_AlertUnableToRemoveTheFeature::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToRemoveTheFeature::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToRemoveTheFeature::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnableToRepeat ,opencascade::handle<BOPAlgo_AlertUnableToRepeat> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnableToRepeat"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToRepeat::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToRepeat::*)() const>(&BOPAlgo_AlertUnableToRepeat::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToRepeat::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToRepeat::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnableToTrim ,opencascade::handle<BOPAlgo_AlertUnableToTrim> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnableToTrim"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToTrim::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnableToTrim::*)() const>(&BOPAlgo_AlertUnableToTrim::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnableToTrim::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnableToTrim::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnknownShape ,opencascade::handle<BOPAlgo_AlertUnknownShape> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnknownShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnknownShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnknownShape::*)() const>(&BOPAlgo_AlertUnknownShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnknownShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnknownShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_AlertUnsupportedType ,opencascade::handle<BOPAlgo_AlertUnsupportedType> , TopoDS_AlertWithShape>>(m.attr("BOPAlgo_AlertUnsupportedType"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnsupportedType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPAlgo_AlertUnsupportedType::*)() const>(&BOPAlgo_AlertUnsupportedType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPAlgo_AlertUnsupportedType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPAlgo_AlertUnsupportedType::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_CheckResult , shared_ptr<BOPAlgo_CheckResult> >>(m.attr("BOPAlgo_CheckResult"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_EdgeInfo , shared_ptr<BOPAlgo_EdgeInfo> >>(m.attr("BOPAlgo_EdgeInfo"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetEdge",
             (void (BOPAlgo_EdgeInfo::*)( const TopoDS_Edge & ) ) static_cast<void (BOPAlgo_EdgeInfo::*)( const TopoDS_Edge & ) >(&BOPAlgo_EdgeInfo::SetEdge),
             R"#(None)#"  , py::arg("theE"))
        .def("Edge",
             (const TopoDS_Edge & (BOPAlgo_EdgeInfo::*)() const) static_cast<const TopoDS_Edge & (BOPAlgo_EdgeInfo::*)() const>(&BOPAlgo_EdgeInfo::Edge),
             R"#(None)#" )
        .def("SetPassed",
             (void (BOPAlgo_EdgeInfo::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_EdgeInfo::*)( const Standard_Boolean ) >(&BOPAlgo_EdgeInfo::SetPassed),
             R"#(None)#"  , py::arg("theFlag"))
        .def("Passed",
             (Standard_Boolean (BOPAlgo_EdgeInfo::*)() const) static_cast<Standard_Boolean (BOPAlgo_EdgeInfo::*)() const>(&BOPAlgo_EdgeInfo::Passed),
             R"#(None)#" )
        .def("SetInFlag",
             (void (BOPAlgo_EdgeInfo::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_EdgeInfo::*)( const Standard_Boolean ) >(&BOPAlgo_EdgeInfo::SetInFlag),
             R"#(None)#"  , py::arg("theFlag"))
        .def("IsIn",
             (Standard_Boolean (BOPAlgo_EdgeInfo::*)() const) static_cast<Standard_Boolean (BOPAlgo_EdgeInfo::*)() const>(&BOPAlgo_EdgeInfo::IsIn),
             R"#(None)#" )
        .def("SetAngle",
             (void (BOPAlgo_EdgeInfo::*)( const Standard_Real ) ) static_cast<void (BOPAlgo_EdgeInfo::*)( const Standard_Real ) >(&BOPAlgo_EdgeInfo::SetAngle),
             R"#(None)#"  , py::arg("theAngle"))
        .def("Angle",
             (Standard_Real (BOPAlgo_EdgeInfo::*)() const) static_cast<Standard_Real (BOPAlgo_EdgeInfo::*)() const>(&BOPAlgo_EdgeInfo::Angle),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_Options , shared_ptr<BOPAlgo_Options> >>(m.attr("BOPAlgo_Options"))
    // constructors
    // custom constructors
    // methods
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (BOPAlgo_Options::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::Allocator),
             R"#(Returns allocator)#" )
        .def("Clear",
             (void (BOPAlgo_Options::*)() ) static_cast<void (BOPAlgo_Options::*)() >(&BOPAlgo_Options::Clear),
             R"#(Clears all warnings and errors, and any data cached by the algorithm. User defined options are not cleared.)#" )
        .def("AddError",
             (void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> & ) ) static_cast<void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> & ) >(&BOPAlgo_Options::AddError),
             R"#(Adds the alert as error (fail))#"  , py::arg("theAlert"))
        .def("AddWarning",
             (void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> & ) ) static_cast<void (BOPAlgo_Options::*)( const opencascade::handle<Message_Alert> & ) >(&BOPAlgo_Options::AddWarning),
             R"#(Adds the alert as warning)#"  , py::arg("theAlert"))
        .def("HasErrors",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::HasErrors),
             R"#(Returns true if algorithm has failed)#" )
        .def("HasError",
             (Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> & ) const>(&BOPAlgo_Options::HasError),
             R"#(Returns true if algorithm has generated error of specified type)#"  , py::arg("theType"))
        .def("HasWarnings",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::HasWarnings),
             R"#(Returns true if algorithm has generated some warning alerts)#" )
        .def("HasWarning",
             (Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Boolean (BOPAlgo_Options::*)( const opencascade::handle<Standard_Type> & ) const>(&BOPAlgo_Options::HasWarning),
             R"#(Returns true if algorithm has generated warning of specified type)#"  , py::arg("theType"))
        .def("GetReport",
             (const opencascade::handle<Message_Report> & (BOPAlgo_Options::*)() const) static_cast<const opencascade::handle<Message_Report> & (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::GetReport),
             R"#(Returns report collecting all errors and warnings)#" )
        .def("ClearWarnings",
             (void (BOPAlgo_Options::*)() ) static_cast<void (BOPAlgo_Options::*)() >(&BOPAlgo_Options::ClearWarnings),
             R"#(Clears the warnings of the algorithm)#" )
        .def("SetRunParallel",
             (void (BOPAlgo_Options::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_Options::*)( const Standard_Boolean ) >(&BOPAlgo_Options::SetRunParallel),
             R"#(Set the flag of parallel processing if <theFlag> is true the parallel processing is switched on if <theFlag> is false the parallel processing is switched off)#"  , py::arg("theFlag"))
        .def("RunParallel",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::RunParallel),
             R"#(Returns the flag of parallel processing)#" )
        .def("FuzzyValue",
             (Standard_Real (BOPAlgo_Options::*)() const) static_cast<Standard_Real (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::FuzzyValue),
             R"#(Returns the additional tolerance)#" )
        .def("SetUseOBB",
             (void (BOPAlgo_Options::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_Options::*)( const Standard_Boolean ) >(&BOPAlgo_Options::SetUseOBB),
             R"#(Enables/Disables the usage of OBB)#"  , py::arg("theUseOBB"))
        .def("UseOBB",
             (Standard_Boolean (BOPAlgo_Options::*)() const) static_cast<Standard_Boolean (BOPAlgo_Options::*)() const>(&BOPAlgo_Options::UseOBB),
             R"#(Returns the flag defining usage of OBB)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_SectionAttribute , shared_ptr<BOPAlgo_SectionAttribute> >>(m.attr("BOPAlgo_SectionAttribute"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theAproximation"),  py::arg("thePCurveOnS1"),  py::arg("thePCurveOnS2") )
    // custom constructors
    // methods
        .def("Approximation",
             (void (BOPAlgo_SectionAttribute::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_SectionAttribute::*)( const Standard_Boolean ) >(&BOPAlgo_SectionAttribute::Approximation),
             R"#(Sets the Approximation flag)#"  , py::arg("theApprox"))
        .def("PCurveOnS1",
             (void (BOPAlgo_SectionAttribute::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_SectionAttribute::*)( const Standard_Boolean ) >(&BOPAlgo_SectionAttribute::PCurveOnS1),
             R"#(Sets the PCurveOnS1 flag)#"  , py::arg("thePCurveOnS1"))
        .def("PCurveOnS2",
             (void (BOPAlgo_SectionAttribute::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_SectionAttribute::*)( const Standard_Boolean ) >(&BOPAlgo_SectionAttribute::PCurveOnS2),
             R"#(Sets the PCurveOnS2 flag)#"  , py::arg("thePCurveOnS2"))
        .def("Approximation",
             (Standard_Boolean (BOPAlgo_SectionAttribute::*)() const) static_cast<Standard_Boolean (BOPAlgo_SectionAttribute::*)() const>(&BOPAlgo_SectionAttribute::Approximation),
             R"#(Returns the Approximation flag)#" )
        .def("PCurveOnS1",
             (Standard_Boolean (BOPAlgo_SectionAttribute::*)() const) static_cast<Standard_Boolean (BOPAlgo_SectionAttribute::*)() const>(&BOPAlgo_SectionAttribute::PCurveOnS1),
             R"#(Returns the PCurveOnS1 flag)#" )
        .def("PCurveOnS2",
             (Standard_Boolean (BOPAlgo_SectionAttribute::*)() const) static_cast<Standard_Boolean (BOPAlgo_SectionAttribute::*)() const>(&BOPAlgo_SectionAttribute::PCurveOnS2),
             R"#(Returns the PCurveOnS2 flag)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPAlgo_Tools , shared_ptr<BOPAlgo_Tools>>(m,"BOPAlgo_Tools");

    static_cast<py::class_<BOPAlgo_Tools , shared_ptr<BOPAlgo_Tools> >>(m.attr("BOPAlgo_Tools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_WireEdgeSet , shared_ptr<BOPAlgo_WireEdgeSet> >>(m.attr("BOPAlgo_WireEdgeSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Clear",
             (void (BOPAlgo_WireEdgeSet::*)() ) static_cast<void (BOPAlgo_WireEdgeSet::*)() >(&BOPAlgo_WireEdgeSet::Clear),
             R"#(None)#" )
        .def("SetFace",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face & ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face & ) >(&BOPAlgo_WireEdgeSet::SetFace),
             R"#(None)#"  , py::arg("aF"))
        .def("Face",
             (const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Face),
             R"#(None)#" )
        .def("AddStartElement",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) >(&BOPAlgo_WireEdgeSet::AddStartElement),
             R"#(None)#"  , py::arg("sS"))
        .def("StartElements",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::StartElements),
             R"#(None)#" )
        .def("AddShape",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) >(&BOPAlgo_WireEdgeSet::AddShape),
             R"#(None)#"  , py::arg("sS"))
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Shapes),
             R"#(None)#" )
        .def("Clear",
             (void (BOPAlgo_WireEdgeSet::*)() ) static_cast<void (BOPAlgo_WireEdgeSet::*)() >(&BOPAlgo_WireEdgeSet::Clear),
             R"#(None)#" )
        .def("SetFace",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face & ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Face & ) >(&BOPAlgo_WireEdgeSet::SetFace),
             R"#(None)#"  , py::arg("aF"))
        .def("Face",
             (const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopoDS_Face & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Face),
             R"#(None)#" )
        .def("AddStartElement",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) >(&BOPAlgo_WireEdgeSet::AddStartElement),
             R"#(None)#"  , py::arg("aE"))
        .def("StartElements",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::StartElements),
             R"#(None)#" )
        .def("AddShape",
             (void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_WireEdgeSet::*)( const TopoDS_Shape & ) >(&BOPAlgo_WireEdgeSet::AddShape),
             R"#(None)#"  , py::arg("aW"))
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_WireEdgeSet::*)() const>(&BOPAlgo_WireEdgeSet::Shapes),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_Algo , shared_ptr_nodelete<BOPAlgo_Algo>,Py_BOPAlgo_Algo , BOPAlgo_Options>>(m.attr("BOPAlgo_Algo"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (BOPAlgo_Algo::*)() ) static_cast<void (BOPAlgo_Algo::*)() >(&BOPAlgo_Algo::Perform),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_MakeConnected , shared_ptr<BOPAlgo_MakeConnected> , BOPAlgo_Options>>(m.attr("BOPAlgo_MakeConnected"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetArguments",
             (void (BOPAlgo_MakeConnected::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BOPAlgo_MakeConnected::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BOPAlgo_MakeConnected::SetArguments),
             R"#(Sets the shape for making them connected.)#"  , py::arg("theArgs"))
        .def("AddArgument",
             (void (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) >(&BOPAlgo_MakeConnected::AddArgument),
             R"#(Adds the shape to the arguments.)#"  , py::arg("theS"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)() const>(&BOPAlgo_MakeConnected::Arguments),
             R"#(Returns the list of arguments of the operation.)#" )
        .def("PeriodicityTool",
             (const BOPAlgo_MakePeriodic & (BOPAlgo_MakeConnected::*)() const) static_cast<const BOPAlgo_MakePeriodic & (BOPAlgo_MakeConnected::*)() const>(&BOPAlgo_MakeConnected::PeriodicityTool),
             R"#(Returns the periodicity tool.)#" )
        .def("MaterialsOnPositiveSide",
             (const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) >(&BOPAlgo_MakeConnected::MaterialsOnPositiveSide),
             R"#(Returns the original shapes which images contain the the given shape with FORWARD orientation.)#"  , py::arg("theS"))
        .def("MaterialsOnNegativeSide",
             (const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) >(&BOPAlgo_MakeConnected::MaterialsOnNegativeSide),
             R"#(Returns the original shapes which images contain the the given shape with REVERSED orientation.)#"  , py::arg("theS"))
        .def("History",
             (const opencascade::handle<BRepTools_History> & (BOPAlgo_MakeConnected::*)() const) static_cast<const opencascade::handle<BRepTools_History> & (BOPAlgo_MakeConnected::*)() const>(&BOPAlgo_MakeConnected::History),
             R"#(Returns the history of operations)#" )
        .def("GetModified",
             (const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) >(&BOPAlgo_MakeConnected::GetModified),
             R"#(Returns the list of shapes modified from the given shape.)#"  , py::arg("theS"))
        .def("GetOrigins",
             (const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakeConnected::*)( const TopoDS_Shape & ) >(&BOPAlgo_MakeConnected::GetOrigins),
             R"#(Returns the list of original shapes from which the current shape has been created.)#"  , py::arg("theS"))
        .def("Shape",
             (const TopoDS_Shape & (BOPAlgo_MakeConnected::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_MakeConnected::*)() const>(&BOPAlgo_MakeConnected::Shape),
             R"#(Returns the resulting connected shape)#" )
        .def("PeriodicShape",
             (const TopoDS_Shape & (BOPAlgo_MakeConnected::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_MakeConnected::*)() const>(&BOPAlgo_MakeConnected::PeriodicShape),
             R"#(Returns the resulting periodic & repeated shape)#" )
        .def("Clear",
             (void (BOPAlgo_MakeConnected::*)() ) static_cast<void (BOPAlgo_MakeConnected::*)() >(&BOPAlgo_MakeConnected::Clear),
             R"#(Clears the contents of the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_MakePeriodic , shared_ptr<BOPAlgo_MakePeriodic> , BOPAlgo_Options>>(m.attr("BOPAlgo_MakePeriodic"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetShape",
             (void (BOPAlgo_MakePeriodic::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const TopoDS_Shape & ) >(&BOPAlgo_MakePeriodic::SetShape),
             R"#(Sets the shape to make it periodic.)#"  , py::arg("theShape"))
        .def("SetPeriodicityParameters",
             (void (BOPAlgo_MakePeriodic::*)( const BOPAlgo_MakePeriodic::PeriodicityParams & ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const BOPAlgo_MakePeriodic::PeriodicityParams & ) >(&BOPAlgo_MakePeriodic::SetPeriodicityParameters),
             R"#(Sets the periodicity parameters.)#"  , py::arg("theParams"))
        .def("PeriodicityParameters",
             (const BOPAlgo_MakePeriodic::PeriodicityParams & (BOPAlgo_MakePeriodic::*)() const) static_cast<const BOPAlgo_MakePeriodic::PeriodicityParams & (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::PeriodicityParameters),
             R"#(None)#" )
        .def("MakePeriodic",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Integer , const Standard_Boolean , const Standard_Real ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Integer , const Standard_Boolean , const Standard_Real ) >(&BOPAlgo_MakePeriodic::MakePeriodic),
             R"#(Sets the flag to make the shape periodic in specified direction: - 0 - X direction; - 1 - Y direction; - 2 - Z direction.)#"  , py::arg("theDirectionID"),  py::arg("theIsPeriodic"),  py::arg("thePeriod")=static_cast<const Standard_Real>(0.0))
        .def("IsPeriodic",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const>(&BOPAlgo_MakePeriodic::IsPeriodic),
             R"#(Returns the info about Periodicity of the shape in specified direction.)#"  , py::arg("theDirectionID"))
        .def("Period",
             (Standard_Real (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const>(&BOPAlgo_MakePeriodic::Period),
             R"#(Returns the Period of the shape in specified direction.)#"  , py::arg("theDirectionID"))
        .def("MakeXPeriodic",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Real ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Real ) >(&BOPAlgo_MakePeriodic::MakeXPeriodic),
             R"#(Sets the flag to make the shape periodic in X direction.)#"  , py::arg("theIsPeriodic"),  py::arg("thePeriod")=static_cast<const Standard_Real>(0.0))
        .def("IsXPeriodic",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::IsXPeriodic),
             R"#(Returns the info about periodicity of the shape in X direction.)#" )
        .def("XPeriod",
             (Standard_Real (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::XPeriod),
             R"#(Returns the XPeriod of the shape)#" )
        .def("MakeYPeriodic",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Real ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Real ) >(&BOPAlgo_MakePeriodic::MakeYPeriodic),
             R"#(Sets the flag to make the shape periodic in Y direction.)#"  , py::arg("theIsPeriodic"),  py::arg("thePeriod")=static_cast<const Standard_Real>(0.0))
        .def("IsYPeriodic",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::IsYPeriodic),
             R"#(Returns the info about periodicity of the shape in Y direction.)#" )
        .def("YPeriod",
             (Standard_Real (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::YPeriod),
             R"#(Returns the YPeriod of the shape.)#" )
        .def("MakeZPeriodic",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Real ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Real ) >(&BOPAlgo_MakePeriodic::MakeZPeriodic),
             R"#(Sets the flag to make the shape periodic in Z direction.)#"  , py::arg("theIsPeriodic"),  py::arg("thePeriod")=static_cast<const Standard_Real>(0.0))
        .def("IsZPeriodic",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::IsZPeriodic),
             R"#(Returns the info about periodicity of the shape in Z direction.)#" )
        .def("ZPeriod",
             (Standard_Real (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::ZPeriod),
             R"#(Returns the ZPeriod of the shape.)#" )
        .def("SetTrimmed",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Integer , const Standard_Boolean , const Standard_Real ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Integer , const Standard_Boolean , const Standard_Real ) >(&BOPAlgo_MakePeriodic::SetTrimmed),
             R"#(Defines whether the input shape is already trimmed in specified direction to fit the period in this direction. Direction is defined by an ID: - 0 - X direction; - 1 - Y direction; - 2 - Z direction.)#"  , py::arg("theDirectionID"),  py::arg("theIsTrimmed"),  py::arg("theFirst")=static_cast<const Standard_Real>(0.0))
        .def("IsInputTrimmed",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const>(&BOPAlgo_MakePeriodic::IsInputTrimmed),
             R"#(Returns whether the input shape was trimmed in the specified direction.)#"  , py::arg("theDirectionID"))
        .def("PeriodFirst",
             (Standard_Real (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) const>(&BOPAlgo_MakePeriodic::PeriodFirst),
             R"#(Returns the first periodic parameter in the specified direction.)#"  , py::arg("theDirectionID"))
        .def("SetXTrimmed",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Boolean ) >(&BOPAlgo_MakePeriodic::SetXTrimmed),
             R"#(Defines whether the input shape is already trimmed in X direction to fit the X period. If the shape is not trimmed it is required to set the first parameter for the X period. The algorithm will make the shape fit into the period.)#"  , py::arg("theIsTrimmed"),  py::arg("theFirst")=static_cast<const Standard_Boolean>(0.0))
        .def("IsInputXTrimmed",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::IsInputXTrimmed),
             R"#(Returns whether the input shape was already trimmed for X period.)#" )
        .def("XPeriodFirst",
             (Standard_Real (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::XPeriodFirst),
             R"#(Returns the first parameter for the X period.)#" )
        .def("SetYTrimmed",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Boolean ) >(&BOPAlgo_MakePeriodic::SetYTrimmed),
             R"#(Defines whether the input shape is already trimmed in Y direction to fit the Y period. If the shape is not trimmed it is required to set the first parameter for the Y period. The algorithm will make the shape fit into the period.)#"  , py::arg("theIsTrimmed"),  py::arg("theFirst")=static_cast<const Standard_Boolean>(0.0))
        .def("IsInputYTrimmed",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::IsInputYTrimmed),
             R"#(Returns whether the input shape was already trimmed for Y period.)#" )
        .def("YPeriodFirst",
             (Standard_Real (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::YPeriodFirst),
             R"#(Returns the first parameter for the Y period.)#" )
        .def("SetZTrimmed",
             (void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BOPAlgo_MakePeriodic::*)( const Standard_Boolean , const Standard_Boolean ) >(&BOPAlgo_MakePeriodic::SetZTrimmed),
             R"#(Defines whether the input shape is already trimmed in Z direction to fit the Z period. If the shape is not trimmed it is required to set the first parameter for the Z period. The algorithm will make the shape fit into the period.)#"  , py::arg("theIsTrimmed"),  py::arg("theFirst")=static_cast<const Standard_Boolean>(0.0))
        .def("IsInputZTrimmed",
             (Standard_Boolean (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Boolean (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::IsInputZTrimmed),
             R"#(Returns whether the input shape was already trimmed for Z period.)#" )
        .def("ZPeriodFirst",
             (Standard_Real (BOPAlgo_MakePeriodic::*)() const) static_cast<Standard_Real (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::ZPeriodFirst),
             R"#(Returns the first parameter for the Z period.)#" )
        .def("XRepeat",
             (const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) ) static_cast<const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) >(&BOPAlgo_MakePeriodic::XRepeat),
             R"#(Repeats the shape in X direction specified number of times. Negative value of times means that the repetition should be perform in negative X direction. Makes the repeated shape a base for following repetitions.)#"  , py::arg("theTimes"))
        .def("YRepeat",
             (const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) ) static_cast<const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) >(&BOPAlgo_MakePeriodic::YRepeat),
             R"#(Repeats the shape in Y direction specified number of times. Negative value of times means that the repetition should be perform in negative Y direction. Makes the repeated shape a base for following repetitions.)#"  , py::arg("theTimes"))
        .def("ZRepeat",
             (const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) ) static_cast<const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)( const Standard_Integer ) >(&BOPAlgo_MakePeriodic::ZRepeat),
             R"#(Repeats the shape in Z direction specified number of times. Negative value of times means that the repetition should be perform in negative Z direction. Makes the repeated shape a base for following repetitions.)#"  , py::arg("theTimes"))
        .def("RepeatedShape",
             (const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::RepeatedShape),
             R"#(Returns the repeated shape)#" )
        .def("ClearRepetitions",
             (void (BOPAlgo_MakePeriodic::*)() ) static_cast<void (BOPAlgo_MakePeriodic::*)() >(&BOPAlgo_MakePeriodic::ClearRepetitions),
             R"#(Clears all performed repetitions. The next repetition will be performed on the base shape.)#" )
        .def("Shape",
             (const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::Shape),
             R"#(Returns the resulting periodic shape)#" )
        .def("GetTwins",
             (const TopTools_ListOfShape & (BOPAlgo_MakePeriodic::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (BOPAlgo_MakePeriodic::*)( const TopoDS_Shape & ) const>(&BOPAlgo_MakePeriodic::GetTwins),
             R"#(Returns the identical shapes for the given shape located on the opposite periodic side. Returns empty list in case the shape has no twin.)#"  , py::arg("theS"))
        .def("History",
             (const opencascade::handle<BRepTools_History> & (BOPAlgo_MakePeriodic::*)() const) static_cast<const opencascade::handle<BRepTools_History> & (BOPAlgo_MakePeriodic::*)() const>(&BOPAlgo_MakePeriodic::History),
             R"#(Returns the History of the algorithm)#" )
        .def("Clear",
             (void (BOPAlgo_MakePeriodic::*)() ) static_cast<void (BOPAlgo_MakePeriodic::*)() >(&BOPAlgo_MakePeriodic::Clear),
             R"#(Clears the algorithm from previous runs)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ToDirectionID_s",
                    (Standard_Integer (*)( const Standard_Integer ) ) static_cast<Standard_Integer (*)( const Standard_Integer ) >(&BOPAlgo_MakePeriodic::ToDirectionID),
                    R"#(Converts the integer to ID of periodic direction)#"  , py::arg("theDirectionID"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_ArgumentAnalyzer , shared_ptr<BOPAlgo_ArgumentAnalyzer> , BOPAlgo_Algo>>(m.attr("BOPAlgo_ArgumentAnalyzer"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_BuilderArea , shared_ptr_nodelete<BOPAlgo_BuilderArea>,Py_BOPAlgo_BuilderArea , BOPAlgo_Algo>>(m.attr("BOPAlgo_BuilderArea"))
    // constructors
    // custom constructors
    // methods
        .def("SetContext",
             (void (BOPAlgo_BuilderArea::*)( const opencascade::handle<IntTools_Context> & ) ) static_cast<void (BOPAlgo_BuilderArea::*)( const opencascade::handle<IntTools_Context> & ) >(&BOPAlgo_BuilderArea::SetContext),
             R"#(Sets the context for the algorithms)#"  , py::arg("theContext"))
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::Shapes),
             R"#(Returns the input shapes)#" )
        .def("SetShapes",
             (void (BOPAlgo_BuilderArea::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BOPAlgo_BuilderArea::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BOPAlgo_BuilderArea::SetShapes),
             R"#(Sets the shapes for building areas)#"  , py::arg("theLS"))
        .def("Loops",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::Loops),
             R"#(Returns the found loops)#" )
        .def("Areas",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::Areas),
             R"#(Returns the found areas)#" )
        .def("SetAvoidInternalShapes",
             (void (BOPAlgo_BuilderArea::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_BuilderArea::*)( const Standard_Boolean ) >(&BOPAlgo_BuilderArea::SetAvoidInternalShapes),
             R"#(Defines the preventing of addition of internal parts into result. The default value is FALSE, i.e. the internal parts are added into result.)#"  , py::arg("theAvoidInternal"))
        .def("IsAvoidInternalShapes",
             (Standard_Boolean (BOPAlgo_BuilderArea::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderArea::*)() const>(&BOPAlgo_BuilderArea::IsAvoidInternalShapes),
             R"#(Returns the AvoidInternalShapes flag)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_BuilderShape , shared_ptr<BOPAlgo_BuilderShape>,Py_BOPAlgo_BuilderShape , BOPAlgo_Algo>>(m.attr("BOPAlgo_BuilderShape"))
    // constructors
    // custom constructors
    // methods
        .def("Shape",
             (const TopoDS_Shape & (BOPAlgo_BuilderShape::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::Shape),
             R"#(Returns the result of algorithm)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape & ) >(&BOPAlgo_BuilderShape::Modified),
             R"#(Returns the list of shapes Modified from the shape theS.)#"  , py::arg("theS"))
        .def("Generated",
             (const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BOPAlgo_BuilderShape::*)( const TopoDS_Shape & ) >(&BOPAlgo_BuilderShape::Generated),
             R"#(Returns the list of shapes Generated from the shape theS.)#"  , py::arg("theS"))
        .def("IsDeleted",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)( const TopoDS_Shape & ) >(&BOPAlgo_BuilderShape::IsDeleted),
             R"#(Returns true if the shape theS has been deleted. In this case the shape will have no Modified elements, but can have Generated elements.)#"  , py::arg("theS"))
        .def("HasModified",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::HasModified),
             R"#(Returns true if any of the input shapes has been modified during operation.)#" )
        .def("HasGenerated",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::HasGenerated),
             R"#(Returns true if any of the input shapes has generated shapes during operation.)#" )
        .def("HasDeleted",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::HasDeleted),
             R"#(Returns true if any of the input shapes has been deleted during operation.)#" )
        .def("History",
             (opencascade::handle<BRepTools_History> (BOPAlgo_BuilderShape::*)() ) static_cast<opencascade::handle<BRepTools_History> (BOPAlgo_BuilderShape::*)() >(&BOPAlgo_BuilderShape::History),
             R"#(History Tool)#" )
        .def("SetToFillHistory",
             (void (BOPAlgo_BuilderShape::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_BuilderShape::*)( const Standard_Boolean ) >(&BOPAlgo_BuilderShape::SetToFillHistory),
             R"#(Allows disabling the history collection)#"  , py::arg("theHistFlag"))
        .def("HasHistory",
             (Standard_Boolean (BOPAlgo_BuilderShape::*)() const) static_cast<Standard_Boolean (BOPAlgo_BuilderShape::*)() const>(&BOPAlgo_BuilderShape::HasHistory),
             R"#(Returns flag of history availability)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_PaveFiller , shared_ptr<BOPAlgo_PaveFiller> , BOPAlgo_Algo>>(m.attr("BOPAlgo_PaveFiller"))
    // constructors
    // custom constructors
    // methods
        .def("SetArguments",
             (void (BOPAlgo_PaveFiller::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BOPAlgo_PaveFiller::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BOPAlgo_PaveFiller::SetArguments),
             R"#(Sets the arguments for operation)#"  , py::arg("theLS"))
        .def("AddArgument",
             (void (BOPAlgo_PaveFiller::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_PaveFiller::*)( const TopoDS_Shape & ) >(&BOPAlgo_PaveFiller::AddArgument),
             R"#(Adds the argument for operation)#"  , py::arg("theShape"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BOPAlgo_PaveFiller::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_PaveFiller::*)() const>(&BOPAlgo_PaveFiller::Arguments),
             R"#(Returns the list of arguments)#" )
        .def("Perform",
             (void (BOPAlgo_PaveFiller::*)() ) static_cast<void (BOPAlgo_PaveFiller::*)() >(&BOPAlgo_PaveFiller::Perform),
             R"#(None)#" )
        .def("SetAvoidBuildPCurve",
             (void (BOPAlgo_PaveFiller::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_PaveFiller::*)( const Standard_Boolean ) >(&BOPAlgo_PaveFiller::SetAvoidBuildPCurve),
             R"#(Sets the flag to avoid building of p-curves of edges on faces)#"  , py::arg("theValue"))
        .def("IsAvoidBuildPCurve",
             (Standard_Boolean (BOPAlgo_PaveFiller::*)() const) static_cast<Standard_Boolean (BOPAlgo_PaveFiller::*)() const>(&BOPAlgo_PaveFiller::IsAvoidBuildPCurve),
             R"#(Returns the flag to avoid building of p-curves of edges on faces)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_ShellSplitter , shared_ptr<BOPAlgo_ShellSplitter> , BOPAlgo_Algo>>(m.attr("BOPAlgo_ShellSplitter"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (BOPAlgo_ShellSplitter::*)() ) static_cast<void (BOPAlgo_ShellSplitter::*)() >(&BOPAlgo_ShellSplitter::Perform),
             R"#(performs the algorithm)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_WireSplitter , shared_ptr<BOPAlgo_WireSplitter> , BOPAlgo_Algo>>(m.attr("BOPAlgo_WireSplitter"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (BOPAlgo_WireSplitter::*)() ) static_cast<void (BOPAlgo_WireSplitter::*)() >(&BOPAlgo_WireSplitter::Perform),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeWire_s",
                    (void (*)( NCollection_List<TopoDS_Shape> & , TopoDS_Wire & ) ) static_cast<void (*)( NCollection_List<TopoDS_Shape> & , TopoDS_Wire & ) >(&BOPAlgo_WireSplitter::MakeWire),
                    R"#(None)#"  , py::arg("theLE"),  py::arg("theW"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_Builder , shared_ptr<BOPAlgo_Builder> , BOPAlgo_BuilderShape>>(m.attr("BOPAlgo_Builder"))
    // constructors
    // custom constructors
    // methods
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
             (void (BOPAlgo_Builder::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_Builder::*)( const TopoDS_Shape & ) >(&BOPAlgo_Builder::AddArgument),
             R"#(Adds the argument to the operation.)#"  , py::arg("theShape"))
        .def("SetArguments",
             (void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BOPAlgo_Builder::SetArguments),
             R"#(Sets the list of arguments for the operation.)#"  , py::arg("theLS"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Arguments),
             R"#(Returns the list of arguments.)#" )
        .def("SetNonDestructive",
             (void (BOPAlgo_Builder::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_Builder::*)( const Standard_Boolean ) >(&BOPAlgo_Builder::SetNonDestructive),
             R"#(Sets the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated. This flag is taken into account if internal PaveFiller is used only. In the case of calling PerformWithFiller the corresponding flag of that PaveFiller is in force.)#"  , py::arg("theFlag"))
        .def("NonDestructive",
             (Standard_Boolean (BOPAlgo_Builder::*)() const) static_cast<Standard_Boolean (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::NonDestructive),
             R"#(Returns the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#" )
        .def("SetGlue",
             (void (BOPAlgo_Builder::*)( const BOPAlgo_GlueEnum ) ) static_cast<void (BOPAlgo_Builder::*)( const BOPAlgo_GlueEnum ) >(&BOPAlgo_Builder::SetGlue),
             R"#(Sets the glue option for the algorithm)#"  , py::arg("theGlue"))
        .def("Glue",
             (BOPAlgo_GlueEnum (BOPAlgo_Builder::*)() const) static_cast<BOPAlgo_GlueEnum (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Glue),
             R"#(Returns the glue option of the algorithm)#" )
        .def("SetCheckInverted",
             (void (BOPAlgo_Builder::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_Builder::*)( const Standard_Boolean ) >(&BOPAlgo_Builder::SetCheckInverted),
             R"#(Enables/Disables the check of the input solids for inverted status)#"  , py::arg("theCheck"))
        .def("CheckInverted",
             (Standard_Boolean (BOPAlgo_Builder::*)() const) static_cast<Standard_Boolean (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::CheckInverted),
             R"#(Returns the flag defining whether the check for input solids on inverted status should be performed or not.)#" )
        .def("Perform",
             (void (BOPAlgo_Builder::*)() ) static_cast<void (BOPAlgo_Builder::*)() >(&BOPAlgo_Builder::Perform),
             R"#(Performs the operation. The intersection will be performed also.)#" )
        .def("PerformWithFiller",
             (void (BOPAlgo_Builder::*)( const BOPAlgo_PaveFiller & ) ) static_cast<void (BOPAlgo_Builder::*)( const BOPAlgo_PaveFiller & ) >(&BOPAlgo_Builder::PerformWithFiller),
             R"#(Performs the operation with the prepared filler. The intersection will not be performed in this case.)#"  , py::arg("theFiller"))
        .def("BuildBOP",
             (void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> & , const TopAbs_State ,  const NCollection_List<TopoDS_Shape> & , const TopAbs_State , opencascade::handle<Message_Report> ) ) static_cast<void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> & , const TopAbs_State ,  const NCollection_List<TopoDS_Shape> & , const TopAbs_State , opencascade::handle<Message_Report> ) >(&BOPAlgo_Builder::BuildBOP),
             R"#(Builds the result shape according to the given states for the objects and tools. These states can be unambiguously converted into the Boolean operation type. Thus, it performs the Boolean operation on the given groups of shapes.)#"  , py::arg("theObjects"),  py::arg("theObjState"),  py::arg("theTools"),  py::arg("theToolsState"),  py::arg("theReport"))
        .def("BuildBOP",
             (void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const NCollection_List<TopoDS_Shape> & , const BOPAlgo_Operation , opencascade::handle<Message_Report> ) ) static_cast<void (BOPAlgo_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const NCollection_List<TopoDS_Shape> & , const BOPAlgo_Operation , opencascade::handle<Message_Report> ) >(&BOPAlgo_Builder::BuildBOP),
             R"#(Builds the result of Boolean operation of given type basing on the result of Builder operation (GF or any other).)#"  , py::arg("theObjects"),  py::arg("theTools"),  py::arg("theOperation"),  py::arg("theReport"))
        .def("Images",
             (const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Images),
             R"#(Returns the map of images.)#" )
        .def("Origins",
             (const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::Origins),
             R"#(Returns the map of origins.)#" )
        .def("ShapesSD",
             (const TopTools_DataMapOfShapeShape & (BOPAlgo_Builder::*)() const) static_cast<const TopTools_DataMapOfShapeShape & (BOPAlgo_Builder::*)() const>(&BOPAlgo_Builder::ShapesSD),
             R"#(Returns the map of Same Domain (SD) shapes - coinciding shapes from different arguments.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_BuilderFace , shared_ptr<BOPAlgo_BuilderFace> , BOPAlgo_BuilderArea>>(m.attr("BOPAlgo_BuilderFace"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (BOPAlgo_BuilderFace::*)() ) static_cast<void (BOPAlgo_BuilderFace::*)() >(&BOPAlgo_BuilderFace::Perform),
             R"#(Performs the algorithm)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_BuilderSolid , shared_ptr<BOPAlgo_BuilderSolid> , BOPAlgo_BuilderArea>>(m.attr("BOPAlgo_BuilderSolid"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (BOPAlgo_BuilderSolid::*)() ) static_cast<void (BOPAlgo_BuilderSolid::*)() >(&BOPAlgo_BuilderSolid::Perform),
             R"#(Performs the construction of the solids from the given faces)#" )
        .def("GetBoxesMap",
             (const TopTools_DataMapOfShapeBox & (BOPAlgo_BuilderSolid::*)() const) static_cast<const TopTools_DataMapOfShapeBox & (BOPAlgo_BuilderSolid::*)() const>(&BOPAlgo_BuilderSolid::GetBoxesMap),
             R"#(For classification purposes the algorithm builds the bounding boxes for all created solids. This method returns the data map of solid - box pairs.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_CheckerSI , shared_ptr<BOPAlgo_CheckerSI> , BOPAlgo_PaveFiller>>(m.attr("BOPAlgo_CheckerSI"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (BOPAlgo_CheckerSI::*)() ) static_cast<void (BOPAlgo_CheckerSI::*)() >(&BOPAlgo_CheckerSI::Perform),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_RemoveFeatures , shared_ptr<BOPAlgo_RemoveFeatures> , BOPAlgo_BuilderShape>>(m.attr("BOPAlgo_RemoveFeatures"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetShape",
             (void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape & ) >(&BOPAlgo_RemoveFeatures::SetShape),
             R"#(Sets the shape for processing.)#"  , py::arg("theShape"))
        .def("InputShape",
             (const TopoDS_Shape & (BOPAlgo_RemoveFeatures::*)() const) static_cast<const TopoDS_Shape & (BOPAlgo_RemoveFeatures::*)() const>(&BOPAlgo_RemoveFeatures::InputShape),
             R"#(Returns the input shape)#" )
        .def("AddFaceToRemove",
             (void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_RemoveFeatures::*)( const TopoDS_Shape & ) >(&BOPAlgo_RemoveFeatures::AddFaceToRemove),
             R"#(Adds the face to remove from the input shape.)#"  , py::arg("theFace"))
        .def("AddFacesToRemove",
             (void (BOPAlgo_RemoveFeatures::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BOPAlgo_RemoveFeatures::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BOPAlgo_RemoveFeatures::AddFacesToRemove),
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_CellsBuilder , shared_ptr<BOPAlgo_CellsBuilder> , BOPAlgo_Builder>>(m.attr("BOPAlgo_CellsBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (BOPAlgo_CellsBuilder::*)() ) static_cast<void (BOPAlgo_CellsBuilder::*)() >(&BOPAlgo_CellsBuilder::Clear),
             R"#(Redefined method Clear - clears the contents.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_MakerVolume , shared_ptr<BOPAlgo_MakerVolume> , BOPAlgo_Builder>>(m.attr("BOPAlgo_MakerVolume"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Clear",
             (void (BOPAlgo_MakerVolume::*)() ) static_cast<void (BOPAlgo_MakerVolume::*)() >(&BOPAlgo_MakerVolume::Clear),
             R"#(Clears the data.)#" )
        .def("SetIntersect",
             (void (BOPAlgo_MakerVolume::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_MakerVolume::*)( const Standard_Boolean ) >(&BOPAlgo_MakerVolume::SetIntersect),
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
             (void (BOPAlgo_MakerVolume::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_MakerVolume::*)( const Standard_Boolean ) >(&BOPAlgo_MakerVolume::SetAvoidInternalShapes),
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
             (void (BOPAlgo_MakerVolume::*)( const Standard_Boolean ) ) static_cast<void (BOPAlgo_MakerVolume::*)( const Standard_Boolean ) >(&BOPAlgo_MakerVolume::SetIntersect),
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_Section , shared_ptr<BOPAlgo_Section> , BOPAlgo_Builder>>(m.attr("BOPAlgo_Section"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_ToolsProvider , shared_ptr<BOPAlgo_ToolsProvider> , BOPAlgo_Builder>>(m.attr("BOPAlgo_ToolsProvider"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (BOPAlgo_ToolsProvider::*)() ) static_cast<void (BOPAlgo_ToolsProvider::*)() >(&BOPAlgo_ToolsProvider::Clear),
             R"#(Clears internal fields and arguments)#" )
        .def("AddTool",
             (void (BOPAlgo_ToolsProvider::*)( const TopoDS_Shape & ) ) static_cast<void (BOPAlgo_ToolsProvider::*)( const TopoDS_Shape & ) >(&BOPAlgo_ToolsProvider::AddTool),
             R"#(Adds Tool argument of the operation)#"  , py::arg("theShape"))
        .def("SetTools",
             (void (BOPAlgo_ToolsProvider::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BOPAlgo_ToolsProvider::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BOPAlgo_ToolsProvider::SetTools),
             R"#(Adds the Tool arguments of the operation)#"  , py::arg("theShapes"))
        .def("Tools",
             (const TopTools_ListOfShape & (BOPAlgo_ToolsProvider::*)() const) static_cast<const TopTools_ListOfShape & (BOPAlgo_ToolsProvider::*)() const>(&BOPAlgo_ToolsProvider::Tools),
             R"#(Returns the Tool arguments of the operation)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_BOP , shared_ptr<BOPAlgo_BOP> , BOPAlgo_ToolsProvider>>(m.attr("BOPAlgo_BOP"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (BOPAlgo_BOP::*)() ) static_cast<void (BOPAlgo_BOP::*)() >(&BOPAlgo_BOP::Clear),
             R"#(Clears internal fields and arguments)#" )
        .def("Perform",
             (void (BOPAlgo_BOP::*)() ) static_cast<void (BOPAlgo_BOP::*)() >(&BOPAlgo_BOP::Perform),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPAlgo_Splitter , shared_ptr<BOPAlgo_Splitter> , BOPAlgo_ToolsProvider>>(m.attr("BOPAlgo_Splitter"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (BOPAlgo_Splitter::*)() ) static_cast<void (BOPAlgo_Splitter::*)() >(&BOPAlgo_Splitter::Perform),
             R"#(Performs the operation)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BOPAlgo_BuilderShape.hxx
// ./opencascade/BOPAlgo_MakePeriodic.hxx
// ./opencascade/BOPAlgo_BuilderFace.hxx
// ./opencascade/BOPAlgo_Options.hxx
// ./opencascade/BOPAlgo_PaveFiller.hxx
// ./opencascade/BOPAlgo_ToolsProvider.hxx
// ./opencascade/BOPAlgo_CheckResult.hxx
// ./opencascade/BOPAlgo_RemoveFeatures.hxx
// ./opencascade/BOPAlgo_BOP.hxx
// ./opencascade/BOPAlgo_CellsBuilder.hxx
// ./opencascade/BOPAlgo_Alerts.hxx
// ./opencascade/BOPAlgo_Builder.hxx
// ./opencascade/BOPAlgo_PWireEdgeSet.hxx
// ./opencascade/BOPAlgo_ListOfCheckResult.hxx
// ./opencascade/BOPAlgo_BuilderSolid.hxx
// ./opencascade/BOPAlgo_PPaveFiller.hxx
// ./opencascade/BOPAlgo_PBuilder.hxx
// ./opencascade/BOPAlgo_WireEdgeSet.hxx
// ./opencascade/BOPAlgo_PSection.hxx
// ./opencascade/BOPAlgo_ShellSplitter.hxx
// ./opencascade/BOPAlgo_PBOP.hxx
// ./opencascade/BOPAlgo_PArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_ArgumentAnalyzer.hxx
// ./opencascade/BOPAlgo_Splitter.hxx
// ./opencascade/BOPAlgo_CheckerSI.hxx
// ./opencascade/BOPAlgo_Algo.hxx
// ./opencascade/BOPAlgo_BuilderArea.hxx
// ./opencascade/BOPAlgo_SectionAttribute.hxx
// ./opencascade/BOPAlgo_MakerVolume.hxx
// ./opencascade/BOPAlgo_Tools.hxx
// ./opencascade/BOPAlgo_WireSplitter.hxx
// ./opencascade/BOPAlgo_CheckStatus.hxx
// ./opencascade/BOPAlgo_Section.hxx
// ./opencascade/BOPAlgo_MakeConnected.hxx
// ./opencascade/BOPAlgo_Operation.hxx
// ./opencascade/BOPAlgo_GlueEnum.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<BOPAlgo_CheckResult>(m,"BOPAlgo_ListOfCheckResult");
    register_template_NCollection_List<BOPAlgo_EdgeInfo>(m,"BOPAlgo_ListOfEdgeInfo");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, BOPAlgo_ListOfEdgeInfo, TopTools_ShapeMapHasher>(m,"BOPAlgo_IndexedDataMapOfShapeListOfEdgeInfo");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
