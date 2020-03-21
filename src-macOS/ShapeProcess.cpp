
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_UOperator.hxx>
#include <ShapeProcess_OperLibrary.hxx>
#include <Resource_Manager.hxx>
#include <Message_Messenger.hxx>
#include <Message_ProgressIndicator.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <BRepTools_Modifier.hxx>
#include <Message_Msg.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <BRepTools_Modification.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeProcess_Context.hxx>

// module includes
#include <ShapeProcess.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_OperFunc.hxx>
#include <ShapeProcess_OperLibrary.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <ShapeProcess_UOperator.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeProcess(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeProcess"));


//Python trampoline classes
    class Py_ShapeProcess_Operator : public ShapeProcess_Operator{
    public:
        using ShapeProcess_Operator::ShapeProcess_Operator;


        // public pure virtual
        Standard_Boolean Perform(const opencascade::handle<ShapeProcess_Context> & context) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,ShapeProcess_Operator,Perform,context) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<ShapeProcess , shared_ptr<ShapeProcess>>(m,"ShapeProcess");

    static_cast<py::class_<ShapeProcess , shared_ptr<ShapeProcess> >>(m.attr("ShapeProcess"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeProcess_Context ,opencascade::handle<ShapeProcess_Context> , Standard_Transient>>(m.attr("ShapeProcess_Context"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeProcess_Context::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeProcess_Context::*)() const>(&ShapeProcess_Context::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeProcess_Context::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<ShapeProcess_OperLibrary , shared_ptr<ShapeProcess_OperLibrary>>(m,"ShapeProcess_OperLibrary");

    static_cast<py::class_<ShapeProcess_OperLibrary , shared_ptr<ShapeProcess_OperLibrary> >>(m.attr("ShapeProcess_OperLibrary"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeProcess_Operator ,opencascade::handle<ShapeProcess_Operator>,Py_ShapeProcess_Operator , Standard_Transient>>(m.attr("ShapeProcess_Operator"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (ShapeProcess_Operator::*)( const opencascade::handle<ShapeProcess_Context> & ) ) static_cast<Standard_Boolean (ShapeProcess_Operator::*)( const opencascade::handle<ShapeProcess_Context> & ) >(&ShapeProcess_Operator::Perform),
             R"#(Performs operation and eventually records changes in the context)#"  , py::arg("context"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeProcess_Operator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeProcess_Operator::*)() const>(&ShapeProcess_Operator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeProcess_Operator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeProcess_ShapeContext ,opencascade::handle<ShapeProcess_ShapeContext> , ShapeProcess_Context>>(m.attr("ShapeProcess_ShapeContext"))
    // constructors
    // custom constructors
    // methods
        .def("SetNonManifold",
             (void (ShapeProcess_ShapeContext::*)( Standard_Boolean ) ) static_cast<void (ShapeProcess_ShapeContext::*)( Standard_Boolean ) >(&ShapeProcess_ShapeContext::SetNonManifold),
             R"#(Set NonManifold flag)#"  , py::arg("theNonManifold"))
        .def("IsNonManifold",
             (Standard_Boolean (ShapeProcess_ShapeContext::*)() ) static_cast<Standard_Boolean (ShapeProcess_ShapeContext::*)() >(&ShapeProcess_ShapeContext::IsNonManifold),
             R"#(Get NonManifold flag)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeProcess_ShapeContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeProcess_ShapeContext::*)() const>(&ShapeProcess_ShapeContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeProcess_ShapeContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeProcess_UOperator ,opencascade::handle<ShapeProcess_UOperator> , ShapeProcess_Operator>>(m.attr("ShapeProcess_UOperator"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (ShapeProcess_UOperator::*)( const opencascade::handle<ShapeProcess_Context> & ) ) static_cast<Standard_Boolean (ShapeProcess_UOperator::*)( const opencascade::handle<ShapeProcess_Context> & ) >(&ShapeProcess_UOperator::Perform),
             R"#(Performs operation and records changes in the context)#"  , py::arg("context"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeProcess_UOperator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeProcess_UOperator::*)() const>(&ShapeProcess_UOperator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeProcess_UOperator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeProcess.hxx
// ./opencascade/ShapeProcess_UOperator.hxx
// ./opencascade/ShapeProcess_Context.hxx
// ./opencascade/ShapeProcess_OperFunc.hxx
// ./opencascade/ShapeProcess_ShapeContext.hxx
// ./opencascade/ShapeProcess_OperLibrary.hxx
// ./opencascade/ShapeProcess_Operator.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
