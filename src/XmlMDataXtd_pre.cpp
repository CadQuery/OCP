
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDataXtd_AxisDriver.hxx>
#include <XmlMDataXtd_ShapeDriver.hxx>
#include <XmlMDataXtd_PointDriver.hxx>
#include <XmlMDataXtd_PlaneDriver.hxx>
#include <XmlMDataXtd_GeometryDriver.hxx>
#include <XmlMDataXtd_ConstraintDriver.hxx>
#include <XmlMDataXtd_PlacementDriver.hxx>
#include <XmlMDataXtd_PatternStdDriver.hxx>
#include <XmlMDataXtd_TriangulationDriver.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// module includes
#include <XmlMDataXtd.hxx>
#include <XmlMDataXtd_AxisDriver.hxx>
#include <XmlMDataXtd_ConstraintDriver.hxx>
#include <XmlMDataXtd_GeometryDriver.hxx>
#include <XmlMDataXtd_PatternStdDriver.hxx>
#include <XmlMDataXtd_PlacementDriver.hxx>
#include <XmlMDataXtd_PlaneDriver.hxx>
#include <XmlMDataXtd_PointDriver.hxx>
#include <XmlMDataXtd_PositionDriver.hxx>
#include <XmlMDataXtd_PresentationDriver.hxx>
#include <XmlMDataXtd_ShapeDriver.hxx>
#include <XmlMDataXtd_TriangulationDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMDataXtd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlMDataXtd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<XmlMDataXtd , shared_ptr<XmlMDataXtd>  >(m,"XmlMDataXtd",R"#(Storage and Retrieval drivers for modelling attributes. Transient attributes are defined in package TDataXtd.)#");
    py::class_<XmlMDataXtd_AxisDriver ,opencascade::handle<XmlMDataXtd_AxisDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_AxisDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_ConstraintDriver ,opencascade::handle<XmlMDataXtd_ConstraintDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_ConstraintDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_GeometryDriver ,opencascade::handle<XmlMDataXtd_GeometryDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_GeometryDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_PatternStdDriver ,opencascade::handle<XmlMDataXtd_PatternStdDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_PatternStdDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_PlacementDriver ,opencascade::handle<XmlMDataXtd_PlacementDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_PlacementDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_PlaneDriver ,opencascade::handle<XmlMDataXtd_PlaneDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_PlaneDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_PointDriver ,opencascade::handle<XmlMDataXtd_PointDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_PointDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_PositionDriver ,opencascade::handle<XmlMDataXtd_PositionDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_PositionDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_PresentationDriver ,opencascade::handle<XmlMDataXtd_PresentationDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_PresentationDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_ShapeDriver ,opencascade::handle<XmlMDataXtd_ShapeDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_ShapeDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDataXtd_TriangulationDriver ,opencascade::handle<XmlMDataXtd_TriangulationDriver>  , XmlMDF_ADriver >(m,"XmlMDataXtd_TriangulationDriver",R"#(TDataStd_Mesh attribute XML Driver.TDataStd_Mesh attribute XML Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post
