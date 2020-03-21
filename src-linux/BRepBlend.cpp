
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepBlend_Line.hxx>
#include <Blend_AppFunction.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <Blend_AppFunction.hxx>
#include <BRepBlend_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <BRepBlend_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <BRepBlend_HCurve2dTool.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <BRepBlend_HCurveTool.hxx>
#include <BRepBlend_BlendTool.hxx>
#include <BRepBlend_Extremity.hxx>
#include <Blend_Function.hxx>
#include <Blend_FuncInv.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepBlend_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Blend_SurfRstFunction.hxx>
#include <Blend_FuncInv.hxx>
#include <Blend_SurfPointFuncInv.hxx>
#include <Blend_SurfCurvFuncInv.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <IntSurf_Transition.hxx>
#include <BRepBlend_Extremity.hxx>
#include <BRepBlend_Line.hxx>
#include <Blend_RstRstFunction.hxx>
#include <Blend_AppFunction.hxx>
#include <BRepBlend_Line.hxx>
#include <Blend_SurfRstFunction.hxx>
#include <Blend_AppFunction.hxx>
#include <BRepBlend_Line.hxx>
#include <Blend_Function.hxx>
#include <Blend_AppFunction.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <BRepBlend_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepBlend_HCurve2dTool.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <BRepBlend_HCurveTool.hxx>
#include <BRepBlend_BlendTool.hxx>
#include <BRepBlend_Extremity.hxx>
#include <Blend_CSFunction.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepBlend_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Blend_RstRstFunction.hxx>
#include <Blend_SurfCurvFuncInv.hxx>
#include <Blend_CurvPointFuncInv.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <IntSurf_Transition.hxx>
#include <BRepBlend_Extremity.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>

// module includes
#include <BRepBlend_AppFunc.hxx>
#include <BRepBlend_AppFuncRoot.hxx>
#include <BRepBlend_AppFuncRst.hxx>
#include <BRepBlend_AppFuncRstRst.hxx>
#include <BRepBlend_AppSurf.hxx>
#include <BRepBlend_BlendTool.hxx>
#include <BRepBlend_Chamfer.hxx>
#include <BRepBlend_ChamfInv.hxx>
#include <BRepBlend_ChAsym.hxx>
#include <BRepBlend_ChAsymInv.hxx>
#include <BRepBlend_ConstRad.hxx>
#include <BRepBlend_ConstRadInv.hxx>
#include <BRepBlend_ConstThroat.hxx>
#include <BRepBlend_ConstThroatInv.hxx>
#include <BRepBlend_ConstThroatWithPenetration.hxx>
#include <BRepBlend_ConstThroatWithPenetrationInv.hxx>
#include <BRepBlend_CSCircular.hxx>
#include <BRepBlend_CSConstRad.hxx>
#include <BRepBlend_CSWalking.hxx>
#include <BRepBlend_CurvPointRadInv.hxx>
#include <BRepBlend_EvolRad.hxx>
#include <BRepBlend_EvolRadInv.hxx>
#include <BRepBlend_Extremity.hxx>
#include <BRepBlend_HCurve2dTool.hxx>
#include <BRepBlend_HCurveTool.hxx>
#include <BRepBlend_Line.hxx>
#include <BRepBlend_PointOnRst.hxx>
#include <BRepBlend_RstRstConstRad.hxx>
#include <BRepBlend_RstRstEvolRad.hxx>
#include <BRepBlend_RstRstLineBuilder.hxx>
#include <BRepBlend_Ruled.hxx>
#include <BRepBlend_RuledInv.hxx>
#include <BRepBlend_SequenceOfLine.hxx>
#include <BRepBlend_SequenceOfPointOnRst.hxx>
#include <BRepBlend_SurfCurvConstRadInv.hxx>
#include <BRepBlend_SurfCurvEvolRadInv.hxx>
#include <BRepBlend_SurfPointConstRadInv.hxx>
#include <BRepBlend_SurfPointEvolRadInv.hxx>
#include <BRepBlend_SurfRstConstRad.hxx>
#include <BRepBlend_SurfRstEvolRad.hxx>
#include <BRepBlend_SurfRstLineBuilder.hxx>
#include <BRepBlend_Walking.hxx>

// template related includes
// ./opencascade/BRepBlend_SequenceOfLine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepBlend_SequenceOfPointOnRst.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepBlend(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepBlend"));


