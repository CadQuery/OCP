
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
#include <TopoDS_Edge.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_Face.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <GProp_GProps.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_EdgeTool.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_Cinert.hxx>
#include <BRepGProp_Sinert.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp_VinertGK.hxx>
#include <BRepGProp_UFunction.hxx>
#include <BRepGProp_TFunction.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <TopoDS_Edge.hxx>
#include <Poly_Triangulation.hxx>
#include <TopLoc_Location.hxx>

// module includes
#include <BRepGProp.hxx>
#include <BRepGProp_Cinert.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_EdgeTool.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_MeshCinert.hxx>
#include <BRepGProp_MeshProps.hxx>
#include <BRepGProp_Sinert.hxx>
#include <BRepGProp_TFunction.hxx>
#include <BRepGProp_UFunction.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp_VinertGK.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepGProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepGProp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepGProp , shared_ptr<BRepGProp>>(m,"BRepGProp");

    static_cast<py::class_<BRepGProp , shared_ptr<BRepGProp> >>(m.attr("BRepGProp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("LinearProperties_s",
                    (void (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp::LinearProperties),
                    R"#(Computes the linear global properties of the shape S, i.e. the global properties induced by each edge of the shape S, and brings them together with the global properties still retained by the framework LProps. If the current system of LProps was empty, its global properties become equal to the linear global properties of S. For this computation no linear density is attached to the edges. So, for example, the added mass corresponds to the sum of the lengths of the edges of S. The density of the composed systems, i.e. that of each component of the current system of LProps, and that of S which is considered to be equal to 1, must be coherent. Note that this coherence cannot be checked. You are advised to use a separate framework for each density, and then to bring these frameworks together into a global one. The point relative to which the inertia of the system is computed is the reference point of the framework LProps. Note: if your programming ensures that the framework LProps retains only linear global properties (brought together for example, by the function LinearProperties) for objects the density of which is equal to 1 (or is not defined), the function Mass will return the total length of edges of the system analysed by LProps. Warning No check is performed to verify that the shape S retains truly linear properties. If S is simply a vertex, it is not considered to present any additional global properties. SkipShared is a special flag, which allows taking in calculation shared topological entities or not. For ex., if SkipShared = True, edges, shared by two or more faces, are taken into calculation only once. If we have cube with sizes 1, 1, 1, its linear properties = 12 for SkipEdges = true and 24 for SkipEdges = false. UseTriangulation is a special flag, which defines preferable source of geometry data. If UseTriangulation = Standard_False, exact geometry objects (curves) are used, otherwise polygons of triangulation are used first.)#"  , py::arg("S"),  py::arg("LProps"),  py::arg("SkipShared")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("UseTriangulation")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("SurfaceProperties_s",
                    (void (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp::SurfaceProperties),
                    R"#(Computes the surface global properties of the shape S, i.e. the global properties induced by each face of the shape S, and brings them together with the global properties still retained by the framework SProps. If the current system of SProps was empty, its global properties become equal to the surface global properties of S. For this computation, no surface density is attached to the faces. Consequently, the added mass corresponds to the sum of the areas of the faces of S. The density of the component systems, i.e. that of each component of the current system of SProps, and that of S which is considered to be equal to 1, must be coherent. Note that this coherence cannot be checked. You are advised to use a framework for each different value of density, and then to bring these frameworks together into a global one. The point relative to which the inertia of the system is computed is the reference point of the framework SProps. Note : if your programming ensures that the framework SProps retains only surface global properties, brought together, for example, by the function SurfaceProperties, for objects the density of which is equal to 1 (or is not defined), the function Mass will return the total area of faces of the system analysed by SProps. Warning No check is performed to verify that the shape S retains truly surface properties. If S is simply a vertex, an edge or a wire, it is not considered to present any additional global properties. SkipShared is a special flag, which allows taking in calculation shared topological entities or not. For ex., if SkipShared = True, faces, shared by two or more shells, are taken into calculation only once. UseTriangulation is a special flag, which defines preferable source of geometry data. If UseTriangulation = Standard_False, exact geometry objects (surfaces) are used, otherwise face triangulations are used first.)#"  , py::arg("S"),  py::arg("SProps"),  py::arg("SkipShared")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("UseTriangulation")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("SurfaceProperties_s",
                    (Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Real , const Standard_Boolean ) >(&BRepGProp::SurfaceProperties),
                    R"#(Updates <SProps> with the shape <S>, that contains its pricipal properties. The surface properties of all the faces in <S> are computed. Adaptive 2D Gauss integration is used. Parameter Eps sets maximal relative error of computed mass (area) for each face. Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values for two successive steps of adaptive integration. Method returns estimation of relative error reached for whole shape. WARNING: if Eps > 0.001 algorithm performs non-adaptive integration. SkipShared is a special flag, which allows taking in calculation shared topological entities or not For ex., if SkipShared = True, faces, shared by two or more shells, are taken into calculation only once.)#"  , py::arg("S"),  py::arg("SProps"),  py::arg("Eps"),  py::arg("SkipShared")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("VolumeProperties_s",
                    (void (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp::VolumeProperties),
                    R"#(Computes the global volume properties of the solid S, and brings them together with the global properties still retained by the framework VProps. If the current system of VProps was empty, its global properties become equal to the global properties of S for volume. For this computation, no volume density is attached to the solid. Consequently, the added mass corresponds to the volume of S. The density of the component systems, i.e. that of each component of the current system of VProps, and that of S which is considered to be equal to 1, must be coherent to each other. Note that this coherence cannot be checked. You are advised to use a separate framework for each density, and then to bring these frameworks together into a global one. The point relative to which the inertia of the system is computed is the reference point of the framework VProps. Note: if your programming ensures that the framework VProps retains only global properties of volume (brought together for example, by the function VolumeProperties) for objects the density of which is equal to 1 (or is not defined), the function Mass will return the total volume of the solids of the system analysed by VProps. Warning The shape S must represent an object whose global volume properties can be computed. It may be a finite solid, or a series of finite solids all oriented in a coherent way. Nonetheless, S must be exempt of any free boundary. Note that these conditions of coherence are not checked by this algorithm, and results will be false if they are not respected. SkipShared a is special flag, which allows taking in calculation shared topological entities or not. For ex., if SkipShared = True, the volumes formed by the equal (the same TShape, location and orientation) faces are taken into calculation only once. UseTriangulation is a special flag, which defines preferable source of geometry data. If UseTriangulation = Standard_False, exact geometry objects (surfaces) are used, otherwise face triangulations are used first.)#"  , py::arg("S"),  py::arg("VProps"),  py::arg("OnlyClosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SkipShared")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("UseTriangulation")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("VolumeProperties_s",
                    (Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp::VolumeProperties),
                    R"#(Updates <VProps> with the shape <S>, that contains its pricipal properties. The volume properties of all the FORWARD and REVERSED faces in <S> are computed. If OnlyClosed is True then computed faces must belong to closed Shells. Adaptive 2D Gauss integration is used. Parameter Eps sets maximal relative error of computed mass (volume) for each face. Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values for two successive steps of adaptive integration. Method returns estimation of relative error reached for whole shape. WARNING: if Eps > 0.001 algorithm performs non-adaptive integration. SkipShared is a special flag, which allows taking in calculation shared topological entities or not. For ex., if SkipShared = True, the volumes formed by the equal (the same TShape, location and orientation) faces are taken into calculation only once.)#"  , py::arg("S"),  py::arg("VProps"),  py::arg("Eps"),  py::arg("OnlyClosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SkipShared")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("VolumePropertiesGK_s",
                    (Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp::VolumePropertiesGK),
                    R"#(Updates <VProps> with the shape <S>, that contains its pricipal properties. The volume properties of all the FORWARD and REVERSED faces in <S> are computed. If OnlyClosed is True then computed faces must belong to closed Shells. Adaptive 2D Gauss integration is used. Parameter IsUseSpan says if it is necessary to define spans on a face. This option has an effect only for BSpline faces. Parameter Eps sets maximal relative error of computed property for each face. Error is delivered by the adaptive Gauss-Kronrod method of integral computation that is used for properties computation. Method returns estimation of relative error reached for whole shape. Returns negative value if the computation is failed. SkipShared is a special flag, which allows taking in calculation shared topological entities or not. For ex., if SkipShared = True, the volumes formed by the equal (the same TShape, location and orientation) faces are taken into calculation only once.)#"  , py::arg("S"),  py::arg("VProps"),  py::arg("Eps")=static_cast<const Standard_Real>(0.001),  py::arg("OnlyClosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("IsUseSpan")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("CGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("IFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SkipShared")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("VolumePropertiesGK_s",
                    (Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , GProp_GProps & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp::VolumePropertiesGK),
                    R"#(None)#"  , py::arg("S"),  py::arg("VProps"),  py::arg("thePln"),  py::arg("Eps")=static_cast<const Standard_Real>(0.001),  py::arg("OnlyClosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("IsUseSpan")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("CGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("IFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SkipShared")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Cinert , shared_ptr<BRepGProp_Cinert> , GProp_GProps>>(m.attr("BRepGProp_Cinert"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const BRepAdaptor_Curve &,const gp_Pnt & >()  , py::arg("C"),  py::arg("CLocation") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_Cinert::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_Cinert::*)( const gp_Pnt & ) >(&BRepGProp_Cinert::SetLocation),
             R"#(None)#"  , py::arg("CLocation"))
        .def("Perform",
             (void (BRepGProp_Cinert::*)( const BRepAdaptor_Curve & ) ) static_cast<void (BRepGProp_Cinert::*)( const BRepAdaptor_Curve & ) >(&BRepGProp_Cinert::Perform),
             R"#(None)#"  , py::arg("C"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Domain , shared_ptr<BRepGProp_Domain> >>(m.attr("BRepGProp_Domain"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepGProp_Domain::*)( const TopoDS_Face & ) ) static_cast<void (BRepGProp_Domain::*)( const TopoDS_Face & ) >(&BRepGProp_Domain::Init),
             R"#(Initializes the domain with the face.)#"  , py::arg("F"))
        .def("More",
             (Standard_Boolean (BRepGProp_Domain::*)() ) static_cast<Standard_Boolean (BRepGProp_Domain::*)() >(&BRepGProp_Domain::More),
             R"#(Returns True if there is another arc of curve in the list.)#" )
        .def("Init",
             (void (BRepGProp_Domain::*)() ) static_cast<void (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Init),
             R"#(Initializes the exploration with the face already set.)#" )
        .def("Value",
             (const TopoDS_Edge & (BRepGProp_Domain::*)() ) static_cast<const TopoDS_Edge & (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Value),
             R"#(Returns the current edge.)#" )
        .def("Next",
             (void (BRepGProp_Domain::*)() ) static_cast<void (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Next),
             R"#(Sets the index of the arc iterator to the next arc of curve.)#" )
        .def("Init",
             (void (BRepGProp_Domain::*)( const TopoDS_Face & ) ) static_cast<void (BRepGProp_Domain::*)( const TopoDS_Face & ) >(&BRepGProp_Domain::Init),
             R"#(Initializes the domain with the face.)#"  , py::arg("F"))
        .def("More",
             (Standard_Boolean (BRepGProp_Domain::*)() ) static_cast<Standard_Boolean (BRepGProp_Domain::*)() >(&BRepGProp_Domain::More),
             R"#(Returns True if there is another arc of curve in the list.)#" )
        .def("Init",
             (void (BRepGProp_Domain::*)() ) static_cast<void (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Init),
             R"#(Initializes the exploration with the face already set.)#" )
        .def("Value",
             (const TopoDS_Edge & (BRepGProp_Domain::*)() ) static_cast<const TopoDS_Edge & (BRepGProp_Domain::*)() >(&BRepGProp_Domain::Value),
             R"#(Returns the current edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepGProp_EdgeTool , shared_ptr<BRepGProp_EdgeTool>>(m,"BRepGProp_EdgeTool");

    static_cast<py::class_<BRepGProp_EdgeTool , shared_ptr<BRepGProp_EdgeTool> >>(m.attr("BRepGProp_EdgeTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve & ) >(&BRepGProp_EdgeTool::FirstParameter),
                    R"#(Returns the parametric value of the start point of the curve. The curve is oriented from the start point to the end point.)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve & ) >(&BRepGProp_EdgeTool::LastParameter),
                    R"#(Returns the parametric value of the end point of the curve. The curve is oriented from the start point to the end point.)#"  , py::arg("C"))
        .def_static("IntegrationOrder_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve & ) >(&BRepGProp_EdgeTool::IntegrationOrder),
                    R"#(Returns the number of Gauss points required to do the integration with a good accuracy using the Gauss method. For a polynomial curve of degree n the maxima of accuracy is obtained with an order of integration equal to 2*n-1.)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const BRepAdaptor_Curve & , const Standard_Real ) ) static_cast<gp_Pnt (*)( const BRepAdaptor_Curve & , const Standard_Real ) >(&BRepGProp_EdgeTool::Value),
                    R"#(Returns the point of parameter U on the loaded curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D1_s",
                    (void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & ) >(&BRepGProp_EdgeTool::D1),
                    R"#(Returns the point of parameter U and the first derivative at this point.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve & , const GeomAbs_Shape ) >(&BRepGProp_EdgeTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const BRepAdaptor_Curve & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const BRepAdaptor_Curve & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&BRepGProp_EdgeTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Face , shared_ptr<BRepGProp_Face> >>(m.attr("BRepGProp_Face"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("IsUseSpan")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Face &,const Standard_Boolean >()  , py::arg("F"),  py::arg("IsUseSpan")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Load",
             (void (BRepGProp_Face::*)( const TopoDS_Face & ) ) static_cast<void (BRepGProp_Face::*)( const TopoDS_Face & ) >(&BRepGProp_Face::Load),
             R"#(None)#"  , py::arg("F"))
        .def("VIntegrationOrder",
             (Standard_Integer (BRepGProp_Face::*)() const) static_cast<Standard_Integer (BRepGProp_Face::*)() const>(&BRepGProp_Face::VIntegrationOrder),
             R"#(None)#" )
        .def("NaturalRestriction",
             (Standard_Boolean (BRepGProp_Face::*)() const) static_cast<Standard_Boolean (BRepGProp_Face::*)() const>(&BRepGProp_Face::NaturalRestriction),
             R"#(Returns Standard_True if the face is not trimmed.)#" )
        .def("GetFace",
             (const TopoDS_Face & (BRepGProp_Face::*)() const) static_cast<const TopoDS_Face & (BRepGProp_Face::*)() const>(&BRepGProp_Face::GetFace),
             R"#(Returns the TopoDS face.)#" )
        .def("Value2d",
             (gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const>(&BRepGProp_Face::Value2d),
             R"#(Returns the value of the boundary curve of the face.)#"  , py::arg("U"))
        .def("SIntOrder",
             (Standard_Integer (BRepGProp_Face::*)( const Standard_Real ) const) static_cast<Standard_Integer (BRepGProp_Face::*)( const Standard_Real ) const>(&BRepGProp_Face::SIntOrder),
             R"#(None)#"  , py::arg("Eps"))
        .def("SVIntSubs",
             (Standard_Integer (BRepGProp_Face::*)() const) static_cast<Standard_Integer (BRepGProp_Face::*)() const>(&BRepGProp_Face::SVIntSubs),
             R"#(None)#" )
        .def("SUIntSubs",
             (Standard_Integer (BRepGProp_Face::*)() const) static_cast<Standard_Integer (BRepGProp_Face::*)() const>(&BRepGProp_Face::SUIntSubs),
             R"#(None)#" )
        .def("UKnots",
             (void (BRepGProp_Face::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepGProp_Face::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepGProp_Face::UKnots),
             R"#(None)#"  , py::arg("Knots"))
        .def("VKnots",
             (void (BRepGProp_Face::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepGProp_Face::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepGProp_Face::VKnots),
             R"#(None)#"  , py::arg("Knots"))
        .def("LIntOrder",
             (Standard_Integer (BRepGProp_Face::*)( const Standard_Real ) const) static_cast<Standard_Integer (BRepGProp_Face::*)( const Standard_Real ) const>(&BRepGProp_Face::LIntOrder),
             R"#(None)#"  , py::arg("Eps"))
        .def("LIntSubs",
             (Standard_Integer (BRepGProp_Face::*)() const) static_cast<Standard_Integer (BRepGProp_Face::*)() const>(&BRepGProp_Face::LIntSubs),
             R"#(None)#" )
        .def("LKnots",
             (void (BRepGProp_Face::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepGProp_Face::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepGProp_Face::LKnots),
             R"#(None)#"  , py::arg("Knots"))
        .def("UIntegrationOrder",
             (Standard_Integer (BRepGProp_Face::*)() const) static_cast<Standard_Integer (BRepGProp_Face::*)() const>(&BRepGProp_Face::UIntegrationOrder),
             R"#(Returns the number of points required to do the integration in the U parametric direction with a good accuracy.)#" )
        .def("Normal",
             (void (BRepGProp_Face::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (BRepGProp_Face::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&BRepGProp_Face::Normal),
             R"#(Computes the point of parameter U, V on the Face <S> and the normal to the face at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("VNor"))
        .def("Load",
             (bool (BRepGProp_Face::*)( const TopoDS_Edge & ) ) static_cast<bool (BRepGProp_Face::*)( const TopoDS_Edge & ) >(&BRepGProp_Face::Load),
             R"#(Loading the boundary arc. Returns FALSE if edge has no P-Curve.)#"  , py::arg("E"))
        .def("FirstParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::FirstParameter),
             R"#(Returns the parametric value of the start point of the current arc of curve.)#" )
        .def("LastParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::LastParameter),
             R"#(Returns the parametric value of the end point of the current arc of curve.)#" )
        .def("IntegrationOrder",
             (Standard_Integer (BRepGProp_Face::*)() const) static_cast<Standard_Integer (BRepGProp_Face::*)() const>(&BRepGProp_Face::IntegrationOrder),
             R"#(Returns the number of points required to do the integration along the parameter of curve.)#" )
        .def("D12d",
             (void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&BRepGProp_Face::D12d),
             R"#(Returns the point of parameter U and the first derivative at this point of a boundary curve.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("Load",
             (void (BRepGProp_Face::*)( const Standard_Boolean , const GeomAbs_IsoType ) ) static_cast<void (BRepGProp_Face::*)( const Standard_Boolean , const GeomAbs_IsoType ) >(&BRepGProp_Face::Load),
             R"#(Loading the boundary arc. This arc is either a top, bottom, left or right bound of a UV rectangle in which the parameters of surface are defined. If IsFirstParam is equal to Standard_True, the face is initialized by either left of bottom bound. Otherwise it is initialized by the top or right one. If theIsoType is equal to GeomAbs_IsoU, the face is initialized with either left or right bound. Otherwise - with either top or bottom one.)#"  , py::arg("IsFirstParam"),  py::arg("theIsoType"))
        .def("GetUKnots",
             (void (BRepGProp_Face::*)( const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HArray1OfReal> & ) const) static_cast<void (BRepGProp_Face::*)( const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HArray1OfReal> & ) const>(&BRepGProp_Face::GetUKnots),
             R"#(Returns an array of U knots of the face. The first and last elements of the array will be theUMin and theUMax. The middle elements will be the U Knots of the face greater then theUMin and lower then theUMax in increasing order. If the face is not a BSpline, the array initialized with theUMin and theUMax only.)#"  , py::arg("theUMin"),  py::arg("theUMax"),  py::arg("theUKnots"))
        .def("GetTKnots",
             (void (BRepGProp_Face::*)( const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HArray1OfReal> & ) const) static_cast<void (BRepGProp_Face::*)( const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HArray1OfReal> & ) const>(&BRepGProp_Face::GetTKnots),
             R"#(Returns an array of combination of T knots of the arc and V knots of the face. The first and last elements of the array will be theTMin and theTMax. The middle elements will be the Knots of the arc and the values of parameters of arc on which the value points have V coordinates close to V knots of face. All the parameter will be greater then theTMin and lower then theTMax in increasing order. If the face is not a BSpline, the array initialized with theTMin and theTMax only.)#"  , py::arg("theTMin"),  py::arg("theTMax"),  py::arg("theTKnots"))
        .def("NaturalRestriction",
             (Standard_Boolean (BRepGProp_Face::*)() const) static_cast<Standard_Boolean (BRepGProp_Face::*)() const>(&BRepGProp_Face::NaturalRestriction),
             R"#(Returns Standard_True if the face is not trimmed.)#" )
        .def("GetFace",
             (const TopoDS_Face & (BRepGProp_Face::*)() const) static_cast<const TopoDS_Face & (BRepGProp_Face::*)() const>(&BRepGProp_Face::GetFace),
             R"#(Returns the TopoDS face.)#" )
        .def("Value2d",
             (gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepGProp_Face::*)( const Standard_Real ) const>(&BRepGProp_Face::Value2d),
             R"#(Returns the value of the boundary curve of the face.)#"  , py::arg("U"))
        .def("D12d",
             (void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (BRepGProp_Face::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&BRepGProp_Face::D12d),
             R"#(Returns the point of parameter U and the first derivative at this point of a boundary curve.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("FirstParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::FirstParameter),
             R"#(Returns the parametric value of the start point of the current arc of curve.)#" )
        .def("LastParameter",
             (Standard_Real (BRepGProp_Face::*)() const) static_cast<Standard_Real (BRepGProp_Face::*)() const>(&BRepGProp_Face::LastParameter),
             R"#(Returns the parametric value of the end point of the current arc of curve.)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( BRepGProp_Face &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds of the Face.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_MeshCinert , shared_ptr<BRepGProp_MeshCinert> , GProp_GProps>>(m.attr("BRepGProp_MeshCinert"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_MeshCinert::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_MeshCinert::*)( const gp_Pnt & ) >(&BRepGProp_MeshCinert::SetLocation),
             R"#(None)#"  , py::arg("CLocation"))
        .def("Perform",
             (void (BRepGProp_MeshCinert::*)(  const NCollection_Array1<gp_Pnt> & ) ) static_cast<void (BRepGProp_MeshCinert::*)(  const NCollection_Array1<gp_Pnt> & ) >(&BRepGProp_MeshCinert::Perform),
             R"#(Computes the global properties of of polylines represented by set of points.)#"  , py::arg("theNodes"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("PreparePolygon_s",
                    (void (*)( const TopoDS_Edge & , opencascade::handle<TColgp_HArray1OfPnt> & ) ) static_cast<void (*)( const TopoDS_Edge & , opencascade::handle<TColgp_HArray1OfPnt> & ) >(&BRepGProp_MeshCinert::PreparePolygon),
                    R"#(Prepare set of 3d points on base of any available edge polygons: 3D polygon, polygon on triangulation, 2d polygon on surface If edge has no polygons, array thePolyg is left unchanged)#"  , py::arg("theE"),  py::arg("thePolyg"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_MeshProps , shared_ptr<BRepGProp_MeshProps> , GProp_GProps>>(m.attr("BRepGProp_MeshProps"))
    // constructors
        .def(py::init< const BRepGProp_MeshProps::BRepGProp_MeshObjType >()  , py::arg("theType") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_MeshProps::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_MeshProps::*)( const gp_Pnt & ) >(&BRepGProp_MeshProps::SetLocation),
             R"#(Sets the point relative which the calculation is to be done)#"  , py::arg("theLocation"))
        .def("Perform",
             (void (BRepGProp_MeshProps::*)( const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & , const TopAbs_Orientation ) ) static_cast<void (BRepGProp_MeshProps::*)( const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & , const TopAbs_Orientation ) >(&BRepGProp_MeshProps::Perform),
             R"#(Computes the global properties of a surface mesh of 3D space. Calculation of surface properties is performed by numerical integration over triangle surfaces using Gauss cubature formulas. Depending on the mesh object type used in constructor this method can calculate the surface or volume properties of the mesh.)#"  , py::arg("theMesh"),  py::arg("theLoc"),  py::arg("theOri"))
        .def("Perform",
             (void (BRepGProp_MeshProps::*)(  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Poly_Triangle> & , const TopAbs_Orientation ) ) static_cast<void (BRepGProp_MeshProps::*)(  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Poly_Triangle> & , const TopAbs_Orientation ) >(&BRepGProp_MeshProps::Perform),
             R"#(None)#"  , py::arg("theNodes"),  py::arg("theTriangles"),  py::arg("theOri"))
        .def("GetMeshObjType",
             (BRepGProp_MeshProps::BRepGProp_MeshObjType (BRepGProp_MeshProps::*)() const) static_cast<BRepGProp_MeshProps::BRepGProp_MeshObjType (BRepGProp_MeshProps::*)() const>(&BRepGProp_MeshProps::GetMeshObjType),
             R"#(Get type of mesh object)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CalculateProps_s",
                    (void (*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , const Standard_Boolean , Standard_Real [10] , const Standard_Integer , const Standard_Real * ) ) static_cast<void (*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , const Standard_Boolean , Standard_Real [10] , const Standard_Integer , const Standard_Real * ) >(&BRepGProp_MeshProps::CalculateProps),
                    R"#(Computes the global properties of triangle {p1, p2, p3} relatively point Apex If isVolume = true, volume properties are calculated otherwise - surface ones)#"  , py::arg("p1"),  py::arg("p2"),  py::arg("p3"),  py::arg("Apex"),  py::arg("isVolume"),  py::arg("GProps"),  py::arg("NbGaussPoints"),  py::arg("GaussPnts"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Sinert , shared_ptr<BRepGProp_Sinert> , GProp_GProps>>(m.attr("BRepGProp_Sinert"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const BRepGProp_Face &,const gp_Pnt & >()  , py::arg("S"),  py::arg("SLocation") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt & >()  , py::arg("S"),  py::arg("D"),  py::arg("SLocation") )
        .def(py::init< BRepGProp_Face &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("SLocation"),  py::arg("Eps") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("D"),  py::arg("SLocation"),  py::arg("Eps") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_Sinert::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_Sinert::*)( const gp_Pnt & ) >(&BRepGProp_Sinert::SetLocation),
             R"#(None)#"  , py::arg("SLocation"))
        .def("Perform",
             (void (BRepGProp_Sinert::*)( const BRepGProp_Face & ) ) static_cast<void (BRepGProp_Sinert::*)( const BRepGProp_Face & ) >(&BRepGProp_Sinert::Perform),
             R"#(None)#"  , py::arg("S"))
        .def("Perform",
             (void (BRepGProp_Sinert::*)( BRepGProp_Face & , BRepGProp_Domain & ) ) static_cast<void (BRepGProp_Sinert::*)( BRepGProp_Face & , BRepGProp_Domain & ) >(&BRepGProp_Sinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"))
        .def("Perform",
             (Standard_Real (BRepGProp_Sinert::*)( BRepGProp_Face & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Sinert::*)( BRepGProp_Face & , const Standard_Real ) >(&BRepGProp_Sinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Eps"))
        .def("Perform",
             (Standard_Real (BRepGProp_Sinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Sinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const Standard_Real ) >(&BRepGProp_Sinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"),  py::arg("Eps"))
        .def("GetEpsilon",
             (Standard_Real (BRepGProp_Sinert::*)() ) static_cast<Standard_Real (BRepGProp_Sinert::*)() >(&BRepGProp_Sinert::GetEpsilon),
             R"#(If previously used method contained Eps parameter get actual relative error of the computation, else return 1.0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_TFunction , shared_ptr<BRepGProp_TFunction> , math_Function>>(m.attr("BRepGProp_TFunction"))
    // constructors
        .def(py::init< const BRepGProp_Face &,const gp_Pnt &,const Standard_Boolean,const Standard_Address,const Standard_Real,const Standard_Real >()  , py::arg("theSurface"),  py::arg("theVertex"),  py::arg("IsByPoint"),  py::arg("theCoeffs"),  py::arg("theUMin"),  py::arg("theTolerance") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepGProp_TFunction::*)() ) static_cast<void (BRepGProp_TFunction::*)() >(&BRepGProp_TFunction::Init),
             R"#(None)#" )
        .def("SetNbKronrodPoints",
             (void (BRepGProp_TFunction::*)( const Standard_Integer ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Integer ) >(&BRepGProp_TFunction::SetNbKronrodPoints),
             R"#(Setting the expected number of Kronrod points for the outer integral computation. This number is required for computation of a value of tolerance for inner integral computation. After GetStateNumber method call, this number is recomputed by the same law as in math_KronrodSingleIntegration, i.e. next number of points is equal to the current number plus a square root of the current number. If the law in math_KronrodSingleIntegration is changed, the modification algo should be modified accordingly.)#"  , py::arg("theNbPoints"))
        .def("SetValueType",
             (void (BRepGProp_TFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_TFunction::*)( const GProp_ValueType ) >(&BRepGProp_TFunction::SetValueType),
             R"#(Setting the type of the value to be returned. This parameter is directly passed to the UFunction.)#"  , py::arg("aType"))
        .def("SetTolerance",
             (void (BRepGProp_TFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Real ) >(&BRepGProp_TFunction::SetTolerance),
             R"#(Setting the tolerance for inner integration)#"  , py::arg("aTol"))
        .def("ErrorReached",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::ErrorReached),
             R"#(Returns the relative reached error of all values computation since the last call of GetStateNumber method.)#" )
        .def("AbsolutError",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::AbsolutError),
             R"#(Returns the absolut reached error of all values computation since the last call of GetStateNumber method.)#" )
        .def("Value",
             (Standard_Boolean (BRepGProp_TFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (BRepGProp_TFunction::*)( const Standard_Real , Standard_Real & ) >(&BRepGProp_TFunction::Value),
             R"#(Returns a value of the function. The value represents an integral of UFunction. It is computed with the predefined tolerance using the adaptive Gauss-Kronrod method.)#"  , py::arg("X"),  py::arg("F"))
        .def("GetStateNumber",
             (Standard_Integer (BRepGProp_TFunction::*)() ) static_cast<Standard_Integer (BRepGProp_TFunction::*)() >(&BRepGProp_TFunction::GetStateNumber),
             R"#(Redefined method. Remembers the error reached during computation of integral values since the object creation or the last call of GetStateNumber. It is invoked in each algorithm from the package math. Particularly in the algorithm math_KronrodSingleIntegration that is used to compute the integral of TFunction.)#" )
        .def("SetNbKronrodPoints",
             (void (BRepGProp_TFunction::*)( const Standard_Integer ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Integer ) >(&BRepGProp_TFunction::SetNbKronrodPoints),
             R"#(Setting the expected number of Kronrod points for the outer integral computation. This number is required for computation of a value of tolerance for inner integral computation. After GetStateNumber method call, this number is recomputed by the same law as in math_KronrodSingleIntegration, i.e. next number of points is equal to the current number plus a square root of the current number. If the law in math_KronrodSingleIntegration is changed, the modification algo should be modified accordingly.)#"  , py::arg("theNbPoints"))
        .def("SetValueType",
             (void (BRepGProp_TFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_TFunction::*)( const GProp_ValueType ) >(&BRepGProp_TFunction::SetValueType),
             R"#(Setting the type of the value to be returned. This parameter is directly passed to the UFunction.)#"  , py::arg("theType"))
        .def("SetTolerance",
             (void (BRepGProp_TFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_TFunction::*)( const Standard_Real ) >(&BRepGProp_TFunction::SetTolerance),
             R"#(Setting the tolerance for inner integration)#"  , py::arg("theTolerance"))
        .def("ErrorReached",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::ErrorReached),
             R"#(Returns the relative reached error of all values computation since the last call of GetStateNumber method.)#" )
        .def("AbsolutError",
             (Standard_Real (BRepGProp_TFunction::*)() const) static_cast<Standard_Real (BRepGProp_TFunction::*)() const>(&BRepGProp_TFunction::AbsolutError),
             R"#(Returns the absolut reached error of all values computation since the last call of GetStateNumber method.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_UFunction , shared_ptr<BRepGProp_UFunction> , math_Function>>(m.attr("BRepGProp_UFunction"))
    // constructors
        .def(py::init< const BRepGProp_Face &,const gp_Pnt &,const Standard_Boolean,const Standard_Address >()  , py::arg("theSurface"),  py::arg("theVertex"),  py::arg("IsByPoint"),  py::arg("theCoeffs") )
    // custom constructors
    // methods
        .def("SetValueType",
             (void (BRepGProp_UFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_UFunction::*)( const GProp_ValueType ) >(&BRepGProp_UFunction::SetValueType),
             R"#(Setting the type of the value to be returned.)#"  , py::arg("theType"))
        .def("SetVParam",
             (void (BRepGProp_UFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_UFunction::*)( const Standard_Real ) >(&BRepGProp_UFunction::SetVParam),
             R"#(Setting the V parameter that is constant during the integral computation.)#"  , py::arg("theVParam"))
        .def("Value",
             (Standard_Boolean (BRepGProp_UFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (BRepGProp_UFunction::*)( const Standard_Real , Standard_Real & ) >(&BRepGProp_UFunction::Value),
             R"#(Returns a value of the function.)#"  , py::arg("X"),  py::arg("F"))
        .def("SetValueType",
             (void (BRepGProp_UFunction::*)( const GProp_ValueType ) ) static_cast<void (BRepGProp_UFunction::*)( const GProp_ValueType ) >(&BRepGProp_UFunction::SetValueType),
             R"#(Setting the type of the value to be returned.)#"  , py::arg("theType"))
        .def("SetVParam",
             (void (BRepGProp_UFunction::*)( const Standard_Real ) ) static_cast<void (BRepGProp_UFunction::*)( const Standard_Real ) >(&BRepGProp_UFunction::SetVParam),
             R"#(Setting the V parameter that is constant during the integral computation.)#"  , py::arg("theVParam"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_Vinert , shared_ptr<BRepGProp_Vinert> , GProp_GProps>>(m.attr("BRepGProp_Vinert"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const BRepGProp_Face &,const gp_Pnt & >()  , py::arg("S"),  py::arg("VLocation") )
        .def(py::init< BRepGProp_Face &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("VLocation"),  py::arg("Eps") )
        .def(py::init< const BRepGProp_Face &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("S"),  py::arg("O"),  py::arg("VLocation") )
        .def(py::init< BRepGProp_Face &,const gp_Pnt &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("O"),  py::arg("VLocation"),  py::arg("Eps") )
        .def(py::init< const BRepGProp_Face &,const gp_Pln &,const gp_Pnt & >()  , py::arg("S"),  py::arg("Pl"),  py::arg("VLocation") )
        .def(py::init< BRepGProp_Face &,const gp_Pln &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("Pl"),  py::arg("VLocation"),  py::arg("Eps") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt & >()  , py::arg("S"),  py::arg("D"),  py::arg("VLocation") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("D"),  py::arg("VLocation"),  py::arg("Eps") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("S"),  py::arg("D"),  py::arg("O"),  py::arg("VLocation") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("D"),  py::arg("O"),  py::arg("VLocation"),  py::arg("Eps") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pln &,const gp_Pnt & >()  , py::arg("S"),  py::arg("D"),  py::arg("Pl"),  py::arg("VLocation") )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pln &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("D"),  py::arg("Pl"),  py::arg("VLocation"),  py::arg("Eps") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_Vinert::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_Vinert::*)( const gp_Pnt & ) >(&BRepGProp_Vinert::SetLocation),
             R"#(None)#"  , py::arg("VLocation"))
        .def("Perform",
             (void (BRepGProp_Vinert::*)( const BRepGProp_Face & ) ) static_cast<void (BRepGProp_Vinert::*)( const BRepGProp_Face & ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"))
        .def("Perform",
             (Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , const Standard_Real ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Eps"))
        .def("Perform",
             (void (BRepGProp_Vinert::*)( const BRepGProp_Face & , const gp_Pnt & ) ) static_cast<void (BRepGProp_Vinert::*)( const BRepGProp_Face & , const gp_Pnt & ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("O"))
        .def("Perform",
             (Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , const gp_Pnt & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , const gp_Pnt & , const Standard_Real ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("O"),  py::arg("Eps"))
        .def("Perform",
             (void (BRepGProp_Vinert::*)( const BRepGProp_Face & , const gp_Pln & ) ) static_cast<void (BRepGProp_Vinert::*)( const BRepGProp_Face & , const gp_Pln & ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Pl"))
        .def("Perform",
             (Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , const gp_Pln & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , const gp_Pln & , const Standard_Real ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Pl"),  py::arg("Eps"))
        .def("Perform",
             (void (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & ) ) static_cast<void (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"))
        .def("Perform",
             (Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const Standard_Real ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"),  py::arg("Eps"))
        .def("Perform",
             (void (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pnt & ) ) static_cast<void (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pnt & ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"),  py::arg("O"))
        .def("Perform",
             (Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pnt & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pnt & , const Standard_Real ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"),  py::arg("O"),  py::arg("Eps"))
        .def("Perform",
             (void (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pln & ) ) static_cast<void (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pln & ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"),  py::arg("Pl"))
        .def("Perform",
             (Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pln & , const Standard_Real ) ) static_cast<Standard_Real (BRepGProp_Vinert::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pln & , const Standard_Real ) >(&BRepGProp_Vinert::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("D"),  py::arg("Pl"),  py::arg("Eps"))
        .def("GetEpsilon",
             (Standard_Real (BRepGProp_Vinert::*)() ) static_cast<Standard_Real (BRepGProp_Vinert::*)() >(&BRepGProp_Vinert::GetEpsilon),
             R"#(If previously used methods containe Eps parameter gets actual relative error of the computation, else returns 1.0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepGProp_VinertGK , shared_ptr<BRepGProp_VinertGK> , GProp_GProps>>(m.attr("BRepGProp_VinertGK"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< BRepGProp_Face &,const gp_Pnt &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theSurface"),  py::arg("theLocation"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< BRepGProp_Face &,const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theSurface"),  py::arg("thePoint"),  py::arg("theLocation"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theSurface"),  py::arg("theDomain"),  py::arg("theLocation"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theSurface"),  py::arg("theDomain"),  py::arg("thePoint"),  py::arg("theLocation"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< BRepGProp_Face &,const gp_Pln &,const gp_Pnt &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theSurface"),  py::arg("thePlane"),  py::arg("theLocation"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< BRepGProp_Face &,BRepGProp_Domain &,const gp_Pln &,const gp_Pnt &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theSurface"),  py::arg("theDomain"),  py::arg("thePlane"),  py::arg("theLocation"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepGProp_VinertGK::*)( const gp_Pnt & ) ) static_cast<void (BRepGProp_VinertGK::*)( const gp_Pnt & ) >(&BRepGProp_VinertGK::SetLocation),
             R"#(Sets the vertex that delimit 3D closed region of space.)#"  , py::arg("theLocation"))
        .def("Perform",
             (Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp_VinertGK::Perform),
             R"#(Computes the global properties of a region of 3D space delimited with the naturally restricted surface and the point VLocation.)#"  , py::arg("theSurface"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , const gp_Pnt & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , const gp_Pnt & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp_VinertGK::Perform),
             R"#(Computes the global properties of a region of 3D space delimited with the naturally restricted surface and the point VLocation. The inertia is computed with respect to thePoint.)#"  , py::arg("theSurface"),  py::arg("thePoint"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , BRepGProp_Domain & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , BRepGProp_Domain & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp_VinertGK::Perform),
             R"#(Computes the global properties of a region of 3D space delimited with the surface bounded by the domain and the point VLocation.)#"  , py::arg("theSurface"),  py::arg("theDomain"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pnt & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pnt & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp_VinertGK::Perform),
             R"#(Computes the global properties of a region of 3D space delimited with the surface bounded by the domain and the point VLocation. The inertia is computed with respect to thePoint.)#"  , py::arg("theSurface"),  py::arg("theDomain"),  py::arg("thePoint"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp_VinertGK::Perform),
             R"#(Computes the global properties of a region of 3D space delimited with the naturally restricted surface and the plane.)#"  , py::arg("theSurface"),  py::arg("thePlane"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Real (BRepGProp_VinertGK::*)( BRepGProp_Face & , BRepGProp_Domain & , const gp_Pln & , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&BRepGProp_VinertGK::Perform),
             R"#(Computes the global properties of a region of 3D space delimited with the surface bounded by the domain and the plane.)#"  , py::arg("theSurface"),  py::arg("theDomain"),  py::arg("thePlane"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.001),  py::arg("theCGFlag")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIFlag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("GetErrorReached",
             (Standard_Real (BRepGProp_VinertGK::*)() const) static_cast<Standard_Real (BRepGProp_VinertGK::*)() const>(&BRepGProp_VinertGK::GetErrorReached),
             R"#(Returns the relative reached computation error.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BRepGProp_TFunction.hxx
// ./opencascade\BRepGProp_Domain.hxx
// ./opencascade\BRepGProp_EdgeTool.hxx
// ./opencascade\BRepGProp_VinertGK.hxx
// ./opencascade\BRepGProp_UFunction.hxx
// ./opencascade\BRepGProp_Vinert.hxx
// ./opencascade\BRepGProp_Cinert.hxx
// ./opencascade\BRepGProp_Face.hxx
// ./opencascade\BRepGProp.hxx
// ./opencascade\BRepGProp_Sinert.hxx
// ./opencascade\BRepGProp_MeshCinert.hxx
// ./opencascade\BRepGProp_MeshProps.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
