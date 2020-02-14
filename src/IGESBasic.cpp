
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <TCollection_HAsciiString.hxx>
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
#include <TCollection_HAsciiString.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
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
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESBasic_SubfigureDef.hxx>
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
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
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
#include "NCollection.hxx"
// ./opencascade/IGESBasic_Array1OfLineFontEntity.hxx
#include "NCollection.hxx"


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

    static_cast<py::class_<IGESBasic , shared_ptr<IGESBasic>  >>(m.attr("IGESBasic"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESBasic::Init),
                    R"#(Prepares dynqmic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESBasic_Protocol> (*)() ) static_cast<opencascade::handle<IGESBasic_Protocol> (*)() >(&IGESBasic::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_AssocGroupType ,opencascade::handle<IGESBasic_AssocGroupType>  , IGESData_IGESEntity >>(m.attr("IGESBasic_AssocGroupType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_AssocGroupType::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESBasic_AssocGroupType::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESBasic_AssocGroupType::Init),
             R"#(This method is used to set the fields of the class AssocGroupType - nbDataFields : number of parameter data fields = 2 - aType : type of attached associativity - aName : identifier of associativity of type AType)#"  , py::arg("nbDataFields"),  py::arg("aType"),  py::arg("aName"))
        .def("NbData",
             (Standard_Integer (IGESBasic_AssocGroupType::*)() const) static_cast<Standard_Integer (IGESBasic_AssocGroupType::*)() const>(&IGESBasic_AssocGroupType::NbData),
             R"#(returns the number of parameter data fields, always = 2)#" )
        .def("AssocType",
             (Standard_Integer (IGESBasic_AssocGroupType::*)() const) static_cast<Standard_Integer (IGESBasic_AssocGroupType::*)() const>(&IGESBasic_AssocGroupType::AssocType),
             R"#(returns the type of attached associativity)#" )
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_AssocGroupType::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_AssocGroupType::*)() const>(&IGESBasic_AssocGroupType::Name),
             R"#(returns identifier of instance of specified associativity)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_AssocGroupType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_AssocGroupType::*)() const>(&IGESBasic_AssocGroupType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_AssocGroupType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_AssocGroupType::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefFile ,opencascade::handle<IGESBasic_ExternalRefFile>  , IGESData_IGESEntity >>(m.attr("IGESBasic_ExternalRefFile"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_ExternalRefFile::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESBasic_ExternalRefFile::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESBasic_ExternalRefFile::Init),
             R"#(This method is used to set the field of the class ExternalRefFile - aFileIdent : External Reference File Identifier)#"  , py::arg("aFileIdent"))
        .def("FileId",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFile::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFile::*)() const>(&IGESBasic_ExternalRefFile::FileId),
             R"#(returns External Reference File Identifier)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFile::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFile::*)() const>(&IGESBasic_ExternalRefFile::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefFile::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_ExternalRefFile::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefFileIndex ,opencascade::handle<IGESBasic_ExternalRefFileIndex>  , IGESData_IGESEntity >>(m.attr("IGESBasic_ExternalRefFileIndex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_ExternalRefFileIndex::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESBasic_ExternalRefFileIndex::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESBasic_ExternalRefFileIndex::Init),
             R"#(This method is used to set the fields of the class ExternalRefFileIndex - aNameArray : External Reference Entity symbolic names - allEntities : External Reference Entities raises exception if array lengths are not equal if size of aNameArray is not equal to size of allEntities)#"  , py::arg("aNameArray"),  py::arg("allEntities"))
        .def("NbEntries",
             (Standard_Integer (IGESBasic_ExternalRefFileIndex::*)() const) static_cast<Standard_Integer (IGESBasic_ExternalRefFileIndex::*)() const>(&IGESBasic_ExternalRefFileIndex::NbEntries),
             R"#(returns number of index entries)#" )
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFileIndex::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFileIndex::*)( const Standard_Integer  ) const>(&IGESBasic_ExternalRefFileIndex::Name),
             R"#(returns the External Reference Entity symbolic name raises exception if Index <= 0 or Index > NbEntries())#"  , py::arg("Index"))
        .def("Entity",
             (opencascade::handle<IGESData_IGESEntity> (IGESBasic_ExternalRefFileIndex::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESBasic_ExternalRefFileIndex::*)( const Standard_Integer  ) const>(&IGESBasic_ExternalRefFileIndex::Entity),
             R"#(returns the internal entity raises exception if Index <= 0 or Index > NbEntries())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileIndex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileIndex::*)() const>(&IGESBasic_ExternalRefFileIndex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefFileIndex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_ExternalRefFileIndex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefFileName ,opencascade::handle<IGESBasic_ExternalRefFileName>  , IGESData_IGESEntity >>(m.attr("IGESBasic_ExternalRefFileName"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_ExternalRefFileName::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESBasic_ExternalRefFileName::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESBasic_ExternalRefFileName::Init),
             R"#(This method is used to set the fields of the class ExternalRefFileName - aFileIdent : External Reference File Identifier - anExtName : External Reference Entity Symbolic Name)#"  , py::arg("aFileIdent"),  py::arg("anExtName"))
        .def("SetForEntity",
             (void (IGESBasic_ExternalRefFileName::*)( const Standard_Boolean  ) ) static_cast<void (IGESBasic_ExternalRefFileName::*)( const Standard_Boolean  ) >(&IGESBasic_ExternalRefFileName::SetForEntity),
             R"#(Changes FormNumber to be 2 if <mode> is True (For Entity) or 0 if <mode> is False (For Definition))#"  , py::arg("mode"))
        .def("FileId",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFileName::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFileName::*)() const>(&IGESBasic_ExternalRefFileName::FileId),
             R"#(returns External Reference File Identifier)#" )
        .def("ReferenceName",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFileName::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefFileName::*)() const>(&IGESBasic_ExternalRefFileName::ReferenceName),
             R"#(returns External Reference Entity Symbolic Name)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefFileName::*)() const>(&IGESBasic_ExternalRefFileName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefFileName::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_ExternalRefFileName::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefLibName ,opencascade::handle<IGESBasic_ExternalRefLibName>  , IGESData_IGESEntity >>(m.attr("IGESBasic_ExternalRefLibName"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_ExternalRefLibName::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESBasic_ExternalRefLibName::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESBasic_ExternalRefLibName::Init),
             R"#(This method is used to set the fields of the class ExternalRefLibName - aLibName : Name of library in which ExtName resides - anExtName : External Reference Entity Symbolic Name)#"  , py::arg("aLibName"),  py::arg("anExtName"))
        .def("LibraryName",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefLibName::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefLibName::*)() const>(&IGESBasic_ExternalRefLibName::LibraryName),
             R"#(returns name of library in which External Reference Entity Symbolic Name resides)#" )
        .def("ReferenceName",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefLibName::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefLibName::*)() const>(&IGESBasic_ExternalRefLibName::ReferenceName),
             R"#(returns External Reference Entity Symbolic Name)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefLibName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefLibName::*)() const>(&IGESBasic_ExternalRefLibName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefLibName::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_ExternalRefLibName::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalRefName ,opencascade::handle<IGESBasic_ExternalRefName>  , IGESData_IGESEntity >>(m.attr("IGESBasic_ExternalRefName"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_ExternalRefName::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESBasic_ExternalRefName::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESBasic_ExternalRefName::Init),
             R"#(This method is used to set the fields of the class ExternalRefName - anExtName : External Reference Entity Symbolic Name)#"  , py::arg("anExtName"))
        .def("ReferenceName",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefName::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalRefName::*)() const>(&IGESBasic_ExternalRefName::ReferenceName),
             R"#(returns External Reference Entity Symbolic Name)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalRefName::*)() const>(&IGESBasic_ExternalRefName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalRefName::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_ExternalRefName::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ExternalReferenceFile ,opencascade::handle<IGESBasic_ExternalReferenceFile>  , IGESData_IGESEntity >>(m.attr("IGESBasic_ExternalReferenceFile"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_ExternalReferenceFile::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (IGESBasic_ExternalReferenceFile::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&IGESBasic_ExternalReferenceFile::Init),
             R"#(This method is used to set the fields of the class ExternalReferenceFile - aNameArray : External Reference File Names)#"  , py::arg("aNameArray"))
        .def("NbListEntries",
             (Standard_Integer (IGESBasic_ExternalReferenceFile::*)() const) static_cast<Standard_Integer (IGESBasic_ExternalReferenceFile::*)() const>(&IGESBasic_ExternalReferenceFile::NbListEntries),
             R"#(returns number of External Reference File Names)#" )
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalReferenceFile::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_ExternalReferenceFile::*)( const Standard_Integer  ) const>(&IGESBasic_ExternalReferenceFile::Name),
             R"#(returns External Reference File Name raises exception if Index <= 0 or Index > NbListEntries())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ExternalReferenceFile::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ExternalReferenceFile::*)() const>(&IGESBasic_ExternalReferenceFile::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ExternalReferenceFile::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_ExternalReferenceFile::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_GeneralModule ,opencascade::handle<IGESBasic_GeneralModule>  , IGESData_GeneralModule >>(m.attr("IGESBasic_GeneralModule"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESBasic_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESBasic_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESBasic_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESBasic_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESBasic_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<Standard_Integer (IGESBasic_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&IGESBasic_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Structure for Groups, Figures & Co Description for External Refs Auxiliary for other)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_GeneralModule::*)() const>(&IGESBasic_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_Group ,opencascade::handle<IGESBasic_Group>  , IGESData_IGESEntity >>(m.attr("IGESBasic_Group"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("nb") )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_Group::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESBasic_Group::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESBasic_Group::Init),
             R"#(This method is used to set the fields of the class Group - allEntities : Used to store pointers to members of the Group.)#"  , py::arg("allEntities"))
        .def("SetOrdered",
             (void (IGESBasic_Group::*)( const Standard_Boolean  ) ) static_cast<void (IGESBasic_Group::*)( const Standard_Boolean  ) >(&IGESBasic_Group::SetOrdered),
             R"#(Sets a Group to be, or not to be Ordered (according mode))#"  , py::arg("mode"))
        .def("SetWithoutBackP",
             (void (IGESBasic_Group::*)( const Standard_Boolean  ) ) static_cast<void (IGESBasic_Group::*)( const Standard_Boolean  ) >(&IGESBasic_Group::SetWithoutBackP),
             R"#(Sets a Group to be, or not to be WithoutBackP)#"  , py::arg("mode"))
        .def("IsOrdered",
             (Standard_Boolean (IGESBasic_Group::*)() const) static_cast<Standard_Boolean (IGESBasic_Group::*)() const>(&IGESBasic_Group::IsOrdered),
             R"#(Returns True if <me> is Ordered)#" )
        .def("IsWithoutBackP",
             (Standard_Boolean (IGESBasic_Group::*)() const) static_cast<Standard_Boolean (IGESBasic_Group::*)() const>(&IGESBasic_Group::IsWithoutBackP),
             R"#(Returns True if <me> is WithoutBackP)#" )
        .def("SetUser",
             (void (IGESBasic_Group::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESBasic_Group::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IGESBasic_Group::SetUser),
             R"#(Enforce a new value for the type and form)#"  , py::arg("type"),  py::arg("form"))
        .def("SetNb",
             (void (IGESBasic_Group::*)( const Standard_Integer  ) ) static_cast<void (IGESBasic_Group::*)( const Standard_Integer  ) >(&IGESBasic_Group::SetNb),
             R"#(Changes the count of item If greater, new items are null If lower, old items are lost)#"  , py::arg("nb"))
        .def("NbEntities",
             (Standard_Integer (IGESBasic_Group::*)() const) static_cast<Standard_Integer (IGESBasic_Group::*)() const>(&IGESBasic_Group::NbEntities),
             R"#(returns the number of IGESEntities in the Group)#" )
        .def("Entity",
             (opencascade::handle<IGESData_IGESEntity> (IGESBasic_Group::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESBasic_Group::*)( const Standard_Integer  ) const>(&IGESBasic_Group::Entity),
             R"#(returns the specific entity from the Group)#"  , py::arg("Index"))
        .def("Value",
             (opencascade::handle<Standard_Transient> (IGESBasic_Group::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (IGESBasic_Group::*)( const Standard_Integer  ) const>(&IGESBasic_Group::Value),
             R"#(returns the specific entity from the Group)#"  , py::arg("Index"))
        .def("SetValue",
             (void (IGESBasic_Group::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESBasic_Group::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESBasic_Group::SetValue),
             R"#(Sets a new value for item <Index>)#"  , py::arg("Index"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_Group::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_Group::*)() const>(&IGESBasic_Group::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_Group::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_Group::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfIGESEntity ,opencascade::handle<IGESBasic_HArray1OfHArray1OfIGESEntity>  , Standard_Transient >>(m.attr("IGESBasic_HArray1OfHArray1OfIGESEntity"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("low"),  py::arg("up") )
    // custom constructors
    // methods
        .def("Lower",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const>(&IGESBasic_HArray1OfHArray1OfIGESEntity::Lower),
             R"#(None)#" )
        .def("Upper",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const>(&IGESBasic_HArray1OfHArray1OfIGESEntity::Upper),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfIGESEntity::*)() const>(&IGESBasic_HArray1OfHArray1OfIGESEntity::Length),
             R"#(None)#" )
        .def("SetValue",
             (void (IGESBasic_HArray1OfHArray1OfIGESEntity::*)( const Standard_Integer ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESBasic_HArray1OfHArray1OfIGESEntity::*)( const Standard_Integer ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESBasic_HArray1OfHArray1OfIGESEntity::SetValue),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("Value",
             (opencascade::handle<IGESData_HArray1OfIGESEntity> (IGESBasic_HArray1OfHArray1OfIGESEntity::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_HArray1OfIGESEntity> (IGESBasic_HArray1OfHArray1OfIGESEntity::*)( const Standard_Integer  ) const>(&IGESBasic_HArray1OfHArray1OfIGESEntity::Value),
             R"#(None)#"  , py::arg("num"))
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


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfInteger ,opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger>  , Standard_Transient >>(m.attr("IGESBasic_HArray1OfHArray1OfInteger"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("low"),  py::arg("up") )
    // custom constructors
    // methods
        .def("Lower",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfInteger::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfInteger::*)() const>(&IGESBasic_HArray1OfHArray1OfInteger::Lower),
             R"#(None)#" )
        .def("Upper",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfInteger::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfInteger::*)() const>(&IGESBasic_HArray1OfHArray1OfInteger::Upper),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfInteger::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfInteger::*)() const>(&IGESBasic_HArray1OfHArray1OfInteger::Length),
             R"#(None)#" )
        .def("SetValue",
             (void (IGESBasic_HArray1OfHArray1OfInteger::*)( const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESBasic_HArray1OfHArray1OfInteger::*)( const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESBasic_HArray1OfHArray1OfInteger::SetValue),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("Value",
             (opencascade::handle<TColStd_HArray1OfInteger> (IGESBasic_HArray1OfHArray1OfInteger::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (IGESBasic_HArray1OfHArray1OfInteger::*)( const Standard_Integer  ) const>(&IGESBasic_HArray1OfHArray1OfInteger::Value),
             R"#(None)#"  , py::arg("num"))
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


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfReal ,opencascade::handle<IGESBasic_HArray1OfHArray1OfReal>  , Standard_Transient >>(m.attr("IGESBasic_HArray1OfHArray1OfReal"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("low"),  py::arg("up") )
    // custom constructors
    // methods
        .def("Lower",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfReal::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfReal::*)() const>(&IGESBasic_HArray1OfHArray1OfReal::Lower),
             R"#(None)#" )
        .def("Upper",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfReal::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfReal::*)() const>(&IGESBasic_HArray1OfHArray1OfReal::Upper),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfReal::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfReal::*)() const>(&IGESBasic_HArray1OfHArray1OfReal::Length),
             R"#(None)#" )
        .def("SetValue",
             (void (IGESBasic_HArray1OfHArray1OfReal::*)( const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (IGESBasic_HArray1OfHArray1OfReal::*)( const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&IGESBasic_HArray1OfHArray1OfReal::SetValue),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("Value",
             (opencascade::handle<TColStd_HArray1OfReal> (IGESBasic_HArray1OfHArray1OfReal::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (IGESBasic_HArray1OfHArray1OfReal::*)( const Standard_Integer  ) const>(&IGESBasic_HArray1OfHArray1OfReal::Value),
             R"#(None)#"  , py::arg("num"))
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


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfXY ,opencascade::handle<IGESBasic_HArray1OfHArray1OfXY>  , Standard_Transient >>(m.attr("IGESBasic_HArray1OfHArray1OfXY"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("low"),  py::arg("up") )
    // custom constructors
    // methods
        .def("Lower",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfXY::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfXY::*)() const>(&IGESBasic_HArray1OfHArray1OfXY::Lower),
             R"#(None)#" )
        .def("Upper",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfXY::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfXY::*)() const>(&IGESBasic_HArray1OfHArray1OfXY::Upper),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfXY::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfXY::*)() const>(&IGESBasic_HArray1OfHArray1OfXY::Length),
             R"#(None)#" )
        .def("SetValue",
             (void (IGESBasic_HArray1OfHArray1OfXY::*)( const Standard_Integer ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) ) static_cast<void (IGESBasic_HArray1OfHArray1OfXY::*)( const Standard_Integer ,  const opencascade::handle<TColgp_HArray1OfXY> &  ) >(&IGESBasic_HArray1OfHArray1OfXY::SetValue),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("Value",
             (opencascade::handle<TColgp_HArray1OfXY> (IGESBasic_HArray1OfHArray1OfXY::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColgp_HArray1OfXY> (IGESBasic_HArray1OfHArray1OfXY::*)( const Standard_Integer  ) const>(&IGESBasic_HArray1OfHArray1OfXY::Value),
             R"#(None)#"  , py::arg("num"))
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


    static_cast<py::class_<IGESBasic_HArray1OfHArray1OfXYZ ,opencascade::handle<IGESBasic_HArray1OfHArray1OfXYZ>  , Standard_Transient >>(m.attr("IGESBasic_HArray1OfHArray1OfXYZ"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("low"),  py::arg("up") )
    // custom constructors
    // methods
        .def("Lower",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfXYZ::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfXYZ::*)() const>(&IGESBasic_HArray1OfHArray1OfXYZ::Lower),
             R"#(None)#" )
        .def("Upper",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfXYZ::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfXYZ::*)() const>(&IGESBasic_HArray1OfHArray1OfXYZ::Upper),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (IGESBasic_HArray1OfHArray1OfXYZ::*)() const) static_cast<Standard_Integer (IGESBasic_HArray1OfHArray1OfXYZ::*)() const>(&IGESBasic_HArray1OfHArray1OfXYZ::Length),
             R"#(None)#" )
        .def("SetValue",
             (void (IGESBasic_HArray1OfHArray1OfXYZ::*)( const Standard_Integer ,  const opencascade::handle<TColgp_HArray1OfXYZ> &  ) ) static_cast<void (IGESBasic_HArray1OfHArray1OfXYZ::*)( const Standard_Integer ,  const opencascade::handle<TColgp_HArray1OfXYZ> &  ) >(&IGESBasic_HArray1OfHArray1OfXYZ::SetValue),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("Value",
             (opencascade::handle<TColgp_HArray1OfXYZ> (IGESBasic_HArray1OfHArray1OfXYZ::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColgp_HArray1OfXYZ> (IGESBasic_HArray1OfHArray1OfXYZ::*)( const Standard_Integer  ) const>(&IGESBasic_HArray1OfHArray1OfXYZ::Value),
             R"#(None)#"  , py::arg("num"))
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


    static_cast<py::class_<IGESBasic_HArray1OfLineFontEntity ,opencascade::handle<IGESBasic_HArray1OfLineFontEntity>  , IGESBasic_Array1OfLineFontEntity , Standard_Transient >>(m.attr("IGESBasic_HArray1OfLineFontEntity"))
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


    static_cast<py::class_<IGESBasic_HArray2OfHArray1OfReal ,opencascade::handle<IGESBasic_HArray2OfHArray1OfReal>  , IGESBasic_Array2OfHArray1OfReal , Standard_Transient >>(m.attr("IGESBasic_HArray2OfHArray1OfReal"))
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


    static_cast<py::class_<IGESBasic_Hierarchy ,opencascade::handle<IGESBasic_Hierarchy>  , IGESData_IGESEntity >>(m.attr("IGESBasic_Hierarchy"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_Hierarchy::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESBasic_Hierarchy::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESBasic_Hierarchy::Init),
             R"#(This method is used to set the fields of the class Hierarchy - nbPropVal : Number of Property values = 6 - aLineFont : indicates the line font - aView : indicates the view - aEntityLevel : indicates the entity level - aBlankStatus : indicates the blank status - aLineWt : indicates the line weight - aColorNum : indicates the color num aLineFont, aView, aEntityLevel, aBlankStatus, aLineWt and aColorNum can take 0 or 1. 0 : The directory entry attribute will apply to entities physically subordinate to this entity. 1 : The directory entry attribute of this entity will not apply to physically subordinate entities.)#"  , py::arg("nbPropVal"),  py::arg("aLineFont"),  py::arg("aView"),  py::arg("anEntityLevel"),  py::arg("aBlankStatus"),  py::arg("aLineWt"),  py::arg("aColorNum"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESBasic_Hierarchy::*)() const) static_cast<Standard_Integer (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::NbPropertyValues),
             R"#(returns the number of property values, which should be 6)#" )
        .def("NewLineFont",
             (Standard_Integer (IGESBasic_Hierarchy::*)() const) static_cast<Standard_Integer (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::NewLineFont),
             R"#(returns the line font)#" )
        .def("NewView",
             (Standard_Integer (IGESBasic_Hierarchy::*)() const) static_cast<Standard_Integer (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::NewView),
             R"#(returns the view)#" )
        .def("NewEntityLevel",
             (Standard_Integer (IGESBasic_Hierarchy::*)() const) static_cast<Standard_Integer (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::NewEntityLevel),
             R"#(returns the entity level)#" )
        .def("NewBlankStatus",
             (Standard_Integer (IGESBasic_Hierarchy::*)() const) static_cast<Standard_Integer (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::NewBlankStatus),
             R"#(returns the blank status)#" )
        .def("NewLineWeight",
             (Standard_Integer (IGESBasic_Hierarchy::*)() const) static_cast<Standard_Integer (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::NewLineWeight),
             R"#(returns the line weight)#" )
        .def("NewColorNum",
             (Standard_Integer (IGESBasic_Hierarchy::*)() const) static_cast<Standard_Integer (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::NewColorNum),
             R"#(returns the color number)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_Hierarchy::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_Hierarchy::*)() const>(&IGESBasic_Hierarchy::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_Hierarchy::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_Hierarchy::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_Name ,opencascade::handle<IGESBasic_Name>  , IGESData_NameEntity >>(m.attr("IGESBasic_Name"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_Name::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESBasic_Name::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESBasic_Name::Init),
             R"#(This method is used to set the fields of the class Name - nbPropVal : Number of property values, always = 1 - aName : Stores the Name)#"  , py::arg("nbPropVal"),  py::arg("aName"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESBasic_Name::*)() const) static_cast<Standard_Integer (IGESBasic_Name::*)() const>(&IGESBasic_Name::NbPropertyValues),
             R"#(returns the number of property values, which should be 1)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_Name::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_Protocol ,opencascade::handle<IGESBasic_Protocol>  , IGESData_Protocol >>(m.attr("IGESBasic_Protocol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESBasic_Protocol::*)() const) static_cast<Standard_Integer (IGESBasic_Protocol::*)() const>(&IGESBasic_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESData))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESBasic_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESBasic_Protocol::*)( const Standard_Integer  ) const>(&IGESBasic_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESBasic_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESBasic_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESBasic_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_Protocol::*)() const>(&IGESBasic_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ReadWriteModule ,opencascade::handle<IGESBasic_ReadWriteModule>  , IGESData_ReadWriteModule >>(m.attr("IGESBasic_ReadWriteModule"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESBasic_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESBasic_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESBasic_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESBasic)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESBasic_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESBasic)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_ReadWriteModule::*)() const>(&IGESBasic_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SingleParent ,opencascade::handle<IGESBasic_SingleParent>  , IGESData_SingleParentEntity >>(m.attr("IGESBasic_SingleParent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_SingleParent::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESBasic_SingleParent::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESBasic_SingleParent::Init),
             R"#(This method is used to set the fields of the class SingleParent - nbParentEntities : Indicates number of Parents, always = 1 - aParentEntity : Used to hold the Parent Entity - allChildren : Used to hold the children)#"  , py::arg("nbParentEntities"),  py::arg("aParentEntity"),  py::arg("allChildren"))
        .def("NbParentEntities",
             (Standard_Integer (IGESBasic_SingleParent::*)() const) static_cast<Standard_Integer (IGESBasic_SingleParent::*)() const>(&IGESBasic_SingleParent::NbParentEntities),
             R"#(returns the number of Parent Entities, which should be 1)#" )
        .def("SingleParent",
             (opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)() const>(&IGESBasic_SingleParent::SingleParent),
             R"#(Returns the Parent Entity (inherited method))#" )
        .def("NbChildren",
             (Standard_Integer (IGESBasic_SingleParent::*)() const) static_cast<Standard_Integer (IGESBasic_SingleParent::*)() const>(&IGESBasic_SingleParent::NbChildren),
             R"#(returns the number of children of the Parent)#" )
        .def("Child",
             (opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESBasic_SingleParent::*)( const Standard_Integer  ) const>(&IGESBasic_SingleParent::Child),
             R"#(returns the specific child as indicated by Index raises exception if Index <= 0 or Index > NbChildren())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SingleParent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SingleParent::*)() const>(&IGESBasic_SingleParent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SingleParent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_SingleParent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SingularSubfigure ,opencascade::handle<IGESBasic_SingularSubfigure>  , IGESData_IGESEntity >>(m.attr("IGESBasic_SingularSubfigure"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_SingularSubfigure::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const gp_XYZ & ,  const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (IGESBasic_SingularSubfigure::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const gp_XYZ & ,  const Standard_Boolean ,  const Standard_Real  ) >(&IGESBasic_SingularSubfigure::Init),
             R"#(This method is used to set the fields of the class SingularSubfigure - aSubfigureDef : the Subfigure Definition entity - aTranslation : used to store the X,Y,Z coord - hasScale : Indicates the presence of scale factor - aScale : Used to store the scale factor)#"  , py::arg("aSubfigureDef"),  py::arg("aTranslation"),  py::arg("hasScale"),  py::arg("aScale"))
        .def("Subfigure",
             (opencascade::handle<IGESBasic_SubfigureDef> (IGESBasic_SingularSubfigure::*)() const) static_cast<opencascade::handle<IGESBasic_SubfigureDef> (IGESBasic_SingularSubfigure::*)() const>(&IGESBasic_SingularSubfigure::Subfigure),
             R"#(returns the subfigure definition entity)#" )
        .def("Translation",
             (gp_XYZ (IGESBasic_SingularSubfigure::*)() const) static_cast<gp_XYZ (IGESBasic_SingularSubfigure::*)() const>(&IGESBasic_SingularSubfigure::Translation),
             R"#(returns the X, Y, Z coordinates)#" )
        .def("ScaleFactor",
             (Standard_Real (IGESBasic_SingularSubfigure::*)() const) static_cast<Standard_Real (IGESBasic_SingularSubfigure::*)() const>(&IGESBasic_SingularSubfigure::ScaleFactor),
             R"#(returns the scale factor if hasScaleFactor is False, returns 1.0 (default))#" )
        .def("HasScaleFactor",
             (Standard_Boolean (IGESBasic_SingularSubfigure::*)() const) static_cast<Standard_Boolean (IGESBasic_SingularSubfigure::*)() const>(&IGESBasic_SingularSubfigure::HasScaleFactor),
             R"#(returns a boolean indicating whether scale factor is present or not)#" )
        .def("TransformedTranslation",
             (gp_XYZ (IGESBasic_SingularSubfigure::*)() const) static_cast<gp_XYZ (IGESBasic_SingularSubfigure::*)() const>(&IGESBasic_SingularSubfigure::TransformedTranslation),
             R"#(returns the Translation after transformation)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SingularSubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SingularSubfigure::*)() const>(&IGESBasic_SingularSubfigure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SingularSubfigure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_SingularSubfigure::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SpecificModule ,opencascade::handle<IGESBasic_SpecificModule>  , IGESData_SpecificModule >>(m.attr("IGESBasic_SpecificModule"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESBasic_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESBasic)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<Standard_Boolean (IGESBasic_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESBasic_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Corrections on Entities which support them (AssocGroupType,Hierarchy,Name,SingleParent))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SpecificModule::*)() const>(&IGESBasic_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SpecificModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_SubfigureDef ,opencascade::handle<IGESBasic_SubfigureDef>  , IGESData_IGESEntity >>(m.attr("IGESBasic_SubfigureDef"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESBasic_SubfigureDef::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) ) static_cast<void (IGESBasic_SubfigureDef::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> &  ) >(&IGESBasic_SubfigureDef::Init),
             R"#(This method is used to set the fields of the class SubfigureDef - aDepth : It indicates the amount of nesting - aName : the subfigure name - allAssocEntities : the associated entities)#"  , py::arg("aDepth"),  py::arg("aName"),  py::arg("allAssocEntities"))
        .def("Depth",
             (Standard_Integer (IGESBasic_SubfigureDef::*)() const) static_cast<Standard_Integer (IGESBasic_SubfigureDef::*)() const>(&IGESBasic_SubfigureDef::Depth),
             R"#(returns depth of the Subfigure if theDepth = 0 - No reference to any subfigure instance.)#" )
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESBasic_SubfigureDef::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESBasic_SubfigureDef::*)() const>(&IGESBasic_SubfigureDef::Name),
             R"#(returns the name of Subfigure)#" )
        .def("NbEntities",
             (Standard_Integer (IGESBasic_SubfigureDef::*)() const) static_cast<Standard_Integer (IGESBasic_SubfigureDef::*)() const>(&IGESBasic_SubfigureDef::NbEntities),
             R"#(returns number of entities. Is greater than or equal to zero.)#" )
        .def("AssociatedEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESBasic_SubfigureDef::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESBasic_SubfigureDef::*)( const Standard_Integer  ) const>(&IGESBasic_SubfigureDef::AssociatedEntity),
             R"#(returns the specific entity as indicated by Index raises exception if Index <= 0 or Index > NbEntities())#"  , py::arg("Index"))
        .def("Value",
             (opencascade::handle<Standard_Transient> (IGESBasic_SubfigureDef::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (IGESBasic_SubfigureDef::*)( const Standard_Integer  ) const>(&IGESBasic_SubfigureDef::Value),
             R"#(returns the specific entity as indicated by Index raises exception if Index <= 0 or Index > NbEntities())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESBasic_SubfigureDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESBasic_SubfigureDef::*)() const>(&IGESBasic_SubfigureDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESBasic_SubfigureDef::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_SubfigureDef::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolAssocGroupType , shared_ptr<IGESBasic_ToolAssocGroupType>  >>(m.attr("IGESBasic_ToolAssocGroupType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolAssocGroupType::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolAssocGroupType::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolAssocGroupType::OwnShared),
             R"#(Lists the Entities shared by a AssocGroupType <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> &  ) const>(&IGESBasic_ToolAssocGroupType::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a AssocGroupType (NbData forced to 2))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> &  ) const>(&IGESBasic_ToolAssocGroupType::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolAssocGroupType::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const opencascade::handle<IGESBasic_AssocGroupType> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const opencascade::handle<IGESBasic_AssocGroupType> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolAssocGroupType::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolAssocGroupType::*)( const opencascade::handle<IGESBasic_AssocGroupType> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolAssocGroupType::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefFile , shared_ptr<IGESBasic_ToolExternalRefFile>  >>(m.attr("IGESBasic_ToolExternalRefFile"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolExternalRefFile::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolExternalRefFile::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolExternalRefFile::OwnShared),
             R"#(Lists the Entities shared by a ExternalRefFile <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> &  ) const>(&IGESBasic_ToolExternalRefFile::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolExternalRefFile::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const opencascade::handle<IGESBasic_ExternalRefFile> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const opencascade::handle<IGESBasic_ExternalRefFile> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolExternalRefFile::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolExternalRefFile::*)( const opencascade::handle<IGESBasic_ExternalRefFile> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolExternalRefFile::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefFileIndex , shared_ptr<IGESBasic_ToolExternalRefFileIndex>  >>(m.attr("IGESBasic_ToolExternalRefFileIndex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolExternalRefFileIndex::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolExternalRefFileIndex::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolExternalRefFileIndex::OwnShared),
             R"#(Lists the Entities shared by a ExternalRefFileIndex <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> &  ) const>(&IGESBasic_ToolExternalRefFileIndex::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolExternalRefFileIndex::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolExternalRefFileIndex::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolExternalRefFileIndex::*)( const opencascade::handle<IGESBasic_ExternalRefFileIndex> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolExternalRefFileIndex::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefFileName , shared_ptr<IGESBasic_ToolExternalRefFileName>  >>(m.attr("IGESBasic_ToolExternalRefFileName"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolExternalRefFileName::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolExternalRefFileName::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolExternalRefFileName::OwnShared),
             R"#(Lists the Entities shared by a ExternalRefFileName <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> &  ) const>(&IGESBasic_ToolExternalRefFileName::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolExternalRefFileName::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolExternalRefFileName::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolExternalRefFileName::*)( const opencascade::handle<IGESBasic_ExternalRefFileName> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolExternalRefFileName::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefLibName , shared_ptr<IGESBasic_ToolExternalRefLibName>  >>(m.attr("IGESBasic_ToolExternalRefLibName"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolExternalRefLibName::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolExternalRefLibName::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolExternalRefLibName::OwnShared),
             R"#(Lists the Entities shared by a ExternalRefLibName <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> &  ) const>(&IGESBasic_ToolExternalRefLibName::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolExternalRefLibName::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolExternalRefLibName::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolExternalRefLibName::*)( const opencascade::handle<IGESBasic_ExternalRefLibName> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolExternalRefLibName::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalRefName , shared_ptr<IGESBasic_ToolExternalRefName>  >>(m.attr("IGESBasic_ToolExternalRefName"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolExternalRefName::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolExternalRefName::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolExternalRefName::OwnShared),
             R"#(Lists the Entities shared by a ExternalRefName <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> &  ) const>(&IGESBasic_ToolExternalRefName::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolExternalRefName::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const opencascade::handle<IGESBasic_ExternalRefName> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const opencascade::handle<IGESBasic_ExternalRefName> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolExternalRefName::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolExternalRefName::*)( const opencascade::handle<IGESBasic_ExternalRefName> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolExternalRefName::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolExternalReferenceFile , shared_ptr<IGESBasic_ToolExternalReferenceFile>  >>(m.attr("IGESBasic_ToolExternalReferenceFile"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolExternalReferenceFile::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolExternalReferenceFile::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolExternalReferenceFile::OwnShared),
             R"#(Lists the Entities shared by a ExternalReferenceFile <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> &  ) const>(&IGESBasic_ToolExternalReferenceFile::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolExternalReferenceFile::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolExternalReferenceFile::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolExternalReferenceFile::*)( const opencascade::handle<IGESBasic_ExternalReferenceFile> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolExternalReferenceFile::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolGroup , shared_ptr<IGESBasic_ToolGroup>  >>(m.attr("IGESBasic_ToolGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolGroup::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolGroup::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolGroup::OwnShared),
             R"#(Lists the Entities shared by a Group <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> &  ) const>(&IGESBasic_ToolGroup::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Group (Null Elements are removed from list))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> &  ) const>(&IGESBasic_ToolGroup::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolGroup::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const opencascade::handle<IGESBasic_Group> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const opencascade::handle<IGESBasic_Group> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolGroup::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolGroup::*)( const opencascade::handle<IGESBasic_Group> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolGroup::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolGroupWithoutBackP , shared_ptr<IGESBasic_ToolGroupWithoutBackP>  >>(m.attr("IGESBasic_ToolGroupWithoutBackP"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolGroupWithoutBackP::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolGroupWithoutBackP::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolGroupWithoutBackP::OwnShared),
             R"#(Lists the Entities shared by a GroupWithoutBackP <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> &  ) const>(&IGESBasic_ToolGroupWithoutBackP::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a GroupWithoutBackP (Null Elements are removed from list))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> &  ) const>(&IGESBasic_ToolGroupWithoutBackP::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolGroupWithoutBackP::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolGroupWithoutBackP::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_GroupWithoutBackP> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolGroupWithoutBackP::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolHierarchy , shared_ptr<IGESBasic_ToolHierarchy>  >>(m.attr("IGESBasic_ToolHierarchy"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolHierarchy::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolHierarchy::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolHierarchy::OwnShared),
             R"#(Lists the Entities shared by a Hierarchy <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> &  ) const>(&IGESBasic_ToolHierarchy::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Hierarchy (NbPropertyValues forced to 6))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> &  ) const>(&IGESBasic_ToolHierarchy::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolHierarchy::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const opencascade::handle<IGESBasic_Hierarchy> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const opencascade::handle<IGESBasic_Hierarchy> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolHierarchy::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolHierarchy::*)( const opencascade::handle<IGESBasic_Hierarchy> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolHierarchy::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolName , shared_ptr<IGESBasic_ToolName>  >>(m.attr("IGESBasic_ToolName"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolName::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolName::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolName::OwnShared),
             R"#(Lists the Entities shared by a Name <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> &  ) const>(&IGESBasic_ToolName::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Name (NbPropertyValues forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> &  ) const>(&IGESBasic_ToolName::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolName::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const opencascade::handle<IGESBasic_Name> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const opencascade::handle<IGESBasic_Name> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolName::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolName::*)( const opencascade::handle<IGESBasic_Name> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolName::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolOrderedGroup , shared_ptr<IGESBasic_ToolOrderedGroup>  >>(m.attr("IGESBasic_ToolOrderedGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolOrderedGroup::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolOrderedGroup::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolOrderedGroup::OwnShared),
             R"#(Lists the Entities shared by a OrderedGroup <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> &  ) const>(&IGESBasic_ToolOrderedGroup::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on an OrderedGroup (Null Elements are removed from list))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> &  ) const>(&IGESBasic_ToolOrderedGroup::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolOrderedGroup::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const opencascade::handle<IGESBasic_OrderedGroup> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const opencascade::handle<IGESBasic_OrderedGroup> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolOrderedGroup::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolOrderedGroup::*)( const opencascade::handle<IGESBasic_OrderedGroup> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolOrderedGroup::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolOrderedGroupWithoutBackP , shared_ptr<IGESBasic_ToolOrderedGroupWithoutBackP>  >>(m.attr("IGESBasic_ToolOrderedGroupWithoutBackP"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::OwnShared),
             R"#(Lists the Entities shared by a OrderedGroupWithoutBackP <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> &  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on an OrderedGroupWithoutBackP (Null Elements are removed from list))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> &  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolOrderedGroupWithoutBackP::*)( const opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolOrderedGroupWithoutBackP::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolSingleParent , shared_ptr<IGESBasic_ToolSingleParent>  >>(m.attr("IGESBasic_ToolSingleParent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolSingleParent::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolSingleParent::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolSingleParent::OwnShared),
             R"#(Lists the Entities shared by a SingleParent <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> &  ) const) static_cast<Standard_Boolean (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> &  ) const>(&IGESBasic_ToolSingleParent::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a SingleParent (NbParents forced to 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> &  ) const>(&IGESBasic_ToolSingleParent::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolSingleParent::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const opencascade::handle<IGESBasic_SingleParent> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const opencascade::handle<IGESBasic_SingleParent> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolSingleParent::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolSingleParent::*)( const opencascade::handle<IGESBasic_SingleParent> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolSingleParent::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolSingularSubfigure , shared_ptr<IGESBasic_ToolSingularSubfigure>  >>(m.attr("IGESBasic_ToolSingularSubfigure"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolSingularSubfigure::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolSingularSubfigure::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolSingularSubfigure::OwnShared),
             R"#(Lists the Entities shared by a SingularSubfigure <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> &  ) const>(&IGESBasic_ToolSingularSubfigure::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolSingularSubfigure::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const opencascade::handle<IGESBasic_SingularSubfigure> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const opencascade::handle<IGESBasic_SingularSubfigure> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolSingularSubfigure::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolSingularSubfigure::*)( const opencascade::handle<IGESBasic_SingularSubfigure> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolSingularSubfigure::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_ToolSubfigureDef , shared_ptr<IGESBasic_ToolSubfigureDef>  >>(m.attr("IGESBasic_ToolSubfigureDef"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESBasic_ToolSubfigureDef::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  IGESData_IGESWriter &  ) const>(&IGESBasic_ToolSubfigureDef::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  Interface_EntityIterator &  ) const>(&IGESBasic_ToolSubfigureDef::OwnShared),
             R"#(Lists the Entities shared by a SubfigureDef <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> &  ) const) static_cast<IGESData_DirChecker (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> &  ) const>(&IGESBasic_ToolSubfigureDef::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESBasic_ToolSubfigureDef::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const opencascade::handle<IGESBasic_SubfigureDef> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const opencascade::handle<IGESBasic_SubfigureDef> & ,  Interface_CopyTool &  ) const>(&IGESBasic_ToolSubfigureDef::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESBasic_ToolSubfigureDef::*)( const opencascade::handle<IGESBasic_SubfigureDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESBasic_ToolSubfigureDef::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_GroupWithoutBackP ,opencascade::handle<IGESBasic_GroupWithoutBackP>  , IGESBasic_Group >>(m.attr("IGESBasic_GroupWithoutBackP"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_GroupWithoutBackP::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_OrderedGroup ,opencascade::handle<IGESBasic_OrderedGroup>  , IGESBasic_Group >>(m.attr("IGESBasic_OrderedGroup"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_OrderedGroup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESBasic_OrderedGroupWithoutBackP ,opencascade::handle<IGESBasic_OrderedGroupWithoutBackP>  , IGESBasic_Group >>(m.attr("IGESBasic_OrderedGroupWithoutBackP"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESBasic_OrderedGroupWithoutBackP::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESBasic_ToolSingleParent.hxx
// ./opencascade/IGESBasic_ExternalRefFile.hxx
// ./opencascade/IGESBasic_ToolExternalRefName.hxx
// ./opencascade/IGESBasic_Group.hxx
// ./opencascade/IGESBasic_Array2OfHArray1OfReal.hxx
// ./opencascade/IGESBasic_OrderedGroupWithoutBackP.hxx
// ./opencascade/IGESBasic_SingleParent.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfInteger.hxx
// ./opencascade/IGESBasic_ToolHierarchy.hxx
// ./opencascade/IGESBasic_ToolExternalRefFileIndex.hxx
// ./opencascade/IGESBasic_GroupWithoutBackP.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfReal.hxx
// ./opencascade/IGESBasic_ToolName.hxx
// ./opencascade/IGESBasic_ToolGroup.hxx
// ./opencascade/IGESBasic_OrderedGroup.hxx
// ./opencascade/IGESBasic_ExternalRefFileName.hxx
// ./opencascade/IGESBasic_ExternalRefFileIndex.hxx
// ./opencascade/IGESBasic.hxx
// ./opencascade/IGESBasic_ToolSingularSubfigure.hxx
// ./opencascade/IGESBasic_ReadWriteModule.hxx
// ./opencascade/IGESBasic_ToolSubfigureDef.hxx
// ./opencascade/IGESBasic_SpecificModule.hxx
// ./opencascade/IGESBasic_Name.hxx
// ./opencascade/IGESBasic_GeneralModule.hxx
// ./opencascade/IGESBasic_SingularSubfigure.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfXYZ.hxx
// ./opencascade/IGESBasic_SubfigureDef.hxx
// ./opencascade/IGESBasic_ToolExternalReferenceFile.hxx
// ./opencascade/IGESBasic_ToolExternalRefFileName.hxx
// ./opencascade/IGESBasic_ToolOrderedGroup.hxx
// ./opencascade/IGESBasic_ExternalRefLibName.hxx
// ./opencascade/IGESBasic_AssocGroupType.hxx
// ./opencascade/IGESBasic_ExternalReferenceFile.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfIGESEntity.hxx
// ./opencascade/IGESBasic_Protocol.hxx
// ./opencascade/IGESBasic_ToolOrderedGroupWithoutBackP.hxx
// ./opencascade/IGESBasic_ToolExternalRefFile.hxx
// ./opencascade/IGESBasic_HArray1OfLineFontEntity.hxx
// ./opencascade/IGESBasic_ToolExternalRefLibName.hxx
// ./opencascade/IGESBasic_ToolGroupWithoutBackP.hxx
// ./opencascade/IGESBasic_HArray1OfHArray1OfXY.hxx
// ./opencascade/IGESBasic_ToolAssocGroupType.hxx
// ./opencascade/IGESBasic_ExternalRefName.hxx
// ./opencascade/IGESBasic_Array1OfLineFontEntity.hxx
// ./opencascade/IGESBasic_Hierarchy.hxx
// ./opencascade/IGESBasic_HArray2OfHArray1OfReal.hxx

// operators

// register typdefs
    register_template_NCollection_Array2<opencascade::handle<TColStd_HArray1OfReal> >(m,"IGESBasic_Array2OfHArray1OfReal");  
    register_template_NCollection_Array1<opencascade::handle<IGESData_LineFontEntity> >(m,"IGESBasic_Array1OfLineFontEntity");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
