
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <gp_Ax2.hxx>
#include <gp_Lin.hxx>

// module includes
#include <HLRAlgo.hxx>
#include <HLRAlgo_Array1OfPHDat.hxx>
#include <HLRAlgo_Array1OfPINod.hxx>
#include <HLRAlgo_Array1OfPISeg.hxx>
#include <HLRAlgo_Array1OfTData.hxx>
#include <HLRAlgo_BiPoint.hxx>
#include <HLRAlgo_Coincidence.hxx>
#include <HLRAlgo_EdgeIterator.hxx>
#include <HLRAlgo_EdgesBlock.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRAlgo_HArray1OfPHDat.hxx>
#include <HLRAlgo_HArray1OfPINod.hxx>
#include <HLRAlgo_HArray1OfPISeg.hxx>
#include <HLRAlgo_HArray1OfTData.hxx>
#include <HLRAlgo_Interference.hxx>
#include <HLRAlgo_InterferenceList.hxx>
#include <HLRAlgo_Intersection.hxx>
#include <HLRAlgo_ListIteratorOfInterferenceList.hxx>
#include <HLRAlgo_ListIteratorOfListOfBPoint.hxx>
#include <HLRAlgo_ListOfBPoint.hxx>
#include <HLRAlgo_PolyAlgo.hxx>
#include <HLRAlgo_PolyData.hxx>
#include <HLRAlgo_PolyHidingData.hxx>
#include <HLRAlgo_PolyInternalData.hxx>
#include <HLRAlgo_PolyInternalNode.hxx>
#include <HLRAlgo_PolyInternalSegment.hxx>
#include <HLRAlgo_PolyMask.hxx>
#include <HLRAlgo_PolyShellData.hxx>
#include <HLRAlgo_Projector.hxx>
#include <HLRAlgo_TriangleData.hxx>
#include <HLRAlgo_WiresBlock.hxx>

// template related includes
// ./opencascade\HLRAlgo_Array1OfTData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRAlgo_ListOfBPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRAlgo_ListOfBPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRAlgo_Array1OfPINod.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRAlgo_Array1OfPISeg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRAlgo_InterferenceList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRAlgo_InterferenceList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRAlgo_Array1OfPHDat.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRAlgo_enums(py::module &main_module) {