//Python trampoline classes
    class Py_BRepBlend_AppFuncRoot : public BRepBlend_AppFuncRoot{
    public:
        using BRepBlend_AppFuncRoot::BRepBlend_AppFuncRoot;


        // public pure virtual
        void Point(const Blend_AppFunction & Func,const Standard_Real Param,const math_Vector & Sol,Blend_Point & Pnt) const  override { PYBIND11_OVERLOAD_PURE(void,BRepBlend_AppFuncRoot,Point,Func,Param,Sol,Pnt) };
        void Vec(math_Vector & Sol,const Blend_Point & Pnt) const  override { PYBIND11_OVERLOAD_PURE(void,BRepBlend_AppFuncRoot,Vec,Sol,Pnt) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<BRepBlend_AppFuncRoot ,opencascade::handle<BRepBlend_AppFuncRoot>,Py_BRepBlend_AppFuncRoot , Approx_SweepFunction>>(m.attr("BRepBlend_AppFuncRoot"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_AppFuncRoot::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_AppFuncRoot::D1),
             R"#(compute the first derivative in v direction of the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_AppFuncRoot::D2),
             R"#(compute the second derivative in v direction of the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Nb2dCurves",
             (Standard_Integer (BRepBlend_AppFuncRoot::*)() const) static_cast<Standard_Integer (BRepBlend_AppFuncRoot::*)() const>(&BRepBlend_AppFuncRoot::Nb2dCurves),
             R"#(get the number of 2d curves to approximate.)#" )
        .def("Knots",
             (void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepBlend_AppFuncRoot::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Integer> & ) const>(&BRepBlend_AppFuncRoot::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (BRepBlend_AppFuncRoot::*)() const) static_cast<Standard_Boolean (BRepBlend_AppFuncRoot::*)() const>(&BRepBlend_AppFuncRoot::IsRational),
             R"#(Returns if the section is rationnal or not)#" )
        .def("NbIntervals",
             (Standard_Integer (BRepBlend_AppFuncRoot::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (BRepBlend_AppFuncRoot::*)( const GeomAbs_Shape ) const>(&BRepBlend_AppFuncRoot::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&BRepBlend_AppFuncRoot::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real ) >(&BRepBlend_AppFuncRoot::SetInterval),
             R"#(Sets the bounds of the parametric interval on the fonction This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&BRepBlend_AppFuncRoot::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("SetTolerance",
             (void (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_AppFuncRoot::*)( const Standard_Real , const Standard_Real ) >(&BRepBlend_AppFuncRoot::SetTolerance),
             R"#(Is usfull, if (me) have to be run numerical algorithme to perform D0, D1 or D2)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (BRepBlend_AppFuncRoot::*)() const) static_cast<gp_Pnt (BRepBlend_AppFuncRoot::*)() const>(&BRepBlend_AppFuncRoot::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditionned rational approximation.)#" )
        .def("MaximalSection",
             (Standard_Real (BRepBlend_AppFuncRoot::*)() const) static_cast<Standard_Real (BRepBlend_AppFuncRoot::*)() const>(&BRepBlend_AppFuncRoot::MaximalSection),
             R"#(Returns the length of the maximum section. This information is usefull to perform well conditionned rational approximation.)#" )
        .def("GetMinimalWeight",
             (void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepBlend_AppFuncRoot::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepBlend_AppFuncRoot::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections. This information is usefull to perform well conditionned rational approximation.)#"  , py::arg("Weigths"))
        .def("Point",
             (void (BRepBlend_AppFuncRoot::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const) static_cast<void (BRepBlend_AppFuncRoot::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const>(&BRepBlend_AppFuncRoot::Point),
             R"#(None)#"  , py::arg("Func"),  py::arg("Param"),  py::arg("Sol"),  py::arg("Pnt"))
        .def("Vec",
             (void (BRepBlend_AppFuncRoot::*)( math_Vector & , const Blend_Point & ) const) static_cast<void (BRepBlend_AppFuncRoot::*)( math_Vector & , const Blend_Point & ) const>(&BRepBlend_AppFuncRoot::Vec),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Pnt"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBlend_AppFuncRoot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBlend_AppFuncRoot::*)() const>(&BRepBlend_AppFuncRoot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( BRepBlend_AppFuncRoot &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
        .def("Resolution",
             []( BRepBlend_AppFuncRoot &self , const Standard_Integer Index,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(Index,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(Returns the resolutions in the sub-space 2d <Index> -- This information is usfull to find an good tolerance in 2d approximation)#"  , py::arg("Index"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBlend_AppFuncRoot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepBlend_AppFuncRoot::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_AppSurf , shared_ptr<BRepBlend_AppSurf> , AppBlend_Approx>>(m.attr("BRepBlend_AppSurf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean >()  , py::arg("Degmin"),  py::arg("Degmax"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIt"),  py::arg("KnownParameters")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepBlend_AppSurf::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (BRepBlend_AppSurf::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean ) >(&BRepBlend_AppSurf::Init),
             R"#(None)#"  , py::arg("Degmin"),  py::arg("Degmax"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIt"),  py::arg("KnownParameters")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetParType",
             (void (BRepBlend_AppSurf::*)( const Approx_ParametrizationType ) ) static_cast<void (BRepBlend_AppSurf::*)( const Approx_ParametrizationType ) >(&BRepBlend_AppSurf::SetParType),
             R"#(Define the type of parametrization used in the approximation)#"  , py::arg("ParType"))
        .def("SetContinuity",
             (void (BRepBlend_AppSurf::*)( const GeomAbs_Shape ) ) static_cast<void (BRepBlend_AppSurf::*)( const GeomAbs_Shape ) >(&BRepBlend_AppSurf::SetContinuity),
             R"#(Define the Continuity used in the approximation)#"  , py::arg("C"))
        .def("SetCriteriumWeight",
             (void (BRepBlend_AppSurf::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_AppSurf::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepBlend_AppSurf::SetCriteriumWeight),
             R"#(define the Weights associed to the criterium used in the optimization.)#"  , py::arg("W1"),  py::arg("W2"),  py::arg("W3"))
        .def("ParType",
             (Approx_ParametrizationType (BRepBlend_AppSurf::*)() const) static_cast<Approx_ParametrizationType (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::ParType),
             R"#(returns the type of parametrization used in the approximation)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepBlend_AppSurf::*)() const) static_cast<GeomAbs_Shape (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::Continuity),
             R"#(returns the Continuity used in the approximation)#" )
        .def("Perform",
             (void (BRepBlend_AppSurf::*)( const opencascade::handle<BRepBlend_Line> & , Blend_AppFunction & , const Standard_Boolean ) ) static_cast<void (BRepBlend_AppSurf::*)( const opencascade::handle<BRepBlend_Line> & , Blend_AppFunction & , const Standard_Boolean ) >(&BRepBlend_AppSurf::Perform),
             R"#(None)#"  , py::arg("Lin"),  py::arg("SecGen"),  py::arg("SpApprox")=static_cast<const Standard_Boolean>(Standard_False))
        .def("PerformSmoothing",
             (void (BRepBlend_AppSurf::*)( const opencascade::handle<BRepBlend_Line> & , Blend_AppFunction & ) ) static_cast<void (BRepBlend_AppSurf::*)( const opencascade::handle<BRepBlend_Line> & , Blend_AppFunction & ) >(&BRepBlend_AppSurf::PerformSmoothing),
             R"#(None)#"  , py::arg("Lin"),  py::arg("SecGen"))
        .def("Perform",
             (void (BRepBlend_AppSurf::*)( const opencascade::handle<BRepBlend_Line> & , Blend_AppFunction & , const Standard_Integer ) ) static_cast<void (BRepBlend_AppSurf::*)( const opencascade::handle<BRepBlend_Line> & , Blend_AppFunction & , const Standard_Integer ) >(&BRepBlend_AppSurf::Perform),
             R"#(None)#"  , py::arg("Lin"),  py::arg("SecGen"),  py::arg("NbMaxP"))
        .def("IsDone",
             (Standard_Boolean (BRepBlend_AppSurf::*)() const) static_cast<Standard_Boolean (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::IsDone),
             R"#(None)#" )
        .def("Surface",
             (void (BRepBlend_AppSurf::*)( NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (BRepBlend_AppSurf::*)( NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Integer> & ) const>(&BRepBlend_AppSurf::Surface),
             R"#(None)#"  , py::arg("TPoles"),  py::arg("TWeights"),  py::arg("TUKnots"),  py::arg("TVKnots"),  py::arg("TUMults"),  py::arg("TVMults"))
        .def("UDegree",
             (Standard_Integer (BRepBlend_AppSurf::*)() const) static_cast<Standard_Integer (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (BRepBlend_AppSurf::*)() const) static_cast<Standard_Integer (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (BRepBlend_AppSurf::*)() const) static_cast<const TColgp_Array2OfPnt & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (BRepBlend_AppSurf::*)() const) static_cast<const TColStd_Array2OfReal & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (BRepBlend_AppSurf::*)() const) static_cast<const TColStd_Array1OfReal & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (BRepBlend_AppSurf::*)() const) static_cast<const TColStd_Array1OfReal & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (BRepBlend_AppSurf::*)() const) static_cast<const TColStd_Array1OfInteger & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (BRepBlend_AppSurf::*)() const) static_cast<const TColStd_Array1OfInteger & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::SurfVMults),
             R"#(None)#" )
        .def("NbCurves2d",
             (Standard_Integer (BRepBlend_AppSurf::*)() const) static_cast<Standard_Integer (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::NbCurves2d),
             R"#(None)#" )
        .def("Curve2d",
             (void (BRepBlend_AppSurf::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (BRepBlend_AppSurf::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const>(&BRepBlend_AppSurf::Curve2d),
             R"#(None)#"  , py::arg("Index"),  py::arg("TPoles"),  py::arg("TKnots"),  py::arg("TMults"))
        .def("Curves2dDegree",
             (Standard_Integer (BRepBlend_AppSurf::*)() const) static_cast<Standard_Integer (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (BRepBlend_AppSurf::*)( const Standard_Integer ) const) static_cast<const TColgp_Array1OfPnt2d & (BRepBlend_AppSurf::*)( const Standard_Integer ) const>(&BRepBlend_AppSurf::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (BRepBlend_AppSurf::*)() const) static_cast<const TColStd_Array1OfReal & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (BRepBlend_AppSurf::*)() const) static_cast<const TColStd_Array1OfInteger & (BRepBlend_AppSurf::*)() const>(&BRepBlend_AppSurf::Curves2dMults),
             R"#(None)#" )
        .def("TolCurveOnSurf",
             (Standard_Real (BRepBlend_AppSurf::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepBlend_AppSurf::*)( const Standard_Integer ) const>(&BRepBlend_AppSurf::TolCurveOnSurf),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("CriteriumWeight",
             []( BRepBlend_AppSurf &self   ){ Standard_Real  W1; Standard_Real  W2; Standard_Real  W3; self.CriteriumWeight(W1,W2,W3); return std::make_tuple(W1,W2,W3); },
             R"#(returns the Weights (as percent) associed to the criterium used in the optimization.)#" )
        .def("SurfShape",
             []( BRepBlend_AppSurf &self   ){ Standard_Integer  UDegree; Standard_Integer  VDegree; Standard_Integer  NbUPoles; Standard_Integer  NbVPoles; Standard_Integer  NbUKnots; Standard_Integer  NbVKnots; self.SurfShape(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); return std::make_tuple(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); },
             R"#(None)#" )
        .def("Curves2dShape",
             []( BRepBlend_AppSurf &self   ){ Standard_Integer  Degree; Standard_Integer  NbPoles; Standard_Integer  NbKnots; self.Curves2dShape(Degree,NbPoles,NbKnots); return std::make_tuple(Degree,NbPoles,NbKnots); },
             R"#(None)#" )
        .def("TolReached",
             []( BRepBlend_AppSurf &self   ){ Standard_Real  Tol3d; Standard_Real  Tol2d; self.TolReached(Tol3d,Tol2d); return std::make_tuple(Tol3d,Tol2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepBlend_BlendTool , shared_ptr<BRepBlend_BlendTool>>(m,"BRepBlend_BlendTool");

    static_cast<py::class_<BRepBlend_BlendTool , shared_ptr<BRepBlend_BlendTool> >>(m.attr("BRepBlend_BlendTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Project_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , Standard_Real & , Standard_Real & ) >(&BRepBlend_BlendTool::Project),
                    R"#(Projects the point P on the arc C. If the methods returns Standard_True, the projection is successful, and Paramproj is the parameter on the arc of the projected point, Dist is the distance between P and the curve.. If the method returns Standard_False, Param proj and Dist are not significant.)#"  , py::arg("P"),  py::arg("S"),  py::arg("C"),  py::arg("Paramproj"),  py::arg("Dist"))
        .def_static("Inters_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const gp_Pnt2d & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const gp_Pnt2d & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , Standard_Real & , Standard_Real & ) >(&BRepBlend_BlendTool::Inters),
                    R"#(None)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("S"),  py::arg("C"),  py::arg("Param"),  py::arg("Dist"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_BlendTool::Parameter),
                    R"#(Returns the parameter of the vertex V on the edge A.)#"  , py::arg("V"),  py::arg("A"))
        .def_static("Tolerance_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_BlendTool::Tolerance),
                    R"#(Returns the parametric tolerance on the arc A used to consider that the vertex and another point meet, i-e if Abs(Parameter(Vertex)-Parameter(OtherPnt))<= Tolerance, the points are "merged".)#"  , py::arg("V"),  py::arg("A"))
        .def_static("SingularOnUMin_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&BRepBlend_BlendTool::SingularOnUMin),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnUMax_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&BRepBlend_BlendTool::SingularOnUMax),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnVMin_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&BRepBlend_BlendTool::SingularOnVMin),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnVMax_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&BRepBlend_BlendTool::SingularOnVMax),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesU_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real ) >(&BRepBlend_BlendTool::NbSamplesU),
                    R"#(None)#"  , py::arg("S"),  py::arg("u1"),  py::arg("u2"))
        .def_static("NbSamplesV_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real ) >(&BRepBlend_BlendTool::NbSamplesV),
                    R"#(None)#"  , py::arg("S"),  py::arg("v1"),  py::arg("v2"))
        .def_static("CurveOnSurf_s",
                    (opencascade::handle<Adaptor2d_HCurve2d> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const opencascade::handle<Adaptor3d_HSurface> & ) >(&BRepBlend_BlendTool::CurveOnSurf),
                    R"#(None)#"  , py::arg("C"),  py::arg("S"))
    // static methods using call by reference i.s.o. return
        .def_static("Bounds_s",
                    []( const opencascade::handle<Adaptor2d_HCurve2d> & C ){ Standard_Real  Ufirst; Standard_Real  Ulast; BRepBlend_BlendTool::Bounds(C,Ufirst,Ulast); return std::make_tuple(Ufirst,Ulast); },
                    R"#(Returns the parametric limits on the arc C. These limits must be finite : they are either the real limits of the arc, for a finite arc, or a bounding box for an infinite arc.)#"  , py::arg("C"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_CSWalking , shared_ptr<BRepBlend_CSWalking> >>(m.attr("BRepBlend_CSWalking"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> & >()  , py::arg("Curv"),  py::arg("Surf"),  py::arg("Domain") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepBlend_CSWalking::*)( Blend_CSFunction & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (BRepBlend_CSWalking::*)( Blend_CSFunction & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&BRepBlend_CSWalking::Perform),
             R"#(None)#"  , py::arg("F"),  py::arg("Pdep"),  py::arg("Pmax"),  py::arg("MaxStep"),  py::arg("TolGuide"),  py::arg("Soldep"),  py::arg("Tolesp"),  py::arg("Fleche"),  py::arg("Appro")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Complete",
             (Standard_Boolean (BRepBlend_CSWalking::*)( Blend_CSFunction & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_CSWalking::*)( Blend_CSFunction & , const Standard_Real ) >(&BRepBlend_CSWalking::Complete),
             R"#(None)#"  , py::arg("F"),  py::arg("Pmin"))
        .def("IsDone",
             (Standard_Boolean (BRepBlend_CSWalking::*)() const) static_cast<Standard_Boolean (BRepBlend_CSWalking::*)() const>(&BRepBlend_CSWalking::IsDone),
             R"#(None)#" )
        .def("Line",
             (const opencascade::handle<BRepBlend_Line> & (BRepBlend_CSWalking::*)() const) static_cast<const opencascade::handle<BRepBlend_Line> & (BRepBlend_CSWalking::*)() const>(&BRepBlend_CSWalking::Line),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_CurvPointRadInv , shared_ptr<BRepBlend_CurvPointRadInv> , Blend_CurvPointFuncInv>>(m.attr("BRepBlend_CurvPointRadInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("C1"),  py::arg("C2") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepBlend_CurvPointRadInv::*)( const Standard_Integer ) ) static_cast<void (BRepBlend_CurvPointRadInv::*)( const Standard_Integer ) >(&BRepBlend_CurvPointRadInv::Set),
             R"#(None)#"  , py::arg("Choix"))
        .def("NbEquations",
             (Standard_Integer (BRepBlend_CurvPointRadInv::*)() const) static_cast<Standard_Integer (BRepBlend_CurvPointRadInv::*)() const>(&BRepBlend_CurvPointRadInv::NbEquations),
             R"#(returns 2.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_CurvPointRadInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_CurvPointRadInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_CurvPointRadInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_CurvPointRadInv::*)( const gp_Pnt & ) ) static_cast<void (BRepBlend_CurvPointRadInv::*)( const gp_Pnt & ) >(&BRepBlend_CurvPointRadInv::Set),
             R"#(Set the Point on which a solution has to be found.)#"  , py::arg("P"))
        .def("GetTolerance",
             (void (BRepBlend_CurvPointRadInv::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_CurvPointRadInv::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_CurvPointRadInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_CurvPointRadInv::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_CurvPointRadInv::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_CurvPointRadInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_CurvPointRadInv::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_CurvPointRadInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_Extremity , shared_ptr<BRepBlend_Extremity> >>(m.attr("BRepBlend_Extremity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("U"),  py::arg("V"),  py::arg("Param"),  py::arg("Tol") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const opencascade::handle<Adaptor3d_HVertex> & >()  , py::arg("P"),  py::arg("U"),  py::arg("V"),  py::arg("Param"),  py::arg("Tol"),  py::arg("Vtx") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("W"),  py::arg("Param"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("SetValue",
             (void (BRepBlend_Extremity::*)( const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_Extremity::*)( const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepBlend_Extremity::SetValue),
             R"#(Set the values for an extremity on a surface.)#"  , py::arg("P"),  py::arg("U"),  py::arg("V"),  py::arg("Param"),  py::arg("Tol"))
        .def("SetValue",
             (void (BRepBlend_Extremity::*)( const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<Adaptor3d_HVertex> & ) ) static_cast<void (BRepBlend_Extremity::*)( const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<Adaptor3d_HVertex> & ) >(&BRepBlend_Extremity::SetValue),
             R"#(Set the values for an extremity on a surface.This extremity matches the vertex <Vtx>.)#"  , py::arg("P"),  py::arg("U"),  py::arg("V"),  py::arg("Param"),  py::arg("Tol"),  py::arg("Vtx"))
        .def("SetValue",
             (void (BRepBlend_Extremity::*)( const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_Extremity::*)( const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepBlend_Extremity::SetValue),
             R"#(Set the values for an extremity on curve.)#"  , py::arg("P"),  py::arg("W"),  py::arg("Param"),  py::arg("Tol"))
        .def("Value",
             (const gp_Pnt & (BRepBlend_Extremity::*)() const) static_cast<const gp_Pnt & (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Value),
             R"#(This method returns the value of the point in 3d space.)#" )
        .def("SetTangent",
             (void (BRepBlend_Extremity::*)( const gp_Vec & ) ) static_cast<void (BRepBlend_Extremity::*)( const gp_Vec & ) >(&BRepBlend_Extremity::SetTangent),
             R"#(Set the tangent vector for an extremity on a surface.)#"  , py::arg("Tangent"))
        .def("HasTangent",
             (Standard_Boolean (BRepBlend_Extremity::*)() const) static_cast<Standard_Boolean (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::HasTangent),
             R"#(Returns TRUE if the Tangent is stored.)#" )
        .def("Tangent",
             (const gp_Vec & (BRepBlend_Extremity::*)() const) static_cast<const gp_Vec & (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Tangent),
             R"#(This method returns the value of tangent in 3d space.)#" )
        .def("Tolerance",
             (Standard_Real (BRepBlend_Extremity::*)() const) static_cast<Standard_Real (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Tolerance),
             R"#(This method returns the fuzziness on the point in 3d space.)#" )
        .def("SetVertex",
             (void (BRepBlend_Extremity::*)( const opencascade::handle<Adaptor3d_HVertex> & ) ) static_cast<void (BRepBlend_Extremity::*)( const opencascade::handle<Adaptor3d_HVertex> & ) >(&BRepBlend_Extremity::SetVertex),
             R"#(Set the values for an extremity on a curve.)#"  , py::arg("V"))
        .def("AddArc",
             (void (BRepBlend_Extremity::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) ) static_cast<void (BRepBlend_Extremity::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) >(&BRepBlend_Extremity::AddArc),
             R"#(Sets the values of a point which is on the arc A, at parameter Param.)#"  , py::arg("A"),  py::arg("Param"),  py::arg("TLine"),  py::arg("TArc"))
        .def("IsVertex",
             (Standard_Boolean (BRepBlend_Extremity::*)() const) static_cast<Standard_Boolean (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::IsVertex),
             R"#(Returns Standard_True when the point coincide with an existing vertex.)#" )
        .def("Vertex",
             (const opencascade::handle<Adaptor3d_HVertex> & (BRepBlend_Extremity::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Vertex),
             R"#(Returns the vertex when IsVertex returns Standard_True.)#" )
        .def("NbPointOnRst",
             (Standard_Integer (BRepBlend_Extremity::*)() const) static_cast<Standard_Integer (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::NbPointOnRst),
             R"#(Returns the number of arc containing the extremity. If the method returns 0, the point is inside the surface. Otherwise, the extremity lies on at least 1 arc, and all the information (arc, parameter, transitions) are given by the point on restriction (PointOnRst) returned by the next method.)#" )
        .def("PointOnRst",
             (const BRepBlend_PointOnRst & (BRepBlend_Extremity::*)( const Standard_Integer ) const) static_cast<const BRepBlend_PointOnRst & (BRepBlend_Extremity::*)( const Standard_Integer ) const>(&BRepBlend_Extremity::PointOnRst),
             R"#(None)#"  , py::arg("Index"))
        .def("Parameter",
             (Standard_Real (BRepBlend_Extremity::*)() const) static_cast<Standard_Real (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Parameter),
             R"#(None)#" )
        .def("ParameterOnGuide",
             (Standard_Real (BRepBlend_Extremity::*)() const) static_cast<Standard_Real (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::ParameterOnGuide),
             R"#(None)#" )
        .def("Value",
             (const gp_Pnt & (BRepBlend_Extremity::*)() const) static_cast<const gp_Pnt & (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Value),
             R"#(This method returns the value of the point in 3d space.)#" )
        .def("SetTangent",
             (void (BRepBlend_Extremity::*)( const gp_Vec & ) ) static_cast<void (BRepBlend_Extremity::*)( const gp_Vec & ) >(&BRepBlend_Extremity::SetTangent),
             R"#(Set the tangent vector for an extremity on a surface.)#"  , py::arg("Tangent"))
        .def("HasTangent",
             (Standard_Boolean (BRepBlend_Extremity::*)() const) static_cast<Standard_Boolean (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::HasTangent),
             R"#(Returns TRUE if the Tangent is stored.)#" )
        .def("Tangent",
             (const gp_Vec & (BRepBlend_Extremity::*)() const) static_cast<const gp_Vec & (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Tangent),
             R"#(This method returns the value of tangent in 3d space.)#" )
        .def("Tolerance",
             (Standard_Real (BRepBlend_Extremity::*)() const) static_cast<Standard_Real (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Tolerance),
             R"#(This method returns the fuzziness on the point in 3d space.)#" )
        .def("IsVertex",
             (Standard_Boolean (BRepBlend_Extremity::*)() const) static_cast<Standard_Boolean (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::IsVertex),
             R"#(Returns Standard_True when the point coincide with an existing vertex.)#" )
        .def("Vertex",
             (const opencascade::handle<Adaptor3d_HVertex> & (BRepBlend_Extremity::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Vertex),
             R"#(Returns the vertex when IsVertex returns Standard_True.)#" )
        .def("NbPointOnRst",
             (Standard_Integer (BRepBlend_Extremity::*)() const) static_cast<Standard_Integer (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::NbPointOnRst),
             R"#(Returns the number of arc containing the extremity. If the method returns 0, the point is inside the surface. Otherwise, the extremity lies on at least 1 arc, and all the information (arc, parameter, transitions) are given by the point on restriction (PointOnRst) returned by the next method.)#" )
        .def("PointOnRst",
             (const BRepBlend_PointOnRst & (BRepBlend_Extremity::*)( const Standard_Integer ) const) static_cast<const BRepBlend_PointOnRst & (BRepBlend_Extremity::*)( const Standard_Integer ) const>(&BRepBlend_Extremity::PointOnRst),
             R"#(None)#"  , py::arg("Index"))
        .def("Parameter",
             (Standard_Real (BRepBlend_Extremity::*)() const) static_cast<Standard_Real (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::Parameter),
             R"#(None)#" )
        .def("ParameterOnGuide",
             (Standard_Real (BRepBlend_Extremity::*)() const) static_cast<Standard_Real (BRepBlend_Extremity::*)() const>(&BRepBlend_Extremity::ParameterOnGuide),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( BRepBlend_Extremity &self   ){ Standard_Real  U; Standard_Real  V; self.Parameters(U,V); return std::make_tuple(U,V); },
             R"#(This method returns the parameters of the point on the concerned surface.)#" )
        .def("Parameters",
             []( BRepBlend_Extremity &self   ){ Standard_Real  U; Standard_Real  V; self.Parameters(U,V); return std::make_tuple(U,V); },
             R"#(This method returns the parameters of the point on the concerned surface.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepBlend_HCurve2dTool , shared_ptr<BRepBlend_HCurve2dTool>>(m,"BRepBlend_HCurve2dTool");

    static_cast<py::class_<BRepBlend_HCurve2dTool , shared_ptr<BRepBlend_HCurve2dTool> >>(m.attr("BRepBlend_HCurve2dTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const GeomAbs_Shape ) >(&BRepBlend_HCurve2dTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&BRepBlend_HCurve2dTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&BRepBlend_HCurve2dTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & ) >(&BRepBlend_HCurve2dTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) >(&BRepBlend_HCurve2dTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&BRepBlend_HCurve2dTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&BRepBlend_HCurve2dTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Integer ) >(&BRepBlend_HCurve2dTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&BRepBlend_HCurve2dTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_HCurve2dTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Real ) >(&BRepBlend_HCurve2dTool::NbSamples),
                    R"#(None)#"  , py::arg("C"),  py::arg("U0"),  py::arg("U1"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepBlend_HCurveTool , shared_ptr<BRepBlend_HCurveTool>>(m,"BRepBlend_HCurveTool");

    static_cast<py::class_<BRepBlend_HCurveTool , shared_ptr<BRepBlend_HCurveTool> >>(m.attr("BRepBlend_HCurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<GeomAbs_Shape (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & , const GeomAbs_Shape ) >(&BRepBlend_HCurveTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&BRepBlend_HCurveTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) ) static_cast<gp_Pnt (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) >(&BRepBlend_HCurveTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & ) >(&BRepBlend_HCurveTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & ) >(&BRepBlend_HCurveTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&BRepBlend_HCurveTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BRepBlend_HCurveTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , const Standard_Integer ) >(&BRepBlend_HCurveTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) >(&BRepBlend_HCurveTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<GeomAbs_CurveType (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Lin (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Circ (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Elips (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Hypr (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Parab (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<opencascade::handle<Geom_BezierCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&BRepBlend_HCurveTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , const Standard_Real ) >(&BRepBlend_HCurveTool::NbSamples),
                    R"#(None)#"  , py::arg("C"),  py::arg("U0"),  py::arg("U1"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_Line ,opencascade::handle<BRepBlend_Line> , Standard_Transient>>(m.attr("BRepBlend_Line"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepBlend_Line::*)() ) static_cast<void (BRepBlend_Line::*)() >(&BRepBlend_Line::Clear),
             R"#(Clears the content of the line.)#" )
        .def("Append",
             (void (BRepBlend_Line::*)( const Blend_Point & ) ) static_cast<void (BRepBlend_Line::*)( const Blend_Point & ) >(&BRepBlend_Line::Append),
             R"#(Adds a point in the line.)#"  , py::arg("P"))
        .def("Prepend",
             (void (BRepBlend_Line::*)( const Blend_Point & ) ) static_cast<void (BRepBlend_Line::*)( const Blend_Point & ) >(&BRepBlend_Line::Prepend),
             R"#(Adds a point in the line at the first place.)#"  , py::arg("P"))
        .def("InsertBefore",
             (void (BRepBlend_Line::*)( const Standard_Integer , const Blend_Point & ) ) static_cast<void (BRepBlend_Line::*)( const Standard_Integer , const Blend_Point & ) >(&BRepBlend_Line::InsertBefore),
             R"#(Adds a point in the line at the first place.)#"  , py::arg("Index"),  py::arg("P"))
        .def("Remove",
             (void (BRepBlend_Line::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepBlend_Line::*)( const Standard_Integer , const Standard_Integer ) >(&BRepBlend_Line::Remove),
             R"#(Removes from <me> all the items of positions between <FromIndex> and <ToIndex>. Raises an exception if the indices are out of bounds.)#"  , py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("Set",
             (void (BRepBlend_Line::*)( const IntSurf_TypeTrans , const IntSurf_TypeTrans ) ) static_cast<void (BRepBlend_Line::*)( const IntSurf_TypeTrans , const IntSurf_TypeTrans ) >(&BRepBlend_Line::Set),
             R"#(Sets the value of the transition of the line on S1 and the line on S2.)#"  , py::arg("TranS1"),  py::arg("TranS2"))
        .def("Set",
             (void (BRepBlend_Line::*)( const IntSurf_TypeTrans ) ) static_cast<void (BRepBlend_Line::*)( const IntSurf_TypeTrans ) >(&BRepBlend_Line::Set),
             R"#(Sets the value of the transition of the line on a surface)#"  , py::arg("Trans"))
        .def("SetStartPoints",
             (void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) ) static_cast<void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) >(&BRepBlend_Line::SetStartPoints),
             R"#(Sets the values of the start points for the line.)#"  , py::arg("StartPt1"),  py::arg("StartPt2"))
        .def("SetEndPoints",
             (void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) ) static_cast<void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) >(&BRepBlend_Line::SetEndPoints),
             R"#(Sets tne values of the end points for the line.)#"  , py::arg("EndPt1"),  py::arg("EndPt2"))
        .def("NbPoints",
             (Standard_Integer (BRepBlend_Line::*)() const) static_cast<Standard_Integer (BRepBlend_Line::*)() const>(&BRepBlend_Line::NbPoints),
             R"#(Returns the number of points in the line.)#" )
        .def("Point",
             (const Blend_Point & (BRepBlend_Line::*)( const Standard_Integer ) const) static_cast<const Blend_Point & (BRepBlend_Line::*)( const Standard_Integer ) const>(&BRepBlend_Line::Point),
             R"#(Returns the point of range Index.)#"  , py::arg("Index"))
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (BRepBlend_Line::*)() const) static_cast<IntSurf_TypeTrans (BRepBlend_Line::*)() const>(&BRepBlend_Line::TransitionOnS1),
             R"#(Returns the type of the transition of the line defined on the first surface. The transition is "constant" along the line. The transition is IN if the line is oriented in such a way that the system of vectors (N,DRac,T) is right-handed, where N is the normal to the first surface at a point P, DRac is a vector tangent to the blending patch, oriented towards the valid part of this patch, T is the tangent to the line on S1 at P. The transitioon is OUT when the system of vectors is left-handed.)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (BRepBlend_Line::*)() const) static_cast<IntSurf_TypeTrans (BRepBlend_Line::*)() const>(&BRepBlend_Line::TransitionOnS2),
             R"#(Returns the type of the transition of the line defined on the second surface. The transition is "constant" along the line.)#" )
        .def("StartPointOnFirst",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::StartPointOnFirst),
             R"#(Returns the start point on S1.)#" )
        .def("StartPointOnSecond",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::StartPointOnSecond),
             R"#(Returns the start point on S2)#" )
        .def("EndPointOnFirst",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::EndPointOnFirst),
             R"#(Returns the end point on S1.)#" )
        .def("EndPointOnSecond",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::EndPointOnSecond),
             R"#(Returns the point on S2.)#" )
        .def("TransitionOnS",
             (IntSurf_TypeTrans (BRepBlend_Line::*)() const) static_cast<IntSurf_TypeTrans (BRepBlend_Line::*)() const>(&BRepBlend_Line::TransitionOnS),
             R"#(Returns the type of the transition of the line defined on the surface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBlend_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBlend_Line::*)() const>(&BRepBlend_Line::DynamicType),
             R"#(None)#" )
        .def("Append",
             (void (BRepBlend_Line::*)( const Blend_Point & ) ) static_cast<void (BRepBlend_Line::*)( const Blend_Point & ) >(&BRepBlend_Line::Append),
             R"#(Adds a point in the line.)#"  , py::arg("P"))
        .def("Prepend",
             (void (BRepBlend_Line::*)( const Blend_Point & ) ) static_cast<void (BRepBlend_Line::*)( const Blend_Point & ) >(&BRepBlend_Line::Prepend),
             R"#(Adds a point in the line at the first place.)#"  , py::arg("P"))
        .def("InsertBefore",
             (void (BRepBlend_Line::*)( const Standard_Integer , const Blend_Point & ) ) static_cast<void (BRepBlend_Line::*)( const Standard_Integer , const Blend_Point & ) >(&BRepBlend_Line::InsertBefore),
             R"#(Adds a point in the line at the first place.)#"  , py::arg("Index"),  py::arg("P"))
        .def("Remove",
             (void (BRepBlend_Line::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepBlend_Line::*)( const Standard_Integer , const Standard_Integer ) >(&BRepBlend_Line::Remove),
             R"#(Removes from <me> all the items of positions between <FromIndex> and <ToIndex>. Raises an exception if the indices are out of bounds.)#"  , py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("SetStartPoints",
             (void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) ) static_cast<void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) >(&BRepBlend_Line::SetStartPoints),
             R"#(Sets the values of the start points for the line.)#"  , py::arg("StartPtOnS1"),  py::arg("StartPtOnS2"))
        .def("SetEndPoints",
             (void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) ) static_cast<void (BRepBlend_Line::*)( const BRepBlend_Extremity & , const BRepBlend_Extremity & ) >(&BRepBlend_Line::SetEndPoints),
             R"#(Sets tne values of the end points for the line.)#"  , py::arg("EndPtOnS1"),  py::arg("EndPtOnS2"))
        .def("NbPoints",
             (Standard_Integer (BRepBlend_Line::*)() const) static_cast<Standard_Integer (BRepBlend_Line::*)() const>(&BRepBlend_Line::NbPoints),
             R"#(Returns the number of points in the line.)#" )
        .def("Point",
             (const Blend_Point & (BRepBlend_Line::*)( const Standard_Integer ) const) static_cast<const Blend_Point & (BRepBlend_Line::*)( const Standard_Integer ) const>(&BRepBlend_Line::Point),
             R"#(Returns the point of range Index.)#"  , py::arg("Index"))
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (BRepBlend_Line::*)() const) static_cast<IntSurf_TypeTrans (BRepBlend_Line::*)() const>(&BRepBlend_Line::TransitionOnS1),
             R"#(Returns the type of the transition of the line defined on the first surface. The transition is "constant" along the line. The transition is IN if the line is oriented in such a way that the system of vectors (N,DRac,T) is right-handed, where N is the normal to the first surface at a point P, DRac is a vector tangent to the blending patch, oriented towards the valid part of this patch, T is the tangent to the line on S1 at P. The transitioon is OUT when the system of vectors is left-handed.)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (BRepBlend_Line::*)() const) static_cast<IntSurf_TypeTrans (BRepBlend_Line::*)() const>(&BRepBlend_Line::TransitionOnS2),
             R"#(Returns the type of the transition of the line defined on the second surface. The transition is "constant" along the line.)#" )
        .def("StartPointOnFirst",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::StartPointOnFirst),
             R"#(Returns the start point on S1.)#" )
        .def("StartPointOnSecond",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::StartPointOnSecond),
             R"#(Returns the start point on S2)#" )
        .def("EndPointOnFirst",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::EndPointOnFirst),
             R"#(Returns the end point on S1.)#" )
        .def("EndPointOnSecond",
             (const BRepBlend_Extremity & (BRepBlend_Line::*)() const) static_cast<const BRepBlend_Extremity & (BRepBlend_Line::*)() const>(&BRepBlend_Line::EndPointOnSecond),
             R"#(Returns the point on S2.)#" )
        .def("TransitionOnS",
             (IntSurf_TypeTrans (BRepBlend_Line::*)() const) static_cast<IntSurf_TypeTrans (BRepBlend_Line::*)() const>(&BRepBlend_Line::TransitionOnS),
             R"#(Returns the type of the transition of the line defined on the surface.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBlend_Line::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepBlend_Line::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_PointOnRst , shared_ptr<BRepBlend_PointOnRst> >>(m.attr("BRepBlend_PointOnRst"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real,const IntSurf_Transition &,const IntSurf_Transition & >()  , py::arg("A"),  py::arg("Param"),  py::arg("TLine"),  py::arg("TArc") )
    // custom constructors
    // methods
        .def("SetArc",
             (void (BRepBlend_PointOnRst::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) ) static_cast<void (BRepBlend_PointOnRst::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) >(&BRepBlend_PointOnRst::SetArc),
             R"#(Sets the values of a point which is on the arc A, at parameter Param.)#"  , py::arg("A"),  py::arg("Param"),  py::arg("TLine"),  py::arg("TArc"))
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (BRepBlend_PointOnRst::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::Arc),
             R"#(Returns the arc of restriction containing the vertex.)#" )
        .def("TransitionOnLine",
             (const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const) static_cast<const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::TransitionOnLine),
             R"#(Returns the transition of the point on the line on surface.)#" )
        .def("TransitionOnArc",
             (const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const) static_cast<const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::TransitionOnArc),
             R"#(Returns the transition of the point on the arc returned by Arc().)#" )
        .def("ParameterOnArc",
             (Standard_Real (BRepBlend_PointOnRst::*)() const) static_cast<Standard_Real (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::ParameterOnArc),
             R"#(Returns the parameter of the point on the arc returned by the method Arc().)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (BRepBlend_PointOnRst::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::Arc),
             R"#(Returns the arc of restriction containing the vertex.)#" )
        .def("TransitionOnLine",
             (const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const) static_cast<const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::TransitionOnLine),
             R"#(Returns the transition of the point on the line on surface.)#" )
        .def("TransitionOnArc",
             (const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const) static_cast<const IntSurf_Transition & (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::TransitionOnArc),
             R"#(Returns the transition of the point on the arc returned by Arc().)#" )
        .def("ParameterOnArc",
             (Standard_Real (BRepBlend_PointOnRst::*)() const) static_cast<Standard_Real (BRepBlend_PointOnRst::*)() const>(&BRepBlend_PointOnRst::ParameterOnArc),
             R"#(Returns the parameter of the point on the arc returned by the method Arc().)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_RstRstConstRad , shared_ptr<BRepBlend_RstRstConstRad> , Blend_RstRstFunction>>(m.attr("BRepBlend_RstRstConstRad"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("Surf1"),  py::arg("Rst1"),  py::arg("Surf2"),  py::arg("Rst2"),  py::arg("CGuide") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Integer (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::NbVariables),
             R"#(Returns 2.)#" )
        .def("NbEquations",
             (Standard_Integer (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Integer (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::NbEquations),
             R"#(Returns 2.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_RstRstConstRad::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_RstRstConstRad::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_RstRstConstRad::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_RstRstConstRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_RstRstConstRad::Set),
             R"#(None)#"  , py::arg("SurfRef1"),  py::arg("RstRef1"),  py::arg("SurfRef2"),  py::arg("RstRef2"))
        .def("Set",
             (void (BRepBlend_RstRstConstRad::*)( const Standard_Real ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( const Standard_Real ) >(&BRepBlend_RstRstConstRad::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BRepBlend_RstRstConstRad::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( const Standard_Real , const Standard_Real ) >(&BRepBlend_RstRstConstRad::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BRepBlend_RstRstConstRad::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_RstRstConstRad::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_RstRstConstRad::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_RstRstConstRad::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_RstRstConstRad::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_RstRstConstRad::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_RstRstConstRad::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnRst1",
             (const gp_Pnt & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::PointOnRst1),
             R"#(None)#" )
        .def("PointOnRst2",
             (const gp_Pnt & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::PointOnRst2),
             R"#(None)#" )
        .def("Pnt2dOnRst1",
             (const gp_Pnt2d & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::Pnt2dOnRst1),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("Pnt2dOnRst2",
             (const gp_Pnt2d & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::Pnt2dOnRst2),
             R"#(Returns U,V coordinates of the point on the curve on surface.)#" )
        .def("ParameterOnRst1",
             (Standard_Real (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::ParameterOnRst1),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("ParameterOnRst2",
             (Standard_Real (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::ParameterOnRst2),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnRst1",
             (const gp_Vec & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Vec & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::TangentOnRst1),
             R"#(None)#" )
        .def("Tangent2dOnRst1",
             (const gp_Vec2d & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::Tangent2dOnRst1),
             R"#(None)#" )
        .def("TangentOnRst2",
             (const gp_Vec & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Vec & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::TangentOnRst2),
             R"#(None)#" )
        .def("Tangent2dOnRst2",
             (const gp_Vec2d & (BRepBlend_RstRstConstRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::Tangent2dOnRst2),
             R"#(None)#" )
        .def("Decroch",
             (Blend_DecrochStatus (BRepBlend_RstRstConstRad::*)( const math_Vector & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<Blend_DecrochStatus (BRepBlend_RstRstConstRad::*)( const math_Vector & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&BRepBlend_RstRstConstRad::Decroch),
             R"#(Permet d ' implementer un critere de decrochage specifique a la fonction.)#"  , py::arg("Sol"),  py::arg("NRst1"),  py::arg("TgRst1"),  py::arg("NRst2"),  py::arg("TgRst2"))
        .def("Set",
             (void (BRepBlend_RstRstConstRad::*)( const Standard_Real , const Standard_Integer ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( const Standard_Real , const Standard_Integer ) >(&BRepBlend_RstRstConstRad::Set),
             R"#(None)#"  , py::arg("Radius"),  py::arg("Choix"))
        .def("Set",
             (void (BRepBlend_RstRstConstRad::*)( const BlendFunc_SectionShape ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( const BlendFunc_SectionShape ) >(&BRepBlend_RstRstConstRad::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("CenterCircleRst1Rst2",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)( const gp_Pnt & , const gp_Pnt & , const gp_Vec & , gp_Pnt & , gp_Vec & ) const) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)( const gp_Pnt & , const gp_Pnt & , const gp_Vec & , gp_Pnt & , gp_Vec & ) const>(&BRepBlend_RstRstConstRad::CenterCircleRst1Rst2),
             R"#(Give the center of circle define by PtRst1, PtRst2 and radius ray.)#"  , py::arg("PtRst1"),  py::arg("PtRst2"),  py::arg("np"),  py::arg("Center"),  py::arg("VdMed"))
        .def("IsRational",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BRepBlend_RstRstConstRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstConstRad::*)() const>(&BRepBlend_RstRstConstRad::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepBlend_RstRstConstRad::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BRepBlend_RstRstConstRad::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (BRepBlend_RstRstConstRad::*)( const GeomAbs_Shape ) const>(&BRepBlend_RstRstConstRad::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&BRepBlend_RstRstConstRad::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>. The array must provide enough room to accomodate for the parameters. i.e. T.Length() > NbIntervals())#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (BRepBlend_RstRstConstRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_RstRstConstRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const>(&BRepBlend_RstRstConstRad::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstConstRad::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Integer> & ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( NCollection_Array1<Standard_Integer> & ) >(&BRepBlend_RstRstConstRad::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstConstRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BRepBlend_RstRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_RstRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstConstRad::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Section",
             (Standard_Boolean (BRepBlend_RstRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstConstRad::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BRepBlend_RstRstConstRad &self , const Standard_Real Param,const Standard_Real U,const Standard_Real V,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U,V,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("C"))
        .def("GetShape",
             []( BRepBlend_RstRstConstRad &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BRepBlend_RstRstConstRad &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_RstRstEvolRad , shared_ptr<BRepBlend_RstRstEvolRad> , Blend_RstRstFunction>>(m.attr("BRepBlend_RstRstEvolRad"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("Surf1"),  py::arg("Rst1"),  py::arg("Surf2"),  py::arg("Rst2"),  py::arg("CGuide"),  py::arg("Evol") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Integer (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::NbVariables),
             R"#(Returns 2.)#" )
        .def("NbEquations",
             (Standard_Integer (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Integer (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::NbEquations),
             R"#(Returns 2.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_RstRstEvolRad::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_RstRstEvolRad::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_RstRstEvolRad::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_RstRstEvolRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_RstRstEvolRad::Set),
             R"#(None)#"  , py::arg("SurfRef1"),  py::arg("RstRef1"),  py::arg("SurfRef2"),  py::arg("RstRef2"))
        .def("Set",
             (void (BRepBlend_RstRstEvolRad::*)( const Standard_Real ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( const Standard_Real ) >(&BRepBlend_RstRstEvolRad::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BRepBlend_RstRstEvolRad::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( const Standard_Real , const Standard_Real ) >(&BRepBlend_RstRstEvolRad::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BRepBlend_RstRstEvolRad::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_RstRstEvolRad::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_RstRstEvolRad::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_RstRstEvolRad::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_RstRstEvolRad::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_RstRstEvolRad::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_RstRstEvolRad::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnRst1",
             (const gp_Pnt & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::PointOnRst1),
             R"#(None)#" )
        .def("PointOnRst2",
             (const gp_Pnt & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::PointOnRst2),
             R"#(None)#" )
        .def("Pnt2dOnRst1",
             (const gp_Pnt2d & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::Pnt2dOnRst1),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("Pnt2dOnRst2",
             (const gp_Pnt2d & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::Pnt2dOnRst2),
             R"#(Returns U,V coordinates of the point on the curve on surface.)#" )
        .def("ParameterOnRst1",
             (Standard_Real (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::ParameterOnRst1),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("ParameterOnRst2",
             (Standard_Real (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::ParameterOnRst2),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnRst1",
             (const gp_Vec & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Vec & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::TangentOnRst1),
             R"#(None)#" )
        .def("Tangent2dOnRst1",
             (const gp_Vec2d & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::Tangent2dOnRst1),
             R"#(None)#" )
        .def("TangentOnRst2",
             (const gp_Vec & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Vec & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::TangentOnRst2),
             R"#(None)#" )
        .def("Tangent2dOnRst2",
             (const gp_Vec2d & (BRepBlend_RstRstEvolRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::Tangent2dOnRst2),
             R"#(None)#" )
        .def("Decroch",
             (Blend_DecrochStatus (BRepBlend_RstRstEvolRad::*)( const math_Vector & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<Blend_DecrochStatus (BRepBlend_RstRstEvolRad::*)( const math_Vector & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&BRepBlend_RstRstEvolRad::Decroch),
             R"#(Enables implementation of a criterion of decrochage specific to the function.)#"  , py::arg("Sol"),  py::arg("NRst1"),  py::arg("TgRst1"),  py::arg("NRst2"),  py::arg("TgRst2"))
        .def("Set",
             (void (BRepBlend_RstRstEvolRad::*)( const Standard_Integer ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( const Standard_Integer ) >(&BRepBlend_RstRstEvolRad::Set),
             R"#(None)#"  , py::arg("Choix"))
        .def("Set",
             (void (BRepBlend_RstRstEvolRad::*)( const BlendFunc_SectionShape ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( const BlendFunc_SectionShape ) >(&BRepBlend_RstRstEvolRad::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("CenterCircleRst1Rst2",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const gp_Pnt & , const gp_Pnt & , const gp_Vec & , gp_Pnt & , gp_Vec & ) const) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const gp_Pnt & , const gp_Pnt & , const gp_Vec & , gp_Pnt & , gp_Vec & ) const>(&BRepBlend_RstRstEvolRad::CenterCircleRst1Rst2),
             R"#(Gives the center of circle defined by PtRst1, PtRst2 and radius ray.)#"  , py::arg("PtRst1"),  py::arg("PtRst2"),  py::arg("np"),  py::arg("Center"),  py::arg("VdMed"))
        .def("IsRational",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BRepBlend_RstRstEvolRad::*)() const) static_cast<Standard_Real (BRepBlend_RstRstEvolRad::*)() const>(&BRepBlend_RstRstEvolRad::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepBlend_RstRstEvolRad::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BRepBlend_RstRstEvolRad::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (BRepBlend_RstRstEvolRad::*)( const GeomAbs_Shape ) const>(&BRepBlend_RstRstEvolRad::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&BRepBlend_RstRstEvolRad::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>. The array must provide enough room to accomodate for the parameters. i.e. T.Length() > NbIntervals())#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (BRepBlend_RstRstEvolRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_RstRstEvolRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const>(&BRepBlend_RstRstEvolRad::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstEvolRad::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Integer> & ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( NCollection_Array1<Standard_Integer> & ) >(&BRepBlend_RstRstEvolRad::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstEvolRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (BRepBlend_RstRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_RstRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstEvolRad::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Section",
             (Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_RstRstEvolRad::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BRepBlend_RstRstEvolRad &self , const Standard_Real Param,const Standard_Real U,const Standard_Real V,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U,V,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("C"))
        .def("GetShape",
             []( BRepBlend_RstRstEvolRad &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BRepBlend_RstRstEvolRad &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_RstRstLineBuilder , shared_ptr<BRepBlend_RstRstLineBuilder> >>(m.attr("BRepBlend_RstRstLineBuilder"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_TopolTool> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_TopolTool> & >()  , py::arg("Surf1"),  py::arg("Rst1"),  py::arg("Domain1"),  py::arg("Surf2"),  py::arg("Rst2"),  py::arg("Domain2") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepBlend_RstRstLineBuilder::*)( Blend_RstRstFunction & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (BRepBlend_RstRstLineBuilder::*)( Blend_RstRstFunction & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&BRepBlend_RstRstLineBuilder::Perform),
             R"#(None)#"  , py::arg("Func"),  py::arg("Finv1"),  py::arg("FinvP1"),  py::arg("Finv2"),  py::arg("FinvP2"),  py::arg("Pdep"),  py::arg("Pmax"),  py::arg("MaxStep"),  py::arg("TolGuide"),  py::arg("Soldep"),  py::arg("Tolesp"),  py::arg("Fleche"),  py::arg("Appro")=static_cast<const Standard_Boolean>(Standard_False))
        .def("PerformFirstSection",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)( Blend_RstRstFunction & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)( Blend_RstRstFunction & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , Standard_Real & , math_Vector & ) >(&BRepBlend_RstRstLineBuilder::PerformFirstSection),
             R"#(None)#"  , py::arg("Func"),  py::arg("Finv1"),  py::arg("FinvP1"),  py::arg("Finv2"),  py::arg("FinvP2"),  py::arg("Pdep"),  py::arg("Pmax"),  py::arg("Soldep"),  py::arg("Tolesp"),  py::arg("TolGuide"),  py::arg("RecRst1"),  py::arg("RecP1"),  py::arg("RecRst2"),  py::arg("RecP2"),  py::arg("Psol"),  py::arg("ParSol"))
        .def("Complete",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)( Blend_RstRstFunction & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)( Blend_RstRstFunction & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , Blend_SurfCurvFuncInv & , Blend_CurvPointFuncInv & , const Standard_Real ) >(&BRepBlend_RstRstLineBuilder::Complete),
             R"#(None)#"  , py::arg("Func"),  py::arg("Finv1"),  py::arg("FinvP1"),  py::arg("Finv2"),  py::arg("FinvP2"),  py::arg("Pmin"))
        .def("IsDone",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::IsDone),
             R"#(None)#" )
        .def("Line",
             (const opencascade::handle<BRepBlend_Line> & (BRepBlend_RstRstLineBuilder::*)() const) static_cast<const opencascade::handle<BRepBlend_Line> & (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Line),
             R"#(None)#" )
        .def("Decroch1Start",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch1Start),
             R"#(None)#" )
        .def("Decroch1End",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch1End),
             R"#(None)#" )
        .def("Decroch2Start",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch2Start),
             R"#(None)#" )
        .def("Decroch2End",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch2End),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::IsDone),
             R"#(None)#" )
        .def("Line",
             (const opencascade::handle<BRepBlend_Line> & (BRepBlend_RstRstLineBuilder::*)() const) static_cast<const opencascade::handle<BRepBlend_Line> & (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Line),
             R"#(None)#" )
        .def("Decroch1Start",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch1Start),
             R"#(None)#" )
        .def("Decroch1End",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch1End),
             R"#(None)#" )
        .def("Decroch2Start",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch2Start),
             R"#(None)#" )
        .def("Decroch2End",
             (Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_RstRstLineBuilder::*)() const>(&BRepBlend_RstRstLineBuilder::Decroch2End),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_SurfCurvConstRadInv , shared_ptr<BRepBlend_SurfCurvConstRadInv> , Blend_SurfCurvFuncInv>>(m.attr("BRepBlend_SurfCurvConstRadInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S"),  py::arg("C"),  py::arg("Cg") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepBlend_SurfCurvConstRadInv::*)( const Standard_Real , const Standard_Integer ) ) static_cast<void (BRepBlend_SurfCurvConstRadInv::*)( const Standard_Real , const Standard_Integer ) >(&BRepBlend_SurfCurvConstRadInv::Set),
             R"#(None)#"  , py::arg("R"),  py::arg("Choix"))
        .def("NbEquations",
             (Standard_Integer (BRepBlend_SurfCurvConstRadInv::*)() const) static_cast<Standard_Integer (BRepBlend_SurfCurvConstRadInv::*)() const>(&BRepBlend_SurfCurvConstRadInv::NbEquations),
             R"#(returns 3.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_SurfCurvConstRadInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_SurfCurvConstRadInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_SurfCurvConstRadInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_SurfCurvConstRadInv::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (BRepBlend_SurfCurvConstRadInv::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_SurfCurvConstRadInv::Set),
             R"#(Set the restriction on which a solution has to be found.)#"  , py::arg("Rst"))
        .def("GetTolerance",
             (void (BRepBlend_SurfCurvConstRadInv::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_SurfCurvConstRadInv::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_SurfCurvConstRadInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_SurfCurvConstRadInv::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfCurvConstRadInv::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_SurfCurvConstRadInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvConstRadInv::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_SurfCurvConstRadInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_SurfCurvEvolRadInv , shared_ptr<BRepBlend_SurfCurvEvolRadInv> , Blend_SurfCurvFuncInv>>(m.attr("BRepBlend_SurfCurvEvolRadInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S"),  py::arg("C"),  py::arg("Cg"),  py::arg("Evol") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepBlend_SurfCurvEvolRadInv::*)( const Standard_Integer ) ) static_cast<void (BRepBlend_SurfCurvEvolRadInv::*)( const Standard_Integer ) >(&BRepBlend_SurfCurvEvolRadInv::Set),
             R"#(None)#"  , py::arg("Choix"))
        .def("NbEquations",
             (Standard_Integer (BRepBlend_SurfCurvEvolRadInv::*)() const) static_cast<Standard_Integer (BRepBlend_SurfCurvEvolRadInv::*)() const>(&BRepBlend_SurfCurvEvolRadInv::NbEquations),
             R"#(returns 3.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_SurfCurvEvolRadInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_SurfCurvEvolRadInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_SurfCurvEvolRadInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_SurfCurvEvolRadInv::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (BRepBlend_SurfCurvEvolRadInv::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_SurfCurvEvolRadInv::Set),
             R"#(Set the restriction on which a solution has to be found.)#"  , py::arg("Rst"))
        .def("GetTolerance",
             (void (BRepBlend_SurfCurvEvolRadInv::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_SurfCurvEvolRadInv::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_SurfCurvEvolRadInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_SurfCurvEvolRadInv::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfCurvEvolRadInv::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_SurfCurvEvolRadInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_SurfCurvEvolRadInv::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_SurfCurvEvolRadInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_SurfPointConstRadInv , shared_ptr<BRepBlend_SurfPointConstRadInv> , Blend_SurfPointFuncInv>>(m.attr("BRepBlend_SurfPointConstRadInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepBlend_SurfPointConstRadInv::*)( const Standard_Real , const Standard_Integer ) ) static_cast<void (BRepBlend_SurfPointConstRadInv::*)( const Standard_Real , const Standard_Integer ) >(&BRepBlend_SurfPointConstRadInv::Set),
             R"#(None)#"  , py::arg("R"),  py::arg("Choix"))
        .def("NbEquations",
             (Standard_Integer (BRepBlend_SurfPointConstRadInv::*)() const) static_cast<Standard_Integer (BRepBlend_SurfPointConstRadInv::*)() const>(&BRepBlend_SurfPointConstRadInv::NbEquations),
             R"#(returns 3.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_SurfPointConstRadInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_SurfPointConstRadInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_SurfPointConstRadInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_SurfPointConstRadInv::*)( const gp_Pnt & ) ) static_cast<void (BRepBlend_SurfPointConstRadInv::*)( const gp_Pnt & ) >(&BRepBlend_SurfPointConstRadInv::Set),
             R"#(Set the Point on which a solution has to be found.)#"  , py::arg("P"))
        .def("GetTolerance",
             (void (BRepBlend_SurfPointConstRadInv::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_SurfPointConstRadInv::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_SurfPointConstRadInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_SurfPointConstRadInv::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfPointConstRadInv::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_SurfPointConstRadInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointConstRadInv::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_SurfPointConstRadInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_SurfPointEvolRadInv , shared_ptr<BRepBlend_SurfPointEvolRadInv> , Blend_SurfPointFuncInv>>(m.attr("BRepBlend_SurfPointEvolRadInv"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("S"),  py::arg("C"),  py::arg("Evol") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepBlend_SurfPointEvolRadInv::*)( const Standard_Integer ) ) static_cast<void (BRepBlend_SurfPointEvolRadInv::*)( const Standard_Integer ) >(&BRepBlend_SurfPointEvolRadInv::Set),
             R"#(None)#"  , py::arg("Choix"))
        .def("NbEquations",
             (Standard_Integer (BRepBlend_SurfPointEvolRadInv::*)() const) static_cast<Standard_Integer (BRepBlend_SurfPointEvolRadInv::*)() const>(&BRepBlend_SurfPointEvolRadInv::NbEquations),
             R"#(returns 3.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_SurfPointEvolRadInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_SurfPointEvolRadInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_SurfPointEvolRadInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_SurfPointEvolRadInv::*)( const gp_Pnt & ) ) static_cast<void (BRepBlend_SurfPointEvolRadInv::*)( const gp_Pnt & ) >(&BRepBlend_SurfPointEvolRadInv::Set),
             R"#(Set the Point on which a solution has to be found.)#"  , py::arg("P"))
        .def("GetTolerance",
             (void (BRepBlend_SurfPointEvolRadInv::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_SurfPointEvolRadInv::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_SurfPointEvolRadInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_SurfPointEvolRadInv::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfPointEvolRadInv::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_SurfPointEvolRadInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_SurfPointEvolRadInv::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_SurfPointEvolRadInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_SurfRstConstRad , shared_ptr<BRepBlend_SurfRstConstRad> , Blend_SurfRstFunction>>(m.attr("BRepBlend_SurfRstConstRad"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("Surf"),  py::arg("SurfRst"),  py::arg("Rst"),  py::arg("CGuide") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepBlend_SurfRstConstRad::*)() const) static_cast<Standard_Integer (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::NbVariables),
             R"#(Returns 3.)#" )
        .def("NbEquations",
             (Standard_Integer (BRepBlend_SurfRstConstRad::*)() const) static_cast<Standard_Integer (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::NbEquations),
             R"#(Returns 3.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_SurfRstConstRad::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_SurfRstConstRad::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_SurfRstConstRad::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_SurfRstConstRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_SurfRstConstRad::Set),
             R"#(None)#"  , py::arg("SurfRef"),  py::arg("RstRef"))
        .def("Set",
             (void (BRepBlend_SurfRstConstRad::*)( const Standard_Real ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( const Standard_Real ) >(&BRepBlend_SurfRstConstRad::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BRepBlend_SurfRstConstRad::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( const Standard_Real , const Standard_Real ) >(&BRepBlend_SurfRstConstRad::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BRepBlend_SurfRstConstRad::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_SurfRstConstRad::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_SurfRstConstRad::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_SurfRstConstRad::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfRstConstRad::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_SurfRstConstRad::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_SurfRstConstRad::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BRepBlend_SurfRstConstRad::*)() const) static_cast<Standard_Real (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnS",
             (const gp_Pnt & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::PointOnS),
             R"#(None)#" )
        .def("PointOnRst",
             (const gp_Pnt & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::PointOnRst),
             R"#(None)#" )
        .def("Pnt2dOnS",
             (const gp_Pnt2d & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::Pnt2dOnS),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("Pnt2dOnRst",
             (const gp_Pnt2d & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::Pnt2dOnRst),
             R"#(Returns U,V coordinates of the point on the curve on surface.)#" )
        .def("ParameterOnRst",
             (Standard_Real (BRepBlend_SurfRstConstRad::*)() const) static_cast<Standard_Real (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::ParameterOnRst),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS",
             (const gp_Vec & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Vec & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::TangentOnS),
             R"#(None)#" )
        .def("Tangent2dOnS",
             (const gp_Vec2d & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::Tangent2dOnS),
             R"#(None)#" )
        .def("TangentOnRst",
             (const gp_Vec & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Vec & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::TangentOnRst),
             R"#(None)#" )
        .def("Tangent2dOnRst",
             (const gp_Vec2d & (BRepBlend_SurfRstConstRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::Tangent2dOnRst),
             R"#(None)#" )
        .def("Decroch",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , gp_Vec & , gp_Vec & ) const) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const math_Vector & , gp_Vec & , gp_Vec & ) const>(&BRepBlend_SurfRstConstRad::Decroch),
             R"#(Enables implementation of a criterion of decrochage specific to the function. Warning: Can be called without previous call of issolution but the values calculated can be senseless.)#"  , py::arg("Sol"),  py::arg("NS"),  py::arg("TgS"))
        .def("Set",
             (void (BRepBlend_SurfRstConstRad::*)( const Standard_Real , const Standard_Integer ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( const Standard_Real , const Standard_Integer ) >(&BRepBlend_SurfRstConstRad::Set),
             R"#(None)#"  , py::arg("Radius"),  py::arg("Choix"))
        .def("Set",
             (void (BRepBlend_SurfRstConstRad::*)( const BlendFunc_SectionShape ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( const BlendFunc_SectionShape ) >(&BRepBlend_SurfRstConstRad::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("IsRational",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BRepBlend_SurfRstConstRad::*)() const) static_cast<Standard_Real (BRepBlend_SurfRstConstRad::*)() const>(&BRepBlend_SurfRstConstRad::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepBlend_SurfRstConstRad::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BRepBlend_SurfRstConstRad::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (BRepBlend_SurfRstConstRad::*)( const GeomAbs_Shape ) const>(&BRepBlend_SurfRstConstRad::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&BRepBlend_SurfRstConstRad::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>. The array must provide enough room to accomodate for the parameters. i.e. T.Length() > NbIntervals())#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (BRepBlend_SurfRstConstRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfRstConstRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const>(&BRepBlend_SurfRstConstRad::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstConstRad::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Integer> & ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( NCollection_Array1<Standard_Integer> & ) >(&BRepBlend_SurfRstConstRad::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstConstRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstConstRad::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (void (BRepBlend_SurfRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_SurfRstConstRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstConstRad::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BRepBlend_SurfRstConstRad &self , const Standard_Real Param,const Standard_Real U,const Standard_Real V,const Standard_Real W,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U,V,W,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("C"))
        .def("GetShape",
             []( BRepBlend_SurfRstConstRad &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BRepBlend_SurfRstConstRad &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_SurfRstEvolRad , shared_ptr<BRepBlend_SurfRstEvolRad> , Blend_SurfRstFunction>>(m.attr("BRepBlend_SurfRstEvolRad"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Law_Function> & >()  , py::arg("Surf"),  py::arg("SurfRst"),  py::arg("Rst"),  py::arg("CGuide"),  py::arg("Evol") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepBlend_SurfRstEvolRad::*)() const) static_cast<Standard_Integer (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::NbVariables),
             R"#(Returns 3.)#" )
        .def("NbEquations",
             (Standard_Integer (BRepBlend_SurfRstEvolRad::*)() const) static_cast<Standard_Integer (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::NbEquations),
             R"#(Returns 3.)#" )
        .def("Value",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , math_Vector & ) >(&BRepBlend_SurfRstEvolRad::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , math_Matrix & ) >(&BRepBlend_SurfRstEvolRad::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepBlend_SurfRstEvolRad::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (BRepBlend_SurfRstEvolRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&BRepBlend_SurfRstEvolRad::Set),
             R"#(None)#"  , py::arg("SurfRef"),  py::arg("RstRef"))
        .def("Set",
             (void (BRepBlend_SurfRstEvolRad::*)( const Standard_Real ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( const Standard_Real ) >(&BRepBlend_SurfRstEvolRad::Set),
             R"#(None)#"  , py::arg("Param"))
        .def("Set",
             (void (BRepBlend_SurfRstEvolRad::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( const Standard_Real , const Standard_Real ) >(&BRepBlend_SurfRstEvolRad::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (BRepBlend_SurfRstEvolRad::*)( math_Vector & , const Standard_Real ) const) static_cast<void (BRepBlend_SurfRstEvolRad::*)( math_Vector & , const Standard_Real ) const>(&BRepBlend_SurfRstEvolRad::GetTolerance),
             R"#(None)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (BRepBlend_SurfRstEvolRad::*)( math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfRstEvolRad::*)( math_Vector & , math_Vector & ) const>(&BRepBlend_SurfRstEvolRad::GetBounds),
             R"#(None)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , const Standard_Real ) >(&BRepBlend_SurfRstEvolRad::IsSolution),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (BRepBlend_SurfRstEvolRad::*)() const) static_cast<Standard_Real (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("PointOnS",
             (const gp_Pnt & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::PointOnS),
             R"#(None)#" )
        .def("PointOnRst",
             (const gp_Pnt & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Pnt & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::PointOnRst),
             R"#(None)#" )
        .def("Pnt2dOnS",
             (const gp_Pnt2d & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::Pnt2dOnS),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("Pnt2dOnRst",
             (const gp_Pnt2d & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Pnt2d & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::Pnt2dOnRst),
             R"#(Returns U,V coordinates of the point on the curve on surface.)#" )
        .def("ParameterOnRst",
             (Standard_Real (BRepBlend_SurfRstEvolRad::*)() const) static_cast<Standard_Real (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::ParameterOnRst),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::IsTangencyPoint),
             R"#(None)#" )
        .def("TangentOnS",
             (const gp_Vec & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Vec & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::TangentOnS),
             R"#(None)#" )
        .def("Tangent2dOnS",
             (const gp_Vec2d & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::Tangent2dOnS),
             R"#(None)#" )
        .def("TangentOnRst",
             (const gp_Vec & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Vec & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::TangentOnRst),
             R"#(None)#" )
        .def("Tangent2dOnRst",
             (const gp_Vec2d & (BRepBlend_SurfRstEvolRad::*)() const) static_cast<const gp_Vec2d & (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::Tangent2dOnRst),
             R"#(None)#" )
        .def("Decroch",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , gp_Vec & , gp_Vec & ) const) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const math_Vector & , gp_Vec & , gp_Vec & ) const>(&BRepBlend_SurfRstEvolRad::Decroch),
             R"#(Permet d ' implementer un critere de decrochage specifique a la fonction.)#"  , py::arg("Sol"),  py::arg("NS"),  py::arg("TgS"))
        .def("Set",
             (void (BRepBlend_SurfRstEvolRad::*)( const Standard_Integer ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( const Standard_Integer ) >(&BRepBlend_SurfRstEvolRad::Set),
             R"#(None)#"  , py::arg("Choix"))
        .def("Set",
             (void (BRepBlend_SurfRstEvolRad::*)( const BlendFunc_SectionShape ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( const BlendFunc_SectionShape ) >(&BRepBlend_SurfRstEvolRad::Set),
             R"#(Sets the type of section generation for the approximations.)#"  , py::arg("TypeSection"))
        .def("IsRational",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (BRepBlend_SurfRstEvolRad::*)() const) static_cast<Standard_Real (BRepBlend_SurfRstEvolRad::*)() const>(&BRepBlend_SurfRstEvolRad::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) const>(&BRepBlend_SurfRstEvolRad::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (BRepBlend_SurfRstEvolRad::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (BRepBlend_SurfRstEvolRad::*)( const GeomAbs_Shape ) const>(&BRepBlend_SurfRstEvolRad::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&BRepBlend_SurfRstEvolRad::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>. The array must provide enough room to accomodate for the parameters. i.e. T.Length() > NbIntervals())#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (BRepBlend_SurfRstEvolRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const) static_cast<void (BRepBlend_SurfRstEvolRad::*)( const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , math_Vector & ) const>(&BRepBlend_SurfRstEvolRad::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstEvolRad::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Integer> & ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( NCollection_Array1<Standard_Integer> & ) >(&BRepBlend_SurfRstEvolRad::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstEvolRad::Section),
             R"#(Used for the first and last section)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstEvolRad::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (void (BRepBlend_SurfRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepBlend_SurfRstEvolRad::*)( const Blend_Point & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&BRepBlend_SurfRstEvolRad::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
    // methods using call by reference i.s.o. return
        .def("Section",
             []( BRepBlend_SurfRstEvolRad &self , const Standard_Real Param,const Standard_Real U,const Standard_Real V,const Standard_Real W,gp_Circ & C ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.Section(Param,U,V,W,Pdeb,Pfin,C); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#"  , py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("C"))
        .def("GetShape",
             []( BRepBlend_SurfRstEvolRad &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( BRepBlend_SurfRstEvolRad &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_SurfRstLineBuilder , shared_ptr<BRepBlend_SurfRstLineBuilder> >>(m.attr("BRepBlend_SurfRstLineBuilder"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_TopolTool> & >()  , py::arg("Surf1"),  py::arg("Domain1"),  py::arg("Surf2"),  py::arg("Rst"),  py::arg("Domain2") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepBlend_SurfRstLineBuilder::*)( Blend_SurfRstFunction & , Blend_FuncInv & , Blend_SurfPointFuncInv & , Blend_SurfCurvFuncInv & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (BRepBlend_SurfRstLineBuilder::*)( Blend_SurfRstFunction & , Blend_FuncInv & , Blend_SurfPointFuncInv & , Blend_SurfCurvFuncInv & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&BRepBlend_SurfRstLineBuilder::Perform),
             R"#(None)#"  , py::arg("Func"),  py::arg("Finv"),  py::arg("FinvP"),  py::arg("FinvC"),  py::arg("Pdep"),  py::arg("Pmax"),  py::arg("MaxStep"),  py::arg("TolGuide"),  py::arg("Soldep"),  py::arg("Tolesp"),  py::arg("Fleche"),  py::arg("Appro")=static_cast<const Standard_Boolean>(Standard_False))
        .def("PerformFirstSection",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)( Blend_SurfRstFunction & , Blend_FuncInv & , Blend_SurfPointFuncInv & , Blend_SurfCurvFuncInv & , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)( Blend_SurfRstFunction & , Blend_FuncInv & , Blend_SurfPointFuncInv & , Blend_SurfCurvFuncInv & , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , Standard_Real & , math_Vector & ) >(&BRepBlend_SurfRstLineBuilder::PerformFirstSection),
             R"#(None)#"  , py::arg("Func"),  py::arg("Finv"),  py::arg("FinvP"),  py::arg("FinvC"),  py::arg("Pdep"),  py::arg("Pmax"),  py::arg("Soldep"),  py::arg("Tolesp"),  py::arg("TolGuide"),  py::arg("RecRst"),  py::arg("RecP"),  py::arg("RecS"),  py::arg("Psol"),  py::arg("ParSol"))
        .def("Complete",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)( Blend_SurfRstFunction & , Blend_FuncInv & , Blend_SurfPointFuncInv & , Blend_SurfCurvFuncInv & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)( Blend_SurfRstFunction & , Blend_FuncInv & , Blend_SurfPointFuncInv & , Blend_SurfCurvFuncInv & , const Standard_Real ) >(&BRepBlend_SurfRstLineBuilder::Complete),
             R"#(None)#"  , py::arg("Func"),  py::arg("Finv"),  py::arg("FinvP"),  py::arg("FinvC"),  py::arg("Pmin"))
        .def("ArcToRecadre",
             (Standard_Integer (BRepBlend_SurfRstLineBuilder::*)( const math_Vector & , const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & , Standard_Real & ) ) static_cast<Standard_Integer (BRepBlend_SurfRstLineBuilder::*)( const math_Vector & , const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & , Standard_Real & ) >(&BRepBlend_SurfRstLineBuilder::ArcToRecadre),
             R"#(None)#"  , py::arg("Sol"),  py::arg("PrevIndex"),  py::arg("pt2d"),  py::arg("lastpt2d"),  py::arg("ponarc"))
        .def("IsDone",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::IsDone),
             R"#(None)#" )
        .def("Line",
             (const opencascade::handle<BRepBlend_Line> & (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<const opencascade::handle<BRepBlend_Line> & (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::Line),
             R"#(None)#" )
        .def("DecrochStart",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::DecrochStart),
             R"#(None)#" )
        .def("DecrochEnd",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::DecrochEnd),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::IsDone),
             R"#(None)#" )
        .def("Line",
             (const opencascade::handle<BRepBlend_Line> & (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<const opencascade::handle<BRepBlend_Line> & (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::Line),
             R"#(None)#" )
        .def("DecrochStart",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::DecrochStart),
             R"#(None)#" )
        .def("DecrochEnd",
             (Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const) static_cast<Standard_Boolean (BRepBlend_SurfRstLineBuilder::*)() const>(&BRepBlend_SurfRstLineBuilder::DecrochEnd),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_Walking , shared_ptr<BRepBlend_Walking> >>(m.attr("BRepBlend_Walking"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_TopolTool> &,const opencascade::handle<Adaptor3d_TopolTool> &,const opencascade::handle<ChFiDS_HElSpine> & >()  , py::arg("Surf1"),  py::arg("Surf2"),  py::arg("Domain1"),  py::arg("Domain2"),  py::arg("HGuide") )
    // custom constructors
    // methods
        .def("SetDomainsToRecadre",
             (void (BRepBlend_Walking::*)( const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_TopolTool> & ) ) static_cast<void (BRepBlend_Walking::*)( const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_TopolTool> & ) >(&BRepBlend_Walking::SetDomainsToRecadre),
             R"#(To define different domains for control and clipping.)#"  , py::arg("RecDomain1"),  py::arg("RecDomain2"))
        .def("AddSingularPoint",
             (void (BRepBlend_Walking::*)( const Blend_Point & ) ) static_cast<void (BRepBlend_Walking::*)( const Blend_Point & ) >(&BRepBlend_Walking::AddSingularPoint),
             R"#(To define singular points computed before walking.)#"  , py::arg("P"))
        .def("Perform",
             (void (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&BRepBlend_Walking::Perform),
             R"#(None)#"  , py::arg("F"),  py::arg("FInv"),  py::arg("Pdep"),  py::arg("Pmax"),  py::arg("MaxStep"),  py::arg("TolGuide"),  py::arg("Soldep"),  py::arg("Tolesp"),  py::arg("Fleche"),  py::arg("Appro")=static_cast<const Standard_Boolean>(Standard_False))
        .def("PerformFirstSection",
             (Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , const Standard_Real , math_Vector & , const Standard_Real , const Standard_Real , TopAbs_State & , TopAbs_State & ) ) static_cast<Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , const Standard_Real , math_Vector & , const Standard_Real , const Standard_Real , TopAbs_State & , TopAbs_State & ) >(&BRepBlend_Walking::PerformFirstSection),
             R"#(None)#"  , py::arg("F"),  py::arg("Pdep"),  py::arg("ParDep"),  py::arg("Tolesp"),  py::arg("TolGuide"),  py::arg("Pos1"),  py::arg("Pos2"))
        .def("PerformFirstSection",
             (Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real , const Standard_Real , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , Standard_Real & , math_Vector & ) >(&BRepBlend_Walking::PerformFirstSection),
             R"#(None)#"  , py::arg("F"),  py::arg("FInv"),  py::arg("Pdep"),  py::arg("Pmax"),  py::arg("ParDep"),  py::arg("Tolesp"),  py::arg("TolGuide"),  py::arg("RecOnS1"),  py::arg("RecOnS2"),  py::arg("Psol"),  py::arg("ParSol"))
        .def("Continu",
             (Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real ) >(&BRepBlend_Walking::Continu),
             R"#(None)#"  , py::arg("F"),  py::arg("FInv"),  py::arg("P"))
        .def("Continu",
             (Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real , const Standard_Boolean ) >(&BRepBlend_Walking::Continu),
             R"#(None)#"  , py::arg("F"),  py::arg("FInv"),  py::arg("P"),  py::arg("OnS1"))
        .def("Complete",
             (Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real ) ) static_cast<Standard_Boolean (BRepBlend_Walking::*)( Blend_Function & , Blend_FuncInv & , const Standard_Real ) >(&BRepBlend_Walking::Complete),
             R"#(None)#"  , py::arg("F"),  py::arg("FInv"),  py::arg("Pmin"))
        .def("ClassificationOnS1",
             (void (BRepBlend_Walking::*)( const Standard_Boolean ) ) static_cast<void (BRepBlend_Walking::*)( const Standard_Boolean ) >(&BRepBlend_Walking::ClassificationOnS1),
             R"#(None)#"  , py::arg("C"))
        .def("ClassificationOnS2",
             (void (BRepBlend_Walking::*)( const Standard_Boolean ) ) static_cast<void (BRepBlend_Walking::*)( const Standard_Boolean ) >(&BRepBlend_Walking::ClassificationOnS2),
             R"#(None)#"  , py::arg("C"))
        .def("Check2d",
             (void (BRepBlend_Walking::*)( const Standard_Boolean ) ) static_cast<void (BRepBlend_Walking::*)( const Standard_Boolean ) >(&BRepBlend_Walking::Check2d),
             R"#(None)#"  , py::arg("C"))
        .def("Check",
             (void (BRepBlend_Walking::*)( const Standard_Boolean ) ) static_cast<void (BRepBlend_Walking::*)( const Standard_Boolean ) >(&BRepBlend_Walking::Check),
             R"#(None)#"  , py::arg("C"))
        .def("TwistOnS1",
             (Standard_Boolean (BRepBlend_Walking::*)() const) static_cast<Standard_Boolean (BRepBlend_Walking::*)() const>(&BRepBlend_Walking::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (BRepBlend_Walking::*)() const) static_cast<Standard_Boolean (BRepBlend_Walking::*)() const>(&BRepBlend_Walking::TwistOnS2),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepBlend_Walking::*)() const) static_cast<Standard_Boolean (BRepBlend_Walking::*)() const>(&BRepBlend_Walking::IsDone),
             R"#(None)#" )
        .def("Line",
             (const opencascade::handle<BRepBlend_Line> & (BRepBlend_Walking::*)() const) static_cast<const opencascade::handle<BRepBlend_Line> & (BRepBlend_Walking::*)() const>(&BRepBlend_Walking::Line),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_AppFunc ,opencascade::handle<BRepBlend_AppFunc> , BRepBlend_AppFuncRoot>>(m.attr("BRepBlend_AppFunc"))
    // constructors
        .def(py::init< opencascade::handle<BRepBlend_Line> &,Blend_Function &,const Standard_Real,const Standard_Real >()  , py::arg("Line"),  py::arg("Func"),  py::arg("Tol3d"),  py::arg("Tol2d") )
    // custom constructors
    // methods
        .def("Point",
             (void (BRepBlend_AppFunc::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const) static_cast<void (BRepBlend_AppFunc::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const>(&BRepBlend_AppFunc::Point),
             R"#(None)#"  , py::arg("Func"),  py::arg("Param"),  py::arg("Sol"),  py::arg("Pnt"))
        .def("Vec",
             (void (BRepBlend_AppFunc::*)( math_Vector & , const Blend_Point & ) const) static_cast<void (BRepBlend_AppFunc::*)( math_Vector & , const Blend_Point & ) const>(&BRepBlend_AppFunc::Vec),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Pnt"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBlend_AppFunc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBlend_AppFunc::*)() const>(&BRepBlend_AppFunc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBlend_AppFunc::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepBlend_AppFunc::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_AppFuncRst ,opencascade::handle<BRepBlend_AppFuncRst> , BRepBlend_AppFuncRoot>>(m.attr("BRepBlend_AppFuncRst"))
    // constructors
        .def(py::init< opencascade::handle<BRepBlend_Line> &,Blend_SurfRstFunction &,const Standard_Real,const Standard_Real >()  , py::arg("Line"),  py::arg("Func"),  py::arg("Tol3d"),  py::arg("Tol2d") )
    // custom constructors
    // methods
        .def("Point",
             (void (BRepBlend_AppFuncRst::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const) static_cast<void (BRepBlend_AppFuncRst::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const>(&BRepBlend_AppFuncRst::Point),
             R"#(None)#"  , py::arg("Func"),  py::arg("Param"),  py::arg("Sol"),  py::arg("Pnt"))
        .def("Vec",
             (void (BRepBlend_AppFuncRst::*)( math_Vector & , const Blend_Point & ) const) static_cast<void (BRepBlend_AppFuncRst::*)( math_Vector & , const Blend_Point & ) const>(&BRepBlend_AppFuncRst::Vec),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Pnt"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBlend_AppFuncRst::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBlend_AppFuncRst::*)() const>(&BRepBlend_AppFuncRst::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBlend_AppFuncRst::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepBlend_AppFuncRst::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBlend_AppFuncRstRst ,opencascade::handle<BRepBlend_AppFuncRstRst> , BRepBlend_AppFuncRoot>>(m.attr("BRepBlend_AppFuncRstRst"))
    // constructors
        .def(py::init< opencascade::handle<BRepBlend_Line> &,Blend_RstRstFunction &,const Standard_Real,const Standard_Real >()  , py::arg("Line"),  py::arg("Func"),  py::arg("Tol3d"),  py::arg("Tol2d") )
    // custom constructors
    // methods
        .def("Point",
             (void (BRepBlend_AppFuncRstRst::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const) static_cast<void (BRepBlend_AppFuncRstRst::*)( const Blend_AppFunction & , const Standard_Real , const math_Vector & , Blend_Point & ) const>(&BRepBlend_AppFuncRstRst::Point),
             R"#(None)#"  , py::arg("Func"),  py::arg("Param"),  py::arg("Sol"),  py::arg("Pnt"))
        .def("Vec",
             (void (BRepBlend_AppFuncRstRst::*)( math_Vector & , const Blend_Point & ) const) static_cast<void (BRepBlend_AppFuncRstRst::*)( math_Vector & , const Blend_Point & ) const>(&BRepBlend_AppFuncRstRst::Vec),
             R"#(None)#"  , py::arg("Sol"),  py::arg("Pnt"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBlend_AppFuncRstRst::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBlend_AppFuncRstRst::*)() const>(&BRepBlend_AppFuncRstRst::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBlend_AppFuncRstRst::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepBlend_AppFuncRstRst::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepBlend_AppFuncRoot.hxx
// ./opencascade/BRepBlend_CurvPointRadInv.hxx
// ./opencascade/BRepBlend_SurfRstConstRad.hxx
// ./opencascade/BRepBlend_SurfPointConstRadInv.hxx
// ./opencascade/BRepBlend_RstRstConstRad.hxx
// ./opencascade/BRepBlend_AppSurf.hxx
// ./opencascade/BRepBlend_ConstThroatWithPenetrationInv.hxx
// ./opencascade/BRepBlend_SurfCurvEvolRadInv.hxx
// ./opencascade/BRepBlend_SurfPointEvolRadInv.hxx
// ./opencascade/BRepBlend_Walking.hxx
// ./opencascade/BRepBlend_Line.hxx
// ./opencascade/BRepBlend_ConstThroat.hxx
// ./opencascade/BRepBlend_EvolRadInv.hxx
// ./opencascade/BRepBlend_ConstRad.hxx
// ./opencascade/BRepBlend_BlendTool.hxx
// ./opencascade/BRepBlend_PointOnRst.hxx
// ./opencascade/BRepBlend_ConstRadInv.hxx
// ./opencascade/BRepBlend_SurfRstLineBuilder.hxx
// ./opencascade/BRepBlend_CSCircular.hxx
// ./opencascade/BRepBlend_Ruled.hxx
// ./opencascade/BRepBlend_RuledInv.hxx
// ./opencascade/BRepBlend_AppFuncRstRst.hxx
// ./opencascade/BRepBlend_CSConstRad.hxx
// ./opencascade/BRepBlend_AppFuncRst.hxx
// ./opencascade/BRepBlend_EvolRad.hxx
// ./opencascade/BRepBlend_AppFunc.hxx
// ./opencascade/BRepBlend_Chamfer.hxx
// ./opencascade/BRepBlend_ConstThroatInv.hxx
// ./opencascade/BRepBlend_HCurveTool.hxx
// ./opencascade/BRepBlend_ChAsymInv.hxx
// ./opencascade/BRepBlend_SequenceOfLine.hxx
// ./opencascade/BRepBlend_CSWalking.hxx
// ./opencascade/BRepBlend_ChamfInv.hxx
// ./opencascade/BRepBlend_ChAsym.hxx
// ./opencascade/BRepBlend_HCurve2dTool.hxx
// ./opencascade/BRepBlend_RstRstLineBuilder.hxx
// ./opencascade/BRepBlend_SequenceOfPointOnRst.hxx
// ./opencascade/BRepBlend_ConstThroatWithPenetration.hxx
// ./opencascade/BRepBlend_RstRstEvolRad.hxx
// ./opencascade/BRepBlend_Extremity.hxx
// ./opencascade/BRepBlend_SurfCurvConstRadInv.hxx
// ./opencascade/BRepBlend_SurfRstEvolRad.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<BRepBlend_Line> >(m,"BRepBlend_SequenceOfLine");
    register_template_NCollection_Sequence<BRepBlend_PointOnRst>(m,"BRepBlend_SequenceOfPointOnRst");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
