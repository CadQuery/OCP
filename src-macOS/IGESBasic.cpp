
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
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESBasic_SingleParent.hxx>
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
#include <IGESBasic_Hierarchy.hxx>
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
#include <IGESBasic_ExternalRefLibName.hxx>
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
#include <IGESBasic_ExternalReferenceFile.hxx>
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
#include <IGESBasic_ExternalRefFileName.hxx>
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
#include <IGESBasic_AssocGroupType.hxx>
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
#include <IGESBasic_Group.hxx>
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
#include <IGESBasic_OrderedGroup.hxx>
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
#include <IGESBasic_OrderedGroupWithoutBackP.hxx>
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
#include <IGESBasic_SingularSubfigure.hxx>
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
#include <IGESBasic_GroupWithoutBackP.hxx>
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
#include <IGESBasic_Protocol.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <IGESBasic_Group.hxx>
#include <IGESBasic_GroupWithoutBackP.hxx>
#include <IGESBasic_SingleParent.hxx>
#include <IGESBasic_ExternalRefFileIndex.hxx>
#include <IGESBasic_OrderedGroup.hxx>
#include <IGESBasic_OrderedGroupWithoutBackP.hxx>
#include <IGESBasic_Hierarchy.hxx>
#include <IGESBasic_ExternalReferenceFile.hxx>
#include <IGESBasic_Name.hxx>
#include <IGESBasic_AssocGroupType.hxx>
#include <IGESBasic_SingularSubfigure.hxx>
#include <IGESBasic_ExternalRefFileName.hxx>
#include <IGESBasic_ExternalRefFile.hxx>
#include <IGESBasic_ExternalRefName.hxx>
#include <IGESBasic_ExternalRefLibName.hxx>
#include <IGESBasic_ToolSubfigureDef.hxx>
#include <IGESBasic_ToolGroup.hxx>
#include <IGESBasic_ToolGroupWithoutBackP.hxx>
#include <IGESBasic_ToolSingleParent.hxx>
#include <IGESBasic_ToolExternalRefFileIndex.hxx>
#include <IGESBasic_ToolOrderedGroup.hxx>
#include <IGESBasic_ToolOrderedGroupWithoutBackP.hxx>
#include <IGESBasic_ToolHierarchy.hxx>
#include <IGESBasic_ToolExternalReferenceFile.hxx>
#include <IGESBasic_ToolName.hxx>
#include <IGESBasic_ToolAssocGroupType.hxx>
#include <IGESBasic_ToolSingularSubfigure.hxx>
#include <IGESBasic_ToolExternalRefFileName.hxx>
#include <IGESBasic_ToolExternalRefFile.hxx>
#include <IGESBasic_ToolExternalRefName.hxx>
#include <IGESBasic_ToolExternalRefLibName.hxx>
#include <IGESBasic_Protocol.hxx>
#include <IGESBasic_ReadWriteModule.hxx>
#include <IGESBasic_GeneralModule.hxx>
#include <IGESBasic_SpecificModule.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <IGESBasic_HArray1OfHArray1OfXY.hxx>
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <Standard_DomainError.hxx>
#include <IGESBasic_Name.hxx>
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
#include <IGESBasic_ExternalRefFile.hxx>
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
#include <IGESBasic_SubfigureDef.hxx>
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
#include <IGESBasic_ExternalRefName.hxx>
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
#include <IGESBasic_ExternalRefFileIndex.hxx>
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

