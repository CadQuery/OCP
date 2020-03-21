
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Law_Function.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <BRepBlend_Line.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
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
#include <BRepAdaptor_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <ChFi3d_Builder.hxx>
#include <ChFi3d_ChBuilder.hxx>
#include <ChFi3d_FilBuilder.hxx>
#include <ChFi3d_SearchSing.hxx>

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
void register_ChFi3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ChFi3d"));


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

// classes

    // default constructor
    register_default_constructor<ChFi3d , shared_ptr<ChFi3d>>(m,"ChFi3d");

    static_cast<py::class_<ChFi3d , shared_ptr<ChFi3d> >>(m.attr("ChFi3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi3d_Builder , shared_ptr<ChFi3d_Builder>,Py_ChFi3d_Builder >>(m.attr("ChFi3d_Builder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi3d_SearchSing , shared_ptr<ChFi3d_SearchSing> , math_FunctionWithDerivative>>(m.attr("ChFi3d_SearchSing"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (ChFi3d_SearchSing::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (ChFi3d_SearchSing::*)( const Standard_Real , Standard_Real & ) >(&ChFi3d_SearchSing::Value),
             R"#(computes the value of the function <F> for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (ChFi3d_SearchSing::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (ChFi3d_SearchSing::*)( const Standard_Real , Standard_Real & ) >(&ChFi3d_SearchSing::Derivative),
             R"#(computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (ChFi3d_SearchSing::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ChFi3d_SearchSing::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&ChFi3d_SearchSing::Values),
             R"#(computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi3d_ChBuilder , shared_ptr<ChFi3d_ChBuilder> , ChFi3d_Builder>>(m.attr("ChFi3d_ChBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("PerformSurf",
             (Standard_Boolean (ChFi3d_ChBuilder::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & , const opencascade::handle<ChFiDS_HElSpine> & , const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const math_Vector & , Standard_Integer & , Standard_Integer & ) ) static_cast<Standard_Boolean (ChFi3d_ChBuilder::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & , const opencascade::handle<ChFiDS_HElSpine> & , const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const math_Vector & , Standard_Integer & , Standard_Integer & ) >(&ChFi3d_ChBuilder::PerformSurf),
             R"#(Methode, implemented in inheritants, calculates the elements of construction of the surface (fillet or chamfer).)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("S2"),  py::arg("I2"),  py::arg("MaxStep"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("First"),  py::arg("Last"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecOnS1"),  py::arg("RecOnS2"),  py::arg("Soldep"),  py::arg("Intf"),  py::arg("Intl"))
    // methods using call by reference i.s.o. return
        .def("SimulSurf",
             []( ChFi3d_ChBuilder &self , opencascade::handle<ChFiDS_SurfData> & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const opencascade::handle<BRepAdaptor_HCurve2d> & PC1,const opencascade::handle<BRepAdaptor_HSurface> & Sref1,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const TopAbs_Orientation Or2,const Standard_Real Fleche,const Standard_Real TolGuide,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecP,const Standard_Boolean RecS,const Standard_Boolean RecRst,const math_Vector & Soldep ){ Standard_Boolean  Decroch1; Standard_Real  First; Standard_Real  Last; self.SimulSurf(Data,Guide,Spine,Choix,S1,I1,PC1,Sref1,PCref1,Decroch1,S2,I2,Or2,Fleche,TolGuide,First,Last,Inside,Appro,Forward,RecP,RecS,RecRst,Soldep); return std::make_tuple(Decroch1,First,Last); },
             R"#(None)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("PC1"),  py::arg("Sref1"),  py::arg("PCref1"),  py::arg("S2"),  py::arg("I2"),  py::arg("Or2"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecP"),  py::arg("RecS"),  py::arg("RecRst"),  py::arg("Soldep"))
        .def("SimulSurf",
             []( ChFi3d_ChBuilder &self , opencascade::handle<ChFiDS_SurfData> & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const TopAbs_Orientation Or1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const opencascade::handle<BRepAdaptor_HCurve2d> & PC2,const opencascade::handle<BRepAdaptor_HSurface> & Sref2,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref2,const Standard_Real Fleche,const Standard_Real TolGuide,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecP,const Standard_Boolean RecS,const Standard_Boolean RecRst,const math_Vector & Soldep ){ Standard_Boolean  Decroch2; Standard_Real  First; Standard_Real  Last; self.SimulSurf(Data,Guide,Spine,Choix,S1,I1,Or1,S2,I2,PC2,Sref2,PCref2,Decroch2,Fleche,TolGuide,First,Last,Inside,Appro,Forward,RecP,RecS,RecRst,Soldep); return std::make_tuple(Decroch2,First,Last); },
             R"#(None)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("Or1"),  py::arg("S2"),  py::arg("I2"),  py::arg("PC2"),  py::arg("Sref2"),  py::arg("PCref2"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecP"),  py::arg("RecS"),  py::arg("RecRst"),  py::arg("Soldep"))
        .def("SimulSurf",
             []( ChFi3d_ChBuilder &self , opencascade::handle<ChFiDS_SurfData> & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const opencascade::handle<BRepAdaptor_HCurve2d> & PC1,const opencascade::handle<BRepAdaptor_HSurface> & Sref1,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref1,const TopAbs_Orientation Or1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const opencascade::handle<BRepAdaptor_HCurve2d> & PC2,const opencascade::handle<BRepAdaptor_HSurface> & Sref2,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref2,const TopAbs_Orientation Or2,const Standard_Real Fleche,const Standard_Real TolGuide,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecP1,const Standard_Boolean RecRst1,const Standard_Boolean RecP2,const Standard_Boolean RecRst2,const math_Vector & Soldep ){ Standard_Boolean  Decroch1; Standard_Boolean  Decroch2; Standard_Real  First; Standard_Real  Last; self.SimulSurf(Data,Guide,Spine,Choix,S1,I1,PC1,Sref1,PCref1,Decroch1,Or1,S2,I2,PC2,Sref2,PCref2,Decroch2,Or2,Fleche,TolGuide,First,Last,Inside,Appro,Forward,RecP1,RecRst1,RecP2,RecRst2,Soldep); return std::make_tuple(Decroch1,Decroch2,First,Last); },
             R"#(None)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("PC1"),  py::arg("Sref1"),  py::arg("PCref1"),  py::arg("Or1"),  py::arg("S2"),  py::arg("I2"),  py::arg("PC2"),  py::arg("Sref2"),  py::arg("PCref2"),  py::arg("Or2"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecP1"),  py::arg("RecRst1"),  py::arg("RecP2"),  py::arg("RecRst2"),  py::arg("Soldep"))
        .def("PerformSurf",
             []( ChFi3d_ChBuilder &self , NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const opencascade::handle<BRepAdaptor_HCurve2d> & PC1,const opencascade::handle<BRepAdaptor_HSurface> & Sref1,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const TopAbs_Orientation Or2,const Standard_Real MaxStep,const Standard_Real Fleche,const Standard_Real TolGuide,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecP,const Standard_Boolean RecS,const Standard_Boolean RecRst,const math_Vector & Soldep ){ Standard_Boolean  Decroch1; Standard_Real  First; Standard_Real  Last; self.PerformSurf(Data,Guide,Spine,Choix,S1,I1,PC1,Sref1,PCref1,Decroch1,S2,I2,Or2,MaxStep,Fleche,TolGuide,First,Last,Inside,Appro,Forward,RecP,RecS,RecRst,Soldep); return std::make_tuple(Decroch1,First,Last); },
             R"#(Method, implemented in the inheritants, calculates the elements of construction of the surface (fillet or chamfer) contact edge/face.)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("PC1"),  py::arg("Sref1"),  py::arg("PCref1"),  py::arg("S2"),  py::arg("I2"),  py::arg("Or2"),  py::arg("MaxStep"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecP"),  py::arg("RecS"),  py::arg("RecRst"),  py::arg("Soldep"))
        .def("PerformSurf",
             []( ChFi3d_ChBuilder &self , NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const TopAbs_Orientation Or1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const opencascade::handle<BRepAdaptor_HCurve2d> & PC2,const opencascade::handle<BRepAdaptor_HSurface> & Sref2,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref2,const Standard_Real MaxStep,const Standard_Real Fleche,const Standard_Real TolGuide,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecP,const Standard_Boolean RecS,const Standard_Boolean RecRst,const math_Vector & Soldep ){ Standard_Boolean  Decroch2; Standard_Real  First; Standard_Real  Last; self.PerformSurf(Data,Guide,Spine,Choix,S1,I1,Or1,S2,I2,PC2,Sref2,PCref2,Decroch2,MaxStep,Fleche,TolGuide,First,Last,Inside,Appro,Forward,RecP,RecS,RecRst,Soldep); return std::make_tuple(Decroch2,First,Last); },
             R"#(Method, implemented in inheritants, calculates the elements of construction of the surface (fillet or chamfer) contact edge/face.)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("Or1"),  py::arg("S2"),  py::arg("I2"),  py::arg("PC2"),  py::arg("Sref2"),  py::arg("PCref2"),  py::arg("MaxStep"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecP"),  py::arg("RecS"),  py::arg("RecRst"),  py::arg("Soldep"))
        .def("PerformSurf",
             []( ChFi3d_ChBuilder &self , NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & Data,const opencascade::handle<ChFiDS_HElSpine> & Guide,const opencascade::handle<ChFiDS_Spine> & Spine,const Standard_Integer Choix,const opencascade::handle<BRepAdaptor_HSurface> & S1,const opencascade::handle<Adaptor3d_TopolTool> & I1,const opencascade::handle<BRepAdaptor_HCurve2d> & PC1,const opencascade::handle<BRepAdaptor_HSurface> & Sref1,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref1,const TopAbs_Orientation Or1,const opencascade::handle<BRepAdaptor_HSurface> & S2,const opencascade::handle<Adaptor3d_TopolTool> & I2,const opencascade::handle<BRepAdaptor_HCurve2d> & PC2,const opencascade::handle<BRepAdaptor_HSurface> & Sref2,const opencascade::handle<BRepAdaptor_HCurve2d> & PCref2,const TopAbs_Orientation Or2,const Standard_Real MaxStep,const Standard_Real Fleche,const Standard_Real TolGuide,const Standard_Boolean Inside,const Standard_Boolean Appro,const Standard_Boolean Forward,const Standard_Boolean RecP1,const Standard_Boolean RecRst1,const Standard_Boolean RecP2,const Standard_Boolean RecRst2,const math_Vector & Soldep ){ Standard_Boolean  Decroch1; Standard_Boolean  Decroch2; Standard_Real  First; Standard_Real  Last; self.PerformSurf(Data,Guide,Spine,Choix,S1,I1,PC1,Sref1,PCref1,Decroch1,Or1,S2,I2,PC2,Sref2,PCref2,Decroch2,Or2,MaxStep,Fleche,TolGuide,First,Last,Inside,Appro,Forward,RecP1,RecRst1,RecP2,RecRst2,Soldep); return std::make_tuple(Decroch1,Decroch2,First,Last); },
             R"#(Method, implemented in inheritants, calculates the elements of construction of the surface (fillet or chamfer) contact edge/edge.)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("PC1"),  py::arg("Sref1"),  py::arg("PCref1"),  py::arg("Or1"),  py::arg("S2"),  py::arg("I2"),  py::arg("PC2"),  py::arg("Sref2"),  py::arg("PCref2"),  py::arg("Or2"),  py::arg("MaxStep"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecP1"),  py::arg("RecRst1"),  py::arg("RecP2"),  py::arg("RecRst2"),  py::arg("Soldep"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi3d_FilBuilder , shared_ptr<ChFi3d_FilBuilder> , ChFi3d_Builder>>(m.attr("ChFi3d_FilBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ChFi3d_FilletShape.hxx
// ./opencascade/ChFi3d_FilBuilder.hxx
// ./opencascade/ChFi3d_ChBuilder.hxx
// ./opencascade/ChFi3d_Builder.hxx
// ./opencascade/ChFi3d_Builder_0.hxx
// ./opencascade/ChFi3d_SearchSing.hxx
// ./opencascade/ChFi3d.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
