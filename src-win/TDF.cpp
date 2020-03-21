
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
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_ClosureMode.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_Data.hxx>
#include <Standard_NullObject.hxx>
#include <TDF_Delta.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_IDFilter.hxx>
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
#include <Standard_NoMoreObject.hxx>
#include <TDF_Transaction.hxx>
#include <TDF_Delta.hxx>
#include <Standard_GUID.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_Data.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_NullObject.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_LabelMapHasher.hxx>
#include <Standard_GUID.hxx>
#include <TDF_IDFilter.hxx>
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
// ./opencascade\TDF_LabelDoubleMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelDoubleMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_IDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_IDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_DeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_DeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelIndexedMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_IDList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_IDList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelIntegerMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelIntegerMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeIndexedMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeDeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeDeltaList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_GUIDProgIDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_GUIDProgIDMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_AttributeDoubleMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TDF_LabelDataMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TDF(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TDF"));


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

// classes

    // default constructor
    register_default_constructor<TDF , shared_ptr<TDF>>(m,"TDF");

    static_cast<py::class_<TDF , shared_ptr<TDF> >>(m.attr("TDF"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("LowestID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDF::LowestID),
                    R"#(Returns ID "00000000-0000-0000-0000-000000000000", sometimes used as null ID.)#" )
        .def_static("UppestID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDF::UppestID),
                    R"#(Returns ID "ffffffff-ffff-ffff-ffff-ffffffffffff".)#" )
        .def_static("AddLinkGUIDToProgID_s",
                    (void (*)( const Standard_GUID & , const TCollection_ExtendedString & ) ) static_cast<void (*)( const Standard_GUID & , const TCollection_ExtendedString & ) >(&TDF::AddLinkGUIDToProgID),
                    R"#(Sets link between GUID and ProgID in hidden DataMap)#"  , py::arg("ID"),  py::arg("ProgID"))
        .def_static("GUIDFromProgID_s",
                    (Standard_Boolean (*)( const TCollection_ExtendedString & , Standard_GUID & ) ) static_cast<Standard_Boolean (*)( const TCollection_ExtendedString & , Standard_GUID & ) >(&TDF::GUIDFromProgID),
                    R"#(Returns True if there is GUID for given <ProgID> then GUID is returned in <ID>)#"  , py::arg("ProgID"),  py::arg("ID"))
        .def_static("ProgIDFromGUID_s",
                    (Standard_Boolean (*)( const Standard_GUID & , TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (*)( const Standard_GUID & , TCollection_ExtendedString & ) >(&TDF::ProgIDFromGUID),
                    R"#(Returns True if there is ProgID for given <ID> then ProgID is returned in <ProgID>)#"  , py::arg("ID"),  py::arg("ProgID"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_Attribute ,opencascade::handle<TDF_Attribute>,Py_TDF_Attribute , Standard_Transient>>(m.attr("TDF_Attribute"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDF_Attribute::*)() const) static_cast<const Standard_GUID & (TDF_Attribute::*)() const>(&TDF_Attribute::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("SetID",
             (void (TDF_Attribute::*)( const Standard_GUID & ) ) static_cast<void (TDF_Attribute::*)( const Standard_GUID & ) >(&TDF_Attribute::SetID),
             R"#(Sets specific ID of the attribute (supports several attributes of one type at the same label feature).)#"  , py::arg(""))
        .def("SetID",
             (void (TDF_Attribute::*)() ) static_cast<void (TDF_Attribute::*)() >(&TDF_Attribute::SetID),
             R"#(Sets default ID defined in nested class (to be used for attributes having User ID feature).)#" )
        .def("Label",
             (const TDF_Label (TDF_Attribute::*)() const) static_cast<const TDF_Label (TDF_Attribute::*)() const>(&TDF_Attribute::Label),
             R"#(Returns the label to which the attribute is attached. If the label is not included in a DF, the label is null. See Label. Warning If the label is not included in a data framework, it is null. This function should not be redefined inline.)#" )
        .def("Transaction",
             (Standard_Integer (TDF_Attribute::*)() const) static_cast<Standard_Integer (TDF_Attribute::*)() const>(&TDF_Attribute::Transaction),
             R"#(Returns the transaction index in which the attribute has been created or modified.)#" )
        .def("UntilTransaction",
             (Standard_Integer (TDF_Attribute::*)() const) static_cast<Standard_Integer (TDF_Attribute::*)() const>(&TDF_Attribute::UntilTransaction),
             R"#(Returns the upper transaction index until which the attribute is/was valid. This number may vary. A removed attribute validity range is reduced to its transaction index.)#" )
        .def("IsValid",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsValid),
             R"#(Returns true if the attribute is valid; i.e. not a backuped or removed one.)#" )
        .def("IsNew",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsNew),
             R"#(Returns true if the attribute has no backup)#" )
        .def("IsForgotten",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsForgotten),
             R"#(Returns true if the attribute forgotten status is set.)#" )
        .def("IsAttribute",
             (Standard_Boolean (TDF_Attribute::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_Attribute::*)( const Standard_GUID & ) const>(&TDF_Attribute::IsAttribute),
             R"#(Returns true if it exists an associated attribute of <me> with <anID> as ID.)#"  , py::arg("anID"))
        .def("FindAttribute",
             (Standard_Boolean (TDF_Attribute::*)( const Standard_GUID & , opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_Attribute::*)( const Standard_GUID & , opencascade::handle<TDF_Attribute> & ) const>(&TDF_Attribute::FindAttribute),
             R"#(Finds an associated attribute of <me>, according to <anID>. the returned <anAttribute> is a valid one. The method returns True if found, False otherwise. A removed attribute cannot be found using this method.)#"  , py::arg("anID"),  py::arg("anAttribute"))
        .def("AddAttribute",
             (void (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<void (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_Attribute::AddAttribute),
             R"#(Adds an Attribute <other> to the label of <me>.Raises if there is already one of the same GUID fhan <other>.)#"  , py::arg("other"))
        .def("ForgetAttribute",
             (Standard_Boolean (TDF_Attribute::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_Attribute::*)( const Standard_GUID & ) const>(&TDF_Attribute::ForgetAttribute),
             R"#(Forgets the Attribute of GUID <aguid> associated to the label of <me>. Be carefull that if <me> is the attribute of <guid>, <me> will have a null label after this call. If the attribute doesn't exist returns False. Otherwise returns True.)#"  , py::arg("aguid"))
        .def("ForgetAllAttributes",
             (void (TDF_Attribute::*)( const Standard_Boolean ) const) static_cast<void (TDF_Attribute::*)( const Standard_Boolean ) const>(&TDF_Attribute::ForgetAllAttributes),
             R"#(Forgets all the attributes attached to the label of <me>. Does it on the sub-labels if <clearChildren> is set to true. Of course, this method is compatible with Transaction & Delta mecanisms. Be carefull that if <me> will have a null label after this call)#"  , py::arg("clearChildren")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AfterAddition",
             (void (TDF_Attribute::*)() ) static_cast<void (TDF_Attribute::*)() >(&TDF_Attribute::AfterAddition),
             R"#(Something to do after adding an Attribute to a label.)#" )
        .def("BeforeRemoval",
             (void (TDF_Attribute::*)() ) static_cast<void (TDF_Attribute::*)() >(&TDF_Attribute::BeforeRemoval),
             R"#(Something to do before removing an Attribute from a label.)#" )
        .def("BeforeForget",
             (void (TDF_Attribute::*)() ) static_cast<void (TDF_Attribute::*)() >(&TDF_Attribute::BeforeForget),
             R"#(Something to do before forgetting an Attribute to a label.)#" )
        .def("AfterResume",
             (void (TDF_Attribute::*)() ) static_cast<void (TDF_Attribute::*)() >(&TDF_Attribute::AfterResume),
             R"#(Something to do after resuming an Attribute from a label.)#" )
        .def("AfterRetrieval",
             (Standard_Boolean (TDF_Attribute::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (TDF_Attribute::*)( const Standard_Boolean ) >(&TDF_Attribute::AfterRetrieval),
             R"#(Something to do AFTER creation of an attribute by persistent-transient translation. The returned status says if AfterUndo has been performed (true) or if this callback must be called once again further (false). If <forceIt> is set to true, the method MUST perform and return true. Does nothing by default and returns true.)#"  , py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("BeforeUndo",
             (Standard_Boolean (TDF_Attribute::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDF_Attribute::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TDF_Attribute::BeforeUndo),
             R"#(Something to do before applying <anAttDelta>. The returned status says if AfterUndo has been performed (true) or if this callback must be called once again further (false). If <forceIt> is set to true, the method MUST perform and return true. Does nothing by default and returns true.)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AfterUndo",
             (Standard_Boolean (TDF_Attribute::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDF_Attribute::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TDF_Attribute::AfterUndo),
             R"#(Something to do after applying <anAttDelta>. The returned status says if AfterUndo has been performed (true) or if this callback must be called once again further (false). If <forceIt> is set to true, the method MUST perform and return true. Does nothing by default and returns true.)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("BeforeCommitTransaction",
             (void (TDF_Attribute::*)() ) static_cast<void (TDF_Attribute::*)() >(&TDF_Attribute::BeforeCommitTransaction),
             R"#(A callback. By default does nothing. It is called by TDF_Data::CommitTransaction() method.)#" )
        .def("Backup",
             (void (TDF_Attribute::*)() ) static_cast<void (TDF_Attribute::*)() >(&TDF_Attribute::Backup),
             R"#(Backups the attribute. The backuped attribute is flagged "Backuped" and not "Valid".)#" )
        .def("IsBackuped",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsBackuped),
             R"#(Returns true if the attribute backup status is set. This status is set/unset by the Backup() method.)#" )
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TDF_Attribute::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_Attribute::*)() const>(&TDF_Attribute::BackupCopy),
             R"#(Copies the attribute contents into a new other attribute. It is used by Backup().)#" )
        .def("Restore",
             (void (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDF_Attribute::Restore),
             R"#(Restores the backuped contents from <anAttribute> into this one. It is used when aborting a transaction.)#"  , py::arg("anAttribute"))
        .def("DeltaOnAddition",
             (opencascade::handle<TDF_DeltaOnAddition> (TDF_Attribute::*)() const) static_cast<opencascade::handle<TDF_DeltaOnAddition> (TDF_Attribute::*)() const>(&TDF_Attribute::DeltaOnAddition),
             R"#(Makes an AttributeDelta because <me> appeared. The only known use of a redefinition of this method is to return a null handle (no delta).)#" )
        .def("DeltaOnForget",
             (opencascade::handle<TDF_DeltaOnForget> (TDF_Attribute::*)() const) static_cast<opencascade::handle<TDF_DeltaOnForget> (TDF_Attribute::*)() const>(&TDF_Attribute::DeltaOnForget),
             R"#(Makes an AttributeDelta because <me> has been forgotten.)#" )
        .def("DeltaOnResume",
             (opencascade::handle<TDF_DeltaOnResume> (TDF_Attribute::*)() const) static_cast<opencascade::handle<TDF_DeltaOnResume> (TDF_Attribute::*)() const>(&TDF_Attribute::DeltaOnResume),
             R"#(Makes an AttributeDelta because <me> has been resumed.)#" )
        .def("DeltaOnModification",
             (opencascade::handle<TDF_DeltaOnModification> (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<opencascade::handle<TDF_DeltaOnModification> (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_Attribute::DeltaOnModification),
             R"#(Makes a DeltaOnModification between <me> and <anOldAttribute.)#"  , py::arg("anOldAttribute"))
        .def("DeltaOnModification",
             (void (TDF_Attribute::*)( const opencascade::handle<TDF_DeltaOnModification> & ) ) static_cast<void (TDF_Attribute::*)( const opencascade::handle<TDF_DeltaOnModification> & ) >(&TDF_Attribute::DeltaOnModification),
             R"#(Applies a DeltaOnModification to <me>.)#"  , py::arg("aDelta"))
        .def("DeltaOnRemoval",
             (opencascade::handle<TDF_DeltaOnRemoval> (TDF_Attribute::*)() const) static_cast<opencascade::handle<TDF_DeltaOnRemoval> (TDF_Attribute::*)() const>(&TDF_Attribute::DeltaOnRemoval),
             R"#(Makes a DeltaOnRemoval on <me> because <me> has disappeared from the DS.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDF_Attribute::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_Attribute::*)() const>(&TDF_Attribute::NewEmpty),
             R"#(Returns an new empty attribute from the good end type. It is used by the copy algorithm.)#" )
        .def("Paste",
             (void (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDF_Attribute::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDF_Attribute::Paste),
             R"#(This method is different from the "Copy" one, because it is used when copying an attribute from a source structure into a target structure. This method may paste the contents of <me> into <intoAttribute>.)#"  , py::arg("intoAttribute"),  py::arg("aRelocationTable"))
        .def("References",
             (void (TDF_Attribute::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDF_Attribute::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDF_Attribute::References),
             R"#(Adds the first level referenced attributes and labels to <aDataSet>.)#"  , py::arg("aDataSet"))
        .def("Dump",
             (Standard_OStream & (TDF_Attribute::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDF_Attribute::*)( std::ostream & ) const>(&TDF_Attribute::Dump),
             R"#(Dumps the minimum information about <me> on <aStream>.)#"  , py::arg("anOS"))
        .def("ExtendedDump",
             (void (TDF_Attribute::*)( std::ostream & , const TDF_IDFilter & , NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const) static_cast<void (TDF_Attribute::*)( std::ostream & , const TDF_IDFilter & , NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const>(&TDF_Attribute::ExtendedDump),
             R"#(Dumps the attribute content on <aStream>, using <aMap> like this: if an attribute is not in the map, first put add it to the map and then dump it. Use the map rank instead of dumping each attribute field.)#"  , py::arg("anOS"),  py::arg("aFilter"),  py::arg("aMap"))
        .def("Forget",
             (void (TDF_Attribute::*)( const Standard_Integer ) ) static_cast<void (TDF_Attribute::*)( const Standard_Integer ) >(&TDF_Attribute::Forget),
             R"#(Forgets the attribute. <aTransaction> is the current transaction in which the forget is done. A forgotten attribute is also flagged not "Valid".)#"  , py::arg("aTransaction"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_Attribute::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_Attribute::*)() const>(&TDF_Attribute::DynamicType),
             R"#(None)#" )
        .def("Transaction",
             (Standard_Integer (TDF_Attribute::*)() const) static_cast<Standard_Integer (TDF_Attribute::*)() const>(&TDF_Attribute::Transaction),
             R"#(Returns the transaction index in which the attribute has been created or modified.)#" )
        .def("IsValid",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsValid),
             R"#(Returns true if the attribute is valid; i.e. not a backuped or removed one.)#" )
        .def("IsBackuped",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsBackuped),
             R"#(Returns true if the attribute backup status is set. This status is set/unset by the Backup() method.)#" )
        .def("IsNew",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsNew),
             R"#(Returns true if the attribute has no backup)#" )
        .def("IsForgotten",
             (Standard_Boolean (TDF_Attribute::*)() const) static_cast<Standard_Boolean (TDF_Attribute::*)() const>(&TDF_Attribute::IsForgotten),
             R"#(Returns true if the attribute forgotten status is set.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_Attribute::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_Attribute::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_AttributeDelta ,opencascade::handle<TDF_AttributeDelta>,Py_TDF_AttributeDelta , Standard_Transient>>(m.attr("TDF_AttributeDelta"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TDF_AttributeDelta::*)() ) static_cast<void (TDF_AttributeDelta::*)() >(&TDF_AttributeDelta::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("Label",
             (TDF_Label (TDF_AttributeDelta::*)() const) static_cast<TDF_Label (TDF_AttributeDelta::*)() const>(&TDF_AttributeDelta::Label),
             R"#(Returns the label concerned by <me>.)#" )
        .def("Attribute",
             (opencascade::handle<TDF_Attribute> (TDF_AttributeDelta::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_AttributeDelta::*)() const>(&TDF_AttributeDelta::Attribute),
             R"#(Returns the reference attribute.)#" )
        .def("ID",
             (Standard_GUID (TDF_AttributeDelta::*)() const) static_cast<Standard_GUID (TDF_AttributeDelta::*)() const>(&TDF_AttributeDelta::ID),
             R"#(Returns the ID of the attribute concerned by <me>.)#" )
        .def("Dump",
             (Standard_OStream & (TDF_AttributeDelta::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDF_AttributeDelta::*)( std::ostream & ) const>(&TDF_AttributeDelta::Dump),
             R"#(Dumps the contents.)#"  , py::arg("OS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_AttributeDelta::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_AttributeDelta::*)() const>(&TDF_AttributeDelta::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_AttributeDelta::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_AttributeDelta::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_AttributeIterator , shared_ptr<TDF_AttributeIterator> >>(m.attr("TDF_AttributeIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TDF_Label &,const Standard_Boolean >()  , py::arg("aLabel"),  py::arg("withoutForgotten")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TDF_LabelNodePtr,const Standard_Boolean >()  , py::arg("aLabelNode"),  py::arg("withoutForgotten")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (TDF_AttributeIterator::*)( const TDF_Label & , const Standard_Boolean ) ) static_cast<void (TDF_AttributeIterator::*)( const TDF_Label & , const Standard_Boolean ) >(&TDF_AttributeIterator::Initialize),
             R"#(None)#"  , py::arg("aLabel"),  py::arg("withoutForgotten")=static_cast<const Standard_Boolean>(Standard_True))
        .def("More",
             (Standard_Boolean (TDF_AttributeIterator::*)() const) static_cast<Standard_Boolean (TDF_AttributeIterator::*)() const>(&TDF_AttributeIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TDF_AttributeIterator::*)() ) static_cast<void (TDF_AttributeIterator::*)() >(&TDF_AttributeIterator::Next),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<TDF_Attribute> (TDF_AttributeIterator::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_AttributeIterator::*)() const>(&TDF_AttributeIterator::Value),
             R"#(None)#" )
        .def("PtrValue",
             (const TDF_Attribute * (TDF_AttributeIterator::*)() const) static_cast<const TDF_Attribute * (TDF_AttributeIterator::*)() const>(&TDF_AttributeIterator::PtrValue),
             R"#(Provides an access to the internal pointer of the current attribute. The method has better performance as not-creating handle.)#" )
        .def("More",
             (Standard_Boolean (TDF_AttributeIterator::*)() const) static_cast<Standard_Boolean (TDF_AttributeIterator::*)() const>(&TDF_AttributeIterator::More),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<TDF_Attribute> (TDF_AttributeIterator::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_AttributeIterator::*)() const>(&TDF_AttributeIterator::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_ChildIDIterator , shared_ptr<TDF_ChildIDIterator> >>(m.attr("TDF_ChildIDIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TDF_Label &,const Standard_GUID &,const Standard_Boolean >()  , py::arg("aLabel"),  py::arg("anID"),  py::arg("allLevels")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (TDF_ChildIDIterator::*)( const TDF_Label & , const Standard_GUID & , const Standard_Boolean ) ) static_cast<void (TDF_ChildIDIterator::*)( const TDF_Label & , const Standard_GUID & , const Standard_Boolean ) >(&TDF_ChildIDIterator::Initialize),
             R"#(Initializes the iteration on the children of the given label. If <allLevels> option is set to true, it explores not only the first, but all the sub label levels.)#"  , py::arg("aLabel"),  py::arg("anID"),  py::arg("allLevels")=static_cast<const Standard_Boolean>(Standard_False))
        .def("More",
             (Standard_Boolean (TDF_ChildIDIterator::*)() const) static_cast<Standard_Boolean (TDF_ChildIDIterator::*)() const>(&TDF_ChildIDIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TDF_ChildIDIterator::*)() ) static_cast<void (TDF_ChildIDIterator::*)() >(&TDF_ChildIDIterator::Next),
             R"#(Move to the next Item)#" )
        .def("NextBrother",
             (void (TDF_ChildIDIterator::*)() ) static_cast<void (TDF_ChildIDIterator::*)() >(&TDF_ChildIDIterator::NextBrother),
             R"#(Move to the next Brother. If there is none, go up etc. This method is interesting only with "allLevels" behavior, because it avoids to explore the current label children.)#" )
        .def("Value",
             (opencascade::handle<TDF_Attribute> (TDF_ChildIDIterator::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_ChildIDIterator::*)() const>(&TDF_ChildIDIterator::Value),
             R"#(Returns the current item; a null handle if there is none.)#" )
        .def("More",
             (Standard_Boolean (TDF_ChildIDIterator::*)() const) static_cast<Standard_Boolean (TDF_ChildIDIterator::*)() const>(&TDF_ChildIDIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Value",
             (opencascade::handle<TDF_Attribute> (TDF_ChildIDIterator::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_ChildIDIterator::*)() const>(&TDF_ChildIDIterator::Value),
             R"#(Returns the current item; a null handle if there is none.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_ChildIterator , shared_ptr<TDF_ChildIterator> >>(m.attr("TDF_ChildIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TDF_Label &,const Standard_Boolean >()  , py::arg("aLabel"),  py::arg("allLevels")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (TDF_ChildIterator::*)( const TDF_Label & , const Standard_Boolean ) ) static_cast<void (TDF_ChildIterator::*)( const TDF_Label & , const Standard_Boolean ) >(&TDF_ChildIterator::Initialize),
             R"#(Initializes the iteration on the children of the given label. If <allLevels> option is set to true, it explores not only the first, but all the sub label levels. If allLevels is false, only the first level of child labels is explored. In the example below, the label is iterated using Initialize, More and Next and its child labels dumped using TDF_Tool::Entry. Example void DumpChildren(const TDF_Label& aLabel) { TDF_ChildIterator it; TCollection_AsciiString es; for (it.Initialize(aLabel,Standard_True); it.More(); it.Next()){ TDF_Tool::Entry(it.Value(),es); std::cout << as.ToCString() << std::endl; } })#"  , py::arg("aLabel"),  py::arg("allLevels")=static_cast<const Standard_Boolean>(Standard_False))
        .def("More",
             (Standard_Boolean (TDF_ChildIterator::*)() const) static_cast<Standard_Boolean (TDF_ChildIterator::*)() const>(&TDF_ChildIterator::More),
             R"#(Returns true if a current label is found in the iteration process.)#" )
        .def("Next",
             (void (TDF_ChildIterator::*)() ) static_cast<void (TDF_ChildIterator::*)() >(&TDF_ChildIterator::Next),
             R"#(Move the current iteration to the next Item.)#" )
        .def("NextBrother",
             (void (TDF_ChildIterator::*)() ) static_cast<void (TDF_ChildIterator::*)() >(&TDF_ChildIterator::NextBrother),
             R"#(Moves this iteration to the next brother label. A brother label is one with the same father as an initial label. Use this function when the non-empty constructor or Initialize has allLevels set to true. The result is that the iteration does not explore the children of the current label. This method is interesting only with "allLevels" behavior, because it avoids to explore the current label children.)#" )
        .def("Value",
             (const TDF_Label (TDF_ChildIterator::*)() const) static_cast<const TDF_Label (TDF_ChildIterator::*)() const>(&TDF_ChildIterator::Value),
             R"#(Returns the current label; or, if there is none, a null label.)#" )
        .def("More",
             (Standard_Boolean (TDF_ChildIterator::*)() const) static_cast<Standard_Boolean (TDF_ChildIterator::*)() const>(&TDF_ChildIterator::More),
             R"#(Returns true if a current label is found in the iteration process.)#" )
        .def("Value",
             (const TDF_Label (TDF_ChildIterator::*)() const) static_cast<const TDF_Label (TDF_ChildIterator::*)() const>(&TDF_ChildIterator::Value),
             R"#(Returns the current label; or, if there is none, a null label.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_ClosureMode , shared_ptr<TDF_ClosureMode> >>(m.attr("TDF_ClosureMode"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("aMode")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Descendants",
             (void (TDF_ClosureMode::*)( const Standard_Boolean ) ) static_cast<void (TDF_ClosureMode::*)( const Standard_Boolean ) >(&TDF_ClosureMode::Descendants),
             R"#(Sets the mode "Descendants" to <aStatus>.)#"  , py::arg("aStatus"))
        .def("Descendants",
             (Standard_Boolean (TDF_ClosureMode::*)() const) static_cast<Standard_Boolean (TDF_ClosureMode::*)() const>(&TDF_ClosureMode::Descendants),
             R"#(Returns true if the mode "Descendants" is set.)#" )
        .def("References",
             (void (TDF_ClosureMode::*)( const Standard_Boolean ) ) static_cast<void (TDF_ClosureMode::*)( const Standard_Boolean ) >(&TDF_ClosureMode::References),
             R"#(Sets the mode "References" to <aStatus>.)#"  , py::arg("aStatus"))
        .def("References",
             (Standard_Boolean (TDF_ClosureMode::*)() const) static_cast<Standard_Boolean (TDF_ClosureMode::*)() const>(&TDF_ClosureMode::References),
             R"#(Returns true if the mode "References" is set.)#" )
        .def("Descendants",
             (void (TDF_ClosureMode::*)( const Standard_Boolean ) ) static_cast<void (TDF_ClosureMode::*)( const Standard_Boolean ) >(&TDF_ClosureMode::Descendants),
             R"#(Sets the mode "Descendants" to <aStatus>.)#"  , py::arg("aStatus"))
        .def("Descendants",
             (Standard_Boolean (TDF_ClosureMode::*)() const) static_cast<Standard_Boolean (TDF_ClosureMode::*)() const>(&TDF_ClosureMode::Descendants),
             R"#(Returns true if the mode "Descendants" is set.)#" )
        .def("References",
             (void (TDF_ClosureMode::*)( const Standard_Boolean ) ) static_cast<void (TDF_ClosureMode::*)( const Standard_Boolean ) >(&TDF_ClosureMode::References),
             R"#(Sets the mode "References" to <aStatus>.)#"  , py::arg("aStatus"))
        .def("References",
             (Standard_Boolean (TDF_ClosureMode::*)() const) static_cast<Standard_Boolean (TDF_ClosureMode::*)() const>(&TDF_ClosureMode::References),
             R"#(Returns true if the mode "References" is set.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TDF_ClosureTool , shared_ptr<TDF_ClosureTool>>(m,"TDF_ClosureTool");

    static_cast<py::class_<TDF_ClosureTool , shared_ptr<TDF_ClosureTool> >>(m.attr("TDF_ClosureTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Closure_s",
                    (void (*)( const opencascade::handle<TDF_DataSet> & ) ) static_cast<void (*)( const opencascade::handle<TDF_DataSet> & ) >(&TDF_ClosureTool::Closure),
                    R"#(Builds the transitive closure of label and attribute sets into <aDataSet>.)#"  , py::arg("aDataSet"))
        .def_static("Closure_s",
                    (void (*)( const opencascade::handle<TDF_DataSet> & , const TDF_IDFilter & , const TDF_ClosureMode & ) ) static_cast<void (*)( const opencascade::handle<TDF_DataSet> & , const TDF_IDFilter & , const TDF_ClosureMode & ) >(&TDF_ClosureTool::Closure),
                    R"#(Builds the transitive closure of label and attribute sets into <aDataSet>. Uses <aFilter> to determine if an attribute has to be taken in account or not. Uses <aMode> for various way of closing.)#"  , py::arg("aDataSet"),  py::arg("aFilter"),  py::arg("aMode"))
        .def_static("Closure_s",
                    (void (*)( const TDF_Label & , NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & , const TDF_IDFilter & , const TDF_ClosureMode & ) ) static_cast<void (*)( const TDF_Label & , NCollection_Map<TDF_Label, TDF_LabelMapHasher> & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & , const TDF_IDFilter & , const TDF_ClosureMode & ) >(&TDF_ClosureTool::Closure),
                    R"#(Builds the transitive closure of <aLabel>.)#"  , py::arg("aLabel"),  py::arg("aLabMap"),  py::arg("anAttMap"),  py::arg("aFilter"),  py::arg("aMode"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TDF_ComparisonTool , shared_ptr<TDF_ComparisonTool>>(m,"TDF_ComparisonTool");

    static_cast<py::class_<TDF_ComparisonTool , shared_ptr<TDF_ComparisonTool> >>(m.attr("TDF_ComparisonTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Compare_s",
                    (void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_DataSet> & , const TDF_IDFilter & , const opencascade::handle<TDF_RelocationTable> & ) ) static_cast<void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_DataSet> & , const TDF_IDFilter & , const opencascade::handle<TDF_RelocationTable> & ) >(&TDF_ComparisonTool::Compare),
                    R"#(Compares <aSourceDataSet> with <aTargetDataSet>, updating <aRelocationTable> with labels and attributes found in both sets.)#"  , py::arg("aSourceDataSet"),  py::arg("aTargetDataSet"),  py::arg("aFilter"),  py::arg("aRelocationTable"))
        .def_static("SourceUnbound_s",
                    (Standard_Boolean (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & , const opencascade::handle<TDF_DataSet> & , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & , const opencascade::handle<TDF_DataSet> & , const Standard_Integer ) >(&TDF_ComparisonTool::SourceUnbound),
                    R"#(Finds from <aRefDataSet> all the keys not bound into <aRelocationTable> and put them into <aDiffDataSet>. Returns True if the difference contains at least one key. (A key is a source object).)#"  , py::arg("aRefDataSet"),  py::arg("aRelocationTable"),  py::arg("aFilter"),  py::arg("aDiffDataSet"),  py::arg("anOption")=static_cast<const Standard_Integer>(2))
        .def_static("TargetUnbound_s",
                    (Standard_Boolean (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & , const opencascade::handle<TDF_DataSet> & , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & , const opencascade::handle<TDF_DataSet> & , const Standard_Integer ) >(&TDF_ComparisonTool::TargetUnbound),
                    R"#(Substracts from <aRefDataSet> all the items bound into <aRelocationTable>. The result is put into <aDiffDataSet>. Returns True if the difference contains at least one item. (An item is a target object).)#"  , py::arg("aRefDataSet"),  py::arg("aRelocationTable"),  py::arg("aFilter"),  py::arg("aDiffDataSet"),  py::arg("anOption")=static_cast<const Standard_Integer>(2))
        .def_static("Cut_s",
                    (void (*)( const opencascade::handle<TDF_DataSet> & ) ) static_cast<void (*)( const opencascade::handle<TDF_DataSet> & ) >(&TDF_ComparisonTool::Cut),
                    R"#(Removes attributes from <aDataSet>.)#"  , py::arg("aDataSet"))
        .def_static("IsSelfContained_s",
                    (Standard_Boolean (*)( const TDF_Label & , const opencascade::handle<TDF_DataSet> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , const opencascade::handle<TDF_DataSet> & ) >(&TDF_ComparisonTool::IsSelfContained),
                    R"#(Returns true if all the labels of <aDataSet> are descendant of <aLabel>.)#"  , py::arg("aLabel"),  py::arg("aDataSet"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_CopyLabel , shared_ptr<TDF_CopyLabel> >>(m.attr("TDF_CopyLabel"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TDF_Label &,const TDF_Label & >()  , py::arg("aSource"),  py::arg("aTarget") )
    // custom constructors
    // methods
        .def("Load",
             (void (TDF_CopyLabel::*)( const TDF_Label & , const TDF_Label & ) ) static_cast<void (TDF_CopyLabel::*)( const TDF_Label & , const TDF_Label & ) >(&TDF_CopyLabel::Load),
             R"#(Loads src and tgt labels)#"  , py::arg("aSource"),  py::arg("aTarget"))
        .def("UseFilter",
             (void (TDF_CopyLabel::*)( const TDF_IDFilter & ) ) static_cast<void (TDF_CopyLabel::*)( const TDF_IDFilter & ) >(&TDF_CopyLabel::UseFilter),
             R"#(Sets filter)#"  , py::arg("aFilter"))
        .def("Perform",
             (void (TDF_CopyLabel::*)() ) static_cast<void (TDF_CopyLabel::*)() >(&TDF_CopyLabel::Perform),
             R"#(performs algorithm of selfcontained copy)#" )
        .def("IsDone",
             (Standard_Boolean (TDF_CopyLabel::*)() const) static_cast<Standard_Boolean (TDF_CopyLabel::*)() const>(&TDF_CopyLabel::IsDone),
             R"#(None)#" )
        .def("RelocationTable",
             (const opencascade::handle<TDF_RelocationTable> & (TDF_CopyLabel::*)() const) static_cast<const opencascade::handle<TDF_RelocationTable> & (TDF_CopyLabel::*)() const>(&TDF_CopyLabel::RelocationTable),
             R"#(returns relocation table)#" )
        .def("IsDone",
             (Standard_Boolean (TDF_CopyLabel::*)() const) static_cast<Standard_Boolean (TDF_CopyLabel::*)() const>(&TDF_CopyLabel::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ExternalReferences_s",
                    (Standard_Boolean (*)( const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & , const TDF_IDFilter & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & , const TDF_IDFilter & ) >(&TDF_CopyLabel::ExternalReferences),
                    R"#(Check external references and if exist fills the aExternals Map)#"  , py::arg("Lab"),  py::arg("aExternals"),  py::arg("aFilter"))
        .def_static("ExternalReferences_s",
                    (void (*)( const TDF_Label & , const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & , const TDF_IDFilter & , opencascade::handle<TDF_DataSet> & ) ) static_cast<void (*)( const TDF_Label & , const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & , const TDF_IDFilter & , opencascade::handle<TDF_DataSet> & ) >(&TDF_CopyLabel::ExternalReferences),
                    R"#(Check external references and if exist fills the aExternals Map)#"  , py::arg("aRefLab"),  py::arg("Lab"),  py::arg("aExternals"),  py::arg("aFilter"),  py::arg("aDataSet"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TDF_CopyTool , shared_ptr<TDF_CopyTool>>(m,"TDF_CopyTool");

    static_cast<py::class_<TDF_CopyTool , shared_ptr<TDF_CopyTool> >>(m.attr("TDF_CopyTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Copy_s",
                    (void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & ) ) static_cast<void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & ) >(&TDF_CopyTool::Copy),
                    R"#(Copy <aSourceDataSet> with using and updating <aRelocationTable>. This method ignores target attributes privilege over source ones.)#"  , py::arg("aSourceDataSet"),  py::arg("aRelocationTable"))
        .def_static("Copy_s",
                    (void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & ) ) static_cast<void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & ) >(&TDF_CopyTool::Copy),
                    R"#(Copy <aSourceDataSet> using and updating <aRelocationTable>. Use <aPrivilegeFilter> to give a list of IDs for which the target attribute prevails over the source one.)#"  , py::arg("aSourceDataSet"),  py::arg("aRelocationTable"),  py::arg("aPrivilegeFilter"))
        .def_static("Copy_s",
                    (void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & , const TDF_IDFilter & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<TDF_DataSet> & , const opencascade::handle<TDF_RelocationTable> & , const TDF_IDFilter & , const TDF_IDFilter & , const Standard_Boolean ) >(&TDF_CopyTool::Copy),
                    R"#(Copy <aSourceDataSet> using and updating <aRelocationTable>. Use <aPrivilegeFilter> to give a list of IDs for which the target attribute prevails over the source one. If <setSelfContained> is set to true, every TDF_Reference will be replaced by the referenced structure according to <aRefFilter>.)#"  , py::arg("aSourceDataSet"),  py::arg("aRelocationTable"),  py::arg("aPrivilegeFilter"),  py::arg("aRefFilter"),  py::arg("setSelfContained"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_Data ,opencascade::handle<TDF_Data> , Standard_Transient>>(m.attr("TDF_Data"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Root",
             (const TDF_Label (TDF_Data::*)() const) static_cast<const TDF_Label (TDF_Data::*)() const>(&TDF_Data::Root),
             R"#(Returns the root label of the Data structure.)#" )
        .def("Transaction",
             (Standard_Integer (TDF_Data::*)() const) static_cast<Standard_Integer (TDF_Data::*)() const>(&TDF_Data::Transaction),
             R"#(Returns the current transaction number.)#" )
        .def("Time",
             (Standard_Integer (TDF_Data::*)() const) static_cast<Standard_Integer (TDF_Data::*)() const>(&TDF_Data::Time),
             R"#(Returns the current tick. It is incremented each Commit.)#" )
        .def("IsApplicable",
             (Standard_Boolean (TDF_Data::*)( const opencascade::handle<TDF_Delta> & ) const) static_cast<Standard_Boolean (TDF_Data::*)( const opencascade::handle<TDF_Delta> & ) const>(&TDF_Data::IsApplicable),
             R"#(Returns true if <aDelta> is applicable HERE and NOW.)#"  , py::arg("aDelta"))
        .def("Undo",
             (opencascade::handle<TDF_Delta> (TDF_Data::*)( const opencascade::handle<TDF_Delta> & , const Standard_Boolean ) ) static_cast<opencascade::handle<TDF_Delta> (TDF_Data::*)( const opencascade::handle<TDF_Delta> & , const Standard_Boolean ) >(&TDF_Data::Undo),
             R"#(Apply <aDelta> to undo a set of attribute modifications.)#"  , py::arg("aDelta"),  py::arg("withDelta")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Destroy",
             (void (TDF_Data::*)() ) static_cast<void (TDF_Data::*)() >(&TDF_Data::Destroy),
             R"#(None)#" )
        .def("NotUndoMode",
             (Standard_Boolean (TDF_Data::*)() const) static_cast<Standard_Boolean (TDF_Data::*)() const>(&TDF_Data::NotUndoMode),
             R"#(Returns the undo mode status.)#" )
        .def("Dump",
             (Standard_OStream & (TDF_Data::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDF_Data::*)( std::ostream & ) const>(&TDF_Data::Dump),
             R"#(Dumps the Data on <aStream>.)#"  , py::arg("anOS"))
        .def("AllowModification",
             (void (TDF_Data::*)( const Standard_Boolean ) ) static_cast<void (TDF_Data::*)( const Standard_Boolean ) >(&TDF_Data::AllowModification),
             R"#(Sets modification mode.)#"  , py::arg("isAllowed"))
        .def("IsModificationAllowed",
             (Standard_Boolean (TDF_Data::*)() const) static_cast<Standard_Boolean (TDF_Data::*)() const>(&TDF_Data::IsModificationAllowed),
             R"#(returns modification mode.)#" )
        .def("LabelNodeAllocator",
             (const TDF_HAllocator & (TDF_Data::*)() const) static_cast<const TDF_HAllocator & (TDF_Data::*)() const>(&TDF_Data::LabelNodeAllocator),
             R"#(Returns TDF_HAllocator, which is an incremental allocator used by TDF_LabelNode. This allocator is used to manage TDF_LabelNode objects, but it can also be used for allocating memory to application-specific data (be careful because this allocator does not release the memory). The benefits of this allocation scheme are noticeable when dealing with large OCAF documents, due to: 1. Very quick allocation of objects (memory heap is not used, the algorithm that replaces it is very simple). 2. Very quick destruction of objects (memory is released not by destructors of TDF_LabelNode, but rather by the destructor of TDF_Data). 3. TDF_LabelNode objects do not fragmentize the memory; they are kept compactly in a number of arrays of 16K each. 4. Swapping is reduced on large data, because each document now occupies a smaller number of memory pages.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_Data::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_Data::*)() const>(&TDF_Data::DynamicType),
             R"#(None)#" )
        .def("Transaction",
             (Standard_Integer (TDF_Data::*)() const) static_cast<Standard_Integer (TDF_Data::*)() const>(&TDF_Data::Transaction),
             R"#(Returns the current transaction number.)#" )
        .def("Root",
             (const TDF_Label (TDF_Data::*)() const) static_cast<const TDF_Label (TDF_Data::*)() const>(&TDF_Data::Root),
             R"#(Returns the root label of the Data structure.)#" )
        .def("Time",
             (Standard_Integer (TDF_Data::*)() const) static_cast<Standard_Integer (TDF_Data::*)() const>(&TDF_Data::Time),
             R"#(Returns the current tick. It is incremented each Commit.)#" )
        .def("NotUndoMode",
             (Standard_Boolean (TDF_Data::*)() const) static_cast<Standard_Boolean (TDF_Data::*)() const>(&TDF_Data::NotUndoMode),
             R"#(Returns the undo mode status.)#" )
        .def("AllowModification",
             (void (TDF_Data::*)( const Standard_Boolean ) ) static_cast<void (TDF_Data::*)( const Standard_Boolean ) >(&TDF_Data::AllowModification),
             R"#(Sets modification mode.)#"  , py::arg("theAllowModification"))
        .def("IsModificationAllowed",
             (Standard_Boolean (TDF_Data::*)() const) static_cast<Standard_Boolean (TDF_Data::*)() const>(&TDF_Data::IsModificationAllowed),
             R"#(returns modification mode.)#" )
        .def("LabelNodeAllocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (TDF_Data::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (TDF_Data::*)() const>(&TDF_Data::LabelNodeAllocator),
             R"#(Returns TDF_HAllocator, which is an incremental allocator used by TDF_LabelNode. This allocator is used to manage TDF_LabelNode objects, but it can also be used for allocating memory to application-specific data (be careful because this allocator does not release the memory). The benefits of this allocation scheme are noticeable when dealing with large OCAF documents, due to: 1. Very quick allocation of objects (memory heap is not used, the algorithm that replaces it is very simple). 2. Very quick destruction of objects (memory is released not by destructors of TDF_LabelNode, but rather by the destructor of TDF_Data). 3. TDF_LabelNode objects do not fragmentize the memory; they are kept compactly in a number of arrays of 16K each. 4. Swapping is reduced on large data, because each document now occupies a smaller number of memory pages.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_Data::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_Data::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DataSet ,opencascade::handle<TDF_DataSet> , Standard_Transient>>(m.attr("TDF_DataSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TDF_DataSet::*)() ) static_cast<void (TDF_DataSet::*)() >(&TDF_DataSet::Clear),
             R"#(Clears all information.)#" )
        .def("IsEmpty",
             (Standard_Boolean (TDF_DataSet::*)() const) static_cast<Standard_Boolean (TDF_DataSet::*)() const>(&TDF_DataSet::IsEmpty),
             R"#(Returns true if there is at least one label or one attribute.)#" )
        .def("AddLabel",
             (void (TDF_DataSet::*)( const TDF_Label & ) ) static_cast<void (TDF_DataSet::*)( const TDF_Label & ) >(&TDF_DataSet::AddLabel),
             R"#(Adds <aLabel> in the current data set.)#"  , py::arg("aLabel"))
        .def("ContainsLabel",
             (Standard_Boolean (TDF_DataSet::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_DataSet::*)( const TDF_Label & ) const>(&TDF_DataSet::ContainsLabel),
             R"#(Returns true if the label <alabel> is in the data set.)#"  , py::arg("aLabel"))
        .def("Labels",
             (TDF_LabelMap & (TDF_DataSet::*)() ) static_cast<TDF_LabelMap & (TDF_DataSet::*)() >(&TDF_DataSet::Labels),
             R"#(Returns the map of labels in this data set. This map can be used directly, or updated.)#" )
        .def("AddAttribute",
             (void (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDF_DataSet::AddAttribute),
             R"#(Adds <anAttribute> into the current data set.)#"  , py::arg("anAttribute"))
        .def("ContainsAttribute",
             (Standard_Boolean (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_DataSet::ContainsAttribute),
             R"#(Returns true if <anAttribute> is in the data set.)#"  , py::arg("anAttribute"))
        .def("Attributes",
             (TDF_AttributeMap & (TDF_DataSet::*)() ) static_cast<TDF_AttributeMap & (TDF_DataSet::*)() >(&TDF_DataSet::Attributes),
             R"#(Returns the map of attributes in the current data set. This map can be used directly, or updated.)#" )
        .def("AddRoot",
             (void (TDF_DataSet::*)( const TDF_Label & ) ) static_cast<void (TDF_DataSet::*)( const TDF_Label & ) >(&TDF_DataSet::AddRoot),
             R"#(Adds a root label to <myRootLabels>.)#"  , py::arg("aLabel"))
        .def("Roots",
             (TDF_LabelList & (TDF_DataSet::*)() ) static_cast<TDF_LabelList & (TDF_DataSet::*)() >(&TDF_DataSet::Roots),
             R"#(Returns <myRootLabels> to be used or updated.)#" )
        .def("Dump",
             (Standard_OStream & (TDF_DataSet::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDF_DataSet::*)( std::ostream & ) const>(&TDF_DataSet::Dump),
             R"#(Dumps the minimum information about <me> on <aStream>.)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DataSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DataSet::*)() const>(&TDF_DataSet::DynamicType),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (TDF_DataSet::*)() const) static_cast<Standard_Boolean (TDF_DataSet::*)() const>(&TDF_DataSet::IsEmpty),
             R"#(Returns true if there is at least one label or one attribute.)#" )
        .def("AddLabel",
             (void (TDF_DataSet::*)( const TDF_Label & ) ) static_cast<void (TDF_DataSet::*)( const TDF_Label & ) >(&TDF_DataSet::AddLabel),
             R"#(Adds <aLabel> in the current data set.)#"  , py::arg("aLabel"))
        .def("ContainsLabel",
             (Standard_Boolean (TDF_DataSet::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_DataSet::*)( const TDF_Label & ) const>(&TDF_DataSet::ContainsLabel),
             R"#(Returns true if the label <alabel> is in the data set.)#"  , py::arg("aLabel"))
        .def("Labels",
             (TDF_LabelMap & (TDF_DataSet::*)() ) static_cast<TDF_LabelMap & (TDF_DataSet::*)() >(&TDF_DataSet::Labels),
             R"#(Returns the map of labels in this data set. This map can be used directly, or updated.)#" )
        .def("AddAttribute",
             (void (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDF_DataSet::AddAttribute),
             R"#(Adds <anAttribute> into the current data set.)#"  , py::arg("anAttribute"))
        .def("ContainsAttribute",
             (Standard_Boolean (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_DataSet::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_DataSet::ContainsAttribute),
             R"#(Returns true if <anAttribute> is in the data set.)#"  , py::arg("anAttribute"))
        .def("Attributes",
             (TDF_AttributeMap & (TDF_DataSet::*)() ) static_cast<TDF_AttributeMap & (TDF_DataSet::*)() >(&TDF_DataSet::Attributes),
             R"#(Returns the map of attributes in the current data set. This map can be used directly, or updated.)#" )
        .def("AddRoot",
             (void (TDF_DataSet::*)( const TDF_Label & ) ) static_cast<void (TDF_DataSet::*)( const TDF_Label & ) >(&TDF_DataSet::AddRoot),
             R"#(Adds a root label to <myRootLabels>.)#"  , py::arg("aLabel"))
        .def("Roots",
             (TDF_LabelList & (TDF_DataSet::*)() ) static_cast<TDF_LabelList & (TDF_DataSet::*)() >(&TDF_DataSet::Roots),
             R"#(Returns <myRootLabels> to be used or updated.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DataSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DataSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_Delta ,opencascade::handle<TDF_Delta> , Standard_Transient>>(m.attr("TDF_Delta"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TDF_Delta::*)() const) static_cast<Standard_Boolean (TDF_Delta::*)() const>(&TDF_Delta::IsEmpty),
             R"#(Returns true if there is nothing to undo.)#" )
        .def("IsApplicable",
             (Standard_Boolean (TDF_Delta::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TDF_Delta::*)( const Standard_Integer ) const>(&TDF_Delta::IsApplicable),
             R"#(Returns true if the Undo action of <me> is applicable at <aCurrentTime>.)#"  , py::arg("aCurrentTime"))
        .def("BeginTime",
             (Standard_Integer (TDF_Delta::*)() const) static_cast<Standard_Integer (TDF_Delta::*)() const>(&TDF_Delta::BeginTime),
             R"#(Returns the field <myBeginTime>.)#" )
        .def("EndTime",
             (Standard_Integer (TDF_Delta::*)() const) static_cast<Standard_Integer (TDF_Delta::*)() const>(&TDF_Delta::EndTime),
             R"#(Returns the field <myEndTime>.)#" )
        .def("Labels",
             (void (TDF_Delta::*)( NCollection_List<TDF_Label> & ) const) static_cast<void (TDF_Delta::*)( NCollection_List<TDF_Label> & ) const>(&TDF_Delta::Labels),
             R"#(Adds in <aLabelList> the labels of the attribute deltas. Caution: <aLabelList> is not cleared before use.)#"  , py::arg("aLabelList"))
        .def("AttributeDeltas",
             (const TDF_AttributeDeltaList & (TDF_Delta::*)() const) static_cast<const TDF_AttributeDeltaList & (TDF_Delta::*)() const>(&TDF_Delta::AttributeDeltas),
             R"#(Returns the field <myAttDeltaList>.)#" )
        .def("Name",
             (TCollection_ExtendedString (TDF_Delta::*)() const) static_cast<TCollection_ExtendedString (TDF_Delta::*)() const>(&TDF_Delta::Name),
             R"#(Returns a name associated with this delta.)#" )
        .def("SetName",
             (void (TDF_Delta::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDF_Delta::*)( const TCollection_ExtendedString & ) >(&TDF_Delta::SetName),
             R"#(Associates a name <theName> with this delta)#"  , py::arg("theName"))
        .def("Dump",
             (void (TDF_Delta::*)( std::ostream & ) const) static_cast<void (TDF_Delta::*)( std::ostream & ) const>(&TDF_Delta::Dump),
             R"#(None)#"  , py::arg("OS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_Delta::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_Delta::*)() const>(&TDF_Delta::DynamicType),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (TDF_Delta::*)() const) static_cast<Standard_Boolean (TDF_Delta::*)() const>(&TDF_Delta::IsEmpty),
             R"#(Returns true if there is nothing to undo.)#" )
        .def("IsApplicable",
             (Standard_Boolean (TDF_Delta::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TDF_Delta::*)( const Standard_Integer ) const>(&TDF_Delta::IsApplicable),
             R"#(Returns true if the Undo action of <me> is applicable at <aCurrentTime>.)#"  , py::arg("aCurrentTime"))
        .def("BeginTime",
             (Standard_Integer (TDF_Delta::*)() const) static_cast<Standard_Integer (TDF_Delta::*)() const>(&TDF_Delta::BeginTime),
             R"#(Returns the field <myBeginTime>.)#" )
        .def("EndTime",
             (Standard_Integer (TDF_Delta::*)() const) static_cast<Standard_Integer (TDF_Delta::*)() const>(&TDF_Delta::EndTime),
             R"#(Returns the field <myEndTime>.)#" )
        .def("AttributeDeltas",
             (const TDF_AttributeDeltaList & (TDF_Delta::*)() const) static_cast<const TDF_AttributeDeltaList & (TDF_Delta::*)() const>(&TDF_Delta::AttributeDeltas),
             R"#(Returns the field <myAttDeltaList>.)#" )
        .def("SetName",
             (void (TDF_Delta::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDF_Delta::*)( const TCollection_ExtendedString & ) >(&TDF_Delta::SetName),
             R"#(Associates a name <theName> with this delta)#"  , py::arg("theName"))
        .def("Name",
             (TCollection_ExtendedString (TDF_Delta::*)() const) static_cast<TCollection_ExtendedString (TDF_Delta::*)() const>(&TDF_Delta::Name),
             R"#(Returns a name associated with this delta.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_Delta::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_Delta::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_HAttributeArray1 ,opencascade::handle<TDF_HAttributeArray1> , TDF_AttributeArray1, Standard_Transient>>(m.attr("TDF_HAttributeArray1"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<TDF_Attribute> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<TDF_Attribute> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TDF_AttributeArray1 & (TDF_HAttributeArray1::*)() const) static_cast<const TDF_AttributeArray1 & (TDF_HAttributeArray1::*)() const>(&TDF_HAttributeArray1::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TDF_AttributeArray1 & (TDF_HAttributeArray1::*)() ) static_cast<TDF_AttributeArray1 & (TDF_HAttributeArray1::*)() >(&TDF_HAttributeArray1::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_HAttributeArray1::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_HAttributeArray1::*)() const>(&TDF_HAttributeArray1::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_HAttributeArray1::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_HAttributeArray1::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_IDFilter , shared_ptr<TDF_IDFilter> >>(m.attr("TDF_IDFilter"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("ignoreMode")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("IgnoreAll",
             (void (TDF_IDFilter::*)( const Standard_Boolean ) ) static_cast<void (TDF_IDFilter::*)( const Standard_Boolean ) >(&TDF_IDFilter::IgnoreAll),
             R"#(The list of ID is cleared and the filter mode is set to ignore mode if <keep> is true; false otherwise.)#"  , py::arg("ignore"))
        .def("IgnoreAll",
             (Standard_Boolean (TDF_IDFilter::*)() const) static_cast<Standard_Boolean (TDF_IDFilter::*)() const>(&TDF_IDFilter::IgnoreAll),
             R"#(Returns true is the mode is set to "ignore all but...".)#" )
        .def("Keep",
             (void (TDF_IDFilter::*)( const Standard_GUID & ) ) static_cast<void (TDF_IDFilter::*)( const Standard_GUID & ) >(&TDF_IDFilter::Keep),
             R"#(An attribute with <anID> as ID is to be kept and the filter will answer true to the question IsKept(<anID>).)#"  , py::arg("anID"))
        .def("Keep",
             (void (TDF_IDFilter::*)(  const NCollection_List<Standard_GUID> & ) ) static_cast<void (TDF_IDFilter::*)(  const NCollection_List<Standard_GUID> & ) >(&TDF_IDFilter::Keep),
             R"#(Attributes with ID owned by <anIDList> are to be kept and the filter will answer true to the question IsKept(<anID>) with ID from <anIDList>.)#"  , py::arg("anIDList"))
        .def("Ignore",
             (void (TDF_IDFilter::*)( const Standard_GUID & ) ) static_cast<void (TDF_IDFilter::*)( const Standard_GUID & ) >(&TDF_IDFilter::Ignore),
             R"#(An attribute with <anID> as ID is to be ignored and the filter will answer false to the question IsKept(<anID>).)#"  , py::arg("anID"))
        .def("Ignore",
             (void (TDF_IDFilter::*)(  const NCollection_List<Standard_GUID> & ) ) static_cast<void (TDF_IDFilter::*)(  const NCollection_List<Standard_GUID> & ) >(&TDF_IDFilter::Ignore),
             R"#(Attributes with ID owned by <anIDList> are to be ignored and the filter will answer false to the question IsKept(<anID>) with ID from <anIDList>.)#"  , py::arg("anIDList"))
        .def("IsKept",
             (Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const>(&TDF_IDFilter::IsKept),
             R"#(Returns true if the ID is to be kept.)#"  , py::arg("anID"))
        .def("IsKept",
             (Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_IDFilter::IsKept),
             R"#(Returns true if the attribute is to be kept.)#"  , py::arg("anAtt"))
        .def("IsIgnored",
             (Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const>(&TDF_IDFilter::IsIgnored),
             R"#(Returns true if the ID is to be ignored.)#"  , py::arg("anID"))
        .def("IsIgnored",
             (Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_IDFilter::IsIgnored),
             R"#(Returns true if the attribute is to be ignored.)#"  , py::arg("anAtt"))
        .def("IDList",
             (void (TDF_IDFilter::*)( NCollection_List<Standard_GUID> & ) const) static_cast<void (TDF_IDFilter::*)( NCollection_List<Standard_GUID> & ) const>(&TDF_IDFilter::IDList),
             R"#(Copies the list of ID to be kept or ignored in <anIDList>. <anIDList> is cleared before use.)#"  , py::arg("anIDList"))
        .def("Copy",
             (void (TDF_IDFilter::*)( const TDF_IDFilter & ) ) static_cast<void (TDF_IDFilter::*)( const TDF_IDFilter & ) >(&TDF_IDFilter::Copy),
             R"#(Copies into <me> the contents of <fromFilter>. <me> is cleared before copy.)#"  , py::arg("fromFilter"))
        .def("Dump",
             (void (TDF_IDFilter::*)( std::ostream & ) const) static_cast<void (TDF_IDFilter::*)( std::ostream & ) const>(&TDF_IDFilter::Dump),
             R"#(Writes the contents of <me> to <OS>.)#"  , py::arg("anOS"))
        .def("IgnoreAll",
             (Standard_Boolean (TDF_IDFilter::*)() const) static_cast<Standard_Boolean (TDF_IDFilter::*)() const>(&TDF_IDFilter::IgnoreAll),
             R"#(Returns true is the mode is set to "ignore all but...".)#" )
        .def("IsKept",
             (Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const>(&TDF_IDFilter::IsKept),
             R"#(Returns true if the ID is to be kept.)#"  , py::arg("anID"))
        .def("IsKept",
             (Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_IDFilter::IsKept),
             R"#(Returns true if the attribute is to be kept.)#"  , py::arg("anAtt"))
        .def("IsIgnored",
             (Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const Standard_GUID & ) const>(&TDF_IDFilter::IsIgnored),
             R"#(Returns true if the ID is to be ignored.)#"  , py::arg("anID"))
        .def("IsIgnored",
             (Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_IDFilter::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_IDFilter::IsIgnored),
             R"#(Returns true if the attribute is to be ignored.)#"  , py::arg("anAtt"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_Label , shared_ptr<TDF_Label> >>(m.attr("TDF_Label"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Nullify",
             (void (TDF_Label::*)() ) static_cast<void (TDF_Label::*)() >(&TDF_Label::Nullify),
             R"#(Nullifies the label.)#" )
        .def("Data",
             (opencascade::handle<TDF_Data> (TDF_Label::*)() const) static_cast<opencascade::handle<TDF_Data> (TDF_Label::*)() const>(&TDF_Label::Data),
             R"#(Returns the Data owning <me>.)#" )
        .def("Tag",
             (Standard_Integer (TDF_Label::*)() const) static_cast<Standard_Integer (TDF_Label::*)() const>(&TDF_Label::Tag),
             R"#(Returns the tag of the label. This is the integer assigned randomly to a label in a data framework. This integer is used to identify this label in an entry.)#" )
        .def("Father",
             (const TDF_Label (TDF_Label::*)() const) static_cast<const TDF_Label (TDF_Label::*)() const>(&TDF_Label::Father),
             R"#(Returns the label father. This label may be null if the label is root.)#" )
        .def("IsNull",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::IsNull),
             R"#(Returns True if the <aLabel> is null, i.e. it has not been included in the data framework.)#" )
        .def("Imported",
             (void (TDF_Label::*)( const Standard_Boolean ) const) static_cast<void (TDF_Label::*)( const Standard_Boolean ) const>(&TDF_Label::Imported),
             R"#(Sets or unsets <me> and all its descendants as imported label, according to <aStatus>.)#"  , py::arg("aStatus"))
        .def("IsImported",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::IsImported),
             R"#(Returns True if the <aLabel> is imported.)#" )
        .def("IsEqual",
             (Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const>(&TDF_Label::IsEqual),
             R"#(Returns True if the <aLabel> is equal to me (same LabelNode*).)#"  , py::arg("aLabel"))
        .def("IsDifferent",
             (Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const>(&TDF_Label::IsDifferent),
             R"#(None)#"  , py::arg("aLabel"))
        .def("IsRoot",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::IsRoot),
             R"#(None)#" )
        .def("IsAttribute",
             (Standard_Boolean (TDF_Label::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const Standard_GUID & ) const>(&TDF_Label::IsAttribute),
             R"#(Returns true if <me> owns an attribute with <anID> as ID.)#"  , py::arg("anID"))
        .def("AddAttribute",
             (void (TDF_Label::*)( const opencascade::handle<TDF_Attribute> & , const Standard_Boolean ) const) static_cast<void (TDF_Label::*)( const opencascade::handle<TDF_Attribute> & , const Standard_Boolean ) const>(&TDF_Label::AddAttribute),
             R"#(Adds an Attribute to the current label. Raises if there is already one.)#"  , py::arg("anAttribute"),  py::arg("append")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ForgetAttribute",
             (void (TDF_Label::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<void (TDF_Label::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_Label::ForgetAttribute),
             R"#(Forgets an Attribute from the current label, setting its forgotten status true and its valid status false. Raises if the attribute is not in the structure.)#"  , py::arg("anAttribute"))
        .def("ForgetAttribute",
             (Standard_Boolean (TDF_Label::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const Standard_GUID & ) const>(&TDF_Label::ForgetAttribute),
             R"#(Forgets the Attribute of GUID <aguid> from the current label . If the attribute doesn't exist returns False. Otherwise returns True.)#"  , py::arg("aguid"))
        .def("ForgetAllAttributes",
             (void (TDF_Label::*)( const Standard_Boolean ) const) static_cast<void (TDF_Label::*)( const Standard_Boolean ) const>(&TDF_Label::ForgetAllAttributes),
             R"#(Forgets all the attributes. Does it on also on the sub-labels if <clearChildren> is set to true. Of course, this method is compatible with Transaction & Delta mecanisms.)#"  , py::arg("clearChildren")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ResumeAttribute",
             (void (TDF_Label::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<void (TDF_Label::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDF_Label::ResumeAttribute),
             R"#(Undo Forget action, setting its forgotten status false and its valid status true. Raises if the attribute is not in the structure.)#"  , py::arg("anAttribute"))
        .def("FindAttribute",
             (Standard_Boolean (TDF_Label::*)( const Standard_GUID & , opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const Standard_GUID & , opencascade::handle<TDF_Attribute> & ) const>(&TDF_Label::FindAttribute),
             R"#(Finds an attribute of the current label, according to <anID>. If anAttribute is not a valid one, false is returned.)#"  , py::arg("anID"),  py::arg("anAttribute"))
        .def("FindAttribute",
             (Standard_Boolean (TDF_Label::*)( const Standard_GUID & , const Standard_Integer , opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const Standard_GUID & , const Standard_Integer , opencascade::handle<TDF_Attribute> & ) const>(&TDF_Label::FindAttribute),
             R"#(Finds an attribute of the current label, according to <anID> and <aTransaction>. This attribute has/had to be a valid one for the given transaction index . So, this attribute is not necessary a valid one.)#"  , py::arg("anID"),  py::arg("aTransaction"),  py::arg("anAttribute"))
        .def("MayBeModified",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::MayBeModified),
             R"#(Returns true if <me> or a DESCENDANT of <me> owns attributes not yet available in transaction 0. It means at least one of their attributes is new, modified or deleted.)#" )
        .def("AttributesModified",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::AttributesModified),
             R"#(Returns true if <me> owns attributes not yet available in transaction 0. It means at least one attribute is new, modified or deleted.)#" )
        .def("HasAttribute",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::HasAttribute),
             R"#(Returns true if this label has at least one attribute.)#" )
        .def("NbAttributes",
             (Standard_Integer (TDF_Label::*)() const) static_cast<Standard_Integer (TDF_Label::*)() const>(&TDF_Label::NbAttributes),
             R"#(Returns the number of attributes.)#" )
        .def("Depth",
             (Standard_Integer (TDF_Label::*)() const) static_cast<Standard_Integer (TDF_Label::*)() const>(&TDF_Label::Depth),
             R"#(Returns the depth of the label in the data framework. This corresponds to the number of fathers which this label has, and is used in determining whether a label is root, null or equivalent to another label. Exceptions: Standard_NullObject if this label is null. This is because a null object can have no depth.)#" )
        .def("IsDescendant",
             (Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const>(&TDF_Label::IsDescendant),
             R"#(Returns True if <me> is a descendant of <aLabel>. Attention: every label is its own descendant.)#"  , py::arg("aLabel"))
        .def("Root",
             (const TDF_Label (TDF_Label::*)() const) static_cast<const TDF_Label (TDF_Label::*)() const>(&TDF_Label::Root),
             R"#(Returns the root label Root of the data structure. This has a depth of 0. Exceptions: Standard_NullObject if this label is null. This is because a null object can have no depth.)#" )
        .def("HasChild",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::HasChild),
             R"#(Returns true if this label has at least one child.)#" )
        .def("NbChildren",
             (Standard_Integer (TDF_Label::*)() const) static_cast<Standard_Integer (TDF_Label::*)() const>(&TDF_Label::NbChildren),
             R"#(Returns the number of children.)#" )
        .def("FindChild",
             (TDF_Label (TDF_Label::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<TDF_Label (TDF_Label::*)( const Standard_Integer , const Standard_Boolean ) const>(&TDF_Label::FindChild),
             R"#(Finds a child label having <aTag> as tag. Creates The tag aTag identifies the label which will be the parent. If create is true and no child label is found, a new one is created. Example: //creating a label with tag 10 at Root TDF_Label lab1 = aDF->Root().FindChild(10); //creating labels 7 and 2 on label 10 TDF_Label lab2 = lab1.FindChild(7); TDF_Label lab3 = lab1.FindChild(2);)#"  , py::arg("aTag"),  py::arg("create")=static_cast<const Standard_Boolean>(Standard_True))
        .def("NewChild",
             (TDF_Label (TDF_Label::*)() const) static_cast<TDF_Label (TDF_Label::*)() const>(&TDF_Label::NewChild),
             R"#(Create a new child label of me using autoamtic delivery tags provided by TagSource.)#" )
        .def("Transaction",
             (Standard_Integer (TDF_Label::*)() const) static_cast<Standard_Integer (TDF_Label::*)() const>(&TDF_Label::Transaction),
             R"#(Returns the current transaction index.)#" )
        .def("HasLowerNode",
             (Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const>(&TDF_Label::HasLowerNode),
             R"#(Returns true if node address of <me> is lower than <otherLabel> one. Used to quickly sort labels (not on entry criterion).)#"  , py::arg("otherLabel"))
        .def("HasGreaterNode",
             (Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const>(&TDF_Label::HasGreaterNode),
             R"#(Returns true if node address of <me> is greater than <otherLabel> one. Used to quickly sort labels (not on entry criterion).)#"  , py::arg("otherLabel"))
        .def("Dump",
             (Standard_OStream & (TDF_Label::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDF_Label::*)( std::ostream & ) const>(&TDF_Label::Dump),
             R"#(Dumps the minimum information about <me> on <aStream>.)#"  , py::arg("anOS"))
        .def("ExtendedDump",
             (void (TDF_Label::*)( std::ostream & , const TDF_IDFilter & , NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const) static_cast<void (TDF_Label::*)( std::ostream & , const TDF_IDFilter & , NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const>(&TDF_Label::ExtendedDump),
             R"#(Dumps the label on <aStream> and its attributes rank in <aMap> if their IDs are kept by <IDFilter>.)#"  , py::arg("anOS"),  py::arg("aFilter"),  py::arg("aMap"))
        .def("EntryDump",
             (void (TDF_Label::*)( std::ostream & ) const) static_cast<void (TDF_Label::*)( std::ostream & ) const>(&TDF_Label::EntryDump),
             R"#(Dumps the label entry.)#"  , py::arg("anOS"))
        .def("Nullify",
             (void (TDF_Label::*)() ) static_cast<void (TDF_Label::*)() >(&TDF_Label::Nullify),
             R"#(Nullifies the label.)#" )
        .def("IsRoot",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::IsRoot),
             R"#(None)#" )
        .def("IsNull",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::IsNull),
             R"#(Returns True if the <aLabel> is null, i.e. it has not been included in the data framework.)#" )
        .def("IsImported",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::IsImported),
             R"#(Returns True if the <aLabel> is imported.)#" )
        .def("IsEqual",
             (Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const>(&TDF_Label::IsEqual),
             R"#(Returns True if the <aLabel> is equal to me (same LabelNode*).)#"  , py::arg("aLabel"))
        .def("IsDifferent",
             (Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const) static_cast<Standard_Boolean (TDF_Label::*)( const TDF_Label & ) const>(&TDF_Label::IsDifferent),
             R"#(None)#"  , py::arg("aLabel"))
        .def("Tag",
             (Standard_Integer (TDF_Label::*)() const) static_cast<Standard_Integer (TDF_Label::*)() const>(&TDF_Label::Tag),
             R"#(Returns the tag of the label. This is the integer assigned randomly to a label in a data framework. This integer is used to identify this label in an entry.)#" )
        .def("Father",
             (const TDF_Label (TDF_Label::*)() const) static_cast<const TDF_Label (TDF_Label::*)() const>(&TDF_Label::Father),
             R"#(Returns the label father. This label may be null if the label is root.)#" )
        .def("HasChild",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::HasChild),
             R"#(Returns true if this label has at least one child.)#" )
        .def("AttributesModified",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::AttributesModified),
             R"#(Returns true if <me> owns attributes not yet available in transaction 0. It means at least one attribute is new, modified or deleted.)#" )
        .def("MayBeModified",
             (Standard_Boolean (TDF_Label::*)() const) static_cast<Standard_Boolean (TDF_Label::*)() const>(&TDF_Label::MayBeModified),
             R"#(Returns true if <me> or a DESCENDANT of <me> owns attributes not yet available in transaction 0. It means at least one of their attributes is new, modified or deleted.)#" )
        .def("Data",
             (opencascade::handle<TDF_Data> (TDF_Label::*)() const) static_cast<opencascade::handle<TDF_Data> (TDF_Label::*)() const>(&TDF_Label::Data),
             R"#(Returns the Data owning <me>.)#" )
        .def("NewChild",
             (TDF_Label (TDF_Label::*)() const) static_cast<TDF_Label (TDF_Label::*)() const>(&TDF_Label::NewChild),
             R"#(Create a new child label of me using autoamtic delivery tags provided by TagSource.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TDF_LabelMapHasher , shared_ptr<TDF_LabelMapHasher>>(m,"TDF_LabelMapHasher");

    static_cast<py::class_<TDF_LabelMapHasher , shared_ptr<TDF_LabelMapHasher> >>(m.attr("TDF_LabelMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TDF_Label & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const TDF_Label & , const Standard_Integer ) >(&TDF_LabelMapHasher::HashCode),
                    R"#(Computes a hash code for the given label, in the range [1, theUpperBound])#"  , py::arg("theLabel"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TDF_Label & , const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , const TDF_Label & ) >(&TDF_LabelMapHasher::IsEqual),
                    R"#(Returns True when the two keys are the same. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("aLab1"),  py::arg("aLab2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_RelocationTable ,opencascade::handle<TDF_RelocationTable> , Standard_Transient>>(m.attr("TDF_RelocationTable"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("selfRelocate")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("SelfRelocate",
             (void (TDF_RelocationTable::*)( const Standard_Boolean ) ) static_cast<void (TDF_RelocationTable::*)( const Standard_Boolean ) >(&TDF_RelocationTable::SelfRelocate),
             R"#(Sets <mySelfRelocate> to <selfRelocate>.)#"  , py::arg("selfRelocate"))
        .def("SelfRelocate",
             (Standard_Boolean (TDF_RelocationTable::*)() const) static_cast<Standard_Boolean (TDF_RelocationTable::*)() const>(&TDF_RelocationTable::SelfRelocate),
             R"#(Returns <mySelfRelocate>.)#" )
        .def("AfterRelocate",
             (void (TDF_RelocationTable::*)( const Standard_Boolean ) ) static_cast<void (TDF_RelocationTable::*)( const Standard_Boolean ) >(&TDF_RelocationTable::AfterRelocate),
             R"#(None)#"  , py::arg("afterRelocate"))
        .def("AfterRelocate",
             (Standard_Boolean (TDF_RelocationTable::*)() const) static_cast<Standard_Boolean (TDF_RelocationTable::*)() const>(&TDF_RelocationTable::AfterRelocate),
             R"#(Returns <myAfterRelocate>.)#" )
        .def("SetRelocation",
             (void (TDF_RelocationTable::*)( const TDF_Label & , const TDF_Label & ) ) static_cast<void (TDF_RelocationTable::*)( const TDF_Label & , const TDF_Label & ) >(&TDF_RelocationTable::SetRelocation),
             R"#(Sets the relocation value of <aSourceLabel> to <aTargetLabel>.)#"  , py::arg("aSourceLabel"),  py::arg("aTargetLabel"))
        .def("HasRelocation",
             (Standard_Boolean (TDF_RelocationTable::*)( const TDF_Label & , TDF_Label & ) const) static_cast<Standard_Boolean (TDF_RelocationTable::*)( const TDF_Label & , TDF_Label & ) const>(&TDF_RelocationTable::HasRelocation),
             R"#(Finds the relocation value of <aSourceLabel> and returns it into <aTargetLabel>.)#"  , py::arg("aSourceLabel"),  py::arg("aTargetLabel"))
        .def("SetRelocation",
             (void (TDF_RelocationTable::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDF_RelocationTable::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_Attribute> & ) >(&TDF_RelocationTable::SetRelocation),
             R"#(Sets the relocation value of <aSourceAttribute> to <aTargetAttribute>.)#"  , py::arg("aSourceAttribute"),  py::arg("aTargetAttribute"))
        .def("HasRelocation",
             (Standard_Boolean (TDF_RelocationTable::*)( const opencascade::handle<TDF_Attribute> & , opencascade::handle<TDF_Attribute> & ) const) static_cast<Standard_Boolean (TDF_RelocationTable::*)( const opencascade::handle<TDF_Attribute> & , opencascade::handle<TDF_Attribute> & ) const>(&TDF_RelocationTable::HasRelocation),
             R"#(Finds the relocation value of <aSourceAttribute> and returns it into <aTargetAttribute>.)#"  , py::arg("aSourceAttribute"),  py::arg("aTargetAttribute"))
        .def("SetTransientRelocation",
             (void (TDF_RelocationTable::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (TDF_RelocationTable::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) >(&TDF_RelocationTable::SetTransientRelocation),
             R"#(Sets the relocation value of <aSourceTransient> to <aTargetTransient>.)#"  , py::arg("aSourceTransient"),  py::arg("aTargetTransient"))
        .def("HasTransientRelocation",
             (Standard_Boolean (TDF_RelocationTable::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (TDF_RelocationTable::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&TDF_RelocationTable::HasTransientRelocation),
             R"#(Finds the relocation value of <aSourceTransient> and returns it into <aTargetTransient>.)#"  , py::arg("aSourceTransient"),  py::arg("aTargetTransient"))
        .def("Clear",
             (void (TDF_RelocationTable::*)() ) static_cast<void (TDF_RelocationTable::*)() >(&TDF_RelocationTable::Clear),
             R"#(Clears the relocation dictionnary, but lets the self relocation flag to its current value.)#" )
        .def("TargetLabelMap",
             (void (TDF_RelocationTable::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const) static_cast<void (TDF_RelocationTable::*)( NCollection_Map<TDF_Label, TDF_LabelMapHasher> & ) const>(&TDF_RelocationTable::TargetLabelMap),
             R"#(Fills <aLabelMap> with target relocation labels. <aLabelMap> is not cleared before use.)#"  , py::arg("aLabelMap"))
        .def("TargetAttributeMap",
             (void (TDF_RelocationTable::*)( NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const) static_cast<void (TDF_RelocationTable::*)( NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) const>(&TDF_RelocationTable::TargetAttributeMap),
             R"#(Fills <anAttributeMap> with target relocation attributes. <anAttributeMap> is not cleared before use.)#"  , py::arg("anAttributeMap"))
        .def("LabelTable",
             (TDF_LabelDataMap & (TDF_RelocationTable::*)() ) static_cast<TDF_LabelDataMap & (TDF_RelocationTable::*)() >(&TDF_RelocationTable::LabelTable),
             R"#(Returns <myLabelTable> to be used or updated.)#" )
        .def("AttributeTable",
             (TDF_AttributeDataMap & (TDF_RelocationTable::*)() ) static_cast<TDF_AttributeDataMap & (TDF_RelocationTable::*)() >(&TDF_RelocationTable::AttributeTable),
             R"#(Returns <myAttributeTable> to be used or updated.)#" )
        .def("TransientTable",
             (TColStd_IndexedDataMapOfTransientTransient & (TDF_RelocationTable::*)() ) static_cast<TColStd_IndexedDataMapOfTransientTransient & (TDF_RelocationTable::*)() >(&TDF_RelocationTable::TransientTable),
             R"#(Returns <myTransientTable> to be used or updated.)#" )
        .def("Dump",
             (Standard_OStream & (TDF_RelocationTable::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , std::ostream & ) const) static_cast<Standard_OStream & (TDF_RelocationTable::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , std::ostream & ) const>(&TDF_RelocationTable::Dump),
             R"#(Dumps the relocation table.)#"  , py::arg("dumpLabels"),  py::arg("dumpAttributes"),  py::arg("dumpTransients"),  py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_RelocationTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_RelocationTable::*)() const>(&TDF_RelocationTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_RelocationTable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_RelocationTable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TDF_Tool , shared_ptr<TDF_Tool>>(m,"TDF_Tool");

    static_cast<py::class_<TDF_Tool , shared_ptr<TDF_Tool> >>(m.attr("TDF_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NbLabels_s",
                    (Standard_Integer (*)( const TDF_Label & ) ) static_cast<Standard_Integer (*)( const TDF_Label & ) >(&TDF_Tool::NbLabels),
                    R"#(Returns the number of labels of the tree, including <aLabel>. aLabel is also included in this figure. This information is useful in setting the size of an array.)#"  , py::arg("aLabel"))
        .def_static("NbAttributes_s",
                    (Standard_Integer (*)( const TDF_Label & ) ) static_cast<Standard_Integer (*)( const TDF_Label & ) >(&TDF_Tool::NbAttributes),
                    R"#(Returns the total number of attributes attached to the labels dependent on the label aLabel. The attributes of aLabel are also included in this figure. This information is useful in setting the size of an array.)#"  , py::arg("aLabel"))
        .def_static("NbAttributes_s",
                    (Standard_Integer (*)( const TDF_Label & , const TDF_IDFilter & ) ) static_cast<Standard_Integer (*)( const TDF_Label & , const TDF_IDFilter & ) >(&TDF_Tool::NbAttributes),
                    R"#(Returns the number of attributes of the tree, selected by a<Filter>, including those of <aLabel>.)#"  , py::arg("aLabel"),  py::arg("aFilter"))
        .def_static("IsSelfContained_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TDF_Tool::IsSelfContained),
                    R"#(Returns true if <aLabel> and its descendants reference only attributes or labels attached to themselves.)#"  , py::arg("aLabel"))
        .def_static("IsSelfContained_s",
                    (Standard_Boolean (*)( const TDF_Label & , const TDF_IDFilter & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , const TDF_IDFilter & ) >(&TDF_Tool::IsSelfContained),
                    R"#(Returns true if <aLabel> and its descendants reference only attributes or labels attached to themselves and kept by <aFilter>.)#"  , py::arg("aLabel"),  py::arg("aFilter"))
        .def_static("OutReferers_s",
                    (void (*)( const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) ) static_cast<void (*)( const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) >(&TDF_Tool::OutReferers),
                    R"#(Returns in <theAtts> the attributes having out references.)#"  , py::arg("theLabel"),  py::arg("theAtts"))
        .def_static("OutReferers_s",
                    (void (*)( const TDF_Label & , const TDF_IDFilter & , const TDF_IDFilter & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) ) static_cast<void (*)( const TDF_Label & , const TDF_IDFilter & , const TDF_IDFilter & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) >(&TDF_Tool::OutReferers),
                    R"#(Returns in <atts> the attributes having out references and kept by <aFilterForReferers>. It considers only the references kept by <aFilterForReferences>. Caution: <atts> is not cleared before use!)#"  , py::arg("aLabel"),  py::arg("aFilterForReferers"),  py::arg("aFilterForReferences"),  py::arg("atts"))
        .def_static("OutReferences_s",
                    (void (*)( const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) ) static_cast<void (*)( const TDF_Label & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) >(&TDF_Tool::OutReferences),
                    R"#(Returns in <atts> the referenced attributes. Caution: <atts> is not cleared before use!)#"  , py::arg("aLabel"),  py::arg("atts"))
        .def_static("OutReferences_s",
                    (void (*)( const TDF_Label & , const TDF_IDFilter & , const TDF_IDFilter & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) ) static_cast<void (*)( const TDF_Label & , const TDF_IDFilter & , const TDF_IDFilter & , NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher> & ) >(&TDF_Tool::OutReferences),
                    R"#(Returns in <atts> the referenced attributes and kept by <aFilterForReferences>. It considers only the referers kept by <aFilterForReferers>. Caution: <atts> is not cleared before use!)#"  , py::arg("aLabel"),  py::arg("aFilterForReferers"),  py::arg("aFilterForReferences"),  py::arg("atts"))
        .def_static("RelocateLabel_s",
                    (void (*)( const TDF_Label & , const TDF_Label & , const TDF_Label & , TDF_Label & , const Standard_Boolean ) ) static_cast<void (*)( const TDF_Label & , const TDF_Label & , const TDF_Label & , TDF_Label & , const Standard_Boolean ) >(&TDF_Tool::RelocateLabel),
                    R"#(Returns the label having the same sub-entry as <aLabel> but located as descendant as <toRoot> instead of <fromRoot>.)#"  , py::arg("aSourceLabel"),  py::arg("fromRoot"),  py::arg("toRoot"),  py::arg("aTargetLabel"),  py::arg("create")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Entry_s",
                    (void (*)( const TDF_Label & , TCollection_AsciiString & ) ) static_cast<void (*)( const TDF_Label & , TCollection_AsciiString & ) >(&TDF_Tool::Entry),
                    R"#(Returns the entry for the label aLabel in the form of the ASCII character string anEntry containing the tag list for aLabel.)#"  , py::arg("aLabel"),  py::arg("anEntry"))
        .def_static("TagList_s",
                    (void (*)( const TDF_Label & , NCollection_List<Standard_Integer> & ) ) static_cast<void (*)( const TDF_Label & , NCollection_List<Standard_Integer> & ) >(&TDF_Tool::TagList),
                    R"#(Returns the entry of <aLabel> as list of integers in <aTagList>.)#"  , py::arg("aLabel"),  py::arg("aTagList"))
        .def_static("TagList_s",
                    (void (*)( const TCollection_AsciiString & , NCollection_List<Standard_Integer> & ) ) static_cast<void (*)( const TCollection_AsciiString & , NCollection_List<Standard_Integer> & ) >(&TDF_Tool::TagList),
                    R"#(Returns the entry expressed by <anEntry> as list of integers in <aTagList>.)#"  , py::arg("anEntry"),  py::arg("aTagList"))
        .def_static("Label_s",
                    (void (*)( const opencascade::handle<TDF_Data> & , const TCollection_AsciiString & , TDF_Label & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<TDF_Data> & , const TCollection_AsciiString & , TDF_Label & , const Standard_Boolean ) >(&TDF_Tool::Label),
                    R"#(Returns the label expressed by <anEntry>; creates the label if it does not exist and if <create> is true.)#"  , py::arg("aDF"),  py::arg("anEntry"),  py::arg("aLabel"),  py::arg("create")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Label_s",
                    (void (*)( const opencascade::handle<TDF_Data> & , const Standard_CString , TDF_Label & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<TDF_Data> & , const Standard_CString , TDF_Label & , const Standard_Boolean ) >(&TDF_Tool::Label),
                    R"#(Returns the label expressed by <anEntry>; creates the label if it does not exist and if <create> is true.)#"  , py::arg("aDF"),  py::arg("anEntry"),  py::arg("aLabel"),  py::arg("create")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Label_s",
                    (void (*)( const opencascade::handle<TDF_Data> & ,  const NCollection_List<Standard_Integer> & , TDF_Label & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<TDF_Data> & ,  const NCollection_List<Standard_Integer> & , TDF_Label & , const Standard_Boolean ) >(&TDF_Tool::Label),
                    R"#(Returns the label expressed by <anEntry>; creates the label if it does not exist and if <create> is true.)#"  , py::arg("aDF"),  py::arg("aTagList"),  py::arg("aLabel"),  py::arg("create")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("CountLabels_s",
                    (void (*)( NCollection_List<TDF_Label> & , NCollection_DataMap<TDF_Label, Standard_Integer, TDF_LabelMapHasher> & ) ) static_cast<void (*)( NCollection_List<TDF_Label> & , NCollection_DataMap<TDF_Label, Standard_Integer, TDF_LabelMapHasher> & ) >(&TDF_Tool::CountLabels),
                    R"#(Adds the labels of <aLabelList> to <aLabelMap> if they are unbound, or increases their reference counters. At the end of the process, <aLabelList> contains only the ADDED labels.)#"  , py::arg("aLabelList"),  py::arg("aLabelMap"))
        .def_static("DeductLabels_s",
                    (void (*)( NCollection_List<TDF_Label> & , NCollection_DataMap<TDF_Label, Standard_Integer, TDF_LabelMapHasher> & ) ) static_cast<void (*)( NCollection_List<TDF_Label> & , NCollection_DataMap<TDF_Label, Standard_Integer, TDF_LabelMapHasher> & ) >(&TDF_Tool::DeductLabels),
                    R"#(Decreases the reference counters of the labels of <aLabelList> to <aLabelMap>, and removes labels with null counter. At the end of the process, <aLabelList> contains only the SUPPRESSED labels.)#"  , py::arg("aLabelList"),  py::arg("aLabelMap"))
        .def_static("DeepDump_s",
                    (void (*)( std::ostream & , const opencascade::handle<TDF_Data> & ) ) static_cast<void (*)( std::ostream & , const opencascade::handle<TDF_Data> & ) >(&TDF_Tool::DeepDump),
                    R"#(Dumps <aDF> and its labels and their attributes.)#"  , py::arg("anOS"),  py::arg("aDF"))
        .def_static("ExtendedDeepDump_s",
                    (void (*)( std::ostream & , const opencascade::handle<TDF_Data> & , const TDF_IDFilter & ) ) static_cast<void (*)( std::ostream & , const opencascade::handle<TDF_Data> & , const TDF_IDFilter & ) >(&TDF_Tool::ExtendedDeepDump),
                    R"#(Dumps <aDF> and its labels and their attributes, if their IDs are kept by <aFilter>. Dumps also the attributes content.)#"  , py::arg("anOS"),  py::arg("aDF"),  py::arg("aFilter"))
        .def_static("DeepDump_s",
                    (void (*)( std::ostream & , const TDF_Label & ) ) static_cast<void (*)( std::ostream & , const TDF_Label & ) >(&TDF_Tool::DeepDump),
                    R"#(Dumps <aLabel>, its chilren and their attributes.)#"  , py::arg("anOS"),  py::arg("aLabel"))
        .def_static("ExtendedDeepDump_s",
                    (void (*)( std::ostream & , const TDF_Label & , const TDF_IDFilter & ) ) static_cast<void (*)( std::ostream & , const TDF_Label & , const TDF_IDFilter & ) >(&TDF_Tool::ExtendedDeepDump),
                    R"#(Dumps <aLabel>, its chilren and their attributes, if their IDs are kept by <aFilter>. Dumps also the attributes content.)#"  , py::arg("anOS"),  py::arg("aLabel"),  py::arg("aFilter"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_Transaction , shared_ptr<TDF_Transaction> >>(m.attr("TDF_Transaction"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("aName")=static_cast<const TCollection_AsciiString &>("") )
        .def(py::init< const opencascade::handle<TDF_Data> &,const TCollection_AsciiString & >()  , py::arg("aDF"),  py::arg("aName")=static_cast<const TCollection_AsciiString &>("") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (TDF_Transaction::*)( const opencascade::handle<TDF_Data> & ) ) static_cast<void (TDF_Transaction::*)( const opencascade::handle<TDF_Data> & ) >(&TDF_Transaction::Initialize),
             R"#(Aborts all the transactions on <myDF> and sets <aDF> to build a transaction context on <aDF>, ready to be opened.)#"  , py::arg("aDF"))
        .def("Open",
             (Standard_Integer (TDF_Transaction::*)() ) static_cast<Standard_Integer (TDF_Transaction::*)() >(&TDF_Transaction::Open),
             R"#(If not yet done, opens a new transaction on <myDF>. Returns the index of the just opened transaction.)#" )
        .def("Commit",
             (opencascade::handle<TDF_Delta> (TDF_Transaction::*)( const Standard_Boolean ) ) static_cast<opencascade::handle<TDF_Delta> (TDF_Transaction::*)( const Standard_Boolean ) >(&TDF_Transaction::Commit),
             R"#(Commits the transactions until AND including the current opened one.)#"  , py::arg("withDelta")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Abort",
             (void (TDF_Transaction::*)() ) static_cast<void (TDF_Transaction::*)() >(&TDF_Transaction::Abort),
             R"#(Aborts the transactions until AND including the current opened one.)#" )
        .def("Data",
             (opencascade::handle<TDF_Data> (TDF_Transaction::*)() const) static_cast<opencascade::handle<TDF_Data> (TDF_Transaction::*)() const>(&TDF_Transaction::Data),
             R"#(Returns the Data from TDF.)#" )
        .def("Transaction",
             (Standard_Integer (TDF_Transaction::*)() const) static_cast<Standard_Integer (TDF_Transaction::*)() const>(&TDF_Transaction::Transaction),
             R"#(Returns the number of the transaction opened by <me>.)#" )
        .def("Name",
             (const TCollection_AsciiString & (TDF_Transaction::*)() const) static_cast<const TCollection_AsciiString & (TDF_Transaction::*)() const>(&TDF_Transaction::Name),
             R"#(Returns the transaction name.)#" )
        .def("IsOpen",
             (Standard_Boolean (TDF_Transaction::*)() const) static_cast<Standard_Boolean (TDF_Transaction::*)() const>(&TDF_Transaction::IsOpen),
             R"#(Returns true if the transaction is open.)#" )
        .def("Data",
             (opencascade::handle<TDF_Data> (TDF_Transaction::*)() const) static_cast<opencascade::handle<TDF_Data> (TDF_Transaction::*)() const>(&TDF_Transaction::Data),
             R"#(Returns the Data from TDF.)#" )
        .def("Transaction",
             (Standard_Integer (TDF_Transaction::*)() const) static_cast<Standard_Integer (TDF_Transaction::*)() const>(&TDF_Transaction::Transaction),
             R"#(Returns the number of the transaction opened by <me>.)#" )
        .def("Name",
             (const TCollection_AsciiString & (TDF_Transaction::*)() const) static_cast<const TCollection_AsciiString & (TDF_Transaction::*)() const>(&TDF_Transaction::Name),
             R"#(Returns the transaction name.)#" )
        .def("IsOpen",
             (Standard_Boolean (TDF_Transaction::*)() const) static_cast<Standard_Boolean (TDF_Transaction::*)() const>(&TDF_Transaction::IsOpen),
             R"#(Returns true if the transaction is open.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DeltaOnAddition ,opencascade::handle<TDF_DeltaOnAddition> , TDF_AttributeDelta>>(m.attr("TDF_DeltaOnAddition"))
    // constructors
        .def(py::init< const opencascade::handle<TDF_Attribute> & >()  , py::arg("anAtt") )
    // custom constructors
    // methods
        .def("Apply",
             (void (TDF_DeltaOnAddition::*)() ) static_cast<void (TDF_DeltaOnAddition::*)() >(&TDF_DeltaOnAddition::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DeltaOnAddition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DeltaOnAddition::*)() const>(&TDF_DeltaOnAddition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DeltaOnAddition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DeltaOnAddition::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DeltaOnForget ,opencascade::handle<TDF_DeltaOnForget> , TDF_AttributeDelta>>(m.attr("TDF_DeltaOnForget"))
    // constructors
        .def(py::init< const opencascade::handle<TDF_Attribute> & >()  , py::arg("anAtt") )
    // custom constructors
    // methods
        .def("Apply",
             (void (TDF_DeltaOnForget::*)() ) static_cast<void (TDF_DeltaOnForget::*)() >(&TDF_DeltaOnForget::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DeltaOnForget::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DeltaOnForget::*)() const>(&TDF_DeltaOnForget::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DeltaOnForget::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DeltaOnForget::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DeltaOnModification ,opencascade::handle<TDF_DeltaOnModification> , TDF_AttributeDelta>>(m.attr("TDF_DeltaOnModification"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TDF_DeltaOnModification::*)() ) static_cast<void (TDF_DeltaOnModification::*)() >(&TDF_DeltaOnModification::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DeltaOnModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DeltaOnModification::*)() const>(&TDF_DeltaOnModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DeltaOnModification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DeltaOnModification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DeltaOnRemoval ,opencascade::handle<TDF_DeltaOnRemoval>,Py_TDF_DeltaOnRemoval , TDF_AttributeDelta>>(m.attr("TDF_DeltaOnRemoval"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DeltaOnRemoval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DeltaOnRemoval::*)() const>(&TDF_DeltaOnRemoval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DeltaOnRemoval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DeltaOnRemoval::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DeltaOnResume ,opencascade::handle<TDF_DeltaOnResume> , TDF_AttributeDelta>>(m.attr("TDF_DeltaOnResume"))
    // constructors
        .def(py::init< const opencascade::handle<TDF_Attribute> & >()  , py::arg("anAtt") )
    // custom constructors
    // methods
        .def("Apply",
             (void (TDF_DeltaOnResume::*)() ) static_cast<void (TDF_DeltaOnResume::*)() >(&TDF_DeltaOnResume::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DeltaOnResume::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DeltaOnResume::*)() const>(&TDF_DeltaOnResume::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DeltaOnResume::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DeltaOnResume::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_Reference ,opencascade::handle<TDF_Reference> , TDF_Attribute>>(m.attr("TDF_Reference"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TDF_Reference::*)( const TDF_Label & ) ) static_cast<void (TDF_Reference::*)( const TDF_Label & ) >(&TDF_Reference::Set),
             R"#(None)#"  , py::arg("Origin"))
        .def("Get",
             (TDF_Label (TDF_Reference::*)() const) static_cast<TDF_Label (TDF_Reference::*)() const>(&TDF_Reference::Get),
             R"#(None)#" )
        .def("ID",
             (const Standard_GUID & (TDF_Reference::*)() const) static_cast<const Standard_GUID & (TDF_Reference::*)() const>(&TDF_Reference::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDF_Reference::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDF_Reference::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDF_Reference::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDF_Reference::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_Reference::*)() const>(&TDF_Reference::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDF_Reference::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDF_Reference::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDF_Reference::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("References",
             (void (TDF_Reference::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDF_Reference::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDF_Reference::References),
             R"#(None)#"  , py::arg("DS"))
        .def("Dump",
             (Standard_OStream & (TDF_Reference::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDF_Reference::*)( std::ostream & ) const>(&TDF_Reference::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_Reference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_Reference::*)() const>(&TDF_Reference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDF_Reference::GetID),
                    R"#(None)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDF_Reference> (*)( const TDF_Label & , const TDF_Label & ) ) static_cast<opencascade::handle<TDF_Reference> (*)( const TDF_Label & , const TDF_Label & ) >(&TDF_Reference::Set),
                    R"#(None)#"  , py::arg("I"),  py::arg("Origin"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_Reference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_Reference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_TagSource ,opencascade::handle<TDF_TagSource> , TDF_Attribute>>(m.attr("TDF_TagSource"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NewTag",
             (Standard_Integer (TDF_TagSource::*)() ) static_cast<Standard_Integer (TDF_TagSource::*)() >(&TDF_TagSource::NewTag),
             R"#(None)#" )
        .def("NewChild",
             (TDF_Label (TDF_TagSource::*)() ) static_cast<TDF_Label (TDF_TagSource::*)() >(&TDF_TagSource::NewChild),
             R"#(None)#" )
        .def("Get",
             (Standard_Integer (TDF_TagSource::*)() const) static_cast<Standard_Integer (TDF_TagSource::*)() const>(&TDF_TagSource::Get),
             R"#(None)#" )
        .def("Set",
             (void (TDF_TagSource::*)( const Standard_Integer ) ) static_cast<void (TDF_TagSource::*)( const Standard_Integer ) >(&TDF_TagSource::Set),
             R"#(TDF_Attribute methods =====================)#"  , py::arg("T"))
        .def("ID",
             (const Standard_GUID & (TDF_TagSource::*)() const) static_cast<const Standard_GUID & (TDF_TagSource::*)() const>(&TDF_TagSource::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDF_TagSource::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDF_TagSource::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDF_TagSource::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDF_TagSource::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDF_TagSource::*)() const>(&TDF_TagSource::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDF_TagSource::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDF_TagSource::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDF_TagSource::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_TagSource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_TagSource::*)() const>(&TDF_TagSource::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDF_TagSource::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDF_TagSource> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDF_TagSource> (*)( const TDF_Label & ) >(&TDF_TagSource::Set),
                    R"#(Find, or create, a TagSource attribute. the TagSource attribute is returned.)#"  , py::arg("label"))
        .def_static("NewChild_s",
                    (TDF_Label (*)( const TDF_Label & ) ) static_cast<TDF_Label (*)( const TDF_Label & ) >(&TDF_TagSource::NewChild),
                    R"#(Find (or create) a tagSource attribute located at <L> and make a new child label. TagSource methods =================)#"  , py::arg("L"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_TagSource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_TagSource::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DefaultDeltaOnModification ,opencascade::handle<TDF_DefaultDeltaOnModification> , TDF_DeltaOnModification>>(m.attr("TDF_DefaultDeltaOnModification"))
    // constructors
        .def(py::init< const opencascade::handle<TDF_Attribute> & >()  , py::arg("anAttribute") )
    // custom constructors
    // methods
        .def("Apply",
             (void (TDF_DefaultDeltaOnModification::*)() ) static_cast<void (TDF_DefaultDeltaOnModification::*)() >(&TDF_DefaultDeltaOnModification::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DefaultDeltaOnModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DefaultDeltaOnModification::*)() const>(&TDF_DefaultDeltaOnModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DefaultDeltaOnModification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DefaultDeltaOnModification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDF_DefaultDeltaOnRemoval ,opencascade::handle<TDF_DefaultDeltaOnRemoval> , TDF_DeltaOnRemoval>>(m.attr("TDF_DefaultDeltaOnRemoval"))
    // constructors
        .def(py::init< const opencascade::handle<TDF_Attribute> & >()  , py::arg("anAttribute") )
    // custom constructors
    // methods
        .def("Apply",
             (void (TDF_DefaultDeltaOnRemoval::*)() ) static_cast<void (TDF_DefaultDeltaOnRemoval::*)() >(&TDF_DefaultDeltaOnRemoval::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDF_DefaultDeltaOnRemoval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDF_DefaultDeltaOnRemoval::*)() const>(&TDF_DefaultDeltaOnRemoval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDF_DefaultDeltaOnRemoval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDF_DefaultDeltaOnRemoval::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\TDF_LabelDoubleMap.hxx
// ./opencascade\TDF_IDMap.hxx
// ./opencascade\TDF_DeltaList.hxx
// ./opencascade\TDF_MapIteratorOfAttributeMap.hxx
// ./opencascade\TDF_ClosureTool.hxx
// ./opencascade\TDF_ClosureMode.hxx
// ./opencascade\TDF_DataMapIteratorOfLabelIntegerMap.hxx
// ./opencascade\TDF_AttributeIterator.hxx
// ./opencascade\TDF_AttributeMap.hxx
// ./opencascade\TDF_LabelMapHasher.hxx
// ./opencascade\TDF_DoubleMapIteratorOfAttributeDoubleMap.hxx
// ./opencascade\TDF_LabelSequence.hxx
// ./opencascade\TDF_DeltaOnForget.hxx
// ./opencascade\TDF_TagSource.hxx
// ./opencascade\TDF_ComparisonTool.hxx
// ./opencascade\TDF_DeltaOnResume.hxx
// ./opencascade\TDF_LabelIndexedMap.hxx
// ./opencascade\TDF_Transaction.hxx
// ./opencascade\TDF_DefaultDeltaOnModification.hxx
// ./opencascade\TDF_ListIteratorOfAttributeList.hxx
// ./opencascade\TDF_IDList.hxx
// ./opencascade\TDF_CopyTool.hxx
// ./opencascade\TDF_Delta.hxx
// ./opencascade\TDF_DoubleMapIteratorOfLabelDoubleMap.hxx
// ./opencascade\TDF_Attribute.hxx
// ./opencascade\TDF_AttributeList.hxx
// ./opencascade\TDF_ListIteratorOfIDList.hxx
// ./opencascade\TDF_DataSet.hxx
// ./opencascade\TDF_LabelIntegerMap.hxx
// ./opencascade\TDF_DefaultDeltaOnRemoval.hxx
// ./opencascade\TDF_ListIteratorOfDeltaList.hxx
// ./opencascade\TDF_DeltaOnAddition.hxx
// ./opencascade\TDF_DataMapIteratorOfAttributeDataMap.hxx
// ./opencascade\TDF_DeltaOnRemoval.hxx
// ./opencascade\TDF_HAttributeArray1.hxx
// ./opencascade\TDF_AttributeIndexedMap.hxx
// ./opencascade\TDF_ChildIterator.hxx
// ./opencascade\TDF_Tool.hxx
// ./opencascade\TDF_AttributeSequence.hxx
// ./opencascade\TDF_AttributeArray1.hxx
// ./opencascade\TDF_ChildIDIterator.hxx
// ./opencascade\TDF_DeltaOnModification.hxx
// ./opencascade\TDF_MapIteratorOfIDMap.hxx
// ./opencascade\TDF_LabelList.hxx
// ./opencascade\TDF_AttributeDataMap.hxx
// ./opencascade\TDF_AttributeDeltaList.hxx
// ./opencascade\TDF_IDFilter.hxx
// ./opencascade\TDF.hxx
// ./opencascade\TDF_GUIDProgIDMap.hxx
// ./opencascade\TDF_DoubleMapIteratorOfGUIDProgIDMap.hxx
// ./opencascade\TDF_LabelNodePtr.hxx
// ./opencascade\TDF_MapIteratorOfLabelMap.hxx
// ./opencascade\TDF_Data.hxx
// ./opencascade\TDF_DataMapIteratorOfLabelDataMap.hxx
// ./opencascade\TDF_AttributeDoubleMap.hxx
// ./opencascade\TDF_LabelMap.hxx
// ./opencascade\TDF_AttributeDelta.hxx
// ./opencascade\TDF_HAllocator.hxx
// ./opencascade\TDF_LabelNode.hxx
// ./opencascade\TDF_ListIteratorOfLabelList.hxx
// ./opencascade\TDF_Reference.hxx
// ./opencascade\TDF_Label.hxx
// ./opencascade\TDF_LabelDataMap.hxx
// ./opencascade\TDF_CopyLabel.hxx
// ./opencascade\TDF_ListIteratorOfAttributeDeltaList.hxx
// ./opencascade\TDF_RelocationTable.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DoubleMap<TDF_Label, TDF_Label, TDF_LabelMapHasher, TDF_LabelMapHasher>(m,"TDF_LabelDoubleMap");
    register_template_NCollection_Map<Standard_GUID, Standard_GUID>(m,"TDF_IDMap");
    register_template_NCollection_List<opencascade::handle<TDF_Delta> >(m,"TDF_DeltaList");
    register_template_NCollection_Map<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher>(m,"TDF_AttributeMap");
    register_template_NCollection_Sequence<TDF_Label>(m,"TDF_LabelSequence");
    register_template_NCollection_IndexedMap<TDF_Label, TDF_LabelMapHasher>(m,"TDF_LabelIndexedMap");
    register_template_NCollection_List<Standard_GUID>(m,"TDF_IDList");
    register_template_NCollection_List<opencascade::handle<TDF_Attribute> >(m,"TDF_AttributeList");
    register_template_NCollection_DataMap<TDF_Label, Standard_Integer, TDF_LabelMapHasher>(m,"TDF_LabelIntegerMap");
    register_template_NCollection_IndexedMap<opencascade::handle<TDF_Attribute>, TColStd_MapTransientHasher>(m,"TDF_AttributeIndexedMap");
    register_template_NCollection_Sequence<opencascade::handle<TDF_Attribute> >(m,"TDF_AttributeSequence");
    register_template_NCollection_Array1<opencascade::handle<TDF_Attribute> >(m,"TDF_AttributeArray1");
    register_template_NCollection_List<TDF_Label>(m,"TDF_LabelList");
    register_template_NCollection_List<opencascade::handle<TDF_AttributeDelta> >(m,"TDF_AttributeDeltaList");
    register_template_NCollection_DoubleMap<Standard_GUID, TCollection_ExtendedString, Standard_GUID, TCollection_ExtendedString>(m,"TDF_GUIDProgIDMap");
    register_template_NCollection_Map<TDF_Label, TDF_LabelMapHasher>(m,"TDF_LabelMap");
    register_template_NCollection_DataMap<TDF_Label, TDF_Label, TDF_LabelMapHasher>(m,"TDF_LabelDataMap");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
