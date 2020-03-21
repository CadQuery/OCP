
// std lib related includes
#include <tuple>

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

    // default constructor
    register_default_constructor<StdLPersistent , shared_ptr<StdLPersistent>>(m,"StdLPersistent");

    static_cast<py::class_<StdLPersistent , shared_ptr<StdLPersistent> >>(m.attr("StdLPersistent"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Collection , shared_ptr<StdLPersistent_Collection>>(m,"StdLPersistent_Collection");

    static_cast<py::class_<StdLPersistent_Collection , shared_ptr<StdLPersistent_Collection> >>(m.attr("StdLPersistent_Collection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Data ,opencascade::handle<StdLPersistent_Data>>(m,"StdLPersistent_Data");

    static_cast<py::class_<StdLPersistent_Data ,opencascade::handle<StdLPersistent_Data> , StdObjMgt_Persistent>>(m.attr("StdLPersistent_Data"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_Data::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_Data::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_Data::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_Data::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_Data::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_Data::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_Data::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_Data::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_Data::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg("theChildren"))
        .def("PName",
             (Standard_CString (StdLPersistent_Data::*)() const) static_cast<Standard_CString (StdLPersistent_Data::*)() const>(&StdLPersistent_Data::PName),
             R"#(Returns persistent type name)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Dependency , shared_ptr<StdLPersistent_Dependency>>(m,"StdLPersistent_Dependency");

    static_cast<py::class_<StdLPersistent_Dependency , shared_ptr<StdLPersistent_Dependency> >>(m.attr("StdLPersistent_Dependency"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Document ,opencascade::handle<StdLPersistent_Document>>(m,"StdLPersistent_Document");

    static_cast<py::class_<StdLPersistent_Document ,opencascade::handle<StdLPersistent_Document> , StdObjMgt_Persistent>>(m.attr("StdLPersistent_Document"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_Document::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_Document::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_Document::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_Document::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_Document::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_Document::Write),
             R"#(Read persistent data from a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_Document::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_Document::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_Document::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg(""))
        .def("PName",
             (Standard_CString (StdLPersistent_Document::*)() const) static_cast<Standard_CString (StdLPersistent_Document::*)() const>(&StdLPersistent_Document::PName),
             R"#(Returns persistent type name)#" )
        .def("ImportDocument",
             (void (StdLPersistent_Document::*)( const opencascade::handle<TDocStd_Document> & ) const) static_cast<void (StdLPersistent_Document::*)( const opencascade::handle<TDocStd_Document> & ) const>(&StdLPersistent_Document::ImportDocument),
             R"#(Import transient document from the persistent data.)#"  , py::arg("theDocument"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Function , shared_ptr<StdLPersistent_Function>>(m,"StdLPersistent_Function");

    static_cast<py::class_<StdLPersistent_Function , shared_ptr<StdLPersistent_Function> >>(m.attr("StdLPersistent_Function"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_Function::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_Function::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_Function::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_Function::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_Function::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_Function::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_Function::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_Function::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_Function::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg(""))
        .def("PName",
             (Standard_CString (StdLPersistent_Function::*)() const) static_cast<Standard_CString (StdLPersistent_Function::*)() const>(&StdLPersistent_Function::PName),
             R"#(Returns persistent type name)#" )
        .def("Import",
             (void (StdLPersistent_Function::*)( const opencascade::handle<TFunction_Function> & ) const) static_cast<void (StdLPersistent_Function::*)( const opencascade::handle<TFunction_Function> & ) const>(&StdLPersistent_Function::Import),
             R"#(Import transient attribuite from the persistent data.)#"  , py::arg("theAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_HArray1 , shared_ptr<StdLPersistent_HArray1>>(m,"StdLPersistent_HArray1");

    static_cast<py::class_<StdLPersistent_HArray1 , shared_ptr<StdLPersistent_HArray1> >>(m.attr("StdLPersistent_HArray1"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdLPersistent_HArray1OfPersistent ,opencascade::handle<StdLPersistent_HArray1OfPersistent> , Standard_Transient>>(m.attr("StdLPersistent_HArray1OfPersistent"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StdObjMgt_Persistent> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init< const NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() const) static_cast<const NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() const>(&StdLPersistent_HArray1OfPersistent::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() ) static_cast<NCollection_Array1<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray1OfPersistent::*)() >(&StdLPersistent_HArray1OfPersistent::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdLPersistent_HArray1OfPersistent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdLPersistent_HArray1OfPersistent::*)() const>(&StdLPersistent_HArray1OfPersistent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdLPersistent_HArray1OfPersistent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdLPersistent_HArray1OfPersistent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_HArray2 , shared_ptr<StdLPersistent_HArray2>>(m,"StdLPersistent_HArray2");

    static_cast<py::class_<StdLPersistent_HArray2 , shared_ptr<StdLPersistent_HArray2> >>(m.attr("StdLPersistent_HArray2"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdLPersistent_HArray2OfPersistent ,opencascade::handle<StdLPersistent_HArray2OfPersistent> , Standard_Transient>>(m.attr("StdLPersistent_HArray2OfPersistent"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StdObjMgt_Persistent> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init< const NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() const) static_cast<const NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() const>(&StdLPersistent_HArray2OfPersistent::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() ) static_cast<NCollection_Array2<opencascade::handle<StdObjMgt_Persistent> > & (StdLPersistent_HArray2OfPersistent::*)() >(&StdLPersistent_HArray2OfPersistent::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdLPersistent_HArray2OfPersistent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdLPersistent_HArray2OfPersistent::*)() const>(&StdLPersistent_HArray2OfPersistent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdLPersistent_HArray2OfPersistent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdLPersistent_HArray2OfPersistent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_HString , shared_ptr<StdLPersistent_HString>>(m,"StdLPersistent_HString");

    static_cast<py::class_<StdLPersistent_HString , shared_ptr<StdLPersistent_HString> >>(m.attr("StdLPersistent_HString"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_NamedData , shared_ptr<StdLPersistent_NamedData>>(m,"StdLPersistent_NamedData");

    static_cast<py::class_<StdLPersistent_NamedData , shared_ptr<StdLPersistent_NamedData> >>(m.attr("StdLPersistent_NamedData"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_NamedData::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_NamedData::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_NamedData::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_NamedData::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_NamedData::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_NamedData::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_NamedData::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_NamedData::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_NamedData::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg(""))
        .def("PName",
             (Standard_CString (StdLPersistent_NamedData::*)() const) static_cast<Standard_CString (StdLPersistent_NamedData::*)() const>(&StdLPersistent_NamedData::PName),
             R"#(Returns persistent type name)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Real , shared_ptr<StdLPersistent_Real>>(m,"StdLPersistent_Real");

    static_cast<py::class_<StdLPersistent_Real , shared_ptr<StdLPersistent_Real> >>(m.attr("StdLPersistent_Real"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_Real::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_Real::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_Real::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_Real::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_Real::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_Real::Write),
             R"#(Write persistent data from a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_Real::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_Real::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_Real::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg(""))
        .def("PName",
             (Standard_CString (StdLPersistent_Real::*)() const) static_cast<Standard_CString (StdLPersistent_Real::*)() const>(&StdLPersistent_Real::PName),
             R"#(Returns persistent type name)#" )
        .def("Import",
             (void (StdLPersistent_Real::*)( const opencascade::handle<TDataStd_Real> & ) const) static_cast<void (StdLPersistent_Real::*)( const opencascade::handle<TDataStd_Real> & ) const>(&StdLPersistent_Real::Import),
             R"#(Import transient attribuite from the persistent data.)#"  , py::arg("theAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_TreeNode , shared_ptr<StdLPersistent_TreeNode>>(m,"StdLPersistent_TreeNode");

    static_cast<py::class_<StdLPersistent_TreeNode , shared_ptr<StdLPersistent_TreeNode> >>(m.attr("StdLPersistent_TreeNode"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_TreeNode::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_TreeNode::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_TreeNode::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_TreeNode::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_TreeNode::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_TreeNode::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_TreeNode::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_TreeNode::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_TreeNode::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg(""))
        .def("PName",
             (Standard_CString (StdLPersistent_TreeNode::*)() const) static_cast<Standard_CString (StdLPersistent_TreeNode::*)() const>(&StdLPersistent_TreeNode::PName),
             R"#(Returns persistent type name)#" )
        .def("CreateAttribute",
             (opencascade::handle<TDF_Attribute> (StdLPersistent_TreeNode::*)() ) static_cast<opencascade::handle<TDF_Attribute> (StdLPersistent_TreeNode::*)() >(&StdLPersistent_TreeNode::CreateAttribute),
             R"#(Create an empty transient attribuite)#" )
        .def("ImportAttribute",
             (void (StdLPersistent_TreeNode::*)() ) static_cast<void (StdLPersistent_TreeNode::*)() >(&StdLPersistent_TreeNode::ImportAttribute),
             R"#(Import transient attribuite from the persistent data.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Value , shared_ptr<StdLPersistent_Value>>(m,"StdLPersistent_Value");

    static_cast<py::class_<StdLPersistent_Value , shared_ptr<StdLPersistent_Value> >>(m.attr("StdLPersistent_Value"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Variable , shared_ptr<StdLPersistent_Variable>>(m,"StdLPersistent_Variable");

    static_cast<py::class_<StdLPersistent_Variable , shared_ptr<StdLPersistent_Variable> >>(m.attr("StdLPersistent_Variable"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_Variable::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_Variable::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_Variable::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_Variable::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_Variable::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_Variable::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_Variable::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_Variable::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_Variable::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg("theChildren"))
        .def("PName",
             (Standard_CString (StdLPersistent_Variable::*)() const) static_cast<Standard_CString (StdLPersistent_Variable::*)() const>(&StdLPersistent_Variable::PName),
             R"#(Returns persistent type name)#" )
        .def("Import",
             (void (StdLPersistent_Variable::*)( const opencascade::handle<TDataStd_Variable> & ) const) static_cast<void (StdLPersistent_Variable::*)( const opencascade::handle<TDataStd_Variable> & ) const>(&StdLPersistent_Variable::Import),
             R"#(Import transient attribuite from the persistent data.)#"  , py::arg("theAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_Void , shared_ptr<StdLPersistent_Void>>(m,"StdLPersistent_Void");

    static_cast<py::class_<StdLPersistent_Void , shared_ptr<StdLPersistent_Void> >>(m.attr("StdLPersistent_Void"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdLPersistent_XLink , shared_ptr<StdLPersistent_XLink>>(m,"StdLPersistent_XLink");

    static_cast<py::class_<StdLPersistent_XLink , shared_ptr<StdLPersistent_XLink> >>(m.attr("StdLPersistent_XLink"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdLPersistent_XLink::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdLPersistent_XLink::*)( StdObjMgt_ReadData & ) >(&StdLPersistent_XLink::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdLPersistent_XLink::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdLPersistent_XLink::*)( StdObjMgt_WriteData & ) const>(&StdLPersistent_XLink::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdLPersistent_XLink::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdLPersistent_XLink::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdLPersistent_XLink::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg("theChildren"))
        .def("PName",
             (Standard_CString (StdLPersistent_XLink::*)() const) static_cast<Standard_CString (StdLPersistent_XLink::*)() const>(&StdLPersistent_XLink::PName),
             R"#(Returns persistent type name)#" )
        .def("Import",
             (void (StdLPersistent_XLink::*)( const opencascade::handle<TDocStd_XLink> & ) const) static_cast<void (StdLPersistent_XLink::*)( const opencascade::handle<TDocStd_XLink> & ) const>(&StdLPersistent_XLink::Import),
             R"#(Import transient attribuite from the persistent data.)#"  , py::arg("theAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StdLPersistent_Real.hxx
// ./opencascade/StdLPersistent_Data.hxx
// ./opencascade/StdLPersistent_HString.hxx
// ./opencascade/StdLPersistent_Document.hxx
// ./opencascade/StdLPersistent_Dependency.hxx
// ./opencascade/StdLPersistent_Void.hxx
// ./opencascade/StdLPersistent_Function.hxx
// ./opencascade/StdLPersistent_HArray2.hxx
// ./opencascade/StdLPersistent_XLink.hxx
// ./opencascade/StdLPersistent_Variable.hxx
// ./opencascade/StdLPersistent.hxx
// ./opencascade/StdLPersistent_Value.hxx
// ./opencascade/StdLPersistent_HArray1.hxx
// ./opencascade/StdLPersistent_Collection.hxx
// ./opencascade/StdLPersistent_NamedData.hxx
// ./opencascade/StdLPersistent_TreeNode.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
