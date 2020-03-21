
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <Standard_NullObject.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon2D.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon2D.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <BRep_Builder.hxx>
#include <BRep_Curve3D.hxx>
#include <BRep_CurveOn2Surfaces.hxx>
#include <BRep_CurveOnClosedSurface.hxx>
#include <BRep_CurveOnSurface.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <BRep_GCurve.hxx>
#include <BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#include <BRep_ListIteratorOfListOfPointRepresentation.hxx>
#include <BRep_ListOfCurveRepresentation.hxx>
#include <BRep_ListOfPointRepresentation.hxx>
#include <BRep_PointOnCurve.hxx>
#include <BRep_PointOnCurveOnSurface.hxx>
#include <BRep_PointOnSurface.hxx>
#include <BRep_PointRepresentation.hxx>
#include <BRep_PointsOnSurface.hxx>
#include <BRep_Polygon3D.hxx>
#include <BRep_PolygonOnClosedSurface.hxx>
#include <BRep_PolygonOnClosedTriangulation.hxx>
#include <BRep_PolygonOnSurface.hxx>
#include <BRep_PolygonOnTriangulation.hxx>
#include <BRep_TEdge.hxx>
#include <BRep_TFace.hxx>
#include <BRep_Tool.hxx>
#include <BRep_TVertex.hxx>

// template related includes
// ./opencascade/BRep_ListOfCurveRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRep_ListOfCurveRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRep_ListOfPointRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRep_ListOfPointRepresentation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_BRep_CurveRepresentation : public BRep_CurveRepresentation{
    public:
        using BRep_CurveRepresentation::BRep_CurveRepresentation;


        // public pure virtual
        opencascade::handle<BRep_CurveRepresentation> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<BRep_CurveRepresentation>,BRep_CurveRepresentation,Copy,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_BRep_GCurve : public BRep_GCurve{
    public:
        using BRep_GCurve::BRep_GCurve;


        // public pure virtual
        void D0(const Standard_Real U,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,BRep_GCurve,D0,U,P) };

        opencascade::handle<BRep_CurveRepresentation> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<BRep_CurveRepresentation>,BRep_CurveRepresentation,Copy,) };

        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<BRep_CurveRepresentation> >(m,"BRep_ListOfCurveRepresentation");
    preregister_template_NCollection_List<opencascade::handle<BRep_PointRepresentation> >(m,"BRep_ListOfPointRepresentation");

