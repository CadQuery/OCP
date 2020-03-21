
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
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
#include <BRepAlgo_NormalProjection.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>

// module includes
#include <BRepAlgo.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_CheckStatus.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_Tool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepAlgo(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepAlgo"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepAlgo , shared_ptr<BRepAlgo>>(m,"BRepAlgo");

    static_cast<py::class_<BRepAlgo , shared_ptr<BRepAlgo> >>(m.attr("BRepAlgo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_AsDes ,opencascade::handle<BRepAlgo_AsDes> , Standard_Transient>>(m.attr("BRepAlgo_AsDes"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAlgo_AsDes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAlgo_AsDes::*)() const>(&BRepAlgo_AsDes::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAlgo_AsDes::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_BooleanOperation , shared_ptr<BRepAlgo_BooleanOperation> , BRepBuilderAPI_MakeShape>>(m.attr("BRepAlgo_BooleanOperation"))
    // constructors
    // custom constructors
    // methods
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) >(&BRepAlgo_BooleanOperation::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) >(&BRepAlgo_BooleanOperation::IsDeleted),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_FaceRestrictor , shared_ptr<BRepAlgo_FaceRestrictor> >>(m.attr("BRepAlgo_FaceRestrictor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Image , shared_ptr<BRepAlgo_Image> >>(m.attr("BRepAlgo_Image"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Loop , shared_ptr<BRepAlgo_Loop> >>(m.attr("BRepAlgo_Loop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_NormalProjection , shared_ptr<BRepAlgo_NormalProjection> >>(m.attr("BRepAlgo_NormalProjection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepAlgo_Tool , shared_ptr<BRepAlgo_Tool>>(m,"BRepAlgo_Tool");

    static_cast<py::class_<BRepAlgo_Tool , shared_ptr<BRepAlgo_Tool> >>(m.attr("BRepAlgo_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Common , shared_ptr<BRepAlgo_Common> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Common"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Cut , shared_ptr<BRepAlgo_Cut> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Cut"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Fuse , shared_ptr<BRepAlgo_Fuse> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Fuse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Section , shared_ptr<BRepAlgo_Section> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Section"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepAlgo_Section::*)() ) static_cast<void (BRepAlgo_Section::*)() >(&BRepAlgo_Section::Build),
             R"#(Performs the computation of the section lines between the two parts defined at the time of construction of this framework or reinitialized with the Init1 and Init2 functions. The constructed shape will be returned by the function Shape. This is a compound object composed of edges. These intersection edges may be built: - on new intersection lines, or - on coincident portions of edges in the two intersected shapes. These intersection edges are independent: they are not chained or grouped into wires. If no intersection edge exists, the result is an empty compound object. The shapes involved in the construction of the section lines can be retrieved with the function Shape1 or Shape2. Note that other objects than TopoDS_Shape shapes given as arguments at the construction time of this framework, or to the Init1 or Init2 function, are converted into faces or shells before performing the computation of the intersection. Parametric 2D curves on intersection edges No parametric 2D curve (pcurve) is defined for the elementary edges of the result. To attach parametric curves like this to the constructed edges you have to use: - the function ComputePCurveOn1 to ask for the additional computation of a pcurve in the parametric space of the first shape, - the function ComputePCurveOn2 to ask for the additional computation of a pcurve in the parametric space of the second shape. This must be done before calling this function. Note that as a result, pcurves are added on edges built on new intersection lines only. Approximation of intersection edges The underlying 3D geometry attached to each elementary edge of the result is: - analytic where possible provided the corresponding geometry corresponds to a type of analytic curve defined in the Geom package; for example, the intersection of a cylindrical shape with a plane gives an ellipse or a circle; or - elsewhere, given as a succession of points grouped together in a BSpline curve of degree 1. If, on computed elementary intersection edges whose underlying geometry is not analytic, you prefer to have an attached 3D geometry which is a BSpline approximation of the computed set of points, you have to use the function Approximation to ask for this computation option before calling this function. You may also have combined these computation options: look at the example given above to illustrate the use of the constructors.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepAlgo_Loop.hxx
// ./opencascade/BRepAlgo_Image.hxx
// ./opencascade/BRepAlgo_Fuse.hxx
// ./opencascade/BRepAlgo_Common.hxx
// ./opencascade/BRepAlgo_BooleanOperation.hxx
// ./opencascade/BRepAlgo_Cut.hxx
// ./opencascade/BRepAlgo.hxx
// ./opencascade/BRepAlgo_FaceRestrictor.hxx
// ./opencascade/BRepAlgo_Section.hxx
// ./opencascade/BRepAlgo_Tool.hxx
// ./opencascade/BRepAlgo_NormalProjection.hxx
// ./opencascade/BRepAlgo_AsDes.hxx
// ./opencascade/BRepAlgo_CheckStatus.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
