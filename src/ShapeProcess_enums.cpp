
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Resource_Manager.hxx>
#include <Message_Messenger.hxx>
#include <Message_ProgressIndicator.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <BRepTools_Modification.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <BRepTools_Modifier.hxx>
#include <Message_Msg.hxx>
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_UOperator.hxx>
#include <ShapeProcess_OperLibrary.hxx>

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
void register_ShapeProcess_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeProcess", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_ShapeProcess_Operator : public ShapeProcess_Operator{
    public:
        using ShapeProcess_Operator::ShapeProcess_Operator;
        
        // public pure virtual
        Standard_Boolean Perform(const opencascade::handle<ShapeProcess_Context> & context) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,ShapeProcess_Operator,Perform,context) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<ShapeProcess_Context ,opencascade::handle<ShapeProcess_Context>  , Standard_Transient >(m,"ShapeProcess_Context",R"#(Provides convenient interface to resource file Allows to load resource file and get values of attributes starting from some scope, for example if scope is defined as "ToV4" and requested parameter is "exec.op", value of "ToV4.exec.op" parameter from the resource file will be returnedProvides convenient interface to resource file Allows to load resource file and get values of attributes starting from some scope, for example if scope is defined as "ToV4" and requested parameter is "exec.op", value of "ToV4.exec.op" parameter from the resource file will be returnedProvides convenient interface to resource file Allows to load resource file and get values of attributes starting from some scope, for example if scope is defined as "ToV4" and requested parameter is "exec.op", value of "ToV4.exec.op" parameter from the resource file will be returned)#");
    py::class_<ShapeProcess_Operator ,opencascade::handle<ShapeProcess_Operator> ,Py_ShapeProcess_Operator , Standard_Transient >(m,"ShapeProcess_Operator",R"#(Abstract Operator class providing a tool to perform an operation on ContextAbstract Operator class providing a tool to perform an operation on ContextAbstract Operator class providing a tool to perform an operation on Context)#");
    py::class_<ShapeProcess ,std::unique_ptr<ShapeProcess>  >(m,"ShapeProcess",R"#(Shape Processing module allows to define and apply general Shape Processing as a customizable sequence of Shape Healing operators. The customization is implemented via user-editable resource file which defines sequence of operators to be executed and their parameters.)#");
    py::class_<ShapeProcess_OperLibrary ,std::unique_ptr<ShapeProcess_OperLibrary>  >(m,"ShapeProcess_OperLibrary",R"#(Provides a set of following operators)#");
    py::class_<ShapeProcess_UOperator ,opencascade::handle<ShapeProcess_UOperator>  , ShapeProcess_Operator >(m,"ShapeProcess_UOperator",R"#(Defines operator as container for static function OperFunc. This allows user to create new operators without creation of new classesDefines operator as container for static function OperFunc. This allows user to create new operators without creation of new classesDefines operator as container for static function OperFunc. This allows user to create new operators without creation of new classes)#");
    py::class_<ShapeProcess_ShapeContext ,opencascade::handle<ShapeProcess_ShapeContext>  , ShapeProcess_Context >(m,"ShapeProcess_ShapeContext",R"#(Extends Context to handle shapes Contains map of shape-shape, and messages attached to shapesExtends Context to handle shapes Contains map of shape-shape, and messages attached to shapesExtends Context to handle shapes Contains map of shape-shape, and messages attached to shapes)#");

// pre-register typdefs
// ./opencascade/ShapeProcess_Context.hxx
// ./opencascade/ShapeProcess_OperFunc.hxx
// ./opencascade/ShapeProcess_OperLibrary.hxx
// ./opencascade/ShapeProcess_Operator.hxx
// ./opencascade/ShapeProcess_ShapeContext.hxx
// ./opencascade/ShapeProcess.hxx
// ./opencascade/ShapeProcess_UOperator.hxx

};

// user-defined post-inclusion per module

// user-defined post
