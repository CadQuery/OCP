
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_IntConicCurveOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <IntCurve_IConicTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <IntRes2d_Domain.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <IntRes2d_Domain.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <gp_Pnt2d.hxx>

// module includes
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_GInter.hxx>
#include <Geom2dInt_IntConicCurveOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_TheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dInt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dInt"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter , shared_ptr<Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter> >>(m.attr("Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter"))
    // constructors
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::Perform),
             R"#(None)#"  , py::arg("Uo"),  py::arg("Vo"),  py::arg("UInf"),  py::arg("VInf"),  py::arg("USup"),  py::arg("VSup"))
        .def("NbRoots",
             (Standard_Integer (Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Integer (Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::NbRoots),
             R"#(None)#" )
        .def("AnErrorOccurred",
             (Standard_Boolean (Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Boolean (Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter::AnErrorOccurred),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Perform",
             []( Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter &self , const Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter & Poly1,const Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter & Poly2 ){ Standard_Integer  NumSegOn1; Standard_Integer  NumSegOn2; Standard_Real  ParamOnSeg1; Standard_Real  ParamOnSeg2; self.Perform(Poly1,Poly2,NumSegOn1,NumSegOn2,ParamOnSeg1,ParamOnSeg2); return std::make_tuple(NumSegOn1,NumSegOn2,ParamOnSeg1,ParamOnSeg2); },
             R"#(None)#"  , py::arg("Poly1"),  py::arg("Poly2"))
        .def("Roots",
             []( Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter &self   ){ Standard_Real  U; Standard_Real  V; self.Roots(U,V); return std::make_tuple(U,V); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_GInter , shared_ptr<Geom2dInt_GInter> , IntRes2d_Intersection>>(m.attr("Geom2dInt_GInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("D"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_GInter::Perform),
             R"#(Intersection between 2 curves.)#"  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_GInter::Perform),
             R"#(Intersection between 2 curves.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_GInter::Perform),
             R"#(Intersection between 2 curves.)#"  , py::arg("C1"),  py::arg("D1"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_GInter::Perform),
             R"#(Intersection between 2 curves.)#"  , py::arg("C1"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_GInter::Perform),
             R"#(Intersection between 2 curves.)#"  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_GInter::Perform),
             R"#(Intersection between 2 curves.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("ComputeDomain",
             (IntRes2d_Domain (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Standard_Real ) const) static_cast<IntRes2d_Domain (Geom2dInt_GInter::*)( const Adaptor2d_Curve2d & , const Standard_Real ) const>(&Geom2dInt_GInter::ComputeDomain),
             R"#(Create a domain from a curve)#"  , py::arg("C1"),  py::arg("TolDomain"))
        .def("SetMinNbSamples",
             (void (Geom2dInt_GInter::*)( const Standard_Integer ) ) static_cast<void (Geom2dInt_GInter::*)( const Standard_Integer ) >(&Geom2dInt_GInter::SetMinNbSamples),
             R"#(Set / get minimum number of points in polygon intersection.)#"  , py::arg("theMinNbSamples"))
        .def("GetMinNbSamples",
             (Standard_Integer (Geom2dInt_GInter::*)() const) static_cast<Standard_Integer (Geom2dInt_GInter::*)() const>(&Geom2dInt_GInter::GetMinNbSamples),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Geom2dInt_Geom2dCurveTool , shared_ptr<Geom2dInt_Geom2dCurveTool>>(m,"Geom2dInt_Geom2dCurveTool");

    static_cast<py::class_<Geom2dInt_Geom2dCurveTool , shared_ptr<Geom2dInt_Geom2dCurveTool> >>(m.attr("Geom2dInt_Geom2dCurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const Adaptor2d_Curve2d & ) ) static_cast<GeomAbs_CurveType (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::GetType),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Lin2d (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::Line),
                    R"#(Returns the Lin2d from gp corresponding to the curve C. This method is called only when TheType returns GeomAbs_Line.)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Circ2d (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::Circle),
                    R"#(Returns the Circ2d from gp corresponding to the curve C. This method is called only when TheType returns GeomAbs_Circle.)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Elips2d (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::Ellipse),
                    R"#(Returns the Elips2d from gp corresponding to the curve C. This method is called only when TheType returns GeomAbs_Ellipse.)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Parab2d (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::Parabola),
                    R"#(Returns the Parab2d from gp corresponding to the curve C. This method is called only when TheType returns GeomAbs_Parabola.)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const Adaptor2d_Curve2d & ) ) static_cast<gp_Hypr2d (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::Hyperbola),
                    R"#(Returns the Hypr2d from gp corresponding to the curve C. This method is called only when TheType returns GeomAbs_Hyperbola.)#"  , py::arg("C"))
        .def_static("EpsX_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::EpsX),
                    R"#(None)#"  , py::arg("C"))
        .def_static("EpsX_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real ) >(&Geom2dInt_Geom2dCurveTool::EpsX),
                    R"#(None)#"  , py::arg("C"),  py::arg("Eps_XYZ"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::NbSamples),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_Geom2dCurveTool::NbSamples),
                    R"#(None)#"  , py::arg("C"),  py::arg("U0"),  py::arg("U1"))
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Adaptor2d_Curve2d & , const Standard_Real ) ) static_cast<gp_Pnt2d (*)( const Adaptor2d_Curve2d & , const Standard_Real ) >(&Geom2dInt_Geom2dCurveTool::Value),
                    R"#(None)#"  , py::arg("C"),  py::arg("X"))
        .def_static("D0_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & ) >(&Geom2dInt_Geom2dCurveTool::D0),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) >(&Geom2dInt_Geom2dCurveTool::D1),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"))
        .def_static("D2_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&Geom2dInt_Geom2dCurveTool::D2),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"),  py::arg("N"))
        .def_static("D3_s",
                    (void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&Geom2dInt_Geom2dCurveTool::D3),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("T"),  py::arg("N"),  py::arg("V"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Integer ) >(&Geom2dInt_Geom2dCurveTool::DN),
                    R"#(None)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::NbIntervals),
                    R"#(output the number of interval of continuity C2 of the curve)#"  , py::arg("C"))
        .def_static("Intervals_s",
                    (void (*)( const Adaptor2d_Curve2d & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (*)( const Adaptor2d_Curve2d & , NCollection_Array1<Standard_Real> & ) >(&Geom2dInt_Geom2dCurveTool::Intervals),
                    R"#(compute Tab.)#"  , py::arg("C"),  py::arg("Tab"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Integer (*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_Geom2dCurveTool::Degree),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
        .def_static("GetInterval_s",
                    []( const Adaptor2d_Curve2d & C,const Standard_Integer Index, const NCollection_Array1<Standard_Real> & Tab ){ Standard_Real  U1; Standard_Real  U2; Geom2dInt_Geom2dCurveTool::GetInterval(C,Index,Tab,U1,U2); return std::make_tuple(U1,U2); },
                    R"#(output the bounds of interval of index <Index> used if Type == Composite.)#"  , py::arg("C"),  py::arg("Index"),  py::arg("Tab"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_IntConicCurveOfGInter , shared_ptr<Geom2dInt_IntConicCurveOfGInter> , IntRes2d_Intersection>>(m.attr("Geom2dInt_IntConicCurveOfGInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Circ2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Elips2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("E"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Parab2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("Prb"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Hypr2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("H"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Lin2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Lin2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_IntConicCurveOfGInter::Perform),
             R"#(Intersection between a line and a parametric curve.)#"  , py::arg("L"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Circ2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Circ2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_IntConicCurveOfGInter::Perform),
             R"#(Intersection between a line and a parametric curve.)#"  , py::arg("C"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Elips2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Elips2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_IntConicCurveOfGInter::Perform),
             R"#(Intersection between an ellipse and a parametric curve.)#"  , py::arg("E"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Parab2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Parab2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_IntConicCurveOfGInter::Perform),
             R"#(Intersection between a parabola and a parametric curve.)#"  , py::arg("Prb"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Hypr2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_IntConicCurveOfGInter::*)( const gp_Hypr2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_IntConicCurveOfGInter::Perform),
             R"#(Intersection between the main branch of an hyperbola and a parametric curve.)#"  , py::arg("H"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter , shared_ptr<Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter> , math_FunctionWithDerivative>>(m.attr("Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter"))
    // constructors
        .def(py::init< const IntCurve_IConicTool &,const Adaptor2d_Curve2d & >()  , py::arg("IT"),  py::arg("PC") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , Standard_Real & ) >(&Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::Value),
             R"#(Computes the value of the signed distance between the implicit curve and the point at parameter Param on the parametrised curve.)#"  , py::arg("Param"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , Standard_Real & ) >(&Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::Derivative),
             R"#(Computes the derivative of the previous function at parameter Param.)#"  , py::arg("Param"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter::Values),
             R"#(Computes the value and the derivative of the function.)#"  , py::arg("Param"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter , shared_ptr<Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter> , math_FunctionWithDerivative>>(m.attr("Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d & >()  , py::arg("P"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Adaptor2d_Curve2d & ) ) static_cast<void (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Adaptor2d_Curve2d & ) >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::Initialize),
             R"#(sets the field mycurve of the function.)#"  , py::arg("C"))
        .def("SetPoint",
             (void (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const gp_Pnt2d & ) ) static_cast<void (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const gp_Pnt2d & ) >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::SetPoint),
             R"#(sets the field P of the function.)#"  , py::arg("P"))
        .def("Value",
             (Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , Standard_Real & ) >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , Standard_Real & ) >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)() ) static_cast<Standard_Integer (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)() >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::GetStateNumber),
             R"#(Save the found extremum.)#" )
        .def("NbExt",
             (Standard_Integer (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)() const) static_cast<Standard_Integer (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)() const>(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::NbExt),
             R"#(Return the nunber of found extrema.)#" )
        .def("SquareDistance",
             (Standard_Real (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Integer ) const) static_cast<Standard_Real (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Integer ) const>(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::SquareDistance),
             R"#(Returns the Nth distance.)#"  , py::arg("N"))
        .def("IsMin",
             (Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Integer ) const>(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::IsMin),
             R"#(Shows if the Nth distance is a minimum.)#"  , py::arg("N"))
        .def("Point",
             (const Extrema_POnCurv2d & (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Integer ) const) static_cast<const Extrema_POnCurv2d & (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Integer ) const>(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::Point),
             R"#(Returns the Nth extremum.)#"  , py::arg("N"))
        .def("SubIntervalInitialize",
             (void (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)( const Standard_Real , const Standard_Real ) >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::SubIntervalInitialize),
             R"#(Determines boundaries of subinterval for find of root.)#"  , py::arg("theUfirst"),  py::arg("theUlast"))
        .def("SearchOfTolerance",
             (Standard_Real (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)() ) static_cast<Standard_Real (Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::*)() >(&Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter::SearchOfTolerance),
             R"#(Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter , shared_ptr<Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter>>(m,"Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter");

    static_cast<py::class_<Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter , shared_ptr<Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter> >>(m.attr("Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Locate_s",
                    (void (*)( const gp_Pnt2d & , const Adaptor2d_Curve2d & , const Standard_Integer , Extrema_POnCurv2d & ) ) static_cast<void (*)( const gp_Pnt2d & , const Adaptor2d_Curve2d & , const Standard_Integer , Extrema_POnCurv2d & ) >(&Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter::Locate),
                    R"#(Among a set of points {C(ui),i=1,NbU}, locate the point P=C(uj) such that: distance(P,C) = Min{distance(P,C(ui))})#"  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("Papp"))
        .def_static("Locate_s",
                    (void (*)( const gp_Pnt2d & , const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real , const Standard_Real , Extrema_POnCurv2d & ) ) static_cast<void (*)( const gp_Pnt2d & , const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real , const Standard_Real , Extrema_POnCurv2d & ) >(&Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter::Locate),
                    R"#(Among a set of points {C(ui),i=1,NbU}, locate the point P=C(uj) such that: distance(P,C) = Min{distance(P,C(ui))} The research is done between umin and usup.)#"  , py::arg("P"),  py::arg("C"),  py::arg("NbU"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Papp"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter , shared_ptr<Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter> , math_FunctionSetWithDerivatives>>(m.attr("Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter"))
    // constructors
        .def(py::init< const Adaptor2d_Curve2d &,const Adaptor2d_Curve2d & >()  , py::arg("curve1"),  py::arg("curve2") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Integer (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::NbVariables),
             R"#(returns 2.)#" )
        .def("NbEquations",
             (Standard_Integer (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Integer (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::NbEquations),
             R"#(returns 2.)#" )
        .def("Value",
             (Standard_Boolean (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)( const math_Vector & , math_Vector & ) >(&Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)( const math_Vector & , math_Matrix & ) >(&Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_TheIntConicCurveOfGInter , shared_ptr<Geom2dInt_TheIntConicCurveOfGInter> , IntRes2d_Intersection>>(m.attr("Geom2dInt_TheIntConicCurveOfGInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Circ2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Elips2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("E"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Parab2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("Prb"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
        .def(py::init< const gp_Hypr2d &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("H"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Lin2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Lin2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntConicCurveOfGInter::Perform),
             R"#(Intersection between a line and a parametric curve.)#"  , py::arg("L"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Circ2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Circ2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntConicCurveOfGInter::Perform),
             R"#(Intersection between a line and a parametric curve.)#"  , py::arg("C"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Elips2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Elips2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntConicCurveOfGInter::Perform),
             R"#(Intersection between an ellipse and a parametric curve.)#"  , py::arg("E"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Parab2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Parab2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntConicCurveOfGInter::Perform),
             R"#(Intersection between a parabola and a parametric curve.)#"  , py::arg("Prb"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Hypr2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntConicCurveOfGInter::*)( const gp_Hypr2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntConicCurveOfGInter::Perform),
             R"#(Intersection between the main branch of an hyperbola and a parametric curve.)#"  , py::arg("H"),  py::arg("D1"),  py::arg("PCurve"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_TheIntPCurvePCurveOfGInter , shared_ptr<Geom2dInt_TheIntPCurvePCurveOfGInter> , IntRes2d_Intersection>>(m.attr("Geom2dInt_TheIntPCurvePCurveOfGInter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (Geom2dInt_TheIntPCurvePCurveOfGInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntPCurvePCurveOfGInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntPCurvePCurveOfGInter::Perform),
             R"#(None)#"  , py::arg("Curve1"),  py::arg("Domain1"),  py::arg("Curve2"),  py::arg("Domain2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("Perform",
             (void (Geom2dInt_TheIntPCurvePCurveOfGInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntPCurvePCurveOfGInter::*)( const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntPCurvePCurveOfGInter::Perform),
             R"#(None)#"  , py::arg("Curve1"),  py::arg("Domain1"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("SetMinNbSamples",
             (void (Geom2dInt_TheIntPCurvePCurveOfGInter::*)( const Standard_Integer ) ) static_cast<void (Geom2dInt_TheIntPCurvePCurveOfGInter::*)( const Standard_Integer ) >(&Geom2dInt_TheIntPCurvePCurveOfGInter::SetMinNbSamples),
             R"#(Set / get minimum number of points in polygon for intersection.)#"  , py::arg("theMinNbSamples"))
        .def("GetMinNbSamples",
             (Standard_Integer (Geom2dInt_TheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Integer (Geom2dInt_TheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_TheIntPCurvePCurveOfGInter::GetMinNbSamples),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter , shared_ptr<Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter> , IntRes2d_Intersection>>(m.attr("Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IntCurve_IConicTool &,const IntRes2d_Domain &,const Adaptor2d_Curve2d &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real >()  , py::arg("ITool"),  py::arg("Dom1"),  py::arg("PCurve"),  py::arg("Dom2"),  py::arg("TolConf"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::*)( const IntCurve_IConicTool & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::*)( const IntCurve_IConicTool & , const IntRes2d_Domain & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::Perform),
             R"#(Intersection between an implicit curve and a parametrised curve. The exception ConstructionError is raised if the domain of the parametrised curve does not verify HasFirstPoint and HasLastPoint return True.)#"  , py::arg("ITool"),  py::arg("Dom1"),  py::arg("PCurve"),  py::arg("Dom2"),  py::arg("TolConf"),  py::arg("Tol"))
        .def("FindU",
             (Standard_Real (Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , gp_Pnt2d & , const Adaptor2d_Curve2d & , const IntCurve_IConicTool & ) const) static_cast<Standard_Real (Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , gp_Pnt2d & , const Adaptor2d_Curve2d & , const IntCurve_IConicTool & ) const>(&Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::FindU),
             R"#(None)#"  , py::arg("parameter"),  py::arg("point"),  py::arg("TheParCurev"),  py::arg("TheImpTool"))
        .def("FindV",
             (Standard_Real (Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , gp_Pnt2d & , const IntCurve_IConicTool & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Real (Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::*)( const Standard_Real , gp_Pnt2d & , const IntCurve_IConicTool & , const Adaptor2d_Curve2d & , const IntRes2d_Domain & , const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter::FindV),
             R"#(None)#"  , py::arg("parameter"),  py::arg("point"),  py::arg("TheImpTool"),  py::arg("ParCurve"),  py::arg("TheParCurveDomain"),  py::arg("V0"),  py::arg("V1"),  py::arg("Tolerance"))
    // methods using call by reference i.s.o. return
        .def("And_Domaine_Objet1_Intersections",
             []( Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter &self , const IntCurve_IConicTool & TheImpTool,const Adaptor2d_Curve2d & TheParCurve,const IntRes2d_Domain & TheImpCurveDomain,const IntRes2d_Domain & TheParCurveDomain,NCollection_Array1<Standard_Real> & Inter2_And_Domain2,NCollection_Array1<Standard_Real> & Inter1,NCollection_Array1<Standard_Real> & Resultat1,NCollection_Array1<Standard_Real> & Resultat2,const Standard_Real EpsNul ){ Standard_Integer  NbResultats; self.And_Domaine_Objet1_Intersections(TheImpTool,TheParCurve,TheImpCurveDomain,TheParCurveDomain,NbResultats,Inter2_And_Domain2,Inter1,Resultat1,Resultat2,EpsNul); return std::make_tuple(NbResultats); },
             R"#(None)#"  , py::arg("TheImpTool"),  py::arg("TheParCurve"),  py::arg("TheImpCurveDomain"),  py::arg("TheParCurveDomain"),  py::arg("Inter2_And_Domain2"),  py::arg("Inter1"),  py::arg("Resultat1"),  py::arg("Resultat2"),  py::arg("EpsNul"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter , shared_ptr<Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter> >>(m.attr("Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("TolU") )
        .def(py::init< const gp_Pnt2d &,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("U0"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::Initialize),
             R"#(sets the fields of the algorithm.)#"  , py::arg("C"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("TolU"))
        .def("Perform",
             (void (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)( const gp_Pnt2d & , const Standard_Real ) >(&Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::Perform),
             R"#(the algorithm is done with the point P. An exception is raised if the fields have not been initialized.)#"  , py::arg("P"),  py::arg("U0"))
        .def("IsDone",
             (Standard_Boolean (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const) static_cast<Standard_Boolean (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const>(&Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("SquareDistance",
             (Standard_Real (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const) static_cast<Standard_Real (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const>(&Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::SquareDistance),
             R"#(Returns the value of the extremum square distance.)#" )
        .def("IsMin",
             (Standard_Boolean (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const) static_cast<Standard_Boolean (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const>(&Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::IsMin),
             R"#(Returns True if the extremum distance is a minimum.)#" )
        .def("Point",
             (const Extrema_POnCurv2d & (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const) static_cast<const Extrema_POnCurv2d & (Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::*)() const>(&Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter::Point),
             R"#(Returns the point of the extremum distance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter , shared_ptr<Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter> , Intf_Polygon2d>>(m.attr("Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter"))
    // constructors
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Integer,const IntRes2d_Domain &,const Standard_Real >()  , py::arg("Curve"),  py::arg("NbPnt"),  py::arg("Domain"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("ComputeWithBox",
             (void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Adaptor2d_Curve2d & , const Bnd_Box2d & ) ) static_cast<void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Adaptor2d_Curve2d & , const Bnd_Box2d & ) >(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::ComputeWithBox),
             R"#(The current polygon is modified if most of the points of the polygon are are outside the box <OtherBox>. In this situation, bounds are computed to build a polygon inside or near the OtherBox.)#"  , py::arg("Curve"),  py::arg("OtherBox"))
        .def("DeflectionOverEstimation",
             (Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::DeflectionOverEstimation),
             R"#(None)#" )
        .def("SetDeflectionOverEstimation",
             (void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Real ) ) static_cast<void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Real ) >(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::SetDeflectionOverEstimation),
             R"#(None)#"  , py::arg("x"))
        .def("Closed",
             (void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Boolean ) ) static_cast<void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Boolean ) >(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::Closed),
             R"#(None)#"  , py::arg("clos"))
        .def("Closed",
             (Standard_Boolean (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Boolean (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::Closed),
             R"#(Returns True if the polyline is closed.)#" )
        .def("NbSegments",
             (Standard_Integer (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Integer (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::NbSegments),
             R"#(Give the number of Segments in the polyline.)#" )
        .def("Segment",
             (void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
        .def("InfParameter",
             (Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::InfParameter),
             R"#(Returns the parameter (On the curve) of the first point of the Polygon)#" )
        .def("SupParameter",
             (Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::SupParameter),
             R"#(Returns the parameter (On the curve) of the last point of the Polygon)#" )
        .def("AutoIntersectionIsPossible",
             (Standard_Boolean (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<Standard_Boolean (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::AutoIntersectionIsPossible),
             R"#(None)#" )
        .def("ApproxParamOnCurve",
             (Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Integer , const Standard_Real ) const) static_cast<Standard_Real (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Integer , const Standard_Real ) const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::ApproxParamOnCurve),
             R"#(Give an approximation of the parameter on the curve according to the discretization of the Curve.)#"  , py::arg("Index"),  py::arg("ParamOnLine"))
        .def("CalculRegion",
             (Standard_Integer (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Integer (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::CalculRegion),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("x1"),  py::arg("x2"),  py::arg("y1"),  py::arg("y2"))
        .def("Dump",
             (void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const) static_cast<void (Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::*)() const>(&Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter::Dump),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Geom2dInt_TheProjPCurOfGInter , shared_ptr<Geom2dInt_TheProjPCurOfGInter>>(m,"Geom2dInt_TheProjPCurOfGInter");

    static_cast<py::class_<Geom2dInt_TheProjPCurOfGInter , shared_ptr<Geom2dInt_TheProjPCurOfGInter> >>(m.attr("Geom2dInt_TheProjPCurOfGInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FindParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & , const gp_Pnt2d & , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & , const gp_Pnt2d & , const Standard_Real ) >(&Geom2dInt_TheProjPCurOfGInter::FindParameter),
                    R"#(Returns the parameter V of the point on the parametric curve corresponding to the Point Pnt. The Correspondance between Pnt and the point P(V) on the parametric curve must be coherent with the way of determination of the signed distance between a point and the implicit curve. Tol is the tolerance on the distance between a point and the parametrised curve. In that case, no bounds are given. The research of the rigth parameter has to be made on the natural parametric domain of the curve.)#"  , py::arg("C"),  py::arg("Pnt"),  py::arg("Tol"))
        .def_static("FindParameter_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Geom2dInt_TheProjPCurOfGInter::FindParameter),
                    R"#(Returns the parameter V of the point on the parametric curve corresponding to the Point Pnt. The Correspondance between Pnt and the point P(V) on the parametric curve must be coherent with the way of determination of the signed distance between a point and the implicit curve. Tol is the tolerance on the distance between a point and the parametrised curve. LowParameter and HighParameter give the boundaries of the interval in wich the parameter certainly lies. These parameters are given to implement a more efficient algoritm. So, it is not necessary to check that the returned value verifies LowParameter <= Value <= HighParameter.)#"  , py::arg("C"),  py::arg("Pnt"),  py::arg("LowParameter"),  py::arg("HighParameter"),  py::arg("Tol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_GInter.hxx
// ./opencascade/Geom2dInt_Geom2dCurveTool.hxx
// ./opencascade/Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_IntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
