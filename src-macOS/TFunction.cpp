
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TFunction_Scope.hxx>
#include <TFunction_Logbook.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TFunction_Logbook.hxx>
#include <TFunction_Driver.hxx>
#include <TFunction_GraphNode.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>

// module includes
#include <TFunction_Array1OfDataMapOfGUIDDriver.hxx>
#include <TFunction_DataMapIteratorOfDataMapOfGUIDDriver.hxx>
#include <TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel.hxx>
#include <TFunction_DataMapOfGUIDDriver.hxx>
#include <TFunction_DataMapOfLabelListOfLabel.hxx>
#include <TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel.hxx>
#include <TFunction_DoubleMapOfIntegerLabel.hxx>
#include <TFunction_Driver.hxx>
#include <TFunction_DriverTable.hxx>
#include <TFunction_ExecutionStatus.hxx>
#include <TFunction_Function.hxx>
#include <TFunction_GraphNode.hxx>
#include <TFunction_HArray1OfDataMapOfGUIDDriver.hxx>
#include <TFunction_IFunction.hxx>
#include <TFunction_Iterator.hxx>
#include <TFunction_Logbook.hxx>
#include <TFunction_Scope.hxx>

// template related includes
// ./opencascade/TFunction_DataMapOfGUIDDriver.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DoubleMapOfIntegerLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DoubleMapOfIntegerLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_Array1OfDataMapOfGUIDDriver.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DataMapOfLabelListOfLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DataMapOfLabelListOfLabel.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TFunction(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TFunction"));


