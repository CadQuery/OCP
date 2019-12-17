
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_Tool.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <BRepAlgo_DSAccess.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>

// module includes
#include <BRepAlgo.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <BRepAlgo_CheckStatus.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean.hxx>
#include <BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.hxx>
#include <BRepAlgo_DataMapOfShapeBoolean.hxx>
#include <BRepAlgo_DataMapOfShapeInterference.hxx>
#include <BRepAlgo_DSAccess.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_SequenceOfSequenceOfInteger.hxx>
#include <BRepAlgo_Tool.hxx>

// template related includes
// ./opencascade/BRepAlgo_SequenceOfSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/BRepAlgo_DataMapOfShapeInterference.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepAlgo_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepAlgo", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepAlgo_CheckStatus>(m, "BRepAlgo_CheckStatus",R"#(None)#")
        .value("BRepAlgo_OK",BRepAlgo_CheckStatus::BRepAlgo_OK)
        .value("BRepAlgo_NOK",BRepAlgo_CheckStatus::BRepAlgo_NOK).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<BRepAlgo_BooleanOperations ,std::unique_ptr<BRepAlgo_BooleanOperations>  >(m,"BRepAlgo_BooleanOperations",R"#(None)#");
    py::class_<BRepAlgo_FaceRestrictor ,std::unique_ptr<BRepAlgo_FaceRestrictor>  >(m,"BRepAlgo_FaceRestrictor",R"#(Builds all the faces limited with a set of non jointing and planars wires. if <ControlOrientation> is false The Wires must have correct orientations. Sinon orientation des wires de telle sorte que les faces ne soient pas infinies et qu'elles soient disjointes.)#");
    py::class_<BRepAlgo_NormalProjection ,std::unique_ptr<BRepAlgo_NormalProjection>  >(m,"BRepAlgo_NormalProjection",R"#(This class makes the projection of a wire on a shape.)#");
    py::class_<BRepAlgo_Loop ,std::unique_ptr<BRepAlgo_Loop>  >(m,"BRepAlgo_Loop",R"#(Builds the loops from a set of edges on a face.)#");
    py::class_<BRepAlgo_BooleanOperation ,std::unique_ptr<BRepAlgo_BooleanOperation>  , BRepBuilderAPI_MakeShape >(m,"BRepAlgo_BooleanOperation",R"#(The abstract class BooleanOperation is the root class of Boolean operations. A BooleanOperation object stores the two shapes in preparation for the Boolean operation specified in one of the classes inheriting from this one. These include: - Common - Cut - Fuse - Section.)#");
    py::class_<BRepAlgo_Image ,std::unique_ptr<BRepAlgo_Image>  >(m,"BRepAlgo_Image",R"#(Stores link between a shape <S> and a shape <NewS> obtained from <S>. <NewS> is an image of <S>.)#");
    py::class_<BRepAlgo_DSAccess ,std::unique_ptr<BRepAlgo_DSAccess>  >(m,"BRepAlgo_DSAccess",R"#(None)#");
    py::class_<BRepAlgo_Cut ,std::unique_ptr<BRepAlgo_Cut>  , BRepAlgo_BooleanOperation >(m,"BRepAlgo_Cut",R"#(Describes functions for performing a topological cut operation (Boolean subtraction). A Cut object provides the framework for: - defining the construction of a cut shape, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepAlgo_Section ,std::unique_ptr<BRepAlgo_Section>  , BRepAlgo_BooleanOperation >(m,"BRepAlgo_Section",R"#(Construction of the section lines between two shapes. For this Boolean operation, each face of the first shape is intersected by each face of the second shape. The resulting intersection edges are brought together into a compound object, but not chained or grouped into wires. Computation of the intersection of two Shapes or Surfaces The two parts involved in this Boolean operation may be defined from geometric surfaces: the most common use is the computation of the planar section of a shape. A Section object provides the framework for: - defining the shapes to be intersected, and the computation options, - implementing the construction algorithm, and - consulting the result. Example : giving two shapes S1,S2 accessing faces, let compute the section edges R on S1,S2, performing approximation on new curves, performing PCurve on part 1 but not on part 2 : Standard_Boolean PerformNow = Standard_False; BRepBoolAPI_Section S(S1,S2,PerformNow); S.ComputePCurveOn1(Standard_True); S.Approximation(Standard_True); S.Build(); TopoDS_Shape R = S.Shape(); On Null Shapes of geometries, NotDone() is called.)#");
    py::class_<BRepAlgo_Common ,std::unique_ptr<BRepAlgo_Common>  , BRepAlgo_BooleanOperation >(m,"BRepAlgo_Common",R"#(Describes functions for performing a topological common operation (Boolean intersection). A Common object provides the framework for: - defining the construction of a common shape, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepAlgo_Fuse ,std::unique_ptr<BRepAlgo_Fuse>  , BRepAlgo_BooleanOperation >(m,"BRepAlgo_Fuse",R"#(Describes functions for performing a topological fusion operation (Boolean union). A Fuse object provides the framework for: - defining the construction of a fused shape, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepAlgo ,std::unique_ptr<BRepAlgo>  >(m,"BRepAlgo",R"#(The BRepAlgo package provides a full range of services to perform Old Boolean Operations in Open CASCADE. Attention: The New Boolean Operation has replaced the Old Boolean Operations algorithm in the BrepAlgoAPI package in Open CASCADE.)#");
    py::class_<BRepAlgo_EdgeConnector ,opencascade::handle<BRepAlgo_EdgeConnector>  , Standard_Transient >(m,"BRepAlgo_EdgeConnector",R"#(Used by DSAccess to reconstruct an EdgeSet of connected edges. The result produced by MakeBlock is a list of non-standard TopoDS_wire, which can present connexions of edge of order > 2 in certain vertex. The method IsWire indicates standard/non-standard character of all wire produced.Used by DSAccess to reconstruct an EdgeSet of connected edges. The result produced by MakeBlock is a list of non-standard TopoDS_wire, which can present connexions of edge of order > 2 in certain vertex. The method IsWire indicates standard/non-standard character of all wire produced.Used by DSAccess to reconstruct an EdgeSet of connected edges. The result produced by MakeBlock is a list of non-standard TopoDS_wire, which can present connexions of edge of order > 2 in certain vertex. The method IsWire indicates standard/non-standard character of all wire produced.)#");
    py::class_<BRepAlgo_Tool ,std::unique_ptr<BRepAlgo_Tool>  >(m,"BRepAlgo_Tool",R"#(None)#");
    py::class_<BRepAlgo_AsDes ,opencascade::handle<BRepAlgo_AsDes>  , Standard_Transient >(m,"BRepAlgo_AsDes",R"#(SD to store descendants and ascendants of Shapes.SD to store descendants and ascendants of Shapes.SD to store descendants and ascendants of Shapes.)#");

// pre-register typdefs
// ./opencascade/BRepAlgo_BooleanOperations.hxx
// ./opencascade/BRepAlgo_DSAccess.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean.hxx
// ./opencascade/BRepAlgo_SequenceOfSequenceOfInteger.hxx
    preregister_template_NCollection_Sequence<TColStd_SequenceOfInteger>(m,"BRepAlgo_SequenceOfSequenceOfInteger");  
// ./opencascade/BRepAlgo_FaceRestrictor.hxx
// ./opencascade/BRepAlgo.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_Cut.hxx
// ./opencascade/BRepAlgo_NormalProjection.hxx
// ./opencascade/BRepAlgo_Tool.hxx
// ./opencascade/BRepAlgo_Section.hxx
// ./opencascade/BRepAlgo_Loop.hxx
// ./opencascade/BRepAlgo_EdgeConnector.hxx
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, Standard_Boolean, TopTools_ShapeMapHasher>(m,"BRepAlgo_DataMapOfShapeBoolean");  
// ./opencascade/BRepAlgo_Common.hxx
// ./opencascade/BRepAlgo_DataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_CheckStatus.hxx
// ./opencascade/BRepAlgo_BooleanOperation.hxx
// ./opencascade/BRepAlgo_AsDes.hxx
// ./opencascade/BRepAlgo_Image.hxx
// ./opencascade/BRepAlgo_Fuse.hxx

};

// user-defined post-inclusion per module

// user-defined post
