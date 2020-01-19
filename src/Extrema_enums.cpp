
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HSurfaceOfLinearExtrusion.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Pln.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <gp_Sphere.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <GeomAdaptor_HSurfaceOfRevolution.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Circ.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_ExtElC.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_POnCurv.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ECC2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_POnCurv2d.hxx>

// module includes
#include <Extrema_Array1OfPOnCurv.hxx>
#include <Extrema_Array1OfPOnCurv2d.hxx>
#include <Extrema_Array1OfPOnSurf.hxx>
#include <Extrema_Array2OfPOnCurv.hxx>
#include <Extrema_Array2OfPOnCurv2d.hxx>
#include <Extrema_Array2OfPOnSurf.hxx>
#include <Extrema_Array2OfPOnSurfParams.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_ECC.hxx>
#include <Extrema_ECC2d.hxx>
#include <Extrema_ElementType.hxx>
#include <Extrema_ELPCOfLocateExtPC.hxx>
#include <Extrema_ELPCOfLocateExtPC2d.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_EPCOfExtPC.hxx>
#include <Extrema_EPCOfExtPC2d.hxx>
#include <Extrema_ExtAlgo.hxx>
#include <Extrema_ExtCC.hxx>
#include <Extrema_ExtCC2d.hxx>
#include <Extrema_ExtCS.hxx>
#include <Extrema_ExtElC.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ExtElCS.hxx>
#include <Extrema_ExtElSS.hxx>
#include <Extrema_ExtFlag.hxx>
#include <Extrema_ExtPC.hxx>
#include <Extrema_ExtPC2d.hxx>
#include <Extrema_ExtPElC.hxx>
#include <Extrema_ExtPElC2d.hxx>
#include <Extrema_ExtPElS.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <Extrema_ExtPS.hxx>
#include <Extrema_ExtSS.hxx>
#include <Extrema_FuncExtCS.hxx>
#include <Extrema_FuncExtSS.hxx>
#include <Extrema_FuncPSDist.hxx>
#include <Extrema_FuncPSNorm.hxx>
#include <Extrema_GenExtCS.hxx>
#include <Extrema_GenExtPS.hxx>
#include <Extrema_GenExtSS.hxx>
#include <Extrema_GenLocateExtCS.hxx>
#include <Extrema_GenLocateExtPS.hxx>
#include <Extrema_GenLocateExtSS.hxx>
#include <Extrema_GlobOptFuncCC.hxx>
#include <Extrema_GlobOptFuncCS.hxx>
#include <Extrema_HArray1OfPOnCurv.hxx>
#include <Extrema_HArray1OfPOnCurv2d.hxx>
#include <Extrema_HArray1OfPOnSurf.hxx>
#include <Extrema_HArray2OfPOnCurv.hxx>
#include <Extrema_HArray2OfPOnCurv2d.hxx>
#include <Extrema_HArray2OfPOnSurf.hxx>
#include <Extrema_HArray2OfPOnSurfParams.hxx>
#include <Extrema_HUBTreeOfSphere.hxx>
#include <Extrema_LocateExtCC.hxx>
#include <Extrema_LocateExtCC2d.hxx>
#include <Extrema_LocateExtPC.hxx>
#include <Extrema_LocateExtPC2d.hxx>
#include <Extrema_LocECC.hxx>
#include <Extrema_LocECC2d.hxx>
#include <Extrema_LocEPCOfLocateExtPC.hxx>
#include <Extrema_LocEPCOfLocateExtPC2d.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_PCFOfEPCOfExtPC.hxx>
#include <Extrema_PCFOfEPCOfExtPC2d.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx>
#include <Extrema_POnCurv.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <Extrema_POnSurf.hxx>
#include <Extrema_POnSurfParams.hxx>
#include <Extrema_SequenceOfPOnCurv.hxx>
#include <Extrema_SequenceOfPOnCurv2d.hxx>
#include <Extrema_SequenceOfPOnSurf.hxx>

