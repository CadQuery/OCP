
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ExprIntrp_Generator.hxx>
#include <Expr_GeneralRelation.hxx>
#include <ExprIntrp_Generator.hxx>
#include <TCollection_AsciiString.hxx>
#include <ExprIntrp_Generator.hxx>
#include <ExprIntrp_GenExp.hxx>
#include <ExprIntrp_GenFct.hxx>
#include <ExprIntrp_GenRel.hxx>
#include <ExprIntrp_Analysis.hxx>

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
// ./opencascade/ExprIntrp_StackOfGeneralExpression.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralExpression.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_SequenceOfNamedExpression.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralRelation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralRelation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralFunction.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_StackOfGeneralFunction.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ExprIntrp_SequenceOfNamedFunction.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ExprIntrp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ExprIntrp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ExprIntrp , shared_ptr<ExprIntrp>>(m,"ExprIntrp");

    static_cast<py::class_<ExprIntrp , shared_ptr<ExprIntrp> >>(m.attr("ExprIntrp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_Analysis , shared_ptr<ExprIntrp_Analysis> >>(m.attr("ExprIntrp_Analysis"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_Generator ,opencascade::handle<ExprIntrp_Generator> , Standard_Transient>>(m.attr("ExprIntrp_Generator"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_Generator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_Generator::*)() const>(&ExprIntrp_Generator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_Generator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_GenExp ,opencascade::handle<ExprIntrp_GenExp> , ExprIntrp_Generator>>(m.attr("ExprIntrp_GenExp"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_GenExp::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_GenExp::*)() const>(&ExprIntrp_GenExp::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_GenExp::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_GenFct ,opencascade::handle<ExprIntrp_GenFct> , ExprIntrp_Generator>>(m.attr("ExprIntrp_GenFct"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_GenFct::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_GenFct::*)() const>(&ExprIntrp_GenFct::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_GenFct::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_GenRel ,opencascade::handle<ExprIntrp_GenRel> , ExprIntrp_Generator>>(m.attr("ExprIntrp_GenRel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_GenRel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_GenRel::*)() const>(&ExprIntrp_GenRel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_GenRel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ExprIntrp_yaccintrf.hxx
// ./opencascade/ExprIntrp_GenFct.hxx
// ./opencascade/ExprIntrp_StackOfGeneralExpression.hxx
// ./opencascade/ExprIntrp_Analysis.hxx
// ./opencascade/ExprIntrp_GenRel.hxx
// ./opencascade/ExprIntrp_SequenceOfNamedExpression.hxx
// ./opencascade/ExprIntrp_StackOfGeneralRelation.hxx
// ./opencascade/ExprIntrp_ListIteratorOfStackOfGeneralExpression.hxx
// ./opencascade/ExprIntrp_Generator.hxx
// ./opencascade/ExprIntrp_GenExp.hxx
// ./opencascade/ExprIntrp_StackOfGeneralFunction.hxx
// ./opencascade/ExprIntrp_SequenceOfNamedFunction.hxx
// ./opencascade/ExprIntrp.hxx
// ./opencascade/ExprIntrp_ListIteratorOfStackOfGeneralFunction.hxx
// ./opencascade/ExprIntrp_SyntaxError.hxx
// ./opencascade/ExprIntrp_yaccanal.hxx
// ./opencascade/ExprIntrp_ListIteratorOfStackOfGeneralRelation.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<Expr_GeneralExpression> >(m,"ExprIntrp_StackOfGeneralExpression");
    register_template_NCollection_Sequence<opencascade::handle<Expr_NamedExpression> >(m,"ExprIntrp_SequenceOfNamedExpression");
    register_template_NCollection_List<opencascade::handle<Expr_GeneralRelation> >(m,"ExprIntrp_StackOfGeneralRelation");
    register_template_NCollection_List<opencascade::handle<Expr_GeneralFunction> >(m,"ExprIntrp_StackOfGeneralFunction");
    register_template_NCollection_Sequence<opencascade::handle<Expr_NamedFunction> >(m,"ExprIntrp_SequenceOfNamedFunction");


// exceptions
register_occ_exception<ExprIntrp_SyntaxError>(m, "ExprIntrp_SyntaxError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
