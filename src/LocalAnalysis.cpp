
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <GeomLProp_SLProps.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <GeomLProp_CLProps.hxx>

// module includes
#include <LocalAnalysis.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_StatusErrorType.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LocalAnalysis(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LocalAnalysis"));


//Python trampoline classes

// classes

    register_default_constructor<LocalAnalysis , shared_ptr<LocalAnalysis>>(m,"LocalAnalysis");

    static_cast<py::class_<LocalAnalysis , shared_ptr<LocalAnalysis>  >>(m.attr("LocalAnalysis"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Dump_s",
                    (void (*)( const LocalAnalysis_SurfaceContinuity & ,  std::ostream &  ) ) static_cast<void (*)( const LocalAnalysis_SurfaceContinuity & ,  std::ostream &  ) >(&LocalAnalysis::Dump),
                    R"#(This class compute s and gives tools to check the local continuity between two points situated on 2 curves))#"  , py::arg("surfconti"),  py::arg("o"))
        .def_static("Dump_s",
                    (void (*)( const LocalAnalysis_CurveContinuity & ,  std::ostream &  ) ) static_cast<void (*)( const LocalAnalysis_CurveContinuity & ,  std::ostream &  ) >(&LocalAnalysis::Dump),
                    R"#(This fonction gives informations about a variable SurfaceContinuity)#"  , py::arg("curvconti"),  py::arg("o"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<LocalAnalysis_CurveContinuity , shared_ptr<LocalAnalysis_CurveContinuity>  >>(m.attr("LocalAnalysis_CurveContinuity"))
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const opencascade::handle<Geom_Curve> &,const Standard_Real,const GeomAbs_Shape,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Curv1"),  py::arg("u1"),  py::arg("Curv2"),  py::arg("u2"),  py::arg("Order"),  py::arg("EpsNul")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC0")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC1")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC2")=static_cast<const Standard_Real>(0.001),  py::arg("EpsG1")=static_cast<const Standard_Real>(0.001),  py::arg("EpsG2")=static_cast<const Standard_Real>(0.001),  py::arg("Percent")=static_cast<const Standard_Real>(0.01),  py::arg("Maxlen")=static_cast<const Standard_Real>(10000) )
    // methods
        .def("IsDone",
             (Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::IsDone),
             R"#(None)#" )
        .def("StatusError",
             (LocalAnalysis_StatusErrorType (LocalAnalysis_CurveContinuity::*)() const) static_cast<LocalAnalysis_StatusErrorType (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::StatusError),
             R"#(None)#" )
        .def("ContinuityStatus",
             (GeomAbs_Shape (LocalAnalysis_CurveContinuity::*)() const) static_cast<GeomAbs_Shape (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::ContinuityStatus),
             R"#(None)#" )
        .def("C0Value",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::C0Value),
             R"#(None)#" )
        .def("C1Angle",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::C1Angle),
             R"#(None)#" )
        .def("C1Ratio",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::C1Ratio),
             R"#(None)#" )
        .def("C2Angle",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::C2Angle),
             R"#(None)#" )
        .def("C2Ratio",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::C2Ratio),
             R"#(None)#" )
        .def("G1Angle",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::G1Angle),
             R"#(None)#" )
        .def("G2Angle",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::G2Angle),
             R"#(None)#" )
        .def("G2CurvatureVariation",
             (Standard_Real (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::G2CurvatureVariation),
             R"#(None)#" )
        .def("IsC0",
             (Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::IsC0),
             R"#(None)#" )
        .def("IsC1",
             (Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::IsC1),
             R"#(None)#" )
        .def("IsC2",
             (Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::IsC2),
             R"#(None)#" )
        .def("IsG1",
             (Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::IsG1),
             R"#(None)#" )
        .def("IsG2",
             (Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_CurveContinuity::*)() const>(&LocalAnalysis_CurveContinuity::IsG2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<LocalAnalysis_SurfaceContinuity , shared_ptr<LocalAnalysis_SurfaceContinuity>  >>(m.attr("LocalAnalysis_SurfaceContinuity"))
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const GeomAbs_Shape,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Surf1"),  py::arg("u1"),  py::arg("v1"),  py::arg("Surf2"),  py::arg("u2"),  py::arg("v2"),  py::arg("Order"),  py::arg("EpsNul")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC0")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC1")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC2")=static_cast<const Standard_Real>(0.001),  py::arg("EpsG1")=static_cast<const Standard_Real>(0.001),  py::arg("Percent")=static_cast<const Standard_Real>(0.01),  py::arg("Maxlen")=static_cast<const Standard_Real>(10000) )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const GeomAbs_Shape,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("curv1"),  py::arg("curv2"),  py::arg("U"),  py::arg("Surf1"),  py::arg("Surf2"),  py::arg("Order"),  py::arg("EpsNul")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC0")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC1")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC2")=static_cast<const Standard_Real>(0.001),  py::arg("EpsG1")=static_cast<const Standard_Real>(0.001),  py::arg("Percent")=static_cast<const Standard_Real>(0.01),  py::arg("Maxlen")=static_cast<const Standard_Real>(10000) )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("EpsNul")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC0")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC1")=static_cast<const Standard_Real>(0.001),  py::arg("EpsC2")=static_cast<const Standard_Real>(0.001),  py::arg("EpsG1")=static_cast<const Standard_Real>(0.001),  py::arg("Percent")=static_cast<const Standard_Real>(0.01),  py::arg("Maxlen")=static_cast<const Standard_Real>(10000) )
    // methods
        .def("ComputeAnalysis",
             (void (LocalAnalysis_SurfaceContinuity::*)( GeomLProp_SLProps & ,  GeomLProp_SLProps & ,  const GeomAbs_Shape  ) ) static_cast<void (LocalAnalysis_SurfaceContinuity::*)( GeomLProp_SLProps & ,  GeomLProp_SLProps & ,  const GeomAbs_Shape  ) >(&LocalAnalysis_SurfaceContinuity::ComputeAnalysis),
             R"#(None)#"  , py::arg("Surf1"),  py::arg("Surf2"),  py::arg("Order"))
        .def("IsDone",
             (Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::IsDone),
             R"#(None)#" )
        .def("ContinuityStatus",
             (GeomAbs_Shape (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<GeomAbs_Shape (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::ContinuityStatus),
             R"#(None)#" )
        .def("StatusError",
             (LocalAnalysis_StatusErrorType (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<LocalAnalysis_StatusErrorType (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::StatusError),
             R"#(None)#" )
        .def("C0Value",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C0Value),
             R"#(None)#" )
        .def("C1UAngle",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C1UAngle),
             R"#(None)#" )
        .def("C1URatio",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C1URatio),
             R"#(None)#" )
        .def("C1VAngle",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C1VAngle),
             R"#(None)#" )
        .def("C1VRatio",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C1VRatio),
             R"#(None)#" )
        .def("C2UAngle",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C2UAngle),
             R"#(None)#" )
        .def("C2URatio",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C2URatio),
             R"#(None)#" )
        .def("C2VAngle",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C2VAngle),
             R"#(None)#" )
        .def("C2VRatio",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::C2VRatio),
             R"#(None)#" )
        .def("G1Angle",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::G1Angle),
             R"#(None)#" )
        .def("G2CurvatureGap",
             (Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Real (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::G2CurvatureGap),
             R"#(None)#" )
        .def("IsC0",
             (Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::IsC0),
             R"#(None)#" )
        .def("IsC1",
             (Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::IsC1),
             R"#(None)#" )
        .def("IsC2",
             (Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::IsC2),
             R"#(None)#" )
        .def("IsG1",
             (Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::IsG1),
             R"#(None)#" )
        .def("IsG2",
             (Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const) static_cast<Standard_Boolean (LocalAnalysis_SurfaceContinuity::*)() const>(&LocalAnalysis_SurfaceContinuity::IsG2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/LocalAnalysis_StatusErrorType.hxx
// ./opencascade/LocalAnalysis.hxx
// ./opencascade/LocalAnalysis_SurfaceContinuity.hxx
// ./opencascade/LocalAnalysis_CurveContinuity.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
