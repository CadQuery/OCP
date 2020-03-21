
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TDF_IDFilter.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TDF_Transaction.hxx>
#include <TDF_Delta.hxx>
#include <TDF_Data.hxx>
#include <Standard_NullObject.hxx>
#include <TDF_Delta.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_ClosureMode.hxx>
#include <Standard_NullObject.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <Standard_GUID.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_Data.hxx>
#include <TDF_Label.hxx>
#include <TDF_Data.hxx>
#include <TDF_Label.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_DeltaOnForget.hxx>
#include <Standard_GUID.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_DeltaOnResume.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_IDFilter.hxx>
#include <Standard_GUID.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDF_Data.hxx>
#include <TDF_Label.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_TagSource.hxx>
#include <TDF_Reference.hxx>
#include <TDF_ClosureMode.hxx>
#include <TDF_ClosureTool.hxx>
#include <TDF_CopyTool.hxx>
#include <TDF_CopyLabel.hxx>
#include <TDF_ComparisonTool.hxx>
#include <TDF_Transaction.hxx>
#include <TDF_Delta.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_DeltaOnForget.hxx>
#include <TDF_DeltaOnResume.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_DefaultDeltaOnRemoval.hxx>
#include <TDF_DefaultDeltaOnModification.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_ChildIDIterator.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Tool.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>

// module includes
#include <TDF.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_AttributeArray1.hxx>
#include <TDF_AttributeDataMap.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_AttributeDeltaList.hxx>
#include <TDF_AttributeDoubleMap.hxx>
#include <TDF_AttributeIndexedMap.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_AttributeList.hxx>
#include <TDF_AttributeMap.hxx>
#include <TDF_AttributeSequence.hxx>
#include <TDF_ChildIDIterator.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_ClosureMode.hxx>
#include <TDF_ClosureTool.hxx>
#include <TDF_ComparisonTool.hxx>
#include <TDF_CopyLabel.hxx>
#include <TDF_CopyTool.hxx>
#include <TDF_Data.hxx>
#include <TDF_DataMapIteratorOfAttributeDataMap.hxx>
#include <TDF_DataMapIteratorOfLabelDataMap.hxx>
#include <TDF_DataMapIteratorOfLabelIntegerMap.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_DefaultDeltaOnModification.hxx>
#include <TDF_DefaultDeltaOnRemoval.hxx>
#include <TDF_Delta.hxx>
#include <TDF_DeltaList.hxx>
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_DeltaOnForget.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_DeltaOnResume.hxx>
#include <TDF_DoubleMapIteratorOfAttributeDoubleMap.hxx>
#include <TDF_DoubleMapIteratorOfGUIDProgIDMap.hxx>
#include <TDF_DoubleMapIteratorOfLabelDoubleMap.hxx>
#include <TDF_GUIDProgIDMap.hxx>
#include <TDF_HAllocator.hxx>
#include <TDF_HAttributeArray1.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_IDList.hxx>
#include <TDF_IDMap.hxx>
#include <TDF_Label.hxx>
#include <TDF_LabelDataMap.hxx>
#include <TDF_LabelDoubleMap.hxx>
#include <TDF_LabelIndexedMap.hxx>
#include <TDF_LabelIntegerMap.hxx>
#include <TDF_LabelList.hxx>
#include <TDF_LabelMap.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <TDF_LabelNode.hxx>
#include <TDF_LabelNodePtr.hxx>
#include <TDF_LabelSequence.hxx>
#include <TDF_ListIteratorOfAttributeDeltaList.hxx>
#include <TDF_ListIteratorOfAttributeList.hxx>
#include <TDF_ListIteratorOfDeltaList.hxx>
#include <TDF_ListIteratorOfIDList.hxx>
#include <TDF_ListIteratorOfLabelList.hxx>
#include <TDF_MapIteratorOfAttributeMap.hxx>
#include <TDF_MapIteratorOfIDMap.hxx>
#include <TDF_MapIteratorOfLabelMap.hxx>
#include <TDF_Reference.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_TagSource.hxx>
#include <TDF_Tool.hxx>
#include <TDF_Transaction.hxx>

// template related includes
// ./opencascade/TDF_LabelDoubleMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelDoubleMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_DeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_DeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_IDList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_IDList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeDoubleMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_GUIDProgIDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_GUIDProgIDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeIndexedMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_IDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_IDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelIndexedMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeDeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeDeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelIntegerMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelIntegerMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_LabelMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDF_AttributeMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TDF_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TDF", R"#()#");

// user-defined inclusion per module in the body

