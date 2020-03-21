
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Law_Function.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <StdFail_NotDone.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>

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
void register_BRepFilletAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepFilletAPI"));


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

// classes


    static_cast<py::class_<BRepFilletAPI_LocalOperation , shared_ptr<BRepFilletAPI_LocalOperation>,Py_BRepFilletAPI_LocalOperation , BRepBuilderAPI_MakeShape>>(m.attr("BRepFilletAPI_LocalOperation"))
    // constructors
    // custom constructors
    // methods
        .def("Add",
             (void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge & ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge & ) >(&BRepFilletAPI_LocalOperation::Add),
             R"#(Adds a contour in the builder (builds a contour of tangent edges).)#"  , py::arg("E"))
        .def("ResetContour",
             (void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) >(&BRepFilletAPI_LocalOperation::ResetContour),
             R"#(Reset the contour of index IC, there is nomore information in the contour.)#"  , py::arg("IC"))
        .def("NbContours",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)() const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)() const>(&BRepFilletAPI_LocalOperation::NbContours),
             R"#(Number of contours.)#" )
        .def("Contour",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge & ) const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_LocalOperation::Contour),
             R"#(Returns the index of the contour containing the edge E, returns 0 if E doesn't belong to any contour.)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::NbEdges),
             R"#(Number of Edges in the contour I.)#"  , py::arg("I"))
        .def("Edge",
             (const TopoDS_Edge & (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::Edge),
             R"#(Returns the Edge J in the contour I.)#"  , py::arg("I"),  py::arg("J"))
        .def("Remove",
             (void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge & ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge & ) >(&BRepFilletAPI_LocalOperation::Remove),
             R"#(remove the contour containing the Edge E.)#"  , py::arg("E"))
        .def("Length",
             (Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::Length),
             R"#(returns the length the contour of index IC.)#"  , py::arg("IC"))
        .def("FirstVertex",
             (TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::FirstVertex),
             R"#(Returns the first Vertex of the contour of index IC.)#"  , py::arg("IC"))
        .def("LastVertex",
             (TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::LastVertex),
             R"#(Returns the last Vertex of the contour of index IC.)#"  , py::arg("IC"))
        .def("Abscissa",
             (Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&BRepFilletAPI_LocalOperation::Abscissa),
             R"#(returns the abscissa of the vertex V on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("RelativeAbscissa",
             (Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&BRepFilletAPI_LocalOperation::RelativeAbscissa),
             R"#(returns the relative abscissa([0.,1.]) of the vertex V on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("ClosedAndTangent",
             (Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::ClosedAndTangent),
             R"#(returns true if the contour of index IC is closed an tangent.)#"  , py::arg("IC"))
        .def("Closed",
             (Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::Closed),
             R"#(returns true if the contour of index IC is closed)#"  , py::arg("IC"))
        .def("Reset",
             (void (BRepFilletAPI_LocalOperation::*)() ) static_cast<void (BRepFilletAPI_LocalOperation::*)() >(&BRepFilletAPI_LocalOperation::Reset),
             R"#(Reset all the fields updated by Build operation and leave the algorithm in the same state than before build call. It allows contours and radius modifications to build the result another time.)#" )
        .def("Simulate",
             (void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) >(&BRepFilletAPI_LocalOperation::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_LocalOperation::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepFilletAPI_LocalOperation::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFilletAPI_MakeFillet2d , shared_ptr<BRepFilletAPI_MakeFillet2d> , BRepBuilderAPI_MakeShape>>(m.attr("BRepFilletAPI_MakeFillet2d"))
    // constructors
    // custom constructors
    // methods
        .def("IsModified",
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeFillet2d::IsModified),
             R"#(Returns true if the edge E on the face modified by this algorithm is chamfered or filleted. Warning Returns false if E does not belong to the face modified by this algorithm.)#"  , py::arg("E"))
        .def("FilletEdges",
             (const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::FilletEdges),
             R"#(Returns the table of fillets on the face modified by this algorithm.)#" )
        .def("NbFillet",
             (Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::NbFillet),
             R"#(Returns the number of fillets on the face modified by this algorithm.)#" )
        .def("ChamferEdges",
             (const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::ChamferEdges),
             R"#(Returns the table of chamfers on the face modified by this algorithm.)#" )
        .def("NbChamfer",
             (Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::NbChamfer),
             R"#(Returns the number of chamfers on the face modified by this algorithm.)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Shape & ) >(&BRepFilletAPI_MakeFillet2d::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("HasDescendant",
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeFillet2d::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeFillet2d::DescendantEdge),
             R"#(Returns the chamfered or filleted edge built from the edge E on the face modified by this algorithm. If E has not been modified, this function returns E. Exceptions Standard_NoSuchObject if the edge E does not belong to the initial face.)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<ChFi2d_ConstructionError (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::Status),
             R"#(None)#" )
        .def("Build",
             (void (BRepFilletAPI_MakeFillet2d::*)() ) static_cast<void (BRepFilletAPI_MakeFillet2d::*)() >(&BRepFilletAPI_MakeFillet2d::Build),
             R"#(Update the result and set the Done flag)#" )
        .def("IsModified",
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeFillet2d::IsModified),
             R"#(Returns true if the edge E on the face modified by this algorithm is chamfered or filleted. Warning Returns false if E does not belong to the face modified by this algorithm.)#"  , py::arg("E"))
        .def("FilletEdges",
             (const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::FilletEdges),
             R"#(Returns the table of fillets on the face modified by this algorithm.)#" )
        .def("NbFillet",
             (Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::NbFillet),
             R"#(Returns the number of fillets on the face modified by this algorithm.)#" )
        .def("ChamferEdges",
             (const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<const TopTools_SequenceOfShape & (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::ChamferEdges),
             R"#(Returns the table of chamfers on the face modified by this algorithm.)#" )
        .def("NbChamfer",
             (Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::NbChamfer),
             R"#(Returns the number of chamfers on the face modified by this algorithm.)#" )
        .def("HasDescendant",
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeFillet2d::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeFillet2d::DescendantEdge),
             R"#(Returns the chamfered or filleted edge built from the edge E on the face modified by this algorithm. If E has not been modified, this function returns E. Exceptions Standard_NoSuchObject if the edge E does not belong to the initial face.)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<ChFi2d_ConstructionError (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::Status),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFilletAPI_MakeChamfer , shared_ptr<BRepFilletAPI_MakeChamfer> , BRepFilletAPI_LocalOperation>>(m.attr("BRepFilletAPI_MakeChamfer"))
    // constructors
    // custom constructors
    // methods
        .def("Add",
             (void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge & ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge & ) >(&BRepFilletAPI_MakeChamfer::Add),
             R"#(Adds edge E to the table of edges used by this algorithm to build chamfers, where the parameters of the chamfer must be set after the)#"  , py::arg("E"))
        .def("ResetContour",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) >(&BRepFilletAPI_MakeChamfer::ResetContour),
             R"#(Erases the chamfer parameters on the contour of index IC in the internal data structure of this algorithm. Use the SetDists function to reset this data. Warning Nothing is done if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("NbContours",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)() const>(&BRepFilletAPI_MakeChamfer::NbContours),
             R"#(Returns the number of contours generated using the Add function in the internal data structure of this algorithm.)#" )
        .def("Contour",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge & ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeChamfer::Contour),
             R"#(Returns the index of the contour in the internal data structure of this algorithm, which contains the edge E of the shape. This function returns 0 if the edge E does not belong to any contour. Warning This index can change if a contour is removed from the internal data structure of this algorithm using the function Remove.)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::NbEdges),
             R"#(Returns the number of edges in the contour of index I in the internal data structure of this algorithm. Warning Returns 0 if I is outside the bounds of the table of contours.)#"  , py::arg("I"))
        .def("Edge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::Edge),
             R"#(Returns the edge of index J in the contour of index I in the internal data structure of this algorithm. Warning Returns a null shape if: - I is outside the bounds of the table of contours, or - J is outside the bounds of the table of edges of the contour of index I.)#"  , py::arg("I"),  py::arg("J"))
        .def("Remove",
             (void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge & ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge & ) >(&BRepFilletAPI_MakeChamfer::Remove),
             R"#(Removes the contour in the internal data structure of this algorithm which contains the edge E of the shape. Warning Nothing is done if the edge E does not belong to the contour in the internal data structure of this algorithm.)#"  , py::arg("E"))
        .def("Length",
             (Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::Length),
             R"#(Returns the length of the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("FirstVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::FirstVertex),
             R"#(Returns the first vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("LastVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::LastVertex),
             R"#(Returns the last vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Abscissa",
             (Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&BRepFilletAPI_MakeChamfer::Abscissa),
             R"#(Returns the curvilinear abscissa of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("RelativeAbscissa",
             (Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&BRepFilletAPI_MakeChamfer::RelativeAbscissa),
             R"#(Returns the relative curvilinear abscissa (i.e. between 0 and 1) of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("ClosedAndTangent",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::ClosedAndTangent),
             R"#(eturns true if the contour of index IC in the internal data structure of this algorithm is closed and tangential at the point of closure. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Closed",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::Closed),
             R"#(Returns true if the contour of index IC in the internal data structure of this algorithm is closed. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Build",
             (void (BRepFilletAPI_MakeChamfer::*)() ) static_cast<void (BRepFilletAPI_MakeChamfer::*)() >(&BRepFilletAPI_MakeChamfer::Build),
             R"#(Builds the chamfers on all the contours in the internal data structure of this algorithm and constructs the resulting shape. Use the function IsDone to verify that the chamfered shape is built. Use the function Shape to retrieve the chamfered shape. Warning The construction of chamfers implements highly complex construction algorithms. Consequently, there may be instances where the algorithm fails, for example if the data defining the parameters of the chamfer is not compatible with the geometry of the initial shape. There is no initial analysis of errors and these only become evident at the construction stage. Additionally, in the current software release, the following cases are not handled: - the end point of the contour is the point of intersection of 4 or more edges of the shape, or - the intersection of the chamfer with a face which limits the contour is not fully contained in this face.)#" )
        .def("Reset",
             (void (BRepFilletAPI_MakeChamfer::*)() ) static_cast<void (BRepFilletAPI_MakeChamfer::*)() >(&BRepFilletAPI_MakeChamfer::Reset),
             R"#(Reinitializes this algorithm, thus canceling the effects of the Build function. This function allows modifications to be made to the contours and chamfer parameters in order to rebuild the shape.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape & ) >(&BRepFilletAPI_MakeChamfer::Generated),
             R"#(Returns the list of shapes generated from the shape <EorV>.)#"  , py::arg("EorV"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape & ) >(&BRepFilletAPI_MakeChamfer::Modified),
             R"#(Returns the list of shapes modified from the shape <F>.)#"  , py::arg("F"))
        .def("IsDeleted",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape & ) >(&BRepFilletAPI_MakeChamfer::IsDeleted),
             R"#(None)#"  , py::arg("F"))
        .def("Simulate",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) >(&BRepFilletAPI_MakeChamfer::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepFilletAPI_MakeChamfer::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFilletAPI_MakeFillet , shared_ptr<BRepFilletAPI_MakeFillet> , BRepFilletAPI_LocalOperation>>(m.attr("BRepFilletAPI_MakeFillet"))
    // constructors
    // custom constructors
    // methods
        .def("Add",
             (void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge & ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge & ) >(&BRepFilletAPI_MakeFillet::Add),
             R"#(Adds a fillet contour in the builder (builds a contour of tangent edges). The Radius must be set after.)#"  , py::arg("E"))
        .def("ResetContour",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) >(&BRepFilletAPI_MakeFillet::ResetContour),
             R"#(Erases the radius information on the contour of index IC in the internal data structure of this algorithm. Use the SetRadius function to reset this data. Warning Nothing is done if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("NbContours",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::NbContours),
             R"#(Returns the number of contours generated using the Add function in the internal data structure of this algorithm.)#" )
        .def("Contour",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge & ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge & ) const>(&BRepFilletAPI_MakeFillet::Contour),
             R"#(Returns the index of the contour in the internal data structure of this algorithm which contains the edge E of the shape. This function returns 0 if the edge E does not belong to any contour. Warning This index can change if a contour is removed from the internal data structure of this algorithm using the function Remove.)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::NbEdges),
             R"#(Returns the number of edges in the contour of index I in the internal data structure of this algorithm. Warning Returns 0 if I is outside the bounds of the table of contours.)#"  , py::arg("I"))
        .def("Edge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::Edge),
             R"#(Returns the edge of index J in the contour of index I in the internal data structure of this algorithm. Warning Returns a null shape if: - I is outside the bounds of the table of contours, or - J is outside the bounds of the table of edges of the index I contour.)#"  , py::arg("I"),  py::arg("J"))
        .def("Remove",
             (void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge & ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge & ) >(&BRepFilletAPI_MakeFillet::Remove),
             R"#(Removes the contour in the internal data structure of this algorithm which contains the edge E of the shape. Warning Nothing is done if the edge E does not belong to the contour in the internal data structure of this algorithm.)#"  , py::arg("E"))
        .def("Length",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::Length),
             R"#(Returns the length of the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("FirstVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::FirstVertex),
             R"#(Returns the first vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("LastVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::LastVertex),
             R"#(Returns the last vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Abscissa",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&BRepFilletAPI_MakeFillet::Abscissa),
             R"#(Returns the curvilinear abscissa of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("RelativeAbscissa",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const TopoDS_Vertex & ) const) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const TopoDS_Vertex & ) const>(&BRepFilletAPI_MakeFillet::RelativeAbscissa),
             R"#(Returns the relative curvilinear abscissa (i.e. between 0 and 1) of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("ClosedAndTangent",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::ClosedAndTangent),
             R"#(Returns true if the contour of index IC in the internal data structure of this algorithm is closed and tangential at the point of closure. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Closed",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::Closed),
             R"#(Returns true if the contour of index IC in the internal data structure of this algorithm is closed. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Build",
             (void (BRepFilletAPI_MakeFillet::*)() ) static_cast<void (BRepFilletAPI_MakeFillet::*)() >(&BRepFilletAPI_MakeFillet::Build),
             R"#(Builds the fillets on all the contours in the internal data structure of this algorithm and constructs the resulting shape. Use the function IsDone to verify that the filleted shape is built. Use the function Shape to retrieve the filleted shape. Warning The construction of fillets implements highly complex construction algorithms. Consequently, there may be instances where the algorithm fails, for example if the data defining the radius of the fillet is not compatible with the geometry of the initial shape. There is no initial analysis of errors and they only become evident at the construction stage. Additionally, in the current software release, the following cases are not handled: - the end point of the contour is the point of intersection of 4 or more edges of the shape, or - the intersection of the fillet with a face which limits the contour is not fully contained in this face.)#" )
        .def("Reset",
             (void (BRepFilletAPI_MakeFillet::*)() ) static_cast<void (BRepFilletAPI_MakeFillet::*)() >(&BRepFilletAPI_MakeFillet::Reset),
             R"#(Reinitializes this algorithm, thus canceling the effects of the Build function. This function allows modifications to be made to the contours and fillet parameters in order to rebuild the shape.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape & ) >(&BRepFilletAPI_MakeFillet::Generated),
             R"#(Returns the list of shapes generated from the shape <EorV>.)#"  , py::arg("EorV"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape & ) >(&BRepFilletAPI_MakeFillet::Modified),
             R"#(Returns the list of shapes modified from the shape <F>.)#"  , py::arg("F"))
        .def("IsDeleted",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape & ) >(&BRepFilletAPI_MakeFillet::IsDeleted),
             R"#(None)#"  , py::arg("F"))
        .def("Simulate",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) >(&BRepFilletAPI_MakeFillet::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepFilletAPI_MakeFillet::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepFilletAPI_MakeFillet.hxx
// ./opencascade/BRepFilletAPI_MakeFillet2d.hxx
// ./opencascade/BRepFilletAPI_MakeChamfer.hxx
// ./opencascade/BRepFilletAPI_LocalOperation.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