// module includes
#include <IGESBasic.hxx>
#include <IGESBasic_Array1OfLineFontEntity.hxx>
#include <IGESBasic_Array2OfHArray1OfReal.hxx>
#include <IGESBasic_AssocGroupType.hxx>
#include <IGESBasic_ExternalReferenceFile.hxx>
#include <IGESBasic_ExternalRefFile.hxx>
#include <IGESBasic_ExternalRefFileIndex.hxx>
#include <IGESBasic_ExternalRefFileName.hxx>
#include <IGESBasic_ExternalRefLibName.hxx>
#include <IGESBasic_ExternalRefName.hxx>
#include <IGESBasic_GeneralModule.hxx>
#include <IGESBasic_Group.hxx>
#include <IGESBasic_GroupWithoutBackP.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <IGESBasic_HArray1OfHArray1OfXY.hxx>
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <IGESBasic_HArray1OfLineFontEntity.hxx>
#include <IGESBasic_HArray2OfHArray1OfReal.hxx>
#include <IGESBasic_Hierarchy.hxx>
#include <IGESBasic_Name.hxx>
#include <IGESBasic_OrderedGroup.hxx>
#include <IGESBasic_OrderedGroupWithoutBackP.hxx>
#include <IGESBasic_Protocol.hxx>
#include <IGESBasic_ReadWriteModule.hxx>
#include <IGESBasic_SingleParent.hxx>
#include <IGESBasic_SingularSubfigure.hxx>
#include <IGESBasic_SpecificModule.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <IGESBasic_ToolAssocGroupType.hxx>
#include <IGESBasic_ToolExternalReferenceFile.hxx>
#include <IGESBasic_ToolExternalRefFile.hxx>
#include <IGESBasic_ToolExternalRefFileIndex.hxx>
#include <IGESBasic_ToolExternalRefFileName.hxx>
#include <IGESBasic_ToolExternalRefLibName.hxx>
#include <IGESBasic_ToolExternalRefName.hxx>
#include <IGESBasic_ToolGroup.hxx>
#include <IGESBasic_ToolGroupWithoutBackP.hxx>
#include <IGESBasic_ToolHierarchy.hxx>
#include <IGESBasic_ToolName.hxx>
#include <IGESBasic_ToolOrderedGroup.hxx>
#include <IGESBasic_ToolOrderedGroupWithoutBackP.hxx>
#include <IGESBasic_ToolSingleParent.hxx>
#include <IGESBasic_ToolSingularSubfigure.hxx>
#include <IGESBasic_ToolSubfigureDef.hxx>

