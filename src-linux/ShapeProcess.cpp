
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Resource_Manager.hxx>
#include <Message_Messenger.hxx>
#include <Message_ProgressIndicator.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <BRepTools_Modifier.hxx>
#include <Message_Msg.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_UOperator.hxx>
#include <ShapeProcess_OperLibrary.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <BRepTools_Modification.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>

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
        .def_static("RegisterOperator_s",
                    (Standard_Boolean (*)( const Standard_CString , const opencascade::handle<ShapeProcess_Operator> & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const opencascade::handle<ShapeProcess_Operator> & ) >(&ShapeProcess::RegisterOperator),
                    R"#(Registers operator to make it visible for Performer)#"  , py::arg("name"),  py::arg("op"))
        .def_static("FindOperator_s",
                    (Standard_Boolean (*)( const Standard_CString , opencascade::handle<ShapeProcess_Operator> & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , opencascade::handle<ShapeProcess_Operator> & ) >(&ShapeProcess::FindOperator),
                    R"#(Finds operator by its name)#"  , py::arg("name"),  py::arg("op"))
        .def_static("Perform_s",
                    (Standard_Boolean (*)( const opencascade::handle<ShapeProcess_Context> & , const Standard_CString ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<ShapeProcess_Context> & , const Standard_CString ) >(&ShapeProcess::Perform),
                    R"#(Performs a specified sequence of operators on Context Resource file and other data should be already loaded to Context (including description of sequence seq))#"  , py::arg("context"),  py::arg("seq"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeProcess_Context ,opencascade::handle<ShapeProcess_Context> , Standard_Transient>>(m.attr("ShapeProcess_Context"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString,const Standard_CString >()  , py::arg("file"),  py::arg("scope")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("Init",
             (Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , const Standard_CString ) ) static_cast<Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , const Standard_CString ) >(&ShapeProcess_Context::Init),
             R"#(Initialises a tool by loading resource file and (if specified) sets starting scope Returns False if resource file not found)#"  , py::arg("file"),  py::arg("scope")=static_cast<const Standard_CString>(""))
        .def("LoadResourceManager",
             (opencascade::handle<Resource_Manager> (ShapeProcess_Context::*)( const Standard_CString ) ) static_cast<opencascade::handle<Resource_Manager> (ShapeProcess_Context::*)( const Standard_CString ) >(&ShapeProcess_Context::LoadResourceManager),
             R"#(Loading Resource_Manager object if this object not equal internal static Resource_Manager object or internal static Resource_Manager object is null)#"  , py::arg("file"))
        .def("ResourceManager",
             (const opencascade::handle<Resource_Manager> & (ShapeProcess_Context::*)() const) static_cast<const opencascade::handle<Resource_Manager> & (ShapeProcess_Context::*)() const>(&ShapeProcess_Context::ResourceManager),
             R"#(Returns internal Resource_Manager object)#" )
        .def("SetScope",
             (void (ShapeProcess_Context::*)( const Standard_CString ) ) static_cast<void (ShapeProcess_Context::*)( const Standard_CString ) >(&ShapeProcess_Context::SetScope),
             R"#(Set a new (sub)scope)#"  , py::arg("scope"))
        .def("UnSetScope",
             (void (ShapeProcess_Context::*)() ) static_cast<void (ShapeProcess_Context::*)() >(&ShapeProcess_Context::UnSetScope),
             R"#(Go out of current scope)#" )
        .def("IsParamSet",
             (Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString ) const) static_cast<Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString ) const>(&ShapeProcess_Context::IsParamSet),
             R"#(Returns True if parameter is defined in the resource file)#"  , py::arg("param"))
        .def("GetReal",
             (Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , Standard_Real & ) const) static_cast<Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , Standard_Real & ) const>(&ShapeProcess_Context::GetReal),
             R"#(None)#"  , py::arg("param"),  py::arg("val"))
        .def("GetInteger",
             (Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , Standard_Integer & ) const) static_cast<Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , Standard_Integer & ) const>(&ShapeProcess_Context::GetInteger),
             R"#(None)#"  , py::arg("param"),  py::arg("val"))
        .def("GetBoolean",
             (Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , Standard_Boolean & ) const) static_cast<Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , Standard_Boolean & ) const>(&ShapeProcess_Context::GetBoolean),
             R"#(None)#"  , py::arg("param"),  py::arg("val"))
        .def("GetString",
             (Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , TCollection_AsciiString & ) const) static_cast<Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , TCollection_AsciiString & ) const>(&ShapeProcess_Context::GetString),
             R"#(Get value of parameter as being of specific type Returns False if parameter is not defined or has a wrong type)#"  , py::arg("param"),  py::arg("val"))
        .def("RealVal",
             (Standard_Real (ShapeProcess_Context::*)( const Standard_CString , const Standard_Real ) const) static_cast<Standard_Real (ShapeProcess_Context::*)( const Standard_CString , const Standard_Real ) const>(&ShapeProcess_Context::RealVal),
             R"#(None)#"  , py::arg("param"),  py::arg("def"))
        .def("IntegerVal",
             (Standard_Integer (ShapeProcess_Context::*)( const Standard_CString , const Standard_Integer ) const) static_cast<Standard_Integer (ShapeProcess_Context::*)( const Standard_CString , const Standard_Integer ) const>(&ShapeProcess_Context::IntegerVal),
             R"#(None)#"  , py::arg("param"),  py::arg("def"))
        .def("BooleanVal",
             (Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , const Standard_Boolean ) const) static_cast<Standard_Boolean (ShapeProcess_Context::*)( const Standard_CString , const Standard_Boolean ) const>(&ShapeProcess_Context::BooleanVal),
             R"#(None)#"  , py::arg("param"),  py::arg("def"))
        .def("StringVal",
             (Standard_CString (ShapeProcess_Context::*)( const Standard_CString , const Standard_CString ) const) static_cast<Standard_CString (ShapeProcess_Context::*)( const Standard_CString , const Standard_CString ) const>(&ShapeProcess_Context::StringVal),
             R"#(Get value of parameter as being of specific type If parameter is not defined or does not have expected type, returns default value as specified)#"  , py::arg("param"),  py::arg("def"))
        .def("SetMessenger",
             (void (ShapeProcess_Context::*)( const opencascade::handle<Message_Messenger> & ) ) static_cast<void (ShapeProcess_Context::*)( const opencascade::handle<Message_Messenger> & ) >(&ShapeProcess_Context::SetMessenger),
             R"#(Sets Messenger used for outputting messages.)#"  , py::arg("messenger"))
        .def("Messenger",
             (opencascade::handle<Message_Messenger> (ShapeProcess_Context::*)() const) static_cast<opencascade::handle<Message_Messenger> (ShapeProcess_Context::*)() const>(&ShapeProcess_Context::Messenger),
             R"#(Returns Messenger used for outputting messages.)#" )
        .def("SetProgress",
             (void (ShapeProcess_Context::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<void (ShapeProcess_Context::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&ShapeProcess_Context::SetProgress),
             R"#(Sets Progress Indicator.)#"  , py::arg("theProgress"))
        .def("Progress",
             (opencascade::handle<Message_ProgressIndicator> (ShapeProcess_Context::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (ShapeProcess_Context::*)() const>(&ShapeProcess_Context::Progress),
             R"#(Returns Progress Indicator.)#" )
        .def("SetTraceLevel",
             (void (ShapeProcess_Context::*)( const Standard_Integer ) ) static_cast<void (ShapeProcess_Context::*)( const Standard_Integer ) >(&ShapeProcess_Context::SetTraceLevel),
             R"#(Sets trace level used for outputting messages - 0: no trace at all - 1: errors - 2: errors and warnings - 3: all messages Default is 1 : Errors traced)#"  , py::arg("tracelev"))
        .def("TraceLevel",
             (Standard_Integer (ShapeProcess_Context::*)() const) static_cast<Standard_Integer (ShapeProcess_Context::*)() const>(&ShapeProcess_Context::TraceLevel),
             R"#(Returns trace level used for outputting messages.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeProcess_Context::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeProcess_Context::*)() const>(&ShapeProcess_Context::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeProcess_Context::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeProcess_Context::get_type_descriptor),
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
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&ShapeProcess_OperLibrary::Init),
                    R"#(Registers all the operators)#" )
        .def_static("ApplyModifier_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & , const opencascade::handle<ShapeProcess_ShapeContext> & , const opencascade::handle<BRepTools_Modification> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<ShapeExtend_MsgRegistrator> & , Standard_Boolean ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & , const opencascade::handle<ShapeProcess_ShapeContext> & , const opencascade::handle<BRepTools_Modification> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<ShapeExtend_MsgRegistrator> & , Standard_Boolean ) >(&ShapeProcess_OperLibrary::ApplyModifier),
                    R"#(Applies BRepTools_Modification to a shape, taking into account sharing of components of compounds. if theMutableInput vat is set to true then imput shape S can be modified during the modification process.)#"  , py::arg("S"),  py::arg("context"),  py::arg("M"),  py::arg("map"),  py::arg("msg")=static_cast<const opencascade::handle<ShapeExtend_MsgRegistrator> &>(0),  py::arg("theMutableInput")=static_cast<Standard_Boolean>(Standard_False))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeProcess_Operator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeProcess_ShapeContext ,opencascade::handle<ShapeProcess_ShapeContext> , ShapeProcess_Context>>(m.attr("ShapeProcess_ShapeContext"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_CString >()  , py::arg("file"),  py::arg("seq")=static_cast<const Standard_CString>("") )
        .def(py::init< const TopoDS_Shape &,const Standard_CString,const Standard_CString >()  , py::arg("S"),  py::arg("file"),  py::arg("seq")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & ) ) static_cast<void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & ) >(&ShapeProcess_ShapeContext::Init),
             R"#(Initializes tool by a new shape and clears all results)#"  , py::arg("S"))
        .def("Shape",
             (const TopoDS_Shape & (ShapeProcess_ShapeContext::*)() const) static_cast<const TopoDS_Shape & (ShapeProcess_ShapeContext::*)() const>(&ShapeProcess_ShapeContext::Shape),
             R"#(Returns shape being processed)#" )
        .def("Result",
             (const TopoDS_Shape & (ShapeProcess_ShapeContext::*)() const) static_cast<const TopoDS_Shape & (ShapeProcess_ShapeContext::*)() const>(&ShapeProcess_ShapeContext::Result),
             R"#(Returns current result)#" )
        .def("Map",
             (const TopTools_DataMapOfShapeShape & (ShapeProcess_ShapeContext::*)() const) static_cast<const TopTools_DataMapOfShapeShape & (ShapeProcess_ShapeContext::*)() const>(&ShapeProcess_ShapeContext::Map),
             R"#(Returns map of replacements shape -> shape This map is not recursive)#" )
        .def("Messages",
             (const opencascade::handle<ShapeExtend_MsgRegistrator> & (ShapeProcess_ShapeContext::*)() const) static_cast<const opencascade::handle<ShapeExtend_MsgRegistrator> & (ShapeProcess_ShapeContext::*)() const>(&ShapeProcess_ShapeContext::Messages),
             R"#(None)#" )
        .def("Messages",
             (opencascade::handle<ShapeExtend_MsgRegistrator> & (ShapeProcess_ShapeContext::*)() ) static_cast<opencascade::handle<ShapeExtend_MsgRegistrator> & (ShapeProcess_ShapeContext::*)() >(&ShapeProcess_ShapeContext::Messages),
             R"#(Returns messages recorded during shape processing It can be nullified before processing in order to avoid recording messages)#" )
        .def("SetDetalisation",
             (void (ShapeProcess_ShapeContext::*)( const TopAbs_ShapeEnum ) ) static_cast<void (ShapeProcess_ShapeContext::*)( const TopAbs_ShapeEnum ) >(&ShapeProcess_ShapeContext::SetDetalisation),
             R"#(None)#"  , py::arg("level"))
        .def("GetDetalisation",
             (TopAbs_ShapeEnum (ShapeProcess_ShapeContext::*)() const) static_cast<TopAbs_ShapeEnum (ShapeProcess_ShapeContext::*)() const>(&ShapeProcess_ShapeContext::GetDetalisation),
             R"#(Set and get value for detalisation level Only shapes of types from TopoDS_COMPOUND and until specified detalisation level will be recorded in maps To cancel mapping, use TopAbs_SHAPE To force full mapping, use TopAbs_VERTEX The default level is TopAbs_FACE)#" )
        .def("SetResult",
             (void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & ) ) static_cast<void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & ) >(&ShapeProcess_ShapeContext::SetResult),
             R"#(Sets a new result shape NOTE: this method should be used very carefully to keep consistency of modifications It is recommended to use RecordModification() methods with explicit definition of mapping from current result to a new one)#"  , py::arg("S"))
        .def("RecordModification",
             (void (ShapeProcess_ShapeContext::*)(  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<ShapeExtend_MsgRegistrator> & ) ) static_cast<void (ShapeProcess_ShapeContext::*)(  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<ShapeExtend_MsgRegistrator> & ) >(&ShapeProcess_ShapeContext::RecordModification),
             R"#(None)#"  , py::arg("repl"),  py::arg("msg")=static_cast<const opencascade::handle<ShapeExtend_MsgRegistrator> &>(0))
        .def("RecordModification",
             (void (ShapeProcess_ShapeContext::*)( const opencascade::handle<ShapeBuild_ReShape> & , const opencascade::handle<ShapeExtend_MsgRegistrator> & ) ) static_cast<void (ShapeProcess_ShapeContext::*)( const opencascade::handle<ShapeBuild_ReShape> & , const opencascade::handle<ShapeExtend_MsgRegistrator> & ) >(&ShapeProcess_ShapeContext::RecordModification),
             R"#(None)#"  , py::arg("repl"),  py::arg("msg"))
        .def("RecordModification",
             (void (ShapeProcess_ShapeContext::*)( const opencascade::handle<ShapeBuild_ReShape> & ) ) static_cast<void (ShapeProcess_ShapeContext::*)( const opencascade::handle<ShapeBuild_ReShape> & ) >(&ShapeProcess_ShapeContext::RecordModification),
             R"#(None)#"  , py::arg("repl"))
        .def("RecordModification",
             (void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & , const BRepTools_Modifier & , const opencascade::handle<ShapeExtend_MsgRegistrator> & ) ) static_cast<void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & , const BRepTools_Modifier & , const opencascade::handle<ShapeExtend_MsgRegistrator> & ) >(&ShapeProcess_ShapeContext::RecordModification),
             R"#(Records modifications and resets result accordingly NOTE: modification of resulting shape should be explicitly defined in the maps along with modifications of subshapes)#"  , py::arg("sh"),  py::arg("repl"),  py::arg("msg")=static_cast<const opencascade::handle<ShapeExtend_MsgRegistrator> &>(0))
        .def("AddMessage",
             (void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) ) static_cast<void (ShapeProcess_ShapeContext::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) >(&ShapeProcess_ShapeContext::AddMessage),
             R"#(Record a message for shape S Shape S should be one of subshapes of original shape (or whole one), but not one of intermediate shapes Records only if Message() is not Null)#"  , py::arg("S"),  py::arg("msg"),  py::arg("gravity")=static_cast<const Message_Gravity>(Message_Warning))
        .def("GetContinuity",
             (Standard_Boolean (ShapeProcess_ShapeContext::*)( const Standard_CString , GeomAbs_Shape & ) const) static_cast<Standard_Boolean (ShapeProcess_ShapeContext::*)( const Standard_CString , GeomAbs_Shape & ) const>(&ShapeProcess_ShapeContext::GetContinuity),
             R"#(Get value of parameter as being of the type GeomAbs_Shape Returns False if parameter is not defined or has a wrong type)#"  , py::arg("param"),  py::arg("val"))
        .def("ContinuityVal",
             (GeomAbs_Shape (ShapeProcess_ShapeContext::*)( const Standard_CString , const GeomAbs_Shape ) const) static_cast<GeomAbs_Shape (ShapeProcess_ShapeContext::*)( const Standard_CString , const GeomAbs_Shape ) const>(&ShapeProcess_ShapeContext::ContinuityVal),
             R"#(Get value of parameter as being of the type GeomAbs_Shape If parameter is not defined or does not have expected type, returns default value as specified)#"  , py::arg("param"),  py::arg("def"))
        .def("PrintStatistics",
             (void (ShapeProcess_ShapeContext::*)() const) static_cast<void (ShapeProcess_ShapeContext::*)() const>(&ShapeProcess_ShapeContext::PrintStatistics),
             R"#(Prints statistics on Shape Processing onto the current Messenger.)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeProcess_ShapeContext::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeProcess_UOperator ,opencascade::handle<ShapeProcess_UOperator> , ShapeProcess_Operator>>(m.attr("ShapeProcess_UOperator"))
    // constructors
        .def(py::init< const ShapeProcess_OperFunc >()  , py::arg("func") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeProcess_UOperator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeProcess_Context.hxx
// ./opencascade/ShapeProcess_ShapeContext.hxx
// ./opencascade/ShapeProcess_UOperator.hxx
// ./opencascade/ShapeProcess_Operator.hxx
// ./opencascade/ShapeProcess_OperFunc.hxx
// ./opencascade/ShapeProcess.hxx
// ./opencascade/ShapeProcess_OperLibrary.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