// template related includes
// ./opencascade/Extrema_Array2OfPOnSurf.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array2OfPOnSurfParams.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array1OfPOnSurf.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array1OfPOnCurv.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_SequenceOfPOnCurv.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_SequenceOfPOnCurv2d.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array2OfPOnCurv2d.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_SequenceOfPOnSurf.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array2OfPOnCurv.hxx
#include "NCollection.hxx"
// ./opencascade/Extrema_Array1OfPOnCurv2d.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Extrema_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Extrema", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Extrema_ExtFlag>(m, "Extrema_ExtFlag",R"#(None)#")
        .value("Extrema_ExtFlag_MIN",Extrema_ExtFlag::Extrema_ExtFlag_MIN)
        .value("Extrema_ExtFlag_MAX",Extrema_ExtFlag::Extrema_ExtFlag_MAX)
        .value("Extrema_ExtFlag_MINMAX",Extrema_ExtFlag::Extrema_ExtFlag_MINMAX).export_values();
    py::enum_<Extrema_ElementType>(m, "Extrema_ElementType",R"#(None)#")
        .value("Extrema_Node",Extrema_ElementType::Extrema_Node)
        .value("Extrema_UIsoEdge",Extrema_ElementType::Extrema_UIsoEdge)
        .value("Extrema_VIsoEdge",Extrema_ElementType::Extrema_VIsoEdge)
        .value("Extrema_Face",Extrema_ElementType::Extrema_Face).export_values();
    py::enum_<Extrema_ExtAlgo>(m, "Extrema_ExtAlgo",R"#(None)#")
        .value("Extrema_ExtAlgo_Grad",Extrema_ExtAlgo::Extrema_ExtAlgo_Grad)
        .value("Extrema_ExtAlgo_Tree",Extrema_ExtAlgo::Extrema_ExtAlgo_Tree).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array2<Extrema_POnSurf>(m,"Extrema_Array2OfPOnSurf");  
    preregister_template_NCollection_Array2<Extrema_POnSurfParams>(m,"Extrema_Array2OfPOnSurfParams");  
    preregister_template_NCollection_Array1<Extrema_POnSurf>(m,"Extrema_Array1OfPOnSurf");  
    preregister_template_NCollection_UBTree<Standard_Integer, Bnd_Sphere>(m,"Extrema_UBTreeOfSphere");  
    preregister_template_NCollection_UBTreeFiller<Standard_Integer, Bnd_Sphere>(m,"Extrema_UBTreeFillerOfSphere");  
    preregister_template_NCollection_Array1<Extrema_POnCurv>(m,"Extrema_Array1OfPOnCurv");  
    preregister_template_NCollection_Sequence<Extrema_POnCurv>(m,"Extrema_SequenceOfPOnCurv");  
    preregister_template_NCollection_Sequence<Extrema_POnCurv2d>(m,"Extrema_SequenceOfPOnCurv2d");  
    preregister_template_NCollection_Array2<Extrema_POnCurv2d>(m,"Extrema_Array2OfPOnCurv2d");  
    preregister_template_NCollection_Sequence<Extrema_POnSurf>(m,"Extrema_SequenceOfPOnSurf");  
    preregister_template_NCollection_Array2<Extrema_POnCurv>(m,"Extrema_Array2OfPOnCurv");  
    preregister_template_NCollection_Array1<Extrema_POnCurv2d>(m,"Extrema_Array1OfPOnCurv2d");  

