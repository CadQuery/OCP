
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
#include <TColGeom_Array1OfBezierCurve.hxx>
#include <TColGeom_Array1OfBSplineCurve.hxx>
#include <TColGeom_Array1OfCurve.hxx>
#include <TColGeom_Array1OfSurface.hxx>
#include <TColGeom_Array2OfBezierSurface.hxx>
#include <TColGeom_Array2OfSurface.hxx>
#include <TColGeom_HArray1OfBezierCurve.hxx>
#include <TColGeom_HArray1OfBSplineCurve.hxx>
#include <TColGeom_HArray1OfCurve.hxx>
#include <TColGeom_HArray1OfSurface.hxx>
#include <TColGeom_HArray2OfSurface.hxx>
#include <TColGeom_HSequenceOfBoundedCurve.hxx>
#include <TColGeom_HSequenceOfCurve.hxx>
#include <TColGeom_SequenceOfBoundedCurve.hxx>
#include <TColGeom_SequenceOfCurve.hxx>
#include <TColGeom_SequenceOfSurface.hxx>

// template related includes
// ./opencascade\TColGeom_SequenceOfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfBSplineCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array2OfBezierSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array2OfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_SequenceOfBoundedCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfBezierCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_SequenceOfCurve.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TColGeom"));


//Python trampoline classes

