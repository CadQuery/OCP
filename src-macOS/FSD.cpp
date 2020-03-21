
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Storage_HeaderData.hxx>

// module includes
#include <FSD_Base64Decoder.hxx>
#include <FSD_BinaryFile.hxx>
#include <FSD_BStream.hxx>
#include <FSD_CmpFile.hxx>
#include <FSD_File.hxx>
#include <FSD_FileHeader.hxx>
#include <FSD_FStream.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FSD(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("FSD"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<FSD_Base64Decoder , shared_ptr<FSD_Base64Decoder>>(m,"FSD_Base64Decoder");

    static_cast<py::class_<FSD_Base64Decoder , shared_ptr<FSD_Base64Decoder> >>(m.attr("FSD_Base64Decoder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FSD_BinaryFile , shared_ptr<FSD_BinaryFile> , Storage_BaseDriver>>(m.attr("FSD_BinaryFile"))
    // constructors
    // custom constructors
    // methods
        .def("Open",
             (Storage_Error (FSD_BinaryFile::*)( const TCollection_AsciiString & , const Storage_OpenMode ) ) static_cast<Storage_Error (FSD_BinaryFile::*)( const TCollection_AsciiString & , const Storage_OpenMode ) >(&FSD_BinaryFile::Open),
             R"#(None)#"  , py::arg("aName"),  py::arg("aMode"))
        .def("IsEnd",
             (Standard_Boolean (FSD_BinaryFile::*)() ) static_cast<Standard_Boolean (FSD_BinaryFile::*)() >(&FSD_BinaryFile::IsEnd),
             R"#(None)#" )
        .def("Tell",
             (Storage_Position (FSD_BinaryFile::*)() ) static_cast<Storage_Position (FSD_BinaryFile::*)() >(&FSD_BinaryFile::Tell),
             R"#(return position in the file. Return -1 upon error.)#" )
        .def("BeginWriteInfoSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWriteInfoSection),
             R"#(None)#" )
        .def("WriteInfo",
             (void (FSD_BinaryFile::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_ExtendedString & , const TCollection_AsciiString & , const TCollection_ExtendedString & ,  const NCollection_Sequence<TCollection_AsciiString> & ) ) static_cast<void (FSD_BinaryFile::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_ExtendedString & , const TCollection_AsciiString & , const TCollection_ExtendedString & ,  const NCollection_Sequence<TCollection_AsciiString> & ) >(&FSD_BinaryFile::WriteInfo),
             R"#(None)#"  , py::arg("nbObj"),  py::arg("dbVersion"),  py::arg("date"),  py::arg("schemaName"),  py::arg("schemaVersion"),  py::arg("appName"),  py::arg("appVersion"),  py::arg("objectType"),  py::arg("userInfo"))
        .def("EndWriteInfoSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWriteInfoSection),
             R"#(None)#" )
        .def("BeginReadInfoSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadInfoSection),
             R"#(None)#" )
        .def("ReadCompleteInfo",
             (void (FSD_BinaryFile::*)( std::istream & , opencascade::handle<Storage_Data> & ) ) static_cast<void (FSD_BinaryFile::*)( std::istream & , opencascade::handle<Storage_Data> & ) >(&FSD_BinaryFile::ReadCompleteInfo),
             R"#(None)#"  , py::arg("theIStream"),  py::arg("theData"))
        .def("EndReadInfoSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadInfoSection),
             R"#(None)#" )
        .def("BeginWriteCommentSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWriteCommentSection),
             R"#(None)#" )
        .def("WriteComment",
             (void (FSD_BinaryFile::*)(  const NCollection_Sequence<TCollection_ExtendedString> & ) ) static_cast<void (FSD_BinaryFile::*)(  const NCollection_Sequence<TCollection_ExtendedString> & ) >(&FSD_BinaryFile::WriteComment),
             R"#(None)#"  , py::arg("userComments"))
        .def("EndWriteCommentSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWriteCommentSection),
             R"#(None)#" )
        .def("BeginReadCommentSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadCommentSection),
             R"#(None)#" )
        .def("ReadComment",
             (void (FSD_BinaryFile::*)( NCollection_Sequence<TCollection_ExtendedString> & ) ) static_cast<void (FSD_BinaryFile::*)( NCollection_Sequence<TCollection_ExtendedString> & ) >(&FSD_BinaryFile::ReadComment),
             R"#(None)#"  , py::arg("userComments"))
        .def("EndReadCommentSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadCommentSection),
             R"#(None)#" )
        .def("BeginWriteTypeSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWriteTypeSection),
             R"#(None)#" )
        .def("SetTypeSectionSize",
             (void (FSD_BinaryFile::*)( const Standard_Integer ) ) static_cast<void (FSD_BinaryFile::*)( const Standard_Integer ) >(&FSD_BinaryFile::SetTypeSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteTypeInformations",
             (void (FSD_BinaryFile::*)( const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (FSD_BinaryFile::*)( const Standard_Integer , const TCollection_AsciiString & ) >(&FSD_BinaryFile::WriteTypeInformations),
             R"#(None)#"  , py::arg("typeNum"),  py::arg("typeName"))
        .def("EndWriteTypeSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWriteTypeSection),
             R"#(None)#" )
        .def("BeginReadTypeSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadTypeSection),
             R"#(None)#" )
        .def("TypeSectionSize",
             (Standard_Integer (FSD_BinaryFile::*)() ) static_cast<Standard_Integer (FSD_BinaryFile::*)() >(&FSD_BinaryFile::TypeSectionSize),
             R"#(None)#" )
        .def("EndReadTypeSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadTypeSection),
             R"#(None)#" )
        .def("BeginWriteRootSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWriteRootSection),
             R"#(None)#" )
        .def("SetRootSectionSize",
             (void (FSD_BinaryFile::*)( const Standard_Integer ) ) static_cast<void (FSD_BinaryFile::*)( const Standard_Integer ) >(&FSD_BinaryFile::SetRootSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteRoot",
             (void (FSD_BinaryFile::*)( const TCollection_AsciiString & , const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (FSD_BinaryFile::*)( const TCollection_AsciiString & , const Standard_Integer , const TCollection_AsciiString & ) >(&FSD_BinaryFile::WriteRoot),
             R"#(None)#"  , py::arg("rootName"),  py::arg("aRef"),  py::arg("aType"))
        .def("EndWriteRootSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWriteRootSection),
             R"#(None)#" )
        .def("BeginReadRootSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadRootSection),
             R"#(None)#" )
        .def("RootSectionSize",
             (Standard_Integer (FSD_BinaryFile::*)() ) static_cast<Standard_Integer (FSD_BinaryFile::*)() >(&FSD_BinaryFile::RootSectionSize),
             R"#(None)#" )
        .def("EndReadRootSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadRootSection),
             R"#(None)#" )
        .def("BeginWriteRefSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWriteRefSection),
             R"#(None)#" )
        .def("SetRefSectionSize",
             (void (FSD_BinaryFile::*)( const Standard_Integer ) ) static_cast<void (FSD_BinaryFile::*)( const Standard_Integer ) >(&FSD_BinaryFile::SetRefSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteReferenceType",
             (void (FSD_BinaryFile::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (FSD_BinaryFile::*)( const Standard_Integer , const Standard_Integer ) >(&FSD_BinaryFile::WriteReferenceType),
             R"#(None)#"  , py::arg("reference"),  py::arg("typeNum"))
        .def("EndWriteRefSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWriteRefSection),
             R"#(None)#" )
        .def("BeginReadRefSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadRefSection),
             R"#(None)#" )
        .def("RefSectionSize",
             (Standard_Integer (FSD_BinaryFile::*)() ) static_cast<Standard_Integer (FSD_BinaryFile::*)() >(&FSD_BinaryFile::RefSectionSize),
             R"#(None)#" )
        .def("EndReadRefSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadRefSection),
             R"#(None)#" )
        .def("BeginWriteDataSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWriteDataSection),
             R"#(None)#" )
        .def("WritePersistentObjectHeader",
             (void (FSD_BinaryFile::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (FSD_BinaryFile::*)( const Standard_Integer , const Standard_Integer ) >(&FSD_BinaryFile::WritePersistentObjectHeader),
             R"#(None)#"  , py::arg("aRef"),  py::arg("aType"))
        .def("BeginWritePersistentObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWritePersistentObjectData),
             R"#(None)#" )
        .def("BeginWriteObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginWriteObjectData),
             R"#(None)#" )
        .def("EndWriteObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWriteObjectData),
             R"#(None)#" )
        .def("EndWritePersistentObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWritePersistentObjectData),
             R"#(None)#" )
        .def("EndWriteDataSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndWriteDataSection),
             R"#(None)#" )
        .def("BeginReadDataSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadDataSection),
             R"#(None)#" )
        .def("BeginReadPersistentObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadPersistentObjectData),
             R"#(None)#" )
        .def("BeginReadObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::BeginReadObjectData),
             R"#(None)#" )
        .def("EndReadObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadObjectData),
             R"#(None)#" )
        .def("EndReadPersistentObjectData",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadPersistentObjectData),
             R"#(None)#" )
        .def("EndReadDataSection",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::EndReadDataSection),
             R"#(None)#" )
        .def("SkipObject",
             (void (FSD_BinaryFile::*)() ) static_cast<void (FSD_BinaryFile::*)() >(&FSD_BinaryFile::SkipObject),
             R"#(None)#" )
        .def("PutReference",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Integer ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Integer ) >(&FSD_BinaryFile::PutReference),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutCharacter",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Character ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Character ) >(&FSD_BinaryFile::PutCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutExtCharacter",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_ExtCharacter ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_ExtCharacter ) >(&FSD_BinaryFile::PutExtCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutInteger",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Integer ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Integer ) >(&FSD_BinaryFile::PutInteger),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutBoolean",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Boolean ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Boolean ) >(&FSD_BinaryFile::PutBoolean),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutReal",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Real ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_Real ) >(&FSD_BinaryFile::PutReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutShortReal",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_ShortReal ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( const Standard_ShortReal ) >(&FSD_BinaryFile::PutShortReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetReference",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Integer & ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Integer & ) >(&FSD_BinaryFile::GetReference),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetCharacter",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Character & ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Character & ) >(&FSD_BinaryFile::GetCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetExtCharacter",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_ExtCharacter & ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_ExtCharacter & ) >(&FSD_BinaryFile::GetExtCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetInteger",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Integer & ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Integer & ) >(&FSD_BinaryFile::GetInteger),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetBoolean",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Boolean & ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Boolean & ) >(&FSD_BinaryFile::GetBoolean),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetReal",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Real & ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_Real & ) >(&FSD_BinaryFile::GetReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetShortReal",
             (Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_ShortReal & ) ) static_cast<Storage_BaseDriver & (FSD_BinaryFile::*)( Standard_ShortReal & ) >(&FSD_BinaryFile::GetShortReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("Close",
             (Storage_Error (FSD_BinaryFile::*)() ) static_cast<Storage_Error (FSD_BinaryFile::*)() >(&FSD_BinaryFile::Close),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("ReadInfo",
             []( FSD_BinaryFile &self , TCollection_AsciiString & dbVersion,TCollection_AsciiString & date,TCollection_AsciiString & schemaName,TCollection_AsciiString & schemaVersion,TCollection_ExtendedString & appName,TCollection_AsciiString & appVersion,TCollection_ExtendedString & objectType,NCollection_Sequence<TCollection_AsciiString> & userInfo ){ Standard_Integer  nbObj; self.ReadInfo(nbObj,dbVersion,date,schemaName,schemaVersion,appName,appVersion,objectType,userInfo); return std::make_tuple(nbObj); },
             R"#(None)#"  , py::arg("dbVersion"),  py::arg("date"),  py::arg("schemaName"),  py::arg("schemaVersion"),  py::arg("appName"),  py::arg("appVersion"),  py::arg("objectType"),  py::arg("userInfo"))
        .def("ReadTypeInformations",
             []( FSD_BinaryFile &self , TCollection_AsciiString & typeName ){ Standard_Integer  typeNum; self.ReadTypeInformations(typeNum,typeName); return std::make_tuple(typeNum); },
             R"#(None)#"  , py::arg("typeName"))
        .def("ReadRoot",
             []( FSD_BinaryFile &self , TCollection_AsciiString & rootName,TCollection_AsciiString & aType ){ Standard_Integer  aRef; self.ReadRoot(rootName,aRef,aType); return std::make_tuple(aRef); },
             R"#(None)#"  , py::arg("rootName"),  py::arg("aType"))
        .def("ReadReferenceType",
             []( FSD_BinaryFile &self   ){ Standard_Integer  reference; Standard_Integer  typeNum; self.ReadReferenceType(reference,typeNum); return std::make_tuple(reference,typeNum); },
             R"#(None)#" )
        .def("ReadPersistentObjectHeader",
             []( FSD_BinaryFile &self   ){ Standard_Integer  aRef; Standard_Integer  aType; self.ReadPersistentObjectHeader(aRef,aType); return std::make_tuple(aRef,aType); },
             R"#(None)#" )
    // static methods
        .def_static("InverseInt_s",
                    (Standard_Integer (*)( const Standard_Integer ) ) static_cast<Standard_Integer (*)( const Standard_Integer ) >(&FSD_BinaryFile::InverseInt),
                    R"#(Inverse bytes in integer value)#"  , py::arg("theValue"))
        .def_static("InverseExtChar_s",
                    (Standard_ExtCharacter (*)( const Standard_ExtCharacter ) ) static_cast<Standard_ExtCharacter (*)( const Standard_ExtCharacter ) >(&FSD_BinaryFile::InverseExtChar),
                    R"#(Inverse bytes in extended character value)#"  , py::arg("theValue"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FSD_File , shared_ptr<FSD_File> , Storage_BaseDriver>>(m.attr("FSD_File"))
    // constructors
    // custom constructors
    // methods
        .def("Open",
             (Storage_Error (FSD_File::*)( const TCollection_AsciiString & , const Storage_OpenMode ) ) static_cast<Storage_Error (FSD_File::*)( const TCollection_AsciiString & , const Storage_OpenMode ) >(&FSD_File::Open),
             R"#(Assigns as aName the name of the file to be driven by this driver. aMode precises if the file is opened in read or write mode. The function returns Storage_VSOk if the file is opened correctly, or any other value of the Storage_Error enumeration which specifies the problem encountered.)#"  , py::arg("aName"),  py::arg("aMode"))
        .def("IsEnd",
             (Standard_Boolean (FSD_File::*)() ) static_cast<Standard_Boolean (FSD_File::*)() >(&FSD_File::IsEnd),
             R"#(None)#" )
        .def("Tell",
             (Storage_Position (FSD_File::*)() ) static_cast<Storage_Position (FSD_File::*)() >(&FSD_File::Tell),
             R"#(return position in the file. Return -1 upon error.)#" )
        .def("BeginWriteInfoSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginWriteInfoSection),
             R"#(None)#" )
        .def("WriteInfo",
             (void (FSD_File::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_ExtendedString & , const TCollection_AsciiString & , const TCollection_ExtendedString & ,  const NCollection_Sequence<TCollection_AsciiString> & ) ) static_cast<void (FSD_File::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_ExtendedString & , const TCollection_AsciiString & , const TCollection_ExtendedString & ,  const NCollection_Sequence<TCollection_AsciiString> & ) >(&FSD_File::WriteInfo),
             R"#(None)#"  , py::arg("nbObj"),  py::arg("dbVersion"),  py::arg("date"),  py::arg("schemaName"),  py::arg("schemaVersion"),  py::arg("appName"),  py::arg("appVersion"),  py::arg("objectType"),  py::arg("userInfo"))
        .def("EndWriteInfoSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndWriteInfoSection),
             R"#(None)#" )
        .def("BeginReadInfoSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginReadInfoSection),
             R"#(None)#" )
        .def("ReadCompleteInfo",
             (void (FSD_File::*)( std::istream & , opencascade::handle<Storage_Data> & ) ) static_cast<void (FSD_File::*)( std::istream & , opencascade::handle<Storage_Data> & ) >(&FSD_File::ReadCompleteInfo),
             R"#(None)#"  , py::arg("theIStream"),  py::arg("theData"))
        .def("EndReadInfoSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndReadInfoSection),
             R"#(None)#" )
        .def("BeginWriteCommentSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginWriteCommentSection),
             R"#(None)#" )
        .def("WriteComment",
             (void (FSD_File::*)(  const NCollection_Sequence<TCollection_ExtendedString> & ) ) static_cast<void (FSD_File::*)(  const NCollection_Sequence<TCollection_ExtendedString> & ) >(&FSD_File::WriteComment),
             R"#(None)#"  , py::arg("userComments"))
        .def("EndWriteCommentSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndWriteCommentSection),
             R"#(None)#" )
        .def("BeginReadCommentSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginReadCommentSection),
             R"#(None)#" )
        .def("ReadComment",
             (void (FSD_File::*)( NCollection_Sequence<TCollection_ExtendedString> & ) ) static_cast<void (FSD_File::*)( NCollection_Sequence<TCollection_ExtendedString> & ) >(&FSD_File::ReadComment),
             R"#(None)#"  , py::arg("userComments"))
        .def("EndReadCommentSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndReadCommentSection),
             R"#(None)#" )
        .def("BeginWriteTypeSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginWriteTypeSection),
             R"#(None)#" )
        .def("SetTypeSectionSize",
             (void (FSD_File::*)( const Standard_Integer ) ) static_cast<void (FSD_File::*)( const Standard_Integer ) >(&FSD_File::SetTypeSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteTypeInformations",
             (void (FSD_File::*)( const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (FSD_File::*)( const Standard_Integer , const TCollection_AsciiString & ) >(&FSD_File::WriteTypeInformations),
             R"#(None)#"  , py::arg("typeNum"),  py::arg("typeName"))
        .def("EndWriteTypeSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndWriteTypeSection),
             R"#(None)#" )
        .def("BeginReadTypeSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginReadTypeSection),
             R"#(None)#" )
        .def("TypeSectionSize",
             (Standard_Integer (FSD_File::*)() ) static_cast<Standard_Integer (FSD_File::*)() >(&FSD_File::TypeSectionSize),
             R"#(None)#" )
        .def("EndReadTypeSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndReadTypeSection),
             R"#(None)#" )
        .def("BeginWriteRootSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginWriteRootSection),
             R"#(None)#" )
        .def("SetRootSectionSize",
             (void (FSD_File::*)( const Standard_Integer ) ) static_cast<void (FSD_File::*)( const Standard_Integer ) >(&FSD_File::SetRootSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteRoot",
             (void (FSD_File::*)( const TCollection_AsciiString & , const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (FSD_File::*)( const TCollection_AsciiString & , const Standard_Integer , const TCollection_AsciiString & ) >(&FSD_File::WriteRoot),
             R"#(None)#"  , py::arg("rootName"),  py::arg("aRef"),  py::arg("aType"))
        .def("EndWriteRootSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndWriteRootSection),
             R"#(None)#" )
        .def("BeginReadRootSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginReadRootSection),
             R"#(None)#" )
        .def("RootSectionSize",
             (Standard_Integer (FSD_File::*)() ) static_cast<Standard_Integer (FSD_File::*)() >(&FSD_File::RootSectionSize),
             R"#(None)#" )
        .def("EndReadRootSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndReadRootSection),
             R"#(None)#" )
        .def("BeginWriteRefSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginWriteRefSection),
             R"#(None)#" )
        .def("SetRefSectionSize",
             (void (FSD_File::*)( const Standard_Integer ) ) static_cast<void (FSD_File::*)( const Standard_Integer ) >(&FSD_File::SetRefSectionSize),
             R"#(None)#"  , py::arg("aSize"))
        .def("WriteReferenceType",
             (void (FSD_File::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (FSD_File::*)( const Standard_Integer , const Standard_Integer ) >(&FSD_File::WriteReferenceType),
             R"#(None)#"  , py::arg("reference"),  py::arg("typeNum"))
        .def("EndWriteRefSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndWriteRefSection),
             R"#(None)#" )
        .def("BeginReadRefSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginReadRefSection),
             R"#(None)#" )
        .def("RefSectionSize",
             (Standard_Integer (FSD_File::*)() ) static_cast<Standard_Integer (FSD_File::*)() >(&FSD_File::RefSectionSize),
             R"#(None)#" )
        .def("EndReadRefSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndReadRefSection),
             R"#(None)#" )
        .def("BeginWriteDataSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginWriteDataSection),
             R"#(None)#" )
        .def("WritePersistentObjectHeader",
             (void (FSD_File::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (FSD_File::*)( const Standard_Integer , const Standard_Integer ) >(&FSD_File::WritePersistentObjectHeader),
             R"#(None)#"  , py::arg("aRef"),  py::arg("aType"))
        .def("BeginWritePersistentObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::BeginWritePersistentObjectData),
             R"#(None)#" )
        .def("BeginWriteObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::BeginWriteObjectData),
             R"#(None)#" )
        .def("EndWriteObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::EndWriteObjectData),
             R"#(None)#" )
        .def("EndWritePersistentObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::EndWritePersistentObjectData),
             R"#(None)#" )
        .def("EndWriteDataSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndWriteDataSection),
             R"#(None)#" )
        .def("BeginReadDataSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::BeginReadDataSection),
             R"#(None)#" )
        .def("BeginReadPersistentObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::BeginReadPersistentObjectData),
             R"#(None)#" )
        .def("BeginReadObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::BeginReadObjectData),
             R"#(None)#" )
        .def("EndReadObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::EndReadObjectData),
             R"#(None)#" )
        .def("EndReadPersistentObjectData",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::EndReadPersistentObjectData),
             R"#(None)#" )
        .def("EndReadDataSection",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::EndReadDataSection),
             R"#(None)#" )
        .def("SkipObject",
             (void (FSD_File::*)() ) static_cast<void (FSD_File::*)() >(&FSD_File::SkipObject),
             R"#(None)#" )
        .def("PutReference",
             (Storage_BaseDriver & (FSD_File::*)( const Standard_Integer ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( const Standard_Integer ) >(&FSD_File::PutReference),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutCharacter",
             (Storage_BaseDriver & (FSD_File::*)( const Standard_Character ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( const Standard_Character ) >(&FSD_File::PutCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutExtCharacter",
             (Storage_BaseDriver & (FSD_File::*)( const Standard_ExtCharacter ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( const Standard_ExtCharacter ) >(&FSD_File::PutExtCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutInteger",
             (Storage_BaseDriver & (FSD_File::*)( const Standard_Integer ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( const Standard_Integer ) >(&FSD_File::PutInteger),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutBoolean",
             (Storage_BaseDriver & (FSD_File::*)( const Standard_Boolean ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( const Standard_Boolean ) >(&FSD_File::PutBoolean),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutReal",
             (Storage_BaseDriver & (FSD_File::*)( const Standard_Real ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( const Standard_Real ) >(&FSD_File::PutReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("PutShortReal",
             (Storage_BaseDriver & (FSD_File::*)( const Standard_ShortReal ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( const Standard_ShortReal ) >(&FSD_File::PutShortReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetReference",
             (Storage_BaseDriver & (FSD_File::*)( Standard_Integer & ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( Standard_Integer & ) >(&FSD_File::GetReference),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetCharacter",
             (Storage_BaseDriver & (FSD_File::*)( Standard_Character & ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( Standard_Character & ) >(&FSD_File::GetCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetExtCharacter",
             (Storage_BaseDriver & (FSD_File::*)( Standard_ExtCharacter & ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( Standard_ExtCharacter & ) >(&FSD_File::GetExtCharacter),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetInteger",
             (Storage_BaseDriver & (FSD_File::*)( Standard_Integer & ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( Standard_Integer & ) >(&FSD_File::GetInteger),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetBoolean",
             (Storage_BaseDriver & (FSD_File::*)( Standard_Boolean & ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( Standard_Boolean & ) >(&FSD_File::GetBoolean),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetReal",
             (Storage_BaseDriver & (FSD_File::*)( Standard_Real & ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( Standard_Real & ) >(&FSD_File::GetReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("GetShortReal",
             (Storage_BaseDriver & (FSD_File::*)( Standard_ShortReal & ) ) static_cast<Storage_BaseDriver & (FSD_File::*)( Standard_ShortReal & ) >(&FSD_File::GetShortReal),
             R"#(None)#"  , py::arg("aValue"))
        .def("Close",
             (Storage_Error (FSD_File::*)() ) static_cast<Storage_Error (FSD_File::*)() >(&FSD_File::Close),
             R"#(Closes the file driven by this driver. This file was opened by the last call to the function Open. The function returns Storage_VSOk if the closure is correctly done, or any other value of the Storage_Error enumeration which specifies the problem encountered.)#" )
    // methods using call by reference i.s.o. return
        .def("ReadInfo",
             []( FSD_File &self , TCollection_AsciiString & dbVersion,TCollection_AsciiString & date,TCollection_AsciiString & schemaName,TCollection_AsciiString & schemaVersion,TCollection_ExtendedString & appName,TCollection_AsciiString & appVersion,TCollection_ExtendedString & objectType,NCollection_Sequence<TCollection_AsciiString> & userInfo ){ Standard_Integer  nbObj; self.ReadInfo(nbObj,dbVersion,date,schemaName,schemaVersion,appName,appVersion,objectType,userInfo); return std::make_tuple(nbObj); },
             R"#(None)#"  , py::arg("dbVersion"),  py::arg("date"),  py::arg("schemaName"),  py::arg("schemaVersion"),  py::arg("appName"),  py::arg("appVersion"),  py::arg("objectType"),  py::arg("userInfo"))
        .def("ReadTypeInformations",
             []( FSD_File &self , TCollection_AsciiString & typeName ){ Standard_Integer  typeNum; self.ReadTypeInformations(typeNum,typeName); return std::make_tuple(typeNum); },
             R"#(None)#"  , py::arg("typeName"))
        .def("ReadRoot",
             []( FSD_File &self , TCollection_AsciiString & rootName,TCollection_AsciiString & aType ){ Standard_Integer  aRef; self.ReadRoot(rootName,aRef,aType); return std::make_tuple(aRef); },
             R"#(None)#"  , py::arg("rootName"),  py::arg("aType"))
        .def("ReadReferenceType",
             []( FSD_File &self   ){ Standard_Integer  reference; Standard_Integer  typeNum; self.ReadReferenceType(reference,typeNum); return std::make_tuple(reference,typeNum); },
             R"#(None)#" )
        .def("ReadPersistentObjectHeader",
             []( FSD_File &self   ){ Standard_Integer  aRef; Standard_Integer  aType; self.ReadPersistentObjectHeader(aRef,aType); return std::make_tuple(aRef,aType); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<FSD_FileHeader , shared_ptr<FSD_FileHeader>>(m,"FSD_FileHeader");

    static_cast<py::class_<FSD_FileHeader , shared_ptr<FSD_FileHeader> >>(m.attr("FSD_FileHeader"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FSD_CmpFile , shared_ptr<FSD_CmpFile> , FSD_File>>(m.attr("FSD_CmpFile"))
    // constructors
    // custom constructors
    // methods
        .def("Open",
             (Storage_Error (FSD_CmpFile::*)( const TCollection_AsciiString & , const Storage_OpenMode ) ) static_cast<Storage_Error (FSD_CmpFile::*)( const TCollection_AsciiString & , const Storage_OpenMode ) >(&FSD_CmpFile::Open),
             R"#(None)#"  , py::arg("aName"),  py::arg("aMode"))
        .def("BeginWriteInfoSection",
             (Storage_Error (FSD_CmpFile::*)() ) static_cast<Storage_Error (FSD_CmpFile::*)() >(&FSD_CmpFile::BeginWriteInfoSection),
             R"#(None)#" )
        .def("BeginReadInfoSection",
             (Storage_Error (FSD_CmpFile::*)() ) static_cast<Storage_Error (FSD_CmpFile::*)() >(&FSD_CmpFile::BeginReadInfoSection),
             R"#(None)#" )
        .def("WritePersistentObjectHeader",
             (void (FSD_CmpFile::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (FSD_CmpFile::*)( const Standard_Integer , const Standard_Integer ) >(&FSD_CmpFile::WritePersistentObjectHeader),
             R"#(None)#"  , py::arg("aRef"),  py::arg("aType"))
        .def("BeginWritePersistentObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::BeginWritePersistentObjectData),
             R"#(None)#" )
        .def("BeginWriteObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::BeginWriteObjectData),
             R"#(None)#" )
        .def("EndWriteObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::EndWriteObjectData),
             R"#(None)#" )
        .def("EndWritePersistentObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::EndWritePersistentObjectData),
             R"#(None)#" )
        .def("BeginReadPersistentObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::BeginReadPersistentObjectData),
             R"#(None)#" )
        .def("BeginReadObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::BeginReadObjectData),
             R"#(None)#" )
        .def("EndReadObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::EndReadObjectData),
             R"#(None)#" )
        .def("EndReadPersistentObjectData",
             (void (FSD_CmpFile::*)() ) static_cast<void (FSD_CmpFile::*)() >(&FSD_CmpFile::EndReadPersistentObjectData),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("ReadPersistentObjectHeader",
             []( FSD_CmpFile &self   ){ Standard_Integer  aRef; Standard_Integer  aType; self.ReadPersistentObjectHeader(aRef,aType); return std::make_tuple(aRef,aType); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/FSD_BStream.hxx
// ./opencascade/FSD_FileHeader.hxx
// ./opencascade/FSD_File.hxx
// ./opencascade/FSD_BinaryFile.hxx
// ./opencascade/FSD_FStream.hxx
// ./opencascade/FSD_CmpFile.hxx
// ./opencascade/FSD_Base64Decoder.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
