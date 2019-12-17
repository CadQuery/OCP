
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <TopTrans_Array2OfOrientation.hxx>
#include <TopTrans_CurveTransition.hxx>
#include <TopTrans_SurfaceTransition.hxx>

// template related includes
// ./opencascade/TopTrans_Array2OfOrientation.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopTrans(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopTrans"));


//Python trampoline classes

// classes


    static_cast<py::class_<TopTrans_SurfaceTransition ,std::unique_ptr<TopTrans_SurfaceTransition>  >>(m.attr("TopTrans_SurfaceTransition"))
        .def(py::init<  >()  )
        .def("Reset",
             (void (TopTrans_SurfaceTransition::*)( const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (TopTrans_SurfaceTransition::*)( const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_Real  ) >(&TopTrans_SurfaceTransition::Reset),
             R"#(Initialize a Surface Transition with the local description of the intersection curve and of the reference surface. PREQUESITORY : Norm oriented OUTSIDE "geometric matter")#"  , py::arg("Tgt"),  py::arg("Norm"),  py::arg("MaxD"),  py::arg("MinD"),  py::arg("MaxCurv"),  py::arg("MinCurv"))
        .def("Reset",
             (void (TopTrans_SurfaceTransition::*)( const gp_Dir & ,  const gp_Dir &  ) ) static_cast<void (TopTrans_SurfaceTransition::*)( const gp_Dir & ,  const gp_Dir &  ) >(&TopTrans_SurfaceTransition::Reset),
             R"#(Initialize a Surface Transition with the local description of a straight line.)#"  , py::arg("Tgt"),  py::arg("Norm"))
        .def("Compare",
             (void (TopTrans_SurfaceTransition::*)( const Standard_Real ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_Real ,  const TopAbs_Orientation ,  const TopAbs_Orientation  ) ) static_cast<void (TopTrans_SurfaceTransition::*)( const Standard_Real ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_Real ,  const TopAbs_Orientation ,  const TopAbs_Orientation  ) >(&TopTrans_SurfaceTransition::Compare),
             R"#(Add a face element to the boundary.)#"  , py::arg("Tole"),  py::arg("Norm"),  py::arg("MaxD"),  py::arg("MinD"),  py::arg("MaxCurv"),  py::arg("MinCurv"),  py::arg("S"),  py::arg("O"))
        .def("Compare",
             (void (TopTrans_SurfaceTransition::*)( const Standard_Real ,  const gp_Dir & ,  const TopAbs_Orientation ,  const TopAbs_Orientation  ) ) static_cast<void (TopTrans_SurfaceTransition::*)( const Standard_Real ,  const gp_Dir & ,  const TopAbs_Orientation ,  const TopAbs_Orientation  ) >(&TopTrans_SurfaceTransition::Compare),
             R"#(Add a plane or a cylindric face to the boundary.)#"  , py::arg("Tole"),  py::arg("Norm"),  py::arg("S"),  py::arg("O"))
        .def("StateBefore",
             (TopAbs_State (TopTrans_SurfaceTransition::*)() const) static_cast<TopAbs_State (TopTrans_SurfaceTransition::*)() const>(&TopTrans_SurfaceTransition::StateBefore),
             R"#(Returns the state of the reference surface before the interference, this is the position relative to the surface of a point very close to the intersection on the negative side of the tangent.)#" )
        .def("StateAfter",
             (TopAbs_State (TopTrans_SurfaceTransition::*)() const) static_cast<TopAbs_State (TopTrans_SurfaceTransition::*)() const>(&TopTrans_SurfaceTransition::StateAfter),
             R"#(Returns the state of the reference surface after interference, this is the position relative to the surface of a point very close to the intersection on the positive side of the tangent.)#" )
        .def_static("GetBefore_s",
                    (TopAbs_State (*)( const TopAbs_Orientation  ) ) static_cast<TopAbs_State (*)( const TopAbs_Orientation  ) >(&TopTrans_SurfaceTransition::GetBefore),
                    R"#(None)#"  , py::arg("Tran"))
        .def_static("GetAfter_s",
                    (TopAbs_State (*)( const TopAbs_Orientation  ) ) static_cast<TopAbs_State (*)( const TopAbs_Orientation  ) >(&TopTrans_SurfaceTransition::GetAfter),
                    R"#(None)#"  , py::arg("Tran"))
;


    static_cast<py::class_<TopTrans_CurveTransition ,std::unique_ptr<TopTrans_CurveTransition>  >>(m.attr("TopTrans_CurveTransition"))
        .def(py::init<  >()  )
        .def("Reset",
             (void (TopTrans_CurveTransition::*)( const gp_Dir & ,  const gp_Dir & ,  const Standard_Real  ) ) static_cast<void (TopTrans_CurveTransition::*)( const gp_Dir & ,  const gp_Dir & ,  const Standard_Real  ) >(&TopTrans_CurveTransition::Reset),
             R"#(Initialize a Transition with the local description of a Curve.)#"  , py::arg("Tgt"),  py::arg("Norm"),  py::arg("Curv"))
        .def("Reset",
             (void (TopTrans_CurveTransition::*)( const gp_Dir &  ) ) static_cast<void (TopTrans_CurveTransition::*)( const gp_Dir &  ) >(&TopTrans_CurveTransition::Reset),
             R"#(Initialize a Transition with the local description of a straigth line.)#"  , py::arg("Tgt"))
        .def("Compare",
             (void (TopTrans_CurveTransition::*)( const Standard_Real ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Real ,  const TopAbs_Orientation ,  const TopAbs_Orientation  ) ) static_cast<void (TopTrans_CurveTransition::*)( const Standard_Real ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Real ,  const TopAbs_Orientation ,  const TopAbs_Orientation  ) >(&TopTrans_CurveTransition::Compare),
             R"#(Add a curve element to the boundary. If Or is REVERSED the curve is before the intersection, else if Or is FORWARD the curv is after the intersection and if Or is INTERNAL the intersection is in the middle of the curv.)#"  , py::arg("Tole"),  py::arg("Tang"),  py::arg("Norm"),  py::arg("Curv"),  py::arg("S"),  py::arg("Or"))
        .def("StateBefore",
             (TopAbs_State (TopTrans_CurveTransition::*)() const) static_cast<TopAbs_State (TopTrans_CurveTransition::*)() const>(&TopTrans_CurveTransition::StateBefore),
             R"#(returns the state of the curve before the intersection, this is the position relative to the boundary of a point very close to the intersection on the negative side of the tangent.)#" )
        .def("StateAfter",
             (TopAbs_State (TopTrans_CurveTransition::*)() const) static_cast<TopAbs_State (TopTrans_CurveTransition::*)() const>(&TopTrans_CurveTransition::StateAfter),
             R"#(returns the state of the curve after the intersection, this is the position relative to the boundary of a point very close to the intersection on the positive side of the tangent.)#" )
;

// functions
// ./opencascade/TopTrans_SurfaceTransition.hxx
// ./opencascade/TopTrans_Array2OfOrientation.hxx
// ./opencascade/TopTrans_CurveTransition.hxx

// operators

// register typdefs
// ./opencascade/TopTrans_SurfaceTransition.hxx
// ./opencascade/TopTrans_Array2OfOrientation.hxx
    register_template_NCollection_Array2<TopAbs_Orientation>(m,"TopTrans_Array2OfOrientation");  
// ./opencascade/TopTrans_CurveTransition.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
