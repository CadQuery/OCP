
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TDocStd_Document.hxx>
#include <StdLPersistent_Data.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TCollection_HExtendedString.hxx>

// module includes
#include <StdLPersistent.hxx>
#include <StdLPersistent_Collection.hxx>
#include <StdLPersistent_Data.hxx>
#include <StdLPersistent_Dependency.hxx>
#include <StdLPersistent_Document.hxx>
#include <StdLPersistent_Function.hxx>
#include <StdLPersistent_HArray1.hxx>
#include <StdLPersistent_HArray2.hxx>
#include <StdLPersistent_HString.hxx>
#include <StdLPersistent_NamedData.hxx>
#include <StdLPersistent_Real.hxx>
#include <StdLPersistent_TreeNode.hxx>
#include <StdLPersistent_Value.hxx>
#include <StdLPersistent_Variable.hxx>
#include <StdLPersistent_Void.hxx>
#include <StdLPersistent_XLink.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdLPersistent(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdLPersistent"));


//Python trampoline classes

// classes

    register_default_constructor<StdLPersistent_Document ,opencascade::handle<StdLPersistent_Document>>(m,"StdLPersistent_Document");

    static_cast<py::class_<StdLPersistent_Document ,opencascade::handle<StdLPersistent_Document>  , StdObjMgt_Persistent >>(m.attr("StdLPersistent_Document"))
        .def("Read",
             (void (StdLPersistent_Document::*)( StdObjMgt_ReadData &  ) ) static_cast<void (StdLPersistent_Document::*)( StdObjMgt_ReadData &  ) >(&StdLPersistent_Document::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_Document::*)( StdObjMgt_WriteData &  ) const) static_cast<void (StdLPersistent_Document::*)( StdObjMgt_WriteData &  ) const>(&StdLPersistent_Document::Write),
             R"#(Read persistent data from a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_Document::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > &  ) const) static_cast<void (StdLPersistent_Document::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > &  ) const>(&StdLPersistent_Document::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg(""))
        .def("PName",
             (Standard_CString (StdLPersistent_Document::*)() const) static_cast<Standard_CString (StdLPersistent_Document::*)() const>(&StdLPersistent_Document::PName),
             R"#(Returns persistent type name)#" )
        .def("ImportDocument",
             (void (StdLPersistent_Document::*)( const opencascade::handle<TDocStd_Document> &  ) const) static_cast<void (StdLPersistent_Document::*)( const opencascade::handle<TDocStd_Document> &  ) const>(&StdLPersistent_Document::ImportDocument),
             R"#(Import transient document from the persistent data.)#"  , py::arg("theDocument"))
;


    static_cast<py::class_<StdLPersistent_HArray1OfPersistent ,std::unique_ptr<StdLPersistent_HArray1OfPersistent>  >>(m.attr("StdLPersistent_HArray1OfPersistent"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StdObjMgt_Persistent> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init< const NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() const) static_cast<const NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() const>(&StdLPersistent_HArray1OfPersistent::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() ) static_cast<NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() >(&StdLPersistent_HArray1OfPersistent::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdLPersistent_HArray1OfPersistent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdLPersistent_HArray1OfPersistent::*)() const>(&StdLPersistent_HArray1OfPersistent::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdLPersistent_HArray1OfPersistent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdLPersistent_HArray1OfPersistent::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StdLPersistent_Data ,opencascade::handle<StdLPersistent_Data>>(m,"StdLPersistent_Data");

    static_cast<py::class_<StdLPersistent_Data ,opencascade::handle<StdLPersistent_Data>  , StdObjMgt_Persistent >>(m.attr("StdLPersistent_Data"))
        .def("Read",
             (void (StdLPersistent_Data::*)( StdObjMgt_ReadData &  ) ) static_cast<void (StdLPersistent_Data::*)( StdObjMgt_ReadData &  ) >(&StdLPersistent_Data::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_Data::*)( StdObjMgt_WriteData &  ) const) static_cast<void (StdLPersistent_Data::*)( StdObjMgt_WriteData &  ) const>(&StdLPersistent_Data::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_Data::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > &  ) const) static_cast<void (StdLPersistent_Data::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > &  ) const>(&StdLPersistent_Data::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg("theChildren"))
        .def("PName",
             (Standard_CString (StdLPersistent_Data::*)() const) static_cast<Standard_CString (StdLPersistent_Data::*)() const>(&StdLPersistent_Data::PName),
             R"#(Returns persistent type name)#" )
        .def("Import",
             (opencascade::handle<TDF_Data> (StdLPersistent_Data::*)() const) static_cast<opencascade::handle<TDF_Data> (StdLPersistent_Data::*)() const>(&StdLPersistent_Data::Import),
             R"#(Import transient data from the persistent data.)#" )
;


    static_cast<py::class_<StdLPersistent_HArray2OfPersistent ,std::unique_ptr<StdLPersistent_HArray2OfPersistent>  >>(m.attr("StdLPersistent_HArray2OfPersistent"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StdObjMgt_Persistent> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init< const NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & >()  , py::arg("theOther") )
        .def("Array2",
             (const NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() const) static_cast<const NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() const>(&StdLPersistent_HArray2OfPersistent::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() ) static_cast<NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() >(&StdLPersistent_HArray2OfPersistent::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdLPersistent_HArray2OfPersistent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdLPersistent_HArray2OfPersistent::*)() const>(&StdLPersistent_HArray2OfPersistent::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdLPersistent_HArray2OfPersistent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdLPersistent_HArray2OfPersistent::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/StdLPersistent_Void.hxx
// ./opencascade/StdLPersistent_HArray2.hxx
// ./opencascade/StdLPersistent_TreeNode.hxx
// ./opencascade/StdLPersistent_NamedData.hxx
// ./opencascade/StdLPersistent_Dependency.hxx
// ./opencascade/StdLPersistent_Value.hxx
// ./opencascade/StdLPersistent_Collection.hxx
// ./opencascade/StdLPersistent_Document.hxx
// ./opencascade/StdLPersistent.hxx
// ./opencascade/StdLPersistent_Function.hxx
// ./opencascade/StdLPersistent_HString.hxx
// ./opencascade/StdLPersistent_XLink.hxx
// ./opencascade/StdLPersistent_Variable.hxx
// ./opencascade/StdLPersistent_HArray1.hxx
// ./opencascade/StdLPersistent_Data.hxx
// ./opencascade/StdLPersistent_Real.hxx

// operators

// register typdefs
// ./opencascade/StdLPersistent_Void.hxx
// ./opencascade/StdLPersistent_HArray2.hxx
// ./opencascade/StdLPersistent_TreeNode.hxx
// ./opencascade/StdLPersistent_NamedData.hxx
// ./opencascade/StdLPersistent_Dependency.hxx
// ./opencascade/StdLPersistent_Value.hxx
// ./opencascade/StdLPersistent_Collection.hxx
// ./opencascade/StdLPersistent_Document.hxx
// ./opencascade/StdLPersistent.hxx
// ./opencascade/StdLPersistent_Function.hxx
// ./opencascade/StdLPersistent_HString.hxx
// ./opencascade/StdLPersistent_XLink.hxx
// ./opencascade/StdLPersistent_Variable.hxx
// ./opencascade/StdLPersistent_HArray1.hxx
// ./opencascade/StdLPersistent_Data.hxx
// ./opencascade/StdLPersistent_Real.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
