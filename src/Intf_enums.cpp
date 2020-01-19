
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <gp_Lin2d.hxx>
#include <Bnd_Box2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Lin.hxx>
#include <Bnd_Box.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Intf_Polygon2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_XYZ.hxx>
#include <Intf_Polygon2d.hxx>
#include <Intf_SectionPoint.hxx>
#include <Intf_SectionLine.hxx>
#include <Intf_TangentZone.hxx>
#include <Intf_Interference.hxx>
#include <Intf_Tool.hxx>
#include <Intf_InterferencePolygon2d.hxx>

// module includes
#include <Intf.hxx>
#include <Intf_Array1OfLin.hxx>
#include <Intf_Interference.hxx>
#include <Intf_InterferencePolygon2d.hxx>
#include <Intf_PIType.hxx>
#include <Intf_Polygon2d.hxx>
#include <Intf_SectionLine.hxx>
#include <Intf_SectionPoint.hxx>
#include <Intf_SeqOfSectionLine.hxx>
#include <Intf_SeqOfSectionPoint.hxx>
#include <Intf_SeqOfTangentZone.hxx>
#include <Intf_TangentZone.hxx>
#include <Intf_Tool.hxx>

// template related includes
// ./opencascade/Intf_SeqOfSectionLine.hxx
#include "NCollection.hxx"
// ./opencascade/Intf_SeqOfTangentZone.hxx
#include "NCollection.hxx"
// ./opencascade/Intf_SeqOfSectionPoint.hxx
#include "NCollection.hxx"
// ./opencascade/Intf_Array1OfLin.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Intf_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Intf", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Intf_PIType>(m, "Intf_PIType",R"#(Describes the different intersection point types for this application.)#")
        .value("Intf_EXTERNAL",Intf_PIType::Intf_EXTERNAL)
        .value("Intf_FACE",Intf_PIType::Intf_FACE)
        .value("Intf_EDGE",Intf_PIType::Intf_EDGE)
        .value("Intf_VERTEX",Intf_PIType::Intf_VERTEX).export_values();

//Python trampoline classes
    class Py_Intf_Polygon2d : public Intf_Polygon2d{
    public:
        using Intf_Polygon2d::Intf_Polygon2d;
        
        // public pure virtual
        Standard_Real DeflectionOverEstimation() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Intf_Polygon2d,DeflectionOverEstimation,) };
        Standard_Integer NbSegments() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Intf_Polygon2d,NbSegments,) };
        void Segment(const Standard_Integer theIndex,gp_Pnt2d & theBegin,gp_Pnt2d & theEnd) const  override { PYBIND11_OVERLOAD_PURE(void,Intf_Polygon2d,Segment,theIndex,theBegin,theEnd) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<Intf_SectionLine>(m,"Intf_SeqOfSectionLine");  
    preregister_template_NCollection_Sequence<Intf_TangentZone>(m,"Intf_SeqOfTangentZone");  
    preregister_template_NCollection_Sequence<Intf_SectionPoint>(m,"Intf_SeqOfSectionPoint");  
    preregister_template_NCollection_Array1<gp_Lin>(m,"Intf_Array1OfLin");  

// classes forward declarations only
    py::class_<Intf , shared_ptr<Intf>  >(m,"Intf",R"#(Interference computation between polygons, lines and polyhedra with only triangular facets. These objects are polygonal representations of complex curves and triangulated representations of complex surfaces.)#");
    py::class_<Intf_Interference , shared_ptr_nodelete<Intf_Interference>  >(m,"Intf_Interference",R"#(Describes the Interference computation result between polygon2d or polygon3d or polyhedron (as three sequences of points of intersection, polylines of intersection and zones de tangence).)#");
    py::class_<Intf_Polygon2d , shared_ptr<Intf_Polygon2d> ,Py_Intf_Polygon2d >(m,"Intf_Polygon2d",R"#(Describes the necessary polygon information to compute the interferences.)#");
    py::class_<Intf_SectionLine , shared_ptr<Intf_SectionLine>  >(m,"Intf_SectionLine",R"#(Describe a polyline of intersection between two polyhedra as a sequence of points of intersection.)#");
    py::class_<Intf_SectionPoint , shared_ptr<Intf_SectionPoint>  >(m,"Intf_SectionPoint",R"#(Describes an intersection point between polygons and polyedra.)#");
    py::class_<Intf_TangentZone , shared_ptr<Intf_TangentZone>  >(m,"Intf_TangentZone",R"#(Describes a zone of tangence between polygons or polyhedra as a sequence of points of intersection.)#");
    py::class_<Intf_Tool , shared_ptr<Intf_Tool>  >(m,"Intf_Tool",R"#(Provides services to create box for infinites lines in a given contexte.)#");
    py::class_<Intf_InterferencePolygon2d , shared_ptr<Intf_InterferencePolygon2d>  , Intf_Interference >(m,"Intf_InterferencePolygon2d",R"#(Computes the interference between two polygons or the self intersection of a polygon in two dimensions.)#");

};

// user-defined post-inclusion per module

// user-defined post
