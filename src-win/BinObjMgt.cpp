
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>

// module includes
#include <BinObjMgt_PByte.hxx>
#include <BinObjMgt_PChar.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinObjMgt_PExtChar.hxx>
#include <BinObjMgt_PInteger.hxx>
#include <BinObjMgt_PReal.hxx>
#include <BinObjMgt_PShortReal.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinObjMgt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinObjMgt"));


//Python trampoline classes

// classes


    static_cast<py::class_<BinObjMgt_Persistent , shared_ptr<BinObjMgt_Persistent> >>(m.attr("BinObjMgt_Persistent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("PutCharacter",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Character ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Character ) >(&BinObjMgt_Persistent::PutCharacter),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutByte",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Byte ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Byte ) >(&BinObjMgt_Persistent::PutByte),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutExtCharacter",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_ExtCharacter ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_ExtCharacter ) >(&BinObjMgt_Persistent::PutExtCharacter),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutInteger",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::PutInteger),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutBoolean",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) >(&BinObjMgt_Persistent::PutBoolean),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutReal",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Real ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Real ) >(&BinObjMgt_Persistent::PutReal),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutShortReal",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_ShortReal ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_ShortReal ) >(&BinObjMgt_Persistent::PutShortReal),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutCString",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_CString ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_CString ) >(&BinObjMgt_Persistent::PutCString),
             R"#(Offset in output buffer is not aligned)#"  , py::arg("theValue"))
        .def("PutAsciiString",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const TCollection_AsciiString & ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const TCollection_AsciiString & ) >(&BinObjMgt_Persistent::PutAsciiString),
             R"#(Offset in output buffer is word-aligned)#"  , py::arg("theValue"))
        .def("PutExtendedString",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const TCollection_ExtendedString & ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const TCollection_ExtendedString & ) >(&BinObjMgt_Persistent::PutExtendedString),
             R"#(Offset in output buffer is word-aligned)#"  , py::arg("theValue"))
        .def("PutLabel",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const TDF_Label & ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const TDF_Label & ) >(&BinObjMgt_Persistent::PutLabel),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutGUID",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_GUID & ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_GUID & ) >(&BinObjMgt_Persistent::PutGUID),
             R"#(None)#"  , py::arg("theValue"))
        .def("PutCharArray",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PChar , const Standard_Integer ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PChar , const Standard_Integer ) >(&BinObjMgt_Persistent::PutCharArray),
             R"#(Put C array of char, theLength is the number of elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("PutByteArray",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PByte , const Standard_Integer ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PByte , const Standard_Integer ) >(&BinObjMgt_Persistent::PutByteArray),
             R"#(Put C array of unsigned chars, theLength is the number of elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("PutExtCharArray",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PExtChar , const Standard_Integer ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PExtChar , const Standard_Integer ) >(&BinObjMgt_Persistent::PutExtCharArray),
             R"#(Put C array of ExtCharacter, theLength is the number of elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("PutIntArray",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PInteger , const Standard_Integer ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PInteger , const Standard_Integer ) >(&BinObjMgt_Persistent::PutIntArray),
             R"#(Put C array of int, theLength is the number of elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("PutRealArray",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PReal , const Standard_Integer ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PReal , const Standard_Integer ) >(&BinObjMgt_Persistent::PutRealArray),
             R"#(Put C array of double, theLength is the number of elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("PutShortRealArray",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PShortReal , const Standard_Integer ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PShortReal , const Standard_Integer ) >(&BinObjMgt_Persistent::PutShortRealArray),
             R"#(Put C array of float, theLength is the number of elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("GetCharacter",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Character & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Character & ) const>(&BinObjMgt_Persistent::GetCharacter),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetByte",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Byte & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Byte & ) const>(&BinObjMgt_Persistent::GetByte),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetExtCharacter",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_ExtCharacter & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_ExtCharacter & ) const>(&BinObjMgt_Persistent::GetExtCharacter),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetInteger",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Integer & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Integer & ) const>(&BinObjMgt_Persistent::GetInteger),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetBoolean",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const>(&BinObjMgt_Persistent::GetBoolean),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetReal",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Real & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Real & ) const>(&BinObjMgt_Persistent::GetReal),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetShortReal",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_ShortReal & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_ShortReal & ) const>(&BinObjMgt_Persistent::GetShortReal),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetAsciiString",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( TCollection_AsciiString & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( TCollection_AsciiString & ) const>(&BinObjMgt_Persistent::GetAsciiString),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetExtendedString",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( TCollection_ExtendedString & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( TCollection_ExtendedString & ) const>(&BinObjMgt_Persistent::GetExtendedString),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetLabel",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const opencascade::handle<TDF_Data> & , TDF_Label & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const opencascade::handle<TDF_Data> & , TDF_Label & ) const>(&BinObjMgt_Persistent::GetLabel),
             R"#(None)#"  , py::arg("theDS"),  py::arg("theValue"))
        .def("GetGUID",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_GUID & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_GUID & ) const>(&BinObjMgt_Persistent::GetGUID),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetCharArray",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PChar , const Standard_Integer ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PChar , const Standard_Integer ) const>(&BinObjMgt_Persistent::GetCharArray),
             R"#(Get C array of char, theLength is the number of elements; theArray must point to a space enough to place theLength elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("GetByteArray",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PByte , const Standard_Integer ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PByte , const Standard_Integer ) const>(&BinObjMgt_Persistent::GetByteArray),
             R"#(Get C array of unsigned chars, theLength is the number of elements; theArray must point to a space enough to place theLength elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("GetExtCharArray",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PExtChar , const Standard_Integer ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PExtChar , const Standard_Integer ) const>(&BinObjMgt_Persistent::GetExtCharArray),
             R"#(Get C array of ExtCharacter, theLength is the number of elements; theArray must point to a space enough to place theLength elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("GetIntArray",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PInteger , const Standard_Integer ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PInteger , const Standard_Integer ) const>(&BinObjMgt_Persistent::GetIntArray),
             R"#(Get C array of int, theLength is the number of elements; theArray must point to a space enough to place theLength elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("GetRealArray",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PReal , const Standard_Integer ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PReal , const Standard_Integer ) const>(&BinObjMgt_Persistent::GetRealArray),
             R"#(Get C array of double, theLength is the number of elements; theArray must point to a space enough to place theLength elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("GetShortRealArray",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PShortReal , const Standard_Integer ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const BinObjMgt_PShortReal , const Standard_Integer ) const>(&BinObjMgt_Persistent::GetShortRealArray),
             R"#(Get C array of float, theLength is the number of elements; theArray must point to a space enough to place theLength elements)#"  , py::arg("theArray"),  py::arg("theLength"))
        .def("Position",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Position),
             R"#(Tells the current position for get/put)#" )
        .def("SetPosition",
             (Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const>(&BinObjMgt_Persistent::SetPosition),
             R"#(Sets the current position for get/put. Resets an error state depending on the validity of thePos. Returns the new state (value of IsOK()))#"  , py::arg("thePos"))
        .def("Truncate",
             (void (BinObjMgt_Persistent::*)() ) static_cast<void (BinObjMgt_Persistent::*)() >(&BinObjMgt_Persistent::Truncate),
             R"#(Truncates the buffer by current position, i.e. updates mySize)#" )
        .def("IsError",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsError),
             R"#(Indicates an error after Get methods or SetPosition)#" )
        .def("IsOK",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsOK),
             R"#(Indicates a good state after Get methods or SetPosition)#" )
        .def("Init",
             (void (BinObjMgt_Persistent::*)() ) static_cast<void (BinObjMgt_Persistent::*)() >(&BinObjMgt_Persistent::Init),
             R"#(Initializes me to reuse again)#" )
        .def("SetId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetId),
             R"#(Sets the Id of the object)#"  , py::arg("theId"))
        .def("SetTypeId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetTypeId),
             R"#(Sets the Id of the type of the object)#"  , py::arg("theId"))
        .def("Id",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Id),
             R"#(Returns the Id of the object)#" )
        .def("TypeId",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::TypeId),
             R"#(Returns the Id of the type of the object)#" )
        .def("Length",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Length),
             R"#(Returns the length of data)#" )
        .def("Write",
             (Standard_OStream & (BinObjMgt_Persistent::*)( std::ostream & ) ) static_cast<Standard_OStream & (BinObjMgt_Persistent::*)( std::ostream & ) >(&BinObjMgt_Persistent::Write),
             R"#(Stores <me> to the stream. inline Standard_OStream& operator<< (Standard_OStream&, BinObjMgt_Persistent&) is also available)#"  , py::arg("theOS"))
        .def("Read",
             (Standard_IStream & (BinObjMgt_Persistent::*)( std::istream & ) ) static_cast<Standard_IStream & (BinObjMgt_Persistent::*)( std::istream & ) >(&BinObjMgt_Persistent::Read),
             R"#(Retrieves <me> from the stream. inline Standard_IStream& operator>> (Standard_IStream&, BinObjMgt_Persistent&) is also available)#"  , py::arg("theIS"))
        .def("Destroy",
             (void (BinObjMgt_Persistent::*)() ) static_cast<void (BinObjMgt_Persistent::*)() >(&BinObjMgt_Persistent::Destroy),
             R"#(Frees the allocated memory; This object can be reused after call to Init)#" )
        .def("SetId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetId),
             R"#(Sets the Id of the object)#"  , py::arg("theId"))
        .def("SetTypeId",
             (void (BinObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (BinObjMgt_Persistent::*)( const Standard_Integer ) >(&BinObjMgt_Persistent::SetTypeId),
             R"#(Sets the Id of the type of the object)#"  , py::arg("theTypeId"))
        .def("Id",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Id),
             R"#(Returns the Id of the object)#" )
        .def("TypeId",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::TypeId),
             R"#(Returns the Id of the type of the object)#" )
        .def("Length",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Length),
             R"#(Returns the length of data)#" )
        .def("Position",
             (Standard_Integer (BinObjMgt_Persistent::*)() const) static_cast<Standard_Integer (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::Position),
             R"#(Tells the current position for get/put)#" )
        .def("SetPosition",
             (Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)( const Standard_Integer ) const>(&BinObjMgt_Persistent::SetPosition),
             R"#(Sets the current position for get/put. Resets an error state depending on the validity of thePos. Returns the new state (value of IsOK()))#"  , py::arg("thePos"))
        .def("Truncate",
             (void (BinObjMgt_Persistent::*)() ) static_cast<void (BinObjMgt_Persistent::*)() >(&BinObjMgt_Persistent::Truncate),
             R"#(Truncates the buffer by current position, i.e. updates mySize)#" )
        .def("IsError",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsError),
             R"#(Indicates an error after Get methods or SetPosition)#" )
        .def("IsOK",
             (Standard_Boolean (BinObjMgt_Persistent::*)() const) static_cast<Standard_Boolean (BinObjMgt_Persistent::*)() const>(&BinObjMgt_Persistent::IsOK),
             R"#(Indicates a good state after Get methods or SetPosition)#" )
        .def("PutBoolean",
             (BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) ) static_cast<BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( const Standard_Boolean ) >(&BinObjMgt_Persistent::PutBoolean),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetBoolean",
             (const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const) static_cast<const BinObjMgt_Persistent & (BinObjMgt_Persistent::*)( Standard_Boolean & ) const>(&BinObjMgt_Persistent::GetBoolean),
             R"#(None)#"  , py::arg("theValue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BinObjMgt_RRelocationTable , shared_ptr<BinObjMgt_RRelocationTable>>(m,"BinObjMgt_RRelocationTable");

    static_cast<py::class_<BinObjMgt_RRelocationTable , shared_ptr<BinObjMgt_RRelocationTable> >>(m.attr("BinObjMgt_RRelocationTable"))
    // constructors
    // custom constructors
    // methods
        .def("GetHeaderData",
             (const opencascade::handle<Storage_HeaderData> & (BinObjMgt_RRelocationTable::*)() const) static_cast<const opencascade::handle<Storage_HeaderData> & (BinObjMgt_RRelocationTable::*)() const>(&BinObjMgt_RRelocationTable::GetHeaderData),
             R"#(Returns a handle to the header data of the file that is begin read)#" )
        .def("SetHeaderData",
             (void (BinObjMgt_RRelocationTable::*)( const opencascade::handle<Storage_HeaderData> & ) ) static_cast<void (BinObjMgt_RRelocationTable::*)( const opencascade::handle<Storage_HeaderData> & ) >(&BinObjMgt_RRelocationTable::SetHeaderData),
             R"#(Sets the storage header data.)#"  , py::arg("theHeaderData"))
        .def("Clear",
             (void (BinObjMgt_RRelocationTable::*)( const Standard_Boolean ) ) static_cast<void (BinObjMgt_RRelocationTable::*)( const Standard_Boolean ) >(&BinObjMgt_RRelocationTable::Clear),
             R"#(None)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BinObjMgt_PExtChar.hxx
// ./opencascade\BinObjMgt_PInteger.hxx
// ./opencascade\BinObjMgt_SRelocationTable.hxx
// ./opencascade\BinObjMgt_PReal.hxx
// ./opencascade\BinObjMgt_PChar.hxx
// ./opencascade\BinObjMgt_PShortReal.hxx
// ./opencascade\BinObjMgt_Persistent.hxx
// ./opencascade\BinObjMgt_PByte.hxx
// ./opencascade\BinObjMgt_RRelocationTable.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
