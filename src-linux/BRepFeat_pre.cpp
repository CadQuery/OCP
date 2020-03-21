
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <BRepTopAdaptor_FClass2d.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepFeat_Builder.hxx>
#include <BRepFeat_MakeCylindricalHole.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <BRepFeat_Form.hxx>
#include <BRepFeat_RibSlot.hxx>
#include <BRepFeat_MakePrism.hxx>
#include <BRepFeat_MakeRevol.hxx>
#include <BRepFeat_MakePipe.hxx>
#include <BRepFeat_Gluer.hxx>
#include <BRepFeat_MakeDPrism.hxx>
#include <BRepFeat_MakeLinearForm.hxx>
#include <BRepFeat_MakeRevolutionForm.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepFeat.hxx>
#include <BRepFeat_Builder.hxx>
#include <BRepFeat_Form.hxx>
#include <BRepFeat_Gluer.hxx>
#include <BRepFeat_MakeCylindricalHole.hxx>
#include <BRepFeat_MakeDPrism.hxx>
#include <BRepFeat_MakeLinearForm.hxx>
#include <BRepFeat_MakePipe.hxx>
#include <BRepFeat_MakePrism.hxx>
#include <BRepFeat_MakeRevol.hxx>
#include <BRepFeat_MakeRevolutionForm.hxx>
#include <BRepFeat_PerfSelection.hxx>
#include <BRepFeat_RibSlot.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <BRepFeat_Status.hxx>
#include <BRepFeat_StatusError.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepFeat_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepFeat", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepFeat_PerfSelection>(m, "BRepFeat_PerfSelection",R"#(To declare the type of selection semantics for local operation Perform methods - NoSelection - SelectionFU - selection of a face up to which a local operation will be performed - SelectionU - selection of a point up to which a local operation will be performed - SelectionSh - selection of a shape on which a local operation will be performed - SelectionShU - selection of a shape up to which a local operation will be performed.)#")
        .value("BRepFeat_NoSelection",BRepFeat_PerfSelection::BRepFeat_NoSelection)
        .value("BRepFeat_SelectionFU",BRepFeat_PerfSelection::BRepFeat_SelectionFU)
        .value("BRepFeat_SelectionU",BRepFeat_PerfSelection::BRepFeat_SelectionU)
        .value("BRepFeat_SelectionSh",BRepFeat_PerfSelection::BRepFeat_SelectionSh)
        .value("BRepFeat_SelectionShU",BRepFeat_PerfSelection::BRepFeat_SelectionShU).export_values();
    py::enum_<BRepFeat_Status>(m, "BRepFeat_Status",R"#(None)#")
        .value("BRepFeat_NoError",BRepFeat_Status::BRepFeat_NoError)
        .value("BRepFeat_InvalidPlacement",BRepFeat_Status::BRepFeat_InvalidPlacement)
        .value("BRepFeat_HoleTooLong",BRepFeat_Status::BRepFeat_HoleTooLong).export_values();
    py::enum_<BRepFeat_StatusError>(m, "BRepFeat_StatusError",R"#(Discribes the error.)#")
        .value("BRepFeat_OK",BRepFeat_StatusError::BRepFeat_OK)
        .value("BRepFeat_BadDirect",BRepFeat_StatusError::BRepFeat_BadDirect)
        .value("BRepFeat_BadIntersect",BRepFeat_StatusError::BRepFeat_BadIntersect)
        .value("BRepFeat_EmptyBaryCurve",BRepFeat_StatusError::BRepFeat_EmptyBaryCurve)
        .value("BRepFeat_EmptyCutResult",BRepFeat_StatusError::BRepFeat_EmptyCutResult)
        .value("BRepFeat_FalseSide",BRepFeat_StatusError::BRepFeat_FalseSide)
        .value("BRepFeat_IncDirection",BRepFeat_StatusError::BRepFeat_IncDirection)
        .value("BRepFeat_IncSlidFace",BRepFeat_StatusError::BRepFeat_IncSlidFace)
        .value("BRepFeat_IncParameter",BRepFeat_StatusError::BRepFeat_IncParameter)
        .value("BRepFeat_IncTypes",BRepFeat_StatusError::BRepFeat_IncTypes)
        .value("BRepFeat_IntervalOverlap",BRepFeat_StatusError::BRepFeat_IntervalOverlap)
        .value("BRepFeat_InvFirstShape",BRepFeat_StatusError::BRepFeat_InvFirstShape)
        .value("BRepFeat_InvOption",BRepFeat_StatusError::BRepFeat_InvOption)
        .value("BRepFeat_InvShape",BRepFeat_StatusError::BRepFeat_InvShape)
        .value("BRepFeat_LocOpeNotDone",BRepFeat_StatusError::BRepFeat_LocOpeNotDone)
        .value("BRepFeat_LocOpeInvNotDone",BRepFeat_StatusError::BRepFeat_LocOpeInvNotDone)
        .value("BRepFeat_NoExtFace",BRepFeat_StatusError::BRepFeat_NoExtFace)
        .value("BRepFeat_NoFaceProf",BRepFeat_StatusError::BRepFeat_NoFaceProf)
        .value("BRepFeat_NoGluer",BRepFeat_StatusError::BRepFeat_NoGluer)
        .value("BRepFeat_NoIntersectF",BRepFeat_StatusError::BRepFeat_NoIntersectF)
        .value("BRepFeat_NoIntersectU",BRepFeat_StatusError::BRepFeat_NoIntersectU)
        .value("BRepFeat_NoParts",BRepFeat_StatusError::BRepFeat_NoParts)
        .value("BRepFeat_NoProjPt",BRepFeat_StatusError::BRepFeat_NoProjPt)
        .value("BRepFeat_NotInitialized",BRepFeat_StatusError::BRepFeat_NotInitialized)
        .value("BRepFeat_NotYetImplemented",BRepFeat_StatusError::BRepFeat_NotYetImplemented)
        .value("BRepFeat_NullRealTool",BRepFeat_StatusError::BRepFeat_NullRealTool)
        .value("BRepFeat_NullToolF",BRepFeat_StatusError::BRepFeat_NullToolF)
        .value("BRepFeat_NullToolU",BRepFeat_StatusError::BRepFeat_NullToolU).export_values();

