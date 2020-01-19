
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_FiniteElement.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <IGESAppli_Node.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_FlowLineSpec.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_PinNumber.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_ElementResults.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_NodalResults.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_PWBArtworkStackup.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <gp_Pnt.hxx>
#include <IGESData_TransfEntity.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESAppli_Protocol.hxx>
#include <IGESAppli_Node.hxx>
#include <IGESAppli_FiniteElement.hxx>
#include <IGESAppli_NodalDisplAndRot.hxx>
#include <IGESAppli_NodalResults.hxx>
#include <IGESAppli_ElementResults.hxx>
#include <IGESAppli_Flow.hxx>
#include <IGESAppli_PipingFlow.hxx>
#include <IGESAppli_RegionRestriction.hxx>
#include <IGESAppli_LevelFunction.hxx>
#include <IGESAppli_LineWidening.hxx>
#include <IGESAppli_DrilledHole.hxx>
#include <IGESAppli_ReferenceDesignator.hxx>
#include <IGESAppli_PinNumber.hxx>
#include <IGESAppli_PartNumber.hxx>
#include <IGESAppli_FlowLineSpec.hxx>
#include <IGESAppli_LevelToPWBLayerMap.hxx>
#include <IGESAppli_PWBArtworkStackup.hxx>
#include <IGESAppli_PWBDrilledHole.hxx>
#include <IGESAppli_NodalConstraint.hxx>
#include <IGESAppli_ToolNode.hxx>
#include <IGESAppli_ToolFiniteElement.hxx>
#include <IGESAppli_ToolNodalDisplAndRot.hxx>
#include <IGESAppli_ToolNodalResults.hxx>
#include <IGESAppli_ToolElementResults.hxx>
#include <IGESAppli_ToolFlow.hxx>
#include <IGESAppli_ToolPipingFlow.hxx>
#include <IGESAppli_ToolRegionRestriction.hxx>
#include <IGESAppli_ToolLevelFunction.hxx>
#include <IGESAppli_ToolLineWidening.hxx>
#include <IGESAppli_ToolDrilledHole.hxx>
#include <IGESAppli_ToolReferenceDesignator.hxx>
#include <IGESAppli_ToolPinNumber.hxx>
#include <IGESAppli_ToolPartNumber.hxx>
#include <IGESAppli_ToolFlowLineSpec.hxx>
#include <IGESAppli_ToolLevelToPWBLayerMap.hxx>
#include <IGESAppli_ToolPWBArtworkStackup.hxx>
#include <IGESAppli_ToolPWBDrilledHole.hxx>
#include <IGESAppli_ToolNodalConstraint.hxx>
#include <IGESAppli_Protocol.hxx>
#include <IGESAppli_ReadWriteModule.hxx>
#include <IGESAppli_GeneralModule.hxx>
#include <IGESAppli_SpecificModule.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_ReferenceDesignator.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_NodalDisplAndRot.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_DrilledHole.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_LineWidening.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_LevelFunction.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_PWBDrilledHole.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_RegionRestriction.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_Node.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_PipingFlow.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_LevelToPWBLayerMap.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_NodalConstraint.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_Flow.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_PartNumber.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>

// module includes
#include <IGESAppli.hxx>
#include <IGESAppli_Array1OfFiniteElement.hxx>
#include <IGESAppli_Array1OfFlow.hxx>
#include <IGESAppli_Array1OfNode.hxx>
#include <IGESAppli_DrilledHole.hxx>
#include <IGESAppli_ElementResults.hxx>
#include <IGESAppli_FiniteElement.hxx>
#include <IGESAppli_Flow.hxx>
#include <IGESAppli_FlowLineSpec.hxx>
#include <IGESAppli_GeneralModule.hxx>
#include <IGESAppli_HArray1OfFiniteElement.hxx>
#include <IGESAppli_HArray1OfFlow.hxx>
#include <IGESAppli_HArray1OfNode.hxx>
#include <IGESAppli_LevelFunction.hxx>
#include <IGESAppli_LevelToPWBLayerMap.hxx>
#include <IGESAppli_LineWidening.hxx>
#include <IGESAppli_NodalConstraint.hxx>
#include <IGESAppli_NodalDisplAndRot.hxx>
#include <IGESAppli_NodalResults.hxx>
#include <IGESAppli_Node.hxx>
#include <IGESAppli_PartNumber.hxx>
#include <IGESAppli_PinNumber.hxx>
#include <IGESAppli_PipingFlow.hxx>
#include <IGESAppli_Protocol.hxx>
#include <IGESAppli_PWBArtworkStackup.hxx>
#include <IGESAppli_PWBDrilledHole.hxx>
#include <IGESAppli_ReadWriteModule.hxx>
#include <IGESAppli_ReferenceDesignator.hxx>
#include <IGESAppli_RegionRestriction.hxx>
#include <IGESAppli_SpecificModule.hxx>
#include <IGESAppli_ToolDrilledHole.hxx>
#include <IGESAppli_ToolElementResults.hxx>
#include <IGESAppli_ToolFiniteElement.hxx>
#include <IGESAppli_ToolFlow.hxx>
#include <IGESAppli_ToolFlowLineSpec.hxx>
#include <IGESAppli_ToolLevelFunction.hxx>
#include <IGESAppli_ToolLevelToPWBLayerMap.hxx>
#include <IGESAppli_ToolLineWidening.hxx>
#include <IGESAppli_ToolNodalConstraint.hxx>
#include <IGESAppli_ToolNodalDisplAndRot.hxx>
#include <IGESAppli_ToolNodalResults.hxx>
#include <IGESAppli_ToolNode.hxx>
#include <IGESAppli_ToolPartNumber.hxx>
#include <IGESAppli_ToolPinNumber.hxx>
#include <IGESAppli_ToolPipingFlow.hxx>
#include <IGESAppli_ToolPWBArtworkStackup.hxx>
#include <IGESAppli_ToolPWBDrilledHole.hxx>
#include <IGESAppli_ToolReferenceDesignator.hxx>
#include <IGESAppli_ToolRegionRestriction.hxx>

// template related includes
// ./opencascade/IGESAppli_Array1OfNode.hxx
#include "NCollection.hxx"
// ./opencascade/IGESAppli_Array1OfFiniteElement.hxx
#include "NCollection.hxx"
// ./opencascade/IGESAppli_Array1OfFlow.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESAppli(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESAppli"));


//Python trampoline classes