// classes


    static_cast<py::class_<TColGeom_HArray1OfBSplineCurve ,opencascade::handle<TColGeom_HArray1OfBSplineCurve> , TColGeom_Array1OfBSplineCurve, Standard_Transient>>(m.attr("TColGeom_HArray1OfBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_BSplineCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_BSplineCurve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() const) static_cast<const TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() const>(&TColGeom_HArray1OfBSplineCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() ) static_cast<TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() >(&TColGeom_HArray1OfBSplineCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBSplineCurve::*)() const>(&TColGeom_HArray1OfBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColGeom_HArray1OfBezierCurve ,opencascade::handle<TColGeom_HArray1OfBezierCurve> , TColGeom_Array1OfBezierCurve, Standard_Transient>>(m.attr("TColGeom_HArray1OfBezierCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_BezierCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_BezierCurve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() const) static_cast<const TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() const>(&TColGeom_HArray1OfBezierCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() ) static_cast<TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() >(&TColGeom_HArray1OfBezierCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBezierCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBezierCurve::*)() const>(&TColGeom_HArray1OfBezierCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfBezierCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfBezierCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColGeom_HArray1OfCurve ,opencascade::handle<TColGeom_HArray1OfCurve> , TColGeom_Array1OfCurve, Standard_Transient>>(m.attr("TColGeom_HArray1OfCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_Curve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_Curve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() const) static_cast<const TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() const>(&TColGeom_HArray1OfCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() ) static_cast<TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() >(&TColGeom_HArray1OfCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfCurve::*)() const>(&TColGeom_HArray1OfCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColGeom_HArray1OfSurface ,opencascade::handle<TColGeom_HArray1OfSurface> , TColGeom_Array1OfSurface, Standard_Transient>>(m.attr("TColGeom_HArray1OfSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_Surface> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_Surface> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() const) static_cast<const TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() const>(&TColGeom_HArray1OfSurface::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() ) static_cast<TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() >(&TColGeom_HArray1OfSurface::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfSurface::*)() const>(&TColGeom_HArray1OfSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColGeom_HArray2OfSurface ,opencascade::handle<TColGeom_HArray2OfSurface> , TColGeom_Array2OfSurface, Standard_Transient>>(m.attr("TColGeom_HArray2OfSurface"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_Surface> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<Geom_Surface> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() const) static_cast<const TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() const>(&TColGeom_HArray2OfSurface::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() ) static_cast<TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() >(&TColGeom_HArray2OfSurface::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray2OfSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray2OfSurface::*)() const>(&TColGeom_HArray2OfSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray2OfSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray2OfSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColGeom_HSequenceOfBoundedCurve ,opencascade::handle<TColGeom_HSequenceOfBoundedCurve> , TColGeom_SequenceOfBoundedCurve, Standard_Transient>>(m.attr("TColGeom_HSequenceOfBoundedCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() const) static_cast<const TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() const>(&TColGeom_HSequenceOfBoundedCurve::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColGeom_HSequenceOfBoundedCurve::*)(  const opencascade::handle<Geom_BoundedCurve> & ) ) static_cast<void (TColGeom_HSequenceOfBoundedCurve::*)(  const opencascade::handle<Geom_BoundedCurve> & ) >(&TColGeom_HSequenceOfBoundedCurve::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColGeom_HSequenceOfBoundedCurve::*)( NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> > & ) ) static_cast<void (TColGeom_HSequenceOfBoundedCurve::*)( NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> > & ) >(&TColGeom_HSequenceOfBoundedCurve::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() ) static_cast<TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() >(&TColGeom_HSequenceOfBoundedCurve::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfBoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfBoundedCurve::*)() const>(&TColGeom_HSequenceOfBoundedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HSequenceOfBoundedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HSequenceOfBoundedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColGeom_HSequenceOfCurve ,opencascade::handle<TColGeom_HSequenceOfCurve> , TColGeom_SequenceOfCurve, Standard_Transient>>(m.attr("TColGeom_HSequenceOfCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Geom_Curve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() const) static_cast<const TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() const>(&TColGeom_HSequenceOfCurve::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColGeom_HSequenceOfCurve::*)(  const opencascade::handle<Geom_Curve> & ) ) static_cast<void (TColGeom_HSequenceOfCurve::*)(  const opencascade::handle<Geom_Curve> & ) >(&TColGeom_HSequenceOfCurve::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColGeom_HSequenceOfCurve::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) ) static_cast<void (TColGeom_HSequenceOfCurve::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) >(&TColGeom_HSequenceOfCurve::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() ) static_cast<TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() >(&TColGeom_HSequenceOfCurve::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfCurve::*)() const>(&TColGeom_HSequenceOfCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HSequenceOfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HSequenceOfCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\TColGeom_SequenceOfSurface.hxx
// ./opencascade\TColGeom_Array1OfCurve.hxx
// ./opencascade\TColGeom_HArray1OfBezierCurve.hxx
// ./opencascade\TColGeom_HArray1OfSurface.hxx
// ./opencascade\TColGeom_Array1OfBSplineCurve.hxx
// ./opencascade\TColGeom_Array2OfBezierSurface.hxx
// ./opencascade\TColGeom_Array2OfSurface.hxx
// ./opencascade\TColGeom_HArray1OfBSplineCurve.hxx
// ./opencascade\TColGeom_SequenceOfBoundedCurve.hxx
// ./opencascade\TColGeom_HSequenceOfBoundedCurve.hxx
// ./opencascade\TColGeom_Array1OfBezierCurve.hxx
// ./opencascade\TColGeom_Array1OfSurface.hxx
// ./opencascade\TColGeom_HArray2OfSurface.hxx
// ./opencascade\TColGeom_HSequenceOfCurve.hxx
// ./opencascade\TColGeom_SequenceOfCurve.hxx
// ./opencascade\TColGeom_HArray1OfCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<Geom_Surface> >(m,"TColGeom_SequenceOfSurface");
    register_template_NCollection_Array1<opencascade::handle<Geom_Curve> >(m,"TColGeom_Array1OfCurve");
    register_template_NCollection_Array1<opencascade::handle<Geom_BSplineCurve> >(m,"TColGeom_Array1OfBSplineCurve");
    register_template_NCollection_Array2<opencascade::handle<Geom_BezierSurface> >(m,"TColGeom_Array2OfBezierSurface");
    register_template_NCollection_Array2<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array2OfSurface");
    register_template_NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> >(m,"TColGeom_SequenceOfBoundedCurve");
    register_template_NCollection_Array1<opencascade::handle<Geom_BezierCurve> >(m,"TColGeom_Array1OfBezierCurve");
    register_template_NCollection_Array1<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array1OfSurface");
    register_template_NCollection_Sequence<opencascade::handle<Geom_Curve> >(m,"TColGeom_SequenceOfCurve");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
