
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

// module includes
#include <TColgp_Array1OfCirc2d.hxx>
#include <TColgp_Array1OfDir.hxx>
#include <TColgp_Array1OfDir2d.hxx>
#include <TColgp_Array1OfLin2d.hxx>
#include <TColgp_Array1OfPnt.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TColgp_Array1OfVec.hxx>
#include <TColgp_Array1OfVec2d.hxx>
#include <TColgp_Array1OfXY.hxx>
#include <TColgp_Array1OfXYZ.hxx>
#include <TColgp_Array2OfCirc2d.hxx>
#include <TColgp_Array2OfDir.hxx>
#include <TColgp_Array2OfDir2d.hxx>
#include <TColgp_Array2OfLin2d.hxx>
#include <TColgp_Array2OfPnt.hxx>
#include <TColgp_Array2OfPnt2d.hxx>
#include <TColgp_Array2OfVec.hxx>
#include <TColgp_Array2OfVec2d.hxx>
#include <TColgp_Array2OfXY.hxx>
#include <TColgp_Array2OfXYZ.hxx>
#include <TColgp_HArray1OfCirc2d.hxx>
#include <TColgp_HArray1OfDir.hxx>
#include <TColgp_HArray1OfDir2d.hxx>
#include <TColgp_HArray1OfLin2d.hxx>
#include <TColgp_HArray1OfPnt.hxx>
#include <TColgp_HArray1OfPnt2d.hxx>
#include <TColgp_HArray1OfVec.hxx>
#include <TColgp_HArray1OfVec2d.hxx>
#include <TColgp_HArray1OfXY.hxx>
#include <TColgp_HArray1OfXYZ.hxx>
#include <TColgp_HArray2OfCirc2d.hxx>
#include <TColgp_HArray2OfDir.hxx>
#include <TColgp_HArray2OfDir2d.hxx>
#include <TColgp_HArray2OfLin2d.hxx>
#include <TColgp_HArray2OfPnt.hxx>
#include <TColgp_HArray2OfPnt2d.hxx>
#include <TColgp_HArray2OfVec.hxx>
#include <TColgp_HArray2OfVec2d.hxx>
#include <TColgp_HArray2OfXY.hxx>
#include <TColgp_HArray2OfXYZ.hxx>
#include <TColgp_HSequenceOfDir.hxx>
#include <TColgp_HSequenceOfDir2d.hxx>
#include <TColgp_HSequenceOfPnt.hxx>
#include <TColgp_HSequenceOfPnt2d.hxx>
#include <TColgp_HSequenceOfVec.hxx>
#include <TColgp_HSequenceOfVec2d.hxx>
#include <TColgp_HSequenceOfXY.hxx>
#include <TColgp_HSequenceOfXYZ.hxx>
#include <TColgp_SequenceOfArray1OfPnt2d.hxx>
#include <TColgp_SequenceOfAx1.hxx>
#include <TColgp_SequenceOfDir.hxx>
#include <TColgp_SequenceOfDir2d.hxx>
#include <TColgp_SequenceOfPnt.hxx>
#include <TColgp_SequenceOfPnt2d.hxx>
#include <TColgp_SequenceOfVec.hxx>
#include <TColgp_SequenceOfVec2d.hxx>
#include <TColgp_SequenceOfXY.hxx>
#include <TColgp_SequenceOfXYZ.hxx>

// template related includes
// ./opencascade\TColgp_Array2OfLin2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfPnt2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfXY.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfDir.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfXY.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfDir2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfDir2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfVec2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfDir2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfDir.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfVec.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfPnt2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfPnt2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfAx1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfXYZ.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfArray1OfPnt2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfXYZ.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfVec2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfXY.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfVec.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfDir.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfCirc2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfPnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfPnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfVec.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfVec2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array2OfCirc2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_Array1OfLin2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColgp_SequenceOfXYZ.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColgp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TColgp"));


//Python trampoline classes

