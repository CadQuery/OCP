
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
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
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <BRepBlend_Line.hxx>
#include <Blend_Function.hxx>
#include <Blend_AppFunction.hxx>
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
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <BRepBlend_Line.hxx>
#include <Blend_AppFunction.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <math_Matrix.hxx>
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
#include <Blend_AppFunction.hxx>
#include <BRepBlend_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepBlend_Line.hxx>
#include <Blend_SurfRstFunction.hxx>
#include <Blend_AppFunction.hxx>
#include <BRepBlend_Line.hxx>
#include <Blend_RstRstFunction.hxx>
#include <Blend_AppFunction.hxx>

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
void register_BRepBlend_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepBlend", R"#()#");

// user-defined inclusion per module in the body

// enums

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

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<BRepBlend_Line> >(m,"BRepBlend_SequenceOfLine");
    preregister_template_NCollection_Sequence<BRepBlend_PointOnRst>(m,"BRepBlend_SequenceOfPointOnRst");

// classes forward declarations only
    py::class_<BRepBlend_AppFuncRoot ,opencascade::handle<BRepBlend_AppFuncRoot>,Py_BRepBlend_AppFuncRoot , Approx_SweepFunction>(m,"BRepBlend_AppFuncRoot",R"#(Function to approximate by AppSurfaceFunction to approximate by AppSurfaceFunction to approximate by AppSurface)#");
    py::class_<BRepBlend_AppSurf , shared_ptr<BRepBlend_AppSurf> , AppBlend_Approx>(m,"BRepBlend_AppSurf",R"#(None)#");
    py::class_<BRepBlend_BlendTool , shared_ptr<BRepBlend_BlendTool> >(m,"BRepBlend_BlendTool",R"#(None)#");
    py::class_<BRepBlend_CSWalking , shared_ptr<BRepBlend_CSWalking> >(m,"BRepBlend_CSWalking",R"#(None)#");
    py::class_<BRepBlend_CurvPointRadInv , shared_ptr<BRepBlend_CurvPointRadInv> , Blend_CurvPointFuncInv>(m,"BRepBlend_CurvPointRadInv",R"#(Function of reframing between a point and a curve. valid in cases of constant and progressive radius. This function is used to find a solution on a done point of the curve 1 when using RstRstConsRad or CSConstRad... The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates w, U where w is the parameter on the guide line, U are the parametric coordinates of a point on the partner curve 2.)#");
    py::class_<BRepBlend_Extremity , shared_ptr<BRepBlend_Extremity> >(m,"BRepBlend_Extremity",R"#(None)#");
    py::class_<BRepBlend_HCurve2dTool , shared_ptr<BRepBlend_HCurve2dTool> >(m,"BRepBlend_HCurve2dTool",R"#(None)#");
    py::class_<BRepBlend_HCurveTool , shared_ptr<BRepBlend_HCurveTool> >(m,"BRepBlend_HCurveTool",R"#(None)#");
    py::class_<BRepBlend_Line ,opencascade::handle<BRepBlend_Line> , Standard_Transient>(m,"BRepBlend_Line",R"#()#");
    py::class_<BRepBlend_PointOnRst , shared_ptr<BRepBlend_PointOnRst> >(m,"BRepBlend_PointOnRst",R"#(Definition of an intersection point between a line and a restriction on a surface. Such a point is contains geometrical informations (see the Value method) and logical informations.)#");
    py::class_<BRepBlend_RstRstConstRad , shared_ptr<BRepBlend_RstRstConstRad> , Blend_RstRstFunction>(m,"BRepBlend_RstRstConstRad",R"#(Copy of CSConstRad with a pcurve on surface as support.)#");
    py::class_<BRepBlend_RstRstEvolRad , shared_ptr<BRepBlend_RstRstEvolRad> , Blend_RstRstFunction>(m,"BRepBlend_RstRstEvolRad",R"#(Function to approximate by AppSurface for Edge/Edge and evolutif radius)#");
    py::class_<BRepBlend_RstRstLineBuilder , shared_ptr<BRepBlend_RstRstLineBuilder> >(m,"BRepBlend_RstRstLineBuilder",R"#(This class processes the data resulting from Blend_CSWalking but it takes in consideration the Surface supporting the curve to detect the breakpoint.)#");
    py::class_<BRepBlend_SurfCurvConstRadInv , shared_ptr<BRepBlend_SurfCurvConstRadInv> , Blend_SurfCurvFuncInv>(m,"BRepBlend_SurfCurvConstRadInv",R"#(Function of reframing between a restriction surface of the surface and a curve. Class used to compute a solution of the surfRstConstRad problem on a done restriction of the surface. The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates wguide, wcurv, wrst where wguide is the parameter on the guide line, wcurv is the parameter on the curve, wrst is the parameter on the restriction on the surface.)#");
    py::class_<BRepBlend_SurfCurvEvolRadInv , shared_ptr<BRepBlend_SurfCurvEvolRadInv> , Blend_SurfCurvFuncInv>(m,"BRepBlend_SurfCurvEvolRadInv",R"#(Function of reframing between a surface restriction of the surface and a curve. Class used to compute a solution of the surfRstConstRad problem on a done restriction of the surface. The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates wguide, wcurv, wrst where wguide is the parameter on the guide line, wcurv is the parameter on the curve, wrst is the parameter on the restriction on the surface.)#");
    py::class_<BRepBlend_SurfPointConstRadInv , shared_ptr<BRepBlend_SurfPointConstRadInv> , Blend_SurfPointFuncInv>(m,"BRepBlend_SurfPointConstRadInv",R"#(Function of reframing between a point and a surface. This function is used to find a solution on a done point of the curve when using SurfRstConsRad or CSConstRad... The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates w, U, V where w is the parameter on the guide line, U,V are the parametric coordinates of a point on the partner surface.)#");
    py::class_<BRepBlend_SurfPointEvolRadInv , shared_ptr<BRepBlend_SurfPointEvolRadInv> , Blend_SurfPointFuncInv>(m,"BRepBlend_SurfPointEvolRadInv",R"#(Function of reframing between a point and a surface. This function is used to find a solution on a done point of the curve when using SurfRstConsRad or CSConstRad... The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates w, U, V where w is the parameter on the guide line, U,V are the parametric coordinates of a point on the partner surface.)#");
    py::class_<BRepBlend_SurfRstConstRad , shared_ptr<BRepBlend_SurfRstConstRad> , Blend_SurfRstFunction>(m,"BRepBlend_SurfRstConstRad",R"#(Copy of CSConstRad with pcurve on surface as support.)#");
    py::class_<BRepBlend_SurfRstEvolRad , shared_ptr<BRepBlend_SurfRstEvolRad> , Blend_SurfRstFunction>(m,"BRepBlend_SurfRstEvolRad",R"#(Function to approximate by AppSurface for Edge/Face and evolutif radius)#");
    py::class_<BRepBlend_SurfRstLineBuilder , shared_ptr<BRepBlend_SurfRstLineBuilder> >(m,"BRepBlend_SurfRstLineBuilder",R"#(This class processes data resulting from Blend_CSWalking taking in consideration the Surface supporting the curve to detect the breakpoint.)#");
    py::class_<BRepBlend_Walking , shared_ptr<BRepBlend_Walking> >(m,"BRepBlend_Walking",R"#(None)#");
    py::class_<BRepBlend_AppFunc ,opencascade::handle<BRepBlend_AppFunc> , BRepBlend_AppFuncRoot>(m,"BRepBlend_AppFunc",R"#(Function to approximate by AppSurface for Surface/Surface contact.Function to approximate by AppSurface for Surface/Surface contact.Function to approximate by AppSurface for Surface/Surface contact.)#");
    py::class_<BRepBlend_AppFuncRst ,opencascade::handle<BRepBlend_AppFuncRst> , BRepBlend_AppFuncRoot>(m,"BRepBlend_AppFuncRst",R"#(Function to approximate by AppSurface for Curve/Surface contact.Function to approximate by AppSurface for Curve/Surface contact.Function to approximate by AppSurface for Curve/Surface contact.)#");
    py::class_<BRepBlend_AppFuncRstRst ,opencascade::handle<BRepBlend_AppFuncRstRst> , BRepBlend_AppFuncRoot>(m,"BRepBlend_AppFuncRstRst",R"#(Function to approximate by AppSurface for Edge/Face (Curve/Curve contact).Function to approximate by AppSurface for Edge/Face (Curve/Curve contact).Function to approximate by AppSurface for Edge/Face (Curve/Curve contact).)#");

};

// user-defined post-inclusion per module

// user-defined post
