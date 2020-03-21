
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TObj_TNameContainer.hxx>
#include <TDocStd_Document.hxx>
#include <TObj_CheckModel.hxx>
#include <TObj_Application.hxx>
#include <TObj_Model.hxx>
#include <TObj_Persistence.hxx>
#include <TObj_ObjectIterator.hxx>
#include <TObj_TNameContainer.hxx>
#include <Standard_GUID.hxx>
#include <TObj_Model.hxx>
#include <TObj_Object.hxx>
#include <Standard_GUID.hxx>
#include <TObj_Model.hxx>
#include <TObj_Object.hxx>
#include <Standard_GUID.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TObj_Object.hxx>

// module includes
#include <TObj_Application.hxx>
#include <TObj_Assistant.hxx>
#include <TObj_CheckModel.hxx>
#include <TObj_Common.hxx>
#include <TObj_Container.hxx>
#include <TObj_DeletingMode.hxx>
#include <TObj_HiddenPartition.hxx>
#include <TObj_LabelIterator.hxx>
#include <TObj_Model.hxx>
#include <TObj_ModelIterator.hxx>
#include <TObj_Object.hxx>
#include <TObj_ObjectIterator.hxx>
#include <TObj_OcafObjectIterator.hxx>
#include <TObj_Partition.hxx>
#include <TObj_Persistence.hxx>
#include <TObj_ReferenceIterator.hxx>
#include <TObj_SequenceIterator.hxx>
#include <TObj_SequenceOfIterator.hxx>
#include <TObj_SequenceOfObject.hxx>
#include <TObj_TIntSparseArray.hxx>
#include <TObj_TModel.hxx>
#include <TObj_TNameContainer.hxx>
#include <TObj_TObject.hxx>
#include <TObj_TReference.hxx>
#include <TObj_TXYZ.hxx>

// template related includes
// ./opencascade/TObj_TIntSparseArray.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TObj_Container.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TObj_Container.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TObj_SequenceOfObject.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TObj_SequenceOfIterator.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>

// Module definiiton
void register_TObj_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TObj", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TObj_DeletingMode>(m, "TObj_DeletingMode",R"#(None)#")
        .value("TObj_FreeOnly",TObj_DeletingMode::TObj_FreeOnly)
        .value("TObj_KeepDepending",TObj_DeletingMode::TObj_KeepDepending)
        .value("TObj_Forced",TObj_DeletingMode::TObj_Forced).export_values();