// classes


    static_cast<py::class_<TColgp_HArray1OfCirc2d ,opencascade::handle<TColgp_HArray1OfCirc2d> , TColgp_Array1OfCirc2d, Standard_Transient>>(m.attr("TColgp_HArray1OfCirc2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Circ2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Circ2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfCirc2d & (TColgp_HArray1OfCirc2d::*)() const) static_cast<const TColgp_Array1OfCirc2d & (TColgp_HArray1OfCirc2d::*)() const>(&TColgp_HArray1OfCirc2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfCirc2d & (TColgp_HArray1OfCirc2d::*)() ) static_cast<TColgp_Array1OfCirc2d & (TColgp_HArray1OfCirc2d::*)() >(&TColgp_HArray1OfCirc2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfCirc2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfCirc2d::*)() const>(&TColgp_HArray1OfCirc2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfCirc2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfCirc2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfDir ,opencascade::handle<TColgp_HArray1OfDir> , TColgp_Array1OfDir, Standard_Transient>>(m.attr("TColgp_HArray1OfDir"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Dir & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Dir> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfDir & (TColgp_HArray1OfDir::*)() const) static_cast<const TColgp_Array1OfDir & (TColgp_HArray1OfDir::*)() const>(&TColgp_HArray1OfDir::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfDir & (TColgp_HArray1OfDir::*)() ) static_cast<TColgp_Array1OfDir & (TColgp_HArray1OfDir::*)() >(&TColgp_HArray1OfDir::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfDir::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfDir::*)() const>(&TColgp_HArray1OfDir::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfDir::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfDir::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfDir2d ,opencascade::handle<TColgp_HArray1OfDir2d> , TColgp_Array1OfDir2d, Standard_Transient>>(m.attr("TColgp_HArray1OfDir2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Dir2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Dir2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfDir2d & (TColgp_HArray1OfDir2d::*)() const) static_cast<const TColgp_Array1OfDir2d & (TColgp_HArray1OfDir2d::*)() const>(&TColgp_HArray1OfDir2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfDir2d & (TColgp_HArray1OfDir2d::*)() ) static_cast<TColgp_Array1OfDir2d & (TColgp_HArray1OfDir2d::*)() >(&TColgp_HArray1OfDir2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfDir2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfDir2d::*)() const>(&TColgp_HArray1OfDir2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfDir2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfDir2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfLin2d ,opencascade::handle<TColgp_HArray1OfLin2d> , TColgp_Array1OfLin2d, Standard_Transient>>(m.attr("TColgp_HArray1OfLin2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Lin2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Lin2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfLin2d & (TColgp_HArray1OfLin2d::*)() const) static_cast<const TColgp_Array1OfLin2d & (TColgp_HArray1OfLin2d::*)() const>(&TColgp_HArray1OfLin2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfLin2d & (TColgp_HArray1OfLin2d::*)() ) static_cast<TColgp_Array1OfLin2d & (TColgp_HArray1OfLin2d::*)() >(&TColgp_HArray1OfLin2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfLin2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfLin2d::*)() const>(&TColgp_HArray1OfLin2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfLin2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfLin2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfPnt ,opencascade::handle<TColgp_HArray1OfPnt> , TColgp_Array1OfPnt, Standard_Transient>>(m.attr("TColgp_HArray1OfPnt"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Pnt & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfPnt & (TColgp_HArray1OfPnt::*)() const) static_cast<const TColgp_Array1OfPnt & (TColgp_HArray1OfPnt::*)() const>(&TColgp_HArray1OfPnt::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfPnt & (TColgp_HArray1OfPnt::*)() ) static_cast<TColgp_Array1OfPnt & (TColgp_HArray1OfPnt::*)() >(&TColgp_HArray1OfPnt::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfPnt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfPnt::*)() const>(&TColgp_HArray1OfPnt::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfPnt::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfPnt::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfPnt2d ,opencascade::handle<TColgp_HArray1OfPnt2d> , TColgp_Array1OfPnt2d, Standard_Transient>>(m.attr("TColgp_HArray1OfPnt2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Pnt2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfPnt2d & (TColgp_HArray1OfPnt2d::*)() const) static_cast<const TColgp_Array1OfPnt2d & (TColgp_HArray1OfPnt2d::*)() const>(&TColgp_HArray1OfPnt2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfPnt2d & (TColgp_HArray1OfPnt2d::*)() ) static_cast<TColgp_Array1OfPnt2d & (TColgp_HArray1OfPnt2d::*)() >(&TColgp_HArray1OfPnt2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfPnt2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfPnt2d::*)() const>(&TColgp_HArray1OfPnt2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfPnt2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfPnt2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfVec ,opencascade::handle<TColgp_HArray1OfVec> , TColgp_Array1OfVec, Standard_Transient>>(m.attr("TColgp_HArray1OfVec"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Vec & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Vec> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfVec & (TColgp_HArray1OfVec::*)() const) static_cast<const TColgp_Array1OfVec & (TColgp_HArray1OfVec::*)() const>(&TColgp_HArray1OfVec::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfVec & (TColgp_HArray1OfVec::*)() ) static_cast<TColgp_Array1OfVec & (TColgp_HArray1OfVec::*)() >(&TColgp_HArray1OfVec::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfVec::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfVec::*)() const>(&TColgp_HArray1OfVec::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfVec::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfVec::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfVec2d ,opencascade::handle<TColgp_HArray1OfVec2d> , TColgp_Array1OfVec2d, Standard_Transient>>(m.attr("TColgp_HArray1OfVec2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Vec2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Vec2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfVec2d & (TColgp_HArray1OfVec2d::*)() const) static_cast<const TColgp_Array1OfVec2d & (TColgp_HArray1OfVec2d::*)() const>(&TColgp_HArray1OfVec2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfVec2d & (TColgp_HArray1OfVec2d::*)() ) static_cast<TColgp_Array1OfVec2d & (TColgp_HArray1OfVec2d::*)() >(&TColgp_HArray1OfVec2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfVec2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfVec2d::*)() const>(&TColgp_HArray1OfVec2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfVec2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfVec2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfXY ,opencascade::handle<TColgp_HArray1OfXY> , TColgp_Array1OfXY, Standard_Transient>>(m.attr("TColgp_HArray1OfXY"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_XY & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_XY> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfXY & (TColgp_HArray1OfXY::*)() const) static_cast<const TColgp_Array1OfXY & (TColgp_HArray1OfXY::*)() const>(&TColgp_HArray1OfXY::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfXY & (TColgp_HArray1OfXY::*)() ) static_cast<TColgp_Array1OfXY & (TColgp_HArray1OfXY::*)() >(&TColgp_HArray1OfXY::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfXY::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfXY::*)() const>(&TColgp_HArray1OfXY::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfXY::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfXY::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray1OfXYZ ,opencascade::handle<TColgp_HArray1OfXYZ> , TColgp_Array1OfXYZ, Standard_Transient>>(m.attr("TColgp_HArray1OfXYZ"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_XYZ & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_XYZ> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColgp_Array1OfXYZ & (TColgp_HArray1OfXYZ::*)() const) static_cast<const TColgp_Array1OfXYZ & (TColgp_HArray1OfXYZ::*)() const>(&TColgp_HArray1OfXYZ::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColgp_Array1OfXYZ & (TColgp_HArray1OfXYZ::*)() ) static_cast<TColgp_Array1OfXYZ & (TColgp_HArray1OfXYZ::*)() >(&TColgp_HArray1OfXYZ::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray1OfXYZ::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray1OfXYZ::*)() const>(&TColgp_HArray1OfXYZ::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray1OfXYZ::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray1OfXYZ::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfCirc2d ,opencascade::handle<TColgp_HArray2OfCirc2d> , TColgp_Array2OfCirc2d, Standard_Transient>>(m.attr("TColgp_HArray2OfCirc2d"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Circ2d & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Circ2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfCirc2d & (TColgp_HArray2OfCirc2d::*)() const) static_cast<const TColgp_Array2OfCirc2d & (TColgp_HArray2OfCirc2d::*)() const>(&TColgp_HArray2OfCirc2d::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfCirc2d & (TColgp_HArray2OfCirc2d::*)() ) static_cast<TColgp_Array2OfCirc2d & (TColgp_HArray2OfCirc2d::*)() >(&TColgp_HArray2OfCirc2d::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfCirc2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfCirc2d::*)() const>(&TColgp_HArray2OfCirc2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfCirc2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfCirc2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfDir ,opencascade::handle<TColgp_HArray2OfDir> , TColgp_Array2OfDir, Standard_Transient>>(m.attr("TColgp_HArray2OfDir"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Dir & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Dir> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfDir & (TColgp_HArray2OfDir::*)() const) static_cast<const TColgp_Array2OfDir & (TColgp_HArray2OfDir::*)() const>(&TColgp_HArray2OfDir::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfDir & (TColgp_HArray2OfDir::*)() ) static_cast<TColgp_Array2OfDir & (TColgp_HArray2OfDir::*)() >(&TColgp_HArray2OfDir::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfDir::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfDir::*)() const>(&TColgp_HArray2OfDir::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfDir::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfDir::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfDir2d ,opencascade::handle<TColgp_HArray2OfDir2d> , TColgp_Array2OfDir2d, Standard_Transient>>(m.attr("TColgp_HArray2OfDir2d"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Dir2d & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Dir2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfDir2d & (TColgp_HArray2OfDir2d::*)() const) static_cast<const TColgp_Array2OfDir2d & (TColgp_HArray2OfDir2d::*)() const>(&TColgp_HArray2OfDir2d::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfDir2d & (TColgp_HArray2OfDir2d::*)() ) static_cast<TColgp_Array2OfDir2d & (TColgp_HArray2OfDir2d::*)() >(&TColgp_HArray2OfDir2d::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfDir2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfDir2d::*)() const>(&TColgp_HArray2OfDir2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfDir2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfDir2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfLin2d ,opencascade::handle<TColgp_HArray2OfLin2d> , TColgp_Array2OfLin2d, Standard_Transient>>(m.attr("TColgp_HArray2OfLin2d"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Lin2d & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Lin2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfLin2d & (TColgp_HArray2OfLin2d::*)() const) static_cast<const TColgp_Array2OfLin2d & (TColgp_HArray2OfLin2d::*)() const>(&TColgp_HArray2OfLin2d::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfLin2d & (TColgp_HArray2OfLin2d::*)() ) static_cast<TColgp_Array2OfLin2d & (TColgp_HArray2OfLin2d::*)() >(&TColgp_HArray2OfLin2d::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfLin2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfLin2d::*)() const>(&TColgp_HArray2OfLin2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfLin2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfLin2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfPnt ,opencascade::handle<TColgp_HArray2OfPnt> , TColgp_Array2OfPnt, Standard_Transient>>(m.attr("TColgp_HArray2OfPnt"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Pnt & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Pnt> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfPnt & (TColgp_HArray2OfPnt::*)() const) static_cast<const TColgp_Array2OfPnt & (TColgp_HArray2OfPnt::*)() const>(&TColgp_HArray2OfPnt::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfPnt & (TColgp_HArray2OfPnt::*)() ) static_cast<TColgp_Array2OfPnt & (TColgp_HArray2OfPnt::*)() >(&TColgp_HArray2OfPnt::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfPnt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfPnt::*)() const>(&TColgp_HArray2OfPnt::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfPnt::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfPnt::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfPnt2d ,opencascade::handle<TColgp_HArray2OfPnt2d> , TColgp_Array2OfPnt2d, Standard_Transient>>(m.attr("TColgp_HArray2OfPnt2d"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Pnt2d & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Pnt2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfPnt2d & (TColgp_HArray2OfPnt2d::*)() const) static_cast<const TColgp_Array2OfPnt2d & (TColgp_HArray2OfPnt2d::*)() const>(&TColgp_HArray2OfPnt2d::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfPnt2d & (TColgp_HArray2OfPnt2d::*)() ) static_cast<TColgp_Array2OfPnt2d & (TColgp_HArray2OfPnt2d::*)() >(&TColgp_HArray2OfPnt2d::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfPnt2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfPnt2d::*)() const>(&TColgp_HArray2OfPnt2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfPnt2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfPnt2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfVec ,opencascade::handle<TColgp_HArray2OfVec> , TColgp_Array2OfVec, Standard_Transient>>(m.attr("TColgp_HArray2OfVec"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Vec & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Vec> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfVec & (TColgp_HArray2OfVec::*)() const) static_cast<const TColgp_Array2OfVec & (TColgp_HArray2OfVec::*)() const>(&TColgp_HArray2OfVec::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfVec & (TColgp_HArray2OfVec::*)() ) static_cast<TColgp_Array2OfVec & (TColgp_HArray2OfVec::*)() >(&TColgp_HArray2OfVec::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfVec::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfVec::*)() const>(&TColgp_HArray2OfVec::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfVec::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfVec::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfVec2d ,opencascade::handle<TColgp_HArray2OfVec2d> , TColgp_Array2OfVec2d, Standard_Transient>>(m.attr("TColgp_HArray2OfVec2d"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_Vec2d & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_Vec2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfVec2d & (TColgp_HArray2OfVec2d::*)() const) static_cast<const TColgp_Array2OfVec2d & (TColgp_HArray2OfVec2d::*)() const>(&TColgp_HArray2OfVec2d::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfVec2d & (TColgp_HArray2OfVec2d::*)() ) static_cast<TColgp_Array2OfVec2d & (TColgp_HArray2OfVec2d::*)() >(&TColgp_HArray2OfVec2d::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfVec2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfVec2d::*)() const>(&TColgp_HArray2OfVec2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfVec2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfVec2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfXY ,opencascade::handle<TColgp_HArray2OfXY> , TColgp_Array2OfXY, Standard_Transient>>(m.attr("TColgp_HArray2OfXY"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_XY & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_XY> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfXY & (TColgp_HArray2OfXY::*)() const) static_cast<const TColgp_Array2OfXY & (TColgp_HArray2OfXY::*)() const>(&TColgp_HArray2OfXY::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfXY & (TColgp_HArray2OfXY::*)() ) static_cast<TColgp_Array2OfXY & (TColgp_HArray2OfXY::*)() >(&TColgp_HArray2OfXY::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfXY::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfXY::*)() const>(&TColgp_HArray2OfXY::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfXY::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfXY::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HArray2OfXYZ ,opencascade::handle<TColgp_HArray2OfXYZ> , TColgp_Array2OfXYZ, Standard_Transient>>(m.attr("TColgp_HArray2OfXYZ"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const gp_XYZ & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<gp_XYZ> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColgp_Array2OfXYZ & (TColgp_HArray2OfXYZ::*)() const) static_cast<const TColgp_Array2OfXYZ & (TColgp_HArray2OfXYZ::*)() const>(&TColgp_HArray2OfXYZ::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColgp_Array2OfXYZ & (TColgp_HArray2OfXYZ::*)() ) static_cast<TColgp_Array2OfXYZ & (TColgp_HArray2OfXYZ::*)() >(&TColgp_HArray2OfXYZ::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HArray2OfXYZ::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HArray2OfXYZ::*)() const>(&TColgp_HArray2OfXYZ::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HArray2OfXYZ::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HArray2OfXYZ::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfDir ,opencascade::handle<TColgp_HSequenceOfDir> , TColgp_SequenceOfDir, Standard_Transient>>(m.attr("TColgp_HSequenceOfDir"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_Dir> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfDir & (TColgp_HSequenceOfDir::*)() const) static_cast<const TColgp_SequenceOfDir & (TColgp_HSequenceOfDir::*)() const>(&TColgp_HSequenceOfDir::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfDir::*)(  const gp_Dir & ) ) static_cast<void (TColgp_HSequenceOfDir::*)(  const gp_Dir & ) >(&TColgp_HSequenceOfDir::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfDir::*)( NCollection_Sequence<gp_Dir> & ) ) static_cast<void (TColgp_HSequenceOfDir::*)( NCollection_Sequence<gp_Dir> & ) >(&TColgp_HSequenceOfDir::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfDir & (TColgp_HSequenceOfDir::*)() ) static_cast<TColgp_SequenceOfDir & (TColgp_HSequenceOfDir::*)() >(&TColgp_HSequenceOfDir::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfDir::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfDir::*)() const>(&TColgp_HSequenceOfDir::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfDir::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfDir::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfDir2d ,opencascade::handle<TColgp_HSequenceOfDir2d> , TColgp_SequenceOfDir2d, Standard_Transient>>(m.attr("TColgp_HSequenceOfDir2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_Dir2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfDir2d & (TColgp_HSequenceOfDir2d::*)() const) static_cast<const TColgp_SequenceOfDir2d & (TColgp_HSequenceOfDir2d::*)() const>(&TColgp_HSequenceOfDir2d::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfDir2d::*)(  const gp_Dir2d & ) ) static_cast<void (TColgp_HSequenceOfDir2d::*)(  const gp_Dir2d & ) >(&TColgp_HSequenceOfDir2d::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfDir2d::*)( NCollection_Sequence<gp_Dir2d> & ) ) static_cast<void (TColgp_HSequenceOfDir2d::*)( NCollection_Sequence<gp_Dir2d> & ) >(&TColgp_HSequenceOfDir2d::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfDir2d & (TColgp_HSequenceOfDir2d::*)() ) static_cast<TColgp_SequenceOfDir2d & (TColgp_HSequenceOfDir2d::*)() >(&TColgp_HSequenceOfDir2d::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfDir2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfDir2d::*)() const>(&TColgp_HSequenceOfDir2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfDir2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfDir2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfPnt ,opencascade::handle<TColgp_HSequenceOfPnt> , TColgp_SequenceOfPnt, Standard_Transient>>(m.attr("TColgp_HSequenceOfPnt"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_Pnt> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfPnt & (TColgp_HSequenceOfPnt::*)() const) static_cast<const TColgp_SequenceOfPnt & (TColgp_HSequenceOfPnt::*)() const>(&TColgp_HSequenceOfPnt::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfPnt::*)(  const gp_Pnt & ) ) static_cast<void (TColgp_HSequenceOfPnt::*)(  const gp_Pnt & ) >(&TColgp_HSequenceOfPnt::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfPnt::*)( NCollection_Sequence<gp_Pnt> & ) ) static_cast<void (TColgp_HSequenceOfPnt::*)( NCollection_Sequence<gp_Pnt> & ) >(&TColgp_HSequenceOfPnt::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfPnt & (TColgp_HSequenceOfPnt::*)() ) static_cast<TColgp_SequenceOfPnt & (TColgp_HSequenceOfPnt::*)() >(&TColgp_HSequenceOfPnt::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfPnt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfPnt::*)() const>(&TColgp_HSequenceOfPnt::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfPnt::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfPnt::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfPnt2d ,opencascade::handle<TColgp_HSequenceOfPnt2d> , TColgp_SequenceOfPnt2d, Standard_Transient>>(m.attr("TColgp_HSequenceOfPnt2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_Pnt2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfPnt2d & (TColgp_HSequenceOfPnt2d::*)() const) static_cast<const TColgp_SequenceOfPnt2d & (TColgp_HSequenceOfPnt2d::*)() const>(&TColgp_HSequenceOfPnt2d::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfPnt2d::*)(  const gp_Pnt2d & ) ) static_cast<void (TColgp_HSequenceOfPnt2d::*)(  const gp_Pnt2d & ) >(&TColgp_HSequenceOfPnt2d::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfPnt2d::*)( NCollection_Sequence<gp_Pnt2d> & ) ) static_cast<void (TColgp_HSequenceOfPnt2d::*)( NCollection_Sequence<gp_Pnt2d> & ) >(&TColgp_HSequenceOfPnt2d::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfPnt2d & (TColgp_HSequenceOfPnt2d::*)() ) static_cast<TColgp_SequenceOfPnt2d & (TColgp_HSequenceOfPnt2d::*)() >(&TColgp_HSequenceOfPnt2d::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfPnt2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfPnt2d::*)() const>(&TColgp_HSequenceOfPnt2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfPnt2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfPnt2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfVec ,opencascade::handle<TColgp_HSequenceOfVec> , TColgp_SequenceOfVec, Standard_Transient>>(m.attr("TColgp_HSequenceOfVec"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_Vec> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfVec & (TColgp_HSequenceOfVec::*)() const) static_cast<const TColgp_SequenceOfVec & (TColgp_HSequenceOfVec::*)() const>(&TColgp_HSequenceOfVec::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfVec::*)(  const gp_Vec & ) ) static_cast<void (TColgp_HSequenceOfVec::*)(  const gp_Vec & ) >(&TColgp_HSequenceOfVec::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfVec::*)( NCollection_Sequence<gp_Vec> & ) ) static_cast<void (TColgp_HSequenceOfVec::*)( NCollection_Sequence<gp_Vec> & ) >(&TColgp_HSequenceOfVec::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfVec & (TColgp_HSequenceOfVec::*)() ) static_cast<TColgp_SequenceOfVec & (TColgp_HSequenceOfVec::*)() >(&TColgp_HSequenceOfVec::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfVec::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfVec::*)() const>(&TColgp_HSequenceOfVec::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfVec::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfVec::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfVec2d ,opencascade::handle<TColgp_HSequenceOfVec2d> , TColgp_SequenceOfVec2d, Standard_Transient>>(m.attr("TColgp_HSequenceOfVec2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_Vec2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfVec2d & (TColgp_HSequenceOfVec2d::*)() const) static_cast<const TColgp_SequenceOfVec2d & (TColgp_HSequenceOfVec2d::*)() const>(&TColgp_HSequenceOfVec2d::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfVec2d::*)(  const gp_Vec2d & ) ) static_cast<void (TColgp_HSequenceOfVec2d::*)(  const gp_Vec2d & ) >(&TColgp_HSequenceOfVec2d::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfVec2d::*)( NCollection_Sequence<gp_Vec2d> & ) ) static_cast<void (TColgp_HSequenceOfVec2d::*)( NCollection_Sequence<gp_Vec2d> & ) >(&TColgp_HSequenceOfVec2d::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfVec2d & (TColgp_HSequenceOfVec2d::*)() ) static_cast<TColgp_SequenceOfVec2d & (TColgp_HSequenceOfVec2d::*)() >(&TColgp_HSequenceOfVec2d::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfVec2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfVec2d::*)() const>(&TColgp_HSequenceOfVec2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfVec2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfVec2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfXY ,opencascade::handle<TColgp_HSequenceOfXY> , TColgp_SequenceOfXY, Standard_Transient>>(m.attr("TColgp_HSequenceOfXY"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_XY> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfXY & (TColgp_HSequenceOfXY::*)() const) static_cast<const TColgp_SequenceOfXY & (TColgp_HSequenceOfXY::*)() const>(&TColgp_HSequenceOfXY::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfXY::*)(  const gp_XY & ) ) static_cast<void (TColgp_HSequenceOfXY::*)(  const gp_XY & ) >(&TColgp_HSequenceOfXY::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfXY::*)( NCollection_Sequence<gp_XY> & ) ) static_cast<void (TColgp_HSequenceOfXY::*)( NCollection_Sequence<gp_XY> & ) >(&TColgp_HSequenceOfXY::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfXY & (TColgp_HSequenceOfXY::*)() ) static_cast<TColgp_SequenceOfXY & (TColgp_HSequenceOfXY::*)() >(&TColgp_HSequenceOfXY::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfXY::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfXY::*)() const>(&TColgp_HSequenceOfXY::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfXY::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfXY::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColgp_HSequenceOfXYZ ,opencascade::handle<TColgp_HSequenceOfXYZ> , TColgp_SequenceOfXYZ, Standard_Transient>>(m.attr("TColgp_HSequenceOfXYZ"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_XYZ> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColgp_SequenceOfXYZ & (TColgp_HSequenceOfXYZ::*)() const) static_cast<const TColgp_SequenceOfXYZ & (TColgp_HSequenceOfXYZ::*)() const>(&TColgp_HSequenceOfXYZ::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColgp_HSequenceOfXYZ::*)(  const gp_XYZ & ) ) static_cast<void (TColgp_HSequenceOfXYZ::*)(  const gp_XYZ & ) >(&TColgp_HSequenceOfXYZ::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColgp_HSequenceOfXYZ::*)( NCollection_Sequence<gp_XYZ> & ) ) static_cast<void (TColgp_HSequenceOfXYZ::*)( NCollection_Sequence<gp_XYZ> & ) >(&TColgp_HSequenceOfXYZ::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColgp_SequenceOfXYZ & (TColgp_HSequenceOfXYZ::*)() ) static_cast<TColgp_SequenceOfXYZ & (TColgp_HSequenceOfXYZ::*)() >(&TColgp_HSequenceOfXYZ::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfXYZ::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColgp_HSequenceOfXYZ::*)() const>(&TColgp_HSequenceOfXYZ::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColgp_HSequenceOfXYZ::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColgp_HSequenceOfXYZ::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\TColgp_HArray2OfXYZ.hxx
// ./opencascade\TColgp_HArray1OfPnt2d.hxx
// ./opencascade\TColgp_HArray1OfVec2d.hxx
// ./opencascade\TColgp_Array2OfLin2d.hxx
// ./opencascade\TColgp_HArray1OfPnt.hxx
// ./opencascade\TColgp_HArray1OfVec.hxx
// ./opencascade\TColgp_HArray1OfDir.hxx
// ./opencascade\TColgp_HArray2OfLin2d.hxx
// ./opencascade\TColgp_Array1OfPnt2d.hxx
// ./opencascade\TColgp_HArray2OfDir.hxx
// ./opencascade\TColgp_HArray2OfDir2d.hxx
// ./opencascade\TColgp_Array1OfXY.hxx
// ./opencascade\TColgp_Array2OfDir.hxx
// ./opencascade\TColgp_HSequenceOfPnt.hxx
// ./opencascade\TColgp_SequenceOfPnt.hxx
// ./opencascade\TColgp_HArray2OfCirc2d.hxx
// ./opencascade\TColgp_Array2OfXY.hxx
// ./opencascade\TColgp_SequenceOfDir2d.hxx
// ./opencascade\TColgp_Array1OfDir2d.hxx
// ./opencascade\TColgp_HArray1OfCirc2d.hxx
// ./opencascade\TColgp_Array2OfVec2d.hxx
// ./opencascade\TColgp_HSequenceOfXYZ.hxx
// ./opencascade\TColgp_Array2OfDir2d.hxx
// ./opencascade\TColgp_Array1OfDir.hxx
// ./opencascade\TColgp_Array2OfVec.hxx
// ./opencascade\TColgp_SequenceOfPnt2d.hxx
// ./opencascade\TColgp_Array2OfPnt2d.hxx
// ./opencascade\TColgp_HSequenceOfDir2d.hxx
// ./opencascade\TColgp_SequenceOfAx1.hxx
// ./opencascade\TColgp_HArray1OfXYZ.hxx
// ./opencascade\TColgp_Array1OfXYZ.hxx
// ./opencascade\TColgp_SequenceOfArray1OfPnt2d.hxx
// ./opencascade\TColgp_HSequenceOfVec2d.hxx
// ./opencascade\TColgp_HArray2OfVec.hxx
// ./opencascade\TColgp_Array2OfXYZ.hxx
// ./opencascade\TColgp_SequenceOfVec2d.hxx
// ./opencascade\TColgp_SequenceOfXY.hxx
// ./opencascade\TColgp_Array1OfVec.hxx
// ./opencascade\TColgp_SequenceOfDir.hxx
// ./opencascade\TColgp_HArray2OfVec2d.hxx
// ./opencascade\TColgp_HSequenceOfDir.hxx
// ./opencascade\TColgp_HSequenceOfXY.hxx
// ./opencascade\TColgp_HSequenceOfPnt2d.hxx
// ./opencascade\TColgp_Array1OfCirc2d.hxx
// ./opencascade\TColgp_HArray1OfLin2d.hxx
// ./opencascade\TColgp_Array2OfPnt.hxx
// ./opencascade\TColgp_HArray2OfXY.hxx
// ./opencascade\TColgp_Array1OfPnt.hxx
// ./opencascade\TColgp_SequenceOfVec.hxx
// ./opencascade\TColgp_HArray1OfDir2d.hxx
// ./opencascade\TColgp_HArray2OfPnt.hxx
// ./opencascade\TColgp_HArray2OfPnt2d.hxx
// ./opencascade\TColgp_Array1OfVec2d.hxx
// ./opencascade\TColgp_Array2OfCirc2d.hxx
// ./opencascade\TColgp_Array1OfLin2d.hxx
// ./opencascade\TColgp_HArray1OfXY.hxx
// ./opencascade\TColgp_SequenceOfXYZ.hxx
// ./opencascade\TColgp_HSequenceOfVec.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array2<gp_Lin2d>(m,"TColgp_Array2OfLin2d");
    register_template_NCollection_Array1<gp_Pnt2d>(m,"TColgp_Array1OfPnt2d");
    register_template_NCollection_Array1<gp_XY>(m,"TColgp_Array1OfXY");
    register_template_NCollection_Array2<gp_Dir>(m,"TColgp_Array2OfDir");
    register_template_NCollection_Sequence<gp_Pnt>(m,"TColgp_SequenceOfPnt");
    register_template_NCollection_Array2<gp_XY>(m,"TColgp_Array2OfXY");
    register_template_NCollection_Sequence<gp_Dir2d>(m,"TColgp_SequenceOfDir2d");
    register_template_NCollection_Array1<gp_Dir2d>(m,"TColgp_Array1OfDir2d");
    register_template_NCollection_Array2<gp_Vec2d>(m,"TColgp_Array2OfVec2d");
    register_template_NCollection_Array2<gp_Dir2d>(m,"TColgp_Array2OfDir2d");
    register_template_NCollection_Array1<gp_Dir>(m,"TColgp_Array1OfDir");
    register_template_NCollection_Array2<gp_Vec>(m,"TColgp_Array2OfVec");
    register_template_NCollection_Sequence<gp_Pnt2d>(m,"TColgp_SequenceOfPnt2d");
    register_template_NCollection_Array2<gp_Pnt2d>(m,"TColgp_Array2OfPnt2d");
    register_template_NCollection_Sequence<gp_Ax1>(m,"TColgp_SequenceOfAx1");
    register_template_NCollection_Array1<gp_XYZ>(m,"TColgp_Array1OfXYZ");
    register_template_NCollection_Sequence<opencascade::handle<TColgp_HArray1OfPnt2d> >(m,"TColgp_SequenceOfArray1OfPnt2d");
    register_template_NCollection_Array2<gp_XYZ>(m,"TColgp_Array2OfXYZ");
    register_template_NCollection_Sequence<gp_Vec2d>(m,"TColgp_SequenceOfVec2d");
    register_template_NCollection_Sequence<gp_XY>(m,"TColgp_SequenceOfXY");
    register_template_NCollection_Array1<gp_Vec>(m,"TColgp_Array1OfVec");
    register_template_NCollection_Sequence<gp_Dir>(m,"TColgp_SequenceOfDir");
    register_template_NCollection_Array1<gp_Circ2d>(m,"TColgp_Array1OfCirc2d");
    register_template_NCollection_Array2<gp_Pnt>(m,"TColgp_Array2OfPnt");
    register_template_NCollection_Array1<gp_Pnt>(m,"TColgp_Array1OfPnt");
    register_template_NCollection_Sequence<gp_Vec>(m,"TColgp_SequenceOfVec");
    register_template_NCollection_Array1<gp_Vec2d>(m,"TColgp_Array1OfVec2d");
    register_template_NCollection_Array2<gp_Circ2d>(m,"TColgp_Array2OfCirc2d");
    register_template_NCollection_Array1<gp_Lin2d>(m,"TColgp_Array1OfLin2d");
    register_template_NCollection_Sequence<gp_XYZ>(m,"TColgp_SequenceOfXYZ");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
