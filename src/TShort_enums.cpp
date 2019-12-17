
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_TShort_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TShort", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<TShort_HSequenceOfShortReal ,std::unique_ptr<TShort_HSequenceOfShortReal>  >(m,"TShort_HSequenceOfShortReal",R"#()#");
    py::class_<TShort_HArray1OfShortReal ,std::unique_ptr<TShort_HArray1OfShortReal>  >(m,"TShort_HArray1OfShortReal",R"#()#");
    py::class_<TShort_HArray2OfShortReal ,std::unique_ptr<TShort_HArray2OfShortReal>  >(m,"TShort_HArray2OfShortReal",R"#()#");

// pre-register typdefs
// ./opencascade/TShort_SequenceOfShortReal.hxx
    preregister_template_NCollection_Sequence<Standard_ShortReal>(m,"TShort_SequenceOfShortReal");  
// ./opencascade/TShort_HSequenceOfShortReal.hxx
// ./opencascade/TShort_Array2OfShortReal.hxx
    preregister_template_NCollection_Array2<Standard_ShortReal>(m,"TShort_Array2OfShortReal");  
// ./opencascade/TShort_Array1OfShortReal.hxx
    preregister_template_NCollection_Array1<Standard_ShortReal>(m,"TShort_Array1OfShortReal");  
// ./opencascade/TShort_HArray2OfShortReal.hxx
// ./opencascade/TShort_HArray1OfShortReal.hxx

};

// user-defined post-inclusion per module

// user-defined post
