
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <ExprIntrp_Generator.hxx>
#include <TCollection_AsciiString.hxx>
#include <ExprIntrp_Generator.hxx>
#include <ExprIntrp_GenExp.hxx>
#include <ExprIntrp_GenFct.hxx>
#include <ExprIntrp_GenRel.hxx>
#include <ExprIntrp_Analysis.hxx>
#include <ExprIntrp_Generator.hxx>
#include <Expr_GeneralRelation.hxx>

// module includes
#include <ExprIntrp.hxx>
#include <ExprIntrp_Analysis.hxx>
#include <ExprIntrp_Generator.hxx>
#include <ExprIntrp_GenExp.hxx>
#include <ExprIntrp_GenFct.hxx>
#include <ExprIntrp_GenRel.hxx>
#include <ExprIntrp_ListIteratorOfStackOfGeneralExpression.hxx>
#include <ExprIntrp_ListIteratorOfStackOfGeneralFunction.hxx>
#include <ExprIntrp_ListIteratorOfStackOfGeneralRelation.hxx>
#include <ExprIntrp_SequenceOfNamedExpression.hxx>
#include <ExprIntrp_SequenceOfNamedFunction.hxx>
#include <ExprIntrp_StackOfGeneralExpression.hxx>
#include <ExprIntrp_StackOfGeneralFunction.hxx>
#include <ExprIntrp_StackOfGeneralRelation.hxx>
#include <ExprIntrp_SyntaxError.hxx>
#include <ExprIntrp_yaccanal.hxx>
#include <ExprIntrp_yaccintrf.hxx>

// template related includes
// ./opencascade/ExprIntrp_SequenceOfNamedFunction.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralFunction.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralFunction.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralRelation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralRelation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralExpression.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralExpression.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_SequenceOfNamedExpression.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ExprIntrp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ExprIntrp", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<Expr_NamedFunction> >(m,"ExprIntrp_SequenceOfNamedFunction");
    preregister_template_NCollection_List<opencascade::handle<Expr_GeneralFunction> >(m,"ExprIntrp_StackOfGeneralFunction");
    preregister_template_NCollection_List<opencascade::handle<Expr_GeneralRelation> >(m,"ExprIntrp_StackOfGeneralRelation");
    preregister_template_NCollection_List<opencascade::handle<Expr_GeneralExpression> >(m,"ExprIntrp_StackOfGeneralExpression");
    preregister_template_NCollection_Sequence<opencascade::handle<Expr_NamedExpression> >(m,"ExprIntrp_SequenceOfNamedExpression");

// classes forward declarations only
    py::class_<ExprIntrp , shared_ptr<ExprIntrp> >(m,"ExprIntrp",R"#(Describes an interpreter for GeneralExpressions, GeneralFunctions, and GeneralRelations defined in package Expr.)#");
    py::class_<ExprIntrp_Analysis , shared_ptr<ExprIntrp_Analysis> >(m,"ExprIntrp_Analysis",R"#(None)#");
    py::class_<ExprIntrp_Generator ,opencascade::handle<ExprIntrp_Generator> , Standard_Transient>(m,"ExprIntrp_Generator",R"#(Implements general services for interpretation of expressions.Implements general services for interpretation of expressions.Implements general services for interpretation of expressions.)#");
    py::class_<ExprIntrp_GenExp ,opencascade::handle<ExprIntrp_GenExp> , ExprIntrp_Generator>(m,"ExprIntrp_GenExp",R"#(This class permits, from a string, to create any kind of expression of package Expr by using built-in functions such as Sin,Cos, etc, and by creating variables.This class permits, from a string, to create any kind of expression of package Expr by using built-in functions such as Sin,Cos, etc, and by creating variables.This class permits, from a string, to create any kind of expression of package Expr by using built-in functions such as Sin,Cos, etc, and by creating variables.)#");
    py::class_<ExprIntrp_GenFct ,opencascade::handle<ExprIntrp_GenFct> , ExprIntrp_Generator>(m,"ExprIntrp_GenFct",R"#(Implements an interpreter for defining functions. All its functionnalities can be found in class GenExp.Implements an interpreter for defining functions. All its functionnalities can be found in class GenExp.Implements an interpreter for defining functions. All its functionnalities can be found in class GenExp.)#");
    py::class_<ExprIntrp_GenRel ,opencascade::handle<ExprIntrp_GenRel> , ExprIntrp_Generator>(m,"ExprIntrp_GenRel",R"#(Implements an interpreter for equations or system of equations made of expressions of package Expr.Implements an interpreter for equations or system of equations made of expressions of package Expr.Implements an interpreter for equations or system of equations made of expressions of package Expr.)#");

};

// user-defined post-inclusion per module

// user-defined post
