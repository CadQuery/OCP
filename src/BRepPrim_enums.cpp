
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>
#include <BRep_Builder.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <BRepPrim_Builder.hxx>
#include <BRepPrim_Cone.hxx>
#include <BRepPrim_Cylinder.hxx>
#include <BRepPrim_Direction.hxx>
#include <BRepPrim_FaceBuilder.hxx>
#include <BRepPrim_GWedge.hxx>
#include <BRepPrim_OneAxis.hxx>
#include <BRepPrim_Revolution.hxx>
#include <BRepPrim_Sphere.hxx>
#include <BRepPrim_Torus.hxx>
#include <BRepPrim_Wedge.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepPrim_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepPrim", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepPrim_Direction>(m, "BRepPrim_Direction",R"#(None)#")
        .value("BRepPrim_XMin",BRepPrim_Direction::BRepPrim_XMin)
        .value("BRepPrim_XMax",BRepPrim_Direction::BRepPrim_XMax)
        .value("BRepPrim_YMin",BRepPrim_Direction::BRepPrim_YMin)
        .value("BRepPrim_YMax",BRepPrim_Direction::BRepPrim_YMax)
        .value("BRepPrim_ZMin",BRepPrim_Direction::BRepPrim_ZMin)
        .value("BRepPrim_ZMax",BRepPrim_Direction::BRepPrim_ZMax).export_values();

//Python trampoline classes
    class Py_BRepPrim_OneAxis : public BRepPrim_OneAxis{
    public:
        using BRepPrim_OneAxis::BRepPrim_OneAxis;
        
        // public pure virtual
        TopoDS_Face MakeEmptyLateralFace() const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,BRepPrim_OneAxis,MakeEmptyLateralFace,) };
        TopoDS_Edge MakeEmptyMeridianEdge(const Standard_Real Ang) const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Edge,BRepPrim_OneAxis,MakeEmptyMeridianEdge,Ang) };
        void SetMeridianPCurve(TopoDS_Edge & E,const TopoDS_Face & F) const  override { PYBIND11_OVERLOAD_PURE(void,BRepPrim_OneAxis,SetMeridianPCurve,E,F) };
        gp_Pnt2d MeridianValue(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,BRepPrim_OneAxis,MeridianValue,V) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<BRepPrim_OneAxis ,std::unique_ptr<BRepPrim_OneAxis> ,Py_BRepPrim_OneAxis >(m,"BRepPrim_OneAxis",R"#(Algorithm to build primitives with one axis of revolution.)#");
    py::class_<BRepPrim_GWedge ,std::unique_ptr<BRepPrim_GWedge>  >(m,"BRepPrim_GWedge",R"#(A wedge is defined by :)#");
    py::class_<BRepPrim_Revolution ,std::unique_ptr<BRepPrim_Revolution>  , BRepPrim_OneAxis >(m,"BRepPrim_Revolution",R"#(Implement the OneAxis algoritm for a revolution surface.)#");
    py::class_<BRepPrim_Cylinder ,std::unique_ptr<BRepPrim_Cylinder>  , BRepPrim_Revolution >(m,"BRepPrim_Cylinder",R"#(Cylinder primitive.)#");
    py::class_<BRepPrim_Torus ,std::unique_ptr<BRepPrim_Torus>  , BRepPrim_Revolution >(m,"BRepPrim_Torus",R"#(Implements the torus primitive)#");
    py::class_<BRepPrim_Wedge ,std::unique_ptr<BRepPrim_Wedge>  , BRepPrim_GWedge >(m,"BRepPrim_Wedge",R"#(Provides constructors without Builders.)#");
    py::class_<BRepPrim_Builder ,std::unique_ptr<BRepPrim_Builder>  >(m,"BRepPrim_Builder",R"#(implements the abstract Builder with the BRep Builder)#");
    py::class_<BRepPrim_Cone ,std::unique_ptr<BRepPrim_Cone>  , BRepPrim_Revolution >(m,"BRepPrim_Cone",R"#(Implement the cone primitive.)#");
    py::class_<BRepPrim_Sphere ,std::unique_ptr<BRepPrim_Sphere>  , BRepPrim_Revolution >(m,"BRepPrim_Sphere",R"#(Implements the sphere primitive)#");
    py::class_<BRepPrim_FaceBuilder ,std::unique_ptr<BRepPrim_FaceBuilder>  >(m,"BRepPrim_FaceBuilder",R"#(The FaceBuilder is an algorithm to build a BRep Face from a Geom Surface.)#");

// pre-register typdefs
// ./opencascade/BRepPrim_Revolution.hxx
// ./opencascade/BRepPrim_Builder.hxx
// ./opencascade/BRepPrim_Cylinder.hxx
// ./opencascade/BRepPrim_GWedge.hxx
// ./opencascade/BRepPrim_Sphere.hxx
// ./opencascade/BRepPrim_OneAxis.hxx
// ./opencascade/BRepPrim_Torus.hxx
// ./opencascade/BRepPrim_Direction.hxx
// ./opencascade/BRepPrim_Cone.hxx
// ./opencascade/BRepPrim_Wedge.hxx
// ./opencascade/BRepPrim_FaceBuilder.hxx

};

// user-defined post-inclusion per module

// user-defined post
