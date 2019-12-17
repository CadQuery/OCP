
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <TShort_Array1OfShortReal.hxx>
#include <TShort_Array2OfShortReal.hxx>
#include <TShort_HArray1OfShortReal.hxx>
#include <TShort_HArray2OfShortReal.hxx>
#include <TShort_HSequenceOfShortReal.hxx>
#include <TShort_SequenceOfShortReal.hxx>

// template related includes
// ./opencascade/TShort_SequenceOfShortReal.hxx
#include "NCollection.hxx"
// ./opencascade/TShort_Array2OfShortReal.hxx
#include "NCollection.hxx"
// ./opencascade/TShort_Array1OfShortReal.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TShort(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TShort"));


//Python trampoline classes

// classes


    static_cast<py::class_<TShort_HSequenceOfShortReal ,std::unique_ptr<TShort_HSequenceOfShortReal>  >>(m.attr("TShort_HSequenceOfShortReal"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<Standard_ShortReal> & >()  , py::arg("theOther") )
        .def("Sequence",
             (const TShort_SequenceOfShortReal & (TShort_HSequenceOfShortReal::*)() const) static_cast<const TShort_SequenceOfShortReal & (TShort_HSequenceOfShortReal::*)() const>(&TShort_HSequenceOfShortReal::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TShort_HSequenceOfShortReal::*)( const TShort_SequenceOfShortReal::value_type &  ) ) static_cast<void (TShort_HSequenceOfShortReal::*)( const TShort_SequenceOfShortReal::value_type &  ) >(&TShort_HSequenceOfShortReal::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TShort_HSequenceOfShortReal::*)( NCollection_Sequence<Standard_ShortReal> &  ) ) static_cast<void (TShort_HSequenceOfShortReal::*)( NCollection_Sequence<Standard_ShortReal> &  ) >(&TShort_HSequenceOfShortReal::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TShort_SequenceOfShortReal & (TShort_HSequenceOfShortReal::*)() ) static_cast<TShort_SequenceOfShortReal & (TShort_HSequenceOfShortReal::*)() >(&TShort_HSequenceOfShortReal::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TShort_HSequenceOfShortReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TShort_HSequenceOfShortReal::*)() const>(&TShort_HSequenceOfShortReal::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TShort_HSequenceOfShortReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TShort_HSequenceOfShortReal::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TShort_HArray1OfShortReal ,std::unique_ptr<TShort_HArray1OfShortReal>  >>(m.attr("TShort_HArray1OfShortReal"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const TShort_Array1OfShortReal::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Standard_ShortReal> & >()  , py::arg("theOther") )
        .def("Array1",
             (const TShort_Array1OfShortReal & (TShort_HArray1OfShortReal::*)() const) static_cast<const TShort_Array1OfShortReal & (TShort_HArray1OfShortReal::*)() const>(&TShort_HArray1OfShortReal::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TShort_Array1OfShortReal & (TShort_HArray1OfShortReal::*)() ) static_cast<TShort_Array1OfShortReal & (TShort_HArray1OfShortReal::*)() >(&TShort_HArray1OfShortReal::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TShort_HArray1OfShortReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TShort_HArray1OfShortReal::*)() const>(&TShort_HArray1OfShortReal::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TShort_HArray1OfShortReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TShort_HArray1OfShortReal::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<TShort_HArray2OfShortReal ,std::unique_ptr<TShort_HArray2OfShortReal>  >>(m.attr("TShort_HArray2OfShortReal"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const TShort_Array2OfShortReal::value_type & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Standard_ShortReal> & >()  , py::arg("theOther") )
        .def("Array2",
             (const TShort_Array2OfShortReal & (TShort_HArray2OfShortReal::*)() const) static_cast<const TShort_Array2OfShortReal & (TShort_HArray2OfShortReal::*)() const>(&TShort_HArray2OfShortReal::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TShort_Array2OfShortReal & (TShort_HArray2OfShortReal::*)() ) static_cast<TShort_Array2OfShortReal & (TShort_HArray2OfShortReal::*)() >(&TShort_HArray2OfShortReal::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TShort_HArray2OfShortReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TShort_HArray2OfShortReal::*)() const>(&TShort_HArray2OfShortReal::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TShort_HArray2OfShortReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TShort_HArray2OfShortReal::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/TShort_SequenceOfShortReal.hxx
// ./opencascade/TShort_HSequenceOfShortReal.hxx
// ./opencascade/TShort_Array2OfShortReal.hxx
// ./opencascade/TShort_Array1OfShortReal.hxx
// ./opencascade/TShort_HArray2OfShortReal.hxx
// ./opencascade/TShort_HArray1OfShortReal.hxx

// operators

// register typdefs
// ./opencascade/TShort_SequenceOfShortReal.hxx
    register_template_NCollection_Sequence<Standard_ShortReal>(m,"TShort_SequenceOfShortReal");  
// ./opencascade/TShort_HSequenceOfShortReal.hxx
// ./opencascade/TShort_Array2OfShortReal.hxx
    register_template_NCollection_Array2<Standard_ShortReal>(m,"TShort_Array2OfShortReal");  
// ./opencascade/TShort_Array1OfShortReal.hxx
    register_template_NCollection_Array1<Standard_ShortReal>(m,"TShort_Array1OfShortReal");  
// ./opencascade/TShort_HArray2OfShortReal.hxx
// ./opencascade/TShort_HArray1OfShortReal.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
