
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <TColGeom2d_Array1OfBezierCurve.hxx>
#include <TColGeom2d_Array1OfBSplineCurve.hxx>
#include <TColGeom2d_Array1OfCurve.hxx>
#include <TColGeom2d_HArray1OfBezierCurve.hxx>
#include <TColGeom2d_HArray1OfBSplineCurve.hxx>
#include <TColGeom2d_HArray1OfCurve.hxx>
#include <TColGeom2d_HSequenceOfBoundedCurve.hxx>
#include <TColGeom2d_HSequenceOfCurve.hxx>
#include <TColGeom2d_SequenceOfBoundedCurve.hxx>
#include <TColGeom2d_SequenceOfCurve.hxx>
#include <TColGeom2d_SequenceOfGeometry.hxx>

// template related includes
// ./opencascade/TColGeom2d_Array1OfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_SequenceOfBoundedCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_Array1OfBezierCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_SequenceOfGeometry.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_Array1OfBSplineCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_SequenceOfCurve.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColGeom2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TColGeom2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<TColGeom2d_HSequenceOfBoundedCurve ,std::unique_ptr<TColGeom2d_HSequenceOfBoundedCurve>  >>(m.attr("TColGeom2d_HSequenceOfBoundedCurve"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Geom2d_BoundedCurve> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const TColGeom2d_SequenceOfBoundedCurve & (TColGeom2d_HSequenceOfBoundedCurve::*)() const) static_cast<const TColGeom2d_SequenceOfBoundedCurve & (TColGeom2d_HSequenceOfBoundedCurve::*)() const>(&TColGeom2d_HSequenceOfBoundedCurve::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColGeom2d_HSequenceOfBoundedCurve::*)(  const opencascade::handle<Geom2d_BoundedCurve> &  ) ) static_cast<void (TColGeom2d_HSequenceOfBoundedCurve::*)(  const opencascade::handle<Geom2d_BoundedCurve> &  ) >(&TColGeom2d_HSequenceOfBoundedCurve::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColGeom2d_HSequenceOfBoundedCurve::*)( NCollection_Sequence<opencascade::handle<Geom2d_BoundedCurve> > &  ) ) static_cast<void (TColGeom2d_HSequenceOfBoundedCurve::*)( NCollection_Sequence<opencascade::handle<Geom2d_BoundedCurve> > &  ) >(&TColGeom2d_HSequenceOfBoundedCurve::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColGeom2d_SequenceOfBoundedCurve & (TColGeom2d_HSequenceOfBoundedCurve::*)() ) static_cast<TColGeom2d_SequenceOfBoundedCurve & (TColGeom2d_HSequenceOfBoundedCurve::*)() >(&TColGeom2d_HSequenceOfBoundedCurve::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom2d_HSequenceOfBoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom2d_HSequenceOfBoundedCurve::*)() const>(&TColGeom2d_HSequenceOfBoundedCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom2d_HSequenceOfBoundedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom2d_HSequenceOfBoundedCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom2d_HArray1OfBSplineCurve ,std::unique_ptr<TColGeom2d_HArray1OfBSplineCurve>  >>(m.attr("TColGeom2d_HArray1OfBSplineCurve"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom2d_BSplineCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom2d_BSplineCurve> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const TColGeom2d_Array1OfBSplineCurve & (TColGeom2d_HArray1OfBSplineCurve::*)() const) static_cast<const TColGeom2d_Array1OfBSplineCurve & (TColGeom2d_HArray1OfBSplineCurve::*)() const>(&TColGeom2d_HArray1OfBSplineCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom2d_Array1OfBSplineCurve & (TColGeom2d_HArray1OfBSplineCurve::*)() ) static_cast<TColGeom2d_Array1OfBSplineCurve & (TColGeom2d_HArray1OfBSplineCurve::*)() >(&TColGeom2d_HArray1OfBSplineCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom2d_HArray1OfBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom2d_HArray1OfBSplineCurve::*)() const>(&TColGeom2d_HArray1OfBSplineCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom2d_HArray1OfBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom2d_HArray1OfBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom2d_HArray1OfBezierCurve ,std::unique_ptr<TColGeom2d_HArray1OfBezierCurve>  >>(m.attr("TColGeom2d_HArray1OfBezierCurve"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom2d_BezierCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom2d_BezierCurve> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const TColGeom2d_Array1OfBezierCurve & (TColGeom2d_HArray1OfBezierCurve::*)() const) static_cast<const TColGeom2d_Array1OfBezierCurve & (TColGeom2d_HArray1OfBezierCurve::*)() const>(&TColGeom2d_HArray1OfBezierCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom2d_Array1OfBezierCurve & (TColGeom2d_HArray1OfBezierCurve::*)() ) static_cast<TColGeom2d_Array1OfBezierCurve & (TColGeom2d_HArray1OfBezierCurve::*)() >(&TColGeom2d_HArray1OfBezierCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom2d_HArray1OfBezierCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom2d_HArray1OfBezierCurve::*)() const>(&TColGeom2d_HArray1OfBezierCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom2d_HArray1OfBezierCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom2d_HArray1OfBezierCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom2d_HSequenceOfCurve ,std::unique_ptr<TColGeom2d_HSequenceOfCurve>  >>(m.attr("TColGeom2d_HSequenceOfCurve"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Geom2d_Curve> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const TColGeom2d_SequenceOfCurve & (TColGeom2d_HSequenceOfCurve::*)() const) static_cast<const TColGeom2d_SequenceOfCurve & (TColGeom2d_HSequenceOfCurve::*)() const>(&TColGeom2d_HSequenceOfCurve::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColGeom2d_HSequenceOfCurve::*)(  const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (TColGeom2d_HSequenceOfCurve::*)(  const opencascade::handle<Geom2d_Curve> &  ) >(&TColGeom2d_HSequenceOfCurve::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColGeom2d_HSequenceOfCurve::*)( NCollection_Sequence<opencascade::handle<Geom2d_Curve> > &  ) ) static_cast<void (TColGeom2d_HSequenceOfCurve::*)( NCollection_Sequence<opencascade::handle<Geom2d_Curve> > &  ) >(&TColGeom2d_HSequenceOfCurve::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColGeom2d_SequenceOfCurve & (TColGeom2d_HSequenceOfCurve::*)() ) static_cast<TColGeom2d_SequenceOfCurve & (TColGeom2d_HSequenceOfCurve::*)() >(&TColGeom2d_HSequenceOfCurve::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom2d_HSequenceOfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom2d_HSequenceOfCurve::*)() const>(&TColGeom2d_HSequenceOfCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom2d_HSequenceOfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom2d_HSequenceOfCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom2d_HArray1OfCurve ,std::unique_ptr<TColGeom2d_HArray1OfCurve>  >>(m.attr("TColGeom2d_HArray1OfCurve"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom2d_Curve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom2d_Curve> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const TColGeom2d_Array1OfCurve & (TColGeom2d_HArray1OfCurve::*)() const) static_cast<const TColGeom2d_Array1OfCurve & (TColGeom2d_HArray1OfCurve::*)() const>(&TColGeom2d_HArray1OfCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom2d_Array1OfCurve & (TColGeom2d_HArray1OfCurve::*)() ) static_cast<TColGeom2d_Array1OfCurve & (TColGeom2d_HArray1OfCurve::*)() >(&TColGeom2d_HArray1OfCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom2d_HArray1OfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom2d_HArray1OfCurve::*)() const>(&TColGeom2d_HArray1OfCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom2d_HArray1OfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom2d_HArray1OfCurve::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/TColGeom2d_Array1OfCurve.hxx
// ./opencascade/TColGeom2d_SequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom2d_Array1OfBezierCurve.hxx
// ./opencascade/TColGeom2d_HSequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom2d_HSequenceOfCurve.hxx
// ./opencascade/TColGeom2d_HArray1OfBSplineCurve.hxx
// ./opencascade/TColGeom2d_SequenceOfGeometry.hxx
// ./opencascade/TColGeom2d_HArray1OfCurve.hxx
// ./opencascade/TColGeom2d_HArray1OfBezierCurve.hxx
// ./opencascade/TColGeom2d_Array1OfBSplineCurve.hxx
// ./opencascade/TColGeom2d_SequenceOfCurve.hxx