//Python trampoline classes
    class Py_TFunction_Driver : public TFunction_Driver{
    public:
        using TFunction_Driver::TFunction_Driver;


        // public pure virtual
        Standard_Integer Execute(opencascade::handle<TFunction_Logbook> & log) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,TFunction_Driver,Execute,log) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<TFunction_Driver ,opencascade::handle<TFunction_Driver>,Py_TFunction_Driver , Standard_Transient>>(m.attr("TFunction_Driver"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TDF_Label (TFunction_Driver::*)() const) static_cast<TDF_Label (TFunction_Driver::*)() const>(&TFunction_Driver::Label),
             R"#(Returns the label of the driver for this function.)#" )
        .def("Validate",
             (void (TFunction_Driver::*)( opencascade::handle<TFunction_Logbook> & ) const) static_cast<void (TFunction_Driver::*)( opencascade::handle<TFunction_Logbook> & ) const>(&TFunction_Driver::Validate),
             R"#(Validates labels of a function in <log>. This function is the one initialized in this function driver. Warning In regeneration mode, the solver must call this method even if the function is not executed. execution of function =====================)#"  , py::arg("log"))
        .def("MustExecute",
             (Standard_Boolean (TFunction_Driver::*)( const opencascade::handle<TFunction_Logbook> & ) const) static_cast<Standard_Boolean (TFunction_Driver::*)( const opencascade::handle<TFunction_Logbook> & ) const>(&TFunction_Driver::MustExecute),
             R"#(Analyzes the labels in the logbook log. Returns true if attributes have been modified. If the function label itself has been modified, the function must be executed.)#"  , py::arg("log"))
        .def("Execute",
             (Standard_Integer (TFunction_Driver::*)( opencascade::handle<TFunction_Logbook> & ) const) static_cast<Standard_Integer (TFunction_Driver::*)( opencascade::handle<TFunction_Logbook> & ) const>(&TFunction_Driver::Execute),
             R"#(Executes the function in this function driver and puts the impacted labels in the logbook log. arguments & results of functions ================================)#"  , py::arg("log"))
        .def("Arguments",
             (void (TFunction_Driver::*)( NCollection_List<TDF_Label> & ) const) static_cast<void (TFunction_Driver::*)( NCollection_List<TDF_Label> & ) const>(&TFunction_Driver::Arguments),
             R"#(The method fills-in the list by labels, where the arguments of the function are located.)#"  , py::arg("args"))
        .def("Results",
             (void (TFunction_Driver::*)( NCollection_List<TDF_Label> & ) const) static_cast<void (TFunction_Driver::*)( NCollection_List<TDF_Label> & ) const>(&TFunction_Driver::Results),
             R"#(The method fills-in the list by labels, where the results of the function are located.)#"  , py::arg("res"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_Driver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_Driver::*)() const>(&TFunction_Driver::DynamicType),
             R"#(None)#" )
        .def("Label",
             (TDF_Label (TFunction_Driver::*)() const) static_cast<TDF_Label (TFunction_Driver::*)() const>(&TFunction_Driver::Label),
             R"#(Returns the label of the driver for this function.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_Driver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_DriverTable ,opencascade::handle<TFunction_DriverTable> , Standard_Transient>>(m.attr("TFunction_DriverTable"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_DriverTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_DriverTable::*)() const>(&TFunction_DriverTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_DriverTable::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Function ,opencascade::handle<TFunction_Function> , TDF_Attribute>>(m.attr("TFunction_Function"))
    // constructors
    // custom constructors
    // methods
        .def("GetDriverGUID",
             (const Standard_GUID & (TFunction_Function::*)() const) static_cast<const Standard_GUID & (TFunction_Function::*)() const>(&TFunction_Function::GetDriverGUID),
             R"#(Returns the GUID for this function's driver.)#" )
        .def("Failed",
             (Standard_Boolean (TFunction_Function::*)() const) static_cast<Standard_Boolean (TFunction_Function::*)() const>(&TFunction_Function::Failed),
             R"#(Returns true if the execution failed)#" )
        .def("GetFailure",
             (Standard_Integer (TFunction_Function::*)() const) static_cast<Standard_Integer (TFunction_Function::*)() const>(&TFunction_Function::GetFailure),
             R"#(Returns an index of failure if the execution of this function failed. If this integer value is 0, no failure has occurred. Implementation of Attribute methods: ===================================)#" )
        .def("ID",
             (const Standard_GUID & (TFunction_Function::*)() const) static_cast<const Standard_GUID & (TFunction_Function::*)() const>(&TFunction_Function::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TFunction_Function::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TFunction_Function::*)( const opencascade::handle<TDF_Attribute> & ) >(&TFunction_Function::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("Paste",
             (void (TFunction_Function::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TFunction_Function::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TFunction_Function::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TFunction_Function::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TFunction_Function::*)() const>(&TFunction_Function::NewEmpty),
             R"#(None)#" )
        .def("References",
             (void (TFunction_Function::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TFunction_Function::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TFunction_Function::References),
             R"#(None)#"  , py::arg("aDataSet"))
        .def("Dump",
             (Standard_OStream & (TFunction_Function::*)( std::ostream & ) const) static_cast<Standard_OStream & (TFunction_Function::*)( std::ostream & ) const>(&TFunction_Function::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_Function::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_Function::*)() const>(&TFunction_Function::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_Function::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_GraphNode ,opencascade::handle<TFunction_GraphNode> , TDF_Attribute>>(m.attr("TFunction_GraphNode"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TFunction_GraphNode::*)() const) static_cast<const Standard_GUID & (TFunction_GraphNode::*)() const>(&TFunction_GraphNode::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TFunction_GraphNode::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TFunction_GraphNode::*)( const opencascade::handle<TDF_Attribute> & ) >(&TFunction_GraphNode::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("Paste",
             (void (TFunction_GraphNode::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TFunction_GraphNode::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TFunction_GraphNode::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TFunction_GraphNode::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TFunction_GraphNode::*)() const>(&TFunction_GraphNode::NewEmpty),
             R"#(None)#" )
        .def("References",
             (void (TFunction_GraphNode::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TFunction_GraphNode::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TFunction_GraphNode::References),
             R"#(None)#"  , py::arg("aDataSet"))
        .def("Dump",
             (Standard_OStream & (TFunction_GraphNode::*)( std::ostream & ) const) static_cast<Standard_OStream & (TFunction_GraphNode::*)( std::ostream & ) const>(&TFunction_GraphNode::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_GraphNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_GraphNode::*)() const>(&TFunction_GraphNode::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_GraphNode::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_HArray1OfDataMapOfGUIDDriver ,opencascade::handle<TFunction_HArray1OfDataMapOfGUIDDriver> , TFunction_Array1OfDataMapOfGUIDDriver, Standard_Transient>>(m.attr("TFunction_HArray1OfDataMapOfGUIDDriver"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_DataMap<Standard_GUID, opencascade::handle<TFunction_Driver>, Standard_GUID> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TFunction_DataMapOfGUIDDriver> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TFunction_Array1OfDataMapOfGUIDDriver & (TFunction_HArray1OfDataMapOfGUIDDriver::*)() const) static_cast<const TFunction_Array1OfDataMapOfGUIDDriver & (TFunction_HArray1OfDataMapOfGUIDDriver::*)() const>(&TFunction_HArray1OfDataMapOfGUIDDriver::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TFunction_Array1OfDataMapOfGUIDDriver & (TFunction_HArray1OfDataMapOfGUIDDriver::*)() ) static_cast<TFunction_Array1OfDataMapOfGUIDDriver & (TFunction_HArray1OfDataMapOfGUIDDriver::*)() >(&TFunction_HArray1OfDataMapOfGUIDDriver::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_HArray1OfDataMapOfGUIDDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_HArray1OfDataMapOfGUIDDriver::*)() const>(&TFunction_HArray1OfDataMapOfGUIDDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_HArray1OfDataMapOfGUIDDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TFunction_HArray1OfDataMapOfGUIDDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_IFunction , shared_ptr<TFunction_IFunction> >>(m.attr("TFunction_IFunction"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Iterator , shared_ptr<TFunction_Iterator> >>(m.attr("TFunction_Iterator"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (TFunction_Iterator::*)( const TDF_Label & ) ) static_cast<void (TFunction_Iterator::*)( const TDF_Label & ) >(&TFunction_Iterator::Init),
             R"#(Initializes the Iterator.)#"  , py::arg("Access"))
        .def("GetMaxNbThreads",
             (Standard_Integer (TFunction_Iterator::*)() const) static_cast<Standard_Integer (TFunction_Iterator::*)() const>(&TFunction_Iterator::GetMaxNbThreads),
             R"#(Analyses the graph of dependencies and returns maximum number of threads may be used to calculate the model.)#" )
        .def("Current",
             (const TDF_LabelList & (TFunction_Iterator::*)() const) static_cast<const TDF_LabelList & (TFunction_Iterator::*)() const>(&TFunction_Iterator::Current),
             R"#(Returns the current list of functions. If the iterator uses the execution status, the returned list contains only the functions with "not executed" status.)#" )
        .def("More",
             (Standard_Boolean (TFunction_Iterator::*)() const) static_cast<Standard_Boolean (TFunction_Iterator::*)() const>(&TFunction_Iterator::More),
             R"#(Returns false if the graph of functions is fully iterated.)#" )
        .def("Next",
             (void (TFunction_Iterator::*)() ) static_cast<void (TFunction_Iterator::*)() >(&TFunction_Iterator::Next),
             R"#(Switches the iterator to the next list of current functions.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Logbook ,opencascade::handle<TFunction_Logbook> , TDF_Attribute>>(m.attr("TFunction_Logbook"))
    // constructors
    // custom constructors
    // methods
        .def("SetTouched",
             (void (TFunction_Logbook::*)( const TDF_Label & ) ) static_cast<void (TFunction_Logbook::*)( const TDF_Label & ) >(&TFunction_Logbook::SetTouched),
             R"#(Sets the label L as a touched label in this logbook. In other words, L is understood to have been modified by the end user.)#"  , py::arg("L"))
        .def("GetTouched",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetTouched),
             R"#(Returns the map of touched labels in this logbook. A touched label is the one modified by the end user.)#" )
        .def("GetImpacted",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetImpacted),
             R"#(Returns the map of impacted labels contained in this logbook.)#" )
        .def("GetValid",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetValid),
             R"#(Returns the map of valid labels in this logbook.)#" )
        .def("Done",
             (void (TFunction_Logbook::*)( const Standard_Boolean ) ) static_cast<void (TFunction_Logbook::*)( const Standard_Boolean ) >(&TFunction_Logbook::Done),
             R"#(Sets status of execution.)#"  , py::arg("status"))
        .def("IsDone",
             (Standard_Boolean (TFunction_Logbook::*)() const) static_cast<Standard_Boolean (TFunction_Logbook::*)() const>(&TFunction_Logbook::IsDone),
             R"#(Returns status of execution.)#" )
        .def("ID",
             (const Standard_GUID & (TFunction_Logbook::*)() const) static_cast<const Standard_GUID & (TFunction_Logbook::*)() const>(&TFunction_Logbook::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("Restore",
             (void (TFunction_Logbook::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TFunction_Logbook::*)( const opencascade::handle<TDF_Attribute> & ) >(&TFunction_Logbook::Restore),
             R"#(Undos (and redos) the attribute.)#"  , py::arg("with"))
        .def("Paste",
             (void (TFunction_Logbook::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TFunction_Logbook::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TFunction_Logbook::Paste),
             R"#(Pastes the attribute to another label.)#"  , py::arg("into"),  py::arg("RT"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TFunction_Logbook::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TFunction_Logbook::*)() const>(&TFunction_Logbook::NewEmpty),
             R"#(Returns a new empty instance of the attribute.)#" )
        .def("Dump",
             (Standard_OStream & (TFunction_Logbook::*)( std::ostream & ) const) static_cast<Standard_OStream & (TFunction_Logbook::*)( std::ostream & ) const>(&TFunction_Logbook::Dump),
             R"#(Prints th data of the attributes (touched, impacted and valid labels).)#"  , py::arg("anOS"))
        .def("SetTouched",
             (void (TFunction_Logbook::*)( const TDF_Label & ) ) static_cast<void (TFunction_Logbook::*)( const TDF_Label & ) >(&TFunction_Logbook::SetTouched),
             R"#(Sets the label L as a touched label in this logbook. In other words, L is understood to have been modified by the end user.)#"  , py::arg("L"))
        .def("GetTouched",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetTouched),
             R"#(Returns the map of touched labels in this logbook. A touched label is the one modified by the end user.)#" )
        .def("GetImpacted",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetImpacted),
             R"#(Returns the map of impacted labels contained in this logbook.)#" )
        .def("GetValid",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetValid),
             R"#(Returns the map of valid labels in this logbook.)#" )
        .def("Done",
             (void (TFunction_Logbook::*)( const Standard_Boolean ) ) static_cast<void (TFunction_Logbook::*)( const Standard_Boolean ) >(&TFunction_Logbook::Done),
             R"#(Sets status of execution.)#"  , py::arg("status"))
        .def("IsDone",
             (Standard_Boolean (TFunction_Logbook::*)() const) static_cast<Standard_Boolean (TFunction_Logbook::*)() const>(&TFunction_Logbook::IsDone),
             R"#(Returns status of execution.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Scope ,opencascade::handle<TFunction_Scope> , TDF_Attribute>>(m.attr("TFunction_Scope"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TFunction_Scope::*)() const) static_cast<const Standard_GUID & (TFunction_Scope::*)() const>(&TFunction_Scope::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TFunction_Scope::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TFunction_Scope::*)( const opencascade::handle<TDF_Attribute> & ) >(&TFunction_Scope::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("Paste",
             (void (TFunction_Scope::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TFunction_Scope::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TFunction_Scope::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TFunction_Scope::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TFunction_Scope::*)() const>(&TFunction_Scope::NewEmpty),
             R"#(None)#" )
        .def("Dump",
             (Standard_OStream & (TFunction_Scope::*)( std::ostream & ) const) static_cast<Standard_OStream & (TFunction_Scope::*)( std::ostream & ) const>(&TFunction_Scope::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_Scope::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_Scope::*)() const>(&TFunction_Scope::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_Scope::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TFunction_Scope.hxx
// ./opencascade/TFunction_DataMapOfGUIDDriver.hxx
// ./opencascade/TFunction_DoubleMapOfIntegerLabel.hxx
// ./opencascade/TFunction_Array1OfDataMapOfGUIDDriver.hxx
// ./opencascade/TFunction_DriverTable.hxx
// ./opencascade/TFunction_ExecutionStatus.hxx
// ./opencascade/TFunction_Iterator.hxx
// ./opencascade/TFunction_Driver.hxx
// ./opencascade/TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel.hxx
// ./opencascade/TFunction_DataMapOfLabelListOfLabel.hxx
// ./opencascade/TFunction_GraphNode.hxx
// ./opencascade/TFunction_HArray1OfDataMapOfGUIDDriver.hxx
// ./opencascade/TFunction_Function.hxx
// ./opencascade/TFunction_IFunction.hxx
// ./opencascade/TFunction_Logbook.hxx
// ./opencascade/TFunction_DataMapIteratorOfDataMapOfGUIDDriver.hxx
// ./opencascade/TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DoubleMap<Standard_Integer, TDF_Label, TColStd_MapIntegerHasher, TDF_LabelMapHasher>(m,"TFunction_DoubleMapOfIntegerLabel");
    register_template_NCollection_Array1<TFunction_DataMapOfGUIDDriver>(m,"TFunction_Array1OfDataMapOfGUIDDriver");
    register_template_NCollection_DataMap<TDF_Label, TDF_LabelList, TDF_LabelMapHasher>(m,"TFunction_DataMapOfLabelListOfLabel");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