// classes forward declarations only
    py::class_<BRep_Builder , shared_ptr<BRep_Builder> , TopoDS_Builder>(m,"BRep_Builder",R"#(A framework providing advanced tolerance control. It is used to build Shapes. If tolerance control is required, you are advised to: 1. build a default precision for topology, using the classes provided in the BRepAPI package 2. update the tolerance of the resulting shape. Note that only vertices, edges and faces have meaningful tolerance control. The tolerance value must always comply with the condition that face tolerances are more restrictive than edge tolerances which are more restrictive than vertex tolerances. In other words: Tol(Vertex) >= Tol(Edge) >= Tol(Face). Other rules in setting tolerance include: - you can open up tolerance but should never restrict it - an edge cannot be included within the fusion of the tolerance spheres of two vertices)#");
    py::class_<BRep_CurveRepresentation ,opencascade::handle<BRep_CurveRepresentation>,Py_BRep_CurveRepresentation , Standard_Transient>(m,"BRep_CurveRepresentation",R"#(Root class for the curve representations. Contains a location.Root class for the curve representations. Contains a location.Root class for the curve representations. Contains a location.)#");
    py::class_<BRep_PointRepresentation ,opencascade::handle<BRep_PointRepresentation> , Standard_Transient>(m,"BRep_PointRepresentation",R"#(Root class for the points representations. Contains a location and a parameter.Root class for the points representations. Contains a location and a parameter.Root class for the points representations. Contains a location and a parameter.)#");
    py::class_<BRep_TEdge ,opencascade::handle<BRep_TEdge> , TopoDS_TEdge>(m,"BRep_TEdge",R"#(The TEdge from BRep is inherited from the TEdge from TopoDS. It contains the geometric data.The TEdge from BRep is inherited from the TEdge from TopoDS. It contains the geometric data.The TEdge from BRep is inherited from the TEdge from TopoDS. It contains the geometric data.)#");
    py::class_<BRep_TFace ,opencascade::handle<BRep_TFace> , TopoDS_TFace>(m,"BRep_TFace",R"#(The Tface from BRep is based on the TFace from TopoDS. The TFace contains :The Tface from BRep is based on the TFace from TopoDS. The TFace contains :The Tface from BRep is based on the TFace from TopoDS. The TFace contains :)#");
    py::class_<BRep_TVertex ,opencascade::handle<BRep_TVertex> , TopoDS_TVertex>(m,"BRep_TVertex",R"#(The TVertex from BRep inherits from the TVertex from TopoDS. It contains the geometric data.The TVertex from BRep inherits from the TVertex from TopoDS. It contains the geometric data.The TVertex from BRep inherits from the TVertex from TopoDS. It contains the geometric data.)#");
    py::class_<BRep_Tool , shared_ptr<BRep_Tool> >(m,"BRep_Tool",R"#(Provides class methods to access to the geometry of BRep shapes.)#");
    py::class_<BRep_CurveOn2Surfaces ,opencascade::handle<BRep_CurveOn2Surfaces> , BRep_CurveRepresentation>(m,"BRep_CurveOn2Surfaces",R"#(Defines a continuity between two surfaces.Defines a continuity between two surfaces.Defines a continuity between two surfaces.)#");
    py::class_<BRep_GCurve ,opencascade::handle<BRep_GCurve>,Py_BRep_GCurve , BRep_CurveRepresentation>(m,"BRep_GCurve",R"#(Root class for the geometric curves representation. Contains a range. Contains a first and a last parameter.Root class for the geometric curves representation. Contains a range. Contains a first and a last parameter.Root class for the geometric curves representation. Contains a range. Contains a first and a last parameter.)#");
    py::class_<BRep_PointOnCurve ,opencascade::handle<BRep_PointOnCurve> , BRep_PointRepresentation>(m,"BRep_PointOnCurve",R"#(Representation by a parameter on a 3D curve.Representation by a parameter on a 3D curve.Representation by a parameter on a 3D curve.)#");
    py::class_<BRep_PointsOnSurface ,opencascade::handle<BRep_PointsOnSurface> , BRep_PointRepresentation>(m,"BRep_PointsOnSurface",R"#(Root for points on surface.Root for points on surface.Root for points on surface.)#");
    py::class_<BRep_Polygon3D ,opencascade::handle<BRep_Polygon3D> , BRep_CurveRepresentation>(m,"BRep_Polygon3D",R"#(Representation by a 3D polygon.Representation by a 3D polygon.Representation by a 3D polygon.)#");
    py::class_<BRep_PolygonOnSurface ,opencascade::handle<BRep_PolygonOnSurface> , BRep_CurveRepresentation>(m,"BRep_PolygonOnSurface",R"#(Representation of a 2D polygon in the parametric space of a surface.Representation of a 2D polygon in the parametric space of a surface.Representation of a 2D polygon in the parametric space of a surface.)#");
    py::class_<BRep_PolygonOnTriangulation ,opencascade::handle<BRep_PolygonOnTriangulation> , BRep_CurveRepresentation>(m,"BRep_PolygonOnTriangulation",R"#(A representation by an array of nodes on a triangulation.A representation by an array of nodes on a triangulation.A representation by an array of nodes on a triangulation.)#");
    py::class_<BRep_Curve3D ,opencascade::handle<BRep_Curve3D> , BRep_GCurve>(m,"BRep_Curve3D",R"#(Representation of a curve by a 3D curve.Representation of a curve by a 3D curve.Representation of a curve by a 3D curve.)#");
    py::class_<BRep_CurveOnSurface ,opencascade::handle<BRep_CurveOnSurface> , BRep_GCurve>(m,"BRep_CurveOnSurface",R"#(Representation of a curve by a curve in the parametric space of a surface.Representation of a curve by a curve in the parametric space of a surface.Representation of a curve by a curve in the parametric space of a surface.)#");
    py::class_<BRep_PointOnCurveOnSurface ,opencascade::handle<BRep_PointOnCurveOnSurface> , BRep_PointsOnSurface>(m,"BRep_PointOnCurveOnSurface",R"#(Representation by a parameter on a curve on a surface.Representation by a parameter on a curve on a surface.Representation by a parameter on a curve on a surface.)#");
    py::class_<BRep_PointOnSurface ,opencascade::handle<BRep_PointOnSurface> , BRep_PointsOnSurface>(m,"BRep_PointOnSurface",R"#(Representation by two parameters on a surface.Representation by two parameters on a surface.Representation by two parameters on a surface.)#");
    py::class_<BRep_PolygonOnClosedSurface ,opencascade::handle<BRep_PolygonOnClosedSurface> , BRep_PolygonOnSurface>(m,"BRep_PolygonOnClosedSurface",R"#(Representation by two 2d polygons in the parametric space of a surface.Representation by two 2d polygons in the parametric space of a surface.Representation by two 2d polygons in the parametric space of a surface.)#");
    py::class_<BRep_PolygonOnClosedTriangulation ,opencascade::handle<BRep_PolygonOnClosedTriangulation> , BRep_PolygonOnTriangulation>(m,"BRep_PolygonOnClosedTriangulation",R"#(A representation by two arrays of nodes on a triangulation.A representation by two arrays of nodes on a triangulation.A representation by two arrays of nodes on a triangulation.)#");
    py::class_<BRep_CurveOnClosedSurface ,opencascade::handle<BRep_CurveOnClosedSurface> , BRep_CurveOnSurface>(m,"BRep_CurveOnClosedSurface",R"#(Representation of a curve by two pcurves on a closed surface.Representation of a curve by two pcurves on a closed surface.Representation of a curve by two pcurves on a closed surface.)#");

};

// user-defined post-inclusion per module

// user-defined post
