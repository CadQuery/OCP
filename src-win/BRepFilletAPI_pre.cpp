
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
#include <StdFail_NotDone.hxx>
#include <Law_Function.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>

// module includes
#include <BRepFilletAPI_LocalOperation.hxx>
#include <BRepFilletAPI_MakeChamfer.hxx>
#include <BRepFilletAPI_MakeFillet.hxx>
#include <BRepFilletAPI_MakeFillet2d.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepFilletAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepFilletAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_BRepFilletAPI_LocalOperation : public BRepFilletAPI_LocalOperation{
    public:
        using BRepFilletAPI_LocalOperation::BRepFilletAPI_LocalOperation;


        // public pure virtual
        void Add(const TopoDS_Edge & E) override { PYBIND11_OVERLOAD_PURE(void,BRepFilletAPI_LocalOperation,Add,E) };
        void ResetContour(const Standard_Integer IC) override { PYBIND11_OVERLOAD_PURE(void,BRepFilletAPI_LocalOperation,ResetContour,IC) };
        Standard_Integer NbContours() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,BRepFilletAPI_LocalOperation,NbContours,) };
        Standard_Integer Contour(const TopoDS_Edge & E) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,BRepFilletAPI_LocalOperation,Contour,E) };
        Standard_Integer NbEdges(const Standard_Integer I) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,BRepFilletAPI_LocalOperation,NbEdges,I) };
        const TopoDS_Edge & Edge(const Standard_Integer I,const Standard_Integer J) const  override { PYBIND11_OVERLOAD_PURE(const TopoDS_Edge &,BRepFilletAPI_LocalOperation,Edge,I,J) };
        void Remove(const TopoDS_Edge & E) override { PYBIND11_OVERLOAD_PURE(void,BRepFilletAPI_LocalOperation,Remove,E) };
        Standard_Real Length(const Standard_Integer IC) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,BRepFilletAPI_LocalOperation,Length,IC) };
        TopoDS_Vertex FirstVertex(const Standard_Integer IC) const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Vertex,BRepFilletAPI_LocalOperation,FirstVertex,IC) };
        TopoDS_Vertex LastVertex(const Standard_Integer IC) const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Vertex,BRepFilletAPI_LocalOperation,LastVertex,IC) };
        Standard_Real Abscissa(const Standard_Integer IC,const TopoDS_Vertex & V) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,BRepFilletAPI_LocalOperation,Abscissa,IC,V) };
        Standard_Real RelativeAbscissa(const Standard_Integer IC,const TopoDS_Vertex & V) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,BRepFilletAPI_LocalOperation,RelativeAbscissa,IC,V) };
        Standard_Boolean ClosedAndTangent(const Standard_Integer IC) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepFilletAPI_LocalOperation,ClosedAndTangent,IC) };
        Standard_Boolean Closed(const Standard_Integer IC) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepFilletAPI_LocalOperation,Closed,IC) };
        void Reset() override { PYBIND11_OVERLOAD_PURE(void,BRepFilletAPI_LocalOperation,Reset,) };
        void Simulate(const Standard_Integer IC) override { PYBIND11_OVERLOAD_PURE(void,BRepFilletAPI_LocalOperation,Simulate,IC) };
        Standard_Integer NbSurf(const Standard_Integer IC) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,BRepFilletAPI_LocalOperation,NbSurf,IC) };
        opencascade::handle<ChFiDS_SecHArray1> Sect(const Standard_Integer IC,const Standard_Integer IS) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<ChFiDS_SecHArray1>,BRepFilletAPI_LocalOperation,Sect,IC,IS) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepFilletAPI_LocalOperation , shared_ptr<BRepFilletAPI_LocalOperation>,Py_BRepFilletAPI_LocalOperation , BRepBuilderAPI_MakeShape>(m,"BRepFilletAPI_LocalOperation",R"#(Construction of fillets on the edges of a Shell.)#");
    py::class_<BRepFilletAPI_MakeFillet2d , shared_ptr<BRepFilletAPI_MakeFillet2d> , BRepBuilderAPI_MakeShape>(m,"BRepFilletAPI_MakeFillet2d",R"#(Describes functions to build fillets and chamfers on the vertices of a planar face. Fillets and Chamfers on the Vertices of a Planar Face A MakeFillet2d object provides a framework for: - initializing the construction algorithm with a given face, - acquiring the data characterizing the fillets and chamfers, - building the fillets and chamfers, and constructing the resulting shape, and - consulting the result. Warning Only segments of straight lines and arcs of circles are treated. BSplines are not processed.)#");
    py::class_<BRepFilletAPI_MakeChamfer , shared_ptr<BRepFilletAPI_MakeChamfer> , BRepFilletAPI_LocalOperation>(m,"BRepFilletAPI_MakeChamfer",R"#(Describes functions to build chamfers on edges of a shell or solid. Chamfered Edge of a Shell or Solid A MakeChamfer object provides a framework for: - initializing the construction algorithm with a given shape, - acquiring the data characterizing the chamfers, - building the chamfers and constructing the resulting shape, and - consulting the result.)#");
    py::class_<BRepFilletAPI_MakeFillet , shared_ptr<BRepFilletAPI_MakeFillet> , BRepFilletAPI_LocalOperation>(m,"BRepFilletAPI_MakeFillet",R"#(Describes functions to build fillets on the broken edges of a shell or solid. A MakeFillet object provides a framework for: - initializing the construction algorithm with a given shape, - acquiring the data characterizing the fillets, - building the fillets and constructing the resulting shape, and - consulting the result.)#");

};

// user-defined post-inclusion per module

// user-defined post