// classes forward declarations only
    py::class_<Extrema_CCLocFOfLocECC , shared_ptr<Extrema_CCLocFOfLocECC>  , math_FunctionSetWithDerivatives >(m,"Extrema_CCLocFOfLocECC",R"#(None)#");
    py::class_<Extrema_CCLocFOfLocECC2d , shared_ptr<Extrema_CCLocFOfLocECC2d>  , math_FunctionSetWithDerivatives >(m,"Extrema_CCLocFOfLocECC2d",R"#(None)#");
    py::class_<Extrema_Curve2dTool , shared_ptr<Extrema_Curve2dTool>  >(m,"Extrema_Curve2dTool",R"#(None)#");
    py::class_<Extrema_CurveTool , shared_ptr<Extrema_CurveTool>  >(m,"Extrema_CurveTool",R"#(None)#");
    py::class_<Extrema_ECC , shared_ptr<Extrema_ECC>  >(m,"Extrema_ECC",R"#(None)#");
    py::class_<Extrema_ECC2d , shared_ptr<Extrema_ECC2d>  >(m,"Extrema_ECC2d",R"#(None)#");
    py::class_<Extrema_ELPCOfLocateExtPC , shared_ptr<Extrema_ELPCOfLocateExtPC>  >(m,"Extrema_ELPCOfLocateExtPC",R"#(None)#");
    py::class_<Extrema_ELPCOfLocateExtPC2d , shared_ptr<Extrema_ELPCOfLocateExtPC2d>  >(m,"Extrema_ELPCOfLocateExtPC2d",R"#(None)#");
    py::class_<Extrema_EPCOfELPCOfLocateExtPC , shared_ptr<Extrema_EPCOfELPCOfLocateExtPC>  >(m,"Extrema_EPCOfELPCOfLocateExtPC",R"#(None)#");
    py::class_<Extrema_EPCOfELPCOfLocateExtPC2d , shared_ptr<Extrema_EPCOfELPCOfLocateExtPC2d>  >(m,"Extrema_EPCOfELPCOfLocateExtPC2d",R"#(None)#");
    py::class_<Extrema_EPCOfExtPC , shared_ptr<Extrema_EPCOfExtPC>  >(m,"Extrema_EPCOfExtPC",R"#(None)#");
    py::class_<Extrema_EPCOfExtPC2d , shared_ptr<Extrema_EPCOfExtPC2d>  >(m,"Extrema_EPCOfExtPC2d",R"#(None)#");
    py::class_<Extrema_ExtCC , shared_ptr<Extrema_ExtCC>  >(m,"Extrema_ExtCC",R"#(It calculates all the distance between two curves. These distances can be maximum or minimum.)#");
    py::class_<Extrema_ExtCC2d , shared_ptr<Extrema_ExtCC2d>  >(m,"Extrema_ExtCC2d",R"#(It calculates all the distance between two curves. These distances can be maximum or minimum.)#");
    py::class_<Extrema_ExtCS , shared_ptr<Extrema_ExtCS>  >(m,"Extrema_ExtCS",R"#(It calculates all the extremum distances between a curve and a surface. These distances can be minimum or maximum.)#");
    py::class_<Extrema_ExtElC , shared_ptr<Extrema_ExtElC>  >(m,"Extrema_ExtElC",R"#(It calculates all the distance between two elementary curves. These distances can be maximum or minimum.)#");
    py::class_<Extrema_ExtElC2d , shared_ptr<Extrema_ExtElC2d>  >(m,"Extrema_ExtElC2d",R"#(It calculates all the distance between two elementary curves. These distances can be maximum or minimum.)#");
    py::class_<Extrema_ExtElCS , shared_ptr<Extrema_ExtElCS>  >(m,"Extrema_ExtElCS",R"#(It calculates all the distances between a curve and a surface. These distances can be maximum or minimum.)#");
    py::class_<Extrema_ExtElSS , shared_ptr<Extrema_ExtElSS>  >(m,"Extrema_ExtElSS",R"#(It calculates all the distances between 2 elementary surfaces. These distances can be maximum or minimum.)#");
    py::class_<Extrema_ExtPC , shared_ptr<Extrema_ExtPC>  >(m,"Extrema_ExtPC",R"#(None)#");
    py::class_<Extrema_ExtPC2d , shared_ptr<Extrema_ExtPC2d>  >(m,"Extrema_ExtPC2d",R"#(None)#");
    py::class_<Extrema_ExtPElC , shared_ptr<Extrema_ExtPElC>  >(m,"Extrema_ExtPElC",R"#(It calculates all the distances between a point and an elementary curve. These distances can be minimum or maximum.)#");
    py::class_<Extrema_ExtPElC2d , shared_ptr<Extrema_ExtPElC2d>  >(m,"Extrema_ExtPElC2d",R"#(It calculates all the distances between a point and an elementary curve. These distances can be minimum or maximum.)#");
    py::class_<Extrema_ExtPElS , shared_ptr<Extrema_ExtPElS>  >(m,"Extrema_ExtPElS",R"#(It calculates all the extremum distances between a point and a surface. These distances can be minimum or maximum.)#");
    py::class_<Extrema_ExtPExtS ,opencascade::handle<Extrema_ExtPExtS>  , Standard_Transient >(m,"Extrema_ExtPExtS",R"#(It calculates all the extremum (minimum and maximum) distances between a point and a linear extrusion surface.It calculates all the extremum (minimum and maximum) distances between a point and a linear extrusion surface.It calculates all the extremum (minimum and maximum) distances between a point and a linear extrusion surface.)#");
    py::class_<Extrema_ExtPRevS ,opencascade::handle<Extrema_ExtPRevS>  , Standard_Transient >(m,"Extrema_ExtPRevS",R"#(It calculates all the extremum (minimum and maximum) distances between a point and a surface of revolution.It calculates all the extremum (minimum and maximum) distances between a point and a surface of revolution.It calculates all the extremum (minimum and maximum) distances between a point and a surface of revolution.)#");
    py::class_<Extrema_ExtPS , shared_ptr<Extrema_ExtPS>  >(m,"Extrema_ExtPS",R"#(It calculates all the extremum distances between a point and a surface. These distances can be minimum or maximum.)#");
    py::class_<Extrema_ExtSS , shared_ptr<Extrema_ExtSS>  >(m,"Extrema_ExtSS",R"#(It calculates all the extremum distances between two surfaces. These distances can be minimum or maximum.)#");
    py::class_<Extrema_FuncExtCS , shared_ptr<Extrema_FuncExtCS>  , math_FunctionSetWithDerivatives >(m,"Extrema_FuncExtCS",R"#(Function to find extrema of the distance between a curve and a surface.)#");
    py::class_<Extrema_FuncExtSS , shared_ptr<Extrema_FuncExtSS>  , math_FunctionSetWithDerivatives >(m,"Extrema_FuncExtSS",R"#(Function to find extrema of the distance between two surfaces.)#");
    py::class_<Extrema_FuncPSDist , shared_ptr<Extrema_FuncPSDist>  , math_MultipleVarFunctionWithGradient >(m,"Extrema_FuncPSDist",R"#(Functional for search of extremum of the square Euclidean distance between point P and surface S, starting from approximate solution (u0, v0).)#");
    py::class_<Extrema_FuncPSNorm , shared_ptr<Extrema_FuncPSNorm>  , math_FunctionSetWithDerivatives >(m,"Extrema_FuncPSNorm",R"#(Functional for search of extremum of the distance between point P and surface S, starting from approximate solution (u0, v0).)#");
    py::class_<Extrema_GenExtCS , shared_ptr<Extrema_GenExtCS>  >(m,"Extrema_GenExtCS",R"#(It calculates all the extremum distances between acurve and a surface. These distances can be minimum or maximum.)#");
    py::class_<Extrema_GenExtPS , shared_ptr<Extrema_GenExtPS>  >(m,"Extrema_GenExtPS",R"#(It calculates all the extremum distances between a point and a surface. These distances can be minimum or maximum.)#");
    py::class_<Extrema_GenExtSS , shared_ptr<Extrema_GenExtSS>  >(m,"Extrema_GenExtSS",R"#(It calculates all the extremum distances between two surfaces. These distances can be minimum or maximum.)#");
    py::class_<Extrema_GenLocateExtCS , shared_ptr<Extrema_GenLocateExtCS>  >(m,"Extrema_GenLocateExtCS",R"#(With two close points it calculates the distance between two surfaces. This distance can be a minimum or a maximum.)#");
    py::class_<Extrema_GenLocateExtPS , shared_ptr<Extrema_GenLocateExtPS>  >(m,"Extrema_GenLocateExtPS",R"#(With a close point, it calculates the distance between a point and a surface. Criteria type is defined in "Perform" method.)#");
    py::class_<Extrema_GenLocateExtSS , shared_ptr<Extrema_GenLocateExtSS>  >(m,"Extrema_GenLocateExtSS",R"#(With two close points it calculates the distance between two surfaces. This distance can be a minimum or a maximum.)#");
    py::class_<Extrema_GlobOptFuncCCC0 , shared_ptr<Extrema_GlobOptFuncCCC0>  , math_MultipleVarFunction >(m,"Extrema_GlobOptFuncCCC0",R"#(This class implements function which calculate Eucluidean distance between point on curve and point on other curve in case of C1 and C2 continuity is C0.)#");
    py::class_<Extrema_GlobOptFuncCCC1 , shared_ptr<Extrema_GlobOptFuncCCC1>  , math_MultipleVarFunctionWithGradient >(m,"Extrema_GlobOptFuncCCC1",R"#(This class implements function which calculate Eucluidean distance between point on curve and point on other curve in case of C1 and C2 continuity is C1.)#");
    py::class_<Extrema_GlobOptFuncCCC2 , shared_ptr<Extrema_GlobOptFuncCCC2>  , math_MultipleVarFunctionWithHessian >(m,"Extrema_GlobOptFuncCCC2",R"#(This class implements function which calculate Eucluidean distance between point on curve and point on other curve in case of C1 and C2 continuity is C2.)#");
    py::class_<Extrema_GlobOptFuncCS , shared_ptr<Extrema_GlobOptFuncCS>  , math_MultipleVarFunctionWithHessian >(m,"Extrema_GlobOptFuncCS",R"#(This class implements function which calculate square Eucluidean distance between point on curve and point on surface in case of continuity is C2.)#");
    py::class_<Extrema_HArray1OfPOnCurv ,opencascade::handle<Extrema_HArray1OfPOnCurv>  , Extrema_Array1OfPOnCurv , Standard_Transient >(m,"Extrema_HArray1OfPOnCurv",R"#()#");
    py::class_<Extrema_HArray1OfPOnCurv2d ,opencascade::handle<Extrema_HArray1OfPOnCurv2d>  , Extrema_Array1OfPOnCurv2d , Standard_Transient >(m,"Extrema_HArray1OfPOnCurv2d",R"#()#");
    py::class_<Extrema_HArray1OfPOnSurf ,opencascade::handle<Extrema_HArray1OfPOnSurf>  , Extrema_Array1OfPOnSurf , Standard_Transient >(m,"Extrema_HArray1OfPOnSurf",R"#()#");
    py::class_<Extrema_HArray2OfPOnCurv ,opencascade::handle<Extrema_HArray2OfPOnCurv>  , Extrema_Array2OfPOnCurv , Standard_Transient >(m,"Extrema_HArray2OfPOnCurv",R"#()#");
    py::class_<Extrema_HArray2OfPOnCurv2d ,opencascade::handle<Extrema_HArray2OfPOnCurv2d>  , Extrema_Array2OfPOnCurv2d , Standard_Transient >(m,"Extrema_HArray2OfPOnCurv2d",R"#()#");
    py::class_<Extrema_HArray2OfPOnSurf ,opencascade::handle<Extrema_HArray2OfPOnSurf>  , Extrema_Array2OfPOnSurf , Standard_Transient >(m,"Extrema_HArray2OfPOnSurf",R"#()#");
    py::class_<Extrema_HArray2OfPOnSurfParams ,opencascade::handle<Extrema_HArray2OfPOnSurfParams>  , Extrema_Array2OfPOnSurfParams , Standard_Transient >(m,"Extrema_HArray2OfPOnSurfParams",R"#()#");
    py::class_<Extrema_LocECC , shared_ptr<Extrema_LocECC>  >(m,"Extrema_LocECC",R"#(None)#");
    py::class_<Extrema_LocECC2d , shared_ptr<Extrema_LocECC2d>  >(m,"Extrema_LocECC2d",R"#(None)#");
    py::class_<Extrema_LocEPCOfLocateExtPC , shared_ptr<Extrema_LocEPCOfLocateExtPC>  >(m,"Extrema_LocEPCOfLocateExtPC",R"#(None)#");
    py::class_<Extrema_LocEPCOfLocateExtPC2d , shared_ptr<Extrema_LocEPCOfLocateExtPC2d>  >(m,"Extrema_LocEPCOfLocateExtPC2d",R"#(None)#");
    py::class_<Extrema_LocateExtCC , shared_ptr<Extrema_LocateExtCC>  >(m,"Extrema_LocateExtCC",R"#(It calculates the distance between two curves with a close point; these distances can be maximum or minimum.)#");
    py::class_<Extrema_LocateExtCC2d , shared_ptr<Extrema_LocateExtCC2d>  >(m,"Extrema_LocateExtCC2d",R"#(It calculates the distance between two curves with a close point; these distances can be maximum or minimum.)#");
    py::class_<Extrema_LocateExtPC , shared_ptr<Extrema_LocateExtPC>  >(m,"Extrema_LocateExtPC",R"#(None)#");
    py::class_<Extrema_LocateExtPC2d , shared_ptr<Extrema_LocateExtPC2d>  >(m,"Extrema_LocateExtPC2d",R"#(None)#");
    py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC , shared_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC>  , math_FunctionWithDerivative >(m,"Extrema_PCFOfEPCOfELPCOfLocateExtPC",R"#(None)#");
    py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d , shared_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d>  , math_FunctionWithDerivative >(m,"Extrema_PCFOfEPCOfELPCOfLocateExtPC2d",R"#(None)#");
    py::class_<Extrema_PCFOfEPCOfExtPC , shared_ptr<Extrema_PCFOfEPCOfExtPC>  , math_FunctionWithDerivative >(m,"Extrema_PCFOfEPCOfExtPC",R"#(None)#");
    py::class_<Extrema_PCFOfEPCOfExtPC2d , shared_ptr<Extrema_PCFOfEPCOfExtPC2d>  , math_FunctionWithDerivative >(m,"Extrema_PCFOfEPCOfExtPC2d",R"#(None)#");
    py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC , shared_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC>  , math_FunctionWithDerivative >(m,"Extrema_PCLocFOfLocEPCOfLocateExtPC",R"#(None)#");
    py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC2d , shared_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC2d>  , math_FunctionWithDerivative >(m,"Extrema_PCLocFOfLocEPCOfLocateExtPC2d",R"#(None)#");
    py::class_<Extrema_POnCurv , shared_ptr<Extrema_POnCurv>  >(m,"Extrema_POnCurv",R"#(None)#");
    py::class_<Extrema_POnCurv2d , shared_ptr<Extrema_POnCurv2d>  >(m,"Extrema_POnCurv2d",R"#(None)#");
    py::class_<Extrema_POnSurf , shared_ptr<Extrema_POnSurf>  >(m,"Extrema_POnSurf",R"#(Definition of a point on surface.)#");
    py::class_<Extrema_POnSurfParams , shared_ptr<Extrema_POnSurfParams>  , Extrema_POnSurf >(m,"Extrema_POnSurfParams",R"#(Data container for point on surface parameters. These parameters are required to compute an initial approximation for extrema computation.)#");

};

// user-defined post-inclusion per module

// user-defined post
