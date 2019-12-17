
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

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
// ./opencascade/TColGeom_SequenceOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfBSplineCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_SequenceOfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfBezierCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array2OfBezierSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array2OfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_SequenceOfBoundedCurve.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TColGeom"));


//Python trampoline classes

// classes


    static_cast<py::class_<TColGeom_HSequenceOfCurve ,std::unique_ptr<TColGeom_HSequenceOfCurve>  >>(m.attr("TColGeom_HSequenceOfCurve"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Geom_Curve> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() const) static_cast<const TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() const>(&TColGeom_HSequenceOfCurve::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColGeom_HSequenceOfCurve::*)(  const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (TColGeom_HSequenceOfCurve::*)(  const opencascade::handle<Geom_Curve> &  ) >(&TColGeom_HSequenceOfCurve::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColGeom_HSequenceOfCurve::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) ) static_cast<void (TColGeom_HSequenceOfCurve::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) >(&TColGeom_HSequenceOfCurve::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() ) static_cast<TColGeom_SequenceOfCurve & (TColGeom_HSequenceOfCurve::*)() >(&TColGeom_HSequenceOfCurve::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfCurve::*)() const>(&TColGeom_HSequenceOfCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HSequenceOfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HSequenceOfCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom_HArray1OfCurve ,std::unique_ptr<TColGeom_HArray1OfCurve>  >>(m.attr("TColGeom_HArray1OfCurve"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_Curve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_Curve> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() const) static_cast<const TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() const>(&TColGeom_HArray1OfCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() ) static_cast<TColGeom_Array1OfCurve & (TColGeom_HArray1OfCurve::*)() >(&TColGeom_HArray1OfCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfCurve::*)() const>(&TColGeom_HArray1OfCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom_HSequenceOfBoundedCurve ,std::unique_ptr<TColGeom_HSequenceOfBoundedCurve>  >>(m.attr("TColGeom_HSequenceOfBoundedCurve"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() const) static_cast<const TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() const>(&TColGeom_HSequenceOfBoundedCurve::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColGeom_HSequenceOfBoundedCurve::*)(  const opencascade::handle<Geom_BoundedCurve> &  ) ) static_cast<void (TColGeom_HSequenceOfBoundedCurve::*)(  const opencascade::handle<Geom_BoundedCurve> &  ) >(&TColGeom_HSequenceOfBoundedCurve::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColGeom_HSequenceOfBoundedCurve::*)( NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> > &  ) ) static_cast<void (TColGeom_HSequenceOfBoundedCurve::*)( NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> > &  ) >(&TColGeom_HSequenceOfBoundedCurve::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() ) static_cast<TColGeom_SequenceOfBoundedCurve & (TColGeom_HSequenceOfBoundedCurve::*)() >(&TColGeom_HSequenceOfBoundedCurve::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfBoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HSequenceOfBoundedCurve::*)() const>(&TColGeom_HSequenceOfBoundedCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HSequenceOfBoundedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HSequenceOfBoundedCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom_HArray1OfSurface ,std::unique_ptr<TColGeom_HArray1OfSurface>  >>(m.attr("TColGeom_HArray1OfSurface"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_Surface> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_Surface> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() const) static_cast<const TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() const>(&TColGeom_HArray1OfSurface::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() ) static_cast<TColGeom_Array1OfSurface & (TColGeom_HArray1OfSurface::*)() >(&TColGeom_HArray1OfSurface::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfSurface::*)() const>(&TColGeom_HArray1OfSurface::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfSurface::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom_HArray1OfBezierCurve ,std::unique_ptr<TColGeom_HArray1OfBezierCurve>  >>(m.attr("TColGeom_HArray1OfBezierCurve"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_BezierCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_BezierCurve> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() const) static_cast<const TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() const>(&TColGeom_HArray1OfBezierCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() ) static_cast<TColGeom_Array1OfBezierCurve & (TColGeom_HArray1OfBezierCurve::*)() >(&TColGeom_HArray1OfBezierCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBezierCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBezierCurve::*)() const>(&TColGeom_HArray1OfBezierCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfBezierCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfBezierCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom_HArray2OfSurface ,std::unique_ptr<TColGeom_HArray2OfSurface>  >>(m.attr("TColGeom_HArray2OfSurface"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_Surface> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<Geom_Surface> > & >()  , py::arg("theOther") )
        .def("Array2",
             (const TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() const) static_cast<const TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() const>(&TColGeom_HArray2OfSurface::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() ) static_cast<TColGeom_Array2OfSurface & (TColGeom_HArray2OfSurface::*)() >(&TColGeom_HArray2OfSurface::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray2OfSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray2OfSurface::*)() const>(&TColGeom_HArray2OfSurface::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray2OfSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray2OfSurface::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TColGeom_HArray1OfBSplineCurve ,std::unique_ptr<TColGeom_HArray1OfBSplineCurve>  >>(m.attr("TColGeom_HArray1OfBSplineCurve"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Geom_BSplineCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Geom_BSplineCurve> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() const) static_cast<const TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() const>(&TColGeom_HArray1OfBSplineCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() ) static_cast<TColGeom_Array1OfBSplineCurve & (TColGeom_HArray1OfBSplineCurve::*)() >(&TColGeom_HArray1OfBSplineCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColGeom_HArray1OfBSplineCurve::*)() const>(&TColGeom_HArray1OfBSplineCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColGeom_HArray1OfBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColGeom_HArray1OfBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/TColGeom_SequenceOfCurve.hxx
// ./opencascade/TColGeom_Array1OfBSplineCurve.hxx
// ./opencascade/TColGeom_HSequenceOfCurve.hxx
// ./opencascade/TColGeom_SequenceOfSurface.hxx
// ./opencascade/TColGeom_Array1OfSurface.hxx
// ./opencascade/TColGeom_Array1OfBezierCurve.hxx
// ./opencascade/TColGeom_HArray1OfBezierCurve.hxx
// ./opencascade/TColGeom_Array1OfCurve.hxx
// ./opencascade/TColGeom_Array2OfBezierSurface.hxx
// ./opencascade/TColGeom_Array2OfSurface.hxx
// ./opencascade/TColGeom_HArray1OfCurve.hxx
// ./opencascade/TColGeom_HArray1OfBSplineCurve.hxx
// ./opencascade/TColGeom_HSequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom_SequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom_HArray2OfSurface.hxx
// ./opencascade/TColGeom_HArray1OfSurface.hxx

// operators

// register typdefs
// ./opencascade/TColGeom_SequenceOfCurve.hxx
    register_template_NCollection_Sequence<opencascade::handle<Geom_Curve> >(m,"TColGeom_SequenceOfCurve");  
// ./opencascade/TColGeom_Array1OfBSplineCurve.hxx
    register_template_NCollection_Array1<opencascade::handle<Geom_BSplineCurve> >(m,"TColGeom_Array1OfBSplineCurve");  
// ./opencascade/TColGeom_HSequenceOfCurve.hxx
// ./opencascade/TColGeom_SequenceOfSurface.hxx
    register_template_NCollection_Sequence<opencascade::handle<Geom_Surface> >(m,"TColGeom_SequenceOfSurface");  
// ./opencascade/TColGeom_Array1OfSurface.hxx
    register_template_NCollection_Array1<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array1OfSurface");  
// ./opencascade/TColGeom_Array1OfBezierCurve.hxx
    register_template_NCollection_Array1<opencascade::handle<Geom_BezierCurve> >(m,"TColGeom_Array1OfBezierCurve");  
// ./opencascade/TColGeom_HArray1OfBezierCurve.hxx
// ./opencascade/TColGeom_Array1OfCurve.hxx
    register_template_NCollection_Array1<opencascade::handle<Geom_Curve> >(m,"TColGeom_Array1OfCurve");  
// ./opencascade/TColGeom_Array2OfBezierSurface.hxx
    register_template_NCollection_Array2<opencascade::handle<Geom_BezierSurface> >(m,"TColGeom_Array2OfBezierSurface");  
// ./opencascade/TColGeom_Array2OfSurface.hxx
    register_template_NCollection_Array2<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array2OfSurface");  
// ./opencascade/TColGeom_HArray1OfCurve.hxx
// ./opencascade/TColGeom_HArray1OfBSplineCurve.hxx
// ./opencascade/TColGeom_HSequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom_SequenceOfBoundedCurve.hxx
    register_template_NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> >(m,"TColGeom_SequenceOfBoundedCurve");  
// ./opencascade/TColGeom_HArray2OfSurface.hxx
// ./opencascade/TColGeom_HArray1OfSurface.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
