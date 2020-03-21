
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TFunction_Logbook.hxx>
#include <Standard_GUID.hxx>
#include <TFunction_Logbook.hxx>
#include <TFunction_Driver.hxx>
#include <TFunction_GraphNode.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TFunction_Scope.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>

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
// ./opencascade\TFunction_DataMapOfGUIDDriver.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TFunction_Array1OfDataMapOfGUIDDriver.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TFunction_DataMapOfLabelListOfLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TFunction_DataMapOfLabelListOfLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TFunction_DoubleMapOfIntegerLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TFunction_DoubleMapOfIntegerLabel.hxx
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
        .def("Init",
             (void (TFunction_Driver::*)( const TDF_Label & ) ) static_cast<void (TFunction_Driver::*)( const TDF_Label & ) >(&TFunction_Driver::Init),
             R"#(Initializes the label L for this function prior to its execution.)#"  , py::arg("L"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TFunction_Driver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_DriverTable ,opencascade::handle<TFunction_DriverTable> , Standard_Transient>>(m.attr("TFunction_DriverTable"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddDriver",
             (Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , const opencascade::handle<TFunction_Driver> & , const Standard_Integer ) ) static_cast<Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , const opencascade::handle<TFunction_Driver> & , const Standard_Integer ) >(&TFunction_DriverTable::AddDriver),
             R"#(Returns true if the driver has been added successfully to the driver table.)#"  , py::arg("guid"),  py::arg("driver"),  py::arg("thread")=static_cast<const Standard_Integer>(0))
        .def("HasDriver",
             (Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , const Standard_Integer ) const) static_cast<Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , const Standard_Integer ) const>(&TFunction_DriverTable::HasDriver),
             R"#(Returns true if the driver exists in the driver table.)#"  , py::arg("guid"),  py::arg("thread")=static_cast<const Standard_Integer>(0))
        .def("FindDriver",
             (Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , opencascade::handle<TFunction_Driver> & , const Standard_Integer ) const) static_cast<Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , opencascade::handle<TFunction_Driver> & , const Standard_Integer ) const>(&TFunction_DriverTable::FindDriver),
             R"#(Returns true if the driver was found.)#"  , py::arg("guid"),  py::arg("driver"),  py::arg("thread")=static_cast<const Standard_Integer>(0))
        .def("Dump",
             (Standard_OStream & (TFunction_DriverTable::*)( std::ostream & ) const) static_cast<Standard_OStream & (TFunction_DriverTable::*)( std::ostream & ) const>(&TFunction_DriverTable::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("RemoveDriver",
             (Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , const Standard_Integer ) ) static_cast<Standard_Boolean (TFunction_DriverTable::*)( const Standard_GUID & , const Standard_Integer ) >(&TFunction_DriverTable::RemoveDriver),
             R"#(Removes a driver with the given GUID. Returns true if the driver has been removed successfully.)#"  , py::arg("guid"),  py::arg("thread")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (TFunction_DriverTable::*)() ) static_cast<void (TFunction_DriverTable::*)() >(&TFunction_DriverTable::Clear),
             R"#(Removes all drivers. Returns true if the driver has been removed successfully.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_DriverTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_DriverTable::*)() const>(&TFunction_DriverTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Get_s",
                    (opencascade::handle<TFunction_DriverTable> (*)() ) static_cast<opencascade::handle<TFunction_DriverTable> (*)() >(&TFunction_DriverTable::Get),
                    R"#(Returns the driver table. If a driver does not exist, creates it.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_DriverTable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TFunction_DriverTable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Function ,opencascade::handle<TFunction_Function> , TDF_Attribute>>(m.attr("TFunction_Function"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetDriverGUID",
             (const Standard_GUID & (TFunction_Function::*)() const) static_cast<const Standard_GUID & (TFunction_Function::*)() const>(&TFunction_Function::GetDriverGUID),
             R"#(Returns the GUID for this function's driver.)#" )
        .def("SetDriverGUID",
             (void (TFunction_Function::*)( const Standard_GUID & ) ) static_cast<void (TFunction_Function::*)( const Standard_GUID & ) >(&TFunction_Function::SetDriverGUID),
             R"#(Sets the driver for this function as that indentified by the GUID guid.)#"  , py::arg("guid"))
        .def("Failed",
             (Standard_Boolean (TFunction_Function::*)() const) static_cast<Standard_Boolean (TFunction_Function::*)() const>(&TFunction_Function::Failed),
             R"#(Returns true if the execution failed)#" )
        .def("SetFailure",
             (void (TFunction_Function::*)( const Standard_Integer ) ) static_cast<void (TFunction_Function::*)( const Standard_Integer ) >(&TFunction_Function::SetFailure),
             R"#(Sets the failed index.)#"  , py::arg("mode")=static_cast<const Standard_Integer>(0))
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
        .def_static("Set_s",
                    (opencascade::handle<TFunction_Function> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TFunction_Function> (*)( const TDF_Label & ) >(&TFunction_Function::Set),
                    R"#(Static methods: ============== Finds or Creates a function attribute on the label <L>. Returns the function attribute.)#"  , py::arg("L"))
        .def_static("Set_s",
                    (opencascade::handle<TFunction_Function> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TFunction_Function> (*)( const TDF_Label & , const Standard_GUID & ) >(&TFunction_Function::Set),
                    R"#(Finds or Creates a function attribute on the label <L>. Sets a driver ID to the function. Returns the function attribute.)#"  , py::arg("L"),  py::arg("DriverID"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TFunction_Function::GetID),
                    R"#(Returns the GUID for functions. Returns a function found on the label. Instance methods: ================)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_Function::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TFunction_Function::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_GraphNode ,opencascade::handle<TFunction_GraphNode> , TDF_Attribute>>(m.attr("TFunction_GraphNode"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddPrevious",
             (Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) >(&TFunction_GraphNode::AddPrevious),
             R"#(Defines a reference to the function as a previous one.)#"  , py::arg("funcID"))
        .def("AddPrevious",
             (Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) >(&TFunction_GraphNode::AddPrevious),
             R"#(Defines a reference to the function as a previous one.)#"  , py::arg("func"))
        .def("RemovePrevious",
             (Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) >(&TFunction_GraphNode::RemovePrevious),
             R"#(Removes a reference to the function as a previous one.)#"  , py::arg("funcID"))
        .def("RemovePrevious",
             (Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) >(&TFunction_GraphNode::RemovePrevious),
             R"#(Removes a reference to the function as a previous one.)#"  , py::arg("func"))
        .def("GetPrevious",
             (const TColStd_MapOfInteger & (TFunction_GraphNode::*)() const) static_cast<const TColStd_MapOfInteger & (TFunction_GraphNode::*)() const>(&TFunction_GraphNode::GetPrevious),
             R"#(Returns a map of previous functions.)#" )
        .def("RemoveAllPrevious",
             (void (TFunction_GraphNode::*)() ) static_cast<void (TFunction_GraphNode::*)() >(&TFunction_GraphNode::RemoveAllPrevious),
             R"#(Clears a map of previous functions.)#" )
        .def("AddNext",
             (Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) >(&TFunction_GraphNode::AddNext),
             R"#(Defines a reference to the function as a next one.)#"  , py::arg("funcID"))
        .def("AddNext",
             (Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) >(&TFunction_GraphNode::AddNext),
             R"#(Defines a reference to the function as a next one.)#"  , py::arg("func"))
        .def("RemoveNext",
             (Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const Standard_Integer ) >(&TFunction_GraphNode::RemoveNext),
             R"#(Removes a reference to the function as a next one.)#"  , py::arg("funcID"))
        .def("RemoveNext",
             (Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TFunction_GraphNode::*)( const TDF_Label & ) >(&TFunction_GraphNode::RemoveNext),
             R"#(Removes a reference to the function as a next one.)#"  , py::arg("func"))
        .def("GetNext",
             (const TColStd_MapOfInteger & (TFunction_GraphNode::*)() const) static_cast<const TColStd_MapOfInteger & (TFunction_GraphNode::*)() const>(&TFunction_GraphNode::GetNext),
             R"#(Returns a map of next functions.)#" )
        .def("RemoveAllNext",
             (void (TFunction_GraphNode::*)() ) static_cast<void (TFunction_GraphNode::*)() >(&TFunction_GraphNode::RemoveAllNext),
             R"#(Clears a map of next functions.)#" )
        .def("GetStatus",
             (TFunction_ExecutionStatus (TFunction_GraphNode::*)() const) static_cast<TFunction_ExecutionStatus (TFunction_GraphNode::*)() const>(&TFunction_GraphNode::GetStatus),
             R"#(Returns the execution status of the function.)#" )
        .def("SetStatus",
             (void (TFunction_GraphNode::*)( const TFunction_ExecutionStatus ) ) static_cast<void (TFunction_GraphNode::*)( const TFunction_ExecutionStatus ) >(&TFunction_GraphNode::SetStatus),
             R"#(Defines an execution status for a function. Implementation of Attribute methods ===================================)#"  , py::arg("status"))
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
        .def_static("Set_s",
                    (opencascade::handle<TFunction_GraphNode> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TFunction_GraphNode> (*)( const TDF_Label & ) >(&TFunction_GraphNode::Set),
                    R"#(Static methods ============== Finds or Creates a graph node attribute at the label <L>. Returns the attribute.)#"  , py::arg("L"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TFunction_GraphNode::GetID),
                    R"#(Returns the GUID for GraphNode attribute. Instant methods =============== Constructor (empty).)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_GraphNode::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TFunction_GraphNode::get_type_descriptor),
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
        .def(py::init<  >()  )
        .def(py::init< const TDF_Label & >()  , py::arg("L") )
    // custom constructors
    // methods
        .def("Init",
             (void (TFunction_IFunction::*)( const TDF_Label & ) ) static_cast<void (TFunction_IFunction::*)( const TDF_Label & ) >(&TFunction_IFunction::Init),
             R"#(Initializes the interface by the label of function.)#"  , py::arg("L"))
        .def("Label",
             (const TDF_Label & (TFunction_IFunction::*)() const) static_cast<const TDF_Label & (TFunction_IFunction::*)() const>(&TFunction_IFunction::Label),
             R"#(Returns a label of the function.)#" )
        .def("UpdateDependencies",
             (Standard_Boolean (TFunction_IFunction::*)() const) static_cast<Standard_Boolean (TFunction_IFunction::*)() const>(&TFunction_IFunction::UpdateDependencies),
             R"#(Updates the dependencies of this function only.)#" )
        .def("Arguments",
             (void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const) static_cast<void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const>(&TFunction_IFunction::Arguments),
             R"#(The method fills-in the list by labels, where the arguments of the function are located.)#"  , py::arg("args"))
        .def("Results",
             (void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const) static_cast<void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const>(&TFunction_IFunction::Results),
             R"#(The method fills-in the list by labels, where the results of the function are located.)#"  , py::arg("res"))
        .def("GetPrevious",
             (void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const) static_cast<void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const>(&TFunction_IFunction::GetPrevious),
             R"#(Returns a list of previous functions.)#"  , py::arg("prev"))
        .def("GetNext",
             (void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const) static_cast<void (TFunction_IFunction::*)( NCollection_List<TDF_Label> & ) const>(&TFunction_IFunction::GetNext),
             R"#(Returns a list of next functions.)#"  , py::arg("prev"))
        .def("GetStatus",
             (TFunction_ExecutionStatus (TFunction_IFunction::*)() const) static_cast<TFunction_ExecutionStatus (TFunction_IFunction::*)() const>(&TFunction_IFunction::GetStatus),
             R"#(Returns the execution status of the function.)#" )
        .def("SetStatus",
             (void (TFunction_IFunction::*)( const TFunction_ExecutionStatus ) const) static_cast<void (TFunction_IFunction::*)( const TFunction_ExecutionStatus ) const>(&TFunction_IFunction::SetStatus),
             R"#(Defines an execution status for a function.)#"  , py::arg("status"))
        .def("GetAllFunctions",
             (const TFunction_DoubleMapOfIntegerLabel & (TFunction_IFunction::*)() const) static_cast<const TFunction_DoubleMapOfIntegerLabel & (TFunction_IFunction::*)() const>(&TFunction_IFunction::GetAllFunctions),
             R"#(Returns the scope of all functions.)#" )
        .def("GetLogbook",
             (opencascade::handle<TFunction_Logbook> (TFunction_IFunction::*)() const) static_cast<opencascade::handle<TFunction_Logbook> (TFunction_IFunction::*)() const>(&TFunction_IFunction::GetLogbook),
             R"#(Returns the Logbook - keeper of modifications.)#" )
        .def("GetDriver",
             (opencascade::handle<TFunction_Driver> (TFunction_IFunction::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TFunction_Driver> (TFunction_IFunction::*)( const Standard_Integer ) const>(&TFunction_IFunction::GetDriver),
             R"#(Returns a driver of the function.)#"  , py::arg("thread")=static_cast<const Standard_Integer>(0))
        .def("GetGraphNode",
             (opencascade::handle<TFunction_GraphNode> (TFunction_IFunction::*)() const) static_cast<opencascade::handle<TFunction_GraphNode> (TFunction_IFunction::*)() const>(&TFunction_IFunction::GetGraphNode),
             R"#(Returns a graph node of the function.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NewFunction_s",
                    (Standard_Boolean (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , const Standard_GUID & ) >(&TFunction_IFunction::NewFunction),
                    R"#(Sets a new function attached to a label <L> with <ID>. It creates a new TFunction_Function attribute initialized by the <ID>, a new TFunction_GraphNode with an empty list of dependencies and the status equal to TFunction_ES_WrongDefinition. It registers the function in the scope of functions for this document.)#"  , py::arg("L"),  py::arg("ID"))
        .def_static("DeleteFunction_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TFunction_IFunction::DeleteFunction),
                    R"#(Deletes a function attached to a label <L>. It deletes a TFunction_Function attribute and a TFunction_GraphNode. It deletes the functions from the scope of function of this document.)#"  , py::arg("L"))
        .def_static("UpdateDependencies_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TFunction_IFunction::UpdateDependencies),
                    R"#(Updates dependencies for all functions of the scope. It returns false in case of an error. An empty constructor.)#"  , py::arg("Access"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Iterator , shared_ptr<TFunction_Iterator> >>(m.attr("TFunction_Iterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TDF_Label & >()  , py::arg("Access") )
    // custom constructors
    // methods
        .def("Init",
             (void (TFunction_Iterator::*)( const TDF_Label & ) ) static_cast<void (TFunction_Iterator::*)( const TDF_Label & ) >(&TFunction_Iterator::Init),
             R"#(Initializes the Iterator.)#"  , py::arg("Access"))
        .def("SetUsageOfExecutionStatus",
             (void (TFunction_Iterator::*)( const Standard_Boolean ) ) static_cast<void (TFunction_Iterator::*)( const Standard_Boolean ) >(&TFunction_Iterator::SetUsageOfExecutionStatus),
             R"#(Defines the mode of iteration - usage or not of the execution status. If the iterator takes into account the execution status, the method ::Current() returns only "not executed" functions while their status is not changed. If the iterator ignores the execution status, the method ::Current() returns the functions following their dependencies and ignoring the execution status.)#"  , py::arg("usage"))
        .def("GetUsageOfExecutionStatus",
             (Standard_Boolean (TFunction_Iterator::*)() const) static_cast<Standard_Boolean (TFunction_Iterator::*)() const>(&TFunction_Iterator::GetUsageOfExecutionStatus),
             R"#(Returns usage of execution status by the iterator.)#" )
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
        .def("GetStatus",
             (TFunction_ExecutionStatus (TFunction_Iterator::*)( const TDF_Label & ) const) static_cast<TFunction_ExecutionStatus (TFunction_Iterator::*)( const TDF_Label & ) const>(&TFunction_Iterator::GetStatus),
             R"#(A help-function aimed to help the user to check the status of retrurned function. It calls TFunction_GraphNode::GetStatus() inside.)#"  , py::arg("func"))
        .def("SetStatus",
             (void (TFunction_Iterator::*)( const TDF_Label & , const TFunction_ExecutionStatus ) const) static_cast<void (TFunction_Iterator::*)( const TDF_Label & , const TFunction_ExecutionStatus ) const>(&TFunction_Iterator::SetStatus),
             R"#(A help-function aimed to help the user to change the execution status of a function. It calls TFunction_GraphNode::SetStatus() inside.)#"  , py::arg("func"),  py::arg("status"))
        .def("Dump",
             (Standard_OStream & (TFunction_Iterator::*)( std::ostream & ) const) static_cast<Standard_OStream & (TFunction_Iterator::*)( std::ostream & ) const>(&TFunction_Iterator::Dump),
             R"#(None)#"  , py::arg("OS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Logbook ,opencascade::handle<TFunction_Logbook> , TDF_Attribute>>(m.attr("TFunction_Logbook"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TFunction_Logbook::*)() ) static_cast<void (TFunction_Logbook::*)() >(&TFunction_Logbook::Clear),
             R"#(Clears this logbook to its default, empty state.)#" )
        .def("IsEmpty",
             (Standard_Boolean (TFunction_Logbook::*)() const) static_cast<Standard_Boolean (TFunction_Logbook::*)() const>(&TFunction_Logbook::IsEmpty),
             R"#(None)#" )
        .def("SetTouched",
             (void (TFunction_Logbook::*)( const TDF_Label & ) ) static_cast<void (TFunction_Logbook::*)( const TDF_Label & ) >(&TFunction_Logbook::SetTouched),
             R"#(Sets the label L as a touched label in this logbook. In other words, L is understood to have been modified by the end user.)#"  , py::arg("L"))
        .def("SetImpacted",
             (void (TFunction_Logbook::*)( const TDF_Label & , const Standard_Boolean ) ) static_cast<void (TFunction_Logbook::*)( const TDF_Label & , const Standard_Boolean ) >(&TFunction_Logbook::SetImpacted),
             R"#(Sets the label L as an impacted label in this logbook. This method is called by execution of the function driver.)#"  , py::arg("L"),  py::arg("WithChildren")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetValid",
             (void (TFunction_Logbook::*)( const TDF_Label & , const Standard_Boolean ) ) static_cast<void (TFunction_Logbook::*)( const TDF_Label & , const Standard_Boolean ) >(&TFunction_Logbook::SetValid),
             R"#(Sets the label L as a valid label in this logbook.)#"  , py::arg("L"),  py::arg("WithChildren")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetValid",
             (void (TFunction_Logbook::*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) ) static_cast<void (TFunction_Logbook::*)(  const NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) >(&TFunction_Logbook::SetValid),
             R"#(None)#"  , py::arg("Ls"))
        .def("IsModified",
             (Standard_Boolean (TFunction_Logbook::*)( const TDF_Label & , const Standard_Boolean ) const) static_cast<Standard_Boolean (TFunction_Logbook::*)( const TDF_Label & , const Standard_Boolean ) const>(&TFunction_Logbook::IsModified),
             R"#(Returns True if the label L is touched or impacted. This method is called by <TFunction_FunctionDriver::MustExecute>. If <WithChildren> is set to true, the method checks all the sublabels of <L> too.)#"  , py::arg("L"),  py::arg("WithChildren")=static_cast<const Standard_Boolean>(Standard_False))
        .def("GetTouched",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetTouched),
             R"#(Returns the map of touched labels in this logbook. A touched label is the one modified by the end user.)#" )
        .def("GetImpacted",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetImpacted),
             R"#(Returns the map of impacted labels contained in this logbook.)#" )
        .def("GetValid",
             (const TDF_LabelMap & (TFunction_Logbook::*)() const) static_cast<const TDF_LabelMap & (TFunction_Logbook::*)() const>(&TFunction_Logbook::GetValid),
             R"#(Returns the map of valid labels in this logbook.)#" )
        .def("GetValid",
             (void (TFunction_Logbook::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const) static_cast<void (TFunction_Logbook::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const>(&TFunction_Logbook::GetValid),
             R"#(None)#"  , py::arg("Ls"))
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
        .def_static("Set_s",
                    (opencascade::handle<TFunction_Logbook> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TFunction_Logbook> (*)( const TDF_Label & ) >(&TFunction_Logbook::Set),
                    R"#(Finds or Creates a TFunction_Logbook attribute at the root label accessed by <Access>. Returns the attribute.)#"  , py::arg("Access"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TFunction_Logbook::GetID),
                    R"#(Returns the GUID for logbook attribute.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TFunction_Scope ,opencascade::handle<TFunction_Scope> , TDF_Attribute>>(m.attr("TFunction_Scope"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddFunction",
             (Standard_Boolean (TFunction_Scope::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TFunction_Scope::*)( const TDF_Label & ) >(&TFunction_Scope::AddFunction),
             R"#(Adds a function to the scope of functions.)#"  , py::arg("L"))
        .def("RemoveFunction",
             (Standard_Boolean (TFunction_Scope::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TFunction_Scope::*)( const TDF_Label & ) >(&TFunction_Scope::RemoveFunction),
             R"#(Removes a function from the scope of functions.)#"  , py::arg("L"))
        .def("RemoveFunction",
             (Standard_Boolean (TFunction_Scope::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TFunction_Scope::*)( const Standard_Integer ) >(&TFunction_Scope::RemoveFunction),
             R"#(Removes a function from the scope of functions.)#"  , py::arg("ID"))
        .def("RemoveAllFunctions",
             (void (TFunction_Scope::*)() ) static_cast<void (TFunction_Scope::*)() >(&TFunction_Scope::RemoveAllFunctions),
             R"#(Removes all functions from the scope of functions.)#" )
        .def("HasFunction",
             (Standard_Boolean (TFunction_Scope::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TFunction_Scope::*)( const Standard_Integer ) const>(&TFunction_Scope::HasFunction),
             R"#(Returns true if the function exists with such an ID.)#"  , py::arg("ID"))
        .def("HasFunction",
             (Standard_Boolean (TFunction_Scope::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TFunction_Scope::*)( const TDF_Label & ) const>(&TFunction_Scope::HasFunction),
             R"#(Returns true if the label contains a function of this scope.)#"  , py::arg("L"))
        .def("GetFunction",
             (Standard_Integer (TFunction_Scope::*)( const TDF_Label & ) const) static_cast<Standard_Integer (TFunction_Scope::*)( const TDF_Label & ) const>(&TFunction_Scope::GetFunction),
             R"#(Returns an ID of the function.)#"  , py::arg("L"))
        .def("GetFunction",
             (const TDF_Label & (TFunction_Scope::*)( const Standard_Integer ) const) static_cast<const TDF_Label & (TFunction_Scope::*)( const Standard_Integer ) const>(&TFunction_Scope::GetFunction),
             R"#(Returns the label of the function with this ID.)#"  , py::arg("ID"))
        .def("GetLogbook",
             (opencascade::handle<TFunction_Logbook> (TFunction_Scope::*)() const) static_cast<opencascade::handle<TFunction_Logbook> (TFunction_Scope::*)() const>(&TFunction_Scope::GetLogbook),
             R"#(Returns the Logbook used in TFunction_Driver methods. Implementation of Attribute methods ===================================)#" )
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
        .def("GetFunctions",
             (const TFunction_DoubleMapOfIntegerLabel & (TFunction_Scope::*)() const) static_cast<const TFunction_DoubleMapOfIntegerLabel & (TFunction_Scope::*)() const>(&TFunction_Scope::GetFunctions),
             R"#(Returns the scope of functions.)#" )
        .def("ChangeFunctions",
             (TFunction_DoubleMapOfIntegerLabel & (TFunction_Scope::*)() ) static_cast<TFunction_DoubleMapOfIntegerLabel & (TFunction_Scope::*)() >(&TFunction_Scope::ChangeFunctions),
             R"#(Returns the scope of functions for modification. Warning: Don't use this method if You are not sure what You do!)#" )
        .def("SetFreeID",
             (void (TFunction_Scope::*)( const Standard_Integer ) ) static_cast<void (TFunction_Scope::*)( const Standard_Integer ) >(&TFunction_Scope::SetFreeID),
             R"#(None)#"  , py::arg("ID"))
        .def("GetFreeID",
             (Standard_Integer (TFunction_Scope::*)() const) static_cast<Standard_Integer (TFunction_Scope::*)() const>(&TFunction_Scope::GetFreeID),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TFunction_Scope::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TFunction_Scope::*)() const>(&TFunction_Scope::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Set_s",
                    (opencascade::handle<TFunction_Scope> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TFunction_Scope> (*)( const TDF_Label & ) >(&TFunction_Scope::Set),
                    R"#(Static methods ============== Finds or Creates a TFunction_Scope attribute at the root label accessed by <Access>. Returns the attribute.)#"  , py::arg("Access"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TFunction_Scope::GetID),
                    R"#(Returns the GUID for Scope attribute. Instant methods =============== Constructor (empty).)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TFunction_Scope::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TFunction_Scope::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\TFunction_DataMapIteratorOfDataMapOfGUIDDriver.hxx
// ./opencascade\TFunction_DriverTable.hxx
// ./opencascade\TFunction_Scope.hxx
// ./opencascade\TFunction_Logbook.hxx
// ./opencascade\TFunction_Driver.hxx
// ./opencascade\TFunction_IFunction.hxx
// ./opencascade\TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel.hxx
// ./opencascade\TFunction_GraphNode.hxx
// ./opencascade\TFunction_ExecutionStatus.hxx
// ./opencascade\TFunction_DataMapOfGUIDDriver.hxx
// ./opencascade\TFunction_Array1OfDataMapOfGUIDDriver.hxx
// ./opencascade\TFunction_HArray1OfDataMapOfGUIDDriver.hxx
// ./opencascade\TFunction_Iterator.hxx
// ./opencascade\TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel.hxx
// ./opencascade\TFunction_DataMapOfLabelListOfLabel.hxx
// ./opencascade\TFunction_Function.hxx
// ./opencascade\TFunction_DoubleMapOfIntegerLabel.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<TFunction_DataMapOfGUIDDriver>(m,"TFunction_Array1OfDataMapOfGUIDDriver");
    register_template_NCollection_DataMap<TDF_Label, TDF_LabelList, TDF_LabelMapHasher>(m,"TFunction_DataMapOfLabelListOfLabel");
    register_template_NCollection_DoubleMap<Standard_Integer, TDF_Label, TColStd_MapIntegerHasher, TDF_LabelMapHasher>(m,"TFunction_DoubleMapOfIntegerLabel");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
