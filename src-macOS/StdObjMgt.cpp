
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdObjMgt_Persistent.hxx>
#include <StdObjMgt_ReadData.hxx>
#include <StdObjMgt_WriteData.hxx>
#include <TDocStd_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>

// module includes
#include <StdObjMgt_Attribute.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <StdObjMgt_ReadData.hxx>
#include <StdObjMgt_SharedObject.hxx>
#include <StdObjMgt_TransientPersistentMap.hxx>
#include <StdObjMgt_WriteData.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdObjMgt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdObjMgt"));


//Python trampoline classes
    class Py_StdObjMgt_Persistent : public StdObjMgt_Persistent{
    public:
        using StdObjMgt_Persistent::StdObjMgt_Persistent;


        // public pure virtual
        void Read(StdObjMgt_ReadData & theReadData) override { PYBIND11_OVERLOAD_PURE(void,StdObjMgt_Persistent,Read,theReadData) };
        void Write(StdObjMgt_WriteData & theWriteData) const  override { PYBIND11_OVERLOAD_PURE(void,StdObjMgt_Persistent,Write,theWriteData) };
        void PChildren(NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const  override { PYBIND11_OVERLOAD_PURE(void,StdObjMgt_Persistent,PChildren,) };
        Standard_CString PName() const  override { PYBIND11_OVERLOAD_PURE(Standard_CString,StdObjMgt_Persistent,PName,) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<StdObjMgt_MapOfInstantiators , shared_ptr<StdObjMgt_MapOfInstantiators>>(m,"StdObjMgt_MapOfInstantiators");

    static_cast<py::class_<StdObjMgt_MapOfInstantiators , shared_ptr<StdObjMgt_MapOfInstantiators> >>(m.attr("StdObjMgt_MapOfInstantiators"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdObjMgt_Persistent ,opencascade::handle<StdObjMgt_Persistent>,Py_StdObjMgt_Persistent , Standard_Transient>>(m.attr("StdObjMgt_Persistent"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdObjMgt_Persistent::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdObjMgt_Persistent::*)( StdObjMgt_ReadData & ) >(&StdObjMgt_Persistent::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdObjMgt_Persistent::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdObjMgt_Persistent::*)( StdObjMgt_WriteData & ) const>(&StdObjMgt_Persistent::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdObjMgt_Persistent::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdObjMgt_Persistent::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdObjMgt_Persistent::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg(""))
        .def("PName",
             (Standard_CString (StdObjMgt_Persistent::*)() const) static_cast<Standard_CString (StdObjMgt_Persistent::*)() const>(&StdObjMgt_Persistent::PName),
             R"#(Returns persistent type name)#" )
        .def("ImportDocument",
             (void (StdObjMgt_Persistent::*)( const opencascade::handle<TDocStd_Document> & ) const) static_cast<void (StdObjMgt_Persistent::*)( const opencascade::handle<TDocStd_Document> & ) const>(&StdObjMgt_Persistent::ImportDocument),
             R"#(Import transient document from the persistent data (to be overriden by document class; does nothing by default for other classes).)#"  , py::arg("theDocument"))
        .def("CreateAttribute",
             (opencascade::handle<TDF_Attribute> (StdObjMgt_Persistent::*)() ) static_cast<opencascade::handle<TDF_Attribute> (StdObjMgt_Persistent::*)() >(&StdObjMgt_Persistent::CreateAttribute),
             R"#(Create an empty transient attribuite (to be overriden by attribute classes; does nothing and returns a null handle by default for other classes).)#" )
        .def("GetAttribute",
             (opencascade::handle<TDF_Attribute> (StdObjMgt_Persistent::*)() const) static_cast<opencascade::handle<TDF_Attribute> (StdObjMgt_Persistent::*)() const>(&StdObjMgt_Persistent::GetAttribute),
             R"#(Get transient attribuite for the persistent data (to be overriden by attribute classes; returns a null handle by default for non-attribute classes).)#" )
        .def("ImportAttribute",
             (void (StdObjMgt_Persistent::*)() ) static_cast<void (StdObjMgt_Persistent::*)() >(&StdObjMgt_Persistent::ImportAttribute),
             R"#(Import transient attribuite from the persistent data (to be overriden by attribute classes; does nothing by default for non-attribute classes).)#" )
        .def("AsciiString",
             (opencascade::handle<TCollection_HAsciiString> (StdObjMgt_Persistent::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StdObjMgt_Persistent::*)() const>(&StdObjMgt_Persistent::AsciiString),
             R"#(Get referenced ASCII string (to be overriden by ASCII string class; returns a null handle by default for other classes).)#" )
        .def("ExtString",
             (opencascade::handle<TCollection_HExtendedString> (StdObjMgt_Persistent::*)() const) static_cast<opencascade::handle<TCollection_HExtendedString> (StdObjMgt_Persistent::*)() const>(&StdObjMgt_Persistent::ExtString),
             R"#(Get referenced extended string (to be overriden by extended string class; returns a null handle by default for other classes).)#" )
        .def("Label",
             (TDF_Label (StdObjMgt_Persistent::*)( const opencascade::handle<TDF_Data> & ) const) static_cast<TDF_Label (StdObjMgt_Persistent::*)( const opencascade::handle<TDF_Data> & ) const>(&StdObjMgt_Persistent::Label),
             R"#(Get a label expressed by referenced extended string (to be overriden by extended string class; returns a null label by default for other classes).)#"  , py::arg("theDF"))
        .def("TypeNum",
             (Standard_Integer (StdObjMgt_Persistent::*)() const) static_cast<Standard_Integer (StdObjMgt_Persistent::*)() const>(&StdObjMgt_Persistent::TypeNum),
             R"#(Returns the assigned persistent type number)#" )
        .def("TypeNum",
             (void (StdObjMgt_Persistent::*)( Standard_Integer ) ) static_cast<void (StdObjMgt_Persistent::*)( Standard_Integer ) >(&StdObjMgt_Persistent::TypeNum),
             R"#(Assigns a persistent type number to the object)#"  , py::arg("theTypeNum"))
        .def("RefNum",
             (Standard_Integer (StdObjMgt_Persistent::*)() const) static_cast<Standard_Integer (StdObjMgt_Persistent::*)() const>(&StdObjMgt_Persistent::RefNum),
             R"#(Returns the object reference number)#" )
        .def("RefNum",
             (void (StdObjMgt_Persistent::*)( Standard_Integer ) ) static_cast<void (StdObjMgt_Persistent::*)( Standard_Integer ) >(&StdObjMgt_Persistent::RefNum),
             R"#(Sets an object reference number)#"  , py::arg("theRefNum"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdObjMgt_ReadData , shared_ptr<StdObjMgt_ReadData> >>(m.attr("StdObjMgt_ReadData"))
    // constructors
    // custom constructors
    // methods
        .def("PersistentObject",
             (opencascade::handle<StdObjMgt_Persistent> (StdObjMgt_ReadData::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StdObjMgt_Persistent> (StdObjMgt_ReadData::*)( const Standard_Integer ) const>(&StdObjMgt_ReadData::PersistentObject),
             R"#(None)#"  , py::arg("theRef"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdObjMgt_SharedObject , shared_ptr<StdObjMgt_SharedObject>>(m,"StdObjMgt_SharedObject");

    static_cast<py::class_<StdObjMgt_SharedObject , shared_ptr<StdObjMgt_SharedObject> >>(m.attr("StdObjMgt_SharedObject"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdObjMgt_WriteData , shared_ptr<StdObjMgt_WriteData> >>(m.attr("StdObjMgt_WriteData"))
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
// ./opencascade/StdObjMgt_TransientPersistentMap.hxx
// ./opencascade/StdObjMgt_Persistent.hxx
// ./opencascade/StdObjMgt_ReadData.hxx
// ./opencascade/StdObjMgt_Attribute.hxx
// ./opencascade/StdObjMgt_WriteData.hxx
// ./opencascade/StdObjMgt_SharedObject.hxx
// ./opencascade/StdObjMgt_MapOfInstantiators.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