//Python trampoline classes
    class Py_BRepFeat_Form : public BRepFeat_Form{
    public:
        using BRepFeat_Form::BRepFeat_Form;


        // public pure virtual
        void Curves(NCollection_Sequence<opencascade::handle<Geom_Curve> > & S) override { PYBIND11_OVERLOAD_PURE(void,BRepFeat_Form,Curves,S) };
        opencascade::handle<Geom_Curve> BarycCurve() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,BRepFeat_Form,BarycCurve,) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepFeat , shared_ptr<BRepFeat> >(m,"BRepFeat",R"#(BRepFeat is necessary for the creation and manipulation of both form and mechanical features in a Boundary Representation framework. Form features can be depressions or protrusions and include the following types: - Cylinder - Draft Prism - Prism - Revolved feature - Pipe Depending on whether you wish to make a depression or a protrusion, you can choose your operation type between the following: - removing matter (a Boolean cut: Fuse setting 0) - adding matter (Boolean fusion: Fuse setting 1) The semantics of form feature creation is based on the construction of shapes: - for a certain length in a certain direction - up to a limiting face - from a limiting face at a height - above and/or below a plane The shape defining the construction of a feature can be either a supporting edge or a concerned area of a face. In case of supporting edge, this contour can be attached to a face of the basis shape by binding. When the contour is bound to this face, the information that the contour will slide on the face becomes available to the relevant class methods. In case of the concerned area of a face, you could, for example, cut it out and move it at a different height, which will define the limiting face of a protrusion or depression. Topological definition with local operations of this sort makes calculations simpler and faster than a global operation. The latter would entail a second phase of removing unwanted matter to get the same result. Mechanical features include ribs - protrusions - and grooves (or slots) - depressions along planar (linear) surfaces or revolution surfaces. The semantics of mechanical features is based on giving thickness to a contour. This thickness can either be unilateral - on one side of the contour - or bilateral - on both sides. As in the semantics of form features, the thickness is defined by construction of shapes in specific contexts. However, in case of mechanical features, development contexts differ. Here they include extrusion: - to a limiting face of the basis shape - to or from a limiting plane - to a height.)#");
    py::class_<BRepFeat_Builder , shared_ptr<BRepFeat_Builder> , BOPAlgo_BOP>(m,"BRepFeat_Builder",R"#(Provides a basic tool to implement features topological operations. The main goal of the algorithm is to perform the result of the operation according to the kept parts of the tool. Input data: a) DS; b) The kept parts of the tool; If the map of the kept parts of the tool is not filled boolean operation of the given type will be performed; c) Operation required. Steps: a) Fill myShapes, myRemoved maps; b) Rebuild edges and faces; c) Build images of the object; d) Build the result of the operation. Result: Result shape of the operation required.)#");
    py::class_<BRepFeat_Form , shared_ptr<BRepFeat_Form>,Py_BRepFeat_Form , BRepBuilderAPI_MakeShape>(m,"BRepFeat_Form",R"#(Provides general functions to build form features. Form features can be depressions or protrusions and include the following types: - Cylinder - Draft Prism - Prism - Revolved feature - Pipe In each case, you have a choice of operation type between the following: - removing matter (a Boolean cut: Fuse setting 0) - adding matter (Boolean fusion: Fuse setting 1) The semantics of form feature creation is based on the construction of shapes: - along a length - up to a limiting face - from a limiting face to a height - above and/or below a plane The shape defining construction of the feature can be either the supporting edge or the concerned area of a face. In case of the supporting edge, this contour can be attached to a face of the basis shape by binding. When the contour is bound to this face, the information that the contour will slide on the face becomes available to the relevant class methods. In case of the concerned area of a face, you could, for example, cut it out and move it to a different height which will define the limiting face of a protrusion or depression. Topological definition with local operations of this sort makes calculations simpler and faster than a global operation. The latter would entail a second phase of removing unwanted matter to get the same result.)#");
    py::class_<BRepFeat_Gluer , shared_ptr<BRepFeat_Gluer> , BRepBuilderAPI_MakeShape>(m,"BRepFeat_Gluer",R"#(One of the most significant aspects of BRepFeat functionality is the use of local operations as opposed to global ones. In a global operation, you would first construct a form of the type you wanted in your final feature, and then remove matter so that it could fit into your initial basis object. In a local operation, however, you specify the domain of the feature construction with aspects of the shape on which the feature is being created. These semantics are expressed in terms of a member shape of the basis shape from which - or up to which - matter will be added or removed. As a result, local operations make calculations simpler and faster than global operations. Glueing uses wires or edges of a face in the basis shape. These are to become a part of the feature. They are first cut out and then projected to a plane outside or inside the basis shape. By rebuilding the initial shape incorporating the edges and the faces of the tool, protrusion features can be constructed.)#");
    py::class_<BRepFeat_RibSlot , shared_ptr<BRepFeat_RibSlot> , BRepBuilderAPI_MakeShape>(m,"BRepFeat_RibSlot",R"#(Provides functions to build mechanical features. Mechanical features include ribs - protrusions and grooves (or slots) - depressions along planar (linear) surfaces or revolution surfaces. The semantics of mechanical features is built around giving thickness to a contour. This thickness can either be unilateral - on one side of the contour - or bilateral - on both sides. As in the semantics of form features, the thickness is defined by construction of shapes in specific contexts. The development contexts differ, however,in case of mechanical features. Here they include extrusion: - to a limiting face of the basis shape - to or from a limiting plane - to a height.)#");
    py::class_<BRepFeat_SplitShape , shared_ptr<BRepFeat_SplitShape> , BRepBuilderAPI_MakeShape>(m,"BRepFeat_SplitShape",R"#(One of the most significant aspects of BRepFeat functionality is the use of local operations as opposed to global ones. In a global operation, you would first construct a form of the type you wanted in your final feature, and then remove matter so that it could fit into your initial basis object. In a local operation, however, you specify the domain of the feature construction with aspects of the shape on which the feature is being created. These semantics are expressed in terms of a member shape of the basis shape from which - or up to which - matter will be added or removed. As a result, local operations make calculations simpler and faster than global operations. In BRepFeat, the semantics of local operations define features constructed from a contour or a part of the basis shape referred to as the tool. In a SplitShape object, wires or edges of a face in the basis shape to be used as a part of the feature are cut out and projected to a plane outside or inside the basis shape. By rebuilding the initial shape incorporating the edges and the faces of the tool, protrusion or depression features can be constructed.)#");
    py::class_<BRepFeat_MakeCylindricalHole , shared_ptr<BRepFeat_MakeCylindricalHole> , BRepFeat_Builder>(m,"BRepFeat_MakeCylindricalHole",R"#(Provides a tool to make cylindrical holes on a shape.)#");
    py::class_<BRepFeat_MakeDPrism , shared_ptr<BRepFeat_MakeDPrism> , BRepFeat_Form>(m,"BRepFeat_MakeDPrism",R"#(Describes functions to build draft prism topologies from basis shape surfaces. These can be depressions or protrusions. The semantics of draft prism feature creation is based on the construction of shapes: - along a length - up to a limiting face - from a limiting face to a height. The shape defining construction of the draft prism feature can be either the supporting edge or the concerned area of a face. In case of the supporting edge, this contour can be attached to a face of the basis shape by binding. When the contour is bound to this face, the information that the contour will slide on the face becomes available to the relevant class methods. In case of the concerned area of a face, you could, for example, cut it out and move it to a different height which will define the limiting face of a protrusion or depression.)#");
    py::class_<BRepFeat_MakeLinearForm , shared_ptr<BRepFeat_MakeLinearForm> , BRepFeat_RibSlot>(m,"BRepFeat_MakeLinearForm",R"#(Builds a rib or a groove along a developable, planar surface. The semantics of mechanical features is built around giving thickness to a contour. This thickness can either be symmetrical - on one side of the contour - or dissymmetrical - on both sides. As in the semantics of form features, the thickness is defined by construction of shapes in specific contexts. The development contexts differ, however, in case of mechanical features. Here they include extrusion: - to a limiting face of the basis shape - to or from a limiting plane - to a height.)#");
    py::class_<BRepFeat_MakePipe , shared_ptr<BRepFeat_MakePipe> , BRepFeat_Form>(m,"BRepFeat_MakePipe",R"#(Constructs compound shapes with pipe features. These can be depressions or protrusions. The semantics of pipe feature creation is based on the construction of shapes: - along a length - up to a limiting face - from a limiting face to a height. The shape defining construction of the pipe feature can be either the supporting edge or the concerned area of a face. In case of the supporting edge, this contour can be attached to a face of the basis shape by binding. When the contour is bound to this face, the information that the contour will slide on the face becomes available to the relevant class methods. In case of the concerned area of a face, you could, for example, cut it out and move it to a different height which will define the limiting face of a protrusion or depression.)#");
    py::class_<BRepFeat_MakePrism , shared_ptr<BRepFeat_MakePrism> , BRepFeat_Form>(m,"BRepFeat_MakePrism",R"#(Describes functions to build prism features. These can be depressions or protrusions. The semantics of prism feature creation is based on the construction of shapes: - along a length - up to a limiting face - from a limiting face to a height. The shape defining construction of the prism feature can be either the supporting edge or the concerned area of a face. In case of the supporting edge, this contour can be attached to a face of the basis shape by binding. When the contour is bound to this face, the information that the contour will slide on the face becomes available to the relevant class methods. In case of the concerned area of a face, you could, for example, cut it out and move it to a different height which will define the limiting face of a protrusion or depression.)#");
    py::class_<BRepFeat_MakeRevol , shared_ptr<BRepFeat_MakeRevol> , BRepFeat_Form>(m,"BRepFeat_MakeRevol",R"#(Describes functions to build revolved shells from basis shapes.)#");
    py::class_<BRepFeat_MakeRevolutionForm , shared_ptr<BRepFeat_MakeRevolutionForm> , BRepFeat_RibSlot>(m,"BRepFeat_MakeRevolutionForm",R"#(MakeRevolutionForm Generates a surface of revolution in the feature as it slides along a revolved face in the basis shape. The semantics of mechanical features is built around giving thickness to a contour. This thickness can either be unilateral - on one side of the contour - or bilateral - on both sides. As in the semantics of form features, the thickness is defined by construction of shapes in specific contexts. The development contexts differ, however,in case of mechanical features. Here they include extrusion: - to a limiting face of the basis shape - to or from a limiting plane - to a height.)#");

};

// user-defined post-inclusion per module

// user-defined post