// enums
    m.attr("TDF_LabelNodeImportMsk") = py::cast(int(TDF_LabelNodeImportMsk));
    m.attr("TDF_LabelNodeAttModMsk") = py::cast(int(TDF_LabelNodeAttModMsk));
    m.attr("TDF_LabelNodeMayModMsk") = py::cast(int(TDF_LabelNodeMayModMsk));
    m.attr("TDF_LabelNodeFlagsMsk") = py::cast(int(TDF_LabelNodeFlagsMsk));
    m.attr("TDF_AttributeValidMsk") = py::cast(int(TDF_AttributeValidMsk));
    m.attr("TDF_AttributeBackupMsk") = py::cast(int(TDF_AttributeBackupMsk));
    m.attr("TDF_AttributeForgottenMsk") = py::cast(int(TDF_AttributeForgottenMsk));

//Python trampoline classes
    class Py_TDF_Attribute : public TDF_Attribute{
    public:
        using TDF_Attribute::TDF_Attribute;


        // public pure virtual
        const Standard_GUID & ID() const  override { PYBIND11_OVERLOAD_PURE(const Standard_GUID &,TDF_Attribute,ID,) };
        void Restore(const opencascade::handle<TDF_Attribute> & anAttribute) override { PYBIND11_OVERLOAD_PURE(void,TDF_Attribute,Restore,anAttribute) };
        opencascade::handle<TDF_Attribute> NewEmpty() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TDF_Attribute>,TDF_Attribute,NewEmpty,) };
        void Paste(const opencascade::handle<TDF_Attribute> & intoAttribute,const opencascade::handle<TDF_RelocationTable> & aRelocationTable) const  override { PYBIND11_OVERLOAD_PURE(void,TDF_Attribute,Paste,intoAttribute,aRelocationTable) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_TDF_AttributeDelta : public TDF_AttributeDelta{
    public:
        using TDF_AttributeDelta::TDF_AttributeDelta;


        // public pure virtual
        void Apply() override { PYBIND11_OVERLOAD_PURE(void,TDF_AttributeDelta,Apply,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_TDF_DeltaOnRemoval : public TDF_DeltaOnRemoval{
    public:
        using TDF_DeltaOnRemoval::TDF_DeltaOnRemoval;


        // public pure virtual

        void Apply() override { PYBIND11_OVERLOAD_PURE(void,TDF_AttributeDelta,Apply,) };

        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_DoubleMap<TDF_Label, TDF_Label, TDF_LabelMapHasher, TDF_LabelMapHasher>(m,"TDF_LabelDoubleMap");
    preregister_template_NCollection_List<opencascade::handle<TDF_Delta> >(m,"TDF_DeltaList");
    preregister_template_NCollection_Sequence<TDF_Label>(m,"TDF_LabelSequence");
    preregister_template_NCollection_List<opencascade::handle<TDF_Attribute> >(m,"TDF_AttributeList");
    preregister_template_NCollection_Array1<opencascade::handle<TDF_Attribute> >(m,"TDF_AttributeArray1");
    preregister_template_NCollection_List<Standard_GUID>(m,"TDF_IDList");
    preregister_template_NCollection_List<TDF_Label>(m,"TDF_LabelList");
    preregister_template_NCollection_DataMap<TDF_Label, TDF_Label, TDF_LabelMapHasher>(m,"TDF_LabelDataMap");
    preregister_template_NCollection_DoubleMap<Standard_GUID, TCollection_ExtendedString, Standard_GUID, TCollection_ExtendedString>(m,"TDF_GUIDProgIDMap");
    preregister_template_NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher>(m,"TDF_AttributeIndexedMap");
    preregister_template_NCollection_Sequence<opencascade::handle<TDF_Attribute> >(m,"TDF_AttributeSequence");
    preregister_template_NCollection_Map<Standard_GUID, Standard_GUID>(m,"TDF_IDMap");
    preregister_template_NCollection_IndexedMap<TDF_Label, TDF_LabelMapHasher>(m,"TDF_LabelIndexedMap");
    preregister_template_NCollection_List<opencascade::handle<TDF_AttributeDelta> >(m,"TDF_AttributeDeltaList");
    preregister_template_NCollection_DataMap<TDF_Label, Standard_Integer, TDF_LabelMapHasher>(m,"TDF_LabelIntegerMap");
    preregister_template_NCollection_Map<TDF_Label, TDF_LabelMapHasher>(m,"TDF_LabelMap");
    preregister_template_NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher>(m,"TDF_AttributeMap");

// classes forward declarations only
    py::class_<TDF , shared_ptr<TDF> >(m,"TDF",R"#(This package provides data framework for binding features and data structures.)#");
    py::class_<TDF_Attribute ,opencascade::handle<TDF_Attribute>,Py_TDF_Attribute , Standard_Transient>(m,"TDF_Attribute",R"#(A class each application has to implement. It is used to contain the application data. This abstract class, alongwith Label, is one of the cornerstones of Model Editor. The groundwork is to define the root of information. This information is to be attached to a Label, and could be of any of the following types: - a feature - a constraint - a commentA class each application has to implement. It is used to contain the application data. This abstract class, alongwith Label, is one of the cornerstones of Model Editor. The groundwork is to define the root of information. This information is to be attached to a Label, and could be of any of the following types: - a feature - a constraint - a commentA class each application has to implement. It is used to contain the application data. This abstract class, alongwith Label, is one of the cornerstones of Model Editor. The groundwork is to define the root of information. This information is to be attached to a Label, and could be of any of the following types: - a feature - a constraint - a comment)#");
    py::class_<TDF_AttributeDelta ,opencascade::handle<TDF_AttributeDelta>,Py_TDF_AttributeDelta , Standard_Transient>(m,"TDF_AttributeDelta",R"#(This class discribes the services we need to implement Delta and Undo/Redo services.This class discribes the services we need to implement Delta and Undo/Redo services.This class discribes the services we need to implement Delta and Undo/Redo services.)#");
    py::class_<TDF_AttributeIterator , shared_ptr<TDF_AttributeIterator> >(m,"TDF_AttributeIterator",R"#(None)#");
    py::class_<TDF_ChildIDIterator , shared_ptr<TDF_ChildIDIterator> >(m,"TDF_ChildIDIterator",R"#(Iterates on the children of a label, to find attributes having ID as Attribute ID.)#");
    py::class_<TDF_ChildIterator , shared_ptr<TDF_ChildIterator> >(m,"TDF_ChildIterator",R"#(Iterates on the children of a label, at the first level only. It is possible to ask the iterator to explore all the sub label levels of the given one, with the option "allLevels".)#");
    py::class_<TDF_ClosureMode , shared_ptr<TDF_ClosureMode> >(m,"TDF_ClosureMode",R"#(This class provides options closure management.)#");
    py::class_<TDF_ClosureTool , shared_ptr<TDF_ClosureTool> >(m,"TDF_ClosureTool",R"#(This class provides services to build the closure of an information set. This class gives services around the transitive enclosure of a set of information, starting from a list of label. You can set closure options by using IDFilter (to select or exclude specific attribute IDs) and CopyOption objects and by giving to Closure method.)#");
    py::class_<TDF_ComparisonTool , shared_ptr<TDF_ComparisonTool> >(m,"TDF_ComparisonTool",R"#(This class provides services to compare sets of information. The use of this tool can works after a copy, acted by a CopyTool.)#");
    py::class_<TDF_CopyLabel , shared_ptr<TDF_CopyLabel> >(m,"TDF_CopyLabel",R"#(This class gives copy of source label hierarchy)#");
    py::class_<TDF_CopyTool , shared_ptr<TDF_CopyTool> >(m,"TDF_CopyTool",R"#(This class provides services to build, copy or paste a set of information.)#");
    py::class_<TDF_Data ,opencascade::handle<TDF_Data> , Standard_Transient>(m,"TDF_Data",R"#(This class is used to manipulate a complete independant, self sufficient data structure and its services:This class is used to manipulate a complete independant, self sufficient data structure and its services:This class is used to manipulate a complete independant, self sufficient data structure and its services:)#");
    py::class_<TDF_DataSet ,opencascade::handle<TDF_DataSet> , Standard_Transient>(m,"TDF_DataSet",R"#(This class is a set of TDF informations like labels and attributes.This class is a set of TDF informations like labels and attributes.This class is a set of TDF informations like labels and attributes.)#");
    py::class_<TDF_Delta ,opencascade::handle<TDF_Delta> , Standard_Transient>(m,"TDF_Delta",R"#(A set of AttributeDelta for a given transaction number and reference time number. A delta set is available at <aSourceTime>. If applied, it restores the TDF_Data in the state it was at <aTargetTime>.A set of AttributeDelta for a given transaction number and reference time number. A delta set is available at <aSourceTime>. If applied, it restores the TDF_Data in the state it was at <aTargetTime>.A set of AttributeDelta for a given transaction number and reference time number. A delta set is available at <aSourceTime>. If applied, it restores the TDF_Data in the state it was at <aTargetTime>.)#");
    py::class_<TDF_HAttributeArray1 ,opencascade::handle<TDF_HAttributeArray1> , TDF_AttributeArray1, Standard_Transient>(m,"TDF_HAttributeArray1",R"#()#");
    py::class_<TDF_IDFilter , shared_ptr<TDF_IDFilter> >(m,"TDF_IDFilter",R"#(This class offers filtering services around an ID list.)#");
    py::class_<TDF_Label , shared_ptr<TDF_Label> >(m,"TDF_Label",R"#(This class provides basic operations to define a label in a data structure. A label is a feature in the feature hierarchy. A label is always connected to a Data from TDF. To a label is attached attributes containing the software components information.)#");
    py::class_<TDF_LabelMapHasher , shared_ptr<TDF_LabelMapHasher> >(m,"TDF_LabelMapHasher",R"#(A label hasher for label maps.)#");
    py::class_<TDF_RelocationTable ,opencascade::handle<TDF_RelocationTable> , Standard_Transient>(m,"TDF_RelocationTable",R"#(This is a relocation dictionnary between source and target labels, attributes or any transient(useful for copy or paste actions). Note that one target value may be the relocation value of more than one source object.This is a relocation dictionnary between source and target labels, attributes or any transient(useful for copy or paste actions). Note that one target value may be the relocation value of more than one source object.This is a relocation dictionnary between source and target labels, attributes or any transient(useful for copy or paste actions). Note that one target value may be the relocation value of more than one source object.)#");
    py::class_<TDF_Tool , shared_ptr<TDF_Tool> >(m,"TDF_Tool",R"#(This class provides general services for a data framework.)#");
    py::class_<TDF_Transaction , shared_ptr<TDF_Transaction> >(m,"TDF_Transaction",R"#(This class offers services to open, commit or abort a transaction in a more secure way than using Data from TDF. If you forget to close a transaction, it will be automaticaly aborted at the destruction of this object, at the closure of its scope.)#");
    py::class_<TDF_DeltaOnAddition ,opencascade::handle<TDF_DeltaOnAddition> , TDF_AttributeDelta>(m,"TDF_DeltaOnAddition",R"#(This class provides default services for an AttributeDelta on an ADDITION action.This class provides default services for an AttributeDelta on an ADDITION action.This class provides default services for an AttributeDelta on an ADDITION action.)#");
    py::class_<TDF_DeltaOnForget ,opencascade::handle<TDF_DeltaOnForget> , TDF_AttributeDelta>(m,"TDF_DeltaOnForget",R"#(This class provides default services for an AttributeDelta on an Forget action.This class provides default services for an AttributeDelta on an Forget action.This class provides default services for an AttributeDelta on an Forget action.)#");
    py::class_<TDF_DeltaOnModification ,opencascade::handle<TDF_DeltaOnModification> , TDF_AttributeDelta>(m,"TDF_DeltaOnModification",R"#(This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.)#");
    py::class_<TDF_DeltaOnRemoval ,opencascade::handle<TDF_DeltaOnRemoval>,Py_TDF_DeltaOnRemoval , TDF_AttributeDelta>(m,"TDF_DeltaOnRemoval",R"#(This class provides default services for an AttributeDelta on a REMOVAL action.This class provides default services for an AttributeDelta on a REMOVAL action.This class provides default services for an AttributeDelta on a REMOVAL action.)#");
    py::class_<TDF_DeltaOnResume ,opencascade::handle<TDF_DeltaOnResume> , TDF_AttributeDelta>(m,"TDF_DeltaOnResume",R"#(This class provides default services for an AttributeDelta on an Resume action.This class provides default services for an AttributeDelta on an Resume action.This class provides default services for an AttributeDelta on an Resume action.)#");
    py::class_<TDF_Reference ,opencascade::handle<TDF_Reference> , TDF_Attribute>(m,"TDF_Reference",R"#(This attribute is used to store in the framework a reference to an other label.This attribute is used to store in the framework a reference to an other label.This attribute is used to store in the framework a reference to an other label.)#");
    py::class_<TDF_TagSource ,opencascade::handle<TDF_TagSource> , TDF_Attribute>(m,"TDF_TagSource",R"#(This attribute manage a tag provider to create child labels of a given one.This attribute manage a tag provider to create child labels of a given one.This attribute manage a tag provider to create child labels of a given one.)#");
    py::class_<TDF_DefaultDeltaOnModification ,opencascade::handle<TDF_DefaultDeltaOnModification> , TDF_DeltaOnModification>(m,"TDF_DefaultDeltaOnModification",R"#(This class provides a default implementation of a TDF_DeltaOnModification.This class provides a default implementation of a TDF_DeltaOnModification.This class provides a default implementation of a TDF_DeltaOnModification.)#");
    py::class_<TDF_DefaultDeltaOnRemoval ,opencascade::handle<TDF_DefaultDeltaOnRemoval> , TDF_DeltaOnRemoval>(m,"TDF_DefaultDeltaOnRemoval",R"#(This class provides a default implementation of a TDF_DeltaOnRemoval.This class provides a default implementation of a TDF_DeltaOnRemoval.This class provides a default implementation of a TDF_DeltaOnRemoval.)#");

};

// user-defined post-inclusion per module

// user-defined post
