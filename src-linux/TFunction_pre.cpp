
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TFunction_Logbook.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TFunction_Logbook.hxx>
#include <TFunction_Driver.hxx>
#include <TFunction_GraphNode.hxx>
#include <TFunction_Scope.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
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
// ./opencascade/TFunction_DoubleMapOfIntegerLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DoubleMapOfIntegerLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_Array1OfDataMapOfGUIDDriver.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DataMapOfGUIDDriver.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DataMapOfLabelListOfLabel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TFunction_DataMapOfLabelListOfLabel.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TFunction_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TFunction", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TFunction_ExecutionStatus>(m, "TFunction_ExecutionStatus",R"#(None)#")
        .value("TFunction_ES_WrongDefinition",TFunction_ExecutionStatus::TFunction_ES_WrongDefinition)
        .value("TFunction_ES_NotExecuted",TFunction_ExecutionStatus::TFunction_ES_NotExecuted)
        .value("TFunction_ES_Executing",TFunction_ExecutionStatus::TFunction_ES_Executing)
        .value("TFunction_ES_Succeeded",TFunction_ExecutionStatus::TFunction_ES_Succeeded)
        .value("TFunction_ES_Failed",TFunction_ExecutionStatus::TFunction_ES_Failed).export_values();

//Python trampoline classes
    class Py_TFunction_Driver : public TFunction_Driver{
    public:
        using TFunction_Driver::TFunction_Driver;


        // public pure virtual
        Standard_Integer Execute(opencascade::handle<TFunction_Logbook> & log) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,TFunction_Driver,Execute,log) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_DoubleMap<Standard_Integer, TDF_Label, TColStd_MapIntegerHasher, TDF_LabelMapHasher>(m,"TFunction_DoubleMapOfIntegerLabel");
    preregister_template_NCollection_Array1<TFunction_DataMapOfGUIDDriver>(m,"TFunction_Array1OfDataMapOfGUIDDriver");
    preregister_template_NCollection_DataMap<TDF_Label, TDF_LabelList, TDF_LabelMapHasher>(m,"TFunction_DataMapOfLabelListOfLabel");

// classes forward declarations only
    py::class_<TFunction_Driver ,opencascade::handle<TFunction_Driver>,Py_TFunction_Driver , Standard_Transient>(m,"TFunction_Driver",R"#(This driver class provide services around function execution. One instance of this class is built for the whole session. The driver is bound to the DriverGUID in the DriverTable class. It allows you to create classes which inherit from this abstract class. These subclasses identify the various algorithms which can be applied to the data contained in the attributes of sub-labels of a model. A single instance of this class and each of its subclasses is built for the whole session.This driver class provide services around function execution. One instance of this class is built for the whole session. The driver is bound to the DriverGUID in the DriverTable class. It allows you to create classes which inherit from this abstract class. These subclasses identify the various algorithms which can be applied to the data contained in the attributes of sub-labels of a model. A single instance of this class and each of its subclasses is built for the whole session.This driver class provide services around function execution. One instance of this class is built for the whole session. The driver is bound to the DriverGUID in the DriverTable class. It allows you to create classes which inherit from this abstract class. These subclasses identify the various algorithms which can be applied to the data contained in the attributes of sub-labels of a model. A single instance of this class and each of its subclasses is built for the whole session.)#");
    py::class_<TFunction_DriverTable ,opencascade::handle<TFunction_DriverTable> , Standard_Transient>(m,"TFunction_DriverTable",R"#(A container for instances of drivers. You create a new instance of TFunction_Driver and use the method AddDriver to load it into the driver table.A container for instances of drivers. You create a new instance of TFunction_Driver and use the method AddDriver to load it into the driver table.A container for instances of drivers. You create a new instance of TFunction_Driver and use the method AddDriver to load it into the driver table.)#");
    py::class_<TFunction_Function ,opencascade::handle<TFunction_Function> , TDF_Attribute>(m,"TFunction_Function",R"#(Provides the following two services - a link to an evaluation driver - the means of providing a link between a function and an evaluation driver.Provides the following two services - a link to an evaluation driver - the means of providing a link between a function and an evaluation driver.Provides the following two services - a link to an evaluation driver - the means of providing a link between a function and an evaluation driver.)#");
    py::class_<TFunction_GraphNode ,opencascade::handle<TFunction_GraphNode> , TDF_Attribute>(m,"TFunction_GraphNode",R"#(Provides links between functions.Provides links between functions.Provides links between functions.)#");
    py::class_<TFunction_HArray1OfDataMapOfGUIDDriver ,opencascade::handle<TFunction_HArray1OfDataMapOfGUIDDriver> , TFunction_Array1OfDataMapOfGUIDDriver, Standard_Transient>(m,"TFunction_HArray1OfDataMapOfGUIDDriver",R"#()#");
    py::class_<TFunction_IFunction , shared_ptr<TFunction_IFunction> >(m,"TFunction_IFunction",R"#(Interface class for usage of Function Mechanism)#");
    py::class_<TFunction_Iterator , shared_ptr<TFunction_Iterator> >(m,"TFunction_Iterator",R"#(Iterator of the graph of functions)#");
    py::class_<TFunction_Logbook ,opencascade::handle<TFunction_Logbook> , TDF_Attribute>(m,"TFunction_Logbook",R"#(This class contains information which is written and read during the solving process. Information is divided in three groups.This class contains information which is written and read during the solving process. Information is divided in three groups.This class contains information which is written and read during the solving process. Information is divided in three groups.This class contains information which is written and read during the solving process. Information is divided in three groups.)#");
    py::class_<TFunction_Scope ,opencascade::handle<TFunction_Scope> , TDF_Attribute>(m,"TFunction_Scope",R"#(Keeps a scope of functions.Keeps a scope of functions.Keeps a scope of functions.)#");

};

// user-defined post-inclusion per module

// user-defined post
