
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <FEmTool_ProfileMatrix.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Matrix.hxx>
#include <Standard_NotImplemented.hxx>
#include <math_Matrix.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_NotImplemented.hxx>
#include <StdFail_NotDone.hxx>
#include <PLib_Base.hxx>
#include <PLib_Base.hxx>
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
#include "NCollection_tmpl.hxx"
// ./opencascade/FEmTool_ListOfVectors.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/FEmTool_ListOfVectors.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/FEmTool_AssemblyTable.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FEmTool(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("FEmTool"));


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

// classes


    static_cast<py::class_<FEmTool_Assembly , shared_ptr<FEmTool_Assembly> >>(m.attr("FEmTool_Assembly"))
    // constructors
        .def(py::init<  const NCollection_Array2<Standard_Integer> &,const opencascade::handle<FEmTool_HAssemblyTable> & >()  , py::arg("Dependence"),  py::arg("Table") )
    // custom constructors
    // methods
        .def("NullifyMatrix",
             (void (FEmTool_Assembly::*)() ) static_cast<void (FEmTool_Assembly::*)() >(&FEmTool_Assembly::NullifyMatrix),
             R"#(Nullify all Matrix 's Coefficient)#" )
        .def("AddMatrix",
             (void (FEmTool_Assembly::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const math_Matrix & ) ) static_cast<void (FEmTool_Assembly::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const math_Matrix & ) >(&FEmTool_Assembly::AddMatrix),
             R"#(Add an elementary Matrix in the assembly Matrix if Dependence(Dimension1,Dimension2) is False)#"  , py::arg("Element"),  py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("Mat"))
        .def("NullifyVector",
             (void (FEmTool_Assembly::*)() ) static_cast<void (FEmTool_Assembly::*)() >(&FEmTool_Assembly::NullifyVector),
             R"#(Nullify all Coordinate of assembly Vector (second member))#" )
        .def("AddVector",
             (void (FEmTool_Assembly::*)( const Standard_Integer , const Standard_Integer , const math_Vector & ) ) static_cast<void (FEmTool_Assembly::*)( const Standard_Integer , const Standard_Integer , const math_Vector & ) >(&FEmTool_Assembly::AddVector),
             R"#(Add an elementary Vector in the assembly Vector (second member))#"  , py::arg("Element"),  py::arg("Dimension"),  py::arg("Vec"))
        .def("ResetConstraint",
             (void (FEmTool_Assembly::*)() ) static_cast<void (FEmTool_Assembly::*)() >(&FEmTool_Assembly::ResetConstraint),
             R"#(Delete all Constraints.)#" )
        .def("NullifyConstraint",
             (void (FEmTool_Assembly::*)() ) static_cast<void (FEmTool_Assembly::*)() >(&FEmTool_Assembly::NullifyConstraint),
             R"#(Nullify all Constraints.)#" )
        .def("AddConstraint",
             (void (FEmTool_Assembly::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const math_Vector & , const Standard_Real ) ) static_cast<void (FEmTool_Assembly::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const math_Vector & , const Standard_Real ) >(&FEmTool_Assembly::AddConstraint),
             R"#(None)#"  , py::arg("IndexofConstraint"),  py::arg("Element"),  py::arg("Dimension"),  py::arg("LinearForm"),  py::arg("Value"))
        .def("Solve",
             (Standard_Boolean (FEmTool_Assembly::*)() ) static_cast<Standard_Boolean (FEmTool_Assembly::*)() >(&FEmTool_Assembly::Solve),
             R"#(Solve the assembly system Returns Standard_False if the computation failed.)#" )
        .def("Solution",
             (void (FEmTool_Assembly::*)( math_Vector & ) const) static_cast<void (FEmTool_Assembly::*)( math_Vector & ) const>(&FEmTool_Assembly::Solution),
             R"#(None)#"  , py::arg("Solution"))
        .def("NbGlobVar",
             (Standard_Integer (FEmTool_Assembly::*)() const) static_cast<Standard_Integer (FEmTool_Assembly::*)() const>(&FEmTool_Assembly::NbGlobVar),
             R"#(None)#" )
        .def("GetAssemblyTable",
             (void (FEmTool_Assembly::*)( opencascade::handle<FEmTool_HAssemblyTable> & ) const) static_cast<void (FEmTool_Assembly::*)( opencascade::handle<FEmTool_HAssemblyTable> & ) const>(&FEmTool_Assembly::GetAssemblyTable),
             R"#(None)#"  , py::arg("AssTable"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_Curve ,opencascade::handle<FEmTool_Curve> , Standard_Transient>>(m.attr("FEmTool_Curve"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const opencascade::handle<PLib_Base> &,const Standard_Real >()  , py::arg("Dimension"),  py::arg("NbElements"),  py::arg("TheBase"),  py::arg("Tolerance") )
    // custom constructors
    // methods
        .def("Knots",
             (TColStd_Array1OfReal & (FEmTool_Curve::*)() const) static_cast<TColStd_Array1OfReal & (FEmTool_Curve::*)() const>(&FEmTool_Curve::Knots),
             R"#(None)#" )
        .def("SetElement",
             (void (FEmTool_Curve::*)( const Standard_Integer ,  const NCollection_Array2<Standard_Real> & ) ) static_cast<void (FEmTool_Curve::*)( const Standard_Integer ,  const NCollection_Array2<Standard_Real> & ) >(&FEmTool_Curve::SetElement),
             R"#(None)#"  , py::arg("IndexOfElement"),  py::arg("Coeffs"))
        .def("D0",
             (void (FEmTool_Curve::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) ) static_cast<void (FEmTool_Curve::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) >(&FEmTool_Curve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("Pnt"))
        .def("D1",
             (void (FEmTool_Curve::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) ) static_cast<void (FEmTool_Curve::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) >(&FEmTool_Curve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("Vec"))
        .def("D2",
             (void (FEmTool_Curve::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) ) static_cast<void (FEmTool_Curve::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) >(&FEmTool_Curve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("Vec"))
        .def("GetElement",
             (void (FEmTool_Curve::*)( const Standard_Integer , NCollection_Array2<Standard_Real> & ) ) static_cast<void (FEmTool_Curve::*)( const Standard_Integer , NCollection_Array2<Standard_Real> & ) >(&FEmTool_Curve::GetElement),
             R"#(None)#"  , py::arg("IndexOfElement"),  py::arg("Coeffs"))
        .def("GetPolynom",
             (void (FEmTool_Curve::*)( NCollection_Array1<Standard_Real> & ) ) static_cast<void (FEmTool_Curve::*)( NCollection_Array1<Standard_Real> & ) >(&FEmTool_Curve::GetPolynom),
             R"#(returns coefficients of all elements in canonical base.)#"  , py::arg("Coeffs"))
        .def("NbElements",
             (Standard_Integer (FEmTool_Curve::*)() const) static_cast<Standard_Integer (FEmTool_Curve::*)() const>(&FEmTool_Curve::NbElements),
             R"#(None)#" )
        .def("Dimension",
             (Standard_Integer (FEmTool_Curve::*)() const) static_cast<Standard_Integer (FEmTool_Curve::*)() const>(&FEmTool_Curve::Dimension),
             R"#(None)#" )
        .def("Base",
             (opencascade::handle<PLib_Base> (FEmTool_Curve::*)() const) static_cast<opencascade::handle<PLib_Base> (FEmTool_Curve::*)() const>(&FEmTool_Curve::Base),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (FEmTool_Curve::*)( const Standard_Integer ) const) static_cast<Standard_Integer (FEmTool_Curve::*)( const Standard_Integer ) const>(&FEmTool_Curve::Degree),
             R"#(None)#"  , py::arg("IndexOfElement"))
        .def("SetDegree",
             (void (FEmTool_Curve::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (FEmTool_Curve::*)( const Standard_Integer , const Standard_Integer ) >(&FEmTool_Curve::SetDegree),
             R"#(None)#"  , py::arg("IndexOfElement"),  py::arg("Degree"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_Curve::*)() const>(&FEmTool_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Length",
             []( FEmTool_Curve &self , const Standard_Real FirstU,const Standard_Real LastU ){ Standard_Real  Length; self.Length(FirstU,LastU,Length); return std::make_tuple(Length); },
             R"#(None)#"  , py::arg("FirstU"),  py::arg("LastU"))
        .def("ReduceDegree",
             []( FEmTool_Curve &self , const Standard_Integer IndexOfElement,const Standard_Real Tol ){ Standard_Integer  NewDegree; Standard_Real  MaxError; self.ReduceDegree(IndexOfElement,Tol,NewDegree,MaxError); return std::make_tuple(NewDegree,MaxError); },
             R"#(None)#"  , py::arg("IndexOfElement"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_Curve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_Curve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_ElementaryCriterion ,opencascade::handle<FEmTool_ElementaryCriterion>,Py_FEmTool_ElementaryCriterion , Standard_Transient>>(m.attr("FEmTool_ElementaryCriterion"))
    // constructors
    // custom constructors
    // methods
        .def("Set",
             (void (FEmTool_ElementaryCriterion::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (FEmTool_ElementaryCriterion::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) >(&FEmTool_ElementaryCriterion::Set),
             R"#(Set the coefficient of the Element (the Curve))#"  , py::arg("Coeff"))
        .def("Set",
             (void (FEmTool_ElementaryCriterion::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (FEmTool_ElementaryCriterion::*)( const Standard_Real , const Standard_Real ) >(&FEmTool_ElementaryCriterion::Set),
             R"#(Set the definition interval of the Element)#"  , py::arg("FirstKnot"),  py::arg("LastKnot"))
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_ElementaryCriterion::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_ElementaryCriterion::*)() const>(&FEmTool_ElementaryCriterion::DependenceTable),
             R"#(To know if two dimension are independent.)#" )
        .def("Value",
             (Standard_Real (FEmTool_ElementaryCriterion::*)() ) static_cast<Standard_Real (FEmTool_ElementaryCriterion::*)() >(&FEmTool_ElementaryCriterion::Value),
             R"#(To Compute J(E) where E is the current Element)#" )
        .def("Hessian",
             (void (FEmTool_ElementaryCriterion::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) ) static_cast<void (FEmTool_ElementaryCriterion::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) >(&FEmTool_ElementaryCriterion::Hessian),
             R"#(To Compute J(E) the coefficients of Hessian matrix of J(E) wich are crossed derivatives in dimensions <Dim1> and <Dim2>. If DependenceTable(Dimension1,Dimension2) is False)#"  , py::arg("Dim1"),  py::arg("Dim2"),  py::arg("H"))
        .def("Gradient",
             (void (FEmTool_ElementaryCriterion::*)( const Standard_Integer , math_Vector & ) ) static_cast<void (FEmTool_ElementaryCriterion::*)( const Standard_Integer , math_Vector & ) >(&FEmTool_ElementaryCriterion::Gradient),
             R"#(To Compute the coefficients in the dimension <dim> of the J(E)'s Gradient where E is the current Element)#"  , py::arg("Dim"),  py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_ElementaryCriterion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_ElementaryCriterion::*)() const>(&FEmTool_ElementaryCriterion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_ElementaryCriterion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_ElementaryCriterion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_ElementsOfRefMatrix , shared_ptr<FEmTool_ElementsOfRefMatrix> , math_FunctionSet>>(m.attr("FEmTool_ElementsOfRefMatrix"))
    // constructors
        .def(py::init< const opencascade::handle<PLib_Base> &,const Standard_Integer >()  , py::arg("TheBase"),  py::arg("DerOrder") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (FEmTool_ElementsOfRefMatrix::*)() const) static_cast<Standard_Integer (FEmTool_ElementsOfRefMatrix::*)() const>(&FEmTool_ElementsOfRefMatrix::NbVariables),
             R"#(returns the number of variables of the function. It is supposed that NbVariables = 1.)#" )
        .def("NbEquations",
             (Standard_Integer (FEmTool_ElementsOfRefMatrix::*)() const) static_cast<Standard_Integer (FEmTool_ElementsOfRefMatrix::*)() const>(&FEmTool_ElementsOfRefMatrix::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (FEmTool_ElementsOfRefMatrix::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (FEmTool_ElementsOfRefMatrix::*)( const math_Vector & , math_Vector & ) >(&FEmTool_ElementsOfRefMatrix::Value),
             R"#(computes the values <F> of the functions for the variable <X>. returns True if the computation was done successfully, False otherwise. F contains results only for i<=j in following order: P0*P0, P0*P1, P0*P2... P1*P1, P1*P2,... (upper triangle of matrix {PiPj}))#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_HAssemblyTable ,opencascade::handle<FEmTool_HAssemblyTable> , FEmTool_AssemblyTable, Standard_Transient>>(m.attr("FEmTool_HAssemblyTable"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<TColStd_HArray1OfInteger> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<TColStd_HArray1OfInteger> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const FEmTool_AssemblyTable & (FEmTool_HAssemblyTable::*)() const) static_cast<const FEmTool_AssemblyTable & (FEmTool_HAssemblyTable::*)() const>(&FEmTool_HAssemblyTable::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (FEmTool_AssemblyTable & (FEmTool_HAssemblyTable::*)() ) static_cast<FEmTool_AssemblyTable & (FEmTool_HAssemblyTable::*)() >(&FEmTool_HAssemblyTable::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_HAssemblyTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_HAssemblyTable::*)() const>(&FEmTool_HAssemblyTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_HAssemblyTable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_HAssemblyTable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_SparseMatrix ,opencascade::handle<FEmTool_SparseMatrix>,Py_FEmTool_SparseMatrix , Standard_Transient>>(m.attr("FEmTool_SparseMatrix"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (FEmTool_SparseMatrix::*)( const Standard_Real ) ) static_cast<void (FEmTool_SparseMatrix::*)( const Standard_Real ) >(&FEmTool_SparseMatrix::Init),
             R"#(None)#"  , py::arg("Value"))
        .def("ChangeValue",
             (Standard_Real & (FEmTool_SparseMatrix::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (FEmTool_SparseMatrix::*)( const Standard_Integer , const Standard_Integer ) >(&FEmTool_SparseMatrix::ChangeValue),
             R"#(None)#"  , py::arg("I"),  py::arg("J"))
        .def("Decompose",
             (Standard_Boolean (FEmTool_SparseMatrix::*)() ) static_cast<Standard_Boolean (FEmTool_SparseMatrix::*)() >(&FEmTool_SparseMatrix::Decompose),
             R"#(To make a Factorization of <me>)#" )
        .def("Solve",
             (void (FEmTool_SparseMatrix::*)( const math_Vector & , math_Vector & ) const) static_cast<void (FEmTool_SparseMatrix::*)( const math_Vector & , math_Vector & ) const>(&FEmTool_SparseMatrix::Solve),
             R"#(Direct Solve of AX = B)#"  , py::arg("B"),  py::arg("X"))
        .def("Prepare",
             (Standard_Boolean (FEmTool_SparseMatrix::*)() ) static_cast<Standard_Boolean (FEmTool_SparseMatrix::*)() >(&FEmTool_SparseMatrix::Prepare),
             R"#(Make Preparation to iterative solve)#" )
        .def("Solve",
             (void (FEmTool_SparseMatrix::*)( const math_Vector & , const math_Vector & , math_Vector & , math_Vector & , const Standard_Real , const Standard_Integer ) const) static_cast<void (FEmTool_SparseMatrix::*)( const math_Vector & , const math_Vector & , math_Vector & , math_Vector & , const Standard_Real , const Standard_Integer ) const>(&FEmTool_SparseMatrix::Solve),
             R"#(Iterative solve of AX = B)#"  , py::arg("B"),  py::arg("Init"),  py::arg("X"),  py::arg("Residual"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-8),  py::arg("NbIterations")=static_cast<const Standard_Integer>(50))
        .def("Multiplied",
             (void (FEmTool_SparseMatrix::*)( const math_Vector & , math_Vector & ) const) static_cast<void (FEmTool_SparseMatrix::*)( const math_Vector & , math_Vector & ) const>(&FEmTool_SparseMatrix::Multiplied),
             R"#(returns the product of a SparseMatrix by a vector. An exception is raised if the dimensions are different)#"  , py::arg("X"),  py::arg("MX"))
        .def("RowNumber",
             (Standard_Integer (FEmTool_SparseMatrix::*)() const) static_cast<Standard_Integer (FEmTool_SparseMatrix::*)() const>(&FEmTool_SparseMatrix::RowNumber),
             R"#(returns the row range of a matrix.)#" )
        .def("ColNumber",
             (Standard_Integer (FEmTool_SparseMatrix::*)() const) static_cast<Standard_Integer (FEmTool_SparseMatrix::*)() const>(&FEmTool_SparseMatrix::ColNumber),
             R"#(returns the column range of the matrix.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_SparseMatrix::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_SparseMatrix::*)() const>(&FEmTool_SparseMatrix::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_SparseMatrix::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_SparseMatrix::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_LinearFlexion ,opencascade::handle<FEmTool_LinearFlexion> , FEmTool_ElementaryCriterion>>(m.attr("FEmTool_LinearFlexion"))
    // constructors
        .def(py::init< const Standard_Integer,const GeomAbs_Shape >()  , py::arg("WorkDegree"),  py::arg("ConstraintOrder") )
    // custom constructors
    // methods
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_LinearFlexion::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_LinearFlexion::*)() const>(&FEmTool_LinearFlexion::DependenceTable),
             R"#(None)#" )
        .def("Value",
             (Standard_Real (FEmTool_LinearFlexion::*)() ) static_cast<Standard_Real (FEmTool_LinearFlexion::*)() >(&FEmTool_LinearFlexion::Value),
             R"#(None)#" )
        .def("Hessian",
             (void (FEmTool_LinearFlexion::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) ) static_cast<void (FEmTool_LinearFlexion::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) >(&FEmTool_LinearFlexion::Hessian),
             R"#(None)#"  , py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("H"))
        .def("Gradient",
             (void (FEmTool_LinearFlexion::*)( const Standard_Integer , math_Vector & ) ) static_cast<void (FEmTool_LinearFlexion::*)( const Standard_Integer , math_Vector & ) >(&FEmTool_LinearFlexion::Gradient),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_LinearFlexion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_LinearFlexion::*)() const>(&FEmTool_LinearFlexion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_LinearFlexion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_LinearFlexion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_LinearJerk ,opencascade::handle<FEmTool_LinearJerk> , FEmTool_ElementaryCriterion>>(m.attr("FEmTool_LinearJerk"))
    // constructors
        .def(py::init< const Standard_Integer,const GeomAbs_Shape >()  , py::arg("WorkDegree"),  py::arg("ConstraintOrder") )
    // custom constructors
    // methods
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_LinearJerk::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_LinearJerk::*)() const>(&FEmTool_LinearJerk::DependenceTable),
             R"#(None)#" )
        .def("Value",
             (Standard_Real (FEmTool_LinearJerk::*)() ) static_cast<Standard_Real (FEmTool_LinearJerk::*)() >(&FEmTool_LinearJerk::Value),
             R"#(None)#" )
        .def("Hessian",
             (void (FEmTool_LinearJerk::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) ) static_cast<void (FEmTool_LinearJerk::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) >(&FEmTool_LinearJerk::Hessian),
             R"#(None)#"  , py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("H"))
        .def("Gradient",
             (void (FEmTool_LinearJerk::*)( const Standard_Integer , math_Vector & ) ) static_cast<void (FEmTool_LinearJerk::*)( const Standard_Integer , math_Vector & ) >(&FEmTool_LinearJerk::Gradient),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_LinearJerk::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_LinearJerk::*)() const>(&FEmTool_LinearJerk::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_LinearJerk::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_LinearJerk::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_LinearTension ,opencascade::handle<FEmTool_LinearTension> , FEmTool_ElementaryCriterion>>(m.attr("FEmTool_LinearTension"))
    // constructors
        .def(py::init< const Standard_Integer,const GeomAbs_Shape >()  , py::arg("WorkDegree"),  py::arg("ConstraintOrder") )
    // custom constructors
    // methods
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_LinearTension::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (FEmTool_LinearTension::*)() const>(&FEmTool_LinearTension::DependenceTable),
             R"#(None)#" )
        .def("Value",
             (Standard_Real (FEmTool_LinearTension::*)() ) static_cast<Standard_Real (FEmTool_LinearTension::*)() >(&FEmTool_LinearTension::Value),
             R"#(None)#" )
        .def("Hessian",
             (void (FEmTool_LinearTension::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) ) static_cast<void (FEmTool_LinearTension::*)( const Standard_Integer , const Standard_Integer , math_Matrix & ) >(&FEmTool_LinearTension::Hessian),
             R"#(None)#"  , py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("H"))
        .def("Gradient",
             (void (FEmTool_LinearTension::*)( const Standard_Integer , math_Vector & ) ) static_cast<void (FEmTool_LinearTension::*)( const Standard_Integer , math_Vector & ) >(&FEmTool_LinearTension::Gradient),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_LinearTension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_LinearTension::*)() const>(&FEmTool_LinearTension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_LinearTension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_LinearTension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FEmTool_ProfileMatrix ,opencascade::handle<FEmTool_ProfileMatrix> , FEmTool_SparseMatrix>>(m.attr("FEmTool_ProfileMatrix"))
    // constructors
        .def(py::init<  const NCollection_Array1<Standard_Integer> & >()  , py::arg("FirstIndexes") )
    // custom constructors
    // methods
        .def("Init",
             (void (FEmTool_ProfileMatrix::*)( const Standard_Real ) ) static_cast<void (FEmTool_ProfileMatrix::*)( const Standard_Real ) >(&FEmTool_ProfileMatrix::Init),
             R"#(None)#"  , py::arg("Value"))
        .def("ChangeValue",
             (Standard_Real & (FEmTool_ProfileMatrix::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (FEmTool_ProfileMatrix::*)( const Standard_Integer , const Standard_Integer ) >(&FEmTool_ProfileMatrix::ChangeValue),
             R"#(None)#"  , py::arg("I"),  py::arg("J"))
        .def("Decompose",
             (Standard_Boolean (FEmTool_ProfileMatrix::*)() ) static_cast<Standard_Boolean (FEmTool_ProfileMatrix::*)() >(&FEmTool_ProfileMatrix::Decompose),
             R"#(To make a Factorization of <me>)#" )
        .def("Solve",
             (void (FEmTool_ProfileMatrix::*)( const math_Vector & , math_Vector & ) const) static_cast<void (FEmTool_ProfileMatrix::*)( const math_Vector & , math_Vector & ) const>(&FEmTool_ProfileMatrix::Solve),
             R"#(Direct Solve of AX = B)#"  , py::arg("B"),  py::arg("X"))
        .def("Prepare",
             (Standard_Boolean (FEmTool_ProfileMatrix::*)() ) static_cast<Standard_Boolean (FEmTool_ProfileMatrix::*)() >(&FEmTool_ProfileMatrix::Prepare),
             R"#(Make Preparation to iterative solve)#" )
        .def("Solve",
             (void (FEmTool_ProfileMatrix::*)( const math_Vector & , const math_Vector & , math_Vector & , math_Vector & , const Standard_Real , const Standard_Integer ) const) static_cast<void (FEmTool_ProfileMatrix::*)( const math_Vector & , const math_Vector & , math_Vector & , math_Vector & , const Standard_Real , const Standard_Integer ) const>(&FEmTool_ProfileMatrix::Solve),
             R"#(Iterative solve of AX = B)#"  , py::arg("B"),  py::arg("Init"),  py::arg("X"),  py::arg("Residual"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-8),  py::arg("NbIterations")=static_cast<const Standard_Integer>(50))
        .def("Multiplied",
             (void (FEmTool_ProfileMatrix::*)( const math_Vector & , math_Vector & ) const) static_cast<void (FEmTool_ProfileMatrix::*)( const math_Vector & , math_Vector & ) const>(&FEmTool_ProfileMatrix::Multiplied),
             R"#(returns the product of a SparseMatrix by a vector. An exception is raised if the dimensions are different)#"  , py::arg("X"),  py::arg("MX"))
        .def("RowNumber",
             (Standard_Integer (FEmTool_ProfileMatrix::*)() const) static_cast<Standard_Integer (FEmTool_ProfileMatrix::*)() const>(&FEmTool_ProfileMatrix::RowNumber),
             R"#(returns the row range of a matrix.)#" )
        .def("ColNumber",
             (Standard_Integer (FEmTool_ProfileMatrix::*)() const) static_cast<Standard_Integer (FEmTool_ProfileMatrix::*)() const>(&FEmTool_ProfileMatrix::ColNumber),
             R"#(returns the column range of the matrix.)#" )
        .def("IsInProfile",
             (Standard_Boolean (FEmTool_ProfileMatrix::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Boolean (FEmTool_ProfileMatrix::*)( const Standard_Integer , const Standard_Integer ) const>(&FEmTool_ProfileMatrix::IsInProfile),
             R"#(None)#"  , py::arg("i"),  py::arg("j"))
        .def("OutM",
             (void (FEmTool_ProfileMatrix::*)() const) static_cast<void (FEmTool_ProfileMatrix::*)() const>(&FEmTool_ProfileMatrix::OutM),
             R"#(None)#" )
        .def("OutS",
             (void (FEmTool_ProfileMatrix::*)() const) static_cast<void (FEmTool_ProfileMatrix::*)() const>(&FEmTool_ProfileMatrix::OutS),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (FEmTool_ProfileMatrix::*)() const) static_cast<const opencascade::handle<Standard_Type> & (FEmTool_ProfileMatrix::*)() const>(&FEmTool_ProfileMatrix::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&FEmTool_ProfileMatrix::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&FEmTool_ProfileMatrix::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/FEmTool_Assembly.hxx
// ./opencascade/FEmTool_SeqOfLinConstr.hxx
// ./opencascade/FEmTool_ListIteratorOfListOfVectors.hxx
// ./opencascade/FEmTool_ListOfVectors.hxx
// ./opencascade/FEmTool_ElementaryCriterion.hxx
// ./opencascade/FEmTool_LinearFlexion.hxx
// ./opencascade/FEmTool_HAssemblyTable.hxx
// ./opencascade/FEmTool_LinearJerk.hxx
// ./opencascade/FEmTool_LinearTension.hxx
// ./opencascade/FEmTool_SparseMatrix.hxx
// ./opencascade/FEmTool_Curve.hxx
// ./opencascade/FEmTool_ElementsOfRefMatrix.hxx
// ./opencascade/FEmTool_ProfileMatrix.hxx
// ./opencascade/FEmTool_AssemblyTable.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<FEmTool_ListOfVectors>(m,"FEmTool_SeqOfLinConstr");
    register_template_NCollection_List<opencascade::handle<TColStd_HArray1OfReal> >(m,"FEmTool_ListOfVectors");
    register_template_NCollection_Array2<opencascade::handle<TColStd_HArray1OfInteger> >(m,"FEmTool_AssemblyTable");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