py::module m = main_module.def_submodule("HLRAlgo", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<HLRAlgo_PolyMask>(m, "HLRAlgo_PolyMask",R"#(None)#")
        .value("HLRAlgo_PolyMask_EMskOutLin1",HLRAlgo_PolyMask::HLRAlgo_PolyMask_EMskOutLin1)
        .value("HLRAlgo_PolyMask_EMskOutLin2",HLRAlgo_PolyMask::HLRAlgo_PolyMask_EMskOutLin2)
        .value("HLRAlgo_PolyMask_EMskOutLin3",HLRAlgo_PolyMask::HLRAlgo_PolyMask_EMskOutLin3)
        .value("HLRAlgo_PolyMask_EMskGrALin1",HLRAlgo_PolyMask::HLRAlgo_PolyMask_EMskGrALin1)
        .value("HLRAlgo_PolyMask_EMskGrALin2",HLRAlgo_PolyMask::HLRAlgo_PolyMask_EMskGrALin2)
        .value("HLRAlgo_PolyMask_EMskGrALin3",HLRAlgo_PolyMask::HLRAlgo_PolyMask_EMskGrALin3)
        .value("HLRAlgo_PolyMask_FMskBack",HLRAlgo_PolyMask::HLRAlgo_PolyMask_FMskBack)
        .value("HLRAlgo_PolyMask_FMskSide",HLRAlgo_PolyMask::HLRAlgo_PolyMask_FMskSide)
        .value("HLRAlgo_PolyMask_FMskHiding",HLRAlgo_PolyMask::HLRAlgo_PolyMask_FMskHiding)
        .value("HLRAlgo_PolyMask_FMskFlat",HLRAlgo_PolyMask::HLRAlgo_PolyMask_FMskFlat)
        .value("HLRAlgo_PolyMask_FMskOnOutL",HLRAlgo_PolyMask::HLRAlgo_PolyMask_FMskOnOutL)
        .value("HLRAlgo_PolyMask_FMskOrBack",HLRAlgo_PolyMask::HLRAlgo_PolyMask_FMskOrBack)
        .value("HLRAlgo_PolyMask_FMskFrBack",HLRAlgo_PolyMask::HLRAlgo_PolyMask_FMskFrBack).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<HLRAlgo_TriangleData>(m,"HLRAlgo_Array1OfTData");
    preregister_template_NCollection_List<HLRAlgo_BiPoint>(m,"HLRAlgo_ListOfBPoint");
    preregister_template_NCollection_Array1<opencascade::handle<HLRAlgo_PolyInternalNode> >(m,"HLRAlgo_Array1OfPINod");
    preregister_template_NCollection_Array1<HLRAlgo_PolyInternalSegment>(m,"HLRAlgo_Array1OfPISeg");
    preregister_template_NCollection_List<HLRAlgo_Interference>(m,"HLRAlgo_InterferenceList");
    preregister_template_NCollection_Array1<HLRAlgo_PolyHidingData>(m,"HLRAlgo_Array1OfPHDat");

// classes forward declarations only
    py::class_<HLRAlgo , shared_ptr<HLRAlgo> >(m,"HLRAlgo",R"#(In order to have the precision required in industrial design, drawings need to offer the possibility of removing lines, which are hidden in a given projection. To do this, the Hidden Line Removal component provides two algorithms: HLRBRep_Algo and HLRBRep_PolyAlgo. These algorithms remove or indicate lines hidden by surfaces. For a given projection, they calculate a set of lines characteristic of the object being represented. They are also used in conjunction with extraction utilities, which reconstruct a new, simplified shape from a selection of calculation results. This new shape is made up of edges, which represent the lines of the visualized shape in a plane. This plane is the projection plane. HLRBRep_Algo takes into account the shape itself. HLRBRep_PolyAlgo works with a polyhedral simplification of the shape. When you use HLRBRep_Algo, you obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce computation time but obtain polygonal segments.)#");
    py::class_<HLRAlgo_BiPoint , shared_ptr<HLRAlgo_BiPoint> >(m,"HLRAlgo_BiPoint",R"#(None)#");
    py::class_<HLRAlgo_Coincidence , shared_ptr<HLRAlgo_Coincidence> >(m,"HLRAlgo_Coincidence",R"#(The Coincidence class is used in an Inteference to store informations on the "hiding" edge.)#");
    py::class_<HLRAlgo_EdgeIterator , shared_ptr<HLRAlgo_EdgeIterator> >(m,"HLRAlgo_EdgeIterator",R"#(None)#");
    py::class_<HLRAlgo_EdgeStatus , shared_ptr<HLRAlgo_EdgeStatus> >(m,"HLRAlgo_EdgeStatus",R"#(This class describes the Hidden Line status of an Edge. It contains :)#");
    py::class_<HLRAlgo_EdgesBlock ,opencascade::handle<HLRAlgo_EdgesBlock> , Standard_Transient>(m,"HLRAlgo_EdgesBlock",R"#(An EdgesBlock is a set of Edges. It is used by the DataStructure to structure the Edges.An EdgesBlock is a set of Edges. It is used by the DataStructure to structure the Edges.An EdgesBlock is a set of Edges. It is used by the DataStructure to structure the Edges.)#");
    py::class_<HLRAlgo_HArray1OfPHDat ,opencascade::handle<HLRAlgo_HArray1OfPHDat> , HLRAlgo_Array1OfPHDat, Standard_Transient>(m,"HLRAlgo_HArray1OfPHDat",R"#()#");
    py::class_<HLRAlgo_HArray1OfPINod ,opencascade::handle<HLRAlgo_HArray1OfPINod> , HLRAlgo_Array1OfPINod, Standard_Transient>(m,"HLRAlgo_HArray1OfPINod",R"#()#");
    py::class_<HLRAlgo_HArray1OfPISeg ,opencascade::handle<HLRAlgo_HArray1OfPISeg> , HLRAlgo_Array1OfPISeg, Standard_Transient>(m,"HLRAlgo_HArray1OfPISeg",R"#()#");
    py::class_<HLRAlgo_HArray1OfTData ,opencascade::handle<HLRAlgo_HArray1OfTData> , HLRAlgo_Array1OfTData, Standard_Transient>(m,"HLRAlgo_HArray1OfTData",R"#()#");
    py::class_<HLRAlgo_Interference , shared_ptr<HLRAlgo_Interference> >(m,"HLRAlgo_Interference",R"#(None)#");
    py::class_<HLRAlgo_Intersection , shared_ptr<HLRAlgo_Intersection> >(m,"HLRAlgo_Intersection",R"#(Describes an intersection on an edge to hide. Contains a parameter and a state (ON = on the face, OUT = above the face, IN = under the Face))#");
    py::class_<HLRAlgo_PolyAlgo ,opencascade::handle<HLRAlgo_PolyAlgo> , Standard_Transient>(m,"HLRAlgo_PolyAlgo",R"#(to remove Hidden lines on Triangulations.to remove Hidden lines on Triangulations.to remove Hidden lines on Triangulations.)#");
    py::class_<HLRAlgo_PolyData ,opencascade::handle<HLRAlgo_PolyData> , Standard_Transient>(m,"HLRAlgo_PolyData",R"#(Data structure of a set of Triangles.Data structure of a set of Triangles.Data structure of a set of Triangles.)#");
    py::class_<HLRAlgo_PolyHidingData , shared_ptr<HLRAlgo_PolyHidingData> >(m,"HLRAlgo_PolyHidingData",R"#(Data structure of a set of Hiding Triangles.)#");
    py::class_<HLRAlgo_PolyInternalData ,opencascade::handle<HLRAlgo_PolyInternalData> , Standard_Transient>(m,"HLRAlgo_PolyInternalData",R"#(to Update OutLines.to Update OutLines.to Update OutLines.)#");
    py::class_<HLRAlgo_PolyInternalNode ,opencascade::handle<HLRAlgo_PolyInternalNode> , Standard_Transient>(m,"HLRAlgo_PolyInternalNode",R"#(to Update OutLines.to Update OutLines.to Update OutLines.)#");
    py::class_<HLRAlgo_PolyInternalSegment , shared_ptr<HLRAlgo_PolyInternalSegment> >(m,"HLRAlgo_PolyInternalSegment",R"#(to Update OutLines.)#");
    py::class_<HLRAlgo_PolyShellData ,opencascade::handle<HLRAlgo_PolyShellData> , Standard_Transient>(m,"HLRAlgo_PolyShellData",R"#(All the PolyData of a ShellAll the PolyData of a ShellAll the PolyData of a Shell)#");
    py::class_<HLRAlgo_Projector , shared_ptr<HLRAlgo_Projector> >(m,"HLRAlgo_Projector",R"#(Implements a projector object. To transform and project Points and Planes. This object is designed to be used in the removal of hidden lines and is returned by the Prs3d_Projector::Projector function. You define the projection of the selected shape by calling one of the following functions: - HLRBRep_Algo::Projector, or - HLRBRep_PolyAlgo::Projector The choice depends on the algorithm, which you are using. The parameters of the view are defined at the time of construction of a Prs3d_Projector object.)#");
    py::class_<HLRAlgo_TriangleData , shared_ptr<HLRAlgo_TriangleData> >(m,"HLRAlgo_TriangleData",R"#(Data structure of a triangle.)#");
    py::class_<HLRAlgo_WiresBlock ,opencascade::handle<HLRAlgo_WiresBlock> , Standard_Transient>(m,"HLRAlgo_WiresBlock",R"#(A WiresBlock is a set of Blocks. It is used by the DataStructure to structure the Edges.A WiresBlock is a set of Blocks. It is used by the DataStructure to structure the Edges.A WiresBlock is a set of Blocks. It is used by the DataStructure to structure the Edges.)#");

};

// user-defined post-inclusion per module

// user-defined post