// classes

    register_default_constructor<IGESAppli , shared_ptr<IGESAppli>>(m,"IGESAppli");

    static_cast<py::class_<IGESAppli , shared_ptr<IGESAppli>  >>(m.attr("IGESAppli"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESAppli::Init),
                    R"#(Prepares dynamic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESAppli_Protocol> (*)() ) static_cast<opencascade::handle<IGESAppli_Protocol> (*)() >(&IGESAppli::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_DrilledHole ,opencascade::handle<IGESAppli_DrilledHole>  , IGESData_IGESEntity >>(m.attr("IGESAppli_DrilledHole"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_DrilledHole::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESAppli_DrilledHole::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESAppli_DrilledHole::Init),
             R"#(This method is used to set the fields of the class DrilledHole - nbPropVal : Number of property values = 5 - aSize : Drill diameter size - anotherSize : Finish diameter size - aPlating : Plating indication flag False = not plating True = is plating - aLayer : Lower numbered layer - anotherLayer : Higher numbered layer)#"  , py::arg("nbPropVal"),  py::arg("aSize"),  py::arg("anotherSize"),  py::arg("aPlating"),  py::arg("aLayer"),  py::arg("anotherLayer"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_DrilledHole::*)() const) static_cast<Standard_Integer (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::NbPropertyValues),
             R"#(is always 5)#" )
        .def("DrillDiaSize",
             (Standard_Real (IGESAppli_DrilledHole::*)() const) static_cast<Standard_Real (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::DrillDiaSize),
             R"#(returns the drill diameter size)#" )
        .def("FinishDiaSize",
             (Standard_Real (IGESAppli_DrilledHole::*)() const) static_cast<Standard_Real (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::FinishDiaSize),
             R"#(returns the finish diameter size)#" )
        .def("IsPlating",
             (Standard_Boolean (IGESAppli_DrilledHole::*)() const) static_cast<Standard_Boolean (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::IsPlating),
             R"#(Returns Plating Status : False = not plating / True = is plating)#" )
        .def("NbLowerLayer",
             (Standard_Integer (IGESAppli_DrilledHole::*)() const) static_cast<Standard_Integer (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::NbLowerLayer),
             R"#(returns the lower numbered layer)#" )
        .def("NbHigherLayer",
             (Standard_Integer (IGESAppli_DrilledHole::*)() const) static_cast<Standard_Integer (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::NbHigherLayer),
             R"#(returns the higher numbered layer)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_DrilledHole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_DrilledHole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_DrilledHole::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ElementResults ,opencascade::handle<IGESAppli_ElementResults>  , IGESData_IGESEntity >>(m.attr("IGESAppli_ElementResults"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_ElementResults::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESAppli_HArray1OfFiniteElement> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> &  ) ) static_cast<void (IGESAppli_ElementResults::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESAppli_HArray1OfFiniteElement> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> &  ) >(&IGESAppli_ElementResults::Init),
             R"#(This method is used to set the fields of the class ElementResults - aNote : GeneralNote Entity describing analysis - aSubCase : Analysis Subcase number - aTime : Analysis time value - nbResults : Number of result values per FEM - aResRepFlag : Results Reporting Flag - allElementIdents : FEM element number for elements - allFiniteElems : FEM element - allTopTypes : Element Topology Types - nbLayers : Number of layers per result data location - allDataLayerFlags : Data Layer Flags - allnbResDataLocs : Number of result data report locations - allResDataLocs : Result Data Report Locations - allResults : List of Result data values of FEM analysis)#"  , py::arg("aNote"),  py::arg("aSubCase"),  py::arg("aTime"),  py::arg("nbResults"),  py::arg("aResRepFlag"),  py::arg("allElementIdents"),  py::arg("allFiniteElems"),  py::arg("allTopTypes"),  py::arg("nbLayers"),  py::arg("allDataLayerFlags"),  py::arg("allnbResDataLocs"),  py::arg("allResDataLocs"),  py::arg("allResults"))
        .def("SetFormNumber",
             (void (IGESAppli_ElementResults::*)( const Standard_Integer  ) ) static_cast<void (IGESAppli_ElementResults::*)( const Standard_Integer  ) >(&IGESAppli_ElementResults::SetFormNumber),
             R"#(Changes the FormNumber (which indicates Type of Result) Error if not in range [0-34])#"  , py::arg("form"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESAppli_ElementResults::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::Note),
             R"#(returns General Note Entity describing analysis case)#" )
        .def("SubCaseNumber",
             (Standard_Integer (IGESAppli_ElementResults::*)() const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::SubCaseNumber),
             R"#(returns analysis Subcase number)#" )
        .def("Time",
             (Standard_Real (IGESAppli_ElementResults::*)() const) static_cast<Standard_Real (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::Time),
             R"#(returns analysis time value)#" )
        .def("NbResultValues",
             (Standard_Integer (IGESAppli_ElementResults::*)() const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::NbResultValues),
             R"#(returns number of result values per FEM)#" )
        .def("ResultReportFlag",
             (Standard_Integer (IGESAppli_ElementResults::*)() const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::ResultReportFlag),
             R"#(returns Results Reporting Flag)#" )
        .def("NbElements",
             (Standard_Integer (IGESAppli_ElementResults::*)() const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::NbElements),
             R"#(returns number of FEM elements)#" )
        .def("ElementIdentifier",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::ElementIdentifier),
             R"#(returns FEM element number for elements)#"  , py::arg("Index"))
        .def("Element",
             (opencascade::handle<IGESAppli_FiniteElement> (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESAppli_FiniteElement> (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::Element),
             R"#(returns FEM element)#"  , py::arg("Index"))
        .def("ElementTopologyType",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::ElementTopologyType),
             R"#(returns element Topology Types)#"  , py::arg("Index"))
        .def("NbLayers",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::NbLayers),
             R"#(returns number of layers per result data location)#"  , py::arg("Index"))
        .def("DataLayerFlag",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::DataLayerFlag),
             R"#(returns Data Layer Flags)#"  , py::arg("Index"))
        .def("NbResultDataLocs",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::NbResultDataLocs),
             R"#(returns number of result data report locations)#"  , py::arg("Index"))
        .def("ResultDataLoc",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_ElementResults::ResultDataLoc),
             R"#(returns Result Data Report Locations UNFINISHED)#"  , py::arg("NElem"),  py::arg("NLoc"))
        .def("NbResults",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::NbResults),
             R"#(returns total number of results)#"  , py::arg("Index"))
        .def("ResultData",
             (Standard_Real (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_ElementResults::ResultData),
             R"#(returns Result data value for an Element, given its order between 1 and <NbResults(NElem)> (direct access) For a more comprehensive access, see below)#"  , py::arg("NElem"),  py::arg("num"))
        .def("ResultRank",
             (Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_ElementResults::ResultRank),
             R"#(Computes, for a given Element <NElem>, the rank of a individual Result Data, given <NVal>,<NLay>,<NLoc>)#"  , py::arg("NElem"),  py::arg("NVal"),  py::arg("NLay"),  py::arg("NLoc"))
        .def("ResultData",
             (Standard_Real (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (IGESAppli_ElementResults::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_ElementResults::ResultData),
             R"#(returns Result data values of FEM analysis, according this definition : - <NElem> : n0 of the Element to be considered - <NVal> : n0 of the Value between 1 and NbResultValues - <NLay> : n0 of the Layer for this Element - <NLoc> : n0 of the Data Location for this Element This gives for each Element, the corresponding rank computed by ResultRank, in which the leftmost subscript changes most rapidly)#"  , py::arg("NElem"),  py::arg("NVal"),  py::arg("NLay"),  py::arg("NLoc"))
        .def("ResultList",
             (opencascade::handle<TColStd_HArray1OfReal> (IGESAppli_ElementResults::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (IGESAppli_ElementResults::*)( const Standard_Integer  ) const>(&IGESAppli_ElementResults::ResultList),
             R"#(Returns in once the entire list of data for an Element, addressed as by ResultRank (See above))#"  , py::arg("NElem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_ElementResults::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_ElementResults::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_ElementResults::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_FiniteElement ,opencascade::handle<IGESAppli_FiniteElement>  , IGESData_IGESEntity >>(m.attr("IGESAppli_FiniteElement"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_FiniteElement::*)( const Standard_Integer ,  const opencascade::handle<IGESAppli_HArray1OfNode> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESAppli_FiniteElement::*)( const Standard_Integer ,  const opencascade::handle<IGESAppli_HArray1OfNode> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESAppli_FiniteElement::Init),
             R"#(This method is used to set the fields of the class FiniteElement - aType : Indicates the topology type - allNodes : List of Nodes defining the element - aName : Element type name)#"  , py::arg("aType"),  py::arg("allNodes"),  py::arg("aName"))
        .def("Topology",
             (Standard_Integer (IGESAppli_FiniteElement::*)() const) static_cast<Standard_Integer (IGESAppli_FiniteElement::*)() const>(&IGESAppli_FiniteElement::Topology),
             R"#(returns Topology type)#" )
        .def("NbNodes",
             (Standard_Integer (IGESAppli_FiniteElement::*)() const) static_cast<Standard_Integer (IGESAppli_FiniteElement::*)() const>(&IGESAppli_FiniteElement::NbNodes),
             R"#(returns the number of nodes defining the element)#" )
        .def("Node",
             (opencascade::handle<IGESAppli_Node> (IGESAppli_FiniteElement::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESAppli_Node> (IGESAppli_FiniteElement::*)( const Standard_Integer  ) const>(&IGESAppli_FiniteElement::Node),
             R"#(returns Node defining element entity raises exception if Index <= 0 or Index > NbNodes())#"  , py::arg("Index"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_FiniteElement::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_FiniteElement::*)() const>(&IGESAppli_FiniteElement::Name),
             R"#(returns Element Type Name)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_FiniteElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_FiniteElement::*)() const>(&IGESAppli_FiniteElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_FiniteElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_FiniteElement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_Flow ,opencascade::handle<IGESAppli_Flow>  , IGESData_IGESEntity >>(m.attr("IGESAppli_Flow"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_Flow::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESAppli_Flow::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESAppli_Flow::Init),
             R"#(This method is used to set the fields of the class Flow - nbContextFlags : Count of Context Flags, always = 2 - aFlowType : Type of Flow, default = 0 - aFuncFlag : Function Flag, default = 0 - allFlowAssocs : Flow Associativity Entities - allConnectPoints : Connect Point Entities - allJoins : Join Entities - allFlowNames : Flow Names - allTextDisps : Text Display Template Entities - allContFlowAssocs : Continuation Flow Associativity Entities)#"  , py::arg("nbContextFlags"),  py::arg("aFlowType"),  py::arg("aFuncFlag"),  py::arg("allFlowAssocs"),  py::arg("allConnectPoints"),  py::arg("allJoins"),  py::arg("allFlowNames"),  py::arg("allTextDisps"),  py::arg("allContFlowAssocs"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_Flow::*)() ) static_cast<Standard_Boolean (IGESAppli_Flow::*)() >(&IGESAppli_Flow::OwnCorrect),
             R"#(forces NbContextFalgs to 2, returns True if changed)#" )
        .def("NbContextFlags",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::NbContextFlags),
             R"#(returns number of Count of Context Flags, always = 2)#" )
        .def("NbFlowAssociativities",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::NbFlowAssociativities),
             R"#(returns number of Flow Associativity Entities)#" )
        .def("NbConnectPoints",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::NbConnectPoints),
             R"#(returns number of Connect Point Entities)#" )
        .def("NbJoins",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::NbJoins),
             R"#(returns number of Join Entities)#" )
        .def("NbFlowNames",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::NbFlowNames),
             R"#(returns number of Flow Names)#" )
        .def("NbTextDisplayTemplates",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::NbTextDisplayTemplates),
             R"#(returns number of Text Display Template Entities)#" )
        .def("NbContFlowAssociativities",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::NbContFlowAssociativities),
             R"#(returns number of Continuation Flow Associativity Entities)#" )
        .def("TypeOfFlow",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::TypeOfFlow),
             R"#(returns Type of Flow = 0 : Not Specified (default) 1 : Logical 2 : Physical)#" )
        .def("FunctionFlag",
             (Standard_Integer (IGESAppli_Flow::*)() const) static_cast<Standard_Integer (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::FunctionFlag),
             R"#(returns Function Flag = 0 : Not Specified (default) 1 : Electrical Signal 2 : Fluid Flow Path)#" )
        .def("FlowAssociativity",
             (opencascade::handle<IGESData_IGESEntity> (IGESAppli_Flow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESAppli_Flow::*)( const Standard_Integer  ) const>(&IGESAppli_Flow::FlowAssociativity),
             R"#(returns Flow Associativity Entity raises exception if Index <= 0 or Index > NbFlowAssociativities())#"  , py::arg("Index"))
        .def("ConnectPoint",
             (opencascade::handle<IGESDraw_ConnectPoint> (IGESAppli_Flow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDraw_ConnectPoint> (IGESAppli_Flow::*)( const Standard_Integer  ) const>(&IGESAppli_Flow::ConnectPoint),
             R"#(returns Connect Point Entity raises exception if Index <= 0 or Index > NbConnectPoints())#"  , py::arg("Index"))
        .def("Join",
             (opencascade::handle<IGESData_IGESEntity> (IGESAppli_Flow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESAppli_Flow::*)( const Standard_Integer  ) const>(&IGESAppli_Flow::Join),
             R"#(returns Join Entity raises exception if Index <= 0 or Index > NbJoins())#"  , py::arg("Index"))
        .def("FlowName",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_Flow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_Flow::*)( const Standard_Integer  ) const>(&IGESAppli_Flow::FlowName),
             R"#(returns Flow Name raises exception if Index <= 0 or Index > NbFlowNames())#"  , py::arg("Index"))
        .def("TextDisplayTemplate",
             (opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESAppli_Flow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESAppli_Flow::*)( const Standard_Integer  ) const>(&IGESAppli_Flow::TextDisplayTemplate),
             R"#(returns Text Display Template Entity raises exception if Index <= 0 or Index > NbTextDisplayTemplates())#"  , py::arg("Index"))
        .def("ContFlowAssociativity",
             (opencascade::handle<IGESData_IGESEntity> (IGESAppli_Flow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESAppli_Flow::*)( const Standard_Integer  ) const>(&IGESAppli_Flow::ContFlowAssociativity),
             R"#(returns Continuation Flow Associativity Entity raises exception if Index <= 0 or Index > NbContFlowAssociativities())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_Flow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_Flow::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_Flow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_FlowLineSpec ,opencascade::handle<IGESAppli_FlowLineSpec>  , IGESData_IGESEntity >>(m.attr("IGESAppli_FlowLineSpec"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_FlowLineSpec::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (IGESAppli_FlowLineSpec::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&IGESAppli_FlowLineSpec::Init),
             R"#(This method is used to set the fields of the class FlowLineSpec - allProperties : primary flow line specification and modifiers)#"  , py::arg("allProperties"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_FlowLineSpec::*)() const) static_cast<Standard_Integer (IGESAppli_FlowLineSpec::*)() const>(&IGESAppli_FlowLineSpec::NbPropertyValues),
             R"#(returns the number of property values)#" )
        .def("FlowLineName",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_FlowLineSpec::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_FlowLineSpec::*)() const>(&IGESAppli_FlowLineSpec::FlowLineName),
             R"#(returns primary flow line specification name)#" )
        .def("Modifier",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_FlowLineSpec::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_FlowLineSpec::*)( const Standard_Integer  ) const>(&IGESAppli_FlowLineSpec::Modifier),
             R"#(returns specified modifier element raises exception if Index <= 1 or Index > NbPropertyValues)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_FlowLineSpec::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_FlowLineSpec::*)() const>(&IGESAppli_FlowLineSpec::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_FlowLineSpec::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_FlowLineSpec::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_GeneralModule ,opencascade::handle<IGESAppli_GeneralModule>  , IGESData_GeneralModule >>(m.attr("IGESAppli_GeneralModule"))
        .def(py::init<  >()  )
    // methods
        .def("OwnSharedCase",
             (void (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESAppli_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESAppli_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESAppli_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESAppli_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESAppli_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<Standard_Integer (IGESAppli_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&IGESAppli_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity FEA for : ElementResults,FiniteElement,Node&Co Piping for : Flow & Co Professional for : others (in fact Schematics))#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_GeneralModule::*)() const>(&IGESAppli_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_HArray1OfFiniteElement ,opencascade::handle<IGESAppli_HArray1OfFiniteElement>  , IGESAppli_Array1OfFiniteElement , Standard_Transient >>(m.attr("IGESAppli_HArray1OfFiniteElement"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESAppli_FiniteElement> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESAppli_FiniteElement> > & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const IGESAppli_Array1OfFiniteElement & (IGESAppli_HArray1OfFiniteElement::*)() const) static_cast<const IGESAppli_Array1OfFiniteElement & (IGESAppli_HArray1OfFiniteElement::*)() const>(&IGESAppli_HArray1OfFiniteElement::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESAppli_Array1OfFiniteElement & (IGESAppli_HArray1OfFiniteElement::*)() ) static_cast<IGESAppli_Array1OfFiniteElement & (IGESAppli_HArray1OfFiniteElement::*)() >(&IGESAppli_HArray1OfFiniteElement::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_HArray1OfFiniteElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_HArray1OfFiniteElement::*)() const>(&IGESAppli_HArray1OfFiniteElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_HArray1OfFiniteElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_HArray1OfFiniteElement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_HArray1OfFlow ,opencascade::handle<IGESAppli_HArray1OfFlow>  , IGESAppli_Array1OfFlow , Standard_Transient >>(m.attr("IGESAppli_HArray1OfFlow"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESAppli_Flow> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESAppli_Flow> > & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const IGESAppli_Array1OfFlow & (IGESAppli_HArray1OfFlow::*)() const) static_cast<const IGESAppli_Array1OfFlow & (IGESAppli_HArray1OfFlow::*)() const>(&IGESAppli_HArray1OfFlow::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESAppli_Array1OfFlow & (IGESAppli_HArray1OfFlow::*)() ) static_cast<IGESAppli_Array1OfFlow & (IGESAppli_HArray1OfFlow::*)() >(&IGESAppli_HArray1OfFlow::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_HArray1OfFlow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_HArray1OfFlow::*)() const>(&IGESAppli_HArray1OfFlow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_HArray1OfFlow::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_HArray1OfFlow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_HArray1OfNode ,opencascade::handle<IGESAppli_HArray1OfNode>  , IGESAppli_Array1OfNode , Standard_Transient >>(m.attr("IGESAppli_HArray1OfNode"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESAppli_Node> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESAppli_Node> > & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const IGESAppli_Array1OfNode & (IGESAppli_HArray1OfNode::*)() const) static_cast<const IGESAppli_Array1OfNode & (IGESAppli_HArray1OfNode::*)() const>(&IGESAppli_HArray1OfNode::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESAppli_Array1OfNode & (IGESAppli_HArray1OfNode::*)() ) static_cast<IGESAppli_Array1OfNode & (IGESAppli_HArray1OfNode::*)() >(&IGESAppli_HArray1OfNode::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_HArray1OfNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_HArray1OfNode::*)() const>(&IGESAppli_HArray1OfNode::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_HArray1OfNode::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_HArray1OfNode::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_LevelFunction ,opencascade::handle<IGESAppli_LevelFunction>  , IGESData_IGESEntity >>(m.attr("IGESAppli_LevelFunction"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_LevelFunction::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESAppli_LevelFunction::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESAppli_LevelFunction::Init),
             R"#(This method is used to set the fields of the class LevelFunction - nbPropVal : Number of Properties, always = 2 - aCode : Function Description code default = 0 - aFuncDescrip : Function Description default = null string)#"  , py::arg("nbPropVal"),  py::arg("aCode"),  py::arg("aFuncDescrip"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_LevelFunction::*)() const) static_cast<Standard_Integer (IGESAppli_LevelFunction::*)() const>(&IGESAppli_LevelFunction::NbPropertyValues),
             R"#(is always 2)#" )
        .def("FuncDescriptionCode",
             (Standard_Integer (IGESAppli_LevelFunction::*)() const) static_cast<Standard_Integer (IGESAppli_LevelFunction::*)() const>(&IGESAppli_LevelFunction::FuncDescriptionCode),
             R"#(returns the function description code . Default = 0)#" )
        .def("FuncDescription",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_LevelFunction::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_LevelFunction::*)() const>(&IGESAppli_LevelFunction::FuncDescription),
             R"#(returns the function description Default = null string)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_LevelFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_LevelFunction::*)() const>(&IGESAppli_LevelFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_LevelFunction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_LevelFunction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_LevelToPWBLayerMap ,opencascade::handle<IGESAppli_LevelToPWBLayerMap>  , IGESData_IGESEntity >>(m.attr("IGESAppli_LevelToPWBLayerMap"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&IGESAppli_LevelToPWBLayerMap::Init),
             R"#(This method is used to set the fields of the class LevelToPWBLayerMap - nbPropVal : Number of property values - allExchLevels : Exchange File Level Numbers - allNativeLevels : Native Level Identifications - allPhysLevels : Physical Layer Numbers - allExchIdents : Exchange File Level Identifications raises exception if allExchLevels, allNativeLevels, allPhysLevels and all ExchIdents are not of same dimensions)#"  , py::arg("nbPropVal"),  py::arg("allExchLevels"),  py::arg("allNativeLevels"),  py::arg("allPhysLevels"),  py::arg("allExchIdents"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)() const) static_cast<Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)() const>(&IGESAppli_LevelToPWBLayerMap::NbPropertyValues),
             R"#(returns number of property values)#" )
        .def("NbLevelToLayerDefs",
             (Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)() const) static_cast<Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)() const>(&IGESAppli_LevelToPWBLayerMap::NbLevelToLayerDefs),
             R"#(returns number of level to layer definitions)#" )
        .def("ExchangeFileLevelNumber",
             (Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const>(&IGESAppli_LevelToPWBLayerMap::ExchangeFileLevelNumber),
             R"#(returns Exchange File Level Number raises exception if Index <= 0 or Index > NbLevelToLayerDefs)#"  , py::arg("Index"))
        .def("NativeLevel",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const>(&IGESAppli_LevelToPWBLayerMap::NativeLevel),
             R"#(returns Native Level Identification raises exception if Index <= 0 or Index > NbLevelToLayerDefs)#"  , py::arg("Index"))
        .def("PhysicalLayerNumber",
             (Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const>(&IGESAppli_LevelToPWBLayerMap::PhysicalLayerNumber),
             R"#(returns Physical Layer Number raises exception if Index <= 0 or Index > NbLevelToLayerDefs)#"  , py::arg("Index"))
        .def("ExchangeFileLevelIdent",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_LevelToPWBLayerMap::*)( const Standard_Integer  ) const>(&IGESAppli_LevelToPWBLayerMap::ExchangeFileLevelIdent),
             R"#(None)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_LevelToPWBLayerMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_LevelToPWBLayerMap::*)() const>(&IGESAppli_LevelToPWBLayerMap::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_LevelToPWBLayerMap::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_LevelToPWBLayerMap::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_LineWidening ,opencascade::handle<IGESAppli_LineWidening>  , IGESData_IGESEntity >>(m.attr("IGESAppli_LineWidening"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_LineWidening::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (IGESAppli_LineWidening::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&IGESAppli_LineWidening::Init),
             R"#(This method is used to set the fields of the class LineWidening - nbPropVal : Number of property values = 5 - aWidth : Width of metalization - aCornering : Cornering codes 0 = rounded 1 = squared - aExtnFlag : Extension Flag 0 = No Extension 1 = One-half width extension 2 = Extn set by ExtnVal - aJustifFlag : Justification flag 0 = Center justified 1 = left justified 2 = right justified - aExtnVal : Extension value if aExtnFlag = 2)#"  , py::arg("nbPropVal"),  py::arg("aWidth"),  py::arg("aCornering"),  py::arg("aExtnFlag"),  py::arg("aJustifFlag"),  py::arg("aExtnVal"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_LineWidening::*)() const) static_cast<Standard_Integer (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::NbPropertyValues),
             R"#(returns the number of property values is always 5)#" )
        .def("WidthOfMetalization",
             (Standard_Real (IGESAppli_LineWidening::*)() const) static_cast<Standard_Real (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::WidthOfMetalization),
             R"#(returns the width of metallization)#" )
        .def("CorneringCode",
             (Standard_Integer (IGESAppli_LineWidening::*)() const) static_cast<Standard_Integer (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::CorneringCode),
             R"#(returns the cornering code 0 = Rounded / 1 = Squared)#" )
        .def("ExtensionFlag",
             (Standard_Integer (IGESAppli_LineWidening::*)() const) static_cast<Standard_Integer (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::ExtensionFlag),
             R"#(returns the extension flag 0 = No extension 1 = One-half width extension 2 = Extension set by theExtnVal)#" )
        .def("JustificationFlag",
             (Standard_Integer (IGESAppli_LineWidening::*)() const) static_cast<Standard_Integer (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::JustificationFlag),
             R"#(returns the justification flag 0 = Centre justified 1 = Left justified 2 = Right justified)#" )
        .def("ExtensionValue",
             (Standard_Real (IGESAppli_LineWidening::*)() const) static_cast<Standard_Real (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::ExtensionValue),
             R"#(returns the Extension Value Present only if theExtnFlag = 2)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_LineWidening::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_LineWidening::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_LineWidening::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_NodalConstraint ,opencascade::handle<IGESAppli_NodalConstraint>  , IGESData_IGESEntity >>(m.attr("IGESAppli_NodalConstraint"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_NodalConstraint::*)( const Standard_Integer ,  const opencascade::handle<IGESAppli_Node> & ,  const opencascade::handle<IGESDefs_HArray1OfTabularData> &  ) ) static_cast<void (IGESAppli_NodalConstraint::*)( const Standard_Integer ,  const opencascade::handle<IGESAppli_Node> & ,  const opencascade::handle<IGESDefs_HArray1OfTabularData> &  ) >(&IGESAppli_NodalConstraint::Init),
             R"#(This method is used to set the fields of the class NodalConstraint - aType : Loads / Constraints - aNode : the Node - allTabData : Tabular Data Property carrying the load or constraint vector)#"  , py::arg("aType"),  py::arg("aNode"),  py::arg("allTabData"))
        .def("NbCases",
             (Standard_Integer (IGESAppli_NodalConstraint::*)() const) static_cast<Standard_Integer (IGESAppli_NodalConstraint::*)() const>(&IGESAppli_NodalConstraint::NbCases),
             R"#(returns total number of cases)#" )
        .def("Type",
             (Standard_Integer (IGESAppli_NodalConstraint::*)() const) static_cast<Standard_Integer (IGESAppli_NodalConstraint::*)() const>(&IGESAppli_NodalConstraint::Type),
             R"#(returns whether Loads (1) or Constraints (2))#" )
        .def("NodeEntity",
             (opencascade::handle<IGESAppli_Node> (IGESAppli_NodalConstraint::*)() const) static_cast<opencascade::handle<IGESAppli_Node> (IGESAppli_NodalConstraint::*)() const>(&IGESAppli_NodalConstraint::NodeEntity),
             R"#(returns the Node)#" )
        .def("TabularData",
             (opencascade::handle<IGESDefs_TabularData> (IGESAppli_NodalConstraint::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDefs_TabularData> (IGESAppli_NodalConstraint::*)( const Standard_Integer  ) const>(&IGESAppli_NodalConstraint::TabularData),
             R"#(returns Tabular Data Property carrying load or constraint vector raises exception if Index <= 0 or Index > NbCases)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_NodalConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_NodalConstraint::*)() const>(&IGESAppli_NodalConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_NodalConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_NodalConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_NodalDisplAndRot ,opencascade::handle<IGESAppli_NodalDisplAndRot>  , IGESData_IGESEntity >>(m.attr("IGESAppli_NodalDisplAndRot"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_NodalDisplAndRot::*)( const opencascade::handle<IGESDimen_HArray1OfGeneralNote> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESAppli_HArray1OfNode> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfXYZ> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfXYZ> &  ) ) static_cast<void (IGESAppli_NodalDisplAndRot::*)( const opencascade::handle<IGESDimen_HArray1OfGeneralNote> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESAppli_HArray1OfNode> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfXYZ> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfXYZ> &  ) >(&IGESAppli_NodalDisplAndRot::Init),
             R"#(This method is used to set the fields of the class NodalDisplAndRot - allNotes : Used to store the general note describing the analysis cases - allIdentifiers : Used to store the node number identifier for the nodes - allNodes : Used to store the nodes - allRotParams : Used to store the rotation for the nodes - allTransParams : Used to store the incremental displacements for the nodes raises exception if Lengths of allIdentifiers, allNodes, allRotParams, and allTransParams are not same or if length of allNotes and size of each element of allRotParams and allTransParam are not same)#"  , py::arg("allNotes"),  py::arg("allIdentifiers"),  py::arg("allNodes"),  py::arg("allRotParams"),  py::arg("allTransParams"))
        .def("NbCases",
             (Standard_Integer (IGESAppli_NodalDisplAndRot::*)() const) static_cast<Standard_Integer (IGESAppli_NodalDisplAndRot::*)() const>(&IGESAppli_NodalDisplAndRot::NbCases),
             R"#(returns the number of analysis cases)#" )
        .def("NbNodes",
             (Standard_Integer (IGESAppli_NodalDisplAndRot::*)() const) static_cast<Standard_Integer (IGESAppli_NodalDisplAndRot::*)() const>(&IGESAppli_NodalDisplAndRot::NbNodes),
             R"#(returns the number of nodes)#" )
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer  ) const>(&IGESAppli_NodalDisplAndRot::Note),
             R"#(returns the General Note that describes the Index analysis case raises exception if Index <= 0 or Index > NbCases)#"  , py::arg("Index"))
        .def("NodeIdentifier",
             (Standard_Integer (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer  ) const>(&IGESAppli_NodalDisplAndRot::NodeIdentifier),
             R"#(returns the node identifier as specified by the Index raises exception if Index <= 0 or Index > NbNodes)#"  , py::arg("Index"))
        .def("Node",
             (opencascade::handle<IGESAppli_Node> (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESAppli_Node> (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer  ) const>(&IGESAppli_NodalDisplAndRot::Node),
             R"#(returns the node as specified by the Index raises exception if Index <= 0 or Index > NbNodes)#"  , py::arg("Index"))
        .def("TranslationParameter",
             (gp_XYZ (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_XYZ (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_NodalDisplAndRot::TranslationParameter),
             R"#(returns the Translational Parameters for the particular Index Exception raised if NodeNum <= 0 or NodeNum > NbNodes() or CaseNum <= 0 or CaseNum > NbCases())#"  , py::arg("NodeNum"),  py::arg("CaseNum"))
        .def("RotationalParameter",
             (gp_XYZ (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_XYZ (IGESAppli_NodalDisplAndRot::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_NodalDisplAndRot::RotationalParameter),
             R"#(returns the Rotational Parameters for Index Exception raised if NodeNum <= 0 or NodeNum > NbNodes() or CaseNum <= 0 or CaseNum > NbCases())#"  , py::arg("NodeNum"),  py::arg("CaseNum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_NodalDisplAndRot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_NodalDisplAndRot::*)() const>(&IGESAppli_NodalDisplAndRot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_NodalDisplAndRot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_NodalDisplAndRot::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_NodalResults ,opencascade::handle<IGESAppli_NodalResults>  , IGESData_IGESEntity >>(m.attr("IGESAppli_NodalResults"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_NodalResults::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESAppli_HArray1OfNode> & ,  const opencascade::handle<TColStd_HArray2OfReal> &  ) ) static_cast<void (IGESAppli_NodalResults::*)( const opencascade::handle<IGESDimen_GeneralNote> & ,  const Standard_Integer ,  const Standard_Real ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESAppli_HArray1OfNode> & ,  const opencascade::handle<TColStd_HArray2OfReal> &  ) >(&IGESAppli_NodalResults::Init),
             R"#(This method is used to set the fields of the class NodalResults - aNote : General Note that describes the analysis case - aNumber : Analysis Subcase number - aTime : Analysis time - allNodeIdentifiers : Node identifiers for the nodes - allNodes : List of FEM Node Entities - allData : Values of the Finite Element analysis result data raises exception if Lengths of allNodeIdentifiers, allNodes and allData (Cols) are not same)#"  , py::arg("aNote"),  py::arg("aNumber"),  py::arg("aTime"),  py::arg("allNodeIdentifiers"),  py::arg("allNodes"),  py::arg("allData"))
        .def("SetFormNumber",
             (void (IGESAppli_NodalResults::*)( const Standard_Integer  ) ) static_cast<void (IGESAppli_NodalResults::*)( const Standard_Integer  ) >(&IGESAppli_NodalResults::SetFormNumber),
             R"#(Changes the FormNumber (which indicates Type of Result) Error if not in range [0-34])#"  , py::arg("form"))
        .def("Note",
             (opencascade::handle<IGESDimen_GeneralNote> (IGESAppli_NodalResults::*)() const) static_cast<opencascade::handle<IGESDimen_GeneralNote> (IGESAppli_NodalResults::*)() const>(&IGESAppli_NodalResults::Note),
             R"#(returns the General Note Entity that describes the analysis case)#" )
        .def("SubCaseNumber",
             (Standard_Integer (IGESAppli_NodalResults::*)() const) static_cast<Standard_Integer (IGESAppli_NodalResults::*)() const>(&IGESAppli_NodalResults::SubCaseNumber),
             R"#(returns zero if there is no subcase)#" )
        .def("Time",
             (Standard_Real (IGESAppli_NodalResults::*)() const) static_cast<Standard_Real (IGESAppli_NodalResults::*)() const>(&IGESAppli_NodalResults::Time),
             R"#(returns the Analysis time value for this subcase. It is the time at which transient analysis results occur in the mathematical FEM model.)#" )
        .def("NbData",
             (Standard_Integer (IGESAppli_NodalResults::*)() const) static_cast<Standard_Integer (IGESAppli_NodalResults::*)() const>(&IGESAppli_NodalResults::NbData),
             R"#(returns number of real values in array V for a FEM node)#" )
        .def("NbNodes",
             (Standard_Integer (IGESAppli_NodalResults::*)() const) static_cast<Standard_Integer (IGESAppli_NodalResults::*)() const>(&IGESAppli_NodalResults::NbNodes),
             R"#(returns number of FEM nodes for which data is to be read.)#" )
        .def("NodeIdentifier",
             (Standard_Integer (IGESAppli_NodalResults::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_NodalResults::*)( const Standard_Integer  ) const>(&IGESAppli_NodalResults::NodeIdentifier),
             R"#(returns FEM node number identifier for the (Index)th node raises exception if Index <= 0 or Index > NbNodes)#"  , py::arg("Index"))
        .def("Node",
             (opencascade::handle<IGESAppli_Node> (IGESAppli_NodalResults::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESAppli_Node> (IGESAppli_NodalResults::*)( const Standard_Integer  ) const>(&IGESAppli_NodalResults::Node),
             R"#(returns the node as specified by the Index raises exception if Index <= 0 or Index > NbNodes)#"  , py::arg("Index"))
        .def("Data",
             (Standard_Real (IGESAppli_NodalResults::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (IGESAppli_NodalResults::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_NodalResults::Data),
             R"#(returns the finite element analysis result value raises exception if (NodeNum <= 0 or NodeNum > NbNodes()) or if (DataNum <=0 or DataNum > NbData()))#"  , py::arg("NodeNum"),  py::arg("DataNum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_NodalResults::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_NodalResults::*)() const>(&IGESAppli_NodalResults::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_NodalResults::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_NodalResults::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_Node ,opencascade::handle<IGESAppli_Node>  , IGESData_IGESEntity >>(m.attr("IGESAppli_Node"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_Node::*)( const gp_XYZ & ,  const opencascade::handle<IGESGeom_TransformationMatrix> &  ) ) static_cast<void (IGESAppli_Node::*)( const gp_XYZ & ,  const opencascade::handle<IGESGeom_TransformationMatrix> &  ) >(&IGESAppli_Node::Init),
             R"#(This method is used to set the fields of the class Node - aCoord : Nodal Coordinates - aCoordSystem : the Nodal Displacement Coordinate System Entity (default 0 is Global Cartesian Coordinate system))#"  , py::arg("aCoord"),  py::arg("aCoordSystem"))
        .def("Coord",
             (gp_Pnt (IGESAppli_Node::*)() const) static_cast<gp_Pnt (IGESAppli_Node::*)() const>(&IGESAppli_Node::Coord),
             R"#(returns the nodal coordinates)#" )
        .def("System",
             (opencascade::handle<IGESData_TransfEntity> (IGESAppli_Node::*)() const) static_cast<opencascade::handle<IGESData_TransfEntity> (IGESAppli_Node::*)() const>(&IGESAppli_Node::System),
             R"#(returns TransfEntity if a Nodal Displacement Coordinate System Entity is defined else (for Global Cartesien) returns Null Handle)#" )
        .def("SystemType",
             (Standard_Integer (IGESAppli_Node::*)() const) static_cast<Standard_Integer (IGESAppli_Node::*)() const>(&IGESAppli_Node::SystemType),
             R"#(Computes & returns the Type of Coordinate System : 0 GlobalCartesian, 1 Cartesian, 2 Cylindrical, 3 Spherical)#" )
        .def("TransformedNodalCoord",
             (gp_Pnt (IGESAppli_Node::*)() const) static_cast<gp_Pnt (IGESAppli_Node::*)() const>(&IGESAppli_Node::TransformedNodalCoord),
             R"#(returns the Nodal coordinates after transformation)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_Node::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_Node::*)() const>(&IGESAppli_Node::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_Node::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_Node::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_PWBArtworkStackup ,opencascade::handle<IGESAppli_PWBArtworkStackup>  , IGESData_IGESEntity >>(m.attr("IGESAppli_PWBArtworkStackup"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_PWBArtworkStackup::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESAppli_PWBArtworkStackup::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESAppli_PWBArtworkStackup::Init),
             R"#(This method is used to set the fields of the class PWBArtworkStackup - nbPropVal : number of property values - anArtIdent : Artwork Stackup Identification - allLevelNums : Level Numbers)#"  , py::arg("nbPropVal"),  py::arg("anArtIdent"),  py::arg("allLevelNums"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_PWBArtworkStackup::*)() const) static_cast<Standard_Integer (IGESAppli_PWBArtworkStackup::*)() const>(&IGESAppli_PWBArtworkStackup::NbPropertyValues),
             R"#(returns number of property values)#" )
        .def("Identification",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_PWBArtworkStackup::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_PWBArtworkStackup::*)() const>(&IGESAppli_PWBArtworkStackup::Identification),
             R"#(returns Artwork Stackup Identification)#" )
        .def("NbLevelNumbers",
             (Standard_Integer (IGESAppli_PWBArtworkStackup::*)() const) static_cast<Standard_Integer (IGESAppli_PWBArtworkStackup::*)() const>(&IGESAppli_PWBArtworkStackup::NbLevelNumbers),
             R"#(returns total number of Level Numbers)#" )
        .def("LevelNumber",
             (Standard_Integer (IGESAppli_PWBArtworkStackup::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_PWBArtworkStackup::*)( const Standard_Integer  ) const>(&IGESAppli_PWBArtworkStackup::LevelNumber),
             R"#(returns Level Number raises exception if Index <= 0 or Index > NbLevelNumbers)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PWBArtworkStackup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PWBArtworkStackup::*)() const>(&IGESAppli_PWBArtworkStackup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PWBArtworkStackup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_PWBArtworkStackup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_PWBDrilledHole ,opencascade::handle<IGESAppli_PWBDrilledHole>  , IGESData_IGESEntity >>(m.attr("IGESAppli_PWBDrilledHole"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_PWBDrilledHole::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (IGESAppli_PWBDrilledHole::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&IGESAppli_PWBDrilledHole::Init),
             R"#(This method is used to set the fields of the class PWBDrilledHole - nbPropVal : number of property values, always = 3 - aDrillDia : Drill diameter size - aFinishDia : Finish diameter size - aCode : Function code for drilled hole)#"  , py::arg("nbPropVal"),  py::arg("aDrillDia"),  py::arg("aFinishDia"),  py::arg("aCode"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_PWBDrilledHole::*)() const) static_cast<Standard_Integer (IGESAppli_PWBDrilledHole::*)() const>(&IGESAppli_PWBDrilledHole::NbPropertyValues),
             R"#(returns number of property values, always = 3)#" )
        .def("DrillDiameterSize",
             (Standard_Real (IGESAppli_PWBDrilledHole::*)() const) static_cast<Standard_Real (IGESAppli_PWBDrilledHole::*)() const>(&IGESAppli_PWBDrilledHole::DrillDiameterSize),
             R"#(returns Drill diameter size)#" )
        .def("FinishDiameterSize",
             (Standard_Real (IGESAppli_PWBDrilledHole::*)() const) static_cast<Standard_Real (IGESAppli_PWBDrilledHole::*)() const>(&IGESAppli_PWBDrilledHole::FinishDiameterSize),
             R"#(returns Finish diameter size)#" )
        .def("FunctionCode",
             (Standard_Integer (IGESAppli_PWBDrilledHole::*)() const) static_cast<Standard_Integer (IGESAppli_PWBDrilledHole::*)() const>(&IGESAppli_PWBDrilledHole::FunctionCode),
             R"#(returns Function code for drilled hole is 0, 1, 2, 3, 4, 5 or 5001-9999)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PWBDrilledHole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PWBDrilledHole::*)() const>(&IGESAppli_PWBDrilledHole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PWBDrilledHole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_PWBDrilledHole::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_PartNumber ,opencascade::handle<IGESAppli_PartNumber>  , IGESData_IGESEntity >>(m.attr("IGESAppli_PartNumber"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_PartNumber::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESAppli_PartNumber::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESAppli_PartNumber::Init),
             R"#(This method is used to set the fields of the class PartNumber - nbPropVal : number of property values, always = 4 - aGenName : Generic part number or name - aMilName : Military Standard (MIL-STD) part number - aVendName : Vendor part number or name - anIntName : Internal part number)#"  , py::arg("nbPropVal"),  py::arg("aGenName"),  py::arg("aMilName"),  py::arg("aVendName"),  py::arg("anIntName"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_PartNumber::*)() const) static_cast<Standard_Integer (IGESAppli_PartNumber::*)() const>(&IGESAppli_PartNumber::NbPropertyValues),
             R"#(returns number of property values, always = 4)#" )
        .def("GenericNumber",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const>(&IGESAppli_PartNumber::GenericNumber),
             R"#(returns Generic part number or name)#" )
        .def("MilitaryNumber",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const>(&IGESAppli_PartNumber::MilitaryNumber),
             R"#(returns Military Standard (MIL-STD) part number)#" )
        .def("VendorNumber",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const>(&IGESAppli_PartNumber::VendorNumber),
             R"#(returns Vendor part number or name)#" )
        .def("InternalNumber",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_PartNumber::*)() const>(&IGESAppli_PartNumber::InternalNumber),
             R"#(returns Internal part number)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PartNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PartNumber::*)() const>(&IGESAppli_PartNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PartNumber::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_PartNumber::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_PinNumber ,opencascade::handle<IGESAppli_PinNumber>  , IGESData_IGESEntity >>(m.attr("IGESAppli_PinNumber"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_PinNumber::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESAppli_PinNumber::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESAppli_PinNumber::Init),
             R"#(This method is used to set the fields of the class PinNumber - nbPropVal : Number of property values (always = 1) - aValue : Pin Number value)#"  , py::arg("nbPropVal"),  py::arg("aValue"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_PinNumber::*)() const) static_cast<Standard_Integer (IGESAppli_PinNumber::*)() const>(&IGESAppli_PinNumber::NbPropertyValues),
             R"#(returns the number of property values is always 1)#" )
        .def("PinNumberVal",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_PinNumber::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_PinNumber::*)() const>(&IGESAppli_PinNumber::PinNumberVal),
             R"#(returns the pin number value)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PinNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PinNumber::*)() const>(&IGESAppli_PinNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PinNumber::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_PinNumber::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_PipingFlow ,opencascade::handle<IGESAppli_PipingFlow>  , IGESData_IGESEntity >>(m.attr("IGESAppli_PipingFlow"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_PipingFlow::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESAppli_PipingFlow::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESDraw_HArray1OfConnectPoint> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESAppli_PipingFlow::Init),
             R"#(This method is used to set the fields of the class PipingFlow - nbContextFlags : Count of Context Flags, always = 1 - aFlowType : Type of Flow, default = 0 - allFlowAssocs : PipingFlow Associativity Entities - allConnectPoints : Connect Point Entities - allJoins : Join Entities - allFlowNames : PipingFlow Names - allTextDispTs : Text Display Template Entities - allContFlowAssocs : Continuation Flow Associativity Entities)#"  , py::arg("nbContextFlags"),  py::arg("aFlowType"),  py::arg("allFlowAssocs"),  py::arg("allConnectPoints"),  py::arg("allJoins"),  py::arg("allFlowNames"),  py::arg("allTextDisps"),  py::arg("allContFlowAssocs"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_PipingFlow::*)() ) static_cast<Standard_Boolean (IGESAppli_PipingFlow::*)() >(&IGESAppli_PipingFlow::OwnCorrect),
             R"#(forces NbContextFalgs to 1, returns True if changed)#" )
        .def("NbContextFlags",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::NbContextFlags),
             R"#(returns number of Count of Context Flags, always = 1)#" )
        .def("NbFlowAssociativities",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::NbFlowAssociativities),
             R"#(returns number of Piping Flow Associativity Entities)#" )
        .def("NbConnectPoints",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::NbConnectPoints),
             R"#(returns number of Connect Point Entities)#" )
        .def("NbJoins",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::NbJoins),
             R"#(returns number of Join Entities)#" )
        .def("NbFlowNames",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::NbFlowNames),
             R"#(returns number of Flow Names)#" )
        .def("NbTextDisplayTemplates",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::NbTextDisplayTemplates),
             R"#(returns number of Text Display Template Entities)#" )
        .def("NbContFlowAssociativities",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::NbContFlowAssociativities),
             R"#(returns number of Continuation Piping Flow Associativities)#" )
        .def("TypeOfFlow",
             (Standard_Integer (IGESAppli_PipingFlow::*)() const) static_cast<Standard_Integer (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::TypeOfFlow),
             R"#(returns Type of Flow = 0 : Not specified, 1 : Logical, 2 : Physical)#" )
        .def("FlowAssociativity",
             (opencascade::handle<IGESData_IGESEntity> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const>(&IGESAppli_PipingFlow::FlowAssociativity),
             R"#(returns Piping Flow Associativity Entity raises exception if Index <= 0 or Index > NbFlowAssociativities())#"  , py::arg("Index"))
        .def("ConnectPoint",
             (opencascade::handle<IGESDraw_ConnectPoint> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESDraw_ConnectPoint> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const>(&IGESAppli_PipingFlow::ConnectPoint),
             R"#(returns Connect Point Entity raises exception if Index <= 0 or Index > NbConnectPoints())#"  , py::arg("Index"))
        .def("Join",
             (opencascade::handle<IGESData_IGESEntity> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const>(&IGESAppli_PipingFlow::Join),
             R"#(returns Join Entity raises exception if Index <= 0 or Index > NbJoins())#"  , py::arg("Index"))
        .def("FlowName",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const>(&IGESAppli_PipingFlow::FlowName),
             R"#(returns Flow Name raises exception if Index <= 0 or Index > NbFlowNames())#"  , py::arg("Index"))
        .def("TextDisplayTemplate",
             (opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const>(&IGESAppli_PipingFlow::TextDisplayTemplate),
             R"#(returns Text Display Template Entity raises exception if Index <= 0 or Index > NbTextDisplayTemplates())#"  , py::arg("Index"))
        .def("ContFlowAssociativity",
             (opencascade::handle<IGESData_IGESEntity> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESAppli_PipingFlow::*)( const Standard_Integer  ) const>(&IGESAppli_PipingFlow::ContFlowAssociativity),
             R"#(returns Continuation Piping Flow Associativity Entity raises exception if Index <= 0 or Index > NbContFlowAssociativities())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PipingFlow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PipingFlow::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_PipingFlow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_Protocol ,opencascade::handle<IGESAppli_Protocol>  , IGESData_Protocol >>(m.attr("IGESAppli_Protocol"))
        .def(py::init<  >()  )
    // methods
        .def("NbResources",
             (Standard_Integer (IGESAppli_Protocol::*)() const) static_cast<Standard_Integer (IGESAppli_Protocol::*)() const>(&IGESAppli_Protocol::NbResources),
             R"#(Gives the count of direct Resource Protocol. Here, two (Protocols from IGESDefs and IGESDraw))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESAppli_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESAppli_Protocol::*)( const Standard_Integer  ) const>(&IGESAppli_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESAppli_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESAppli_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESAppli_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_Protocol::*)() const>(&IGESAppli_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ReadWriteModule ,opencascade::handle<IGESAppli_ReadWriteModule>  , IGESData_ReadWriteModule >>(m.attr("IGESAppli_ReadWriteModule"))
        .def(py::init<  >()  )
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESAppli_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESAppli_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESAppli_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESAppli)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESAppli_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESAppli)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_ReadWriteModule::*)() const>(&IGESAppli_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ReferenceDesignator ,opencascade::handle<IGESAppli_ReferenceDesignator>  , IGESData_IGESEntity >>(m.attr("IGESAppli_ReferenceDesignator"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_ReferenceDesignator::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESAppli_ReferenceDesignator::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESAppli_ReferenceDesignator::Init),
             R"#(This method is used to set the fields of the class ReferenceDesignator - nbPropVal : Number of property values = 1 - aText : Reference designator text)#"  , py::arg("nbPropVal"),  py::arg("aText"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_ReferenceDesignator::*)() const) static_cast<Standard_Integer (IGESAppli_ReferenceDesignator::*)() const>(&IGESAppli_ReferenceDesignator::NbPropertyValues),
             R"#(returns the number of property values is always 1)#" )
        .def("RefDesignatorText",
             (opencascade::handle<TCollection_HAsciiString> (IGESAppli_ReferenceDesignator::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESAppli_ReferenceDesignator::*)() const>(&IGESAppli_ReferenceDesignator::RefDesignatorText),
             R"#(returns the Reference designator text)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_ReferenceDesignator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_ReferenceDesignator::*)() const>(&IGESAppli_ReferenceDesignator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_ReferenceDesignator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_ReferenceDesignator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_RegionRestriction ,opencascade::handle<IGESAppli_RegionRestriction>  , IGESData_IGESEntity >>(m.attr("IGESAppli_RegionRestriction"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESAppli_RegionRestriction::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESAppli_RegionRestriction::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESAppli_RegionRestriction::Init),
             R"#(This method is used to set the fields of the class RegionRestriction - nbPropVal : Number of property values, always = 3 - aViasRest : Electrical Vias restriction - aCompoRest : Electrical components restriction - aCktRest : Electrical circuitry restriction)#"  , py::arg("nbPropVal"),  py::arg("aViasRest"),  py::arg("aCompoRest"),  py::arg("aCktRest"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESAppli_RegionRestriction::*)() const) static_cast<Standard_Integer (IGESAppli_RegionRestriction::*)() const>(&IGESAppli_RegionRestriction::NbPropertyValues),
             R"#(is always 3)#" )
        .def("ElectricalViasRestriction",
             (Standard_Integer (IGESAppli_RegionRestriction::*)() const) static_cast<Standard_Integer (IGESAppli_RegionRestriction::*)() const>(&IGESAppli_RegionRestriction::ElectricalViasRestriction),
             R"#(returns the Electrical vias restriction is 0, 1 or 2)#" )
        .def("ElectricalComponentRestriction",
             (Standard_Integer (IGESAppli_RegionRestriction::*)() const) static_cast<Standard_Integer (IGESAppli_RegionRestriction::*)() const>(&IGESAppli_RegionRestriction::ElectricalComponentRestriction),
             R"#(returns the Electrical components restriction is 0, 1 or 2)#" )
        .def("ElectricalCktRestriction",
             (Standard_Integer (IGESAppli_RegionRestriction::*)() const) static_cast<Standard_Integer (IGESAppli_RegionRestriction::*)() const>(&IGESAppli_RegionRestriction::ElectricalCktRestriction),
             R"#(returns the Electrical circuitry restriction is 0, 1 or 2)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_RegionRestriction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_RegionRestriction::*)() const>(&IGESAppli_RegionRestriction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_RegionRestriction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_RegionRestriction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_SpecificModule ,opencascade::handle<IGESAppli_SpecificModule>  , IGESData_SpecificModule >>(m.attr("IGESAppli_SpecificModule"))
        .def(py::init<  >()  )
    // methods
        .def("OwnDump",
             (void (IGESAppli_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESAppli)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESAppli_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESAppli_SpecificModule::OwnCorrect),
             R"#(---Purpose)#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_SpecificModule::*)() const>(&IGESAppli_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_SpecificModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESAppli_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolDrilledHole , shared_ptr<IGESAppli_ToolDrilledHole>  >>(m.attr("IGESAppli_ToolDrilledHole"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolDrilledHole::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolDrilledHole::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolDrilledHole::OwnShared),
             R"#(Lists the Entities shared by a DrilledHole <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> &  ) const>(&IGESAppli_ToolDrilledHole::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a DrilledHole (NbPropertyValues forced to 5, Level cleared if Subordinate != 0))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> &  ) const>(&IGESAppli_ToolDrilledHole::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolDrilledHole::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const opencascade::handle<IGESAppli_DrilledHole> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const opencascade::handle<IGESAppli_DrilledHole> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolDrilledHole::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolDrilledHole::*)( const opencascade::handle<IGESAppli_DrilledHole> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolDrilledHole::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolElementResults , shared_ptr<IGESAppli_ToolElementResults>  >>(m.attr("IGESAppli_ToolElementResults"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolElementResults::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolElementResults::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolElementResults::OwnShared),
             R"#(Lists the Entities shared by a ElementResults <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> &  ) const>(&IGESAppli_ToolElementResults::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolElementResults::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const opencascade::handle<IGESAppli_ElementResults> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const opencascade::handle<IGESAppli_ElementResults> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolElementResults::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolElementResults::*)( const opencascade::handle<IGESAppli_ElementResults> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolElementResults::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolFiniteElement , shared_ptr<IGESAppli_ToolFiniteElement>  >>(m.attr("IGESAppli_ToolFiniteElement"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolFiniteElement::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolFiniteElement::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolFiniteElement::OwnShared),
             R"#(Lists the Entities shared by a FiniteElement <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> &  ) const>(&IGESAppli_ToolFiniteElement::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolFiniteElement::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const opencascade::handle<IGESAppli_FiniteElement> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const opencascade::handle<IGESAppli_FiniteElement> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolFiniteElement::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolFiniteElement::*)( const opencascade::handle<IGESAppli_FiniteElement> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolFiniteElement::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolFlow , shared_ptr<IGESAppli_ToolFlow>  >>(m.attr("IGESAppli_ToolFlow"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolFlow::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolFlow::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolFlow::OwnShared),
             R"#(Lists the Entities shared by a Flow <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> &  ) const>(&IGESAppli_ToolFlow::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Flow (NbContextFlags forced to 2))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> &  ) const>(&IGESAppli_ToolFlow::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolFlow::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const opencascade::handle<IGESAppli_Flow> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const opencascade::handle<IGESAppli_Flow> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolFlow::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolFlow::*)( const opencascade::handle<IGESAppli_Flow> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolFlow::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolFlowLineSpec , shared_ptr<IGESAppli_ToolFlowLineSpec>  >>(m.attr("IGESAppli_ToolFlowLineSpec"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolFlowLineSpec::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolFlowLineSpec::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolFlowLineSpec::OwnShared),
             R"#(Lists the Entities shared by a FlowLineSpec <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> &  ) const>(&IGESAppli_ToolFlowLineSpec::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolFlowLineSpec::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const opencascade::handle<IGESAppli_FlowLineSpec> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const opencascade::handle<IGESAppli_FlowLineSpec> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolFlowLineSpec::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolFlowLineSpec::*)( const opencascade::handle<IGESAppli_FlowLineSpec> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolFlowLineSpec::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolLevelFunction , shared_ptr<IGESAppli_ToolLevelFunction>  >>(m.attr("IGESAppli_ToolLevelFunction"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolLevelFunction::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolLevelFunction::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolLevelFunction::OwnShared),
             R"#(Lists the Entities shared by a LevelFunction <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> &  ) const>(&IGESAppli_ToolLevelFunction::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a LevelFunction (NbPropertyValues forced to 2))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> &  ) const>(&IGESAppli_ToolLevelFunction::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolLevelFunction::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const opencascade::handle<IGESAppli_LevelFunction> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const opencascade::handle<IGESAppli_LevelFunction> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolLevelFunction::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolLevelFunction::*)( const opencascade::handle<IGESAppli_LevelFunction> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolLevelFunction::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolLevelToPWBLayerMap , shared_ptr<IGESAppli_ToolLevelToPWBLayerMap>  >>(m.attr("IGESAppli_ToolLevelToPWBLayerMap"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolLevelToPWBLayerMap::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolLevelToPWBLayerMap::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolLevelToPWBLayerMap::OwnShared),
             R"#(Lists the Entities shared by a LevelToPWBLayerMap <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> &  ) const>(&IGESAppli_ToolLevelToPWBLayerMap::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolLevelToPWBLayerMap::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolLevelToPWBLayerMap::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolLevelToPWBLayerMap::*)( const opencascade::handle<IGESAppli_LevelToPWBLayerMap> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolLevelToPWBLayerMap::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolLineWidening , shared_ptr<IGESAppli_ToolLineWidening>  >>(m.attr("IGESAppli_ToolLineWidening"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolLineWidening::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolLineWidening::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolLineWidening::OwnShared),
             R"#(Lists the Entities shared by a LineWidening <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> &  ) const>(&IGESAppli_ToolLineWidening::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a LineWidening (NbPropertyValues forced to 5, Level cleared if Subordinate != 0))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> &  ) const>(&IGESAppli_ToolLineWidening::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolLineWidening::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const opencascade::handle<IGESAppli_LineWidening> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const opencascade::handle<IGESAppli_LineWidening> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolLineWidening::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolLineWidening::*)( const opencascade::handle<IGESAppli_LineWidening> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolLineWidening::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolNodalConstraint , shared_ptr<IGESAppli_ToolNodalConstraint>  >>(m.attr("IGESAppli_ToolNodalConstraint"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolNodalConstraint::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolNodalConstraint::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolNodalConstraint::OwnShared),
             R"#(Lists the Entities shared by a NodalConstraint <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> &  ) const>(&IGESAppli_ToolNodalConstraint::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolNodalConstraint::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const opencascade::handle<IGESAppli_NodalConstraint> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const opencascade::handle<IGESAppli_NodalConstraint> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolNodalConstraint::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolNodalConstraint::*)( const opencascade::handle<IGESAppli_NodalConstraint> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolNodalConstraint::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolNodalDisplAndRot , shared_ptr<IGESAppli_ToolNodalDisplAndRot>  >>(m.attr("IGESAppli_ToolNodalDisplAndRot"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolNodalDisplAndRot::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolNodalDisplAndRot::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolNodalDisplAndRot::OwnShared),
             R"#(Lists the Entities shared by a NodalDisplAndRot <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> &  ) const>(&IGESAppli_ToolNodalDisplAndRot::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolNodalDisplAndRot::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolNodalDisplAndRot::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolNodalDisplAndRot::*)( const opencascade::handle<IGESAppli_NodalDisplAndRot> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolNodalDisplAndRot::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolNodalResults , shared_ptr<IGESAppli_ToolNodalResults>  >>(m.attr("IGESAppli_ToolNodalResults"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolNodalResults::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolNodalResults::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolNodalResults::OwnShared),
             R"#(Lists the Entities shared by a NodalResults <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> &  ) const>(&IGESAppli_ToolNodalResults::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolNodalResults::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const opencascade::handle<IGESAppli_NodalResults> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const opencascade::handle<IGESAppli_NodalResults> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolNodalResults::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolNodalResults::*)( const opencascade::handle<IGESAppli_NodalResults> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolNodalResults::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolNode , shared_ptr<IGESAppli_ToolNode>  >>(m.attr("IGESAppli_ToolNode"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolNode::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolNode::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolNode::OwnShared),
             R"#(Lists the Entities shared by a Node <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> &  ) const>(&IGESAppli_ToolNode::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolNode::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const opencascade::handle<IGESAppli_Node> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const opencascade::handle<IGESAppli_Node> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolNode::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolNode::*)( const opencascade::handle<IGESAppli_Node> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolNode::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolPWBArtworkStackup , shared_ptr<IGESAppli_ToolPWBArtworkStackup>  >>(m.attr("IGESAppli_ToolPWBArtworkStackup"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolPWBArtworkStackup::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolPWBArtworkStackup::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolPWBArtworkStackup::OwnShared),
             R"#(Lists the Entities shared by a PWBArtworkStackup <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> &  ) const>(&IGESAppli_ToolPWBArtworkStackup::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolPWBArtworkStackup::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolPWBArtworkStackup::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolPWBArtworkStackup::*)( const opencascade::handle<IGESAppli_PWBArtworkStackup> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolPWBArtworkStackup::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolPWBDrilledHole , shared_ptr<IGESAppli_ToolPWBDrilledHole>  >>(m.attr("IGESAppli_ToolPWBDrilledHole"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolPWBDrilledHole::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolPWBDrilledHole::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolPWBDrilledHole::OwnShared),
             R"#(Lists the Entities shared by a PWBDrilledHole <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> &  ) const>(&IGESAppli_ToolPWBDrilledHole::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a PWBDrilledHole (NbPropertyValues forced to 3))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> &  ) const>(&IGESAppli_ToolPWBDrilledHole::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolPWBDrilledHole::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolPWBDrilledHole::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolPWBDrilledHole::*)( const opencascade::handle<IGESAppli_PWBDrilledHole> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolPWBDrilledHole::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolPartNumber , shared_ptr<IGESAppli_ToolPartNumber>  >>(m.attr("IGESAppli_ToolPartNumber"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolPartNumber::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolPartNumber::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolPartNumber::OwnShared),
             R"#(Lists the Entities shared by a PartNumber <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> &  ) const>(&IGESAppli_ToolPartNumber::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a PartNumber (NbPropertyValues forced to 4))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> &  ) const>(&IGESAppli_ToolPartNumber::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolPartNumber::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const opencascade::handle<IGESAppli_PartNumber> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const opencascade::handle<IGESAppli_PartNumber> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolPartNumber::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolPartNumber::*)( const opencascade::handle<IGESAppli_PartNumber> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolPartNumber::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolPinNumber , shared_ptr<IGESAppli_ToolPinNumber>  >>(m.attr("IGESAppli_ToolPinNumber"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolPinNumber::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolPinNumber::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolPinNumber::OwnShared),
             R"#(Lists the Entities shared by a PinNumber <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> &  ) const>(&IGESAppli_ToolPinNumber::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a PinNumber (Level cleared in D.E. if Subordinate != 0))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> &  ) const>(&IGESAppli_ToolPinNumber::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolPinNumber::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const opencascade::handle<IGESAppli_PinNumber> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const opencascade::handle<IGESAppli_PinNumber> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolPinNumber::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolPinNumber::*)( const opencascade::handle<IGESAppli_PinNumber> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolPinNumber::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolPipingFlow , shared_ptr<IGESAppli_ToolPipingFlow>  >>(m.attr("IGESAppli_ToolPipingFlow"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolPipingFlow::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolPipingFlow::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolPipingFlow::OwnShared),
             R"#(Lists the Entities shared by a PipingFlow <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> &  ) const>(&IGESAppli_ToolPipingFlow::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a PipingFlow (NbContextFlags forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> &  ) const>(&IGESAppli_ToolPipingFlow::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolPipingFlow::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const opencascade::handle<IGESAppli_PipingFlow> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const opencascade::handle<IGESAppli_PipingFlow> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolPipingFlow::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolPipingFlow::*)( const opencascade::handle<IGESAppli_PipingFlow> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolPipingFlow::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolReferenceDesignator , shared_ptr<IGESAppli_ToolReferenceDesignator>  >>(m.attr("IGESAppli_ToolReferenceDesignator"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolReferenceDesignator::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolReferenceDesignator::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolReferenceDesignator::OwnShared),
             R"#(Lists the Entities shared by a ReferenceDesignator <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> &  ) const>(&IGESAppli_ToolReferenceDesignator::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a ReferenceDesignator (NbPropertyValues forced to 1, Level cleared if Subordinate != 0))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> &  ) const>(&IGESAppli_ToolReferenceDesignator::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolReferenceDesignator::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolReferenceDesignator::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolReferenceDesignator::*)( const opencascade::handle<IGESAppli_ReferenceDesignator> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolReferenceDesignator::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESAppli_ToolRegionRestriction , shared_ptr<IGESAppli_ToolRegionRestriction>  >>(m.attr("IGESAppli_ToolRegionRestriction"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESAppli_ToolRegionRestriction::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  IGESData_IGESWriter &  ) const>(&IGESAppli_ToolRegionRestriction::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  Interface_EntityIterator &  ) const>(&IGESAppli_ToolRegionRestriction::OwnShared),
             R"#(Lists the Entities shared by a RegionRestriction <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> &  ) const) static_cast<Standard_Boolean (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> &  ) const>(&IGESAppli_ToolRegionRestriction::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a RegionRestriction (NbPropertyValues forced to 3, Level cleared if Subordinate != 0))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> &  ) const) static_cast<IGESData_DirChecker (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> &  ) const>(&IGESAppli_ToolRegionRestriction::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESAppli_ToolRegionRestriction::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const opencascade::handle<IGESAppli_RegionRestriction> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const opencascade::handle<IGESAppli_RegionRestriction> & ,  Interface_CopyTool &  ) const>(&IGESAppli_ToolRegionRestriction::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESAppli_ToolRegionRestriction::*)( const opencascade::handle<IGESAppli_RegionRestriction> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESAppli_ToolRegionRestriction::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/IGESAppli_LineWidening.hxx
// ./opencascade/IGESAppli_PWBArtworkStackup.hxx
// ./opencascade/IGESAppli_ToolFiniteElement.hxx
// ./opencascade/IGESAppli_ElementResults.hxx
// ./opencascade/IGESAppli_NodalConstraint.hxx
// ./opencascade/IGESAppli_NodalResults.hxx
// ./opencascade/IGESAppli_ToolFlowLineSpec.hxx
// ./opencascade/IGESAppli_HArray1OfNode.hxx
// ./opencascade/IGESAppli_ReadWriteModule.hxx
// ./opencascade/IGESAppli_ToolPinNumber.hxx
// ./opencascade/IGESAppli_GeneralModule.hxx
// ./opencascade/IGESAppli_Array1OfNode.hxx
// ./opencascade/IGESAppli_LevelToPWBLayerMap.hxx
// ./opencascade/IGESAppli_ToolElementResults.hxx
// ./opencascade/IGESAppli_ReferenceDesignator.hxx
// ./opencascade/IGESAppli_ToolNodalResults.hxx
// ./opencascade/IGESAppli_PipingFlow.hxx
// ./opencascade/IGESAppli_ToolPWBArtworkStackup.hxx
// ./opencascade/IGESAppli_Node.hxx
// ./opencascade/IGESAppli_LevelFunction.hxx
// ./opencascade/IGESAppli_FiniteElement.hxx
// ./opencascade/IGESAppli_RegionRestriction.hxx
// ./opencascade/IGESAppli_PWBDrilledHole.hxx
// ./opencascade/IGESAppli_DrilledHole.hxx
// ./opencascade/IGESAppli.hxx
// ./opencascade/IGESAppli_ToolReferenceDesignator.hxx
// ./opencascade/IGESAppli_ToolNodalDisplAndRot.hxx
// ./opencascade/IGESAppli_ToolDrilledHole.hxx
// ./opencascade/IGESAppli_ToolLineWidening.hxx
// ./opencascade/IGESAppli_Protocol.hxx
// ./opencascade/IGESAppli_NodalDisplAndRot.hxx
// ./opencascade/IGESAppli_PinNumber.hxx
// ./opencascade/IGESAppli_Array1OfFiniteElement.hxx
// ./opencascade/IGESAppli_ToolLevelFunction.hxx
// ./opencascade/IGESAppli_HArray1OfFlow.hxx
// ./opencascade/IGESAppli_ToolPWBDrilledHole.hxx
// ./opencascade/IGESAppli_ToolRegionRestriction.hxx
// ./opencascade/IGESAppli_PartNumber.hxx
// ./opencascade/IGESAppli_ToolNode.hxx
// ./opencascade/IGESAppli_ToolPipingFlow.hxx
// ./opencascade/IGESAppli_ToolLevelToPWBLayerMap.hxx
// ./opencascade/IGESAppli_HArray1OfFiniteElement.hxx
// ./opencascade/IGESAppli_FlowLineSpec.hxx
// ./opencascade/IGESAppli_ToolNodalConstraint.hxx
// ./opencascade/IGESAppli_ToolFlow.hxx
// ./opencascade/IGESAppli_Flow.hxx
// ./opencascade/IGESAppli_ToolPartNumber.hxx
// ./opencascade/IGESAppli_SpecificModule.hxx
// ./opencascade/IGESAppli_Array1OfFlow.hxx

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESAppli_Node> >(m,"IGESAppli_Array1OfNode");  
    register_template_NCollection_Array1<opencascade::handle<IGESAppli_FiniteElement> >(m,"IGESAppli_Array1OfFiniteElement");  
    register_template_NCollection_Array1<opencascade::handle<IGESAppli_Flow> >(m,"IGESAppli_Array1OfFlow");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
