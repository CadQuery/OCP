
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepAdaptor_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <ChFi3d_Builder.hxx>
#include <ChFi3d_ChBuilder.hxx>
#include <ChFi3d_FilBuilder.hxx>
#include <ChFi3d_SearchSing.hxx>
#include <Law_Function.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <BRepBlend_Line.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <ChFiDS_Spine.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <BRepBlend_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Blend_Function.hxx>
#include <Blend_FuncInv.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Blend_SurfRstFunction.hxx>
#include <Blend_SurfPointFuncInv.hxx>
#include <Blend_SurfCurvFuncInv.hxx>
#include <Blend_RstRstFunction.hxx>
#include <Blend_CurvPointFuncInv.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <AppBlend_Approx.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>

// module includes
#include <ChFi3d.hxx>
#include <ChFi3d_Builder.hxx>
#include <ChFi3d_Builder_0.hxx>
#include <ChFi3d_ChBuilder.hxx>
#include <ChFi3d_FilBuilder.hxx>
#include <ChFi3d_FilletShape.hxx>
#include <ChFi3d_SearchSing.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ChFi3d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ChFi3d", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<ChFi3d_FilletShape>(m, "ChFi3d_FilletShape",R"#(Lists the types of fillet shapes. These include the following: - ChFi3d_Rational (default value), which is the standard NURBS representation of circles, - ChFi3d_QuasiAngular, which is a NURBS representation of circles where the parameters match those of the circle, - ChFi3d_Polynomial, which corresponds to a polynomial approximation of circles. This type facilitates the implementation of the construction algorithm.)#")
        .value("ChFi3d_Rational",ChFi3d_FilletShape::ChFi3d_Rational)
        .value("ChFi3d_QuasiAngular",ChFi3d_FilletShape::ChFi3d_QuasiAngular)
        .value("ChFi3d_Polynomial",ChFi3d_FilletShape::ChFi3d_Polynomial).export_values();

//Python trampoline classes
    class Py_ChFi3d_Builder : public ChFi3d_Builder{
    public:
        using ChFi3d_Builder::ChFi3d_Builder;


        // public pure virtual


        // protected pure virtual
        void SimulKPart(const opencascade::handle<ChFiDS_SurfData> & SD) const  override { PYBIND11_OVERLOAD_PURE(void,ChFi3d_Builder,SimulKPart,SD) };
        Standard_Boolean SimulSurf(opencascade::handle<ChFiDS_SurfData> & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const Standard_Real TolGuide,Standard_Real & First,Standard_Real & Last,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecOnS1,const Standard_Boolean RecOnS2,const math_Vector & Soldep,Standard_Integer & Intf,Standard_Integer & Intl) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,ChFi3d_Builder,SimulSurf,Data,Guide,Spine,Choix,S1,I1,S2,I2,TolGuide,First,Last,Inside,Appro,Forward,RecOnS1,RecOnS2,Soldep,Intf,Intl) };
        void SetRegul() override { PYBIND11_OVERLOAD_PURE(void,ChFi3d_Builder,SetRegul,) };
        Standard_Boolean PerformSurf(NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const Standard_Real MaxStep,const Standard_Real Fleche,const Standard_Real TolGuide,Standard_Real & First,Standard_Real & Last,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecOnS1,const Standard_Boolean RecOnS2,const math_Vector & Soldep,Standard_Integer & Intf,Standard_Integer & Intl) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,ChFi3d_Builder,PerformSurf,Data,Guide,Spine,Choix,S1,I1,S2,I2,MaxStep,Fleche,TolGuide,First,Last,Inside,Appro,Forward,RecOnS1,RecOnS2,Soldep,Intf,Intl) };
        void PerformTwoCorner(const Standard_Integer Index) override { PYBIND11_OVERLOAD_PURE(void,ChFi3d_Builder,PerformTwoCorner,Index) };
        void PerformThreeCorner(const Standard_Integer Index) override { PYBIND11_OVERLOAD_PURE(void,ChFi3d_Builder,PerformThreeCorner,Index) };
        void ExtentOneCorner(const TopoDS_Vertex & V,const opencascade::handle<ChFiDS_Stripe> & S) override { PYBIND11_OVERLOAD_PURE(void,ChFi3d_Builder,ExtentOneCorner,V,S) };
        void ExtentTwoCorner(const TopoDS_Vertex & V, const NCollection_List<opencascade::handle<ChFiDS_Stripe> > & LS) override { PYBIND11_OVERLOAD_PURE(void,ChFi3d_Builder,ExtentTwoCorner,V,LS) };
        void ExtentThreeCorner(const TopoDS_Vertex & V, const NCollection_List<opencascade::handle<ChFiDS_Stripe> > & LS) override { PYBIND11_OVERLOAD_PURE(void,ChFi3d_Builder,ExtentThreeCorner,V,LS) };
        Standard_Boolean PerformFirstSection(const opencascade::handle<ChFiDS_Spine> & S,const opencascade::handle<ChFiDS_HElSpine> & HGuide,const Standard_Integer Choix,opencascade::handle<BRepAdaptor_HSurface> & S1,opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I1,const opencascade::handle<Adaptor3d_TopolTool> & I2,const Standard_Real Par,math_Vector & SolDep,TopAbs_State & Pos1,TopAbs_State & Pos2) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,ChFi3d_Builder,PerformFirstSection,S,HGuide,Choix,S1,S2,I1,I2,Par,SolDep,Pos1,Pos2) };


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<ChFi3d , shared_ptr<ChFi3d> >(m,"ChFi3d",R"#(creation of spatial fillets on a solid.)#");
    py::class_<ChFi3d_Builder , shared_ptr<ChFi3d_Builder>,Py_ChFi3d_Builder >(m,"ChFi3d_Builder",R"#(Root class for calculation of surfaces (fillets, chamfers) destined to smooth edges of a gap on a Shape and the reconstruction of the Shape.)#");
    py::class_<ChFi3d_SearchSing , shared_ptr<ChFi3d_SearchSing> , math_FunctionWithDerivative>(m,"ChFi3d_SearchSing",R"#(Searches singularities on fillet. F(t) = (C1(t) - C2(t)).(C1'(t) - C2'(t));)#");
    py::class_<ChFi3d_ChBuilder , shared_ptr<ChFi3d_ChBuilder> , ChFi3d_Builder>(m,"ChFi3d_ChBuilder",R"#(construction tool for 3D chamfers on edges (on a solid).)#");
    py::class_<ChFi3d_FilBuilder , shared_ptr<ChFi3d_FilBuilder> , ChFi3d_Builder>(m,"ChFi3d_FilBuilder",R"#(Tool of construction of fillets 3d on edges (on a solid).)#");

};

// user-defined post-inclusion per module

// user-defined post