//Python trampoline classes
    class Py_TObj_Model : public TObj_Model{
    public:
        using TObj_Model::TObj_Model;


        // public pure virtual
        opencascade::handle<TObj_Model> NewEmpty() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TObj_Model>,TObj_Model,NewEmpty,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_TObj_Persistence : public TObj_Persistence{
    public:
        using TObj_Persistence::TObj_Persistence;


        // public pure virtual


        // protected pure virtual
        opencascade::handle<TObj_Object> New(const TDF_Label & theLabel) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TObj_Object>,TObj_Persistence,New,theLabel) };


        // private pure virtual

    };
    class Py_TObj_LabelIterator : public TObj_LabelIterator{
    public:
        using TObj_LabelIterator::TObj_LabelIterator;


        // public pure virtual


        // protected pure virtual
        void MakeStep() override { PYBIND11_OVERLOAD_PURE(void,TObj_LabelIterator,MakeStep,) };


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_SparseArray<Standard_Integer>(m,"TObj_TIntSparseArray_VecOfData");
    preregister_template_NCollection_DataMap<opencascade::handle<TCollection_HExtendedString>, TDF_Label>(m,"TObj_DataMapOfNameLabel");
    preregister_template_NCollection_DataMap<TCollection_AsciiString, Standard_Address>(m,"TObj_DataMapOfStringPointer");
    preregister_template_NCollection_Sequence<opencascade::handle<TObj_Object> >(m,"TObj_SequenceOfObject");
    preregister_template_NCollection_Sequence<opencascade::handle<TObj_ObjectIterator> >(m,"TObj_SequenceOfIterator");

// classes forward declarations only
    py::class_<TObj_Application ,opencascade::handle<TObj_Application> , TDocStd_Application>(m,"TObj_Application",R"#(This is a base class for OCAF based TObj models with declared virtual methodsThis is a base class for OCAF based TObj models with declared virtual methods)#");
    py::class_<TObj_Assistant , shared_ptr<TObj_Assistant> >(m,"TObj_Assistant",R"#(This class provides interface to the static data to be used during save or load models.)#");
    py::class_<TObj_CheckModel ,opencascade::handle<TObj_CheckModel> , Message_Algorithm>(m,"TObj_CheckModel",R"#(This class provides consistency check of the TObj model. It collects all inconsistencies in the status bits and prepaires messages to be sent using SendStatusMessages (SendMessages) method. It supports also the fix mode, in which some inconsistencies are corrected.This class provides consistency check of the TObj model. It collects all inconsistencies in the status bits and prepaires messages to be sent using SendStatusMessages (SendMessages) method. It supports also the fix mode, in which some inconsistencies are corrected.)#");
    py::class_<TObj_HSequenceOfObject ,opencascade::handle<TObj_HSequenceOfObject> , TObj_SequenceOfObject, Standard_Transient>(m,"TObj_HSequenceOfObject",R"#()#");
    py::class_<TObj_Model ,opencascade::handle<TObj_Model>,Py_TObj_Model , Standard_Transient>(m,"TObj_Model",R"#(Base class for OCAF based models. Defines common behaviour for all models based on TObject classes, basic services to access model objects and common operations with the model. Provides default implementation for many methods.Base class for OCAF based models. Defines common behaviour for all models based on TObject classes, basic services to access model objects and common operations with the model. Provides default implementation for many methods.Base class for OCAF based models. Defines common behaviour for all models based on TObject classes, basic services to access model objects and common operations with the model. Provides default implementation for many methods.)#");
    py::class_<TObj_Object ,opencascade::handle<TObj_Object> , Standard_Transient>(m,"TObj_Object",R"#(Basis class for transient objects in OCAF-based modelsBasis class for transient objects in OCAF-based modelsBasis class for transient objects in OCAF-based models)#");
    py::class_<TObj_ObjectIterator ,opencascade::handle<TObj_ObjectIterator> , Standard_Transient>(m,"TObj_ObjectIterator",R"#(This class provides an iterator by objects in a partition. (implements TObj_ObjectIterator interface)This class provides an iterator by objects in a partition. (implements TObj_ObjectIterator interface))#");
    py::class_<TObj_Persistence , shared_ptr_nodelete<TObj_Persistence>,Py_TObj_Persistence >(m,"TObj_Persistence",R"#(This class is intended to be a root of tools (one per class) to manage persistence of objects inherited from TObj_Object It provides a mechanism to recover correctly typed objects (subtypes of TObj_Object) out of their persistent names)#");
    py::class_<TObj_TIntSparseArray ,opencascade::handle<TObj_TIntSparseArray> , TDF_Attribute>(m,"TObj_TIntSparseArray",R"#(OCAF Attribute to store a set of positive integer values in the OCAF tree. Each value is identified by ID (positive integer). The supporting underlying data structure is NCollection_SparseArray of integers.OCAF Attribute to store a set of positive integer values in the OCAF tree. Each value is identified by ID (positive integer). The supporting underlying data structure is NCollection_SparseArray of integers.)#");
    py::class_<TObj_TModel ,opencascade::handle<TObj_TModel> , TDF_Attribute>(m,"TObj_TModel",R"#(Attribute to store OCAF-based models in OCAF tree The persistency mechanism of the TObj_TModel allowes to save and restore various types of models without recompilation of the schemaAttribute to store OCAF-based models in OCAF tree The persistency mechanism of the TObj_TModel allowes to save and restore various types of models without recompilation of the schemaAttribute to store OCAF-based models in OCAF tree The persistency mechanism of the TObj_TModel allowes to save and restore various types of models without recompilation of the schema)#");
    py::class_<TObj_TNameContainer ,opencascade::handle<TObj_TNameContainer> , TDF_Attribute>(m,"TObj_TNameContainer",R"#(This class provides OCAF Attribute to storing the unique names of object in model.This class provides OCAF Attribute to storing the unique names of object in model.This class provides OCAF Attribute to storing the unique names of object in model.)#");
    py::class_<TObj_TObject ,opencascade::handle<TObj_TObject> , TDF_Attribute>(m,"TObj_TObject",R"#(Purpose: OCAF Attribute to storing objects (interfaces) of OCAF-based modelers in the OCAF tree. The persistency mechanism of the TObj_TObject allowes to save and restore objects of various subtypes without recompilation of the schemaPurpose: OCAF Attribute to storing objects (interfaces) of OCAF-based modelers in the OCAF tree. The persistency mechanism of the TObj_TObject allowes to save and restore objects of various subtypes without recompilation of the schema)#");
    py::class_<TObj_TReference ,opencascade::handle<TObj_TReference> , TDF_Attribute>(m,"TObj_TReference",R"#(Attribute for storing references to the objects which implement TObj_Object interface in the OCAF tree. Its persistency mechanism provides transparent method for storing cross-model references. Each reference, when created, registers itself in the referred object, to support back referencesAttribute for storing references to the objects which implement TObj_Object interface in the OCAF tree. Its persistency mechanism provides transparent method for storing cross-model references. Each reference, when created, registers itself in the referred object, to support back references)#");
    py::class_<TObj_TXYZ ,opencascade::handle<TObj_TXYZ> , TDF_Attribute>(m,"TObj_TXYZ",R"#()#");
    py::class_<TObj_LabelIterator ,opencascade::handle<TObj_LabelIterator>,Py_TObj_LabelIterator , TObj_ObjectIterator>(m,"TObj_LabelIterator",R"#(This class is a basis for OCAF based iterators.This class is a basis for OCAF based iterators.)#");
    py::class_<TObj_ModelIterator ,opencascade::handle<TObj_ModelIterator> , TObj_ObjectIterator>(m,"TObj_ModelIterator",R"#(This class provides an iterator by all objects in the model.This class provides an iterator by all objects in the model.)#");
    py::class_<TObj_Partition ,opencascade::handle<TObj_Partition> , TObj_Object>(m,"TObj_Partition",R"#(This class privides tool handling one of partitions (the set of homogenious elements) in the OCAF based model`s data structureThis class privides tool handling one of partitions (the set of homogenious elements) in the OCAF based model`s data structure)#");
    py::class_<TObj_SequenceIterator ,opencascade::handle<TObj_SequenceIterator> , TObj_ObjectIterator>(m,"TObj_SequenceIterator",R"#(This class is an iterator on sequenceThis class is an iterator on sequence)#");
    py::class_<TObj_HiddenPartition ,opencascade::handle<TObj_HiddenPartition> , TObj_Partition>(m,"TObj_HiddenPartition",R"#(This class is partition is predefined hidden flagThis class is partition is predefined hidden flag)#");
    py::class_<TObj_OcafObjectIterator ,opencascade::handle<TObj_OcafObjectIterator> , TObj_LabelIterator>(m,"TObj_OcafObjectIterator",R"#(This class provides an iterator by objects in a partition. (implements TObj_ObjectIterator interface)This class provides an iterator by objects in a partition. (implements TObj_ObjectIterator interface))#");
    py::class_<TObj_ReferenceIterator ,opencascade::handle<TObj_ReferenceIterator> , TObj_LabelIterator>(m,"TObj_ReferenceIterator",R"#(This class provides an iterator by references of the object (implements TObj_ReferenceIterator interface)This class provides an iterator by references of the object (implements TObj_ReferenceIterator interface))#");

};

// user-defined post-inclusion per module

// user-defined post
