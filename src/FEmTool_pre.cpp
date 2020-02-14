
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <PLib_Base.hxx>
#include <FEmTool_ProfileMatrix.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_NotImplemented.hxx>
#include <PLib_Base.hxx>
#include <Standard_NotImplemented.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NotImplemented.hxx>

// module includes
#include <FEmTool_Assembly.hxx>
#include <FEmTool_AssemblyTable.hxx>
#include <FEmTool_Curve.hxx>
#include <FEmTool_ElementaryCriterion.hxx>
#include <FEmTool_ElementsOfRefMatrix.hxx>
#include <FEmTool_HAssemblyTable.hxx>
#include <FEmTool_LinearFlexion.hxx>
#include <FEmTool_LinearJerk.hxx>
#include <FEmTool_LinearTension.hxx>
#include <FEmTool_ListIteratorOfListOfVectors.hxx>
#include <FEmTool_ListOfVectors.hxx>
#include <FEmTool_ProfileMatrix.hxx>
#include <FEmTool_SeqOfLinConstr.hxx>
#include <FEmTool_SparseMatrix.hxx>

// template related includes
// ./opencascade/FEmTool_SeqOfLinConstr.hxx
#include "NCollection.hxx"
// ./opencascade/FEmTool_ListOfVectors.hxx
#include "NCollection.hxx"
// ./opencascade/FEmTool_ListOfVectors.hxx
#include "NCollection.hxx"
// ./opencascade/FEmTool_AssemblyTable.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FEmTool_enums(py::module &main_module) {


py::module m = main_module.def_submodule("FEmTool", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_FEmTool_ElementaryCriterion : public FEmTool_ElementaryCriterion{
    public:
        using FEmTool_ElementaryCriterion::FEmTool_ElementaryCriterion;
        
        
        // public pure virtual
        opencascade::handle<TColStd_HArray2OfInteger> DependenceTable() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TColStd_HArray2OfInteger>,FEmTool_ElementaryCriterion,DependenceTable,) };
        Standard_Real Value() override { PYBIND11_OVERLOAD_PURE(Standard_Real,FEmTool_ElementaryCriterion,Value,) };
        void Hessian(const Standard_Integer Dim1,const Standard_Integer Dim2,math_Matrix & H) override { PYBIND11_OVERLOAD_PURE(void,FEmTool_ElementaryCriterion,Hessian,Dim1,Dim2,H) };
        void Gradient(const Standard_Integer Dim,math_Vector & G) override { PYBIND11_OVERLOAD_PURE(void,FEmTool_ElementaryCriterion,Gradient,Dim,G) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_FEmTool_SparseMatrix : public FEmTool_SparseMatrix{
    public:
        using FEmTool_SparseMatrix::FEmTool_SparseMatrix;
        
        
        // public pure virtual
        void Init(const Standard_Real Value) override { PYBIND11_OVERLOAD_PURE(void,FEmTool_SparseMatrix,Init,Value) };
        Standard_Real & ChangeValue(const Standard_Integer I,const Standard_Integer J) override { PYBIND11_OVERLOAD_PURE(Standard_Real &,FEmTool_SparseMatrix,ChangeValue,I,J) };
        Standard_Boolean Decompose() override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,FEmTool_SparseMatrix,Decompose,) };
        void Solve(const math_Vector & B,math_Vector & X) const  override { PYBIND11_OVERLOAD_PURE(void,FEmTool_SparseMatrix,Solve,B,X) };
        Standard_Boolean Prepare() override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,FEmTool_SparseMatrix,Prepare,) };
        void Solve(const math_Vector & B,const math_Vector & Init,math_Vector & X,math_Vector & Residual,const Standard_Real Tolerance,const Standard_Integer NbIterations) const  override { PYBIND11_OVERLOAD_PURE(void,FEmTool_SparseMatrix,Solve,B,Init,X,Residual,Tolerance,NbIterations) };
        void Multiplied(const math_Vector & X,math_Vector & MX) const  override { PYBIND11_OVERLOAD_PURE(void,FEmTool_SparseMatrix,Multiplied,X,MX) };
        Standard_Integer RowNumber() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,FEmTool_SparseMatrix,RowNumber,) };
        Standard_Integer ColNumber() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,FEmTool_SparseMatrix,ColNumber,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<FEmTool_ListOfVectors>(m,"FEmTool_SeqOfLinConstr");  
    preregister_template_NCollection_List<opencascade::handle<TColStd_HArray1OfReal> >(m,"FEmTool_ListOfVectors");  
    preregister_template_NCollection_Array2<opencascade::handle<TColStd_HArray1OfInteger> >(m,"FEmTool_AssemblyTable");  

