
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <LProp_CurAndInf.hxx>

// module includes
#include <LProp_AnalyticCurInf.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_CIType.hxx>
#include <LProp_CurAndInf.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp_SequenceOfCIType.hxx>
#include <LProp_Status.hxx>

// template related includes
// ./opencascade/LProp_SequenceOfCIType.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LProp"));


//Python trampoline classes

// classes


    static_cast<py::class_<LProp_AnalyticCurInf ,std::unique_ptr<LProp_AnalyticCurInf>  >>(m.attr("LProp_AnalyticCurInf"))
        .def(py::init<  >()  )
        .def("Perform",
             (void (LProp_AnalyticCurInf::*)( const GeomAbs_CurveType ,  const Standard_Real ,  const Standard_Real ,  LProp_CurAndInf &  ) ) static_cast<void (LProp_AnalyticCurInf::*)( const GeomAbs_CurveType ,  const Standard_Real ,  const Standard_Real ,  LProp_CurAndInf &  ) >(&LProp_AnalyticCurInf::Perform),
             R"#(None)#"  , py::arg("T"),  py::arg("UFirst"),  py::arg("ULast"),  py::arg("Result"))
;


    static_cast<py::class_<LProp_CurAndInf ,std::unique_ptr<LProp_CurAndInf>  >>(m.attr("LProp_CurAndInf"))
        .def(py::init<  >()  )
        .def("AddInflection",
             (void (LProp_CurAndInf::*)( const Standard_Real  ) ) static_cast<void (LProp_CurAndInf::*)( const Standard_Real  ) >(&LProp_CurAndInf::AddInflection),
             R"#(None)#"  , py::arg("Param"))
        .def("AddExtCur",
             (void (LProp_CurAndInf::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (LProp_CurAndInf::*)( const Standard_Real ,  const Standard_Boolean  ) >(&LProp_CurAndInf::AddExtCur),
             R"#(None)#"  , py::arg("Param"),  py::arg("IsMin"))
        .def("Clear",
             (void (LProp_CurAndInf::*)() ) static_cast<void (LProp_CurAndInf::*)() >(&LProp_CurAndInf::Clear),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (LProp_CurAndInf::*)() const) static_cast<Standard_Boolean (LProp_CurAndInf::*)() const>(&LProp_CurAndInf::IsEmpty),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (LProp_CurAndInf::*)() const) static_cast<Standard_Integer (LProp_CurAndInf::*)() const>(&LProp_CurAndInf::NbPoints),
             R"#(Returns the number of points. The Points are stored to increasing parameter.)#" )
        .def("Parameter",
             (Standard_Real (LProp_CurAndInf::*)( const Standard_Integer  ) const) static_cast<Standard_Real (LProp_CurAndInf::*)( const Standard_Integer  ) const>(&LProp_CurAndInf::Parameter),
             R"#(Returns the parameter of the Nth point. raises if N not in the range [1,NbPoints()])#"  , py::arg("N"))
        .def("Type",
             (LProp_CIType (LProp_CurAndInf::*)( const Standard_Integer  ) const) static_cast<LProp_CIType (LProp_CurAndInf::*)( const Standard_Integer  ) const>(&LProp_CurAndInf::Type),
             R"#(Returns - MinCur if the Nth parameter corresponds to a minimum of the radius of curvature. - MaxCur if the Nth parameter corresponds to a maximum of the radius of curvature. - Inflection if the parameter corresponds to a point of inflection. raises if N not in the range [1,NbPoints()])#"  , py::arg("N"))
;

// functions
// ./opencascade/LProp_SequenceOfCIType.hxx
// ./opencascade/LProp_CIType.hxx
// ./opencascade/LProp_BadContinuity.hxx
// ./opencascade/LProp_NotDefined.hxx
// ./opencascade/LProp_AnalyticCurInf.hxx
// ./opencascade/LProp_CurAndInf.hxx
// ./opencascade/LProp_Status.hxx

// operators

// register typdefs
// ./opencascade/LProp_SequenceOfCIType.hxx
    register_template_NCollection_Sequence<LProp_CIType>(m,"LProp_SequenceOfCIType");  
// ./opencascade/LProp_CIType.hxx
// ./opencascade/LProp_BadContinuity.hxx
// ./opencascade/LProp_NotDefined.hxx
// ./opencascade/LProp_AnalyticCurInf.hxx
// ./opencascade/LProp_CurAndInf.hxx
// ./opencascade/LProp_Status.hxx


// exceptions
register_occ_exception<LProp_BadContinuity>(m, "LProp_BadContinuity");
register_occ_exception<LProp_NotDefined>(m, "LProp_NotDefined");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