// operators

// register typdefs
// ./opencascade/TColGeom2d_Array1OfCurve.hxx
    register_template_NCollection_Array1<opencascade::handle<Geom2d_Curve> >(m,"TColGeom2d_Array1OfCurve");  
// ./opencascade/TColGeom2d_SequenceOfBoundedCurve.hxx
    register_template_NCollection_Sequence<opencascade::handle<Geom2d_BoundedCurve> >(m,"TColGeom2d_SequenceOfBoundedCurve");  
// ./opencascade/TColGeom2d_Array1OfBezierCurve.hxx
    register_template_NCollection_Array1<opencascade::handle<Geom2d_BezierCurve> >(m,"TColGeom2d_Array1OfBezierCurve");  
// ./opencascade/TColGeom2d_HSequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom2d_HSequenceOfCurve.hxx
// ./opencascade/TColGeom2d_HArray1OfBSplineCurve.hxx
// ./opencascade/TColGeom2d_SequenceOfGeometry.hxx
    register_template_NCollection_Sequence<opencascade::handle<Geom2d_Geometry> >(m,"TColGeom2d_SequenceOfGeometry");  
// ./opencascade/TColGeom2d_HArray1OfCurve.hxx
// ./opencascade/TColGeom2d_HArray1OfBezierCurve.hxx
// ./opencascade/TColGeom2d_Array1OfBSplineCurve.hxx
    register_template_NCollection_Array1<opencascade::handle<Geom2d_BSplineCurve> >(m,"TColGeom2d_Array1OfBSplineCurve");  
// ./opencascade/TColGeom2d_SequenceOfCurve.hxx
    register_template_NCollection_Sequence<opencascade::handle<Geom2d_Curve> >(m,"TColGeom2d_SequenceOfCurve");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