// template related includes
// ./opencascade/IGESBasic_Array2OfHArray1OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESBasic_Array1OfLineFontEntity.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESBasic(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESBasic"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESBasic , shared_ptr<IGESBasic>>(m,"IGESBasic");

    static_cast<py::class_<IGESBasic , shared_ptr<IGESBasic> >>(m.attr("IGESBasic"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_AssocGroupType ,opencascade::handle<IGESBasic_AssocGroupType> , IGESData_IGESEntity>>(m.attr("IGESBasic_AssocGroupType"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_AssocGroupType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_AssocGroupType::*)() const>(&IGESBasic_AssocGroupType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_AssocGroupType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefFile ,opencascade::handle<IGESBasic_ExternalRefFile> , IGESData_IGESEntity>>(m.attr("IGESBasic_ExternalRefFile"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFile::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFile::*)() const>(&IGESBasic_ExternalRefFile::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefFile::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefFileIndex ,opencascade::handle<IGESBasic_ExternalRefFileIndex> , IGESData_IGESEntity>>(m.attr("IGESBasic_ExternalRefFileIndex"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileIndex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileIndex::*)() const>(&IGESBasic_ExternalRefFileIndex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefFileIndex::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefFileName ,opencascade::handle<IGESBasic_ExternalRefFileName> , IGESData_IGESEntity>>(m.attr("IGESBasic_ExternalRefFileName"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileName::*)() const>(&IGESBasic_ExternalRefFileName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefFileName::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefLibName ,opencascade::handle<IGESBasic_ExternalRefLibName> , IGESData_IGESEntity>>(m.attr("IGESBasic_ExternalRefLibName"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefLibName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefLibName::*)() const>(&IGESBasic_ExternalRefLibName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefLibName::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefName ,opencascade::handle<IGESBasic_ExternalRefName> , IGESData_IGESEntity>>(m.attr("IGESBasic_ExternalRefName"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefName::*)() const>(&IGESBasic_ExternalRefName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefName::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalReferenceFile ,opencascade::handle<IGESBasic_ExternalReferenceFile> , IGESData_IGESEntity>>(m.attr("IGESBasic_ExternalReferenceFile"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalReferenceFile::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalReferenceFile::*)() const>(&IGESBasic_ExternalReferenceFile::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalReferenceFile::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_GeneralModule ,opencascade::handle<IGESBasic_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESBasic_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESBasic_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESBasic_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESBasic_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESBasic_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESBasic_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESBasic_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESBasic_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESBasic_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESBasic_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Structure for Groups, Figures & Co Description for External Refs Auxiliary for other)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_GeneralModule::*)() const>(&IGESBasic_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_Group ,opencascade::handle<IGESBasic_Group> , IGESData_IGESEntity>>(m.attr("IGESBasic_Group"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_Group::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_Group::*)() const>(&IGESBasic_Group::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_Group::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfIGESEntity ,opencascade::handle<IGESBasic_HArray1OfHArray1OfIGESEntity> , Standard_Transient>>(m.attr("IGESBasic_HArray1OfHArray1OfIGESEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const>(&IGESBasic_HArray1OfHArray1OfIGESEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_HArray1OfHArray1OfIGESEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_HArray1OfHArray1OfIGESEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfInteger ,opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> , Standard_Transient>>(m.attr("IGESBasic_HArray1OfHArray1OfInteger"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfInteger::*)() const>(&IGESBasic_HArray1OfHArray1OfInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_HArray1OfHArray1OfInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_HArray1OfHArray1OfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfReal ,opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> , Standard_Transient>>(m.attr("IGESBasic_HArray1OfHArray1OfReal"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfReal::*)() const>(&IGESBasic_HArray1OfHArray1OfReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_HArray1OfHArray1OfReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_HArray1OfHArray1OfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfXY ,opencascade::handle<IGESBasic_HArray1OfHArray1OfXY> , Standard_Transient>>(m.attr("IGESBasic_HArray1OfHArray1OfXY"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfXY::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfXY::*)() const>(&IGESBasic_HArray1OfHArray1OfXY::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_HArray1OfHArray1OfXY::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_HArray1OfHArray1OfXY::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfXYZ ,opencascade::handle<IGESBasic_HArray1OfHArray1OfXYZ> , Standard_Transient>>(m.attr("IGESBasic_HArray1OfHArray1OfXYZ"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfXYZ::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfHArray1OfXYZ::*)() const>(&IGESBasic_HArray1OfHArray1OfXYZ::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_HArray1OfHArray1OfXYZ::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_HArray1OfHArray1OfXYZ::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray1OfLineFontEntity ,opencascade::handle<IGESBasic_HArray1OfLineFontEntity> , IGESBasic_Array1OfLineFontEntity, Standard_Transient>>(m.attr("IGESBasic_HArray1OfLineFontEntity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESData_LineFontEntity> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESData_LineFontEntity> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESBasic_Array1OfLineFontEntity & (IGESBasic_HArray1OfLineFontEntity::*)() const) static_cast<const IGESBasic_Array1OfLineFontEntity & (IGESBasic_HArray1OfLineFontEntity::*)() const>(&IGESBasic_HArray1OfLineFontEntity::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESBasic_Array1OfLineFontEntity & (IGESBasic_HArray1OfLineFontEntity::*)() ) static_cast<IGESBasic_Array1OfLineFontEntity & (IGESBasic_HArray1OfLineFontEntity::*)() >(&IGESBasic_HArray1OfLineFontEntity::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfLineFontEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_HArray1OfLineFontEntity::*)() const>(&IGESBasic_HArray1OfLineFontEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_HArray1OfLineFontEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_HArray1OfLineFontEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray2OfHArray1OfReal ,opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> , IGESBasic_Array2OfHArray1OfReal, Standard_Transient>>(m.attr("IGESBasic_HArray2OfHArray1OfReal"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<TColStd_HArray1OfReal> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<TColStd_HArray1OfReal> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const IGESBasic_Array2OfHArray1OfReal & (IGESBasic_HArray2OfHArray1OfReal::*)() const) static_cast<const IGESBasic_Array2OfHArray1OfReal & (IGESBasic_HArray2OfHArray1OfReal::*)() const>(&IGESBasic_HArray2OfHArray1OfReal::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (IGESBasic_Array2OfHArray1OfReal & (IGESBasic_HArray2OfHArray1OfReal::*)() ) static_cast<IGESBasic_Array2OfHArray1OfReal & (IGESBasic_HArray2OfHArray1OfReal::*)() >(&IGESBasic_HArray2OfHArray1OfReal::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_HArray2OfHArray1OfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_HArray2OfHArray1OfReal::*)() const>(&IGESBasic_HArray2OfHArray1OfReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_HArray2OfHArray1OfReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_HArray2OfHArray1OfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_Hierarchy ,opencascade::handle<IGESBasic_Hierarchy> , IGESData_IGESEntity>>(m.attr("IGESBasic_Hierarchy"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_Hierarchy::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_Hierarchy::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_Name ,opencascade::handle<IGESBasic_Name> , IGESData_NameEntity>>(m.attr("IGESBasic_Name"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_Name::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_Name::*)() const>(&IGESBasic_Name::Value),
             R"#(returns the user defined Name)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_Name::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_Name::*)() const>(&IGESBasic_Name::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_Name::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_Protocol ,opencascade::handle<IGESBasic_Protocol> , IGESData_Protocol>>(m.attr("IGESBasic_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESBasic_Protocol::*)() const) static_cast<Standard_Integer (IGESBasic_Protocol::*)() const>(&IGESBasic_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESData))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESBasic_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESBasic_Protocol::*)( const Standard_Integer ) const>(&IGESBasic_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESBasic_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESBasic_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESBasic_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_Protocol::*)() const>(&IGESBasic_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ReadWriteModule ,opencascade::handle<IGESBasic_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESBasic_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESBasic_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESBasic_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESBasic_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESBasic)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESBasic_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESBasic_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESBasic_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESBasic)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESBasic_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESBasic_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ReadWriteModule::*)() const>(&IGESBasic_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SingleParent ,opencascade::handle<IGESBasic_SingleParent> , IGESData_SingleParentEntity>>(m.attr("IGESBasic_SingleParent"))
    // constructors
    // custom constructors
    // methods
        .def("SingleParent",
             (opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)() const>(&IGESBasic_SingleParent::SingleParent),
             R"#(Returns the Parent Entity (inherited method))#" )
        .def("NbChildren",
             (Standard_Integer (IGESBasic_SingleParent::*)() const) static_cast<Standard_Integer (IGESBasic_SingleParent::*)() const>(&IGESBasic_SingleParent::NbChildren),
             R"#(returns the number of children of the Parent)#" )
        .def("Child",
             (opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)( const Standard_Integer ) const>(&IGESBasic_SingleParent::Child),
             R"#(returns the specific child as indicated by Index raises exception if Index <= 0 or Index > NbChildren())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SingleParent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SingleParent::*)() const>(&IGESBasic_SingleParent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SingleParent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SingularSubfigure ,opencascade::handle<IGESBasic_SingularSubfigure> , IGESData_IGESEntity>>(m.attr("IGESBasic_SingularSubfigure"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SingularSubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SingularSubfigure::*)() const>(&IGESBasic_SingularSubfigure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SingularSubfigure::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SpecificModule ,opencascade::handle<IGESBasic_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESBasic_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESBasic_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESBasic_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESBasic_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESBasic)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESBasic_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESBasic_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Corrections on Entities which support them (AssocGroupType,Hierarchy,Name,SingleParent))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SpecificModule::*)() const>(&IGESBasic_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SubfigureDef ,opencascade::handle<IGESBasic_SubfigureDef> , IGESData_IGESEntity>>(m.attr("IGESBasic_SubfigureDef"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SubfigureDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SubfigureDef::*)() const>(&IGESBasic_SubfigureDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SubfigureDef::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolAssocGroupType , shared_ptr<IGESBasic_ToolAssocGroupType> >>(m.attr("IGESBasic_ToolAssocGroupType"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefFile , shared_ptr<IGESBasic_ToolExternalRefFile> >>(m.attr("IGESBasic_ToolExternalRefFile"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefFileIndex , shared_ptr<IGESBasic_ToolExternalRefFileIndex> >>(m.attr("IGESBasic_ToolExternalRefFileIndex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefFileName , shared_ptr<IGESBasic_ToolExternalRefFileName> >>(m.attr("IGESBasic_ToolExternalRefFileName"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefLibName , shared_ptr<IGESBasic_ToolExternalRefLibName> >>(m.attr("IGESBasic_ToolExternalRefLibName"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefName , shared_ptr<IGESBasic_ToolExternalRefName> >>(m.attr("IGESBasic_ToolExternalRefName"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalReferenceFile , shared_ptr<IGESBasic_ToolExternalReferenceFile> >>(m.attr("IGESBasic_ToolExternalReferenceFile"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolGroup , shared_ptr<IGESBasic_ToolGroup> >>(m.attr("IGESBasic_ToolGroup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolGroupWithoutBackP , shared_ptr<IGESBasic_ToolGroupWithoutBackP> >>(m.attr("IGESBasic_ToolGroupWithoutBackP"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolHierarchy , shared_ptr<IGESBasic_ToolHierarchy> >>(m.attr("IGESBasic_ToolHierarchy"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolName , shared_ptr<IGESBasic_ToolName> >>(m.attr("IGESBasic_ToolName"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolOrderedGroup , shared_ptr<IGESBasic_ToolOrderedGroup> >>(m.attr("IGESBasic_ToolOrderedGroup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolOrderedGroupWithoutBackP , shared_ptr<IGESBasic_ToolOrderedGroupWithoutBackP> >>(m.attr("IGESBasic_ToolOrderedGroupWithoutBackP"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolSingleParent , shared_ptr<IGESBasic_ToolSingleParent> >>(m.attr("IGESBasic_ToolSingleParent"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolSingularSubfigure , shared_ptr<IGESBasic_ToolSingularSubfigure> >>(m.attr("IGESBasic_ToolSingularSubfigure"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolSubfigureDef , shared_ptr<IGESBasic_ToolSubfigureDef> >>(m.attr("IGESBasic_ToolSubfigureDef"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_GroupWithoutBackP ,opencascade::handle<IGESBasic_GroupWithoutBackP> , IGESBasic_Group>>(m.attr("IGESBasic_GroupWithoutBackP"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_GroupWithoutBackP::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_GroupWithoutBackP::*)() const>(&IGESBasic_GroupWithoutBackP::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_GroupWithoutBackP::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_OrderedGroup ,opencascade::handle<IGESBasic_OrderedGroup> , IGESBasic_Group>>(m.attr("IGESBasic_OrderedGroup"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_OrderedGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_OrderedGroup::*)() const>(&IGESBasic_OrderedGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_OrderedGroup::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_OrderedGroupWithoutBackP ,opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> , IGESBasic_Group>>(m.attr("IGESBasic_OrderedGroupWithoutBackP"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_OrderedGroupWithoutBackP::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_OrderedGroupWithoutBackP::*)() const>(&IGESBasic_OrderedGroupWithoutBackP::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_OrderedGroupWithoutBackP::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESBasic_SingleParent.hxx
// ./opencascade/IGESBasic_ExternalRefFile.hxx
// ./opencascade/IGESBasic_AssocGroupType.hxx
// ./opencascade/IGESBasic_ExternalRefFileName.hxx
// ./opencascade/IGESBasic_HArray1OfLineFontEntity.hxx
// ./opencascade/IGESBasic_ToolSingleParent.hxx
// ./opencascade/IGESBasic_ToolHierarchy.hxx
// ./opencascade/IGESBasic_Group.hxx
// ./opencascade/IGESBasic_ExternalRefName.hxx
// ./opencascade/IGESBasic_ToolExternalRefLibName.hxx
// ./opencascade/IGESBasic_SubfigureDef.hxx
// ./opencascade/IGESBasic_ToolExternalReferenceFile.hxx
// ./opencascade/IGESBasic_ToolExternalRefFileName.hxx
// ./opencascade/IGESBasic_ExternalReferenceFile.hxx
// ./opencascade/IGESBasic_ToolAssocGroupType.hxx
// ./opencascade/IGESBasic_Hierarchy.hxx
// ./opencascade/IGESBasic_ExternalRefFileIndex.hxx
// ./opencascade/IGESBasic_Array2OfHArray1OfReal.hxx
// ./opencascade/IGESBasic_GroupWithoutBackP.hxx
// ./opencascade/IGESBasic_HArray2OfHArray1OfReal.hxx
// ./opencascade/IGESBasic_Name.hxx
// ./opencascade/IGESBasic_ToolGroup.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfIGESEntity.hxx
// ./opencascade/IGESBasic_ToolOrderedGroup.hxx
// ./opencascade/IGESBasic_SpecificModule.hxx
// ./opencascade/IGESBasic_OrderedGroup.hxx
// ./opencascade/IGESBasic_ToolOrderedGroupWithoutBackP.hxx
// ./opencascade/IGESBasic_Array1OfLineFontEntity.hxx
// ./opencascade/IGESBasic_ToolSingularSubfigure.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfReal.hxx
// ./opencascade/IGESBasic_ExternalRefLibName.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfInteger.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfXYZ.hxx
// ./opencascade/IGESBasic_OrderedGroupWithoutBackP.hxx
// ./opencascade/IGESBasic_ToolGroupWithoutBackP.hxx
// ./opencascade/IGESBasic.hxx
// ./opencascade/IGESBasic_ReadWriteModule.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfXY.hxx
// ./opencascade/IGESBasic_SingularSubfigure.hxx
// ./opencascade/IGESBasic_ToolName.hxx
// ./opencascade/IGESBasic_ToolExternalRefFile.hxx
// ./opencascade/IGESBasic_ToolSubfigureDef.hxx
// ./opencascade/IGESBasic_GeneralModule.hxx
// ./opencascade/IGESBasic_Protocol.hxx
// ./opencascade/IGESBasic_ToolExternalRefName.hxx
// ./opencascade/IGESBasic_ToolExternalRefFileIndex.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array2<opencascade::handle<TColStd_HArray1OfReal> >(m,"IGESBasic_Array2OfHArray1OfReal");
    register_template_NCollection_Array1<opencascade::handle<IGESData_LineFontEntity> >(m,"IGESBasic_Array1OfLineFontEntity");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
