
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <Law_Function.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
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


    static_cast<py::class_<BRepFilletAPI_LocalOperation , shared_ptr<BRepFilletAPI_LocalOperation> ,Py_BRepFilletAPI_LocalOperation , BRepBuilderAPI_MakeShape >>(m.attr("BRepFilletAPI_LocalOperation"))
    // constructors
    // custom constructors
    // methods
        .def("Add",
             (void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_LocalOperation::Add),
             R"#(Adds a contour in the builder (builds a contour of tangent edges).)#"  , py::arg("E"))
        .def("ResetContour",
             (void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) >(&BRepFilletAPI_LocalOperation::ResetContour),
             R"#(Reset the contour of index IC, there is nomore information in the contour.)#"  , py::arg("IC"))
        .def("NbContours",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)() const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)() const>(&BRepFilletAPI_LocalOperation::NbContours),
             R"#(Number of contours.)#" )
        .def("Contour",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_LocalOperation::Contour),
             R"#(Returns the index of the contour containing the edge E, returns 0 if E doesn't belong to any contour.)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::NbEdges),
             R"#(Number of Edges in the contour I.)#"  , py::arg("I"))
        .def("Edge",
             (const TopoDS_Edge & (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::Edge),
             R"#(Returns the Edge J in the contour I.)#"  , py::arg("I"),  py::arg("J"))
        .def("Remove",
             (void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_LocalOperation::Remove),
             R"#(remove the contour containing the Edge E.)#"  , py::arg("E"))
        .def("Length",
             (Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::Length),
             R"#(returns the length the contour of index IC.)#"  , py::arg("IC"))
        .def("FirstVertex",
             (TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::FirstVertex),
             R"#(Returns the first Vertex of the contour of index IC.)#"  , py::arg("IC"))
        .def("LastVertex",
             (TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::LastVertex),
             R"#(Returns the last Vertex of the contour of index IC.)#"  , py::arg("IC"))
        .def("Abscissa",
             (Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const) static_cast<Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const>(&BRepFilletAPI_LocalOperation::Abscissa),
             R"#(returns the abscissa of the vertex V on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("RelativeAbscissa",
             (Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const) static_cast<Standard_Real (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const>(&BRepFilletAPI_LocalOperation::RelativeAbscissa),
             R"#(returns the relative abscissa([0.,1.]) of the vertex V on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("ClosedAndTangent",
             (Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::ClosedAndTangent),
             R"#(returns true if the contour of index IC is closed an tangent.)#"  , py::arg("IC"))
        .def("Closed",
             (Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::Closed),
             R"#(returns true if the contour of index IC is closed)#"  , py::arg("IC"))
        .def("Reset",
             (void (BRepFilletAPI_LocalOperation::*)() ) static_cast<void (BRepFilletAPI_LocalOperation::*)() >(&BRepFilletAPI_LocalOperation::Reset),
             R"#(Reset all the fields updated by Build operation and leave the algorithm in the same state than before build call. It allows contours and radius modifications to build the result another time.)#" )
        .def("Simulate",
             (void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) >(&BRepFilletAPI_LocalOperation::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_LocalOperation::*)( const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_LocalOperation::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepFilletAPI_LocalOperation::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFilletAPI_MakeFillet2d , shared_ptr<BRepFilletAPI_MakeFillet2d>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepFilletAPI_MakeFillet2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Face &  ) ) static_cast<void (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Face &  ) >(&BRepFilletAPI_MakeFillet2d::Init),
             R"#(Initializes this algorithm for constructing fillets or chamfers with the face F. Warning The status of the initialization, as given by the Status function, can be one of the following: - ChFi2d_Ready if the initialization is correct, - ChFi2d_NotPlanar if F is not planar, - ChFi2d_NoFace if F is a null face.)#"  , py::arg("F"))
        .def("Init",
             (void (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepFilletAPI_MakeFillet2d::Init),
             R"#(This initialize method allow to init the builder from a face <RefFace> and another face <ModFace> which derive from <RefFace>. This is usefull to modify a fillet or a chamfer already created on <ModFace> .)#"  , py::arg("RefFace"),  py::arg("ModFace"))
        .def("AddFillet",
             (TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Vertex & ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Vertex & ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet2d::AddFillet),
             R"#(Adds a fillet of radius Radius between the two edges adjacent to the vertex V on the face modified by this algorithm. The two edges do not need to be rectilinear. This function returns the fillet and builds the resulting face. Warning The status of the construction, as given by the Status function, can be one of the following: - ChFi2d_IsDone if the fillet is built, - ChFi2d_ConnexionError if V does not belong to the initial face, - ChFi2d_ComputationError if Radius is too large to build a fillet between the two adjacent edges, - ChFi2d_NotAuthorized - if one of the two edges connected to V is a fillet or chamfer, or - if a curve other than a straight line or an arc of a circle is used as E, E1 or E2. Do not use the returned fillet if the status of the construction is not ChFi2d_IsDone. Exceptions Standard_NegativeValue if Radius is less than or equal to zero.)#"  , py::arg("V"),  py::arg("Radius"))
        .def("ModifyFillet",
             (TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet2d::ModifyFillet),
             R"#(Assigns the radius Radius to the fillet Fillet already built on the face modified by this algorithm. This function returns the new fillet and modifies the existing face. Warning The status of the construction, as given by the Status function, can be one of the following: - ChFi2d_IsDone if the new fillet is built, - ChFi2d_ConnexionError if Fillet does not belong to the existing face, - ChFi2d_ComputationError if Radius is too large to build a fillet between the two adjacent edges. Do not use the returned fillet if the status of the construction is not ChFi2d_IsDone. Exceptions Standard_NegativeValue if Radius is less than or equal to zero.)#"  , py::arg("Fillet"),  py::arg("Radius"))
        .def("RemoveFillet",
             (TopoDS_Vertex (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) ) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet2d::RemoveFillet),
             R"#(Removes the fillet Fillet already built on the face modified by this algorithm. This function returns the vertex connecting the two adjacent edges of Fillet and modifies the existing face. Warning - The returned vertex is only valid if the Status function returns ChFi2d_IsDone. - A null vertex is returned if the edge Fillet does not belong to the initial face.)#"  , py::arg("Fillet"))
        .def("AddChamfer",
             (TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet2d::AddChamfer),
             R"#(Adds a chamfer on the face modified by this algorithm between the two adjacent edges E1 and E2, where the extremities of the chamfer are on E1 and E2 at distances D1 and D2 respectively In cases where the edges are not rectilinear, distances are measured using the curvilinear abscissa of the edges and the angle is measured with respect to the tangent at the corresponding point. The angle Ang is given in radians. This function returns the chamfer and builds the resulting face.)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("D1"),  py::arg("D2"))
        .def("AddChamfer",
             (TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet2d::AddChamfer),
             R"#(Adds a chamfer on the face modified by this algorithm between the two edges connected by the vertex V, where E is one of the two edges. The chamfer makes an angle Ang with E and one of its extremities is on E at distance D from V. In cases where the edges are not rectilinear, distances are measured using the curvilinear abscissa of the edges and the angle is measured with respect to the tangent at the corresponding point. The angle Ang is given in radians. This function returns the chamfer and builds the resulting face. Warning The status of the construction, as given by the Status function, can be one of the following: - ChFi2d_IsDone if the chamfer is built, - ChFi2d_ParametersError if D1, D2, D or Ang is less than or equal to zero, - ChFi2d_ConnexionError if: - the edge E, E1 or E2 does not belong to the initial face, or - the edges E1 and E2 are not adjacent, or - the vertex V is not one of the limit points of the edge E, - ChFi2d_ComputationError if the parameters of the chamfer are too large to build a chamfer between the two adjacent edges, - ChFi2d_NotAuthorized if: - the edge E1, E2 or one of the two edges connected to V is a fillet or chamfer, or - a curve other than a straight line or an arc of a circle is used as E, E1 or E2. Do not use the returned chamfer if the status of the construction is not ChFi2d_IsDone.)#"  , py::arg("E"),  py::arg("V"),  py::arg("D"),  py::arg("Ang"))
        .def("ModifyChamfer",
             (TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet2d::ModifyChamfer),
             R"#(Modifies the chamfer Chamfer on the face modified by this algorithm, where: E1 and E2 are the two adjacent edges on which Chamfer is already built; the extremities of the new chamfer are on E1 and E2 at distances D1 and D2 respectively.)#"  , py::arg("Chamfer"),  py::arg("E1"),  py::arg("E2"),  py::arg("D1"),  py::arg("D2"))
        .def("ModifyChamfer",
             (TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet2d::ModifyChamfer),
             R"#(Modifies the chamfer Chamfer on the face modified by this algorithm, where: E is one of the two adjacent edges on which Chamfer is already built; the new chamfer makes an angle Ang with E and one of its extremities is on E at distance D from the vertex on which the chamfer is built. In cases where the edges are not rectilinear, the distances are measured using the curvilinear abscissa of the edges and the angle is measured with respect to the tangent at the corresponding point. The angle Ang is given in radians. This function returns the new chamfer and modifies the existing face. Warning The status of the construction, as given by the Status function, can be one of the following: - ChFi2d_IsDone if the chamfer is built, - ChFi2d_ParametersError if D1, D2, D or Ang is less than or equal to zero, - ChFi2d_ConnexionError if: - the edge E, E1, E2 or Chamfer does not belong to the existing face, or - the edges E1 and E2 are not adjacent, - ChFi2d_ComputationError if the parameters of the chamfer are too large to build a chamfer between the two adjacent edges, - ChFi2d_NotAuthorized if E1 or E2 is a fillet or chamfer. Do not use the returned chamfer if the status of the construction is not ChFi2d_IsDone.)#"  , py::arg("Chamfer"),  py::arg("E"),  py::arg("D"),  py::arg("Ang"))
        .def("RemoveChamfer",
             (TopoDS_Vertex (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) ) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet2d::RemoveChamfer),
             R"#(Removes the chamfer Chamfer already built on the face modified by this algorithm. This function returns the vertex connecting the two adjacent edges of Chamfer and modifies the existing face. Warning - The returned vertex is only valid if the Status function returns ChFi2d_IsDone. - A null vertex is returned if the edge Chamfer does not belong to the initial face.)#"  , py::arg("Chamfer"))
        .def("IsModified",
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet2d::IsModified),
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
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Shape &  ) >(&BRepFilletAPI_MakeFillet2d::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("NbCurves",
             (Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::NbCurves),
             R"#(returns the number of new curves after the shape creation.)#" )
        .def("NewEdges",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet2d::*)( const Standard_Integer  ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet2d::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet2d::NewEdges),
             R"#(Return the Edges created for curve I.)#"  , py::arg("I"))
        .def("HasDescendant",
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet2d::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet2d::DescendantEdge),
             R"#(Returns the chamfered or filleted edge built from the edge E on the face modified by this algorithm. If E has not been modified, this function returns E. Exceptions Standard_NoSuchObject if the edge E does not belong to the initial face.)#"  , py::arg("E"))
        .def("BasisEdge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet2d::BasisEdge),
             R"#(Returns the basis edge on the face modified by this algorithm from which the chamfered or filleted edge E is built. If E has not been modified, this function returns E. Warning E is returned if it does not belong to the initial face.)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (BRepFilletAPI_MakeFillet2d::*)() const) static_cast<ChFi2d_ConstructionError (BRepFilletAPI_MakeFillet2d::*)() const>(&BRepFilletAPI_MakeFillet2d::Status),
             R"#(None)#" )
        .def("Build",
             (void (BRepFilletAPI_MakeFillet2d::*)() ) static_cast<void (BRepFilletAPI_MakeFillet2d::*)() >(&BRepFilletAPI_MakeFillet2d::Build),
             R"#(Update the result and set the Done flag)#" )
        .def("IsModified",
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet2d::IsModified),
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
             (Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet2d::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeFillet2d::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet2d::DescendantEdge),
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


    static_cast<py::class_<BRepFilletAPI_MakeChamfer , shared_ptr<BRepFilletAPI_MakeChamfer>  , BRepFilletAPI_LocalOperation >>(m.attr("BRepFilletAPI_MakeChamfer"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeChamfer::Add),
             R"#(Adds edge E to the table of edges used by this algorithm to build chamfers, where the parameters of the chamfer must be set after the)#"  , py::arg("E"))
        .def("Add",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeChamfer::Add),
             R"#(Adds edge E to the table of edges used by this algorithm to build chamfers, where the parameters of the chamfer are given by the distance Dis (symmetric chamfer). The Add function results in a contour being built by propagation from the edge E (i.e. the contour contains at least this edge). This contour is composed of edges of the shape which are tangential to one another and which delimit two series of tangential faces, with one series of faces being located on either side of the contour. Warning Nothing is done if edge E or the face F does not belong to the initial shape.)#"  , py::arg("Dis"),  py::arg("E"))
        .def("SetDist",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Integer ,  const TopoDS_Face &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Integer ,  const TopoDS_Face &  ) >(&BRepFilletAPI_MakeChamfer::SetDist),
             R"#(Sets the distances Dis1 and Dis2 which give the parameters of the chamfer along the contour of index IC generated using the Add function in the internal data structure of this algorithm. The face F identifies the side where Dis1 is measured. Warning Nothing is done if either the edge E or the face F does not belong to the initial shape.)#"  , py::arg("Dis"),  py::arg("IC"),  py::arg("F"))
        .def("Add",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFilletAPI_MakeChamfer::Add),
             R"#(Adds edge E to the table of edges used by this algorithm to build chamfers, where the parameters of the chamfer are given by the two distances Dis1 and Dis2; the face F identifies the side where Dis1 is measured. The Add function results in a contour being built by propagation from the edge E (i.e. the contour contains at least this edge). This contour is composed of edges of the shape which are tangential to one another and which delimit two series of tangential faces, with one series of faces being located on either side of the contour. Warning Nothing is done if edge E or the face F does not belong to the initial shape.)#"  , py::arg("Dis1"),  py::arg("Dis2"),  py::arg("E"),  py::arg("F"))
        .def("SetDists",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const TopoDS_Face &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const TopoDS_Face &  ) >(&BRepFilletAPI_MakeChamfer::SetDists),
             R"#(Sets the distances Dis1 and Dis2 which give the parameters of the chamfer along the contour of index IC generated using the Add function in the internal data structure of this algorithm. The face F identifies the side where Dis1 is measured. Warning Nothing is done if either the edge E or the face F does not belong to the initial shape.)#"  , py::arg("Dis1"),  py::arg("Dis2"),  py::arg("IC"),  py::arg("F"))
        .def("AddDA",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFilletAPI_MakeChamfer::AddDA),
             R"#(Adds a fillet contour in the builder (builds a contour of tangent edges to <E> and sets the distance <Dis1> and angle <Angle> ( parameters of the chamfer ) ).)#"  , py::arg("Dis"),  py::arg("Angle"),  py::arg("E"),  py::arg("F"))
        .def("SetDistAngle",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const TopoDS_Face &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const TopoDS_Face &  ) >(&BRepFilletAPI_MakeChamfer::SetDistAngle),
             R"#(set the distance <Dis> and <Angle> of the fillet contour of index <IC> in the DS with <Dis> on <F>. if the face <F> is not one of common faces of an edge of the contour <IC>)#"  , py::arg("Dis"),  py::arg("Angle"),  py::arg("IC"),  py::arg("F"))
        .def("SetMode",
             (void (BRepFilletAPI_MakeChamfer::*)( const ChFiDS_ChamfMode  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const ChFiDS_ChamfMode  ) >(&BRepFilletAPI_MakeChamfer::SetMode),
             R"#(Sets the mode of chamfer)#"  , py::arg("theMode"))
        .def("IsSymetric",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::IsSymetric),
             R"#(return True if chamfer symetric false else.)#"  , py::arg("IC"))
        .def("IsTwoDistances",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::IsTwoDistances),
             R"#(return True if chamfer is made with two distances false else.)#"  , py::arg("IC"))
        .def("IsDistanceAngle",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::IsDistanceAngle),
             R"#(return True if chamfer is made with distance and angle false else.)#"  , py::arg("IC"))
        .def("ResetContour",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeChamfer::ResetContour),
             R"#(Erases the chamfer parameters on the contour of index IC in the internal data structure of this algorithm. Use the SetDists function to reset this data. Warning Nothing is done if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("NbContours",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)() const>(&BRepFilletAPI_MakeChamfer::NbContours),
             R"#(Returns the number of contours generated using the Add function in the internal data structure of this algorithm.)#" )
        .def("Contour",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeChamfer::Contour),
             R"#(Returns the index of the contour in the internal data structure of this algorithm, which contains the edge E of the shape. This function returns 0 if the edge E does not belong to any contour. Warning This index can change if a contour is removed from the internal data structure of this algorithm using the function Remove.)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::NbEdges),
             R"#(Returns the number of edges in the contour of index I in the internal data structure of this algorithm. Warning Returns 0 if I is outside the bounds of the table of contours.)#"  , py::arg("I"))
        .def("Edge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::Edge),
             R"#(Returns the edge of index J in the contour of index I in the internal data structure of this algorithm. Warning Returns a null shape if: - I is outside the bounds of the table of contours, or - J is outside the bounds of the table of edges of the contour of index I.)#"  , py::arg("I"),  py::arg("J"))
        .def("Remove",
             (void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeChamfer::Remove),
             R"#(Removes the contour in the internal data structure of this algorithm which contains the edge E of the shape. Warning Nothing is done if the edge E does not belong to the contour in the internal data structure of this algorithm.)#"  , py::arg("E"))
        .def("Length",
             (Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::Length),
             R"#(Returns the length of the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("FirstVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::FirstVertex),
             R"#(Returns the first vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("LastVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::LastVertex),
             R"#(Returns the last vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Abscissa",
             (Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const) static_cast<Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const>(&BRepFilletAPI_MakeChamfer::Abscissa),
             R"#(Returns the curvilinear abscissa of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("RelativeAbscissa",
             (Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const) static_cast<Standard_Real (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const>(&BRepFilletAPI_MakeChamfer::RelativeAbscissa),
             R"#(Returns the relative curvilinear abscissa (i.e. between 0 and 1) of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("ClosedAndTangent",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::ClosedAndTangent),
             R"#(eturns true if the contour of index IC in the internal data structure of this algorithm is closed and tangential at the point of closure. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Closed",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::Closed),
             R"#(Returns true if the contour of index IC in the internal data structure of this algorithm is closed. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Build",
             (void (BRepFilletAPI_MakeChamfer::*)() ) static_cast<void (BRepFilletAPI_MakeChamfer::*)() >(&BRepFilletAPI_MakeChamfer::Build),
             R"#(Builds the chamfers on all the contours in the internal data structure of this algorithm and constructs the resulting shape. Use the function IsDone to verify that the chamfered shape is built. Use the function Shape to retrieve the chamfered shape. Warning The construction of chamfers implements highly complex construction algorithms. Consequently, there may be instances where the algorithm fails, for example if the data defining the parameters of the chamfer is not compatible with the geometry of the initial shape. There is no initial analysis of errors and these only become evident at the construction stage. Additionally, in the current software release, the following cases are not handled: - the end point of the contour is the point of intersection of 4 or more edges of the shape, or - the intersection of the chamfer with a face which limits the contour is not fully contained in this face.)#" )
        .def("Reset",
             (void (BRepFilletAPI_MakeChamfer::*)() ) static_cast<void (BRepFilletAPI_MakeChamfer::*)() >(&BRepFilletAPI_MakeChamfer::Reset),
             R"#(Reinitializes this algorithm, thus canceling the effects of the Build function. This function allows modifications to be made to the contours and chamfer parameters in order to rebuild the shape.)#" )
        .def("Builder",
             (opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepFilletAPI_MakeChamfer::*)() const) static_cast<opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepFilletAPI_MakeChamfer::*)() const>(&BRepFilletAPI_MakeChamfer::Builder),
             R"#(Returns the internal filleting algorithm.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape &  ) >(&BRepFilletAPI_MakeChamfer::Generated),
             R"#(Returns the list of shapes generated from the shape <EorV>.)#"  , py::arg("EorV"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape &  ) >(&BRepFilletAPI_MakeChamfer::Modified),
             R"#(Returns the list of shapes modified from the shape <F>.)#"  , py::arg("F"))
        .def("IsDeleted",
             (Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepFilletAPI_MakeChamfer::*)( const TopoDS_Shape &  ) >(&BRepFilletAPI_MakeChamfer::IsDeleted),
             R"#(None)#"  , py::arg("F"))
        .def("Simulate",
             (void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeChamfer::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeChamfer::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepFilletAPI_MakeChamfer::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
    // methods using call by reference i.s.o. return
        .def("GetDist",
             []( BRepFilletAPI_MakeChamfer &self , const Standard_Integer IC ){ Standard_Real  Dis; self.GetDist(IC,Dis); return std::make_tuple(Dis); },
             R"#(None)#"  , py::arg("IC"))
        .def("Dists",
             []( BRepFilletAPI_MakeChamfer &self , const Standard_Integer IC ){ Standard_Real  Dis1; Standard_Real  Dis2; self.Dists(IC,Dis1,Dis2); return std::make_tuple(Dis1,Dis2); },
             R"#(Returns the distances Dis1 and Dis2 which give the parameters of the chamfer along the contour of index IC in the internal data structure of this algorithm. Warning -1. is returned if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("GetDistAngle",
             []( BRepFilletAPI_MakeChamfer &self , const Standard_Integer IC ){ Standard_Real  Dis; Standard_Real  Angle; self.GetDistAngle(IC,Dis,Angle); return std::make_tuple(Dis,Angle); },
             R"#(gives the distances <Dis> and <Angle> of the fillet contour of index <IC> in the DS)#"  , py::arg("IC"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFilletAPI_MakeFillet , shared_ptr<BRepFilletAPI_MakeFillet>  , BRepFilletAPI_LocalOperation >>(m.attr("BRepFilletAPI_MakeFillet"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const ChFi3d_FilletShape >()  , py::arg("S"),  py::arg("FShape")=static_cast<const ChFi3d_FilletShape>(ChFi3d_Rational) )
    // custom constructors
    // methods
        .def("SetParams",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet::SetParams),
             R"#(None)#"  , py::arg("Tang"),  py::arg("Tesp"),  py::arg("T2d"),  py::arg("TApp3d"),  py::arg("TolApp2d"),  py::arg("Fleche"))
        .def("SetContinuity",
             (void (BRepFilletAPI_MakeFillet::*)( const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const GeomAbs_Shape ,  const Standard_Real  ) >(&BRepFilletAPI_MakeFillet::SetContinuity),
             R"#(Changes the parameters of continiuity InternalContinuity to produce fillet'surfaces with an continuity Ci (i=0,1 or 2). By defaultInternalContinuity = GeomAbs_C1. AngularTolerance is the G1 tolerance between fillet and support'faces.)#"  , py::arg("InternalContinuity"),  py::arg("AngularTolerance"))
        .def("Add",
             (void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::Add),
             R"#(Adds a fillet contour in the builder (builds a contour of tangent edges). The Radius must be set after.)#"  , py::arg("E"))
        .def("Add",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::Add),
             R"#(Adds a fillet description in the builder - builds a contour of tangent edges, - sets the radius.)#"  , py::arg("Radius"),  py::arg("E"))
        .def("Add",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Real ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::Add),
             R"#(Adds a fillet description in the builder - builds a contour of tangent edges, - sets a linear radius evolution law between the first and last vertex of the spine.)#"  , py::arg("R1"),  py::arg("R2"),  py::arg("E"))
        .def("Add",
             (void (BRepFilletAPI_MakeFillet::*)( const opencascade::handle<Law_Function> & ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const opencascade::handle<Law_Function> & ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::Add),
             R"#(Adds a fillet description in the builder - builds a contour of tangent edges, - sest the radius evolution law.)#"  , py::arg("L"),  py::arg("E"))
        .def("Add",
             (void (BRepFilletAPI_MakeFillet::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::Add),
             R"#(Adds a fillet description in the builder - builds a contour of tangent edges, - sets the radius evolution law interpolating the values given in the array UandR :)#"  , py::arg("UandR"),  py::arg("E"))
        .def("SetRadius",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::SetRadius),
             R"#(Sets the parameters of the fillet along the contour of index IC generated using the Add function in the internal data structure of this algorithm, where Radius is the radius of the fillet.)#"  , py::arg("Radius"),  py::arg("IC"),  py::arg("IinC"))
        .def("SetRadius",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::SetRadius),
             R"#(Sets the parameters of the fillet along the contour of index IC generated using the Add function in the internal data structure of this algorithm, where the radius of the fillet evolves according to a linear evolution law defined from R1 to R2, between the first and last vertices of the contour of index IC.)#"  , py::arg("R1"),  py::arg("R2"),  py::arg("IC"),  py::arg("IinC"))
        .def("SetRadius",
             (void (BRepFilletAPI_MakeFillet::*)( const opencascade::handle<Law_Function> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const opencascade::handle<Law_Function> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::SetRadius),
             R"#(Sets the parameters of the fillet along the contour of index IC generated using the Add function in the internal data structure of this algorithm, where the radius of the fillet evolves according to the evolution law L, between the first and last vertices of the contour of index IC.)#"  , py::arg("L"),  py::arg("IC"),  py::arg("IinC"))
        .def("SetRadius",
             (void (BRepFilletAPI_MakeFillet::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::SetRadius),
             R"#(Sets the parameters of the fillet along the contour of index IC generated using the Add function in the internal data structure of this algorithm, where the radius of the fillet evolves according to the evolution law which interpolates the set of parameter and radius pairs given in the array UandR as follows: - the X coordinate of a point in UandR defines a relative parameter on the contour (i.e. a parameter between 0 and 1), - the Y coordinate of a point in UandR gives the corresponding value of the radius, and the radius evolves between the first and last vertices of the contour of index IC.)#"  , py::arg("UandR"),  py::arg("IC"),  py::arg("IinC"))
        .def("ResetContour",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::ResetContour),
             R"#(Erases the radius information on the contour of index IC in the internal data structure of this algorithm. Use the SetRadius function to reset this data. Warning Nothing is done if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("IsConstant",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::IsConstant),
             R"#(Returns true if the radius of the fillet along the contour of index IC in the internal data structure of this algorithm is constant, Warning False is returned if IC is outside the bounds of the table of contours or if E does not belong to the contour of index IC.)#"  , py::arg("IC"))
        .def("Radius",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) ) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::Radius),
             R"#(Returns the radius of the fillet along the contour of index IC in the internal data structure of this algorithm Warning - Use this function only if the radius is constant. - -1. is returned if IC is outside the bounds of the table of contours or if E does not belong to the contour of index IC.)#"  , py::arg("IC"))
        .def("IsConstant",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge &  ) ) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::IsConstant),
             R"#(Returns true if the radius of the fillet along the edge E of the contour of index IC in the internal data structure of this algorithm is constant. Warning False is returned if IC is outside the bounds of the table of contours or if E does not belong to the contour of index IC.)#"  , py::arg("IC"),  py::arg("E"))
        .def("Radius",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge &  ) ) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::Radius),
             R"#(Returns the radius of the fillet along the edge E of the contour of index IC in the internal data structure of this algorithm. Warning - Use this function only if the radius is constant. - -1 is returned if IC is outside the bounds of the table of contours or if E does not belong to the contour of index IC.)#"  , py::arg("IC"),  py::arg("E"))
        .def("SetRadius",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Integer ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Integer ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::SetRadius),
             R"#(Assigns Radius as the radius of the fillet on the edge E)#"  , py::arg("Radius"),  py::arg("IC"),  py::arg("E"))
        .def("SetRadius",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Integer ,  const TopoDS_Vertex &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Real ,  const Standard_Integer ,  const TopoDS_Vertex &  ) >(&BRepFilletAPI_MakeFillet::SetRadius),
             R"#(None)#"  , py::arg("Radius"),  py::arg("IC"),  py::arg("V"))
        .def("GetBounds",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&BRepFilletAPI_MakeFillet::GetBounds),
             R"#(None)#"  , py::arg("IC"),  py::arg("E"),  py::arg("F"),  py::arg("L"))
        .def("GetLaw",
             (opencascade::handle<Law_Function> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge &  ) ) static_cast<opencascade::handle<Law_Function> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::GetLaw),
             R"#(None)#"  , py::arg("IC"),  py::arg("E"))
        .def("SetLaw",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge & ,  const opencascade::handle<Law_Function> &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Edge & ,  const opencascade::handle<Law_Function> &  ) >(&BRepFilletAPI_MakeFillet::SetLaw),
             R"#(None)#"  , py::arg("IC"),  py::arg("E"),  py::arg("L"))
        .def("SetFilletShape",
             (void (BRepFilletAPI_MakeFillet::*)( const ChFi3d_FilletShape  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const ChFi3d_FilletShape  ) >(&BRepFilletAPI_MakeFillet::SetFilletShape),
             R"#(Assigns FShape as the type of fillet shape built by this algorithm.)#"  , py::arg("FShape"))
        .def("GetFilletShape",
             (ChFi3d_FilletShape (BRepFilletAPI_MakeFillet::*)() const) static_cast<ChFi3d_FilletShape (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::GetFilletShape),
             R"#(Returns the type of fillet shape built by this algorithm.)#" )
        .def("NbContours",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::NbContours),
             R"#(Returns the number of contours generated using the Add function in the internal data structure of this algorithm.)#" )
        .def("Contour",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge &  ) const>(&BRepFilletAPI_MakeFillet::Contour),
             R"#(Returns the index of the contour in the internal data structure of this algorithm which contains the edge E of the shape. This function returns 0 if the edge E does not belong to any contour. Warning This index can change if a contour is removed from the internal data structure of this algorithm using the function Remove.)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::NbEdges),
             R"#(Returns the number of edges in the contour of index I in the internal data structure of this algorithm. Warning Returns 0 if I is outside the bounds of the table of contours.)#"  , py::arg("I"))
        .def("Edge",
             (const TopoDS_Edge & (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::Edge),
             R"#(Returns the edge of index J in the contour of index I in the internal data structure of this algorithm. Warning Returns a null shape if: - I is outside the bounds of the table of contours, or - J is outside the bounds of the table of edges of the index I contour.)#"  , py::arg("I"),  py::arg("J"))
        .def("Remove",
             (void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const TopoDS_Edge &  ) >(&BRepFilletAPI_MakeFillet::Remove),
             R"#(Removes the contour in the internal data structure of this algorithm which contains the edge E of the shape. Warning Nothing is done if the edge E does not belong to the contour in the internal data structure of this algorithm.)#"  , py::arg("E"))
        .def("Length",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::Length),
             R"#(Returns the length of the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("FirstVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::FirstVertex),
             R"#(Returns the first vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("LastVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::LastVertex),
             R"#(Returns the last vertex of the contour of index IC in the internal data structure of this algorithm. Warning Returns a null shape if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Abscissa",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const>(&BRepFilletAPI_MakeFillet::Abscissa),
             R"#(Returns the curvilinear abscissa of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("RelativeAbscissa",
             (Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const) static_cast<Standard_Real (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const TopoDS_Vertex &  ) const>(&BRepFilletAPI_MakeFillet::RelativeAbscissa),
             R"#(Returns the relative curvilinear abscissa (i.e. between 0 and 1) of the vertex V on the contour of index IC in the internal data structure of this algorithm. Warning Returns -1. if: - IC is outside the bounds of the table of contours, or - V is not on the contour of index IC.)#"  , py::arg("IC"),  py::arg("V"))
        .def("ClosedAndTangent",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::ClosedAndTangent),
             R"#(Returns true if the contour of index IC in the internal data structure of this algorithm is closed and tangential at the point of closure. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Closed",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::Closed),
             R"#(Returns true if the contour of index IC in the internal data structure of this algorithm is closed. Warning Returns false if IC is outside the bounds of the table of contours.)#"  , py::arg("IC"))
        .def("Build",
             (void (BRepFilletAPI_MakeFillet::*)() ) static_cast<void (BRepFilletAPI_MakeFillet::*)() >(&BRepFilletAPI_MakeFillet::Build),
             R"#(Builds the fillets on all the contours in the internal data structure of this algorithm and constructs the resulting shape. Use the function IsDone to verify that the filleted shape is built. Use the function Shape to retrieve the filleted shape. Warning The construction of fillets implements highly complex construction algorithms. Consequently, there may be instances where the algorithm fails, for example if the data defining the radius of the fillet is not compatible with the geometry of the initial shape. There is no initial analysis of errors and they only become evident at the construction stage. Additionally, in the current software release, the following cases are not handled: - the end point of the contour is the point of intersection of 4 or more edges of the shape, or - the intersection of the fillet with a face which limits the contour is not fully contained in this face.)#" )
        .def("Reset",
             (void (BRepFilletAPI_MakeFillet::*)() ) static_cast<void (BRepFilletAPI_MakeFillet::*)() >(&BRepFilletAPI_MakeFillet::Reset),
             R"#(Reinitializes this algorithm, thus canceling the effects of the Build function. This function allows modifications to be made to the contours and fillet parameters in order to rebuild the shape.)#" )
        .def("Builder",
             (opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepFilletAPI_MakeFillet::*)() const) static_cast<opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::Builder),
             R"#(Returns the internal topology building algorithm.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape &  ) >(&BRepFilletAPI_MakeFillet::Generated),
             R"#(Returns the list of shapes generated from the shape <EorV>.)#"  , py::arg("EorV"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape &  ) >(&BRepFilletAPI_MakeFillet::Modified),
             R"#(Returns the list of shapes modified from the shape <F>.)#"  , py::arg("F"))
        .def("IsDeleted",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)( const TopoDS_Shape &  ) >(&BRepFilletAPI_MakeFillet::IsDeleted),
             R"#(None)#"  , py::arg("F"))
        .def("NbSurfaces",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::NbSurfaces),
             R"#(returns the number of surfaces after the shape creation.)#" )
        .def("NewFaces",
             (const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) ) static_cast<const TopTools_ListOfShape & (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::NewFaces),
             R"#(Return the faces created for surface <I>.)#"  , py::arg("I"))
        .def("Simulate",
             (void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) ) static_cast<void (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) >(&BRepFilletAPI_MakeFillet::Simulate),
             R"#(None)#"  , py::arg("IC"))
        .def("NbSurf",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::NbSurf),
             R"#(None)#"  , py::arg("IC"))
        .def("Sect",
             (opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<ChFiDS_SecHArray1> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::Sect),
             R"#(None)#"  , py::arg("IC"),  py::arg("IS"))
        .def("NbFaultyContours",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::NbFaultyContours),
             R"#(Returns the number of contours where the computation of the fillet failed)#" )
        .def("FaultyContour",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::FaultyContour),
             R"#(for each I in [1.. NbFaultyContours] returns the index IC of the contour where the computation of the fillet failed. the method NbEdges(IC) gives the number of edges in the contour IC the method Edge(IC,ie) gives the edge number ie of the contour IC)#"  , py::arg("I"))
        .def("NbComputedSurfaces",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::NbComputedSurfaces),
             R"#(returns the number of surfaces which have been computed on the contour IC)#"  , py::arg("IC"))
        .def("ComputedSurface",
             (opencascade::handle<Geom_Surface> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_Surface> (BRepFilletAPI_MakeFillet::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::ComputedSurface),
             R"#(returns the surface number IS concerning the contour IC)#"  , py::arg("IC"),  py::arg("IS"))
        .def("NbFaultyVertices",
             (Standard_Integer (BRepFilletAPI_MakeFillet::*)() const) static_cast<Standard_Integer (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::NbFaultyVertices),
             R"#(returns the number of vertices where the computation failed)#" )
        .def("FaultyVertex",
             (TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<TopoDS_Vertex (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::FaultyVertex),
             R"#(returns the vertex where the computation failed)#"  , py::arg("IV"))
        .def("HasResult",
             (Standard_Boolean (BRepFilletAPI_MakeFillet::*)() const) static_cast<Standard_Boolean (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::HasResult),
             R"#(returns true if a part of the result has been computed if the filling in a corner failed a shape with a hole is returned)#" )
        .def("BadShape",
             (TopoDS_Shape (BRepFilletAPI_MakeFillet::*)() const) static_cast<TopoDS_Shape (BRepFilletAPI_MakeFillet::*)() const>(&BRepFilletAPI_MakeFillet::BadShape),
             R"#(if (HasResult()) returns the partial result)#" )
        .def("StripeStatus",
             (ChFiDS_ErrorStatus (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const) static_cast<ChFiDS_ErrorStatus (BRepFilletAPI_MakeFillet::*)( const Standard_Integer  ) const>(&BRepFilletAPI_MakeFillet::StripeStatus),
             R"#(returns the status concerning the contour IC in case of error ChFiDS_Ok : the computation is Ok ChFiDS_StartsolFailure : the computation can't start, perhaps the the radius is too big ChFiDS_TwistedSurface : the computation failed because of a twisted surface ChFiDS_WalkingFailure : there is a problem in the walking ChFiDS_Error: other error different from above)#"  , py::arg("IC"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepFilletAPI_MakeFillet2d.hxx
// ./opencascade/BRepFilletAPI_LocalOperation.hxx
// ./opencascade/BRepFilletAPI_MakeFillet.hxx
// ./opencascade/BRepFilletAPI_MakeChamfer.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
