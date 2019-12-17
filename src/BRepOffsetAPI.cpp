
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <Law_Function.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>

// module includes
#include <BRepOffsetAPI_DraftAngle.hxx>
#include <BRepOffsetAPI_FindContigousEdges.hxx>
#include <BRepOffsetAPI_MakeDraft.hxx>
#include <BRepOffsetAPI_MakeEvolved.hxx>
#include <BRepOffsetAPI_MakeFilling.hxx>
#include <BRepOffsetAPI_MakeOffset.hxx>
#include <BRepOffsetAPI_MakeOffsetShape.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <BRepOffsetAPI_MakePipeShell.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_MiddlePath.hxx>
#include <BRepOffsetAPI_NormalProjection.hxx>
#include <BRepOffsetAPI_SequenceOfSequenceOfReal.hxx>
#include <BRepOffsetAPI_SequenceOfSequenceOfShape.hxx>
#include <BRepOffsetAPI_Sewing.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>

// template related includes
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfShape.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepOffsetAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepOffsetAPI"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepOffsetAPI_NormalProjection ,std::unique_ptr<BRepOffsetAPI_NormalProjection>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_NormalProjection"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def("Init",
             (void (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_NormalProjection::Init),
             R"#(Initializes the empty constructor framework with the shape S.)#"  , py::arg("S"))
        .def("Add",
             (void (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_NormalProjection::Add),
             R"#(Adds the shape ToProj to the framework for calculation of the projection by Compute3d. ToProj is an edge or a wire and will be projected onto the basis shape. Exceptions Standard_ConstructionError if ToProj is not added.)#"  , py::arg("ToProj"))
        .def("SetParams",
             (void (BRepOffsetAPI_NormalProjection::*)( const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BRepOffsetAPI_NormalProjection::*)( const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&BRepOffsetAPI_NormalProjection::SetParams),
             R"#(Sets the parameters used for computation Tol3 is the requiered tolerance between the 3d projected curve and its 2d representation InternalContinuity is the order of constraints used for approximation MaxDeg and MaxSeg are the maximum degree and the maximum number of segment for BSpline resulting of an approximation.)#"  , py::arg("Tol3D"),  py::arg("Tol2D"),  py::arg("InternalContinuity"),  py::arg("MaxDegree"),  py::arg("MaxSeg"))
        .def("SetMaxDistance",
             (void (BRepOffsetAPI_NormalProjection::*)( const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_NormalProjection::*)( const Standard_Real  ) >(&BRepOffsetAPI_NormalProjection::SetMaxDistance),
             R"#(Sets the maximum distance between target shape and shape to project. If this condition is not satisfied then corresponding part of solution is discarded. if MaxDist < 0 then this method does not affect the algorithm)#"  , py::arg("MaxDist"))
        .def("SetLimit",
             (void (BRepOffsetAPI_NormalProjection::*)( const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_NormalProjection::*)( const Standard_Boolean  ) >(&BRepOffsetAPI_NormalProjection::SetLimit),
             R"#(Manage limitation of projected edges.)#"  , py::arg("FaceBoundaries")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Compute3d",
             (void (BRepOffsetAPI_NormalProjection::*)( const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_NormalProjection::*)( const Standard_Boolean  ) >(&BRepOffsetAPI_NormalProjection::Compute3d),
             R"#(Returns true if a 3D curve is computed. If not, false is returned and an initial 3D curve is kept to build the resulting edges.)#"  , py::arg("With3d")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Build",
             (void (BRepOffsetAPI_NormalProjection::*)() ) static_cast<void (BRepOffsetAPI_NormalProjection::*)() >(&BRepOffsetAPI_NormalProjection::Build),
             R"#(Builds the result of the projection as a compound of wires. Tries to build oriented wires.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepOffsetAPI_NormalProjection::*)() const) static_cast<Standard_Boolean (BRepOffsetAPI_NormalProjection::*)() const>(&BRepOffsetAPI_NormalProjection::IsDone),
             R"#(Returns true if the object was correctly built by the shape construction algorithm. If at the construction time of the shape, the algorithm cannot be completed, or the original data is corrupted, IsDone returns false and therefore protects the use of functions to access the result of the construction (typically the Shape function).)#" )
        .def("Projection",
             (const TopoDS_Shape & (BRepOffsetAPI_NormalProjection::*)() const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_NormalProjection::*)() const>(&BRepOffsetAPI_NormalProjection::Projection),
             R"#(Performs the projection. The construction of the result is performed by Build. Exceptions StdFail_NotDone if the projection was not performed.)#" )
        .def("Couple",
             (const TopoDS_Shape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Edge &  ) const>(&BRepOffsetAPI_NormalProjection::Couple),
             R"#(Returns the initial face corresponding to the projected edge E. Exceptions StdFail_NotDone if no face was found. Standard_NoSuchObject if if a face corresponding to E has already been found.)#"  , py::arg("E"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_NormalProjection::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("Ancestor",
             (const TopoDS_Shape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Edge &  ) const>(&BRepOffsetAPI_NormalProjection::Ancestor),
             R"#(Returns the initial edge corresponding to the edge E resulting from the computation of the projection. Exceptions StdFail_NotDone if no edge was found. Standard_NoSuchObject if an edge corresponding to E has already been found.)#"  , py::arg("E"))
        .def("BuildWire",
             (Standard_Boolean (BRepOffsetAPI_NormalProjection::*)( NCollection_List<TopoDS_Shape> &  ) const) static_cast<Standard_Boolean (BRepOffsetAPI_NormalProjection::*)( NCollection_List<TopoDS_Shape> &  ) const>(&BRepOffsetAPI_NormalProjection::BuildWire),
             R"#(build the result as a list of wire if possible in -- a first returns a wire only if there is only a wire.)#"  , py::arg("Liste"))
;


    static_cast<py::class_<BRepOffsetAPI_MakeEvolved ,std::unique_ptr<BRepOffsetAPI_MakeEvolved>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_MakeEvolved"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Wire &,const GeomAbs_JoinType,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Real >()  , py::arg("Spine"),  py::arg("Profil"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("AxeProf")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Solid")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ProfOnSpine")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(0.0000001) )
        .def(py::init< const TopoDS_Face &,const TopoDS_Wire &,const GeomAbs_JoinType,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Real >()  , py::arg("Spine"),  py::arg("Profil"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("AxeProf")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Solid")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ProfOnSpine")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(0.0000001) )
        .def("Evolved",
             (const BRepFill_Evolved & (BRepOffsetAPI_MakeEvolved::*)() const) static_cast<const BRepFill_Evolved & (BRepOffsetAPI_MakeEvolved::*)() const>(&BRepOffsetAPI_MakeEvolved::Evolved),
             R"#(None)#" )
        .def("Build",
             (void (BRepOffsetAPI_MakeEvolved::*)() ) static_cast<void (BRepOffsetAPI_MakeEvolved::*)() >(&BRepOffsetAPI_MakeEvolved::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("GeneratedShapes",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeEvolved::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeEvolved::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) const>(&BRepOffsetAPI_MakeEvolved::GeneratedShapes),
             R"#(Returns the shapes created from a subshape <SpineShape> of the spine and a subshape <ProfShape> on the profile.)#"  , py::arg("SpineShape"),  py::arg("ProfShape"))
        .def("Top",
             (const TopoDS_Shape & (BRepOffsetAPI_MakeEvolved::*)() const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_MakeEvolved::*)() const>(&BRepOffsetAPI_MakeEvolved::Top),
             R"#(Return the face Top if <Solid> is True in the constructor.)#" )
        .def("Bottom",
             (const TopoDS_Shape & (BRepOffsetAPI_MakeEvolved::*)() const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_MakeEvolved::*)() const>(&BRepOffsetAPI_MakeEvolved::Bottom),
             R"#(Return the face Bottom if <Solid> is True in the constructor.)#" )
;


    static_cast<py::class_<BRepOffsetAPI_MakePipe ,std::unique_ptr<BRepOffsetAPI_MakePipe>  , BRepPrimAPI_MakeSweep >>(m.attr("BRepOffsetAPI_MakePipe"))
        .def(py::init< const TopoDS_Wire &,const TopoDS_Shape & >()  , py::arg("Spine"),  py::arg("Profile") )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Shape &,const GeomFill_Trihedron,const Standard_Boolean >()  , py::arg("Spine"),  py::arg("Profile"),  py::arg("aMode"),  py::arg("ForceApproxC1")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("Pipe",
             (const BRepFill_Pipe & (BRepOffsetAPI_MakePipe::*)() const) static_cast<const BRepFill_Pipe & (BRepOffsetAPI_MakePipe::*)() const>(&BRepOffsetAPI_MakePipe::Pipe),
             R"#(None)#" )
        .def("Build",
             (void (BRepOffsetAPI_MakePipe::*)() ) static_cast<void (BRepOffsetAPI_MakePipe::*)() >(&BRepOffsetAPI_MakePipe::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("FirstShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() >(&BRepOffsetAPI_MakePipe::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the prism.)#" )
        .def("LastShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() >(&BRepOffsetAPI_MakePipe::LastShape),
             R"#(Returns the TopoDS Shape of the top of the prism.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakePipe::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakePipe::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakePipe::Generated),
             R"#(None)#"  , py::arg("S"))
        .def("Generated",
             (TopoDS_Shape (BRepOffsetAPI_MakePipe::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipe::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakePipe::Generated),
             R"#(None)#"  , py::arg("SSpine"),  py::arg("SProfile"))
        .def("ErrorOnSurface",
             (Standard_Real (BRepOffsetAPI_MakePipe::*)() const) static_cast<Standard_Real (BRepOffsetAPI_MakePipe::*)() const>(&BRepOffsetAPI_MakePipe::ErrorOnSurface),
             R"#(None)#" )
;


    static_cast<py::class_<BRepOffsetAPI_MakeOffsetShape ,std::unique_ptr<BRepOffsetAPI_MakeOffsetShape>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_MakeOffsetShape"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Real,const BRepOffset_Mode,const Standard_Boolean,const Standard_Boolean,const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("S"),  py::arg("Offset"),  py::arg("Tol"),  py::arg("Mode")=static_cast<const BRepOffset_Mode>(BRepOffset_Skin),  py::arg("Intersection")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SelfInter")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("RemoveIntEdges")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("PerformBySimple",
             (void (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&BRepOffsetAPI_MakeOffsetShape::PerformBySimple),
             R"#(Constructs offset shape for the given one using simple algorithm without intersections computation.)#"  , py::arg("theS"),  py::arg("theOffsetValue"))
        .def("PerformByJoin",
             (void (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Real ,  const BRepOffset_Mode ,  const Standard_Boolean ,  const Standard_Boolean ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Real ,  const BRepOffset_Mode ,  const Standard_Boolean ,  const Standard_Boolean ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeOffsetShape::PerformByJoin),
             R"#(Constructs a shape parallel to the shape S, where - S may be a face, a shell, a solid or a compound of these shape kinds; - Offset is the offset value. The offset shape is constructed: - outside S, if Offset is positive, - inside S, if Offset is negative; - Tol defines the coincidence tolerance criterion for generated shapes; - Mode defines the construction type of parallels applied to the free edges of shape S; currently, only one construction type is implemented, namely the one where the free edges do not generate parallels; this corresponds to the default value BRepOffset_Skin; - Intersection specifies how the algorithm must work in order to limit the parallels to two adjacent shapes: - if Intersection is false (default value), the intersection is calculated with the parallels to the two adjacent shapes, - if Intersection is true, the intersection is calculated by taking all generated parallels into account; this computation method is more general as it avoids some self-intersections generated in the offset shape from features of small dimensions on shape S, however this method has not been completely implemented and therefore is not recommended for use; - SelfInter tells the algorithm whether a computation to eliminate self-intersections must be applied to the resulting shape; however, as this functionality is not yet implemented, it is recommended to use the default value (false); - Join defines how to fill the holes that may appear between parallels to the two adjacent faces. It may take values GeomAbs_Arc or GeomAbs_Intersection: - if Join is equal to GeomAbs_Arc, then pipes are generated between two free edges of two adjacent parallels, and spheres are generated on "images" of vertices; it is the default value, - if Join is equal to GeomAbs_Intersection, then the parallels to the two adjacent faces are enlarged and intersected, so that there are no free edges on parallels to faces. RemoveIntEdges flag defines whether to remove the INTERNAL edges from the result or not. Warnings 1. All the faces of the shape S should be based on the surfaces with continuity at least C1. 2. The offset value should be sufficiently small to avoid self-intersections in resulting shape. Otherwise these self-intersections may appear inside an offset face if its initial surface is not plane or sphere or cylinder, also some non-adjacent offset faces may intersect each other. Also, some offset surfaces may "turn inside out". 3. The algorithm may fail if the shape S contains vertices where more than 3 edges converge. 4. Since 3d-offset algorithm involves intersection of surfaces, it is under limitations of surface intersection algorithm. 5. A result cannot be generated if the underlying geometry of S is BSpline with continuity C0. Exceptions Geom_UndefinedDerivative if the underlying geometry of S is BSpline with continuity C0.)#"  , py::arg("S"),  py::arg("Offset"),  py::arg("Tol"),  py::arg("Mode")=static_cast<const BRepOffset_Mode>(BRepOffset_Skin),  py::arg("Intersection")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SelfInter")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("RemoveIntEdges")=static_cast<const Standard_Boolean>(Standard_False))
        .def("MakeOffset",
             (const BRepOffset_MakeOffset & (BRepOffsetAPI_MakeOffsetShape::*)() const) static_cast<const BRepOffset_MakeOffset & (BRepOffsetAPI_MakeOffsetShape::*)() const>(&BRepOffsetAPI_MakeOffsetShape::MakeOffset),
             R"#(Returns instance of the unrelying intersection / arc algorithm.)#" )
        .def("Build",
             (void (BRepOffsetAPI_MakeOffsetShape::*)() ) static_cast<void (BRepOffsetAPI_MakeOffsetShape::*)() >(&BRepOffsetAPI_MakeOffsetShape::Build),
             R"#(Does nothing.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakeOffsetShape::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("GeneratedEdge",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakeOffsetShape::GeneratedEdge),
             R"#(Returns the list of edges generated from the shape <S>.)#"  , py::arg("S"))
        .def("GetJoinType",
             (GeomAbs_JoinType (BRepOffsetAPI_MakeOffsetShape::*)() const) static_cast<GeomAbs_JoinType (BRepOffsetAPI_MakeOffsetShape::*)() const>(&BRepOffsetAPI_MakeOffsetShape::GetJoinType),
             R"#(Returns offset join type.)#" )
;


    static_cast<py::class_<BRepOffsetAPI_MakePipeShell ,std::unique_ptr<BRepOffsetAPI_MakePipeShell>  , BRepPrimAPI_MakeSweep >>(m.attr("BRepOffsetAPI_MakePipeShell"))
        .def(py::init< const TopoDS_Wire & >()  , py::arg("Spine") )
        .def("SetMode",
             (void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Boolean  ) >(&BRepOffsetAPI_MakePipeShell::SetMode),
             R"#(Sets a Frenet or a CorrectedFrenet trihedron to perform the sweeping If IsFrenet is false, a corrected Frenet trihedron is used.)#"  , py::arg("IsFrenet")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetDiscreteMode",
             (void (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::SetDiscreteMode),
             R"#(Sets a Discrete trihedron to perform the sweeping)#" )
        .def("SetMode",
             (void (BRepOffsetAPI_MakePipeShell::*)( const gp_Ax2 &  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const gp_Ax2 &  ) >(&BRepOffsetAPI_MakePipeShell::SetMode),
             R"#(Sets a fixed trihedron to perform the sweeping all sections will be parallel.)#"  , py::arg("Axe"))
        .def("SetMode",
             (void (BRepOffsetAPI_MakePipeShell::*)( const gp_Dir &  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const gp_Dir &  ) >(&BRepOffsetAPI_MakePipeShell::SetMode),
             R"#(Sets a fixed BiNormal direction to perform the -- sweeping. Angular relations beetween the section(s) and <BiNormal> will be constant)#"  , py::arg("BiNormal"))
        .def("SetMode",
             (Standard_Boolean (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakePipeShell::SetMode),
             R"#(Sets support to the spine to define the BiNormal of the trihedron, like the normal to the surfaces. Warning: To be effective, Each edge of the <spine> must have an representaion on one face of<SpineSupport>)#"  , py::arg("SpineSupport"))
        .def("SetMode",
             (void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Wire & ,  const Standard_Boolean ,  const BRepFill_TypeOfContact  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Wire & ,  const Standard_Boolean ,  const BRepFill_TypeOfContact  ) >(&BRepOffsetAPI_MakePipeShell::SetMode),
             R"#(Sets an auxiliary spine to define the Normal For each Point of the Spine P, an Point Q is evalued on <AuxiliarySpine> If <CurvilinearEquivalence> Q split <AuxiliarySpine> with the same length ratio than P split <Spline>. Else the plan define by P and the tangent to the <Spine> intersect <AuxiliarySpine> in Q. If <KeepContact> equals BRepFill_NoContact: The Normal is defined by the vector PQ. If <KeepContact> equals BRepFill_Contact: The Normal is defined to achieve that the sweeped section is in contact to the auxiliarySpine. The width of section is constant all along the path. In other words, the auxiliary spine lies on the swept surface, but not necessarily is a boundary of this surface. However, the auxiliary spine has to be close enough to the main spine to provide intersection with any section all along the path. If <KeepContact> equals BRepFill_ContactOnBorder: The auxiliary spine becomes a boundary of the swept surface and the width of section varies along the path. Give section to sweep. Possibilities are : - Give one or sevral section - Give one profile and an homotetic law. - Automatic compute of correspondance beetween spine, and section on the sweeped shape - correspondance beetween spine, and section on the sweeped shape defined by a vertex of the spine)#"  , py::arg("AuxiliarySpine"),  py::arg("CurvilinearEquivalence"),  py::arg("KeepContact")=static_cast<const BRepFill_TypeOfContact>(BRepFill_NoContact))
        .def("Add",
             (void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakePipeShell::Add),
             R"#(Adds the section Profile to this framework. First and last sections may be punctual, so the shape Profile may be both wire and vertex. Correspondent point on spine is computed automatically. If WithContact is true, the section is translated to be in contact with the spine. If WithCorrection is true, the section is rotated to be orthogonal to the spine?s tangent in the correspondent point. This option has no sense if the section is punctual (Profile is of type TopoDS_Vertex).)#"  , py::arg("Profile"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Add",
             (void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const TopoDS_Vertex & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const TopoDS_Vertex & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakePipeShell::Add),
             R"#(Adds the section Profile to this framework. Correspondent point on the spine is given by Location. Warning: To be effective, it is not recommended to combine methods Add and SetLaw.)#"  , py::arg("Profile"),  py::arg("Location"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetLaw",
             (void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const opencascade::handle<Law_Function> & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const opencascade::handle<Law_Function> & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakePipeShell::SetLaw),
             R"#(Sets the evolution law defined by the wire Profile with its position (Location, WithContact, WithCorrection are the same options as in methods Add) and a homotetic law defined by the function L. Warning: To be effective, it is not recommended to combine methods Add and SetLaw.)#"  , py::arg("Profile"),  py::arg("L"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetLaw",
             (void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const opencascade::handle<Law_Function> & ,  const TopoDS_Vertex & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ,  const opencascade::handle<Law_Function> & ,  const TopoDS_Vertex & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakePipeShell::SetLaw),
             R"#(Sets the evolution law defined by the wire Profile with its position (Location, WithContact, WithCorrection are the same options as in methods Add) and a homotetic law defined by the function L. Warning: To be effective, it is not recommended to combine methods Add and SetLaw.)#"  , py::arg("Profile"),  py::arg("L"),  py::arg("Location"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Delete",
             (void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakePipeShell::Delete),
             R"#(Removes the section Profile from this framework.)#"  , py::arg("Profile"))
        .def("IsReady",
             (Standard_Boolean (BRepOffsetAPI_MakePipeShell::*)() const) static_cast<Standard_Boolean (BRepOffsetAPI_MakePipeShell::*)() const>(&BRepOffsetAPI_MakePipeShell::IsReady),
             R"#(Returns true if this tool object is ready to build the shape, i.e. has a definition for the wire section Profile.)#" )
        .def("GetStatus",
             (BRepBuilderAPI_PipeError (BRepOffsetAPI_MakePipeShell::*)() const) static_cast<BRepBuilderAPI_PipeError (BRepOffsetAPI_MakePipeShell::*)() const>(&BRepOffsetAPI_MakePipeShell::GetStatus),
             R"#(Get a status, when Simulate or Build failed. It can be BRepBuilderAPI_PipeDone, BRepBuilderAPI_PipeNotDone, BRepBuilderAPI_PlaneNotIntersectGuide, BRepBuilderAPI_ImpossibleContact.)#" )
        .def("SetTolerance",
             (void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepOffsetAPI_MakePipeShell::SetTolerance),
             R"#(Sets the following tolerance values - 3D tolerance Tol3d - boundary tolerance BoundTol - angular tolerance TolAngular.)#"  , py::arg("Tol3d")=static_cast<const Standard_Real>(1.0e-4),  py::arg("BoundTol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("TolAngular")=static_cast<const Standard_Real>(1.0e-2))
        .def("SetMaxDegree",
             (void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Integer  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Integer  ) >(&BRepOffsetAPI_MakePipeShell::SetMaxDegree),
             R"#(Define the maximum V degree of resulting surface)#"  , py::arg("NewMaxDegree"))
        .def("SetMaxSegments",
             (void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Integer  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Integer  ) >(&BRepOffsetAPI_MakePipeShell::SetMaxSegments),
             R"#(Define the maximum number of spans in V-direction on resulting surface)#"  , py::arg("NewMaxSegments"))
        .def("SetForceApproxC1",
             (void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Boolean  ) >(&BRepOffsetAPI_MakePipeShell::SetForceApproxC1),
             R"#(Set the flag that indicates attempt to approximate a C1-continuous surface if a swept surface proved to be C0.)#"  , py::arg("ForceApproxC1"))
        .def("SetTransitionMode",
             (void (BRepOffsetAPI_MakePipeShell::*)( const BRepBuilderAPI_TransitionMode  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const BRepBuilderAPI_TransitionMode  ) >(&BRepOffsetAPI_MakePipeShell::SetTransitionMode),
             R"#(Sets the transition mode to manage discontinuities on the swept shape caused by fractures on the spine. The transition mode can be BRepBuilderAPI_Transformed (default value), BRepBuilderAPI_RightCorner, BRepBuilderAPI_RoundCorner: - RepBuilderAPI_Transformed: discontinuities are treated by modification of the sweeping mode. The pipe is "transformed" at the fractures of the spine. This mode assumes building a self-intersected shell. - BRepBuilderAPI_RightCorner: discontinuities are treated like right corner. Two pieces of the pipe corresponding to two adjacent segments of the spine are extended and intersected at a fracture of the spine. - BRepBuilderAPI_RoundCorner: discontinuities are treated like round corner. The corner is treated as rotation of the profile around an axis which passes through the point of the spine?s fracture. This axis is based on cross product of directions tangent to the adjacent segments of the spine at their common point. Warnings The mode BRepBuilderAPI_RightCorner provides a valid result if intersection of two pieces of the pipe (corresponding to two adjacent segments of the spine) in the neighborhood of the spine?s fracture is connected and planar. This condition can be violated if the spine is non-linear in some neighborhood of the fracture or if the profile was set with a scaling law. The last mode, BRepBuilderAPI_RoundCorner, will assuredly provide a good result only if a profile was set with option WithCorrection = True, i.e. it is strictly orthogonal to the spine.)#"  , py::arg("Mode")=static_cast<const BRepBuilderAPI_TransitionMode>(BRepBuilderAPI_Transformed))
        .def("Simulate",
             (void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) >(&BRepOffsetAPI_MakePipeShell::Simulate),
             R"#(Simulates the resulting shape by calculating its cross-sections. The spine is devided by this cross-sections into (NumberOfSection - 1) equal parts, the number of cross-sections is NumberOfSection. The cross-sections are wires and they are returned in the list Result. This gives a rapid preview of the resulting shape, which will be obtained using the settings you have provided. Raises NotDone if <me> it is not Ready)#"  , py::arg("NumberOfSection"),  py::arg("Result"))
        .def("Build",
             (void (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("MakeSolid",
             (Standard_Boolean (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<Standard_Boolean (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::MakeSolid),
             R"#(Transforms the sweeping Shell in Solid. If a propfile is not closed returns False)#" )
        .def("FirstShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the sweep.)#" )
        .def("LastShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::LastShape),
             R"#(Returns the TopoDS Shape of the top of the sweep.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakePipeShell::Generated),
             R"#(Returns a list of new shapes generated from the shape S by the shell-generating algorithm. This function is redefined from BRepOffsetAPI_MakeShape::Generated. S can be an edge or a vertex of a given Profile (see methods Add).)#"  , py::arg("S"))
        .def("ErrorOnSurface",
             (Standard_Real (BRepOffsetAPI_MakePipeShell::*)() const) static_cast<Standard_Real (BRepOffsetAPI_MakePipeShell::*)() const>(&BRepOffsetAPI_MakePipeShell::ErrorOnSurface),
             R"#(None)#" )
        .def("Profiles",
             (void (BRepOffsetAPI_MakePipeShell::*)( NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( NCollection_List<TopoDS_Shape> &  ) >(&BRepOffsetAPI_MakePipeShell::Profiles),
             R"#(Returns the list of original profiles)#"  , py::arg("theProfiles"))
;


    static_cast<py::class_<BRepOffsetAPI_ThruSections ,std::unique_ptr<BRepOffsetAPI_ThruSections>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_ThruSections"))
        .def(py::init< const Standard_Boolean,const Standard_Boolean,const Standard_Real >()  , py::arg("isSolid")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ruled")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("pres3d")=static_cast<const Standard_Real>(1.0e-06) )
        .def("Init",
             (void (BRepOffsetAPI_ThruSections::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real  ) >(&BRepOffsetAPI_ThruSections::Init),
             R"#(Initializes this algorithm for building a shell or a solid passing through a set of sections, where: - isSolid is set to true if this construction algorithm is required to build a solid or to false if it is required to build a shell. false is the default value; - ruled is set to true if the faces generated between the edges of two consecutive wires are ruled surfaces or to false (the default value) if they are smoothed out by approximation, - pres3d defines the precision criterion used by the approximation algorithm; the default value is 1.0e-6. Use AddWire and AddVertex to define the successive sections of the shell or solid to be built.)#"  , py::arg("isSolid")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ruled")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("pres3d")=static_cast<const Standard_Real>(1.0e-06))
        .def("AddWire",
             (void (BRepOffsetAPI_ThruSections::*)( const TopoDS_Wire &  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const TopoDS_Wire &  ) >(&BRepOffsetAPI_ThruSections::AddWire),
             R"#(Adds the wire wire to the set of sections through which the shell or solid is built. Use the Build function to construct the shape.)#"  , py::arg("wire"))
        .def("AddVertex",
             (void (BRepOffsetAPI_ThruSections::*)( const TopoDS_Vertex &  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const TopoDS_Vertex &  ) >(&BRepOffsetAPI_ThruSections::AddVertex),
             R"#(Adds the vertex Vertex (punctual section) to the set of sections through which the shell or solid is built. A vertex may be added to the set of sections only as first or last section. At least one wire must be added to the set of sections by the method AddWire. Use the Build function to construct the shape.)#"  , py::arg("aVertex"))
        .def("CheckCompatibility",
             (void (BRepOffsetAPI_ThruSections::*)( const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const Standard_Boolean  ) >(&BRepOffsetAPI_ThruSections::CheckCompatibility),
             R"#(Sets/unsets the option to compute origin and orientation on wires to avoid twisted results and update wires to have same number of edges.)#"  , py::arg("check")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetSmoothing",
             (void (BRepOffsetAPI_ThruSections::*)( const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const Standard_Boolean  ) >(&BRepOffsetAPI_ThruSections::SetSmoothing),
             R"#(Define the approximation algorithm)#"  , py::arg("UseSmoothing"))
        .def("SetParType",
             (void (BRepOffsetAPI_ThruSections::*)( const Approx_ParametrizationType  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const Approx_ParametrizationType  ) >(&BRepOffsetAPI_ThruSections::SetParType),
             R"#(Define the type of parametrization used in the approximation)#"  , py::arg("ParType"))
        .def("SetContinuity",
             (void (BRepOffsetAPI_ThruSections::*)( const GeomAbs_Shape  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const GeomAbs_Shape  ) >(&BRepOffsetAPI_ThruSections::SetContinuity),
             R"#(Define the Continuity used in the approximation)#"  , py::arg("C"))
        .def("SetCriteriumWeight",
             (void (BRepOffsetAPI_ThruSections::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepOffsetAPI_ThruSections::SetCriteriumWeight),
             R"#(define the Weights associed to the criterium used in the optimization.)#"  , py::arg("W1"),  py::arg("W2"),  py::arg("W3"))
        .def("SetMaxDegree",
             (void (BRepOffsetAPI_ThruSections::*)( const Standard_Integer  ) ) static_cast<void (BRepOffsetAPI_ThruSections::*)( const Standard_Integer  ) >(&BRepOffsetAPI_ThruSections::SetMaxDegree),
             R"#(Define the maximal U degree of result surface)#"  , py::arg("MaxDeg"))
        .def("ParType",
             (Approx_ParametrizationType (BRepOffsetAPI_ThruSections::*)() const) static_cast<Approx_ParametrizationType (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::ParType),
             R"#(returns the type of parametrization used in the approximation)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepOffsetAPI_ThruSections::*)() const) static_cast<GeomAbs_Shape (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::Continuity),
             R"#(returns the Continuity used in the approximation)#" )
        .def("MaxDegree",
             (Standard_Integer (BRepOffsetAPI_ThruSections::*)() const) static_cast<Standard_Integer (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::MaxDegree),
             R"#(returns the maximal U degree of result surface)#" )
        .def("UseSmoothing",
             (Standard_Boolean (BRepOffsetAPI_ThruSections::*)() const) static_cast<Standard_Boolean (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::UseSmoothing),
             R"#(Define the approximation algorithm)#" )
        .def("CriteriumWeight",
             (void (BRepOffsetAPI_ThruSections::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (BRepOffsetAPI_ThruSections::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&BRepOffsetAPI_ThruSections::CriteriumWeight),
             R"#(returns the Weights associed to the criterium used in the optimization.)#"  , py::arg("W1"),  py::arg("W2"),  py::arg("W3"))
        .def("Build",
             (void (BRepOffsetAPI_ThruSections::*)() ) static_cast<void (BRepOffsetAPI_ThruSections::*)() >(&BRepOffsetAPI_ThruSections::Build),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (BRepOffsetAPI_ThruSections::*)() const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the loft if solid)#" )
        .def("LastShape",
             (const TopoDS_Shape & (BRepOffsetAPI_ThruSections::*)() const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::LastShape),
             R"#(Returns the TopoDS Shape of the top of the loft if solid)#" )
        .def("GeneratedFace",
             (TopoDS_Shape (BRepOffsetAPI_ThruSections::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepOffsetAPI_ThruSections::*)( const TopoDS_Shape &  ) const>(&BRepOffsetAPI_ThruSections::GeneratedFace),
             R"#(if Ruled Returns the Face generated by each edge except the last wire if smoothed Returns the Face generated by each edge of the first wire)#"  , py::arg("Edge"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_ThruSections::Generated),
             R"#(Returns a list of new shapes generated from the shape S by the shell-generating algorithm. This function is redefined from BRepBuilderAPI_MakeShape::Generated. S can be an edge or a vertex of a given Profile (see methods AddWire and AddVertex).)#"  , py::arg("S"))
        .def("Wires",
             (const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)() const) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::Wires),
             R"#(Returns the list of original wires)#" )
;


    static_cast<py::class_<BRepOffsetAPI_DraftAngle ,std::unique_ptr<BRepOffsetAPI_DraftAngle>  , BRepBuilderAPI_ModifyShape >>(m.attr("BRepOffsetAPI_DraftAngle"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def("Clear",
             (void (BRepOffsetAPI_DraftAngle::*)() ) static_cast<void (BRepOffsetAPI_DraftAngle::*)() >(&BRepOffsetAPI_DraftAngle::Clear),
             R"#(Cancels the results of all taper-adding transformations performed by this algorithm on the initial shape. These results will have been defined by successive calls to the function Add.)#" )
        .def("Init",
             (void (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_DraftAngle::Init),
             R"#(Initializes, or reinitializes this taper-adding algorithm with the shape S. S will be referred to as the initial shape of this algorithm.)#"  , py::arg("S"))
        .def("Add",
             (void (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Face & ,  const gp_Dir & ,  const Standard_Real ,  const gp_Pln & ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Face & ,  const gp_Dir & ,  const Standard_Real ,  const gp_Pln & ,  const Standard_Boolean  ) >(&BRepOffsetAPI_DraftAngle::Add),
             R"#(Adds the face F, the direction Direction, the angle Angle, the plane NeutralPlane, and the flag Flag to the framework created at construction time, and with this data, defines the taper-adding transformation. F is a face, which belongs to the initial shape of this algorithm or to the shape loaded by the function Init. Only planar, cylindrical or conical faces can be tapered: - If the face F is planar, it is tapered by inclining it through the angle Angle about the line of intersection between the plane NeutralPlane and F. Direction indicates the side of NeutralPlane from which matter is removed if Angle is positive or added if Angle is negative. - If F is cylindrical or conical, it is transformed in the same way on a single face, resulting in a conical face if F is cylindrical, and a conical or cylindrical face if it is already conical. The taper-adding transformation is propagated from the face F along the series of planar, cylindrical or conical faces containing F, which are tangential to one another. Use the function AddDone to check if this taper-adding transformation is successful. Warning Nothing is done if: - the face F does not belong to the initial shape of this algorithm, or - the face F is not planar, cylindrical or conical. Exceptions - Standard_NullObject if the initial shape is not defined, i.e. if this algorithm has not been initialized with the non-empty constructor or the Init function. - Standard_ConstructionError if the previous call to Add has failed. The function AddDone ought to have been used to check for this, and the function Remove to cancel the results of the unsuccessful taper-adding transformation and to retrieve the previous shape.)#"  , py::arg("F"),  py::arg("Direction"),  py::arg("Angle"),  py::arg("NeutralPlane"),  py::arg("Flag")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddDone",
             (Standard_Boolean (BRepOffsetAPI_DraftAngle::*)() const) static_cast<Standard_Boolean (BRepOffsetAPI_DraftAngle::*)() const>(&BRepOffsetAPI_DraftAngle::AddDone),
             R"#(Returns true if the previous taper-adding transformation performed by this algorithm in the last call to Add, was successful. If AddDone returns false: - the function ProblematicShape returns the face on which the error occurred, - the function Remove has to be used to cancel the results of the unsuccessful taper-adding transformation and to retrieve the previous shape. Exceptions Standard_NullObject if the initial shape has not been defined, i.e. if this algorithm has not been initialized with the non-empty constructor or the .Init function.)#" )
        .def("Remove",
             (void (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Face &  ) ) static_cast<void (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Face &  ) >(&BRepOffsetAPI_DraftAngle::Remove),
             R"#(Cancels the taper-adding transformation previously performed by this algorithm on the face F and the series of tangential faces which contain F, and retrieves the shape before the last taper-adding transformation. Warning You will have to use this function if the previous call to Add fails. Use the function AddDone to check it. Exceptions - Standard_NullObject if the initial shape has not been defined, i.e. if this algorithm has not been initialized with the non-empty constructor or the Init function. - Standard_NoSuchObject if F has not been added or has already been removed.)#"  , py::arg("F"))
        .def("ProblematicShape",
             (const TopoDS_Shape & (BRepOffsetAPI_DraftAngle::*)() const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_DraftAngle::*)() const>(&BRepOffsetAPI_DraftAngle::ProblematicShape),
             R"#(Returns the shape on which an error occurred after an unsuccessful call to Add or when IsDone returns false. Exceptions Standard_NullObject if the initial shape has not been defined, i.e. if this algorithm has not been initialized with the non-empty constructor or the Init function.)#" )
        .def("Status",
             (Draft_ErrorStatus (BRepOffsetAPI_DraftAngle::*)() const) static_cast<Draft_ErrorStatus (BRepOffsetAPI_DraftAngle::*)() const>(&BRepOffsetAPI_DraftAngle::Status),
             R"#(Returns an error status when an error has occured (Face, Edge or Vertex recomputaion problem). Otherwise returns Draft_NoError. The method may be called if AddDone returns Standard_False, or when IsDone returns Standard_False.)#" )
        .def("ConnectedFaces",
             (const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Face &  ) const) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Face &  ) const>(&BRepOffsetAPI_DraftAngle::ConnectedFaces),
             R"#(Returns all the faces which have been added together with the face <F>.)#"  , py::arg("F"))
        .def("ModifiedFaces",
             (const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)() const) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)() const>(&BRepOffsetAPI_DraftAngle::ModifiedFaces),
             R"#(Returns all the faces on which a modification has been given.)#" )
        .def("Build",
             (void (BRepOffsetAPI_DraftAngle::*)() ) static_cast<void (BRepOffsetAPI_DraftAngle::*)() >(&BRepOffsetAPI_DraftAngle::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("CorrectWires",
             (void (BRepOffsetAPI_DraftAngle::*)() ) static_cast<void (BRepOffsetAPI_DraftAngle::*)() >(&BRepOffsetAPI_DraftAngle::CorrectWires),
             R"#(None)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_DraftAngle::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_DraftAngle::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape &  ) const>(&BRepOffsetAPI_DraftAngle::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>. S can correspond to the entire initial shape or to its subshape. Raises exceptions Standard_NoSuchObject if S is not the initial shape or a subshape of the initial shape to which the transformation has been applied.)#"  , py::arg("S"))
;


    static_cast<py::class_<BRepOffsetAPI_MakeThickSolid ,std::unique_ptr<BRepOffsetAPI_MakeThickSolid>  , BRepOffsetAPI_MakeOffsetShape >>(m.attr("BRepOffsetAPI_MakeThickSolid"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &, const NCollection_List<TopoDS_Shape> &,const Standard_Real,const Standard_Real,const BRepOffset_Mode,const Standard_Boolean,const Standard_Boolean,const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("S"),  py::arg("ClosingFaces"),  py::arg("Offset"),  py::arg("Tol"),  py::arg("Mode")=static_cast<const BRepOffset_Mode>(BRepOffset_Skin),  py::arg("Intersection")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SelfInter")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("RemoveIntEdges")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("MakeThickSolidBySimple",
             (void (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&BRepOffsetAPI_MakeThickSolid::MakeThickSolidBySimple),
             R"#(Constructs solid using simple algorithm. According to its nature it is not possible to set list of the closing faces. This algorithm does not support faces removing. It is caused by fact that intersections are not computed during offset creation. Non-closed shell or face is expected as input.)#"  , py::arg("theS"),  py::arg("theOffsetValue"))
        .def("MakeThickSolidByJoin",
             (void (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const Standard_Real ,  const Standard_Real ,  const BRepOffset_Mode ,  const Standard_Boolean ,  const Standard_Boolean ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const Standard_Real ,  const Standard_Real ,  const BRepOffset_Mode ,  const Standard_Boolean ,  const Standard_Boolean ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin),
             R"#(Constructs a hollowed solid from the solid S by removing the set of faces ClosingFaces from S, where: Offset defines the thickness of the walls. Its sign indicates which side of the surface of the solid the hollowed shape is built on; - Tol defines the tolerance criterion for coincidence in generated shapes; - Mode defines the construction type of parallels applied to free edges of shape S. Currently, only one construction type is implemented, namely the one where the free edges do not generate parallels; this corresponds to the default value BRepOffset_Skin; Intersection specifies how the algorithm must work in order to limit the parallels to two adjacent shapes: - if Intersection is false (default value), the intersection is calculated with the parallels to the two adjacent shapes, - if Intersection is true, the intersection is calculated by taking account of all parallels generated; this computation method is more general as it avoids self-intersections generated in the offset shape from features of small dimensions on shape S, however this method has not been completely implemented and therefore is not recommended for use; - SelfInter tells the algorithm whether a computation to eliminate self-intersections needs to be applied to the resulting shape. However, as this functionality is not yet implemented, you should use the default value (false); - Join defines how to fill the holes that may appear between parallels to the two adjacent faces. It may take values GeomAbs_Arc or GeomAbs_Intersection: - if Join is equal to GeomAbs_Arc, then pipes are generated between two free edges of two adjacent parallels, and spheres are generated on "images" of vertices; it is the default value, - if Join is equal to GeomAbs_Intersection, then the parallels to the two adjacent faces are enlarged and intersected, so that there are no free edges on parallels to faces. RemoveIntEdges flag defines whether to remove the INTERNAL edges from the result or not. Warnings Since the algorithm of MakeThickSolid is based on MakeOffsetShape algorithm, the warnings are the same as for MakeOffsetShape.)#"  , py::arg("S"),  py::arg("ClosingFaces"),  py::arg("Offset"),  py::arg("Tol"),  py::arg("Mode")=static_cast<const BRepOffset_Mode>(BRepOffset_Skin),  py::arg("Intersection")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SelfInter")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("RemoveIntEdges")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Build",
             (void (BRepOffsetAPI_MakeThickSolid::*)() ) static_cast<void (BRepOffsetAPI_MakeThickSolid::*)() >(&BRepOffsetAPI_MakeThickSolid::Build),
             R"#(None)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakeThickSolid::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
;


    static_cast<py::class_<BRepOffsetAPI_MiddlePath ,std::unique_ptr<BRepOffsetAPI_MiddlePath>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_MiddlePath"))
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("aShape"),  py::arg("StartShape"),  py::arg("EndShape") )
        .def("Build",
             (void (BRepOffsetAPI_MiddlePath::*)() ) static_cast<void (BRepOffsetAPI_MiddlePath::*)() >(&BRepOffsetAPI_MiddlePath::Build),
             R"#(None)#" )
;


    static_cast<py::class_<BRepOffsetAPI_MakeDraft ,std::unique_ptr<BRepOffsetAPI_MakeDraft>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_MakeDraft"))
        .def(py::init< const TopoDS_Shape &,const gp_Dir &,const Standard_Real >()  , py::arg("Shape"),  py::arg("Dir"),  py::arg("Angle") )
        .def("SetOptions",
             (void (BRepOffsetAPI_MakeDraft::*)( const BRepBuilderAPI_TransitionMode ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_MakeDraft::*)( const BRepBuilderAPI_TransitionMode ,  const Standard_Real ,  const Standard_Real  ) >(&BRepOffsetAPI_MakeDraft::SetOptions),
             R"#(Sets the options of this draft tool. If a transition has to be performed, it can be defined by the mode Style as RightCorner or RoundCorner, RightCorner being a corner defined by a sharp angle, and RoundCorner being a rounded corner. AngleMin is an angular tolerance used to detect whether a transition has to be performed or not. AngleMax sets the maximum value within which a RightCorner transition can be performed. AngleMin and AngleMax are expressed in radians.)#"  , py::arg("Style")=static_cast<const BRepBuilderAPI_TransitionMode>(BRepBuilderAPI_RightCorner),  py::arg("AngleMin")=static_cast<const Standard_Real>(0.01),  py::arg("AngleMax")=static_cast<const Standard_Real>(3.0))
        .def("SetDraft",
             (void (BRepOffsetAPI_MakeDraft::*)( const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeDraft::*)( const Standard_Boolean  ) >(&BRepOffsetAPI_MakeDraft::SetDraft),
             R"#(Sets the direction of the draft for this object. If IsInternal is true, the draft is internal to the argument Shape used in the constructor.)#"  , py::arg("IsInternal")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (BRepOffsetAPI_MakeDraft::*)( const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_MakeDraft::*)( const Standard_Real  ) >(&BRepOffsetAPI_MakeDraft::Perform),
             R"#(Performs the draft using the length LengthMax as the maximum length for the corner edge between two draft faces.)#"  , py::arg("LengthMax"))
        .def("Perform",
             (void (BRepOffsetAPI_MakeDraft::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeDraft::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeDraft::Perform),
             R"#(Performs the draft up to the surface Surface. If KeepInsideSurface is true, the part of Surface inside the draft is kept in the result.)#"  , py::arg("Surface"),  py::arg("KeepInsideSurface")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (BRepOffsetAPI_MakeDraft::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeDraft::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeDraft::Perform),
             R"#(Performs the draft up to the shape StopShape. If KeepOutSide is true, the part of StopShape which is outside the Draft is kept in the result.)#"  , py::arg("StopShape"),  py::arg("KeepOutSide")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Shell",
             (TopoDS_Shell (BRepOffsetAPI_MakeDraft::*)() const) static_cast<TopoDS_Shell (BRepOffsetAPI_MakeDraft::*)() const>(&BRepOffsetAPI_MakeDraft::Shell),
             R"#(Returns the shell resulting from performance of the draft along the wire.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeDraft::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeDraft::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakeDraft::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
;


    static_cast<py::class_<BRepOffsetAPI_MakeOffset ,std::unique_ptr<BRepOffsetAPI_MakeOffset>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_MakeOffset"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("Spine"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Wire &,const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("Spine"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("Init",
             (void (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Face & ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Face & ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeOffset::Init),
             R"#(Initializes the algorithm to construct parallels to the spine Spine. Join defines the type of parallel generated by the salient vertices of the spine. The default type is GeomAbs_Arc where the vertices generate sections of a circle. If join type is GeomAbs_Intersection, the edges that intersect in a salient vertex generate the edges prolonged until intersection.)#"  , py::arg("Spine"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Init",
             (void (BRepOffsetAPI_MakeOffset::*)( const GeomAbs_JoinType ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeOffset::*)( const GeomAbs_JoinType ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeOffset::Init),
             R"#(Initialize the evaluation of Offseting.)#"  , py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AddWire",
             (void (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Wire &  ) ) static_cast<void (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Wire &  ) >(&BRepOffsetAPI_MakeOffset::AddWire),
             R"#(Initializes the algorithm to construct parallels to the wire Spine.)#"  , py::arg("Spine"))
        .def("Perform",
             (void (BRepOffsetAPI_MakeOffset::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_MakeOffset::*)( const Standard_Real ,  const Standard_Real  ) >(&BRepOffsetAPI_MakeOffset::Perform),
             R"#(Computes a parallel to the spine at distance Offset and at an altitude Alt from the plane of the spine in relation to the normal to the spine. Exceptions: StdFail_NotDone if the offset is not built.)#"  , py::arg("Offset"),  py::arg("Alt")=static_cast<const Standard_Real>(0.0))
        .def("Build",
             (void (BRepOffsetAPI_MakeOffset::*)() ) static_cast<void (BRepOffsetAPI_MakeOffset::*)() >(&BRepOffsetAPI_MakeOffset::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakeOffset::Generated),
             R"#(returns a list of the created shapes from the shape <S>.)#"  , py::arg("S"))
;


    static_cast<py::class_<BRepOffsetAPI_MakeFilling ,std::unique_ptr<BRepOffsetAPI_MakeFilling>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepOffsetAPI_MakeFilling"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("Degree")=static_cast<const Standard_Integer>(3),  py::arg("NbPtsOnCur")=static_cast<const Standard_Integer>(15),  py::arg("NbIter")=static_cast<const Standard_Integer>(2),  py::arg("Anisotropie")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol2d")=static_cast<const Standard_Real>(0.00001),  py::arg("Tol3d")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1),  py::arg("MaxDeg")=static_cast<const Standard_Integer>(8),  py::arg("MaxSegments")=static_cast<const Standard_Integer>(9) )
        .def("SetConstrParam",
             (void (BRepOffsetAPI_MakeFilling::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepOffsetAPI_MakeFilling::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepOffsetAPI_MakeFilling::SetConstrParam),
             R"#(Sets the values of Tolerances used to control the constraint. Tol2d: Tol3d: it is the maximum distance allowed between the support surface and the constraints TolAng: it is the maximum angle allowed between the normal of the surface and the constraints TolCurv: it is the maximum difference of curvature allowed between the surface and the constraint)#"  , py::arg("Tol2d")=static_cast<const Standard_Real>(0.00001),  py::arg("Tol3d")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1))
        .def("SetResolParam",
             (void (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeFilling::SetResolParam),
             R"#(Sets the parameters used for resolution. The default values of these parameters have been chosen for a good ratio quality/performance. Degree: it is the order of energy criterion to minimize for computing the deformation of the surface. The default value is 3 The recommanded value is i+2 where i is the maximum order of the constraints. NbPtsOnCur: it is the average number of points for discretisation of the edges. NbIter: it is the maximum number of iterations of the process. For each iteration the number of discretisation points is increased. Anisotropie:)#"  , py::arg("Degree")=static_cast<const Standard_Integer>(3),  py::arg("NbPtsOnCur")=static_cast<const Standard_Integer>(15),  py::arg("NbIter")=static_cast<const Standard_Integer>(2),  py::arg("Anisotropie")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetApproxParam",
             (void (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BRepOffsetAPI_MakeFilling::SetApproxParam),
             R"#(Sets the parameters used to approximate the filling surface. These include: - MaxDeg - the highest degree which the polynomial defining the filling surface can have - MaxSegments - the greatest number of segments which the filling surface can have.)#"  , py::arg("MaxDeg")=static_cast<const Standard_Integer>(8),  py::arg("MaxSegments")=static_cast<const Standard_Integer>(9))
        .def("LoadInitSurface",
             (void (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Face &  ) ) static_cast<void (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Face &  ) >(&BRepOffsetAPI_MakeFilling::LoadInitSurface),
             R"#(Loads the initial surface Surf to begin the construction of the surface. This optional function is useful if the surface resulting from construction for the algorithm is likely to be complex. The support surface of the face under construction is computed by a deformation of Surf which satisfies the given constraints. The set of bounding edges defines the wire of the face. If no initial surface is given, the algorithm computes it automatically. If the set of edges is not connected (Free constraint), missing edges are automatically computed. Important: the initial surface must have orthogonal local coordinates, i.e. partial derivatives dS/du and dS/dv must be orthogonal at each point of surface. If this condition breaks, distortions of resulting surface are possible.)#"  , py::arg("Surf"))
        .def("Add",
             (Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Edge & ,  const GeomAbs_Shape ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Edge & ,  const GeomAbs_Shape ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeFilling::Add),
             R"#(Adds a new constraint which also defines an edge of the wire of the face Order: Order of the constraint: GeomAbs_C0 : the surface has to pass by 3D representation of the edge GeomAbs_G1 : the surface has to pass by 3D representation of the edge and to respect tangency with the first face of the edge GeomAbs_G2 : the surface has to pass by 3D representation of the edge and to respect tangency and curvature with the first face of the edge. Raises ConstructionError if the edge has no representation on a face and Order is GeomAbs_G1 or GeomAbs_G2.)#"  , py::arg("Constr"),  py::arg("Order"),  py::arg("IsBound")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Add",
             (Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const GeomAbs_Shape ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const GeomAbs_Shape ,  const Standard_Boolean  ) >(&BRepOffsetAPI_MakeFilling::Add),
             R"#(Adds a new constraint which also defines an edge of the wire of the face Order: Order of the constraint: GeomAbs_C0 : the surface has to pass by 3D representation of the edge GeomAbs_G1 : the surface has to pass by 3D representation of the edge and to respect tangency with the given face GeomAbs_G2 : the surface has to pass by 3D representation of the edge and to respect tangency and curvature with the given face. Raises ConstructionError if the edge has no 2d representation on the given face)#"  , py::arg("Constr"),  py::arg("Support"),  py::arg("Order"),  py::arg("IsBound")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Add",
             (Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Face & ,  const GeomAbs_Shape  ) ) static_cast<Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Face & ,  const GeomAbs_Shape  ) >(&BRepOffsetAPI_MakeFilling::Add),
             R"#(Adds a free constraint on a face. The corresponding edge has to be automatically recomputed. It is always a bound.)#"  , py::arg("Support"),  py::arg("Order"))
        .def("Add",
             (Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const gp_Pnt &  ) ) static_cast<Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const gp_Pnt &  ) >(&BRepOffsetAPI_MakeFilling::Add),
             R"#(Adds a punctual constraint.)#"  , py::arg("Point"))
        .def("Add",
             (Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Face & ,  const GeomAbs_Shape  ) ) static_cast<Standard_Integer (BRepOffsetAPI_MakeFilling::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Face & ,  const GeomAbs_Shape  ) >(&BRepOffsetAPI_MakeFilling::Add),
             R"#(Adds a punctual constraint.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Support"),  py::arg("Order"))
        .def("Build",
             (void (BRepOffsetAPI_MakeFilling::*)() ) static_cast<void (BRepOffsetAPI_MakeFilling::*)() >(&BRepOffsetAPI_MakeFilling::Build),
             R"#(Builds the resulting faces)#" )
        .def("IsDone",
             (Standard_Boolean (BRepOffsetAPI_MakeFilling::*)() const) static_cast<Standard_Boolean (BRepOffsetAPI_MakeFilling::*)() const>(&BRepOffsetAPI_MakeFilling::IsDone),
             R"#(Tests whether computation of the filling plate has been completed.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_MakeFilling::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("G0Error",
             (Standard_Real (BRepOffsetAPI_MakeFilling::*)() const) static_cast<Standard_Real (BRepOffsetAPI_MakeFilling::*)() const>(&BRepOffsetAPI_MakeFilling::G0Error),
             R"#(Returns the maximum distance between the result and the constraints. This is set at construction time.)#" )
        .def("G1Error",
             (Standard_Real (BRepOffsetAPI_MakeFilling::*)() const) static_cast<Standard_Real (BRepOffsetAPI_MakeFilling::*)() const>(&BRepOffsetAPI_MakeFilling::G1Error),
             R"#(Returns the maximum angle between the result and the constraints. This is set at construction time.)#" )
        .def("G2Error",
             (Standard_Real (BRepOffsetAPI_MakeFilling::*)() const) static_cast<Standard_Real (BRepOffsetAPI_MakeFilling::*)() const>(&BRepOffsetAPI_MakeFilling::G2Error),
             R"#(Returns the maximum angle between the result and the constraints. This is set at construction time.)#" )
        .def("G0Error",
             (Standard_Real (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer  ) ) static_cast<Standard_Real (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer  ) >(&BRepOffsetAPI_MakeFilling::G0Error),
             R"#(Returns the maximum distance attained between the result and the constraint Index. This is set at construction time.)#"  , py::arg("Index"))
        .def("G1Error",
             (Standard_Real (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer  ) ) static_cast<Standard_Real (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer  ) >(&BRepOffsetAPI_MakeFilling::G1Error),
             R"#(Returns the maximum angle between the result and the constraints. This is set at construction time.)#"  , py::arg("Index"))
        .def("G2Error",
             (Standard_Real (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer  ) ) static_cast<Standard_Real (BRepOffsetAPI_MakeFilling::*)( const Standard_Integer  ) >(&BRepOffsetAPI_MakeFilling::G2Error),
             R"#(Returns the greatest difference in curvature found between the result and the constraint Index.)#"  , py::arg("Index"))
;


    static_cast<py::class_<BRepOffsetAPI_FindContigousEdges ,std::unique_ptr<BRepOffsetAPI_FindContigousEdges>  >>(m.attr("BRepOffsetAPI_FindContigousEdges"))
        .def(py::init< const Standard_Real,const Standard_Boolean >()  , py::arg("tolerance")=static_cast<const Standard_Real>(1.0e-06),  py::arg("option")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Init",
             (void (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Real ,  const Standard_Boolean  ) >(&BRepOffsetAPI_FindContigousEdges::Init),
             R"#(Initializes this algorithm for identifying contiguous edges on shapes using the tolerance of contiguity tolerance. This tolerance value is used to determine whether two edges or sections of edges are coincident. Use the function Add to define the shapes to be checked. Sets <option> to false.)#"  , py::arg("tolerance"),  py::arg("option"))
        .def("Add",
             (void (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) >(&BRepOffsetAPI_FindContigousEdges::Add),
             R"#(Adds the shape shape to the list of shapes to be checked by this algorithm. Once all the shapes to be checked have been added, use the function Perform to find the contiguous edges and the function ContigousEdge to return these edges.)#"  , py::arg("shape"))
        .def("Perform",
             (void (BRepOffsetAPI_FindContigousEdges::*)() ) static_cast<void (BRepOffsetAPI_FindContigousEdges::*)() >(&BRepOffsetAPI_FindContigousEdges::Perform),
             R"#(Finds coincident parts of edges of two or more shapes added to this algorithm and breaks down these edges into contiguous and non-contiguous sections on copies of the initial shapes. The function ContigousEdge returns contiguous edges. The function Modified can be used to return modified copies of the initial shapes where one or more edges were broken down into contiguous and non-contiguous sections. Warning This function must be used once all the shapes to be checked have been added. It is not possible to add further shapes subsequently and then to repeat the call to Perform.)#" )
        .def("NbContigousEdges",
             (Standard_Integer (BRepOffsetAPI_FindContigousEdges::*)() const) static_cast<Standard_Integer (BRepOffsetAPI_FindContigousEdges::*)() const>(&BRepOffsetAPI_FindContigousEdges::NbContigousEdges),
             R"#(Returns the number of contiguous edges found by the function Perform on the shapes added to this algorithm.)#" )
        .def("ContigousEdge",
             (const TopoDS_Edge & (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Integer  ) const>(&BRepOffsetAPI_FindContigousEdges::ContigousEdge),
             R"#(Returns the contiguous edge of index index found by the function Perform on the shapes added to this algorithm. Exceptions Standard_OutOfRange if: - index is less than 1, or - index is greater than the number of contiguous edges found by the function Perform on the shapes added to this algorithm.)#"  , py::arg("index"))
        .def("ContigousEdgeCouple",
             (const TopTools_ListOfShape & (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Integer  ) const) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Integer  ) const>(&BRepOffsetAPI_FindContigousEdges::ContigousEdgeCouple),
             R"#(Returns a list of edges coincident with the contiguous edge of index index found by the function Perform. There are as many edges in the list as there are faces adjacent to this contiguous edge. Exceptions Standard_OutOfRange if: - index is less than 1, or - index is greater than the number of contiguous edges found by the function Perform on the shapes added to this algorithm.)#"  , py::arg("index"))
        .def("SectionToBoundary",
             (const TopoDS_Edge & (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Edge &  ) const>(&BRepOffsetAPI_FindContigousEdges::SectionToBoundary),
             R"#(Returns the edge on the initial shape, of which the modified copy contains the edge section. section is coincident with a contiguous edge found by the function Perform. Use the function ContigousEdgeCouple to obtain a valid section. This information is useful for verification purposes, since it provides a means of determining the surface to which the contiguous edge belongs. Exceptions Standard_NoSuchObject if section is not coincident with a contiguous edge. Use the function ContigousEdgeCouple to obtain a valid section.)#"  , py::arg("section"))
        .def("NbDegeneratedShapes",
             (Standard_Integer (BRepOffsetAPI_FindContigousEdges::*)() const) static_cast<Standard_Integer (BRepOffsetAPI_FindContigousEdges::*)() const>(&BRepOffsetAPI_FindContigousEdges::NbDegeneratedShapes),
             R"#(Gives the number of degenerated shapes)#" )
        .def("DegeneratedShape",
             (const TopoDS_Shape & (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_FindContigousEdges::*)( const Standard_Integer  ) const>(&BRepOffsetAPI_FindContigousEdges::DegeneratedShape),
             R"#(Gives a degenerated shape)#"  , py::arg("index"))
        .def("IsDegenerated",
             (Standard_Boolean (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) const>(&BRepOffsetAPI_FindContigousEdges::IsDegenerated),
             R"#(Indicates if a input shape is degenerated)#"  , py::arg("shape"))
        .def("IsModified",
             (Standard_Boolean (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) const>(&BRepOffsetAPI_FindContigousEdges::IsModified),
             R"#(Returns true if the copy of the initial shape shape was modified by the function Perform (i.e. if one or more of its edges was broken down into contiguous and non-contiguous sections). Warning Returns false if shape is not one of the initial shapes added to this algorithm.)#"  , py::arg("shape"))
        .def("Modified",
             (const TopoDS_Shape & (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) const) static_cast<const TopoDS_Shape & (BRepOffsetAPI_FindContigousEdges::*)( const TopoDS_Shape &  ) const>(&BRepOffsetAPI_FindContigousEdges::Modified),
             R"#(Gives a modifieded shape Raises NoSuchObject if shape has not been modified)#"  , py::arg("shape"))
        .def("Dump",
             (void (BRepOffsetAPI_FindContigousEdges::*)() const) static_cast<void (BRepOffsetAPI_FindContigousEdges::*)() const>(&BRepOffsetAPI_FindContigousEdges::Dump),
             R"#(Dump properties of resulting shape.)#" )
;

// functions
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx
// ./opencascade/BRepOffsetAPI_NormalProjection.hxx
// ./opencascade/BRepOffsetAPI_MakeThickSolid.hxx
// ./opencascade/BRepOffsetAPI_MakeEvolved.hxx
// ./opencascade/BRepOffsetAPI_MakeOffset.hxx
// ./opencascade/BRepOffsetAPI_MakePipe.hxx
// ./opencascade/BRepOffsetAPI_MiddlePath.hxx
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfShape.hxx
// ./opencascade/BRepOffsetAPI_MakeOffsetShape.hxx
// ./opencascade/BRepOffsetAPI_FindContigousEdges.hxx
// ./opencascade/BRepOffsetAPI_MakePipeShell.hxx
// ./opencascade/BRepOffsetAPI_Sewing.hxx
// ./opencascade/BRepOffsetAPI_MakeDraft.hxx
// ./opencascade/BRepOffsetAPI_ThruSections.hxx
// ./opencascade/BRepOffsetAPI_MakeFilling.hxx
// ./opencascade/BRepOffsetAPI_DraftAngle.hxx

// operators

// register typdefs
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx
    register_template_NCollection_Sequence<TColStd_SequenceOfReal>(m,"BRepOffsetAPI_SequenceOfSequenceOfReal");  
// ./opencascade/BRepOffsetAPI_NormalProjection.hxx
// ./opencascade/BRepOffsetAPI_MakeThickSolid.hxx
// ./opencascade/BRepOffsetAPI_MakeEvolved.hxx
// ./opencascade/BRepOffsetAPI_MakeOffset.hxx
// ./opencascade/BRepOffsetAPI_MakePipe.hxx
// ./opencascade/BRepOffsetAPI_MiddlePath.hxx
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfShape.hxx
    register_template_NCollection_Sequence<TopTools_SequenceOfShape>(m,"BRepOffsetAPI_SequenceOfSequenceOfShape");  
// ./opencascade/BRepOffsetAPI_MakeOffsetShape.hxx
// ./opencascade/BRepOffsetAPI_FindContigousEdges.hxx
// ./opencascade/BRepOffsetAPI_MakePipeShell.hxx
// ./opencascade/BRepOffsetAPI_Sewing.hxx
// ./opencascade/BRepOffsetAPI_MakeDraft.hxx
// ./opencascade/BRepOffsetAPI_ThruSections.hxx
// ./opencascade/BRepOffsetAPI_MakeFilling.hxx
// ./opencascade/BRepOffsetAPI_DraftAngle.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
