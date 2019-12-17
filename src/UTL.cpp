
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_ExtendedString.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_Data.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_GUID.hxx>
#include <Resource_Manager.hxx>

// module includes
#include <UTL.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_UTL(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("UTL"));


//Python trampoline classes

// classes

    register_default_constructor<UTL ,std::unique_ptr<UTL>>(m,"UTL");

    static_cast<py::class_<UTL ,std::unique_ptr<UTL>  >>(m.attr("UTL"))
        .def_static("xgetenv_s",
                    (TCollection_ExtendedString (*)( const Standard_CString  ) ) static_cast<TCollection_ExtendedString (*)( const Standard_CString  ) >(&UTL::xgetenv),
                    R"#(None)#"  , py::arg("aCString"))
        .def_static("OpenFile_s",
                    (Storage_Error (*)( Storage_BaseDriver & ,  const TCollection_ExtendedString & ,  const Storage_OpenMode  ) ) static_cast<Storage_Error (*)( Storage_BaseDriver & ,  const TCollection_ExtendedString & ,  const Storage_OpenMode  ) >(&UTL::OpenFile),
                    R"#(None)#"  , py::arg("aFile"),  py::arg("aName"),  py::arg("aMode"))
        .def_static("AddToUserInfo_s",
                    (void (*)( const opencascade::handle<Storage_Data> & ,  const TCollection_ExtendedString &  ) ) static_cast<void (*)( const opencascade::handle<Storage_Data> & ,  const TCollection_ExtendedString &  ) >(&UTL::AddToUserInfo),
                    R"#(None)#"  , py::arg("aData"),  py::arg("anInfo"))
        .def_static("Path_s",
                    (OSD_Path (*)( const TCollection_ExtendedString &  ) ) static_cast<OSD_Path (*)( const TCollection_ExtendedString &  ) >(&UTL::Path),
                    R"#(None)#"  , py::arg("aFileName"))
        .def_static("Disk_s",
                    (TCollection_ExtendedString (*)( const OSD_Path &  ) ) static_cast<TCollection_ExtendedString (*)( const OSD_Path &  ) >(&UTL::Disk),
                    R"#(None)#"  , py::arg("aPath"))
        .def_static("Trek_s",
                    (TCollection_ExtendedString (*)( const OSD_Path &  ) ) static_cast<TCollection_ExtendedString (*)( const OSD_Path &  ) >(&UTL::Trek),
                    R"#(None)#"  , py::arg("aPath"))
        .def_static("Name_s",
                    (TCollection_ExtendedString (*)( const OSD_Path &  ) ) static_cast<TCollection_ExtendedString (*)( const OSD_Path &  ) >(&UTL::Name),
                    R"#(None)#"  , py::arg("aPath"))
        .def_static("Extension_s",
                    (TCollection_ExtendedString (*)( const OSD_Path &  ) ) static_cast<TCollection_ExtendedString (*)( const OSD_Path &  ) >(&UTL::Extension),
                    R"#(None)#"  , py::arg("aPath"))
        .def_static("FileIterator_s",
                    (OSD_FileIterator (*)( const OSD_Path & ,  const TCollection_ExtendedString &  ) ) static_cast<OSD_FileIterator (*)( const OSD_Path & ,  const TCollection_ExtendedString &  ) >(&UTL::FileIterator),
                    R"#(None)#"  , py::arg("aPath"),  py::arg("aMask"))
        .def_static("Extension_s",
                    (TCollection_ExtendedString (*)( const TCollection_ExtendedString &  ) ) static_cast<TCollection_ExtendedString (*)( const TCollection_ExtendedString &  ) >(&UTL::Extension),
                    R"#(None)#"  , py::arg("aFileName"))
        .def_static("LocalHost_s",
                    (TCollection_ExtendedString (*)() ) static_cast<TCollection_ExtendedString (*)() >(&UTL::LocalHost),
                    R"#(None)#" )
        .def_static("ExtendedString_s",
                    (TCollection_ExtendedString (*)( const TCollection_AsciiString &  ) ) static_cast<TCollection_ExtendedString (*)( const TCollection_AsciiString &  ) >(&UTL::ExtendedString),
                    R"#(None)#"  , py::arg("anAsciiString"))
        .def_static("GUID_s",
                    (Standard_GUID (*)( const TCollection_ExtendedString &  ) ) static_cast<Standard_GUID (*)( const TCollection_ExtendedString &  ) >(&UTL::GUID),
                    R"#(None)#"  , py::arg("anXString"))
        .def_static("Find_s",
                    (Standard_Boolean (*)( const opencascade::handle<Resource_Manager> & ,  const TCollection_ExtendedString &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Resource_Manager> & ,  const TCollection_ExtendedString &  ) >(&UTL::Find),
                    R"#(None)#"  , py::arg("aResourceManager"),  py::arg("aResourceName"))
        .def_static("Value_s",
                    (TCollection_ExtendedString (*)( const opencascade::handle<Resource_Manager> & ,  const TCollection_ExtendedString &  ) ) static_cast<TCollection_ExtendedString (*)( const opencascade::handle<Resource_Manager> & ,  const TCollection_ExtendedString &  ) >(&UTL::Value),
                    R"#(None)#"  , py::arg("aResourceManager"),  py::arg("aResourceName"))
        .def_static("IntegerValue_s",
                    (Standard_Integer (*)( const TCollection_ExtendedString &  ) ) static_cast<Standard_Integer (*)( const TCollection_ExtendedString &  ) >(&UTL::IntegerValue),
                    R"#(None)#"  , py::arg("anExtendedString"))
        .def_static("CString_s",
                    (Standard_CString (*)( const TCollection_ExtendedString &  ) ) static_cast<Standard_CString (*)( const TCollection_ExtendedString &  ) >(&UTL::CString),
                    R"#(None)#"  , py::arg("anExtendedString"))
        .def_static("IsReadOnly_s",
                    (Standard_Boolean (*)( const TCollection_ExtendedString &  ) ) static_cast<Standard_Boolean (*)( const TCollection_ExtendedString &  ) >(&UTL::IsReadOnly),
                    R"#(None)#"  , py::arg("aFileName"))
;

// functions
// ./opencascade/UTL.hxx

// operators

// register typdefs
// ./opencascade/UTL.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