// classes forward declarations only
    py::class_<FEmTool_Assembly , shared_ptr<FEmTool_Assembly>  >(m,"FEmTool_Assembly",R"#(Assemble and solve system from (one dimensional) Finite Elements)#");
    py::class_<FEmTool_Curve ,opencascade::handle<FEmTool_Curve>  , Standard_Transient >(m,"FEmTool_Curve",R"#(Curve defined by Polynomial Elements.Curve defined by Polynomial Elements.Curve defined by Polynomial Elements.)#");
    py::class_<FEmTool_ElementaryCriterion ,opencascade::handle<FEmTool_ElementaryCriterion> ,Py_FEmTool_ElementaryCriterion , Standard_Transient >(m,"FEmTool_ElementaryCriterion",R"#(defined J Criteria to used in minimisationdefined J Criteria to used in minimisationdefined J Criteria to used in minimisation)#");
    py::class_<FEmTool_ElementsOfRefMatrix , shared_ptr<FEmTool_ElementsOfRefMatrix>  , math_FunctionSet >(m,"FEmTool_ElementsOfRefMatrix",R"#(this class describes the functions needed for calculating matrix elements of RefMatrix for linear criteriums (Tension, Flexsion and Jerk) by Gauss integration. Each function from set gives value Pi(u)'*Pj(u)' or Pi(u)''*Pj(u)'' or Pi(u)'''*Pj(u)''' for each i and j, where Pi(u) is i-th basis function of expansion and (') means derivative.)#");
    py::class_<FEmTool_HAssemblyTable ,opencascade::handle<FEmTool_HAssemblyTable>  , FEmTool_AssemblyTable , Standard_Transient >(m,"FEmTool_HAssemblyTable",R"#()#");
    py::class_<FEmTool_SparseMatrix ,opencascade::handle<FEmTool_SparseMatrix> ,Py_FEmTool_SparseMatrix , Standard_Transient >(m,"FEmTool_SparseMatrix",R"#(Sparse Matrix definitionSparse Matrix definitionSparse Matrix definition)#");
    py::class_<FEmTool_LinearFlexion ,opencascade::handle<FEmTool_LinearFlexion>  , FEmTool_ElementaryCriterion >(m,"FEmTool_LinearFlexion",R"#(Criterium of LinearFlexion To Hermit-Jacobi elementsCriterium of LinearFlexion To Hermit-Jacobi elementsCriterium of LinearFlexion To Hermit-Jacobi elements)#");
    py::class_<FEmTool_LinearJerk ,opencascade::handle<FEmTool_LinearJerk>  , FEmTool_ElementaryCriterion >(m,"FEmTool_LinearJerk",R"#(Criterion of LinearJerk To Hermit-Jacobi elementsCriterion of LinearJerk To Hermit-Jacobi elementsCriterion of LinearJerk To Hermit-Jacobi elements)#");
    py::class_<FEmTool_LinearTension ,opencascade::handle<FEmTool_LinearTension>  , FEmTool_ElementaryCriterion >(m,"FEmTool_LinearTension",R"#(Criterium of LinearTension To Hermit-Jacobi elementsCriterium of LinearTension To Hermit-Jacobi elementsCriterium of LinearTension To Hermit-Jacobi elements)#");
    py::class_<FEmTool_ProfileMatrix ,opencascade::handle<FEmTool_ProfileMatrix>  , FEmTool_SparseMatrix >(m,"FEmTool_ProfileMatrix",R"#(Symmetric Sparse ProfileMatrix useful for 1D Finite Element methodsSymmetric Sparse ProfileMatrix useful for 1D Finite Element methodsSymmetric Sparse ProfileMatrix useful for 1D Finite Element methods)#");

};

// user-defined post-inclusion per module

// user-defined post
