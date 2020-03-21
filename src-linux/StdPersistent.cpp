
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdObjMgt_MapOfInstantiators.hxx>

// module includes
#include <StdPersistent.hxx>
#include <StdPersistent_DataXtd.hxx>
#include <StdPersistent_DataXtd_Constraint.hxx>
#include <StdPersistent_DataXtd_PatternStd.hxx>
#include <StdPersistent_HArray1.hxx>
#include <StdPersistent_Naming.hxx>
#include <StdPersistent_PPrsStd.hxx>
#include <StdPersistent_TopLoc.hxx>
#include <StdPersistent_TopoDS.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
using ItemLocation = StdPersistent_TopLoc::ItemLocation;
using Datum3D = StdPersistent_TopLoc::Datum3D;

// Module definiiton
void register_StdPersistent(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdPersistent"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdPersistent , shared_ptr<StdPersistent>>(m,"StdPersistent");

    static_cast<py::class_<StdPersistent , shared_ptr<StdPersistent> >>(m.attr("StdPersistent"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("BindTypes_s",
                    (void (*)( StdObjMgt_MapOfInstantiators & ) ) static_cast<void (*)( StdObjMgt_MapOfInstantiators & ) >(&StdPersistent::BindTypes),
                    R"#(Register types.)#"  , py::arg("theMap"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPersistent_DataXtd , shared_ptr<StdPersistent_DataXtd>>(m,"StdPersistent_DataXtd");

    static_cast<py::class_<StdPersistent_DataXtd , shared_ptr<StdPersistent_DataXtd> >>(m.attr("StdPersistent_DataXtd"))
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
    register_default_constructor<StdPersistent_DataXtd_Constraint , shared_ptr<StdPersistent_DataXtd_Constraint>>(m,"StdPersistent_DataXtd_Constraint");

    static_cast<py::class_<StdPersistent_DataXtd_Constraint , shared_ptr<StdPersistent_DataXtd_Constraint> >>(m.attr("StdPersistent_DataXtd_Constraint"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdPersistent_DataXtd_Constraint::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdPersistent_DataXtd_Constraint::*)( StdObjMgt_ReadData & ) >(&StdPersistent_DataXtd_Constraint::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdPersistent_DataXtd_Constraint::*)( StdObjMgt_WriteData & ) const) static_cast<void (StdPersistent_DataXtd_Constraint::*)( StdObjMgt_WriteData & ) const>(&StdPersistent_DataXtd_Constraint::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdPersistent_DataXtd_Constraint::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdPersistent_DataXtd_Constraint::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdPersistent_DataXtd_Constraint::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg("theChildren"))
        .def("PName",
             (Standard_CString (StdPersistent_DataXtd_Constraint::*)() const) static_cast<Standard_CString (StdPersistent_DataXtd_Constraint::*)() const>(&StdPersistent_DataXtd_Constraint::PName),
             R"#(Returns persistent type name)#" )
        .def("Import",
             (void (StdPersistent_DataXtd_Constraint::*)( const opencascade::handle<TDataXtd_Constraint> & ) const) static_cast<void (StdPersistent_DataXtd_Constraint::*)( const opencascade::handle<TDataXtd_Constraint> & ) const>(&StdPersistent_DataXtd_Constraint::Import),
             R"#(Import transient attribuite from the persistent data.)#"  , py::arg("theAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPersistent_DataXtd_PatternStd , shared_ptr<StdPersistent_DataXtd_PatternStd>>(m,"StdPersistent_DataXtd_PatternStd");

    static_cast<py::class_<StdPersistent_DataXtd_PatternStd , shared_ptr<StdPersistent_DataXtd_PatternStd> >>(m.attr("StdPersistent_DataXtd_PatternStd"))
    // constructors
    // custom constructors
    // methods
        .def("Read",
             (void (StdPersistent_DataXtd_PatternStd::*)( StdObjMgt_ReadData & ) ) static_cast<void (StdPersistent_DataXtd_PatternStd::*)( StdObjMgt_ReadData & ) >(&StdPersistent_DataXtd_PatternStd::Read),
             R"#(Read persistent data from a file.)#"  , py::arg("theReadData"))
        .def("Write",
             (void (StdPersistent_DataXtd_PatternStd::*)( StdObjMgt_WriteData & ) ) static_cast<void (StdPersistent_DataXtd_PatternStd::*)( StdObjMgt_WriteData & ) >(&StdPersistent_DataXtd_PatternStd::Write),
             R"#(Write persistent data to a file.)#"  , py::arg("theWriteData"))
        .def("PChildren",
             (void (StdPersistent_DataXtd_PatternStd::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdPersistent_DataXtd_PatternStd::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdPersistent_DataXtd_PatternStd::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg("theChildren"))
        .def("PName",
             (Standard_CString (StdPersistent_DataXtd_PatternStd::*)() const) static_cast<Standard_CString (StdPersistent_DataXtd_PatternStd::*)() const>(&StdPersistent_DataXtd_PatternStd::PName),
             R"#(Returns persistent type name)#" )
        .def("Import",
             (void (StdPersistent_DataXtd_PatternStd::*)( const opencascade::handle<TDataXtd_PatternStd> & ) const) static_cast<void (StdPersistent_DataXtd_PatternStd::*)( const opencascade::handle<TDataXtd_PatternStd> & ) const>(&StdPersistent_DataXtd_PatternStd::Import),
             R"#(Import transient attribuite from the persistent data.)#"  , py::arg("theAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPersistent_HArray1 , shared_ptr<StdPersistent_HArray1>>(m,"StdPersistent_HArray1");

    static_cast<py::class_<StdPersistent_HArray1 , shared_ptr<StdPersistent_HArray1> >>(m.attr("StdPersistent_HArray1"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdPersistent_HArray1OfShape1 ,opencascade::handle<StdPersistent_HArray1OfShape1> , Standard_Transient>>(m.attr("StdPersistent_HArray1OfShape1"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StdObject_Shape & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init< const NCollection_Array1<StdObject_Shape> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() const) static_cast<const NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() const>(&StdPersistent_HArray1OfShape1::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() ) static_cast<NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() >(&StdPersistent_HArray1OfShape1::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdPersistent_HArray1OfShape1::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdPersistent_HArray1OfShape1::*)() const>(&StdPersistent_HArray1OfShape1::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdPersistent_HArray1OfShape1::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdPersistent_HArray1OfShape1::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPersistent_Naming , shared_ptr<StdPersistent_Naming>>(m,"StdPersistent_Naming");

    static_cast<py::class_<StdPersistent_Naming , shared_ptr<StdPersistent_Naming> >>(m.attr("StdPersistent_Naming"))
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
    register_default_constructor<StdPersistent_PPrsStd , shared_ptr<StdPersistent_PPrsStd>>(m,"StdPersistent_PPrsStd");

    static_cast<py::class_<StdPersistent_PPrsStd , shared_ptr<StdPersistent_PPrsStd> >>(m.attr("StdPersistent_PPrsStd"))
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
    register_default_constructor<StdPersistent_TopLoc , shared_ptr<StdPersistent_TopLoc>>(m,"StdPersistent_TopLoc");

    static_cast<py::class_<StdPersistent_TopLoc , shared_ptr<StdPersistent_TopLoc> >>(m.attr("StdPersistent_TopLoc"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Translate_s",
                    (opencascade::handle<ItemLocation> (*)( const TopLoc_Location & , NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<StdObjMgt_Persistent> > & ) ) static_cast<opencascade::handle<ItemLocation> (*)( const TopLoc_Location & , NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<StdObjMgt_Persistent> > & ) >(&StdPersistent_TopLoc::Translate),
                    R"#(None)#"  , py::arg("theLoc"),  py::arg("theMap"))
        .def_static("Translate_s",
                    (opencascade::handle<Datum3D> (*)( const opencascade::handle<TopLoc_Datum3D> & , NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<StdObjMgt_Persistent> > & ) ) static_cast<opencascade::handle<Datum3D> (*)( const opencascade::handle<TopLoc_Datum3D> & , NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<StdObjMgt_Persistent> > & ) >(&StdPersistent_TopLoc::Translate),
                    R"#(None)#"  , py::arg("theDatum"),  py::arg("theMap"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPersistent_TopoDS , shared_ptr<StdPersistent_TopoDS>>(m,"StdPersistent_TopoDS");

    static_cast<py::class_<StdPersistent_TopoDS , shared_ptr<StdPersistent_TopoDS> >>(m.attr("StdPersistent_TopoDS"))
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
// ./opencascade/StdPersistent_TopoDS.hxx
// ./opencascade/StdPersistent.hxx
// ./opencascade/StdPersistent_DataXtd_PatternStd.hxx
// ./opencascade/StdPersistent_Naming.hxx
// ./opencascade/StdPersistent_TopLoc.hxx
// ./opencascade/StdPersistent_PPrsStd.hxx
// ./opencascade/StdPersistent_HArray1.hxx
// ./opencascade/StdPersistent_DataXtd_Constraint.hxx
// ./opencascade/StdPersistent_DataXtd.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
