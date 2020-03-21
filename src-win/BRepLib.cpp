
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepTools_ReShape.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <BRepLib.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_EdgeError.hxx>
#include <BRepLib_FaceError.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_ShapeModification.hxx>
#include <BRepLib_ShellError.hxx>
#include <BRepLib_WireError.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepLib , shared_ptr<BRepLib>>(m,"BRepLib");

    static_cast<py::class_<BRepLib , shared_ptr<BRepLib> >>(m.attr("BRepLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Precision_s",
                    (void (*)( const Standard_Real ) ) static_cast<void (*)( const Standard_Real ) >(&BRepLib::Precision),
                    R"#(Computes the max distance between edge and its 2d representation on the face. Sets the default precision. The current Precision is returned.)#"  , py::arg("P"))
        .def_static("Precision_s",
                    (Standard_Real (*)() ) static_cast<Standard_Real (*)() >(&BRepLib::Precision),
                    R"#(Returns the default precision.)#" )
        .def_static("Plane_s",
                    (void (*)( const opencascade::handle<Geom_Plane> & ) ) static_cast<void (*)( const opencascade::handle<Geom_Plane> & ) >(&BRepLib::Plane),
                    R"#(Sets the current plane to P.)#"  , py::arg("P"))
        .def_static("Plane_s",
                    (const opencascade::handle<Geom_Plane> & (*)() ) static_cast<const opencascade::handle<Geom_Plane> & (*)() >(&BRepLib::Plane),
                    R"#(Returns the current plane.)#" )
        .def_static("CheckSameRange_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real ) >(&BRepLib::CheckSameRange),
                    R"#(checks if the Edge is same range IGNORING the same range flag of the edge Confusion argument is to compare real numbers idenpendently of any model space tolerance)#"  , py::arg("E"),  py::arg("Confusion")=static_cast<const Standard_Real>(1.0e-12))
        .def_static("SameRange_s",
                    (void (*)( const TopoDS_Edge & , const Standard_Real ) ) static_cast<void (*)( const TopoDS_Edge & , const Standard_Real ) >(&BRepLib::SameRange),
                    R"#(will make all the curve representation have the same range domain for the parameters. This will IGNORE the same range flag value to proceed. If there is a 3D curve there it will the range of that curve. If not the first curve representation encountered in the list will give its range to the all the other curves.)#"  , py::arg("E"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-5))
        .def_static("BuildCurve3d_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const GeomAbs_Shape , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const GeomAbs_Shape , const Standard_Integer , const Standard_Integer ) >(&BRepLib::BuildCurve3d),
                    R"#(Computes the 3d curve for the edge <E> if it does not exist. Returns True if the curve was computed or existed. Returns False if there is no planar pcurve or the computation failed. <MaxSegment> >= 30 in approximation)#"  , py::arg("E"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-5),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1),  py::arg("MaxDegree")=static_cast<const Standard_Integer>(14),  py::arg("MaxSegment")=static_cast<const Standard_Integer>(0))
        .def_static("BuildCurves3d_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Real , const GeomAbs_Shape , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Real , const GeomAbs_Shape , const Standard_Integer , const Standard_Integer ) >(&BRepLib::BuildCurves3d),
                    R"#(Computes the 3d curves for all the edges of <S> return False if one of the computation failed. <MaxSegment> >= 30 in approximation)#"  , py::arg("S"),  py::arg("Tolerance"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1),  py::arg("MaxDegree")=static_cast<const Standard_Integer>(14),  py::arg("MaxSegment")=static_cast<const Standard_Integer>(0))
        .def_static("BuildCurves3d_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ) >(&BRepLib::BuildCurves3d),
                    R"#(Computes the 3d curves for all the edges of <S> return False if one of the computation failed.)#"  , py::arg("S"))
        .def_static("BuildPCurveForEdgeOnPlane_s",
                    (void (*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&BRepLib::BuildPCurveForEdgeOnPlane),
                    R"#(Builds pcurve of edge on face if the surface is plane, and updates the edge.)#"  , py::arg("theE"),  py::arg("theF"))
        .def_static("UpdateEdgeTol_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) >(&BRepLib::UpdateEdgeTol),
                    R"#(Checks if the edge has a Tolerance smaller than -- -- -- -- MaxToleranceToCheck if so it will compute the radius of -- the cylindrical pipe surface that MinToleranceRequest is the minimum tolerance before it is usefull to start testing. Usually it should be arround 10e-5 contains all -- the curve represenation of the edge returns True if the Edge tolerance had to be updated)#"  , py::arg("E"),  py::arg("MinToleranceRequest"),  py::arg("MaxToleranceToCheck"))
        .def_static("UpdateEdgeTolerance_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) >(&BRepLib::UpdateEdgeTolerance),
                    R"#(-- Checks all the edges of the shape whose -- -- -- Tolerance is smaller than MaxToleranceToCheck -- Returns True if at least one edge was updated -- MinToleranceRequest is the minimum tolerance before -- it -- is usefull to start testing. Usually it should be arround -- 10e-5--)#"  , py::arg("S"),  py::arg("MinToleranceRequest"),  py::arg("MaxToleranceToCheck"))
        .def_static("SameParameter_s",
                    (void (*)( const TopoDS_Edge & , const Standard_Real ) ) static_cast<void (*)( const TopoDS_Edge & , const Standard_Real ) >(&BRepLib::SameParameter),
                    R"#(Computes new 2d curve(s) for the edge <theEdge> to have the same parameter as the 3d curve. The algorithm is not done if the flag SameParameter was True on the Edge.)#"  , py::arg("theEdge"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-5))
        .def_static("SameParameter_s",
                    (TopoDS_Edge (*)( const TopoDS_Edge & , const Standard_Real , Standard_Real & , const Standard_Boolean ) ) static_cast<TopoDS_Edge (*)( const TopoDS_Edge & , const Standard_Real , Standard_Real & , const Standard_Boolean ) >(&BRepLib::SameParameter),
                    R"#(Computes new 2d curve(s) for the edge <theEdge> to have the same parameter as the 3d curve. The algorithm is not done if the flag SameParameter was True on the Edge. theNewTol is a new tolerance of vertices of the input edge (not applied inside the algorithm, but pre-computed). If IsUseOldEdge is true then the input edge will be modified, otherwise the new copy of input edge will be created. Returns the new edge as a result, can be ignored if IsUseOldEdge is true.)#"  , py::arg("theEdge"),  py::arg("theTolerance"),  py::arg("theNewTol"),  py::arg("IsUseOldEdge"))
        .def_static("SameParameter_s",
                    (void (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Boolean ) >(&BRepLib::SameParameter),
                    R"#(Computes new 2d curve(s) for all the edges of <S> to have the same parameter as the 3d curve. The algorithm is not done if the flag SameParameter was True on an Edge.)#"  , py::arg("S"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-5),  py::arg("forced")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("SameParameter_s",
                    (void (*)( const TopoDS_Shape & , BRepTools_ReShape & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , BRepTools_ReShape & , const Standard_Real , const Standard_Boolean ) >(&BRepLib::SameParameter),
                    R"#(Computes new 2d curve(s) for all the edges of <S> to have the same parameter as the 3d curve. The algorithm is not done if the flag SameParameter was True on an Edge. theReshaper is used to record the modifications of input shape <S> to prevent any modifications on the shape itself. Thus the input shape (and its subshapes) will not be modified, instead the reshaper will contain a modified empty-copies of original subshapes as substitutions.)#"  , py::arg("S"),  py::arg("theReshaper"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-5),  py::arg("forced")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("UpdateTolerances_s",
                    (void (*)( const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , const Standard_Boolean ) >(&BRepLib::UpdateTolerances),
                    R"#(Replaces tolerance of FACE EDGE VERTEX by the tolerance Max of their connected handling shapes. It is not necessary to use this call after SameParameter. (called in))#"  , py::arg("S"),  py::arg("verifyFaceTolerance")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("UpdateTolerances_s",
                    (void (*)( const TopoDS_Shape & , BRepTools_ReShape & , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , BRepTools_ReShape & , const Standard_Boolean ) >(&BRepLib::UpdateTolerances),
                    R"#(Replaces tolerance of FACE EDGE VERTEX by the tolerance Max of their connected handling shapes. It is not necessary to use this call after SameParameter. (called in) theReshaper is used to record the modifications of input shape <S> to prevent any modifications on the shape itself. Thus the input shape (and its subshapes) will not be modified, instead the reshaper will contain a modified empty-copies of original subshapes as substitutions.)#"  , py::arg("S"),  py::arg("theReshaper"),  py::arg("verifyFaceTolerance")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("UpdateInnerTolerances_s",
                    (void (*)( const TopoDS_Shape & ) ) static_cast<void (*)( const TopoDS_Shape & ) >(&BRepLib::UpdateInnerTolerances),
                    R"#(Checks tolerances of edges (including inner points) and vertices of a shape and updates them to satisfy "SameParameter" condition)#"  , py::arg("S"))
        .def_static("OrientClosedSolid_s",
                    (Standard_Boolean (*)( TopoDS_Solid & ) ) static_cast<Standard_Boolean (*)( TopoDS_Solid & ) >(&BRepLib::OrientClosedSolid),
                    R"#(Orients the solid forward and the shell with the orientation to have matter in the solid. Returns False if the solid is unOrientable (open or incoherent))#"  , py::arg("solid"))
        .def_static("EncodeRegularity_s",
                    (void (*)( const TopoDS_Shape & , const Standard_Real ) ) static_cast<void (*)( const TopoDS_Shape & , const Standard_Real ) >(&BRepLib::EncodeRegularity),
                    R"#(Encodes the Regularity of edges on a Shape. Warning: <TolAng> is an angular tolerance, expressed in Rad. Warning: If the edges's regularity are coded before, nothing is done.)#"  , py::arg("S"),  py::arg("TolAng")=static_cast<const Standard_Real>(1.0e-10))
        .def_static("EncodeRegularity_s",
                    (void (*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const Standard_Real ) ) static_cast<void (*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const Standard_Real ) >(&BRepLib::EncodeRegularity),
                    R"#(Encodes the Regularity of edges in list <LE> on the shape <S> Warning: <TolAng> is an angular tolerance, expressed in Rad. Warning: If the edges's regularity are coded before, nothing is done.)#"  , py::arg("S"),  py::arg("LE"),  py::arg("TolAng")=static_cast<const Standard_Real>(1.0e-10))
        .def_static("EncodeRegularity_s",
                    (void (*)( TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const Standard_Real ) ) static_cast<void (*)( TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const Standard_Real ) >(&BRepLib::EncodeRegularity),
                    R"#(Encodes the Regularity beetween <F1> and <F2> by <E> Warning: <TolAng> is an angular tolerance, expressed in Rad. Warning: If the edge's regularity is coded before, nothing is done.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("TolAng")=static_cast<const Standard_Real>(1.0e-10))
        .def_static("SortFaces_s",
                    (void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&BRepLib::SortFaces),
                    R"#(Sorts in LF the Faces of S on the complexity of their surfaces (Plane,Cylinder,Cone,Sphere,Torus,other))#"  , py::arg("S"),  py::arg("LF"))
        .def_static("ReverseSortFaces_s",
                    (void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&BRepLib::ReverseSortFaces),
                    R"#(Sorts in LF the Faces of S on the reverse complexity of their surfaces (other,Torus,Sphere,Cone,Cylinder,Plane))#"  , py::arg("S"),  py::arg("LF"))
        .def_static("EnsureNormalConsistency_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Boolean ) >(&BRepLib::EnsureNormalConsistency),
                    R"#(Corrects the normals in Poly_Triangulation of faces, in such way that normals at nodes lying along smooth edges have the same value on both adjacent triangulations. Returns TRUE if any correction is done.)#"  , py::arg("S"),  py::arg("theAngTol")=static_cast<const Standard_Real>(0.001),  py::arg("ForceComputeNormals")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("FindValidRange_s",
                    (Standard_Boolean (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const gp_Pnt & , const Standard_Real , const Standard_Real , const gp_Pnt & , const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const gp_Pnt & , const Standard_Real , const Standard_Real , const gp_Pnt & , const Standard_Real , Standard_Real & , Standard_Real & ) >(&BRepLib::FindValidRange),
                    R"#(For an edge defined by 3d curve and tolerance and vertices defined by points, parameters on curve and tolerances, finds a range of curve between vertices not covered by vertices tolerances. Returns false if there is no such range. Otherwise, sets theFirst and theLast as its bounds.)#"  , py::arg("theCurve"),  py::arg("theTolE"),  py::arg("theParV1"),  py::arg("thePntV1"),  py::arg("theTolV1"),  py::arg("theParV2"),  py::arg("thePntV2"),  py::arg("theTolV2"),  py::arg("theFirst"),  py::arg("theLast"))
        .def_static("FindValidRange_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRepLib::FindValidRange),
                    R"#(Finds a range of 3d curve of the edge not covered by vertices tolerances. Returns false if there is no such range. Otherwise, sets theFirst and theLast as its bounds.)#"  , py::arg("theEdge"),  py::arg("theFirst"),  py::arg("theLast"))
        .def_static("ExtendFace_s",
                    (void (*)( const TopoDS_Face & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , TopoDS_Face & ) ) static_cast<void (*)( const TopoDS_Face & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , TopoDS_Face & ) >(&BRepLib::ExtendFace),
                    R"#(Enlarges the face on the given value.)#"  , py::arg("theF"),  py::arg("theExtVal"),  py::arg("theExtUMin"),  py::arg("theExtUMax"),  py::arg("theExtVMin"),  py::arg("theExtVMax"),  py::arg("theFExtended"))
    // static methods using call by reference i.s.o. return
        .def_static("BuildPCurveForEdgeOnPlane_s",
                    []( const TopoDS_Edge & theE,const TopoDS_Face & theF,opencascade::handle<Geom2d_Curve> & aC2D ){ Standard_Boolean  bToUpdate; BRepLib::BuildPCurveForEdgeOnPlane(theE,theF,aC2D,bToUpdate); return std::make_tuple(bToUpdate); },
                    R"#(Builds pcurve of edge on face if the surface is plane, but does not update the edge. The output are the pcurve and the flag telling that pcurve was built.)#"  , py::arg("theE"),  py::arg("theF"),  py::arg("aC2D"))
        .def_static("BoundingVertex_s",
                    []( const NCollection_List<TopoDS_Shape> & theLV,gp_Pnt & theNewCenter ){ Standard_Real  theNewTol; BRepLib::BoundingVertex(theLV,theNewCenter,theNewTol); return std::make_tuple(theNewTol); },
                    R"#(Calculates the bounding sphere around the set of vertexes from the theLV list. Returns the center (theNewCenter) and the radius (theNewTol) of this sphere. This can be used to construct the new vertex which covers the given set of other vertices.)#"  , py::arg("theLV"),  py::arg("theNewCenter"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_Command , shared_ptr<BRepLib_Command> >>(m.attr("BRepLib_Command"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepLib_Command::*)() const) static_cast<Standard_Boolean (BRepLib_Command::*)() const>(&BRepLib_Command::IsDone),
             R"#(None)#" )
        .def("Check",
             (void (BRepLib_Command::*)() const) static_cast<void (BRepLib_Command::*)() const>(&BRepLib_Command::Check),
             R"#(Raises NotDone if done is false.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_FindSurface , shared_ptr<BRepLib_FindSurface> >>(m.attr("BRepLib_FindSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("Tol")=static_cast<const Standard_Real>(- 1),  py::arg("OnlyPlane")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("OnlyClosed")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepLib_FindSurface::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepLib_FindSurface::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepLib_FindSurface::Init),
             R"#(Computes the Surface from the edges of <S> with the given tolerance. if <OnlyPlane> is true, the computed surface will be a plane. If it is not possible to find a plane, the flag NotDone will be set. If <OnlyClosed> is true, then S sould be a wire and the existing surface, on which wire S is not closed in 2D, will be ignored.)#"  , py::arg("S"),  py::arg("Tol")=static_cast<const Standard_Real>(- 1),  py::arg("OnlyPlane")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("OnlyClosed")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Found",
             (Standard_Boolean (BRepLib_FindSurface::*)() const) static_cast<Standard_Boolean (BRepLib_FindSurface::*)() const>(&BRepLib_FindSurface::Found),
             R"#(None)#" )
        .def("Surface",
             (opencascade::handle<Geom_Surface> (BRepLib_FindSurface::*)() const) static_cast<opencascade::handle<Geom_Surface> (BRepLib_FindSurface::*)() const>(&BRepLib_FindSurface::Surface),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (BRepLib_FindSurface::*)() const) static_cast<Standard_Real (BRepLib_FindSurface::*)() const>(&BRepLib_FindSurface::Tolerance),
             R"#(None)#" )
        .def("ToleranceReached",
             (Standard_Real (BRepLib_FindSurface::*)() const) static_cast<Standard_Real (BRepLib_FindSurface::*)() const>(&BRepLib_FindSurface::ToleranceReached),
             R"#(None)#" )
        .def("Existed",
             (Standard_Boolean (BRepLib_FindSurface::*)() const) static_cast<Standard_Boolean (BRepLib_FindSurface::*)() const>(&BRepLib_FindSurface::Existed),
             R"#(None)#" )
        .def("Location",
             (TopLoc_Location (BRepLib_FindSurface::*)() const) static_cast<TopLoc_Location (BRepLib_FindSurface::*)() const>(&BRepLib_FindSurface::Location),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_FuseEdges , shared_ptr<BRepLib_FuseEdges> >>(m.attr("BRepLib_FuseEdges"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("theShape"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("AvoidEdges",
             (void (BRepLib_FuseEdges::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (BRepLib_FuseEdges::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&BRepLib_FuseEdges::AvoidEdges),
             R"#(set edges to avoid being fused)#"  , py::arg("theMapEdg"))
        .def("SetConcatBSpl",
             (void (BRepLib_FuseEdges::*)( const Standard_Boolean ) ) static_cast<void (BRepLib_FuseEdges::*)( const Standard_Boolean ) >(&BRepLib_FuseEdges::SetConcatBSpl),
             R"#(set mode to enable concatenation G1 BSpline edges in one End Modified by IFV 19.04.07)#"  , py::arg("theConcatBSpl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Edges",
             (void (BRepLib_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopTools_ListOfShape, TColStd_MapIntegerHasher> & ) ) static_cast<void (BRepLib_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopTools_ListOfShape, TColStd_MapIntegerHasher> & ) >(&BRepLib_FuseEdges::Edges),
             R"#(returns all the list of edges to be fused each list of the map represent a set of connex edges that can be fused.)#"  , py::arg("theMapLstEdg"))
        .def("ResultEdges",
             (void (BRepLib_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher> & ) ) static_cast<void (BRepLib_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher> & ) >(&BRepLib_FuseEdges::ResultEdges),
             R"#(returns all the fused edges. each integer entry in the map corresponds to the integer in the DataMapOfIntegerListOfShape we get in method Edges. That is to say, to the list of edges in theMapLstEdg(i) corresponds the resulting edge theMapEdge(i))#"  , py::arg("theMapEdg"))
        .def("Faces",
             (void (BRepLib_FuseEdges::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (BRepLib_FuseEdges::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&BRepLib_FuseEdges::Faces),
             R"#(returns the map of modified faces.)#"  , py::arg("theMapFac"))
        .def("Shape",
             (TopoDS_Shape & (BRepLib_FuseEdges::*)() ) static_cast<TopoDS_Shape & (BRepLib_FuseEdges::*)() >(&BRepLib_FuseEdges::Shape),
             R"#(returns myShape modified with the list of internal edges removed from it.)#" )
        .def("NbVertices",
             (Standard_Integer (BRepLib_FuseEdges::*)() ) static_cast<Standard_Integer (BRepLib_FuseEdges::*)() >(&BRepLib_FuseEdges::NbVertices),
             R"#(returns the number of vertices candidate to be removed)#" )
        .def("Perform",
             (void (BRepLib_FuseEdges::*)() ) static_cast<void (BRepLib_FuseEdges::*)() >(&BRepLib_FuseEdges::Perform),
             R"#(Using map of list of connex edges, fuse each list to one edge and then update myShape)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeShape , shared_ptr<BRepLib_MakeShape> , BRepLib_Command>>(m.attr("BRepLib_MakeShape"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepLib_MakeShape::*)() ) static_cast<void (BRepLib_MakeShape::*)() >(&BRepLib_MakeShape::Build),
             R"#(This is called by Shape(). It does nothing but may be redefined.)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepLib_MakeShape::*)() ) static_cast<const TopoDS_Shape & (BRepLib_MakeShape::*)() >(&BRepLib_MakeShape::Shape),
             R"#(None)#" )
        .def("FaceStatus",
             (BRepLib_ShapeModification (BRepLib_MakeShape::*)( const TopoDS_Face & ) const) static_cast<BRepLib_ShapeModification (BRepLib_MakeShape::*)( const TopoDS_Face & ) const>(&BRepLib_MakeShape::FaceStatus),
             R"#(returns the status of the Face after the shape creation.)#"  , py::arg("F"))
        .def("HasDescendants",
             (Standard_Boolean (BRepLib_MakeShape::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (BRepLib_MakeShape::*)( const TopoDS_Face & ) const>(&BRepLib_MakeShape::HasDescendants),
             R"#(Returns True if the Face generates new topology.)#"  , py::arg("F"))
        .def("DescendantFaces",
             (const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Face & ) ) static_cast<const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Face & ) >(&BRepLib_MakeShape::DescendantFaces),
             R"#(returns the list of generated Faces.)#"  , py::arg("F"))
        .def("NbSurfaces",
             (Standard_Integer (BRepLib_MakeShape::*)() const) static_cast<Standard_Integer (BRepLib_MakeShape::*)() const>(&BRepLib_MakeShape::NbSurfaces),
             R"#(returns the number of surfaces after the shape creation.)#" )
        .def("NewFaces",
             (const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const Standard_Integer ) ) static_cast<const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const Standard_Integer ) >(&BRepLib_MakeShape::NewFaces),
             R"#(Return the faces created for surface I.)#"  , py::arg("I"))
        .def("FacesFromEdges",
             (const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Edge & ) ) static_cast<const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Edge & ) >(&BRepLib_MakeShape::FacesFromEdges),
             R"#(returns a list of the created faces from the edge <E>.)#"  , py::arg("E"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeEdge , shared_ptr<BRepLib_MakeEdge> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin & >()  , py::arg("L") )
        .def(py::init< const gp_Lin &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Lin &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Circ & >()  , py::arg("L") )
        .def(py::init< const gp_Circ &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Circ &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Circ &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Elips & >()  , py::arg("L") )
        .def(py::init< const gp_Elips &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Elips &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Elips &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Hypr & >()  , py::arg("L") )
        .def(py::init< const gp_Hypr &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Hypr &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Hypr &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Parab & >()  , py::arg("L") )
        .def(py::init< const gp_Parab &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Parab &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Parab &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom_Curve> & >()  , py::arg("L") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> & >()  , py::arg("L"),  py::arg("S") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("S"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("S"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("S"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("S"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("S"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt & , const gp_Pnt & ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt & , const gp_Pnt & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt & , const gp_Pnt & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const gp_Pnt & , const gp_Pnt & ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("P1"),  py::arg("P2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopoDS_Vertex & , const TopoDS_Vertex & ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopoDS_Vertex & , const TopoDS_Vertex & ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("V1"),  py::arg("V2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const gp_Pnt & , const gp_Pnt & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const gp_Pnt & , const gp_Pnt & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2"))
        .def("Error",
             (BRepLib_EdgeError (BRepLib_MakeEdge::*)() const) static_cast<BRepLib_EdgeError (BRepLib_MakeEdge::*)() const>(&BRepLib_MakeEdge::Error),
             R"#(Returns the error description when NotDone.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepLib_MakeEdge::*)() ) static_cast<const TopoDS_Edge & (BRepLib_MakeEdge::*)() >(&BRepLib_MakeEdge::Edge),
             R"#(None)#" )
        .def("Vertex1",
             (const TopoDS_Vertex & (BRepLib_MakeEdge::*)() const) static_cast<const TopoDS_Vertex & (BRepLib_MakeEdge::*)() const>(&BRepLib_MakeEdge::Vertex1),
             R"#(Returns the first vertex of the edge. May be Null.)#" )
        .def("Vertex2",
             (const TopoDS_Vertex & (BRepLib_MakeEdge::*)() const) static_cast<const TopoDS_Vertex & (BRepLib_MakeEdge::*)() const>(&BRepLib_MakeEdge::Vertex2),
             R"#(Returns the second vertex of the edge. May be Null.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeEdge2d , shared_ptr<BRepLib_MakeEdge2d> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeEdge2d"))
    // constructors
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("L") )
        .def(py::init< const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Circ2d & >()  , py::arg("L") )
        .def(py::init< const gp_Circ2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Circ2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Elips2d & >()  , py::arg("L") )
        .def(py::init< const gp_Elips2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Elips2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Elips2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Hypr2d & >()  , py::arg("L") )
        .def(py::init< const gp_Hypr2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Hypr2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Hypr2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Parab2d & >()  , py::arg("L") )
        .def(py::init< const gp_Parab2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Parab2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Parab2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> & >()  , py::arg("L") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ) >(&BRepLib_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"))
        .def("Init",
             (void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & ) >(&BRepLib_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"))
        .def("Init",
             (void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & ) ) static_cast<void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & ) >(&BRepLib_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"))
        .def("Init",
             (void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & , const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2"))
        .def("Error",
             (BRepLib_EdgeError (BRepLib_MakeEdge2d::*)() const) static_cast<BRepLib_EdgeError (BRepLib_MakeEdge2d::*)() const>(&BRepLib_MakeEdge2d::Error),
             R"#(Returns the error description when NotDone.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepLib_MakeEdge2d::*)() ) static_cast<const TopoDS_Edge & (BRepLib_MakeEdge2d::*)() >(&BRepLib_MakeEdge2d::Edge),
             R"#(None)#" )
        .def("Vertex1",
             (const TopoDS_Vertex & (BRepLib_MakeEdge2d::*)() const) static_cast<const TopoDS_Vertex & (BRepLib_MakeEdge2d::*)() const>(&BRepLib_MakeEdge2d::Vertex1),
             R"#(Returns the first vertex of the edge. May be Null.)#" )
        .def("Vertex2",
             (const TopoDS_Vertex & (BRepLib_MakeEdge2d::*)() const) static_cast<const TopoDS_Vertex & (BRepLib_MakeEdge2d::*)() const>(&BRepLib_MakeEdge2d::Vertex2),
             R"#(Returns the second vertex of the edge. May be Null.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeFace , shared_ptr<BRepLib_MakeFace> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
        .def(py::init< const gp_Pln & >()  , py::arg("P") )
        .def(py::init< const gp_Cylinder & >()  , py::arg("C") )
        .def(py::init< const gp_Cone & >()  , py::arg("C") )
        .def(py::init< const gp_Sphere & >()  , py::arg("S") )
        .def(py::init< const gp_Torus & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("S"),  py::arg("TolDegen") )
        .def(py::init< const gp_Pln &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Cylinder &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Cone &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Sphere &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Torus &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("TolDegen") )
        .def(py::init< const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("W"),  py::arg("OnlyPlane")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const gp_Pln &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("P"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Cylinder &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("C"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Cone &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("C"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Sphere &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("S"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Torus &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("C"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("S"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Face &,const TopoDS_Wire & >()  , py::arg("F"),  py::arg("W") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepLib_MakeFace::*)( const TopoDS_Face & ) ) static_cast<void (BRepLib_MakeFace::*)( const TopoDS_Face & ) >(&BRepLib_MakeFace::Init),
             R"#(Load the face.)#"  , py::arg("F"))
        .def("Init",
             (void (BRepLib_MakeFace::*)( const opencascade::handle<Geom_Surface> & , const Standard_Boolean , const Standard_Real ) ) static_cast<void (BRepLib_MakeFace::*)( const opencascade::handle<Geom_Surface> & , const Standard_Boolean , const Standard_Real ) >(&BRepLib_MakeFace::Init),
             R"#(Creates the face from the surface. If Bound is True a wire is made from the natural bounds. Accepts tolerance value (TolDegen) for resolution of degenerated edges.)#"  , py::arg("S"),  py::arg("Bound"),  py::arg("TolDegen"))
        .def("Init",
             (void (BRepLib_MakeFace::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepLib_MakeFace::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepLib_MakeFace::Init),
             R"#(Creates the face from the surface and the min-max values. Accepts tolerance value (TolDegen) for resolution of degenerated edges.)#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("TolDegen"))
        .def("Add",
             (void (BRepLib_MakeFace::*)( const TopoDS_Wire & ) ) static_cast<void (BRepLib_MakeFace::*)( const TopoDS_Wire & ) >(&BRepLib_MakeFace::Add),
             R"#(Adds the wire <W> in the current face.)#"  , py::arg("W"))
        .def("Error",
             (BRepLib_FaceError (BRepLib_MakeFace::*)() const) static_cast<BRepLib_FaceError (BRepLib_MakeFace::*)() const>(&BRepLib_MakeFace::Error),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (BRepLib_MakeFace::*)() const) static_cast<const TopoDS_Face & (BRepLib_MakeFace::*)() const>(&BRepLib_MakeFace::Face),
             R"#(Returns the new face.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsDegenerated_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , Standard_Real & ) >(&BRepLib_MakeFace::IsDegenerated),
                    R"#(Checks the specified curve is degenerated according to specified tolerance. Returns <theActTol> less than <theMaxTol>, which shows actual tolerance to decide the curve is degenerated. Warning: For internal use of BRepLib_MakeFace and BRepLib_MakeShell.)#"  , py::arg("theCurve"),  py::arg("theMaxTol"),  py::arg("theActTol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakePolygon , shared_ptr<BRepLib_MakePolygon> , BRepLib_MakeShape>>(m.attr("BRepLib_MakePolygon"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("P4"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("V1"),  py::arg("V2") )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Boolean >()  , py::arg("V1"),  py::arg("V2"),  py::arg("V3"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Boolean >()  , py::arg("V1"),  py::arg("V2"),  py::arg("V3"),  py::arg("V4"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepLib_MakePolygon::*)( const gp_Pnt & ) ) static_cast<void (BRepLib_MakePolygon::*)( const gp_Pnt & ) >(&BRepLib_MakePolygon::Add),
             R"#(None)#"  , py::arg("P"))
        .def("Add",
             (void (BRepLib_MakePolygon::*)( const TopoDS_Vertex & ) ) static_cast<void (BRepLib_MakePolygon::*)( const TopoDS_Vertex & ) >(&BRepLib_MakePolygon::Add),
             R"#(None)#"  , py::arg("V"))
        .def("Added",
             (Standard_Boolean (BRepLib_MakePolygon::*)() const) static_cast<Standard_Boolean (BRepLib_MakePolygon::*)() const>(&BRepLib_MakePolygon::Added),
             R"#(Returns True if the last vertex or point was succesfully added.)#" )
        .def("Close",
             (void (BRepLib_MakePolygon::*)() ) static_cast<void (BRepLib_MakePolygon::*)() >(&BRepLib_MakePolygon::Close),
             R"#(None)#" )
        .def("FirstVertex",
             (const TopoDS_Vertex & (BRepLib_MakePolygon::*)() const) static_cast<const TopoDS_Vertex & (BRepLib_MakePolygon::*)() const>(&BRepLib_MakePolygon::FirstVertex),
             R"#(None)#" )
        .def("LastVertex",
             (const TopoDS_Vertex & (BRepLib_MakePolygon::*)() const) static_cast<const TopoDS_Vertex & (BRepLib_MakePolygon::*)() const>(&BRepLib_MakePolygon::LastVertex),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepLib_MakePolygon::*)() const) static_cast<const TopoDS_Edge & (BRepLib_MakePolygon::*)() const>(&BRepLib_MakePolygon::Edge),
             R"#(Returns the last edge added to the polygon.)#" )
        .def("Wire",
             (const TopoDS_Wire & (BRepLib_MakePolygon::*)() ) static_cast<const TopoDS_Wire & (BRepLib_MakePolygon::*)() >(&BRepLib_MakePolygon::Wire),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeShell , shared_ptr<BRepLib_MakeShell> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeShell"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("S"),  py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepLib_MakeShell::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (BRepLib_MakeShell::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&BRepLib_MakeShell::Init),
             R"#(Creates the shell from the surface and the min-max values.)#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Error",
             (BRepLib_ShellError (BRepLib_MakeShell::*)() const) static_cast<BRepLib_ShellError (BRepLib_MakeShell::*)() const>(&BRepLib_MakeShell::Error),
             R"#(None)#" )
        .def("Shell",
             (const TopoDS_Shell & (BRepLib_MakeShell::*)() const) static_cast<const TopoDS_Shell & (BRepLib_MakeShell::*)() const>(&BRepLib_MakeShell::Shell),
             R"#(Returns the new Shell.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeSolid , shared_ptr<BRepLib_MakeSolid> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeSolid"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_CompSolid & >()  , py::arg("S") )
        .def(py::init< const TopoDS_Shell & >()  , py::arg("S") )
        .def(py::init< const TopoDS_Shell &,const TopoDS_Shell & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const TopoDS_Shell &,const TopoDS_Shell &,const TopoDS_Shell & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("S3") )
        .def(py::init< const TopoDS_Solid & >()  , py::arg("So") )
        .def(py::init< const TopoDS_Solid &,const TopoDS_Shell & >()  , py::arg("So"),  py::arg("S") )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepLib_MakeSolid::*)( const TopoDS_Shell & ) ) static_cast<void (BRepLib_MakeSolid::*)( const TopoDS_Shell & ) >(&BRepLib_MakeSolid::Add),
             R"#(Add the shell to the current solid.)#"  , py::arg("S"))
        .def("Solid",
             (const TopoDS_Solid & (BRepLib_MakeSolid::*)() ) static_cast<const TopoDS_Solid & (BRepLib_MakeSolid::*)() >(&BRepLib_MakeSolid::Solid),
             R"#(Returns the new Solid.)#" )
        .def("FaceStatus",
             (BRepLib_ShapeModification (BRepLib_MakeSolid::*)( const TopoDS_Face & ) const) static_cast<BRepLib_ShapeModification (BRepLib_MakeSolid::*)( const TopoDS_Face & ) const>(&BRepLib_MakeSolid::FaceStatus),
             R"#(returns the status of the Face after the shape creation.)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeVertex , shared_ptr<BRepLib_MakeVertex> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeVertex"))
    // constructors
        .def(py::init< const gp_Pnt & >()  , py::arg("P") )
    // custom constructors
    // methods
        .def("Vertex",
             (const TopoDS_Vertex & (BRepLib_MakeVertex::*)() ) static_cast<const TopoDS_Vertex & (BRepLib_MakeVertex::*)() >(&BRepLib_MakeVertex::Vertex),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeWire , shared_ptr<BRepLib_MakeWire> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeWire"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge & >()  , py::arg("E") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("E1"),  py::arg("E2") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("E1"),  py::arg("E2"),  py::arg("E3") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"),  py::arg("E4") )
        .def(py::init< const TopoDS_Wire & >()  , py::arg("W") )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Edge & >()  , py::arg("W"),  py::arg("E") )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepLib_MakeWire::*)( const TopoDS_Edge & ) ) static_cast<void (BRepLib_MakeWire::*)( const TopoDS_Edge & ) >(&BRepLib_MakeWire::Add),
             R"#(Add the edge <E> to the current wire.)#"  , py::arg("E"))
        .def("Add",
             (void (BRepLib_MakeWire::*)( const TopoDS_Wire & ) ) static_cast<void (BRepLib_MakeWire::*)( const TopoDS_Wire & ) >(&BRepLib_MakeWire::Add),
             R"#(Add the edges of <W> to the current wire.)#"  , py::arg("W"))
        .def("Add",
             (void (BRepLib_MakeWire::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepLib_MakeWire::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BRepLib_MakeWire::Add),
             R"#(Add the edges of <L> to the current wire. The edges are not to be consecutive. But they are to be all connected geometrically or topologically.)#"  , py::arg("L"))
        .def("Error",
             (BRepLib_WireError (BRepLib_MakeWire::*)() const) static_cast<BRepLib_WireError (BRepLib_MakeWire::*)() const>(&BRepLib_MakeWire::Error),
             R"#(None)#" )
        .def("Wire",
             (const TopoDS_Wire & (BRepLib_MakeWire::*)() ) static_cast<const TopoDS_Wire & (BRepLib_MakeWire::*)() >(&BRepLib_MakeWire::Wire),
             R"#(Returns the new wire.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepLib_MakeWire::*)() const) static_cast<const TopoDS_Edge & (BRepLib_MakeWire::*)() const>(&BRepLib_MakeWire::Edge),
             R"#(Returns the last edge added to the wire.)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (BRepLib_MakeWire::*)() const) static_cast<const TopoDS_Vertex & (BRepLib_MakeWire::*)() const>(&BRepLib_MakeWire::Vertex),
             R"#(Returns the last connecting vertex.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BRepLib_FaceError.hxx
// ./opencascade\BRepLib_MakeSolid.hxx
// ./opencascade\BRepLib_MakeVertex.hxx
// ./opencascade\BRepLib_MakeFace.hxx
// ./opencascade\BRepLib_FindSurface.hxx
// ./opencascade\BRepLib_EdgeError.hxx
// ./opencascade\BRepLib.hxx
// ./opencascade\BRepLib_MakeEdge2d.hxx
// ./opencascade\BRepLib_MakeEdge.hxx
// ./opencascade\BRepLib_ShapeModification.hxx
// ./opencascade\BRepLib_MakeShell.hxx
// ./opencascade\BRepLib_FuseEdges.hxx
// ./opencascade\BRepLib_MakeShape.hxx
// ./opencascade\BRepLib_MakePolygon.hxx
// ./opencascade\BRepLib_ShellError.hxx
// ./opencascade\BRepLib_MakeWire.hxx
// ./opencascade\BRepLib_WireError.hxx
// ./opencascade\BRepLib_Command.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
