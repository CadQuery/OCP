
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
#include <Geom_Curve.hxx>
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
        .def_static("ConcaveSide_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , const TopoDS_Edge & , TopAbs_Orientation & , TopAbs_Orientation & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , const TopoDS_Edge & , TopAbs_Orientation & , TopAbs_Orientation & ) >(&ChFi3d::ConcaveSide),
                    R"#(Returns Reversed in Or1 and(or) Or2 if the concave edge defined by the interior of faces F1 and F2, in the neighbourhood of their boundary E is of the edge opposite to the normal of their surface support. The orientation of faces is not taken into consideration in the calculation. The function returns 0 if the calculation fails (tangence), if not, it returns the number of choice of the fillet or chamfer corresponding to the orientations calculated and to the tangent to the guide line read in E.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("E"),  py::arg("Or1"),  py::arg("Or2"))
        .def_static("NextSide_s",
                    (Standard_Integer (*)( TopAbs_Orientation & , TopAbs_Orientation & , const TopAbs_Orientation , const TopAbs_Orientation , const Standard_Integer ) ) static_cast<Standard_Integer (*)( TopAbs_Orientation & , TopAbs_Orientation & , const TopAbs_Orientation , const TopAbs_Orientation , const Standard_Integer ) >(&ChFi3d::NextSide),
                    R"#(Same as ConcaveSide, but the orientations are logically deduced from the result of the call of ConcaveSide on the first pair of faces of the fillet or chamnfer.)#"  , py::arg("Or1"),  py::arg("Or2"),  py::arg("OrSave1"),  py::arg("OrSave2"),  py::arg("ChoixSauv"))
        .def_static("NextSide_s",
                    (void (*)( TopAbs_Orientation & , const TopAbs_Orientation , const TopAbs_Orientation ) ) static_cast<void (*)( TopAbs_Orientation & , const TopAbs_Orientation , const TopAbs_Orientation ) >(&ChFi3d::NextSide),
                    R"#(Same as the other NextSide, but the calculation is done on an edge only.)#"  , py::arg("Or"),  py::arg("OrSave"),  py::arg("OrFace"))
        .def_static("SameSide_s",
                    (Standard_Boolean (*)( const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation ) ) static_cast<Standard_Boolean (*)( const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation ) >(&ChFi3d::SameSide),
                    R"#(Enables to determine while processing an angle, if two fillets or chamfers constituting a face have identic or opposed concave edges.)#"  , py::arg("Or"),  py::arg("OrSave1"),  py::arg("OrSave2"),  py::arg("OrFace1"),  py::arg("OrFace2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi3d_Builder , shared_ptr<ChFi3d_Builder>,Py_ChFi3d_Builder >>(m.attr("ChFi3d_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("SetParams",
             (void (ChFi3d_Builder::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (ChFi3d_Builder::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&ChFi3d_Builder::SetParams),
             R"#(None)#"  , py::arg("Tang"),  py::arg("Tesp"),  py::arg("T2d"),  py::arg("TApp3d"),  py::arg("TolApp2d"),  py::arg("Fleche"))
        .def("SetContinuity",
             (void (ChFi3d_Builder::*)( const GeomAbs_Shape , const Standard_Real ) ) static_cast<void (ChFi3d_Builder::*)( const GeomAbs_Shape , const Standard_Real ) >(&ChFi3d_Builder::SetContinuity),
             R"#(None)#"  , py::arg("InternalContinuity"),  py::arg("AngularTolerance"))
        .def("Remove",
             (void (ChFi3d_Builder::*)( const TopoDS_Edge & ) ) static_cast<void (ChFi3d_Builder::*)( const TopoDS_Edge & ) >(&ChFi3d_Builder::Remove),
             R"#(extracts from the list the contour containing edge E.)#"  , py::arg("E"))
        .def("Contains",
             (Standard_Integer (ChFi3d_Builder::*)( const TopoDS_Edge & ) const) static_cast<Standard_Integer (ChFi3d_Builder::*)( const TopoDS_Edge & ) const>(&ChFi3d_Builder::Contains),
             R"#(gives the number of the contour containing E or 0 if E does not belong to any contour.)#"  , py::arg("E"))
        .def("Contains",
             (Standard_Integer (ChFi3d_Builder::*)( const TopoDS_Edge & , Standard_Integer & ) const) static_cast<Standard_Integer (ChFi3d_Builder::*)( const TopoDS_Edge & , Standard_Integer & ) const>(&ChFi3d_Builder::Contains),
             R"#(gives the number of the contour containing E or 0 if E does not belong to any contour. Sets in IndexInSpine the index of E in the contour if it's found)#"  , py::arg("E"),  py::arg("IndexInSpine"))
        .def("NbElements",
             (Standard_Integer (ChFi3d_Builder::*)() const) static_cast<Standard_Integer (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::NbElements),
             R"#(gives the number of disjoint contours on which the fillets are calculated)#" )
        .def("Value",
             (opencascade::handle<ChFiDS_Spine> (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<opencascade::handle<ChFiDS_Spine> (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::Value),
             R"#(gives the n'th set of edges (contour) if I >NbElements())#"  , py::arg("I"))
        .def("Length",
             (Standard_Real (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<Standard_Real (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::Length),
             R"#(returns the length of the contour of index IC.)#"  , py::arg("IC"))
        .def("FirstVertex",
             (TopoDS_Vertex (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::FirstVertex),
             R"#(returns the First vertex V of the contour of index IC.)#"  , py::arg("IC"))
        .def("LastVertex",
             (TopoDS_Vertex (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::LastVertex),
             R"#(returns the Last vertex V of the contour of index IC.)#"  , py::arg("IC"))
        .def("Abscissa",
             (Standard_Real (ChFi3d_Builder::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (ChFi3d_Builder::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&ChFi3d_Builder::Abscissa),
             R"#(returns the abscissa of the vertex V on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("RelativeAbscissa",
             (Standard_Real (ChFi3d_Builder::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (ChFi3d_Builder::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&ChFi3d_Builder::RelativeAbscissa),
             R"#(returns the relative abscissa([0.,1.]) of the vertex V on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("ClosedAndTangent",
             (Standard_Boolean (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::ClosedAndTangent),
             R"#(returns true if the contour of index IC is closed an tangent.)#"  , py::arg("IC"))
        .def("Closed",
             (Standard_Boolean (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::Closed),
             R"#(returns true if the contour of index IC is closed)#"  , py::arg("IC"))
        .def("Compute",
             (void (ChFi3d_Builder::*)() ) static_cast<void (ChFi3d_Builder::*)() >(&ChFi3d_Builder::Compute),
             R"#(general calculation of geometry on all edges, topologic reconstruction.)#" )
        .def("IsDone",
             (Standard_Boolean (ChFi3d_Builder::*)() const) static_cast<Standard_Boolean (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::IsDone),
             R"#(returns True if the computation is success)#" )
        .def("Shape",
             (TopoDS_Shape (ChFi3d_Builder::*)() const) static_cast<TopoDS_Shape (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::Shape),
             R"#(if (Isdone()) makes the result. if (!Isdone()))#" )
        .def("Generated",
             (const TopTools_ListOfShape & (ChFi3d_Builder::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (ChFi3d_Builder::*)( const TopoDS_Shape & ) >(&ChFi3d_Builder::Generated),
             R"#(Advanced function for the history)#"  , py::arg("EouV"))
        .def("NbFaultyContours",
             (Standard_Integer (ChFi3d_Builder::*)() const) static_cast<Standard_Integer (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::NbFaultyContours),
             R"#(Returns the number of contours on which the calculation has failed.)#" )
        .def("FaultyContour",
             (Standard_Integer (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<Standard_Integer (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::FaultyContour),
             R"#(Returns the number of I'th contour on which the calculation has failed.)#"  , py::arg("I"))
        .def("NbComputedSurfaces",
             (Standard_Integer (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<Standard_Integer (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::NbComputedSurfaces),
             R"#(Returns the number of surfaces calculated on the contour IC.)#"  , py::arg("IC"))
        .def("ComputedSurface",
             (opencascade::handle<Geom_Surface> (ChFi3d_Builder::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<Geom_Surface> (ChFi3d_Builder::*)( const Standard_Integer , const Standard_Integer ) const>(&ChFi3d_Builder::ComputedSurface),
             R"#(Returns the IS'th surface calculated on the contour IC.)#"  , py::arg("IC"),  py::arg("IS"))
        .def("NbFaultyVertices",
             (Standard_Integer (ChFi3d_Builder::*)() const) static_cast<Standard_Integer (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::NbFaultyVertices),
             R"#(Returns the number of vertices on which the calculation has failed.)#" )
        .def("FaultyVertex",
             (TopoDS_Vertex (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::FaultyVertex),
             R"#(Returns the IV'th vertex on which the calculation has failed.)#"  , py::arg("IV"))
        .def("HasResult",
             (Standard_Boolean (ChFi3d_Builder::*)() const) static_cast<Standard_Boolean (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::HasResult),
             R"#(returns True if a partial result has been calculated)#" )
        .def("BadShape",
             (TopoDS_Shape (ChFi3d_Builder::*)() const) static_cast<TopoDS_Shape (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::BadShape),
             R"#(if (HasResult()) returns partial result if (!HasResult()))#" )
        .def("StripeStatus",
             (ChFiDS_ErrorStatus (ChFi3d_Builder::*)( const Standard_Integer ) const) static_cast<ChFiDS_ErrorStatus (ChFi3d_Builder::*)( const Standard_Integer ) const>(&ChFi3d_Builder::StripeStatus),
             R"#(for the stripe IC ,indication on the cause of failure WalkingFailure,TwistedSurface,Error, Ok)#"  , py::arg("IC"))
        .def("Reset",
             (void (ChFi3d_Builder::*)() ) static_cast<void (ChFi3d_Builder::*)() >(&ChFi3d_Builder::Reset),
             R"#(Reset all results of compute and returns the algorythm in the state of the last acquisition to enable modification of contours or areas.)#" )
        .def("Builder",
             (opencascade::handle<TopOpeBRepBuild_HBuilder> (ChFi3d_Builder::*)() const) static_cast<opencascade::handle<TopOpeBRepBuild_HBuilder> (ChFi3d_Builder::*)() const>(&ChFi3d_Builder::Builder),
             R"#(Returns the Builder of topologic operations.)#" )
        .def("SplitKPart",
             (Standard_Boolean (ChFi3d_Builder::*)( const opencascade::handle<ChFiDS_SurfData> & , NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & , const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (ChFi3d_Builder::*)( const opencascade::handle<ChFiDS_SurfData> & , NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & , const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , Standard_Boolean & , Standard_Boolean & ) >(&ChFi3d_Builder::SplitKPart),
             R"#(Method, implemented in the inheritants, calculates the elements of construction of the surface (fillet or chamfer).)#"  , py::arg("Data"),  py::arg("SetData"),  py::arg("Spine"),  py::arg("Iedge"),  py::arg("S1"),  py::arg("I1"),  py::arg("S2"),  py::arg("I2"),  py::arg("Intf"),  py::arg("Intl"))
        .def("PerformTwoCornerbyInter",
             (Standard_Boolean (ChFi3d_Builder::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (ChFi3d_Builder::*)( const Standard_Integer ) >(&ChFi3d_Builder::PerformTwoCornerbyInter),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFi3d_SearchSing , shared_ptr<ChFi3d_SearchSing> , math_FunctionWithDerivative>>(m.attr("ChFi3d_SearchSing"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom_Curve> & >()  , py::arg("C1"),  py::arg("C2") )
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
        .def(py::init< const TopoDS_Shape &,const Standard_Real >()  , py::arg("S"),  py::arg("Ta")=static_cast<const Standard_Real>(1.0e-2) )
    // custom constructors
    // methods
        .def("Add",
             (void (ChFi3d_ChBuilder::*)( const TopoDS_Edge & ) ) static_cast<void (ChFi3d_ChBuilder::*)( const TopoDS_Edge & ) >(&ChFi3d_ChBuilder::Add),
             R"#(initializes a contour with the edge <E> as first (the next are found by propagation ). The two distances (parameters of the chamfer) must be set after. if the edge <E> has more than 2 adjacent faces)#"  , py::arg("E"))
        .def("Add",
             (void (ChFi3d_ChBuilder::*)( const Standard_Real , const TopoDS_Edge & ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Real , const TopoDS_Edge & ) >(&ChFi3d_ChBuilder::Add),
             R"#(initializes a new contour with the edge <E> as first (the next are found by propagation ), and the distance <Dis> if the edge <E> has more than 2 adjacent faces)#"  , py::arg("Dis"),  py::arg("E"))
        .def("SetDist",
             (void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Integer , const TopoDS_Face & ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Integer , const TopoDS_Face & ) >(&ChFi3d_ChBuilder::SetDist),
             R"#(set the distance <Dis> of the fillet contour of index <IC> in the DS with <Dis> on <F>. if the face <F> is not one of common faces of an edge of the contour <IC>)#"  , py::arg("Dis"),  py::arg("IC"),  py::arg("F"))
        .def("Add",
             (void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & ) >(&ChFi3d_ChBuilder::Add),
             R"#(initializes a new contour with the edge <E> as first (the next are found by propagation ), and the distance <Dis1> and <Dis2> if the edge <E> has more than 2 adjacent faces)#"  , py::arg("Dis1"),  py::arg("Dis2"),  py::arg("E"),  py::arg("F"))
        .def("SetDists",
             (void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const TopoDS_Face & ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const TopoDS_Face & ) >(&ChFi3d_ChBuilder::SetDists),
             R"#(set the distances <Dis1> and <Dis2> of the fillet contour of index <IC> in the DS with <Dis1> on <F>. if the face <F> is not one of common faces of an edge of the contour <IC>)#"  , py::arg("Dis1"),  py::arg("Dis2"),  py::arg("IC"),  py::arg("F"))
        .def("AddDA",
             (void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & ) >(&ChFi3d_ChBuilder::AddDA),
             R"#(initializes a new contour with the edge <E> as first (the next are found by propagation ), and the distance <Dis1> and <Angle> if the edge <E> has more than 2 adjacent faces)#"  , py::arg("Dis"),  py::arg("Angle"),  py::arg("E"),  py::arg("F"))
        .def("SetDistAngle",
             (void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const TopoDS_Face & ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const TopoDS_Face & ) >(&ChFi3d_ChBuilder::SetDistAngle),
             R"#(set the distance <Dis> and <Angle> of the fillet contour of index <IC> in the DS with <Dis> on <F>. if the face <F> is not one of common faces of an edge of the contour <IC>)#"  , py::arg("Dis"),  py::arg("Angle"),  py::arg("IC"),  py::arg("F"))
        .def("SetMode",
             (void (ChFi3d_ChBuilder::*)( const ChFiDS_ChamfMode ) ) static_cast<void (ChFi3d_ChBuilder::*)( const ChFiDS_ChamfMode ) >(&ChFi3d_ChBuilder::SetMode),
             R"#(set the mode of shamfer)#"  , py::arg("theMode"))
        .def("IsChamfer",
             (ChFiDS_ChamfMethod (ChFi3d_ChBuilder::*)( const Standard_Integer ) const) static_cast<ChFiDS_ChamfMethod (ChFi3d_ChBuilder::*)( const Standard_Integer ) const>(&ChFi3d_ChBuilder::IsChamfer),
             R"#(renvoi la methode des chanfreins utilisee)#"  , py::arg("IC"))
        .def("Mode",
             (ChFiDS_ChamfMode (ChFi3d_ChBuilder::*)() const) static_cast<ChFiDS_ChamfMode (ChFi3d_ChBuilder::*)() const>(&ChFi3d_ChBuilder::Mode),
             R"#(returns the mode of chamfer used)#" )
        .def("ResetContour",
             (void (ChFi3d_ChBuilder::*)( const Standard_Integer ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Integer ) >(&ChFi3d_ChBuilder::ResetContour),
             R"#(Reset tous rayons du contour IC.)#"  , py::arg("IC"))
        .def("Simulate",
             (void (ChFi3d_ChBuilder::*)( const Standard_Integer ) ) static_cast<void (ChFi3d_ChBuilder::*)( const Standard_Integer ) >(&ChFi3d_ChBuilder::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (ChFi3d_ChBuilder::*)( const Standard_Integer ) const) static_cast<Standard_Integer (ChFi3d_ChBuilder::*)( const Standard_Integer ) const>(&ChFi3d_ChBuilder::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (ChFi3d_ChBuilder::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (ChFi3d_ChBuilder::*)( const Standard_Integer , const Standard_Integer ) const>(&ChFi3d_ChBuilder::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
        .def("PerformSurf",
             (Standard_Boolean (ChFi3d_ChBuilder::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & , const opencascade::handle<ChFiDS_HElSpine> & , const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const math_Vector & , Standard_Integer & , Standard_Integer & ) ) static_cast<Standard_Boolean (ChFi3d_ChBuilder::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & , const opencascade::handle<ChFiDS_HElSpine> & , const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Adaptor3d_TopolTool> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const math_Vector & , Standard_Integer & , Standard_Integer & ) >(&ChFi3d_ChBuilder::PerformSurf),
             R"#(Methode, implemented in inheritants, calculates the elements of construction of the surface (fillet or chamfer).)#"  , py::arg("Data"),  py::arg("Guide"),  py::arg("Spine"),  py::arg("Choix"),  py::arg("S1"),  py::arg("I1"),  py::arg("S2"),  py::arg("I2"),  py::arg("MaxStep"),  py::arg("Fleche"),  py::arg("TolGuide"),  py::arg("First"),  py::arg("Last"),  py::arg("Inside"),  py::arg("Appro"),  py::arg("Forward"),  py::arg("RecOnS1"),  py::arg("RecOnS2"),  py::arg("Soldep"),  py::arg("Intf"),  py::arg("Intl"))
    // methods using call by reference i.s.o. return
        .def("GetDist",
             []( ChFi3d_ChBuilder &self , const Standard_Integer IC ){ Standard_Real  Dis; self.GetDist(IC,Dis); return std::make_tuple(Dis); },
             R"#(gives the distances <Dis> of the fillet contour of index <IC> in the DS)#"  , py::arg("IC"))
        .def("Dists",
             []( ChFi3d_ChBuilder &self , const Standard_Integer IC ){ Standard_Real  Dis1; Standard_Real  Dis2; self.Dists(IC,Dis1,Dis2); return std::make_tuple(Dis1,Dis2); },
             R"#(gives the distances <Dis1> and <Dis2> of the fillet contour of index <IC> in the DS)#"  , py::arg("IC"))
        .def("GetDistAngle",
             []( ChFi3d_ChBuilder &self , const Standard_Integer IC ){ Standard_Real  Dis; Standard_Real  Angle; self.GetDistAngle(IC,Dis,Angle); return std::make_tuple(Dis,Angle); },
             R"#(gives the distances <Dis> and <Angle> of the fillet contour of index <IC> in the DS)#"  , py::arg("IC"))
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
        .def(py::init< const TopoDS_Shape &,const ChFi3d_FilletShape,const Standard_Real >()  , py::arg("S"),  py::arg("FShape")=static_cast<const ChFi3d_FilletShape>(ChFi3d_Rational),  py::arg("Ta")=static_cast<const Standard_Real>(1.0e-2) )
    // custom constructors
    // methods
        .def("SetFilletShape",
             (void (ChFi3d_FilBuilder::*)( const ChFi3d_FilletShape ) ) static_cast<void (ChFi3d_FilBuilder::*)( const ChFi3d_FilletShape ) >(&ChFi3d_FilBuilder::SetFilletShape),
             R"#(Sets the type of fillet surface.)#"  , py::arg("FShape"))
        .def("GetFilletShape",
             (ChFi3d_FilletShape (ChFi3d_FilBuilder::*)() const) static_cast<ChFi3d_FilletShape (ChFi3d_FilBuilder::*)() const>(&ChFi3d_FilBuilder::GetFilletShape),
             R"#(Returns the type of fillet surface.)#" )
        .def("Add",
             (void (ChFi3d_FilBuilder::*)( const TopoDS_Edge & ) ) static_cast<void (ChFi3d_FilBuilder::*)( const TopoDS_Edge & ) >(&ChFi3d_FilBuilder::Add),
             R"#(initialisation of a contour with the first edge (the following are found by propagation). Attention, you need to start with SetRadius.)#"  , py::arg("E"))
        .def("Add",
             (void (ChFi3d_FilBuilder::*)( const Standard_Real , const TopoDS_Edge & ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Real , const TopoDS_Edge & ) >(&ChFi3d_FilBuilder::Add),
             R"#(initialisation of the constant vector the corresponding 1st edge.)#"  , py::arg("Radius"),  py::arg("E"))
        .def("SetRadius",
             (void (ChFi3d_FilBuilder::*)( const opencascade::handle<Law_Function> & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (ChFi3d_FilBuilder::*)( const opencascade::handle<Law_Function> & , const Standard_Integer , const Standard_Integer ) >(&ChFi3d_FilBuilder::SetRadius),
             R"#(Set the radius of the contour of index IC.)#"  , py::arg("C"),  py::arg("IC"),  py::arg("IinC"))
        .def("IsConstant",
             (Standard_Boolean (ChFi3d_FilBuilder::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (ChFi3d_FilBuilder::*)( const Standard_Integer ) >(&ChFi3d_FilBuilder::IsConstant),
             R"#(Returns true the contour is flaged as edge constant.)#"  , py::arg("IC"))
        .def("Radius",
             (Standard_Real (ChFi3d_FilBuilder::*)( const Standard_Integer ) ) static_cast<Standard_Real (ChFi3d_FilBuilder::*)( const Standard_Integer ) >(&ChFi3d_FilBuilder::Radius),
             R"#(Returns the vector if the contour is flagged as edge constant.)#"  , py::arg("IC"))
        .def("ResetContour",
             (void (ChFi3d_FilBuilder::*)( const Standard_Integer ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Integer ) >(&ChFi3d_FilBuilder::ResetContour),
             R"#(Reset all vectors of contour IC.)#"  , py::arg("IC"))
        .def("SetRadius",
             (void (ChFi3d_FilBuilder::*)( const Standard_Real , const Standard_Integer , const TopoDS_Edge & ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Real , const Standard_Integer , const TopoDS_Edge & ) >(&ChFi3d_FilBuilder::SetRadius),
             R"#(Set a constant on edge E of the contour of index IC. Since then E is flagged as constant.)#"  , py::arg("Radius"),  py::arg("IC"),  py::arg("E"))
        .def("UnSet",
             (void (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) >(&ChFi3d_FilBuilder::UnSet),
             R"#(Extracts the flag constant and the vector of edge E.)#"  , py::arg("IC"),  py::arg("E"))
        .def("SetRadius",
             (void (ChFi3d_FilBuilder::*)( const Standard_Real , const Standard_Integer , const TopoDS_Vertex & ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Real , const Standard_Integer , const TopoDS_Vertex & ) >(&ChFi3d_FilBuilder::SetRadius),
             R"#(Set a vector on vertex V of the contour of index IC.)#"  , py::arg("Radius"),  py::arg("IC"),  py::arg("V"))
        .def("UnSet",
             (void (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Vertex & ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Vertex & ) >(&ChFi3d_FilBuilder::UnSet),
             R"#(Extracts the vector of the vertex V.)#"  , py::arg("IC"),  py::arg("V"))
        .def("SetRadius",
             (void (ChFi3d_FilBuilder::*)( const gp_XY & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (ChFi3d_FilBuilder::*)( const gp_XY & , const Standard_Integer , const Standard_Integer ) >(&ChFi3d_FilBuilder::SetRadius),
             R"#(Set a vertex on the point of parametre U in the edge IinC of the contour of index IC)#"  , py::arg("UandR"),  py::arg("IC"),  py::arg("IinC"))
        .def("IsConstant",
             (Standard_Boolean (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<Standard_Boolean (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) >(&ChFi3d_FilBuilder::IsConstant),
             R"#(Returns true E is flagged as edge constant.)#"  , py::arg("IC"),  py::arg("E"))
        .def("Radius",
             (Standard_Real (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<Standard_Real (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) >(&ChFi3d_FilBuilder::Radius),
             R"#(Returns the vector if E is flagged as edge constant.)#"  , py::arg("IC"),  py::arg("E"))
        .def("GetBounds",
             (Standard_Boolean (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&ChFi3d_FilBuilder::GetBounds),
             R"#(Returns in First and Last les extremities of the part of variable vector framing E, returns False if E is flagged as edge constant.)#"  , py::arg("IC"),  py::arg("E"),  py::arg("First"),  py::arg("Last"))
        .def("GetLaw",
             (opencascade::handle<Law_Function> (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<opencascade::handle<Law_Function> (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & ) >(&ChFi3d_FilBuilder::GetLaw),
             R"#(Returns the rule of elementary evolution of the part to variable vector framing E, returns a rule zero if E is flagged as edge constant.)#"  , py::arg("IC"),  py::arg("E"))
        .def("SetLaw",
             (void (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & , const opencascade::handle<Law_Function> & ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Integer , const TopoDS_Edge & , const opencascade::handle<Law_Function> & ) >(&ChFi3d_FilBuilder::SetLaw),
             R"#(Sets the rule of elementary evolution of the part to variable vector framing E.)#"  , py::arg("IC"),  py::arg("E"),  py::arg("L"))
        .def("Simulate",
             (void (ChFi3d_FilBuilder::*)( const Standard_Integer ) ) static_cast<void (ChFi3d_FilBuilder::*)( const Standard_Integer ) >(&ChFi3d_FilBuilder::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (ChFi3d_FilBuilder::*)( const Standard_Integer ) const) static_cast<Standard_Integer (ChFi3d_FilBuilder::*)( const Standard_Integer ) const>(&ChFi3d_FilBuilder::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (ChFi3d_FilBuilder::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (ChFi3d_FilBuilder::*)( const Standard_Integer , const Standard_Integer ) const>(&ChFi3d_FilBuilder::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ChFi3d_FilBuilder.hxx
// ./opencascade/ChFi3d_ChBuilder.hxx
// ./opencascade/ChFi3d_SearchSing.hxx
// ./opencascade/ChFi3d_Builder.hxx
// ./opencascade/ChFi3d_Builder_0.hxx
    m.def("ChFi3d_EnlargeBox",
          (void (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , Bnd_Box & , Bnd_Box & ))  static_cast<void (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , Bnd_Box & , Bnd_Box & )>(&ChFi3d_EnlargeBox),
          R"#(None)#"  , py::arg("C"),  py::arg("wd"),  py::arg("wf"),  py::arg("box1"),  py::arg("box2"));
    m.def("ChFi3d_EnlargeBox",
          (void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , Bnd_Box & , Bnd_Box & ))  static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , Bnd_Box & , Bnd_Box & )>(&ChFi3d_EnlargeBox),
          R"#(None)#"  , py::arg("S"),  py::arg("PC"),  py::arg("wd"),  py::arg("wf"),  py::arg("box1"),  py::arg("box2"));
    m.def("ChFi3d_EnlargeBox",
          (void (*)( const TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & , const Standard_Real , Bnd_Box & ))  static_cast<void (*)( const TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & , const Standard_Real , Bnd_Box & )>(&ChFi3d_EnlargeBox),
          R"#(None)#"  , py::arg("E"),  py::arg("LF"),  py::arg("w"),  py::arg("box"));
    m.def("ChFi3d_EnlargeBox",
          (void (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_SurfData> & , Bnd_Box & , Bnd_Box & , const Standard_Boolean ))  static_cast<void (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_SurfData> & , Bnd_Box & , Bnd_Box & , const Standard_Boolean )>(&ChFi3d_EnlargeBox),
          R"#(None)#"  , py::arg("DStr"),  py::arg("st"),  py::arg("sd"),  py::arg("b1"),  py::arg("b2"),  py::arg("isfirst"));
    m.def("ChFi3d_evalconti",
          (GeomAbs_Shape (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ))  static_cast<GeomAbs_Shape (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & )>(&ChFi3d_evalconti),
          R"#(None)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"));
    m.def("ChFi3d_conexfaces",
          (void (*)( const TopoDS_Edge & , TopoDS_Face & , TopoDS_Face & , const ChFiDS_Map & ))  static_cast<void (*)( const TopoDS_Edge & , TopoDS_Face & , TopoDS_Face & , const ChFiDS_Map & )>(&ChFi3d_conexfaces),
          R"#(None)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("EFMap"));
    m.def("ChFi3d_EdgeState",
          (ChFiDS_State (*)( TopoDS_Edge * , const ChFiDS_Map & ))  static_cast<ChFiDS_State (*)( TopoDS_Edge * , const ChFiDS_Map & )>(&ChFi3d_EdgeState),
          R"#(None)#"  , py::arg("E"),  py::arg("EFMap"));
    m.def("ChFi3d_KParticular",
          (Standard_Boolean (*)( const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<ChFiDS_Spine> & , const Standard_Integer , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & )>(&ChFi3d_KParticular),
          R"#(None)#"  , py::arg("Spine"),  py::arg("IE"),  py::arg("S1"),  py::arg("S2"));
    m.def("ChFi3d_BoundFac",
          (void (*)( BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ))  static_cast<void (*)( BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean )>(&ChFi3d_BoundFac),
          R"#(None)#"  , py::arg("S"),  py::arg("umin"),  py::arg("umax"),  py::arg("vmin"),  py::arg("vmax"),  py::arg("checknaturalbounds")=static_cast<const Standard_Boolean>(Standard_True));
    m.def("ChFi3d_BoundSrf",
          (void (*)( GeomAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ))  static_cast<void (*)( GeomAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean )>(&ChFi3d_BoundSrf),
          R"#(None)#"  , py::arg("S"),  py::arg("umin"),  py::arg("umax"),  py::arg("vmin"),  py::arg("vmax"),  py::arg("checknaturalbounds")=static_cast<const Standard_Boolean>(Standard_True));
    m.def("ChFi3d_InterPlaneEdge",
          (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HCurve> & , Standard_Real & , const Standard_Boolean , const Standard_Real ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HCurve> & , Standard_Real & , const Standard_Boolean , const Standard_Real )>(&ChFi3d_InterPlaneEdge),
          R"#(None)#"  , py::arg("Plan"),  py::arg("C"),  py::arg("W"),  py::arg("Sens"),  py::arg("tolc"));
    m.def("ChFi3d_ExtrSpineCarac",
          (void (*)( const TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const Standard_Integer , const Standard_Real , const Standard_Integer , const Standard_Integer , gp_Pnt & , gp_Vec & , Standard_Real & ))  static_cast<void (*)( const TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const Standard_Integer , const Standard_Real , const Standard_Integer , const Standard_Integer , gp_Pnt & , gp_Vec & , Standard_Real & )>(&ChFi3d_ExtrSpineCarac),
          R"#(None)#"  , py::arg("DStr"),  py::arg("cd"),  py::arg("i"),  py::arg("p"),  py::arg("jf"),  py::arg("sens"),  py::arg("P"),  py::arg("V"),  py::arg("R"));
    m.def("ChFi3d_CircularSpine",
          (opencascade::handle<Geom_Circle> (*)( Standard_Real & , Standard_Real & , const gp_Pnt & , const gp_Vec & , const gp_Pnt & , const gp_Vec & , const Standard_Real ))  static_cast<opencascade::handle<Geom_Circle> (*)( Standard_Real & , Standard_Real & , const gp_Pnt & , const gp_Vec & , const gp_Pnt & , const gp_Vec & , const Standard_Real )>(&ChFi3d_CircularSpine),
          R"#(None)#"  , py::arg("WFirst"),  py::arg("WLast"),  py::arg("Pdeb"),  py::arg("Vdeb"),  py::arg("Pfin"),  py::arg("Vfin"),  py::arg("rad"));
    m.def("ChFi3d_Spine",
          (opencascade::handle<Geom_BezierCurve> (*)( const gp_Pnt & , gp_Vec & , const gp_Pnt & , gp_Vec & , const Standard_Real ))  static_cast<opencascade::handle<Geom_BezierCurve> (*)( const gp_Pnt & , gp_Vec & , const gp_Pnt & , gp_Vec & , const Standard_Real )>(&ChFi3d_Spine),
          R"#(None)#"  , py::arg("pd"),  py::arg("vd"),  py::arg("pf"),  py::arg("vf"),  py::arg("R"));
    m.def("ChFi3d_mkbound",
          (opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const Standard_Integer , const gp_Pnt2d & , const gp_Vec2d & , const Standard_Integer , const gp_Pnt2d & , const gp_Vec2d & , const Standard_Real , const Standard_Real ))  static_cast<opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const Standard_Integer , const gp_Pnt2d & , const gp_Vec2d & , const Standard_Integer , const gp_Pnt2d & , const gp_Vec2d & , const Standard_Real , const Standard_Real )>(&ChFi3d_mkbound),
          R"#(None)#"  , py::arg("Fac"),  py::arg("curv"),  py::arg("sens1"),  py::arg("pfac1"),  py::arg("vfac1"),  py::arg("sens2"),  py::arg("pfac2"),  py::arg("vfac2"),  py::arg("t3d"),  py::arg("ta"));
    m.def("ChFi3d_mkbound",
          (opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const Standard_Integer , const gp_Pnt2d & , gp_Vec & , const Standard_Integer , const gp_Pnt2d & , gp_Vec & , const Standard_Real , const Standard_Real ))  static_cast<opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const Standard_Integer , const gp_Pnt2d & , gp_Vec & , const Standard_Integer , const gp_Pnt2d & , gp_Vec & , const Standard_Real , const Standard_Real )>(&ChFi3d_mkbound),
          R"#(None)#"  , py::arg("Surf"),  py::arg("curv"),  py::arg("sens1"),  py::arg("p1"),  py::arg("v1"),  py::arg("sens2"),  py::arg("p2"),  py::arg("v2"),  py::arg("t3d"),  py::arg("ta"));
    m.def("ChFi3d_mkbound",
          (opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Geom_Surface> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean ))  static_cast<opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Geom_Surface> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean )>(&ChFi3d_mkbound),
          R"#(None)#"  , py::arg("s"),  py::arg("p1"),  py::arg("p2"),  py::arg("t3d"),  py::arg("ta"),  py::arg("isfreeboundary")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_mkbound",
          (opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean ))  static_cast<opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean )>(&ChFi3d_mkbound),
          R"#(None)#"  , py::arg("HS"),  py::arg("p1"),  py::arg("p2"),  py::arg("t3d"),  py::arg("ta"),  py::arg("isfreeboundary")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_mkbound",
          (opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , const Standard_Boolean ))  static_cast<opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , const Standard_Boolean )>(&ChFi3d_mkbound),
          R"#(None)#"  , py::arg("HS"),  py::arg("curv"),  py::arg("t3d"),  py::arg("ta"),  py::arg("isfreeboundary")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_mkbound",
          (opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean ))  static_cast<opencascade::handle<GeomFill_Boundary> (*)( const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean )>(&ChFi3d_mkbound),
          R"#(None)#"  , py::arg("Fac"),  py::arg("curv"),  py::arg("p1"),  py::arg("p2"),  py::arg("t3d"),  py::arg("ta"),  py::arg("isfreeboundary")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_Coefficient",
          (void (*)( const gp_Vec & , const gp_Vec & , const gp_Vec & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const gp_Vec & , const gp_Vec & , const gp_Vec & , Standard_Real & , Standard_Real & )>(&ChFi3d_Coefficient),
          R"#(None)#"  , py::arg("V3d"),  py::arg("D1u"),  py::arg("D1v"),  py::arg("DU"),  py::arg("DV"));
    m.def("ChFi3d_BuildPCurve",
          (opencascade::handle<Geom2d_Curve> (*)( const gp_Pnt2d & , gp_Dir2d & , const gp_Pnt2d & , gp_Dir2d & , const Standard_Boolean ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const gp_Pnt2d & , gp_Dir2d & , const gp_Pnt2d & , gp_Dir2d & , const Standard_Boolean )>(&ChFi3d_BuildPCurve),
          R"#(None)#"  , py::arg("p1"),  py::arg("d1"),  py::arg("p2"),  py::arg("d2"),  py::arg("redresse")=static_cast<const Standard_Boolean>(Standard_True));
    m.def("ChFi3d_BuildPCurve",
          (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const gp_Pnt2d & , const gp_Vec & , const gp_Pnt2d & , const gp_Vec & , const Standard_Boolean ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const gp_Pnt2d & , const gp_Vec & , const gp_Pnt2d & , const gp_Vec & , const Standard_Boolean )>(&ChFi3d_BuildPCurve),
          R"#(None)#"  , py::arg("Surf"),  py::arg("p1"),  py::arg("v1"),  py::arg("p2"),  py::arg("v2"),  py::arg("redresse")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_BuildPCurve",
          (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const gp_Pnt2d & , const gp_Vec2d & , const gp_Pnt2d & , const gp_Vec2d & , const Standard_Boolean ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Adaptor3d_HSurface> & , const gp_Pnt2d & , const gp_Vec2d & , const gp_Pnt2d & , const gp_Vec2d & , const Standard_Boolean )>(&ChFi3d_BuildPCurve),
          R"#(None)#"  , py::arg("Surf"),  py::arg("p1"),  py::arg("v1"),  py::arg("p2"),  py::arg("v2"),  py::arg("redresse")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_CheckSameParameter",
          (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , Standard_Real & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , Standard_Real & )>(&ChFi3d_CheckSameParameter),
          R"#(None)#"  , py::arg("C3d"),  py::arg("Pcurv"),  py::arg("S"),  py::arg("tol3d"),  py::arg("tolreached"));
    m.def("ChFi3d_SameParameter",
          (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , Standard_Real & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , Standard_Real & )>(&ChFi3d_SameParameter),
          R"#(None)#"  , py::arg("C3d"),  py::arg("Pcurv"),  py::arg("S"),  py::arg("tol3d"),  py::arg("tolreached"));
    m.def("ChFi3d_SameParameter",
          (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & )>(&ChFi3d_SameParameter),
          R"#(None)#"  , py::arg("C3d"),  py::arg("Pcurv"),  py::arg("S"),  py::arg("Pardeb"),  py::arg("Parfin"),  py::arg("tol3d"),  py::arg("tolreached"));
    m.def("ChFi3d_ComputePCurv",
          (void (*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Boolean ))  static_cast<void (*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt2d & , const gp_Pnt2d & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Boolean )>(&ChFi3d_ComputePCurv),
          R"#(None)#"  , py::arg("C3d"),  py::arg("UV1"),  py::arg("UV2"),  py::arg("Pcurv"),  py::arg("S"),  py::arg("Pardeb"),  py::arg("Parfin"),  py::arg("tol3d"),  py::arg("tolreached"),  py::arg("reverse")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_ComputePCurv",
          (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const gp_Pnt2d & , const gp_Pnt2d & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Boolean ))  static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const gp_Pnt2d & , const gp_Pnt2d & , opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Boolean )>(&ChFi3d_ComputePCurv),
          R"#(None)#"  , py::arg("C3d"),  py::arg("UV1"),  py::arg("UV2"),  py::arg("Pcurv"),  py::arg("S"),  py::arg("Pardeb"),  py::arg("Parfin"),  py::arg("tol3d"),  py::arg("tolreached"),  py::arg("reverse")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_ComputePCurv",
          (void (*)( const gp_Pnt2d & , const gp_Pnt2d & , opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , const Standard_Boolean ))  static_cast<void (*)( const gp_Pnt2d & , const gp_Pnt2d & , opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , const Standard_Boolean )>(&ChFi3d_ComputePCurv),
          R"#(None)#"  , py::arg("UV1"),  py::arg("UV2"),  py::arg("Pcurv"),  py::arg("Pardeb"),  py::arg("Parfin"),  py::arg("reverse")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_IntTraces",
          (Standard_Boolean (*)( const opencascade::handle<ChFiDS_SurfData> & , const Standard_Real , Standard_Real & , const Standard_Integer , const Standard_Integer , const opencascade::handle<ChFiDS_SurfData> & , const Standard_Real , Standard_Real & , const Standard_Integer , const Standard_Integer , const gp_Pnt2d & , const Standard_Boolean , const Standard_Boolean ))  static_cast<Standard_Boolean (*)( const opencascade::handle<ChFiDS_SurfData> & , const Standard_Real , Standard_Real & , const Standard_Integer , const Standard_Integer , const opencascade::handle<ChFiDS_SurfData> & , const Standard_Real , Standard_Real & , const Standard_Integer , const Standard_Integer , const gp_Pnt2d & , const Standard_Boolean , const Standard_Boolean )>(&ChFi3d_IntTraces),
          R"#(None)#"  , py::arg("fd1"),  py::arg("pref1"),  py::arg("p1"),  py::arg("jf1"),  py::arg("sens1"),  py::arg("fd2"),  py::arg("pref2"),  py::arg("p2"),  py::arg("jf2"),  py::arg("sens2"),  py::arg("RefP2d"),  py::arg("Check2dDistance")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("enlarge")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_IsInFront",
          (Standard_Boolean (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_Stripe> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Real & , Standard_Real & , TopoDS_Face & , Standard_Boolean & , Standard_Integer & , Standard_Integer & , Standard_Boolean & , const TopoDS_Vertex & , const Standard_Boolean , const Standard_Boolean ))  static_cast<Standard_Boolean (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_Stripe> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Real & , Standard_Real & , TopoDS_Face & , Standard_Boolean & , Standard_Integer & , Standard_Integer & , Standard_Boolean & , const TopoDS_Vertex & , const Standard_Boolean , const Standard_Boolean )>(&ChFi3d_IsInFront),
          R"#(None)#"  , py::arg("DStr"),  py::arg("cd1"),  py::arg("cd2"),  py::arg("i1"),  py::arg("i2"),  py::arg("sens1"),  py::arg("sens2"),  py::arg("p1"),  py::arg("p2"),  py::arg("face"),  py::arg("sameside"),  py::arg("jf1"),  py::arg("jf2"),  py::arg("visavis"),  py::arg("Vtx"),  py::arg("Check2dDistance")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("enlarge")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_ProjectPCurv",
          (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const Standard_Real , Standard_Real & ))  static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const opencascade::handle<Adaptor3d_HSurface> & , opencascade::handle<Geom2d_Curve> & , const Standard_Real , Standard_Real & )>(&ChFi3d_ProjectPCurv),
          R"#(None)#"  , py::arg("HCg"),  py::arg("HSg"),  py::arg("Pcurv"),  py::arg("tol3d"),  py::arg("tolreached"));
    m.def("ChFi3d_ReparamPcurv",
          (void (*)( const Standard_Real , const Standard_Real , opencascade::handle<Geom2d_Curve> & ))  static_cast<void (*)( const Standard_Real , const Standard_Real , opencascade::handle<Geom2d_Curve> & )>(&ChFi3d_ReparamPcurv),
          R"#(None)#"  , py::arg("Uf"),  py::arg("Ul"),  py::arg("Pcurv"));
    m.def("ChFi3d_ComputeArete",
          (void (*)( const ChFiDS_CommonPoint & , const gp_Pnt2d & , const ChFiDS_CommonPoint & , const gp_Pnt2d & , const opencascade::handle<Geom_Surface> & , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Integer ))  static_cast<void (*)( const ChFiDS_CommonPoint & , const gp_Pnt2d & , const ChFiDS_CommonPoint & , const gp_Pnt2d & , const opencascade::handle<Geom_Surface> & , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Integer )>(&ChFi3d_ComputeArete),
          R"#(None)#"  , py::arg("P1"),  py::arg("UV1"),  py::arg("P2"),  py::arg("UV2"),  py::arg("Surf"),  py::arg("C3d"),  py::arg("Pcurv"),  py::arg("Pardeb"),  py::arg("Parfin"),  py::arg("tol3d"),  py::arg("tol2d"),  py::arg("tolreached"),  py::arg("IFlag"));
    m.def("ChFi3d_FilCurveInDS",
          (opencascade::handle<TopOpeBRepDS_SurfaceCurveInterference> (*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<Geom2d_Curve> & , const TopAbs_Orientation ))  static_cast<opencascade::handle<TopOpeBRepDS_SurfaceCurveInterference> (*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<Geom2d_Curve> & , const TopAbs_Orientation )>(&ChFi3d_FilCurveInDS),
          R"#(None)#"  , py::arg("Icurv"),  py::arg("Isurf"),  py::arg("Pcurv"),  py::arg("Et"));
    m.def("ChFi3d_TrsfTrans",
          (TopAbs_Orientation (*)( const IntSurf_TypeTrans ))  static_cast<TopAbs_Orientation (*)( const IntSurf_TypeTrans )>(&ChFi3d_TrsfTrans),
          R"#(None)#"  , py::arg("T1"));
    m.def("ChFi3d_FilCommonPoint",
          (void (*)( const BRepBlend_Extremity & , const IntSurf_TypeTrans , const Standard_Boolean , ChFiDS_CommonPoint & , const Standard_Real ))  static_cast<void (*)( const BRepBlend_Extremity & , const IntSurf_TypeTrans , const Standard_Boolean , ChFiDS_CommonPoint & , const Standard_Real )>(&ChFi3d_FilCommonPoint),
          R"#(None)#"  , py::arg("SP"),  py::arg("TransLine"),  py::arg("Start"),  py::arg("CP"),  py::arg("Tol"));
    m.def("ChFi3d_SolidIndex",
          (Standard_Integer (*)( const opencascade::handle<ChFiDS_Spine> & , TopOpeBRepDS_DataStructure & , ChFiDS_Map & , ChFiDS_Map & ))  static_cast<Standard_Integer (*)( const opencascade::handle<ChFiDS_Spine> & , TopOpeBRepDS_DataStructure & , ChFiDS_Map & , ChFiDS_Map & )>(&ChFi3d_SolidIndex),
          R"#(None)#"  , py::arg("sp"),  py::arg("DStr"),  py::arg("MapESo"),  py::arg("MapESh"));
    m.def("ChFi3d_IndexPointInDS",
          (Standard_Integer (*)( const ChFiDS_CommonPoint & , TopOpeBRepDS_DataStructure & ))  static_cast<Standard_Integer (*)( const ChFiDS_CommonPoint & , TopOpeBRepDS_DataStructure & )>(&ChFi3d_IndexPointInDS),
          R"#(None)#"  , py::arg("P1"),  py::arg("DStr"));
    m.def("ChFi3d_FilPointInDS",
          (opencascade::handle<TopOpeBRepDS_CurvePointInterference> (*)( const TopAbs_Orientation , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Boolean ))  static_cast<opencascade::handle<TopOpeBRepDS_CurvePointInterference> (*)( const TopAbs_Orientation , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Boolean )>(&ChFi3d_FilPointInDS),
          R"#(None)#"  , py::arg("Et"),  py::arg("Ic"),  py::arg("Ip"),  py::arg("Par"),  py::arg("IsVertex")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_FilVertexInDS",
          (opencascade::handle<TopOpeBRepDS_CurvePointInterference> (*)( const TopAbs_Orientation , const Standard_Integer , const Standard_Integer , const Standard_Real ))  static_cast<opencascade::handle<TopOpeBRepDS_CurvePointInterference> (*)( const TopAbs_Orientation , const Standard_Integer , const Standard_Integer , const Standard_Real )>(&ChFi3d_FilVertexInDS),
          R"#(None)#"  , py::arg("Et"),  py::arg("Ic"),  py::arg("Ip"),  py::arg("Par"));
    m.def("ChFi3d_FilDS",
          (void (*)( const Standard_Integer , const opencascade::handle<ChFiDS_Stripe> & , TopOpeBRepDS_DataStructure & , NCollection_List<ChFiDS_Regul> & , const Standard_Real , const Standard_Real ))  static_cast<void (*)( const Standard_Integer , const opencascade::handle<ChFiDS_Stripe> & , TopOpeBRepDS_DataStructure & , NCollection_List<ChFiDS_Regul> & , const Standard_Real , const Standard_Real )>(&ChFi3d_FilDS),
          R"#(None)#"  , py::arg("SolidIndex"),  py::arg("CorDat"),  py::arg("DStr"),  py::arg("reglist"),  py::arg("tol3d"),  py::arg("tol2d"));
    m.def("ChFi3d_StripeEdgeInter",
          (void (*)( const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_Stripe> & , TopOpeBRepDS_DataStructure & , const Standard_Real ))  static_cast<void (*)( const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_Stripe> & , TopOpeBRepDS_DataStructure & , const Standard_Real )>(&ChFi3d_StripeEdgeInter),
          R"#(None)#"  , py::arg("theStripe1"),  py::arg("theStripe2"),  py::arg("DStr"),  py::arg("tol2d"));
    m.def("ChFi3d_IndexOfSurfData",
          (Standard_Integer (*)( const TopoDS_Vertex & , const opencascade::handle<ChFiDS_Stripe> & , Standard_Integer & ))  static_cast<Standard_Integer (*)( const TopoDS_Vertex & , const opencascade::handle<ChFiDS_Stripe> & , Standard_Integer & )>(&ChFi3d_IndexOfSurfData),
          R"#(None)#"  , py::arg("V1"),  py::arg("CD"),  py::arg("sens"));
    m.def("ChFi3d_EdgeFromV1",
          (TopoDS_Edge (*)( const TopoDS_Vertex & , const opencascade::handle<ChFiDS_Stripe> & , Standard_Integer & ))  static_cast<TopoDS_Edge (*)( const TopoDS_Vertex & , const opencascade::handle<ChFiDS_Stripe> & , Standard_Integer & )>(&ChFi3d_EdgeFromV1),
          R"#(None)#"  , py::arg("V1"),  py::arg("CD"),  py::arg("sens"));
    m.def("ChFi3d_ConvTol2dToTol3d",
          (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real ))  static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & , const Standard_Real )>(&ChFi3d_ConvTol2dToTol3d),
          R"#(None)#"  , py::arg("S"),  py::arg("tol2d"));
    m.def("ChFi3d_ComputeCurves",
          (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HSurface> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Boolean ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HSurface> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , Standard_Real & , const Standard_Boolean )>(&ChFi3d_ComputeCurves),
          R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("Pardeb"),  py::arg("Parfin"),  py::arg("C3d"),  py::arg("Pc1"),  py::arg("Pc2"),  py::arg("tol3d"),  py::arg("tol2d"),  py::arg("tolreached"),  py::arg("wholeCurv")=static_cast<const Standard_Boolean>(Standard_True));
    m.def("ChFi3d_IntCS",
          (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HCurve> & , gp_Pnt2d & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HCurve> & , gp_Pnt2d & , Standard_Real & )>(&ChFi3d_IntCS),
          R"#(None)#"  , py::arg("S"),  py::arg("C"),  py::arg("p2dS"),  py::arg("wc"));
    m.def("ChFi3d_ComputesIntPC",
          (void (*)( const ChFiDS_FaceInterference & , const ChFiDS_FaceInterference & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const ChFiDS_FaceInterference & , const ChFiDS_FaceInterference & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , Standard_Real & , Standard_Real & )>(&ChFi3d_ComputesIntPC),
          R"#(None)#"  , py::arg("Fi1"),  py::arg("Fi2"),  py::arg("HS1"),  py::arg("HS2"),  py::arg("UInt1"),  py::arg("UInt2"));
    m.def("ChFi3d_ComputesIntPC",
          (void (*)( const ChFiDS_FaceInterference & , const ChFiDS_FaceInterference & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , Standard_Real & , Standard_Real & , gp_Pnt & ))  static_cast<void (*)( const ChFiDS_FaceInterference & , const ChFiDS_FaceInterference & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , Standard_Real & , Standard_Real & , gp_Pnt & )>(&ChFi3d_ComputesIntPC),
          R"#(None)#"  , py::arg("Fi1"),  py::arg("Fi2"),  py::arg("HS1"),  py::arg("HS2"),  py::arg("UInt1"),  py::arg("UInt2"),  py::arg("P"));
    m.def("ChFi3d_BoundSurf",
          (opencascade::handle<GeomAdaptor_HSurface> (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_SurfData> & , const Standard_Integer & , const Standard_Integer & ))  static_cast<opencascade::handle<GeomAdaptor_HSurface> (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_SurfData> & , const Standard_Integer & , const Standard_Integer & )>(&ChFi3d_BoundSurf),
          R"#(None)#"  , py::arg("DStr"),  py::arg("Fd1"),  py::arg("IFaCo1"),  py::arg("IFaArc1"));
    m.def("ChFi3d_SearchFD",
          (Standard_Boolean (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_Stripe> & , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & , Standard_Real & , Standard_Real & , const Standard_Integer , const Standard_Integer , TopoDS_Face & , Standard_Boolean & , Standard_Integer & , Standard_Integer & ))  static_cast<Standard_Boolean (*)( TopOpeBRepDS_DataStructure & , const opencascade::handle<ChFiDS_Stripe> & , const opencascade::handle<ChFiDS_Stripe> & , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & , Standard_Real & , Standard_Real & , const Standard_Integer , const Standard_Integer , TopoDS_Face & , Standard_Boolean & , Standard_Integer & , Standard_Integer & )>(&ChFi3d_SearchFD),
          R"#(None)#"  , py::arg("DStr"),  py::arg("cd1"),  py::arg("cd2"),  py::arg("sens1"),  py::arg("sens2"),  py::arg("i1"),  py::arg("i2"),  py::arg("p1"),  py::arg("p2"),  py::arg("ind1"),  py::arg("ind2"),  py::arg("face"),  py::arg("sameside"),  py::arg("jf1"),  py::arg("jf2"));
    m.def("ChFi3d_Parameters",
          (void (*)( const opencascade::handle<Geom_Surface> & , const gp_Pnt & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const opencascade::handle<Geom_Surface> & , const gp_Pnt & , Standard_Real & , Standard_Real & )>(&ChFi3d_Parameters),
          R"#(None)#"  , py::arg("S"),  py::arg("p3d"),  py::arg("u"),  py::arg("v"));
    m.def("ChFi3d_TrimCurve",
          (void (*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt & , const gp_Pnt & , opencascade::handle<Geom_TrimmedCurve> & ))  static_cast<void (*)( const opencascade::handle<Geom_Curve> & , const gp_Pnt & , const gp_Pnt & , opencascade::handle<Geom_TrimmedCurve> & )>(&ChFi3d_TrimCurve),
          R"#(None)#"  , py::arg("gc"),  py::arg("FirstP"),  py::arg("LastP"),  py::arg("gtc"));
    m.def("ChFi3d_PerformElSpine",
          (void (*)( opencascade::handle<ChFiDS_HElSpine> & , opencascade::handle<ChFiDS_Spine> & , const GeomAbs_Shape , const Standard_Real , const Standard_Boolean ))  static_cast<void (*)( opencascade::handle<ChFiDS_HElSpine> & , opencascade::handle<ChFiDS_Spine> & , const GeomAbs_Shape , const Standard_Real , const Standard_Boolean )>(&ChFi3d_PerformElSpine),
          R"#(None)#"  , py::arg("HES"),  py::arg("Spine"),  py::arg("continuity"),  py::arg("tol"),  py::arg("IsOffset")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("ChFi3d_cherche_face1",
          (void (*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Face & , TopoDS_Face & ))  static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Face & , TopoDS_Face & )>(&ChFi3d_cherche_face1),
          R"#(None)#"  , py::arg("map"),  py::arg("F1"),  py::arg("F"));
    m.def("ChFi3d_cherche_element",
          (void (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Vertex & ))  static_cast<void (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Vertex & )>(&ChFi3d_cherche_element),
          R"#(None)#"  , py::arg("V"),  py::arg("E1"),  py::arg("F1"),  py::arg("E"),  py::arg("Vtx"));
    m.def("ChFi3d_EvalTolReached",
          (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Curve> & ))  static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Curve> & )>(&ChFi3d_EvalTolReached),
          R"#(None)#"  , py::arg("S1"),  py::arg("pc1"),  py::arg("S2"),  py::arg("pc2"),  py::arg("C"));
    m.def("ChFi3d_cherche_edge",
          (void (*)( const TopoDS_Vertex & ,  const NCollection_Array1<TopoDS_Shape> & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Vertex & ))  static_cast<void (*)( const TopoDS_Vertex & ,  const NCollection_Array1<TopoDS_Shape> & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Vertex & )>(&ChFi3d_cherche_edge),
          R"#(None)#"  , py::arg("V"),  py::arg("E1"),  py::arg("F1"),  py::arg("E"),  py::arg("Vtx"));
    m.def("ChFi3d_nbface",
          (Standard_Integer (*)(  const NCollection_List<TopoDS_Shape> & ))  static_cast<Standard_Integer (*)(  const NCollection_List<TopoDS_Shape> & )>(&ChFi3d_nbface),
          R"#(None)#"  , py::arg("mapVF"));
    m.def("ChFi3d_edge_common_faces",
          (void (*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Face & , TopoDS_Face & ))  static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Face & , TopoDS_Face & )>(&ChFi3d_edge_common_faces),
          R"#(None)#"  , py::arg("mapEF"),  py::arg("F1"),  py::arg("F2"));
    m.def("ChFi3d_AngleEdge",
          (Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const TopoDS_Edge & ))  static_cast<Standard_Real (*)( const TopoDS_Vertex & , const TopoDS_Edge & , const TopoDS_Edge & )>(&ChFi3d_AngleEdge),
          R"#(None)#"  , py::arg("Vtx"),  py::arg("E1"),  py::arg("E2"));
    m.def("ChFi3d_ChercheBordsLibres",
          (void (*)( const ChFiDS_Map & , const TopoDS_Vertex & , Standard_Boolean & , TopoDS_Edge & , TopoDS_Edge & ))  static_cast<void (*)( const ChFiDS_Map & , const TopoDS_Vertex & , Standard_Boolean & , TopoDS_Edge & , TopoDS_Edge & )>(&ChFi3d_ChercheBordsLibres),
          R"#(None)#"  , py::arg("myVEMap"),  py::arg("V1"),  py::arg("bordlibre"),  py::arg("edgelibre1"),  py::arg("edgelibre2"));
    m.def("ChFi3d_isTangentFaces",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const GeomAbs_Shape ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const GeomAbs_Shape )>(&ChFi3d_isTangentFaces),
          R"#(None)#"  , py::arg("theEdge"),  py::arg("theFace1"),  py::arg("theFace2"),  py::arg("Order")=static_cast<const GeomAbs_Shape>(GeomAbs_G1));
    m.def("ChFi3d_NbNotDegeneratedEdges",
          (Standard_Integer (*)( const TopoDS_Vertex & , const ChFiDS_Map & ))  static_cast<Standard_Integer (*)( const TopoDS_Vertex & , const ChFiDS_Map & )>(&ChFi3d_NbNotDegeneratedEdges),
          R"#(None)#"  , py::arg("Vtx"),  py::arg("VEMap"));
    m.def("ChFi3d_NumberOfEdges",
          (Standard_Integer (*)( const TopoDS_Vertex & , const ChFiDS_Map & ))  static_cast<Standard_Integer (*)( const TopoDS_Vertex & , const ChFiDS_Map & )>(&ChFi3d_NumberOfEdges),
          R"#(None)#"  , py::arg("Vtx"),  py::arg("VEMap"));
    m.def("ChFi3d_NumberOfSharpEdges",
          (Standard_Integer (*)( const TopoDS_Vertex & , const ChFiDS_Map & , const ChFiDS_Map & ))  static_cast<Standard_Integer (*)( const TopoDS_Vertex & , const ChFiDS_Map & , const ChFiDS_Map & )>(&ChFi3d_NumberOfSharpEdges),
          R"#(None)#"  , py::arg("Vtx"),  py::arg("VEMap"),  py::arg("EFmap"));
    m.def("ChFi3d_cherche_vertex",
          (void (*)( const TopoDS_Edge & , const TopoDS_Edge & , TopoDS_Vertex & , Standard_Boolean & ))  static_cast<void (*)( const TopoDS_Edge & , const TopoDS_Edge & , TopoDS_Vertex & , Standard_Boolean & )>(&ChFi3d_cherche_vertex),
          R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("vertex"),  py::arg("trouve"));
    m.def("ChFi3d_Couture",
          (void (*)( const TopoDS_Face & , Standard_Boolean & , TopoDS_Edge & ))  static_cast<void (*)( const TopoDS_Face & , Standard_Boolean & , TopoDS_Edge & )>(&ChFi3d_Couture),
          R"#(None)#"  , py::arg("F"),  py::arg("couture"),  py::arg("edgecouture"));
    m.def("ChFi3d_CoutureOnVertex",
          (void (*)( const TopoDS_Face & , const TopoDS_Vertex & , Standard_Boolean & , TopoDS_Edge & ))  static_cast<void (*)( const TopoDS_Face & , const TopoDS_Vertex & , Standard_Boolean & , TopoDS_Edge & )>(&ChFi3d_CoutureOnVertex),
          R"#(None)#"  , py::arg("F"),  py::arg("V"),  py::arg("couture"),  py::arg("edgecouture"));
    m.def("ChFi3d_IsPseudoSeam",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & )>(&ChFi3d_IsPseudoSeam),
          R"#(None)#"  , py::arg("E"),  py::arg("F"));
    m.def("ChFi3d_IsSmooth",
          (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & )>(&ChFi3d_IsSmooth),
          R"#(None)#"  , py::arg("C"));
// ./opencascade/ChFi3d_FilletShape.hxx
// ./opencascade/ChFi3d.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
