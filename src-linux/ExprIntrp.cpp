
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetMaster",
             (void (ExprIntrp_Analysis::*)( const opencascade::handle<ExprIntrp_Generator> & ) ) static_cast<void (ExprIntrp_Analysis::*)( const opencascade::handle<ExprIntrp_Generator> & ) >(&ExprIntrp_Analysis::SetMaster),
             R"#(None)#"  , py::arg("agen"))
        .def("Push",
             (void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&ExprIntrp_Analysis::Push),
             R"#(None)#"  , py::arg("exp"))
        .def("PushRelation",
             (void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_GeneralRelation> & ) ) static_cast<void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_GeneralRelation> & ) >(&ExprIntrp_Analysis::PushRelation),
             R"#(None)#"  , py::arg("rel"))
        .def("PushName",
             (void (ExprIntrp_Analysis::*)( const TCollection_AsciiString & ) ) static_cast<void (ExprIntrp_Analysis::*)( const TCollection_AsciiString & ) >(&ExprIntrp_Analysis::PushName),
             R"#(None)#"  , py::arg("name"))
        .def("PushValue",
             (void (ExprIntrp_Analysis::*)( const Standard_Integer ) ) static_cast<void (ExprIntrp_Analysis::*)( const Standard_Integer ) >(&ExprIntrp_Analysis::PushValue),
             R"#(None)#"  , py::arg("degree"))
        .def("PushFunction",
             (void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_GeneralFunction> & ) ) static_cast<void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_GeneralFunction> & ) >(&ExprIntrp_Analysis::PushFunction),
             R"#(None)#"  , py::arg("func"))
        .def("Pop",
             (opencascade::handle<Expr_GeneralExpression> (ExprIntrp_Analysis::*)() ) static_cast<opencascade::handle<Expr_GeneralExpression> (ExprIntrp_Analysis::*)() >(&ExprIntrp_Analysis::Pop),
             R"#(None)#" )
        .def("PopRelation",
             (opencascade::handle<Expr_GeneralRelation> (ExprIntrp_Analysis::*)() ) static_cast<opencascade::handle<Expr_GeneralRelation> (ExprIntrp_Analysis::*)() >(&ExprIntrp_Analysis::PopRelation),
             R"#(None)#" )
        .def("PopName",
             (TCollection_AsciiString (ExprIntrp_Analysis::*)() ) static_cast<TCollection_AsciiString (ExprIntrp_Analysis::*)() >(&ExprIntrp_Analysis::PopName),
             R"#(None)#" )
        .def("PopValue",
             (Standard_Integer (ExprIntrp_Analysis::*)() ) static_cast<Standard_Integer (ExprIntrp_Analysis::*)() >(&ExprIntrp_Analysis::PopValue),
             R"#(None)#" )
        .def("PopFunction",
             (opencascade::handle<Expr_GeneralFunction> (ExprIntrp_Analysis::*)() ) static_cast<opencascade::handle<Expr_GeneralFunction> (ExprIntrp_Analysis::*)() >(&ExprIntrp_Analysis::PopFunction),
             R"#(None)#" )
        .def("IsExpStackEmpty",
             (Standard_Boolean (ExprIntrp_Analysis::*)() const) static_cast<Standard_Boolean (ExprIntrp_Analysis::*)() const>(&ExprIntrp_Analysis::IsExpStackEmpty),
             R"#(None)#" )
        .def("IsRelStackEmpty",
             (Standard_Boolean (ExprIntrp_Analysis::*)() const) static_cast<Standard_Boolean (ExprIntrp_Analysis::*)() const>(&ExprIntrp_Analysis::IsRelStackEmpty),
             R"#(None)#" )
        .def("ResetAll",
             (void (ExprIntrp_Analysis::*)() ) static_cast<void (ExprIntrp_Analysis::*)() >(&ExprIntrp_Analysis::ResetAll),
             R"#(None)#" )
        .def("Use",
             (void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_NamedFunction> & ) ) static_cast<void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_NamedFunction> & ) >(&ExprIntrp_Analysis::Use),
             R"#(None)#"  , py::arg("func"))
        .def("Use",
             (void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_NamedExpression> & ) ) static_cast<void (ExprIntrp_Analysis::*)( const opencascade::handle<Expr_NamedExpression> & ) >(&ExprIntrp_Analysis::Use),
             R"#(None)#"  , py::arg("named"))
        .def("GetNamed",
             (opencascade::handle<Expr_NamedExpression> (ExprIntrp_Analysis::*)( const TCollection_AsciiString & ) ) static_cast<opencascade::handle<Expr_NamedExpression> (ExprIntrp_Analysis::*)( const TCollection_AsciiString & ) >(&ExprIntrp_Analysis::GetNamed),
             R"#(None)#"  , py::arg("name"))
        .def("GetFunction",
             (opencascade::handle<Expr_NamedFunction> (ExprIntrp_Analysis::*)( const TCollection_AsciiString & ) ) static_cast<opencascade::handle<Expr_NamedFunction> (ExprIntrp_Analysis::*)( const TCollection_AsciiString & ) >(&ExprIntrp_Analysis::GetFunction),
             R"#(None)#"  , py::arg("name"))
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
        .def("Use",
             (void (ExprIntrp_Generator::*)( const opencascade::handle<Expr_NamedFunction> & ) ) static_cast<void (ExprIntrp_Generator::*)( const opencascade::handle<Expr_NamedFunction> & ) >(&ExprIntrp_Generator::Use),
             R"#(None)#"  , py::arg("func"))
        .def("Use",
             (void (ExprIntrp_Generator::*)( const opencascade::handle<Expr_NamedExpression> & ) ) static_cast<void (ExprIntrp_Generator::*)( const opencascade::handle<Expr_NamedExpression> & ) >(&ExprIntrp_Generator::Use),
             R"#(None)#"  , py::arg("named"))
        .def("GetNamed",
             (const ExprIntrp_SequenceOfNamedExpression & (ExprIntrp_Generator::*)() const) static_cast<const ExprIntrp_SequenceOfNamedExpression & (ExprIntrp_Generator::*)() const>(&ExprIntrp_Generator::GetNamed),
             R"#(None)#" )
        .def("GetFunctions",
             (const ExprIntrp_SequenceOfNamedFunction & (ExprIntrp_Generator::*)() const) static_cast<const ExprIntrp_SequenceOfNamedFunction & (ExprIntrp_Generator::*)() const>(&ExprIntrp_Generator::GetFunctions),
             R"#(None)#" )
        .def("GetNamed",
             (opencascade::handle<Expr_NamedExpression> (ExprIntrp_Generator::*)( const TCollection_AsciiString & ) const) static_cast<opencascade::handle<Expr_NamedExpression> (ExprIntrp_Generator::*)( const TCollection_AsciiString & ) const>(&ExprIntrp_Generator::GetNamed),
             R"#(Returns NamedExpression with name <name> already interpreted if it exists. Returns a null handle if not.)#"  , py::arg("name"))
        .def("GetFunction",
             (opencascade::handle<Expr_NamedFunction> (ExprIntrp_Generator::*)( const TCollection_AsciiString & ) const) static_cast<opencascade::handle<Expr_NamedFunction> (ExprIntrp_Generator::*)( const TCollection_AsciiString & ) const>(&ExprIntrp_Generator::GetFunction),
             R"#(Returns NamedFunction with name <name> already interpreted if it exists. Returns a null handle if not.)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_Generator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_Generator::*)() const>(&ExprIntrp_Generator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_Generator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ExprIntrp_Generator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_GenExp ,opencascade::handle<ExprIntrp_GenExp> , ExprIntrp_Generator>>(m.attr("ExprIntrp_GenExp"))
    // constructors
    // custom constructors
    // methods
        .def("Process",
             (void (ExprIntrp_GenExp::*)( const TCollection_AsciiString & ) ) static_cast<void (ExprIntrp_GenExp::*)( const TCollection_AsciiString & ) >(&ExprIntrp_GenExp::Process),
             R"#(Processes given string.)#"  , py::arg("str"))
        .def("IsDone",
             (Standard_Boolean (ExprIntrp_GenExp::*)() const) static_cast<Standard_Boolean (ExprIntrp_GenExp::*)() const>(&ExprIntrp_GenExp::IsDone),
             R"#(Returns false if any syntax error has occurred during process.)#" )
        .def("Expression",
             (opencascade::handle<Expr_GeneralExpression> (ExprIntrp_GenExp::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (ExprIntrp_GenExp::*)() const>(&ExprIntrp_GenExp::Expression),
             R"#(Returns expression generated. Raises an exception if IsDone answers false.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_GenExp::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_GenExp::*)() const>(&ExprIntrp_GenExp::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Create_s",
                    (opencascade::handle<ExprIntrp_GenExp> (*)() ) static_cast<opencascade::handle<ExprIntrp_GenExp> (*)() >(&ExprIntrp_GenExp::Create),
                    R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_GenExp::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ExprIntrp_GenExp::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_GenFct ,opencascade::handle<ExprIntrp_GenFct> , ExprIntrp_Generator>>(m.attr("ExprIntrp_GenFct"))
    // constructors
    // custom constructors
    // methods
        .def("Process",
             (void (ExprIntrp_GenFct::*)( const TCollection_AsciiString & ) ) static_cast<void (ExprIntrp_GenFct::*)( const TCollection_AsciiString & ) >(&ExprIntrp_GenFct::Process),
             R"#(None)#"  , py::arg("str"))
        .def("IsDone",
             (Standard_Boolean (ExprIntrp_GenFct::*)() const) static_cast<Standard_Boolean (ExprIntrp_GenFct::*)() const>(&ExprIntrp_GenFct::IsDone),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_GenFct::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_GenFct::*)() const>(&ExprIntrp_GenFct::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Create_s",
                    (opencascade::handle<ExprIntrp_GenFct> (*)() ) static_cast<opencascade::handle<ExprIntrp_GenFct> (*)() >(&ExprIntrp_GenFct::Create),
                    R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_GenFct::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ExprIntrp_GenFct::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ExprIntrp_GenRel ,opencascade::handle<ExprIntrp_GenRel> , ExprIntrp_Generator>>(m.attr("ExprIntrp_GenRel"))
    // constructors
    // custom constructors
    // methods
        .def("Process",
             (void (ExprIntrp_GenRel::*)( const TCollection_AsciiString & ) ) static_cast<void (ExprIntrp_GenRel::*)( const TCollection_AsciiString & ) >(&ExprIntrp_GenRel::Process),
             R"#(Processes given string.)#"  , py::arg("str"))
        .def("IsDone",
             (Standard_Boolean (ExprIntrp_GenRel::*)() const) static_cast<Standard_Boolean (ExprIntrp_GenRel::*)() const>(&ExprIntrp_GenRel::IsDone),
             R"#(Returns false if any syntax error has occurred during process.)#" )
        .def("Relation",
             (opencascade::handle<Expr_GeneralRelation> (ExprIntrp_GenRel::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (ExprIntrp_GenRel::*)() const>(&ExprIntrp_GenRel::Relation),
             R"#(Returns relation generated. Raises an exception if IsDone answers false.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ExprIntrp_GenRel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ExprIntrp_GenRel::*)() const>(&ExprIntrp_GenRel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Create_s",
                    (opencascade::handle<ExprIntrp_GenRel> (*)() ) static_cast<opencascade::handle<ExprIntrp_GenRel> (*)() >(&ExprIntrp_GenRel::Create),
                    R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ExprIntrp_GenRel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ExprIntrp_GenRel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ExprIntrp_ListIteratorOfStackOfGeneralExpression.hxx
// ./opencascade/ExprIntrp_GenFct.hxx
// ./opencascade/ExprIntrp_SequenceOfNamedFunction.hxx
// ./opencascade/ExprIntrp.hxx
// ./opencascade/ExprIntrp_yaccanal.hxx
// ./opencascade/ExprIntrp_StackOfGeneralFunction.hxx
// ./opencascade/ExprIntrp_SyntaxError.hxx
// ./opencascade/ExprIntrp_Generator.hxx
// ./opencascade/ExprIntrp_Analysis.hxx
// ./opencascade/ExprIntrp_StackOfGeneralRelation.hxx
// ./opencascade/ExprIntrp_StackOfGeneralExpression.hxx
// ./opencascade/ExprIntrp_ListIteratorOfStackOfGeneralRelation.hxx
// ./opencascade/ExprIntrp_ListIteratorOfStackOfGeneralFunction.hxx
// ./opencascade/ExprIntrp_SequenceOfNamedExpression.hxx
// ./opencascade/ExprIntrp_GenRel.hxx
// ./opencascade/ExprIntrp_yaccintrf.hxx
    m.def("ExprIntrp_GetResult",
          (const TCollection_AsciiString & (*)())  static_cast<const TCollection_AsciiString & (*)()>(&ExprIntrp_GetResult),
          R"#(None)#" );
    m.def("ExprIntrp_GetDegree",
          (int (*)())  static_cast<int (*)()>(&ExprIntrp_GetDegree),
          R"#(None)#" );
// ./opencascade/ExprIntrp_GenExp.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<Expr_NamedFunction> >(m,"ExprIntrp_SequenceOfNamedFunction");
    register_template_NCollection_List<opencascade::handle<Expr_GeneralFunction> >(m,"ExprIntrp_StackOfGeneralFunction");
    register_template_NCollection_List<opencascade::handle<Expr_GeneralRelation> >(m,"ExprIntrp_StackOfGeneralRelation");
    register_template_NCollection_List<opencascade::handle<Expr_GeneralExpression> >(m,"ExprIntrp_StackOfGeneralExpression");
    register_template_NCollection_Sequence<opencascade::handle<Expr_NamedExpression> >(m,"ExprIntrp_SequenceOfNamedExpression");


// exceptions
register_occ_exception<ExprIntrp_SyntaxError>(m, "ExprIntrp_SyntaxError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
