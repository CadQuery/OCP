
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDataXtd_PointDriver.hxx>
#include <BinMDataXtd_AxisDriver.hxx>
#include <BinMDataXtd_PlaneDriver.hxx>
#include <BinMDataXtd_GeometryDriver.hxx>
#include <BinMDataXtd_ConstraintDriver.hxx>
#include <BinMDataXtd_PlacementDriver.hxx>
#include <BinMDataXtd_PatternStdDriver.hxx>
#include <BinMDataXtd_ShapeDriver.hxx>
#include <BinMDataXtd_TriangulationDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDataXtd.hxx>
#include <BinMDataXtd_AxisDriver.hxx>
#include <BinMDataXtd_ConstraintDriver.hxx>
#include <BinMDataXtd_GeometryDriver.hxx>
#include <BinMDataXtd_PatternStdDriver.hxx>
#include <BinMDataXtd_PlacementDriver.hxx>
#include <BinMDataXtd_PlaneDriver.hxx>
#include <BinMDataXtd_PointDriver.hxx>
#include <BinMDataXtd_PositionDriver.hxx>
#include <BinMDataXtd_PresentationDriver.hxx>
#include <BinMDataXtd_ShapeDriver.hxx>
#include <BinMDataXtd_TriangulationDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMDataXtd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinMDataXtd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BinMDataXtd , shared_ptr<BinMDataXtd>  >(m,"BinMDataXtd",R"#(Storage and Retrieval drivers for modelling attributes.)#");
    py::class_<BinMDataXtd_AxisDriver ,opencascade::handle<BinMDataXtd_AxisDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_AxisDriver",R"#(Axis attribute Driver.Axis attribute Driver.Axis attribute Driver.)#");
    py::class_<BinMDataXtd_ConstraintDriver ,opencascade::handle<BinMDataXtd_ConstraintDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_ConstraintDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataXtd_GeometryDriver ,opencascade::handle<BinMDataXtd_GeometryDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_GeometryDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataXtd_PatternStdDriver ,opencascade::handle<BinMDataXtd_PatternStdDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_PatternStdDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataXtd_PlacementDriver ,opencascade::handle<BinMDataXtd_PlacementDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_PlacementDriver",R"#(Placement attribute Driver.Placement attribute Driver.Placement attribute Driver.)#");
    py::class_<BinMDataXtd_PlaneDriver ,opencascade::handle<BinMDataXtd_PlaneDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_PlaneDriver",R"#(Plane attribute Driver.Plane attribute Driver.Plane attribute Driver.)#");
    py::class_<BinMDataXtd_PointDriver ,opencascade::handle<BinMDataXtd_PointDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_PointDriver",R"#(Point attribute Driver.Point attribute Driver.Point attribute Driver.)#");
    py::class_<BinMDataXtd_PositionDriver ,opencascade::handle<BinMDataXtd_PositionDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_PositionDriver",R"#(Position Attribute Driver.Position Attribute Driver.Position Attribute Driver.)#");
    py::class_<BinMDataXtd_PresentationDriver ,opencascade::handle<BinMDataXtd_PresentationDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_PresentationDriver",R"#(Presentation Attribute Driver.Presentation Attribute Driver.Presentation Attribute Driver.)#");
    py::class_<BinMDataXtd_ShapeDriver ,opencascade::handle<BinMDataXtd_ShapeDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_ShapeDriver",R"#(Shape attribute Driver.Shape attribute Driver.Shape attribute Driver.)#");
    py::class_<BinMDataXtd_TriangulationDriver ,opencascade::handle<BinMDataXtd_TriangulationDriver>  , BinMDF_ADriver >(m,"BinMDataXtd_TriangulationDriver",R"#(TDataXtd_Triangulation attribute bin Driver.TDataXtd_Triangulation attribute bin Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post
