
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Msg.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <Message_ProgressIndicator.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <ShapeCustom_Surface.hxx>
#include <ShapeCustom_Curve.hxx>
#include <ShapeCustom_Curve2d.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <ShapeCustom_Modification.hxx>
#include <ShapeCustom_DirectModification.hxx>
#include <ShapeCustom_TrsfModification.hxx>
#include <ShapeCustom_BSplineRestriction.hxx>
#include <ShapeCustom_ConvertToRevolution.hxx>
#include <ShapeCustom_SweptToElementary.hxx>
#include <ShapeCustom_ConvertToBSpline.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ShapeCustom.hxx>
#include <ShapeCustom_BSplineRestriction.hxx>
#include <ShapeCustom_ConvertToBSpline.hxx>
#include <ShapeCustom_ConvertToRevolution.hxx>
#include <ShapeCustom_Curve.hxx>
#include <ShapeCustom_Curve2d.hxx>
#include <ShapeCustom_DirectModification.hxx>
#include <ShapeCustom_Modification.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <ShapeCustom_Surface.hxx>
#include <ShapeCustom_SweptToElementary.hxx>
#include <ShapeCustom_TrsfModification.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeCustom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeCustom"));


//Python trampoline classes
    class Py_ShapeCustom_Modification : public ShapeCustom_Modification{
    public:
        using ShapeCustom_Modification::ShapeCustom_Modification;


        // public pure virtual

        Standard_Boolean NewSurface(const TopoDS_Face & F,opencascade::handle<Geom_Surface> & S,TopLoc_Location & L,Standard_Real & Tol,Standard_Boolean & RevWires,Standard_Boolean & RevFace) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewSurface,F,S,L,Tol,RevWires,RevFace) };
        Standard_Boolean NewCurve(const TopoDS_Edge & E,opencascade::handle<Geom_Curve> & C,TopLoc_Location & L,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewCurve,E,C,L,Tol) };
        Standard_Boolean NewPoint(const TopoDS_Vertex & V,gp_Pnt & P,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewPoint,V,P,Tol) };
        Standard_Boolean NewCurve2d(const TopoDS_Edge & E,const TopoDS_Face & F,const TopoDS_Edge & NewE,const TopoDS_Face & NewF,opencascade::handle<Geom2d_Curve> & C,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewCurve2d,E,F,NewE,NewF,C,Tol) };
        Standard_Boolean NewParameter(const TopoDS_Vertex & V,const TopoDS_Edge & E,Standard_Real & P,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewParameter,V,E,P,Tol) };
        GeomAbs_Shape Continuity(const TopoDS_Edge & E,const TopoDS_Face & F1,const TopoDS_Face & F2,const TopoDS_Edge & NewE,const TopoDS_Face & NewF1,const TopoDS_Face & NewF2) override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,BRepTools_Modification,Continuity,E,F1,F2,NewE,NewF1,NewF2) };

        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<ShapeCustom , shared_ptr<ShapeCustom>>(m,"ShapeCustom");

    static_cast<py::class_<ShapeCustom , shared_ptr<ShapeCustom> >>(m.attr("ShapeCustom"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_Curve , shared_ptr<ShapeCustom_Curve> >>(m.attr("ShapeCustom_Curve"))
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
    register_default_constructor<ShapeCustom_Curve2d , shared_ptr<ShapeCustom_Curve2d>>(m,"ShapeCustom_Curve2d");

    static_cast<py::class_<ShapeCustom_Curve2d , shared_ptr<ShapeCustom_Curve2d> >>(m.attr("ShapeCustom_Curve2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_Modification ,opencascade::handle<ShapeCustom_Modification>,Py_ShapeCustom_Modification , BRepTools_Modification>>(m.attr("ShapeCustom_Modification"))
    // constructors
    // custom constructors
    // methods
        .def("SetMsgRegistrator",
             (void (ShapeCustom_Modification::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<void (ShapeCustom_Modification::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeCustom_Modification::SetMsgRegistrator),
             R"#(Sets message registrator)#"  , py::arg("msgreg"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_Modification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_Modification::*)() const>(&ShapeCustom_Modification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_Modification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_RestrictionParameters ,opencascade::handle<ShapeCustom_RestrictionParameters> , Standard_Transient>>(m.attr("ShapeCustom_RestrictionParameters"))
    // constructors
    // custom constructors
    // methods
        .def("GMaxDegree",
             (Standard_Integer & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Integer & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::GMaxDegree),
             R"#(Returns (modifiable) maximal degree of approximation.)#" )
        .def("GMaxSeg",
             (Standard_Integer & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Integer & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::GMaxSeg),
             R"#(Returns (modifiable) maximal number of spans of approximation.)#" )
        .def("ConvertPlane",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertPlane),
             R"#(Sets flag for define if Plane converted to BSpline surface.)#" )
        .def("ConvertBezierSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertBezierSurf),
             R"#(Sets flag for define if Bezier surface converted to BSpline surface.)#" )
        .def("ConvertRevolutionSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertRevolutionSurf),
             R"#(Sets flag for define if surface of Revolution converted to BSpline surface.)#" )
        .def("ConvertExtrusionSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertExtrusionSurf),
             R"#(Sets flag for define if surface of LinearExtrusion converted to BSpline surface.)#" )
        .def("ConvertOffsetSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertOffsetSurf),
             R"#(Sets flag for define if Offset surface converted to BSpline surface.)#" )
        .def("ConvertCylindricalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertCylindricalSurf),
             R"#(Sets flag for define if cylindrical surface converted to BSpline surface.)#" )
        .def("ConvertConicalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertConicalSurf),
             R"#(Sets flag for define if conical surface converted to BSpline surface.)#" )
        .def("ConvertToroidalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertToroidalSurf),
             R"#(Sets flag for define if toroidal surface converted to BSpline surface.)#" )
        .def("ConvertSphericalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertSphericalSurf),
             R"#(Sets flag for define if spherical surface converted to BSpline surface.)#" )
        .def("SegmentSurfaceMode",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::SegmentSurfaceMode),
             R"#(Sets Segment mode for surface. If Segment is True surface is approximated in the bondaries of face lying on this surface.)#" )
        .def("ConvertCurve3d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertCurve3d),
             R"#(Sets flag for define if 3d curve converted to BSpline curve.)#" )
        .def("ConvertOffsetCurv3d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertOffsetCurv3d),
             R"#(Sets flag for define if Offset curve3d converted to BSpline surface.)#" )
        .def("ConvertCurve2d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertCurve2d),
             R"#(Returns (modifiable) flag for define if 2d curve converted to BSpline curve.)#" )
        .def("ConvertOffsetCurv2d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertOffsetCurv2d),
             R"#(Returns (modifiable) flag for define if Offset curve2d converted to BSpline surface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_RestrictionParameters::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_RestrictionParameters::*)() const>(&ShapeCustom_RestrictionParameters::DynamicType),
             R"#(None)#" )
        .def("GMaxDegree",
             (Standard_Integer & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Integer & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::GMaxDegree),
             R"#(Returns (modifiable) maximal degree of approximation.)#" )
        .def("GMaxSeg",
             (Standard_Integer & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Integer & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::GMaxSeg),
             R"#(Returns (modifiable) maximal number of spans of approximation.)#" )
        .def("ConvertPlane",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertPlane),
             R"#(Sets flag for define if Plane converted to BSpline surface.)#" )
        .def("ConvertBezierSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertBezierSurf),
             R"#(Sets flag for define if Bezier surface converted to BSpline surface.)#" )
        .def("ConvertRevolutionSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertRevolutionSurf),
             R"#(Sets flag for define if surface of Revolution converted to BSpline surface.)#" )
        .def("ConvertExtrusionSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertExtrusionSurf),
             R"#(Sets flag for define if surface of LinearExtrusion converted to BSpline surface.)#" )
        .def("ConvertOffsetSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertOffsetSurf),
             R"#(Sets flag for define if Offset surface converted to BSpline surface.)#" )
        .def("SegmentSurfaceMode",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::SegmentSurfaceMode),
             R"#(Sets Segment mode for surface. If Segment is True surface is approximated in the bondaries of face lying on this surface.)#" )
        .def("ConvertCurve3d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertCurve3d),
             R"#(Sets flag for define if 3d curve converted to BSpline curve.)#" )
        .def("ConvertOffsetCurv3d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertOffsetCurv3d),
             R"#(Sets flag for define if Offset curve3d converted to BSpline surface.)#" )
        .def("ConvertCurve2d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertCurve2d),
             R"#(Returns (modifiable) flag for define if 2d curve converted to BSpline curve.)#" )
        .def("ConvertOffsetCurv2d",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertOffsetCurv2d),
             R"#(Returns (modifiable) flag for define if Offset curve2d converted to BSpline surface.)#" )
        .def("ConvertConicalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertConicalSurf),
             R"#(Sets flag for define if conical surface converted to BSpline surface.)#" )
        .def("ConvertSphericalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertSphericalSurf),
             R"#(Sets flag for define if spherical surface converted to BSpline surface.)#" )
        .def("ConvertToroidalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertToroidalSurf),
             R"#(Sets flag for define if toroidal surface converted to BSpline surface.)#" )
        .def("ConvertCylindricalSurf",
             (Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() ) static_cast<Standard_Boolean & (ShapeCustom_RestrictionParameters::*)() >(&ShapeCustom_RestrictionParameters::ConvertCylindricalSurf),
             R"#(Sets flag for define if cylindrical surface converted to BSpline surface.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_RestrictionParameters::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_Surface , shared_ptr<ShapeCustom_Surface> >>(m.attr("ShapeCustom_Surface"))
    // constructors
    // custom constructors
    // methods
        .def("Gap",
             (Standard_Real (ShapeCustom_Surface::*)() const) static_cast<Standard_Real (ShapeCustom_Surface::*)() const>(&ShapeCustom_Surface::Gap),
             R"#(Returns maximal deviation of converted surface from the original one computed by last call to ConvertToAnalytical)#" )
        .def("Gap",
             (Standard_Real (ShapeCustom_Surface::*)() const) static_cast<Standard_Real (ShapeCustom_Surface::*)() const>(&ShapeCustom_Surface::Gap),
             R"#(Returns maximal deviation of converted surface from the original one computed by last call to ConvertToAnalytical)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_TrsfModification ,opencascade::handle<ShapeCustom_TrsfModification> , BRepTools_TrsfModification>>(m.attr("ShapeCustom_TrsfModification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&ShapeCustom_TrsfModification::NewSurface),
             R"#(Calls inherited method. Sets <Tol> as actual tolerance of <F> multiplied with scale factor.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&ShapeCustom_TrsfModification::NewCurve),
             R"#(Calls inherited method. Sets <Tol> as actual tolerance of <E> multiplied with scale factor.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&ShapeCustom_TrsfModification::NewPoint),
             R"#(Calls inherited method. Sets <Tol> as actual tolerance of <V> multiplied with scale factor.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&ShapeCustom_TrsfModification::NewCurve2d),
             R"#(Calls inherited method. Sets <Tol> as actual tolerance of <E> multiplied with scale factor.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_TrsfModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&ShapeCustom_TrsfModification::NewParameter),
             R"#(Calls inherited method. Sets <Tol> as actual tolerance of <V> multiplied with scale factor.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_TrsfModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_TrsfModification::*)() const>(&ShapeCustom_TrsfModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_TrsfModification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_BSplineRestriction ,opencascade::handle<ShapeCustom_BSplineRestriction> , ShapeCustom_Modification>>(m.attr("ShapeCustom_BSplineRestriction"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&ShapeCustom_BSplineRestriction::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&ShapeCustom_BSplineRestriction::NewCurve),
             R"#(Returns Standard_True if curve from the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_True if Surface is modified or one of pcurves of edge is modified. In this case C is copy of geometric support of the edge. In other cases returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&ShapeCustom_BSplineRestriction::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case,if curve on the surface is modified, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. If curve on the surface is not modified C is copy curve on surface from the edge <E>.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("SetTol3d",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) >(&ShapeCustom_BSplineRestriction::SetTol3d),
             R"#(Sets tolerance of aproximation for curve3d and surface)#"  , py::arg("Tol3d"))
        .def("SetTol2d",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) >(&ShapeCustom_BSplineRestriction::SetTol2d),
             R"#(Sets tolerance of aproximation for curve2d)#"  , py::arg("Tol2d"))
        .def("ModifyApproxSurfaceFlag",
             (Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() ) static_cast<Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() >(&ShapeCustom_BSplineRestriction::ModifyApproxSurfaceFlag),
             R"#(Returns (modifiable) the flag which defines whether the surface is aproximated.)#" )
        .def("ModifyApproxCurve3dFlag",
             (Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() ) static_cast<Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() >(&ShapeCustom_BSplineRestriction::ModifyApproxCurve3dFlag),
             R"#(Returns (modifiable) the flag which defines whether the curve3d is aproximated.)#" )
        .def("ModifyApproxCurve2dFlag",
             (Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() ) static_cast<Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() >(&ShapeCustom_BSplineRestriction::ModifyApproxCurve2dFlag),
             R"#(Returns (modifiable) the flag which defines whether the curve2d is aproximated.)#" )
        .def("SetContinuity3d",
             (void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) >(&ShapeCustom_BSplineRestriction::SetContinuity3d),
             R"#(Sets continuity3d for aproximation curve3d and surface.)#"  , py::arg("Continuity3d"))
        .def("SetContinuity2d",
             (void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) >(&ShapeCustom_BSplineRestriction::SetContinuity2d),
             R"#(Sets continuity3d for aproximation curve2d.)#"  , py::arg("Continuity2d"))
        .def("SetMaxDegree",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) >(&ShapeCustom_BSplineRestriction::SetMaxDegree),
             R"#(Sets max degree for aproximation.)#"  , py::arg("MaxDegree"))
        .def("SetMaxNbSegments",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) >(&ShapeCustom_BSplineRestriction::SetMaxNbSegments),
             R"#(Sets max number of segments for aproximation.)#"  , py::arg("MaxNbSegments"))
        .def("SetPriority",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) >(&ShapeCustom_BSplineRestriction::SetPriority),
             R"#(Sets priority for aproximation curves and surface. If Degree is True approximation is made with degree less then specified MaxDegree at the expense of number of spanes. If Degree is False approximation is made with number of spans less then specified MaxNbSegment at the expense of specified MaxDegree.)#"  , py::arg("Degree"))
        .def("SetConvRational",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) >(&ShapeCustom_BSplineRestriction::SetConvRational),
             R"#(Sets flag for define if rational BSpline or Bezier is converted to polynomial. If Rational is True approximation for rational BSpline and Bezier is made to polynomial even if degree is less then MaxDegree and number of spans is less then specified MaxNbSegment.)#"  , py::arg("Rational"))
        .def("GetRestrictionParameters",
             (opencascade::handle<ShapeCustom_RestrictionParameters> (ShapeCustom_BSplineRestriction::*)() const) static_cast<opencascade::handle<ShapeCustom_RestrictionParameters> (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::GetRestrictionParameters),
             R"#(Returns the container of modes which defines what geometry should be converted to BSplines.)#" )
        .def("SetRestrictionParameters",
             (void (ShapeCustom_BSplineRestriction::*)( const opencascade::handle<ShapeCustom_RestrictionParameters> & ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const opencascade::handle<ShapeCustom_RestrictionParameters> & ) >(&ShapeCustom_BSplineRestriction::SetRestrictionParameters),
             R"#(Sets the container of modes which defines what geometry should be converted to BSplines.)#"  , py::arg("aModes"))
        .def("Curve3dError",
             (Standard_Real (ShapeCustom_BSplineRestriction::*)() const) static_cast<Standard_Real (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::Curve3dError),
             R"#(Returns error for aproximation curve3d.)#" )
        .def("Curve2dError",
             (Standard_Real (ShapeCustom_BSplineRestriction::*)() const) static_cast<Standard_Real (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::Curve2dError),
             R"#(Returns error for aproximation curve2d.)#" )
        .def("SurfaceError",
             (Standard_Real (ShapeCustom_BSplineRestriction::*)() const) static_cast<Standard_Real (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::SurfaceError),
             R"#(Returns error for aproximation surface.)#" )
        .def("NewPoint",
             (Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&ShapeCustom_BSplineRestriction::NewPoint),
             R"#(None)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_BSplineRestriction::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&ShapeCustom_BSplineRestriction::NewParameter),
             R"#(None)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (ShapeCustom_BSplineRestriction::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (ShapeCustom_BSplineRestriction::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&ShapeCustom_BSplineRestriction::Continuity),
             R"#(None)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_BSplineRestriction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::DynamicType),
             R"#(None)#" )
        .def("SetTol3d",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) >(&ShapeCustom_BSplineRestriction::SetTol3d),
             R"#(Sets tolerance of aproximation for curve3d and surface)#"  , py::arg("Tol3d"))
        .def("SetTol2d",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Real ) >(&ShapeCustom_BSplineRestriction::SetTol2d),
             R"#(Sets tolerance of aproximation for curve2d)#"  , py::arg("Tol2d"))
        .def("ModifyApproxSurfaceFlag",
             (Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() ) static_cast<Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() >(&ShapeCustom_BSplineRestriction::ModifyApproxSurfaceFlag),
             R"#(Returns (modifiable) the flag which defines whether the surface is aproximated.)#" )
        .def("ModifyApproxCurve3dFlag",
             (Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() ) static_cast<Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() >(&ShapeCustom_BSplineRestriction::ModifyApproxCurve3dFlag),
             R"#(Returns (modifiable) the flag which defines whether the curve3d is aproximated.)#" )
        .def("ModifyApproxCurve2dFlag",
             (Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() ) static_cast<Standard_Boolean & (ShapeCustom_BSplineRestriction::*)() >(&ShapeCustom_BSplineRestriction::ModifyApproxCurve2dFlag),
             R"#(Returns (modifiable) the flag which defines whether the curve2d is aproximated.)#" )
        .def("SetContinuity3d",
             (void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) >(&ShapeCustom_BSplineRestriction::SetContinuity3d),
             R"#(Sets continuity3d for aproximation curve3d and surface.)#"  , py::arg("Continuity3d"))
        .def("SetContinuity2d",
             (void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const GeomAbs_Shape ) >(&ShapeCustom_BSplineRestriction::SetContinuity2d),
             R"#(Sets continuity3d for aproximation curve2d.)#"  , py::arg("Continuity2d"))
        .def("SetMaxDegree",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) >(&ShapeCustom_BSplineRestriction::SetMaxDegree),
             R"#(Sets max degree for aproximation.)#"  , py::arg("MaxDegree"))
        .def("SetMaxNbSegments",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Integer ) >(&ShapeCustom_BSplineRestriction::SetMaxNbSegments),
             R"#(Sets max number of segments for aproximation.)#"  , py::arg("MaxNbSegments"))
        .def("Curve3dError",
             (Standard_Real (ShapeCustom_BSplineRestriction::*)() const) static_cast<Standard_Real (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::Curve3dError),
             R"#(Returns error for aproximation curve3d.)#" )
        .def("Curve2dError",
             (Standard_Real (ShapeCustom_BSplineRestriction::*)() const) static_cast<Standard_Real (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::Curve2dError),
             R"#(Returns error for aproximation curve2d.)#" )
        .def("SurfaceError",
             (Standard_Real (ShapeCustom_BSplineRestriction::*)() const) static_cast<Standard_Real (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::SurfaceError),
             R"#(Returns error for aproximation surface.)#" )
        .def("SetPriority",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) >(&ShapeCustom_BSplineRestriction::SetPriority),
             R"#(Sets priority for aproximation curves and surface. If Degree is True approximation is made with degree less then specified MaxDegree at the expense of number of spanes. If Degree is False approximation is made with number of spans less then specified MaxNbSegment at the expense of specified MaxDegree.)#"  , py::arg("Degree"))
        .def("SetConvRational",
             (void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const Standard_Boolean ) >(&ShapeCustom_BSplineRestriction::SetConvRational),
             R"#(Sets flag for define if rational BSpline or Bezier is converted to polynomial. If Rational is True approximation for rational BSpline and Bezier is made to polynomial even if degree is less then MaxDegree and number of spans is less then specified MaxNbSegment.)#"  , py::arg("Rational"))
        .def("GetRestrictionParameters",
             (opencascade::handle<ShapeCustom_RestrictionParameters> (ShapeCustom_BSplineRestriction::*)() const) static_cast<opencascade::handle<ShapeCustom_RestrictionParameters> (ShapeCustom_BSplineRestriction::*)() const>(&ShapeCustom_BSplineRestriction::GetRestrictionParameters),
             R"#(Returns the container of modes which defines what geometry should be converted to BSplines.)#" )
        .def("SetRestrictionParameters",
             (void (ShapeCustom_BSplineRestriction::*)( const opencascade::handle<ShapeCustom_RestrictionParameters> & ) ) static_cast<void (ShapeCustom_BSplineRestriction::*)( const opencascade::handle<ShapeCustom_RestrictionParameters> & ) >(&ShapeCustom_BSplineRestriction::SetRestrictionParameters),
             R"#(Sets the container of modes which defines what geometry should be converted to BSplines.)#"  , py::arg("aModes"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_BSplineRestriction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_ConvertToBSpline ,opencascade::handle<ShapeCustom_ConvertToBSpline> , ShapeCustom_Modification>>(m.attr("ShapeCustom_ConvertToBSpline"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&ShapeCustom_ConvertToBSpline::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <S>, <L>, <Tol> are not significant.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&ShapeCustom_ConvertToBSpline::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&ShapeCustom_ConvertToBSpline::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&ShapeCustom_ConvertToBSpline::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&ShapeCustom_ConvertToBSpline::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (ShapeCustom_ConvertToBSpline::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&ShapeCustom_ConvertToBSpline::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_ConvertToBSpline::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_ConvertToBSpline::*)() const>(&ShapeCustom_ConvertToBSpline::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_ConvertToBSpline::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_ConvertToRevolution ,opencascade::handle<ShapeCustom_ConvertToRevolution> , ShapeCustom_Modification>>(m.attr("ShapeCustom_ConvertToRevolution"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&ShapeCustom_ConvertToRevolution::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <S>, <L>, <Tol> are not significant.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&ShapeCustom_ConvertToRevolution::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&ShapeCustom_ConvertToRevolution::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&ShapeCustom_ConvertToRevolution::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&ShapeCustom_ConvertToRevolution::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (ShapeCustom_ConvertToRevolution::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&ShapeCustom_ConvertToRevolution::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_ConvertToRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_ConvertToRevolution::*)() const>(&ShapeCustom_ConvertToRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_ConvertToRevolution::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_DirectModification ,opencascade::handle<ShapeCustom_DirectModification> , ShapeCustom_Modification>>(m.attr("ShapeCustom_DirectModification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&ShapeCustom_DirectModification::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <S>, <L>, <Tol> are not significant.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&ShapeCustom_DirectModification::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&ShapeCustom_DirectModification::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&ShapeCustom_DirectModification::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_DirectModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&ShapeCustom_DirectModification::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (ShapeCustom_DirectModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (ShapeCustom_DirectModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&ShapeCustom_DirectModification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_DirectModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_DirectModification::*)() const>(&ShapeCustom_DirectModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_DirectModification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeCustom_SweptToElementary ,opencascade::handle<ShapeCustom_SweptToElementary> , ShapeCustom_Modification>>(m.attr("ShapeCustom_SweptToElementary"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&ShapeCustom_SweptToElementary::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <S>, <L>, <Tol> are not significant.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&ShapeCustom_SweptToElementary::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&ShapeCustom_SweptToElementary::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&ShapeCustom_SweptToElementary::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeCustom_SweptToElementary::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&ShapeCustom_SweptToElementary::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (ShapeCustom_SweptToElementary::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (ShapeCustom_SweptToElementary::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&ShapeCustom_SweptToElementary::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeCustom_SweptToElementary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeCustom_SweptToElementary::*)() const>(&ShapeCustom_SweptToElementary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeCustom_SweptToElementary::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeCustom_Modification.hxx
// ./opencascade/ShapeCustom.hxx
// ./opencascade/ShapeCustom_Surface.hxx
// ./opencascade/ShapeCustom_SweptToElementary.hxx
// ./opencascade/ShapeCustom_DirectModification.hxx
// ./opencascade/ShapeCustom_BSplineRestriction.hxx
// ./opencascade/ShapeCustom_RestrictionParameters.hxx
// ./opencascade/ShapeCustom_Curve.hxx
// ./opencascade/ShapeCustom_TrsfModification.hxx
// ./opencascade/ShapeCustom_ConvertToBSpline.hxx
// ./opencascade/ShapeCustom_Curve2d.hxx
// ./opencascade/ShapeCustom_ConvertToRevolution.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
