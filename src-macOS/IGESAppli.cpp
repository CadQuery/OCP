
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
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
#include <TCollection_HAsciiString.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
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
#include <IGESGeom_TransformationMatrix.hxx>
#include <gp_Pnt.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
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
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
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
#include <IGESAppli_Node.hxx>
#include <TCollection_HAsciiString.hxx>
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
#include <TCollection_HAsciiString.hxx>
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
#include <TCollection_HAsciiString.hxx>
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
// ./opencascade/IGESAppli_Array1OfFlow.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESAppli_Array1OfNode.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESAppli_Array1OfFiniteElement.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESAppli(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESAppli"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESAppli , shared_ptr<IGESAppli>>(m,"IGESAppli");

    static_cast<py::class_<IGESAppli , shared_ptr<IGESAppli> >>(m.attr("IGESAppli"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_DrilledHole ,opencascade::handle<IGESAppli_DrilledHole> , IGESData_IGESEntity>>(m.attr("IGESAppli_DrilledHole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_DrilledHole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_DrilledHole::*)() const>(&IGESAppli_DrilledHole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_DrilledHole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ElementResults ,opencascade::handle<IGESAppli_ElementResults> , IGESData_IGESEntity>>(m.attr("IGESAppli_ElementResults"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_ElementResults::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_ElementResults::*)() const>(&IGESAppli_ElementResults::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_ElementResults::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_FiniteElement ,opencascade::handle<IGESAppli_FiniteElement> , IGESData_IGESEntity>>(m.attr("IGESAppli_FiniteElement"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_FiniteElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_FiniteElement::*)() const>(&IGESAppli_FiniteElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_FiniteElement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_Flow ,opencascade::handle<IGESAppli_Flow> , IGESData_IGESEntity>>(m.attr("IGESAppli_Flow"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_Flow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_Flow::*)() const>(&IGESAppli_Flow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_Flow::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_FlowLineSpec ,opencascade::handle<IGESAppli_FlowLineSpec> , IGESData_IGESEntity>>(m.attr("IGESAppli_FlowLineSpec"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_FlowLineSpec::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_FlowLineSpec::*)() const>(&IGESAppli_FlowLineSpec::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_FlowLineSpec::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_GeneralModule ,opencascade::handle<IGESAppli_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESAppli_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESAppli_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESAppli_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESAppli_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESAppli_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESAppli_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESAppli_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESAppli_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESAppli_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESAppli_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity FEA for : ElementResults,FiniteElement,Node&Co Piping for : Flow & Co Professional for : others (in fact Schematics))#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_GeneralModule::*)() const>(&IGESAppli_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_HArray1OfFiniteElement ,opencascade::handle<IGESAppli_HArray1OfFiniteElement> , IGESAppli_Array1OfFiniteElement, Standard_Transient>>(m.attr("IGESAppli_HArray1OfFiniteElement"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESAppli_FiniteElement> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESAppli_FiniteElement> > & >()  , py::arg("theOther") )
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_HArray1OfFlow ,opencascade::handle<IGESAppli_HArray1OfFlow> , IGESAppli_Array1OfFlow, Standard_Transient>>(m.attr("IGESAppli_HArray1OfFlow"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESAppli_Flow> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESAppli_Flow> > & >()  , py::arg("theOther") )
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_HArray1OfNode ,opencascade::handle<IGESAppli_HArray1OfNode> , IGESAppli_Array1OfNode, Standard_Transient>>(m.attr("IGESAppli_HArray1OfNode"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESAppli_Node> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESAppli_Node> > & >()  , py::arg("theOther") )
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_LevelFunction ,opencascade::handle<IGESAppli_LevelFunction> , IGESData_IGESEntity>>(m.attr("IGESAppli_LevelFunction"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_LevelFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_LevelFunction::*)() const>(&IGESAppli_LevelFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_LevelFunction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_LevelToPWBLayerMap ,opencascade::handle<IGESAppli_LevelToPWBLayerMap> , IGESData_IGESEntity>>(m.attr("IGESAppli_LevelToPWBLayerMap"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_LevelToPWBLayerMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_LevelToPWBLayerMap::*)() const>(&IGESAppli_LevelToPWBLayerMap::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_LevelToPWBLayerMap::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_LineWidening ,opencascade::handle<IGESAppli_LineWidening> , IGESData_IGESEntity>>(m.attr("IGESAppli_LineWidening"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_LineWidening::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_LineWidening::*)() const>(&IGESAppli_LineWidening::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_LineWidening::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_NodalConstraint ,opencascade::handle<IGESAppli_NodalConstraint> , IGESData_IGESEntity>>(m.attr("IGESAppli_NodalConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_NodalConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_NodalConstraint::*)() const>(&IGESAppli_NodalConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_NodalConstraint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_NodalDisplAndRot ,opencascade::handle<IGESAppli_NodalDisplAndRot> , IGESData_IGESEntity>>(m.attr("IGESAppli_NodalDisplAndRot"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_NodalDisplAndRot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_NodalDisplAndRot::*)() const>(&IGESAppli_NodalDisplAndRot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_NodalDisplAndRot::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_NodalResults ,opencascade::handle<IGESAppli_NodalResults> , IGESData_IGESEntity>>(m.attr("IGESAppli_NodalResults"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_NodalResults::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_NodalResults::*)() const>(&IGESAppli_NodalResults::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_NodalResults::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_Node ,opencascade::handle<IGESAppli_Node> , IGESData_IGESEntity>>(m.attr("IGESAppli_Node"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_Node::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_Node::*)() const>(&IGESAppli_Node::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_Node::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_PWBArtworkStackup ,opencascade::handle<IGESAppli_PWBArtworkStackup> , IGESData_IGESEntity>>(m.attr("IGESAppli_PWBArtworkStackup"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PWBArtworkStackup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PWBArtworkStackup::*)() const>(&IGESAppli_PWBArtworkStackup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PWBArtworkStackup::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_PWBDrilledHole ,opencascade::handle<IGESAppli_PWBDrilledHole> , IGESData_IGESEntity>>(m.attr("IGESAppli_PWBDrilledHole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PWBDrilledHole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PWBDrilledHole::*)() const>(&IGESAppli_PWBDrilledHole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PWBDrilledHole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_PartNumber ,opencascade::handle<IGESAppli_PartNumber> , IGESData_IGESEntity>>(m.attr("IGESAppli_PartNumber"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PartNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PartNumber::*)() const>(&IGESAppli_PartNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PartNumber::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_PinNumber ,opencascade::handle<IGESAppli_PinNumber> , IGESData_IGESEntity>>(m.attr("IGESAppli_PinNumber"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PinNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PinNumber::*)() const>(&IGESAppli_PinNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PinNumber::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_PipingFlow ,opencascade::handle<IGESAppli_PipingFlow> , IGESData_IGESEntity>>(m.attr("IGESAppli_PipingFlow"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_PipingFlow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_PipingFlow::*)() const>(&IGESAppli_PipingFlow::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_PipingFlow::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_Protocol ,opencascade::handle<IGESAppli_Protocol> , IGESData_Protocol>>(m.attr("IGESAppli_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESAppli_Protocol::*)() const) static_cast<Standard_Integer (IGESAppli_Protocol::*)() const>(&IGESAppli_Protocol::NbResources),
             R"#(Gives the count of direct Resource Protocol. Here, two (Protocols from IGESDefs and IGESDraw))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESAppli_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESAppli_Protocol::*)( const Standard_Integer ) const>(&IGESAppli_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESAppli_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESAppli_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESAppli_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_Protocol::*)() const>(&IGESAppli_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ReadWriteModule ,opencascade::handle<IGESAppli_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESAppli_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESAppli_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESAppli_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESAppli_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESAppli)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESAppli_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESAppli_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESAppli_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESAppli)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESAppli_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESAppli_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESAppli_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_ReadWriteModule::*)() const>(&IGESAppli_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ReferenceDesignator ,opencascade::handle<IGESAppli_ReferenceDesignator> , IGESData_IGESEntity>>(m.attr("IGESAppli_ReferenceDesignator"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_ReferenceDesignator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_ReferenceDesignator::*)() const>(&IGESAppli_ReferenceDesignator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_ReferenceDesignator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_RegionRestriction ,opencascade::handle<IGESAppli_RegionRestriction> , IGESData_IGESEntity>>(m.attr("IGESAppli_RegionRestriction"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_RegionRestriction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_RegionRestriction::*)() const>(&IGESAppli_RegionRestriction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_RegionRestriction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_SpecificModule ,opencascade::handle<IGESAppli_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESAppli_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESAppli_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESAppli_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESAppli_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESAppli)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESAppli_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESAppli_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESAppli_SpecificModule::OwnCorrect),
             R"#(---Purpose)#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESAppli_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESAppli_SpecificModule::*)() const>(&IGESAppli_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESAppli_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolDrilledHole , shared_ptr<IGESAppli_ToolDrilledHole> >>(m.attr("IGESAppli_ToolDrilledHole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolElementResults , shared_ptr<IGESAppli_ToolElementResults> >>(m.attr("IGESAppli_ToolElementResults"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolFiniteElement , shared_ptr<IGESAppli_ToolFiniteElement> >>(m.attr("IGESAppli_ToolFiniteElement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolFlow , shared_ptr<IGESAppli_ToolFlow> >>(m.attr("IGESAppli_ToolFlow"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolFlowLineSpec , shared_ptr<IGESAppli_ToolFlowLineSpec> >>(m.attr("IGESAppli_ToolFlowLineSpec"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolLevelFunction , shared_ptr<IGESAppli_ToolLevelFunction> >>(m.attr("IGESAppli_ToolLevelFunction"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolLevelToPWBLayerMap , shared_ptr<IGESAppli_ToolLevelToPWBLayerMap> >>(m.attr("IGESAppli_ToolLevelToPWBLayerMap"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolLineWidening , shared_ptr<IGESAppli_ToolLineWidening> >>(m.attr("IGESAppli_ToolLineWidening"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolNodalConstraint , shared_ptr<IGESAppli_ToolNodalConstraint> >>(m.attr("IGESAppli_ToolNodalConstraint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolNodalDisplAndRot , shared_ptr<IGESAppli_ToolNodalDisplAndRot> >>(m.attr("IGESAppli_ToolNodalDisplAndRot"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolNodalResults , shared_ptr<IGESAppli_ToolNodalResults> >>(m.attr("IGESAppli_ToolNodalResults"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolNode , shared_ptr<IGESAppli_ToolNode> >>(m.attr("IGESAppli_ToolNode"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolPWBArtworkStackup , shared_ptr<IGESAppli_ToolPWBArtworkStackup> >>(m.attr("IGESAppli_ToolPWBArtworkStackup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolPWBDrilledHole , shared_ptr<IGESAppli_ToolPWBDrilledHole> >>(m.attr("IGESAppli_ToolPWBDrilledHole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolPartNumber , shared_ptr<IGESAppli_ToolPartNumber> >>(m.attr("IGESAppli_ToolPartNumber"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolPinNumber , shared_ptr<IGESAppli_ToolPinNumber> >>(m.attr("IGESAppli_ToolPinNumber"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolPipingFlow , shared_ptr<IGESAppli_ToolPipingFlow> >>(m.attr("IGESAppli_ToolPipingFlow"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolReferenceDesignator , shared_ptr<IGESAppli_ToolReferenceDesignator> >>(m.attr("IGESAppli_ToolReferenceDesignator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESAppli_ToolRegionRestriction , shared_ptr<IGESAppli_ToolRegionRestriction> >>(m.attr("IGESAppli_ToolRegionRestriction"))
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
// ./opencascade/IGESAppli_LineWidening.hxx
// ./opencascade/IGESAppli_GeneralModule.hxx
// ./opencascade/IGESAppli_ToolPWBArtworkStackup.hxx
// ./opencascade/IGESAppli_ReferenceDesignator.hxx
// ./opencascade/IGESAppli_HArray1OfFlow.hxx
// ./opencascade/IGESAppli_Flow.hxx
// ./opencascade/IGESAppli_ToolLevelToPWBLayerMap.hxx
// ./opencascade/IGESAppli_ToolFlowLineSpec.hxx
// ./opencascade/IGESAppli_PipingFlow.hxx
// ./opencascade/IGESAppli_ToolReferenceDesignator.hxx
// ./opencascade/IGESAppli_NodalResults.hxx
// ./opencascade/IGESAppli_Protocol.hxx
// ./opencascade/IGESAppli_ToolLevelFunction.hxx
// ./opencascade/IGESAppli_ToolNodalResults.hxx
// ./opencascade/IGESAppli_ToolNodalDisplAndRot.hxx
// ./opencascade/IGESAppli_FiniteElement.hxx
// ./opencascade/IGESAppli_ToolNode.hxx
// ./opencascade/IGESAppli_Node.hxx
// ./opencascade/IGESAppli_ElementResults.hxx
// ./opencascade/IGESAppli_ToolPipingFlow.hxx
// ./opencascade/IGESAppli_Array1OfFlow.hxx
// ./opencascade/IGESAppli_ToolPartNumber.hxx
// ./opencascade/IGESAppli_ToolRegionRestriction.hxx
// ./opencascade/IGESAppli_ToolPWBDrilledHole.hxx
// ./opencascade/IGESAppli_RegionRestriction.hxx
// ./opencascade/IGESAppli_ToolFiniteElement.hxx
// ./opencascade/IGESAppli_FlowLineSpec.hxx
// ./opencascade/IGESAppli_DrilledHole.hxx
// ./opencascade/IGESAppli_SpecificModule.hxx
// ./opencascade/IGESAppli_ToolPinNumber.hxx
// ./opencascade/IGESAppli_Array1OfNode.hxx
// ./opencascade/IGESAppli_NodalDisplAndRot.hxx
// ./opencascade/IGESAppli_HArray1OfNode.hxx
// ./opencascade/IGESAppli_ReadWriteModule.hxx
// ./opencascade/IGESAppli_ToolDrilledHole.hxx
// ./opencascade/IGESAppli_HArray1OfFiniteElement.hxx
// ./opencascade/IGESAppli_ToolFlow.hxx
// ./opencascade/IGESAppli_NodalConstraint.hxx
// ./opencascade/IGESAppli_PartNumber.hxx
// ./opencascade/IGESAppli_ToolLineWidening.hxx
// ./opencascade/IGESAppli_Array1OfFiniteElement.hxx
// ./opencascade/IGESAppli_LevelFunction.hxx
// ./opencascade/IGESAppli_LevelToPWBLayerMap.hxx
// ./opencascade/IGESAppli_ToolNodalConstraint.hxx
// ./opencascade/IGESAppli.hxx
// ./opencascade/IGESAppli_PinNumber.hxx
// ./opencascade/IGESAppli_PWBDrilledHole.hxx
// ./opencascade/IGESAppli_ToolElementResults.hxx
// ./opencascade/IGESAppli_PWBArtworkStackup.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESAppli_Flow> >(m,"IGESAppli_Array1OfFlow");
    register_template_NCollection_Array1<opencascade::handle<IGESAppli_Node> >(m,"IGESAppli_Array1OfNode");
    register_template_NCollection_Array1<opencascade::handle<IGESAppli_FiniteElement> >(m,"IGESAppli_Array1OfFiniteElement");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
