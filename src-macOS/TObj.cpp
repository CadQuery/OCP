
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_TObj(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TObj"));


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

// classes


    static_cast<py::class_<TObj_Application ,opencascade::handle<TObj_Application> , TDocStd_Application>>(m.attr("TObj_Application"))
    // constructors
    // custom constructors
    // methods
        .def("Messenger",
             (opencascade::handle<Message_Messenger> & (TObj_Application::*)() ) static_cast<opencascade::handle<Message_Messenger> & (TObj_Application::*)() >(&TObj_Application::Messenger),
             R"#(Returns reference to associated messenger handle)#" )
        .def("SaveDocument",
             (Standard_Boolean (TObj_Application::*)( const opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TObj_Application::*)( const opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & ) >(&TObj_Application::SaveDocument),
             R"#(Saving the OCAF document to a file)#"  , py::arg("theSourceDoc"),  py::arg("theTargetFile"))
        .def("LoadDocument",
             (Standard_Boolean (TObj_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) ) static_cast<Standard_Boolean (TObj_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) >(&TObj_Application::LoadDocument),
             R"#(Loading the OCAF document from a file)#"  , py::arg("theSourceFile"),  py::arg("theTargetDoc"))
        .def("CreateNewDocument",
             (Standard_Boolean (TObj_Application::*)( opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TObj_Application::*)( opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & ) >(&TObj_Application::CreateNewDocument),
             R"#(Create the OCAF document from scratch)#"  , py::arg("theDoc"),  py::arg("theFormat"))
        .def("ErrorMessage",
             (void (TObj_Application::*)( const TCollection_ExtendedString & , const Message_Gravity ) ) static_cast<void (TObj_Application::*)( const TCollection_ExtendedString & , const Message_Gravity ) >(&TObj_Application::ErrorMessage),
             R"#(Signal error during Load or Save Default imiplementation is empty)#"  , py::arg("theMsg"),  py::arg("theLevel"))
        .def("ErrorMessage",
             (void (TObj_Application::*)( const TCollection_ExtendedString & ) ) static_cast<void (TObj_Application::*)( const TCollection_ExtendedString & ) >(&TObj_Application::ErrorMessage),
             R"#(Signal error during Load or Save Default imiplementation invoke previous declaration with 0)#"  , py::arg("theMsg"))
        .def("SetVerbose",
             (void (TObj_Application::*)( const Standard_Boolean ) ) static_cast<void (TObj_Application::*)( const Standard_Boolean ) >(&TObj_Application::SetVerbose),
             R"#(Sets the verbose flag, meaning that load/save models should show CPU and elapsed times)#"  , py::arg("isVerbose"))
        .def("IsVerbose",
             (Standard_Boolean (TObj_Application::*)() const) static_cast<Standard_Boolean (TObj_Application::*)() const>(&TObj_Application::IsVerbose),
             R"#(Returns the verbose flag)#" )
        .def("ResourcesName",
             (Standard_CString (TObj_Application::*)() ) static_cast<Standard_CString (TObj_Application::*)() >(&TObj_Application::ResourcesName),
             R"#(Return name of resource (i.e. "TObj"))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_Application::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_Application::*)() const>(&TObj_Application::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_Application::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TObj_Assistant , shared_ptr<TObj_Assistant>>(m,"TObj_Assistant");

    static_cast<py::class_<TObj_Assistant , shared_ptr<TObj_Assistant> >>(m.attr("TObj_Assistant"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_CheckModel ,opencascade::handle<TObj_CheckModel> , Message_Algorithm>>(m.attr("TObj_CheckModel"))
    // constructors
        .def(py::init< const opencascade::handle<TObj_Model> & >()  , py::arg("theModel") )
    // custom constructors
    // methods
        .def("SetToFix",
             (void (TObj_CheckModel::*)( const Standard_Boolean ) ) static_cast<void (TObj_CheckModel::*)( const Standard_Boolean ) >(&TObj_CheckModel::SetToFix),
             R"#(Sets flag allowing fixing inconsistencies)#"  , py::arg("theToFix"))
        .def("IsToFix",
             (Standard_Boolean (TObj_CheckModel::*)() const) static_cast<Standard_Boolean (TObj_CheckModel::*)() const>(&TObj_CheckModel::IsToFix),
             R"#(Returns true if it is allowed to fix inconsistencies)#" )
        .def("GetModel",
             (const opencascade::handle<TObj_Model> & (TObj_CheckModel::*)() const) static_cast<const opencascade::handle<TObj_Model> & (TObj_CheckModel::*)() const>(&TObj_CheckModel::GetModel),
             R"#(Returns the checked model)#" )
        .def("Perform",
             (Standard_Boolean (TObj_CheckModel::*)() ) static_cast<Standard_Boolean (TObj_CheckModel::*)() >(&TObj_CheckModel::Perform),
             R"#(Performs all checks. Descendants should call parent method before doing own checks. This implementation checks OCAF references and back references between objects of the model. Returns true if no inconsistencies found.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_CheckModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_CheckModel::*)() const>(&TObj_CheckModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_CheckModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_HSequenceOfObject ,opencascade::handle<TObj_HSequenceOfObject> , TObj_SequenceOfObject, Standard_Transient>>(m.attr("TObj_HSequenceOfObject"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<TObj_Object> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TObj_SequenceOfObject & (TObj_HSequenceOfObject::*)() const) static_cast<const TObj_SequenceOfObject & (TObj_HSequenceOfObject::*)() const>(&TObj_HSequenceOfObject::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TObj_HSequenceOfObject::*)(  const opencascade::handle<TObj_Object> & ) ) static_cast<void (TObj_HSequenceOfObject::*)(  const opencascade::handle<TObj_Object> & ) >(&TObj_HSequenceOfObject::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TObj_HSequenceOfObject::*)( NCollection_Sequence<opencascade::handle<TObj_Object> > & ) ) static_cast<void (TObj_HSequenceOfObject::*)( NCollection_Sequence<opencascade::handle<TObj_Object> > & ) >(&TObj_HSequenceOfObject::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TObj_SequenceOfObject & (TObj_HSequenceOfObject::*)() ) static_cast<TObj_SequenceOfObject & (TObj_HSequenceOfObject::*)() >(&TObj_HSequenceOfObject::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_HSequenceOfObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_HSequenceOfObject::*)() const>(&TObj_HSequenceOfObject::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_HSequenceOfObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TObj_HSequenceOfObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_Model ,opencascade::handle<TObj_Model>,Py_TObj_Model , Standard_Transient>>(m.attr("TObj_Model"))
    // constructors
    // custom constructors
    // methods
        .def("SetMessenger",
             (void (TObj_Model::*)( const opencascade::handle<Message_Messenger> & ) ) static_cast<void (TObj_Model::*)( const opencascade::handle<Message_Messenger> & ) >(&TObj_Model::SetMessenger),
             R"#(Set messenger to use for messages output)#"  , py::arg("theMsgr"))
        .def("Messenger",
             (opencascade::handle<Message_Messenger> (TObj_Model::*)() const) static_cast<opencascade::handle<Message_Messenger> (TObj_Model::*)() const>(&TObj_Model::Messenger),
             R"#(Get messenger used for messages output (by default, the messenger from application is used))#" )
        .def("Load",
             (Standard_Boolean (TObj_Model::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TObj_Model::*)( const TCollection_ExtendedString & ) >(&TObj_Model::Load),
             R"#(Load the OCAF model from a file. If the filename is empty or file does not exists, it just initializes model by empty data.)#"  , py::arg("theFile"))
        .def("SaveAs",
             (Standard_Boolean (TObj_Model::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TObj_Model::*)( const TCollection_ExtendedString & ) >(&TObj_Model::SaveAs),
             R"#(Save the model to a file)#"  , py::arg("theFile"))
        .def("Close",
             (Standard_Boolean (TObj_Model::*)() ) static_cast<Standard_Boolean (TObj_Model::*)() >(&TObj_Model::Close),
             R"#(Close the model)#" )
        .def("GetFile",
             (opencascade::handle<TCollection_HExtendedString> (TObj_Model::*)() const) static_cast<opencascade::handle<TCollection_HExtendedString> (TObj_Model::*)() const>(&TObj_Model::GetFile),
             R"#(Returns the full file name this model is to be saved to, or null if the model was not saved yet)#" )
        .def("GetObjects",
             (opencascade::handle<TObj_ObjectIterator> (TObj_Model::*)() const) static_cast<opencascade::handle<TObj_ObjectIterator> (TObj_Model::*)() const>(&TObj_Model::GetObjects),
             R"#(Returns an Iterator on all objects in the Model)#" )
        .def("GetChildren",
             (opencascade::handle<TObj_ObjectIterator> (TObj_Model::*)() const) static_cast<opencascade::handle<TObj_ObjectIterator> (TObj_Model::*)() const>(&TObj_Model::GetChildren),
             R"#(Returns an Iterator on objects in the main partition)#" )
        .def("FindObject",
             (opencascade::handle<TObj_Object> (TObj_Model::*)( const opencascade::handle<TCollection_HExtendedString> & , const opencascade::handle<TObj_TNameContainer> & ) const) static_cast<opencascade::handle<TObj_Object> (TObj_Model::*)( const opencascade::handle<TCollection_HExtendedString> & , const opencascade::handle<TObj_TNameContainer> & ) const>(&TObj_Model::FindObject),
             R"#(Returns an Object by given Name (or Null if not found).)#"  , py::arg("theName"),  py::arg("theDictionary"))
        .def("GetChecker",
             (opencascade::handle<TObj_CheckModel> (TObj_Model::*)() const) static_cast<opencascade::handle<TObj_CheckModel> (TObj_Model::*)() const>(&TObj_Model::GetChecker),
             R"#(Returns the tool checking model consistency. Descendant may redefine it to return its own tool.)#" )
        .def("GetRoot",
             (opencascade::handle<TObj_Object> (TObj_Model::*)() const) static_cast<opencascade::handle<TObj_Object> (TObj_Model::*)() const>(&TObj_Model::GetRoot),
             R"#(Returns root object of model)#" )
        .def("GetLabel",
             (TDF_Label (TObj_Model::*)() const) static_cast<TDF_Label (TObj_Model::*)() const>(&TObj_Model::GetLabel),
             R"#(Returns OCAF label on which model data are stored.)#" )
        .def("GetModelName",
             (opencascade::handle<TCollection_HExtendedString> (TObj_Model::*)() const) static_cast<opencascade::handle<TCollection_HExtendedString> (TObj_Model::*)() const>(&TObj_Model::GetModelName),
             R"#(Returns the name of the model)#" )
        .def("IsModified",
             (Standard_Boolean (TObj_Model::*)() const) static_cast<Standard_Boolean (TObj_Model::*)() const>(&TObj_Model::IsModified),
             R"#(Modification status)#" )
        .def("GetApplication",
             (const opencascade::handle<TObj_Application> (TObj_Model::*)() ) static_cast<const opencascade::handle<TObj_Application> (TObj_Model::*)() >(&TObj_Model::GetApplication),
             R"#(Returns handle to static instance of the relevant application class)#" )
        .def("GetFormat",
             (TCollection_ExtendedString (TObj_Model::*)() const) static_cast<TCollection_ExtendedString (TObj_Model::*)() const>(&TObj_Model::GetFormat),
             R"#(Returns the format for save/restore. This implementation returns "BinOcaf". The method should be redefined for those models that should use another format.)#" )
        .def("Update",
             (Standard_Boolean (TObj_Model::*)() ) static_cast<Standard_Boolean (TObj_Model::*)() >(&TObj_Model::Update),
             R"#(this method is called before activating this model)#" )
        .def("GetGUID",
             (Standard_GUID (TObj_Model::*)() const) static_cast<Standard_GUID (TObj_Model::*)() const>(&TObj_Model::GetGUID),
             R"#(Defines interface GUID for TObj_Model)#" )
        .def("SetLabel",
             (void (TObj_Model::*)( const TDF_Label & ) ) static_cast<void (TObj_Model::*)( const TDF_Label & ) >(&TObj_Model::SetLabel),
             R"#(Sets OCAF label on which model data are stored. Used by persistence mechanism.)#"  , py::arg("theLabel"))
        .def("Paste",
             (Standard_Boolean (TObj_Model::*)( opencascade::handle<TObj_Model> , opencascade::handle<TDF_RelocationTable> ) ) static_cast<Standard_Boolean (TObj_Model::*)( opencascade::handle<TObj_Model> , opencascade::handle<TDF_RelocationTable> ) >(&TObj_Model::Paste),
             R"#(Pastes me to the new model references will not be copied if theRelocTable is not 0 if theRelocTable is not NULL theRelocTable is filled by objects)#"  , py::arg("theModel"),  py::arg("theRelocTable"))
        .def("NewEmpty",
             (opencascade::handle<TObj_Model> (TObj_Model::*)() ) static_cast<opencascade::handle<TObj_Model> (TObj_Model::*)() >(&TObj_Model::NewEmpty),
             R"#(This function have to create a new model with type like me)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_Model::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_Model::*)() const>(&TObj_Model::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_Model::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_Object ,opencascade::handle<TObj_Object> , Standard_Transient>>(m.attr("TObj_Object"))
    // constructors
    // custom constructors
    // methods
        .def("GetModel",
             (opencascade::handle<TObj_Model> (TObj_Object::*)() const) static_cast<opencascade::handle<TObj_Model> (TObj_Object::*)() const>(&TObj_Object::GetModel),
             R"#(Returns the model to which the object belongs)#" )
        .def("GetChildren",
             (opencascade::handle<TObj_ObjectIterator> (TObj_Object::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<opencascade::handle<TObj_ObjectIterator> (TObj_Object::*)( const opencascade::handle<Standard_Type> & ) const>(&TObj_Object::GetChildren),
             R"#(Returns iterator for the child objects. This method provides tree-like view of the objects hierarchy. The references to other objects are not considered as children. theType narrows a variety of iterated objects The default implementation search for children on 1 sublavel of the children sub label)#"  , py::arg("theType")=static_cast<const opencascade::handle<Standard_Type> &>(NULL))
        .def("GetDictionary",
             (opencascade::handle<TObj_TNameContainer> (TObj_Object::*)() const) static_cast<opencascade::handle<TObj_TNameContainer> (TObj_Object::*)() const>(&TObj_Object::GetDictionary),
             R"#(Returns the map of names of the objects Default implementation returns global Dictionary of the model)#" )
        .def("GetName",
             (opencascade::handle<TCollection_HExtendedString> (TObj_Object::*)() const) static_cast<opencascade::handle<TCollection_HExtendedString> (TObj_Object::*)() const>(&TObj_Object::GetName),
             R"#(Returns the name of the object (empty string if object has no name))#" )
        .def("SetName",
             (Standard_Boolean (TObj_Object::*)( const opencascade::handle<TCollection_HExtendedString> & ) const) static_cast<Standard_Boolean (TObj_Object::*)( const opencascade::handle<TCollection_HExtendedString> & ) const>(&TObj_Object::SetName),
             R"#(Sets name of the object. Returns False if theName is not unique.)#"  , py::arg("theName"))
        .def("GetNameForClone",
             (opencascade::handle<TCollection_HExtendedString> (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) const) static_cast<opencascade::handle<TCollection_HExtendedString> (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) const>(&TObj_Object::GetNameForClone),
             R"#(Returns name for copy default implementation returns the same name)#"  , py::arg(""))
        .def("HasReference",
             (Standard_Boolean (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) const) static_cast<Standard_Boolean (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) const>(&TObj_Object::HasReference),
             R"#(Returns True if object has reference to indicated object)#"  , py::arg("theObject"))
        .def("GetReferences",
             (opencascade::handle<TObj_ObjectIterator> (TObj_Object::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<opencascade::handle<TObj_ObjectIterator> (TObj_Object::*)( const opencascade::handle<Standard_Type> & ) const>(&TObj_Object::GetReferences),
             R"#(Returns an Iterator containing objects that compose the this one theType narrows a variety of iterated objects)#"  , py::arg("theType")=static_cast<const opencascade::handle<Standard_Type> &>(NULL))
        .def("RemoveAllReferences",
             (void (TObj_Object::*)() ) static_cast<void (TObj_Object::*)() >(&TObj_Object::RemoveAllReferences),
             R"#(Remove all references to other objects, by removing all reference attributes)#" )
        .def("GetBackReferences",
             (opencascade::handle<TObj_ObjectIterator> (TObj_Object::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<opencascade::handle<TObj_ObjectIterator> (TObj_Object::*)( const opencascade::handle<Standard_Type> & ) const>(&TObj_Object::GetBackReferences),
             R"#(Returns iterator for the objects which depend on this one. These reffering objects may belong to other models. theType narrows a variety of iterated objects)#"  , py::arg("theType")=static_cast<const opencascade::handle<Standard_Type> &>(NULL))
        .def("AddBackReference",
             (void (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) ) static_cast<void (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) >(&TObj_Object::AddBackReference),
             R"#(Registers another object as being dependent on this one. Stores back references under sublabel 2 (purely transient data, not subject to persistency).)#"  , py::arg("theObject"))
        .def("RemoveBackReference",
             (void (TObj_Object::*)( const opencascade::handle<TObj_Object> & , const Standard_Boolean ) ) static_cast<void (TObj_Object::*)( const opencascade::handle<TObj_Object> & , const Standard_Boolean ) >(&TObj_Object::RemoveBackReference),
             R"#(Removes information on dependent object (back reference). If theSingleOnly is true only the first back reference is removed in the case of duplicate items.)#"  , py::arg("theObject"),  py::arg("theSingleOnly")=static_cast<const Standard_Boolean>(Standard_True))
        .def("RemoveBackReferences",
             (Standard_Boolean (TObj_Object::*)( const TObj_DeletingMode ) ) static_cast<Standard_Boolean (TObj_Object::*)( const TObj_DeletingMode ) >(&TObj_Object::RemoveBackReferences),
             R"#(Removes all back reference by removing references from other to me.)#"  , py::arg("theMode")=static_cast<const TObj_DeletingMode>(TObj_FreeOnly))
        .def("ClearBackReferences",
             (void (TObj_Object::*)() ) static_cast<void (TObj_Object::*)() >(&TObj_Object::ClearBackReferences),
             R"#(The default implementation just clear the back references container)#" )
        .def("ReplaceReference",
             (void (TObj_Object::*)( const opencascade::handle<TObj_Object> & , const opencascade::handle<TObj_Object> & ) ) static_cast<void (TObj_Object::*)( const opencascade::handle<TObj_Object> & , const opencascade::handle<TObj_Object> & ) >(&TObj_Object::ReplaceReference),
             R"#(Replace reference from old object to new object. If it is not possible, may raise exception. If new object is null then simple remove reference to old object.)#"  , py::arg("theOldObject"),  py::arg("theNewObject"))
        .def("GetBadReference",
             (Standard_Boolean (TObj_Object::*)( const TDF_Label & , TDF_Label & ) const) static_cast<Standard_Boolean (TObj_Object::*)( const TDF_Label & , TDF_Label & ) const>(&TObj_Object::GetBadReference),
             R"#(Return True if this refers to the model theRoot belongs to and a referred label is not a descendant of theRoot. In this case theBadReference returns the currently referred label.)#"  , py::arg("theRoot"),  py::arg("theBadReference"))
        .def("RelocateReferences",
             (Standard_Boolean (TObj_Object::*)( const TDF_Label & , const TDF_Label & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TObj_Object::*)( const TDF_Label & , const TDF_Label & , const Standard_Boolean ) >(&TObj_Object::RelocateReferences),
             R"#(Make that each reference pointing to a descendant label of theFromRoot to point to an equivalent label under theToRoot. Return False if a resulting reference does not point to an TObj_Object Example: a referred object label = 0:3:24:7:2:7 theFromRoot = 0:3:24 theToRoot = 0:2 a new referred label = 0:2:7:2:7)#"  , py::arg("theFromRoot"),  py::arg("theToRoot"),  py::arg("theUpdateBackRefs")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CanRemoveReference",
             (Standard_Boolean (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) const) static_cast<Standard_Boolean (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) const>(&TObj_Object::CanRemoveReference),
             R"#(Returns True if the referred object theObject can be deleted without deletion of this object. Default implementation does nothing and returns False.)#"  , py::arg("theObject"))
        .def("RemoveReference",
             (void (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) ) static_cast<void (TObj_Object::*)( const opencascade::handle<TObj_Object> & ) >(&TObj_Object::RemoveReference),
             R"#(Removes reference to the object by replace reference to NULL object)#"  , py::arg("theObject"))
        .def("BeforeForgetReference",
             (void (TObj_Object::*)( const TDF_Label & ) ) static_cast<void (TObj_Object::*)( const TDF_Label & ) >(&TObj_Object::BeforeForgetReference),
             R"#(Invokes from TObj_TReference::BeforeForget(). theLabel - label on that reference become removed Default implementation is empty)#"  , py::arg(""))
        .def("CanDetach",
             (Standard_Boolean (TObj_Object::*)( const TObj_DeletingMode ) ) static_cast<Standard_Boolean (TObj_Object::*)( const TObj_DeletingMode ) >(&TObj_Object::CanDetach),
             R"#(Checks if object can be detached with specified mode)#"  , py::arg("theMode")=static_cast<const TObj_DeletingMode>(TObj_FreeOnly))
        .def("Detach",
             (Standard_Boolean (TObj_Object::*)( const TObj_DeletingMode ) ) static_cast<Standard_Boolean (TObj_Object::*)( const TObj_DeletingMode ) >(&TObj_Object::Detach),
             R"#(Deletes the object from the model. The dependent objects are either deleted or modified when possible (see description of TObj_DeletingMode enumeration for more details) Returns True if deletion was successful. Checks if object can be deleted. Should be redefined for each specific kind of object)#"  , py::arg("theMode")=static_cast<const TObj_DeletingMode>(TObj_FreeOnly))
        .def("IsAlive",
             (Standard_Boolean (TObj_Object::*)() const) static_cast<Standard_Boolean (TObj_Object::*)() const>(&TObj_Object::IsAlive),
             R"#(Checks that object alive in model Default implementation checks that object has TObject attribute at own label.)#" )
        .def("Clone",
             (opencascade::handle<TObj_Object> (TObj_Object::*)( const TDF_Label & , opencascade::handle<TDF_RelocationTable> ) ) static_cast<opencascade::handle<TObj_Object> (TObj_Object::*)( const TDF_Label & , opencascade::handle<TDF_RelocationTable> ) >(&TObj_Object::Clone),
             R"#(Copy me to other label theTargetLabel New object will not have all the reference that has me. Coping object with data and childs, but change name by adding string "_copy" As result return handle of new object (null handle is something wrong) NOTE: BackReferences not coping. After clonning all objects it is neccessary to call copy references with the same relocation table)#"  , py::arg("theTargetLabel"),  py::arg("theRelocTable"))
        .def("CopyReferences",
             (void (TObj_Object::*)( const opencascade::handle<TObj_Object> & , const opencascade::handle<TDF_RelocationTable> & ) ) static_cast<void (TObj_Object::*)( const opencascade::handle<TObj_Object> & , const opencascade::handle<TDF_RelocationTable> & ) >(&TObj_Object::CopyReferences),
             R"#(Coping the references. return Standard_False is Target object is different type)#"  , py::arg("theTargetObject"),  py::arg("theRelocTable"))
        .def("CopyChildren",
             (void (TObj_Object::*)( TDF_Label & , const opencascade::handle<TDF_RelocationTable> & ) ) static_cast<void (TObj_Object::*)( TDF_Label & , const opencascade::handle<TDF_RelocationTable> & ) >(&TObj_Object::CopyChildren),
             R"#(Coping the children from source label to the target.)#"  , py::arg("theTargetLabel"),  py::arg("theRelocTable"))
        .def("GetOrder",
             (Standard_Integer (TObj_Object::*)() const) static_cast<Standard_Integer (TObj_Object::*)() const>(&TObj_Object::GetOrder),
             R"#(returns order of object (or tag of their label if order is not initialised))#" )
        .def("SetOrder",
             (Standard_Boolean (TObj_Object::*)( const Standard_Integer & ) ) static_cast<Standard_Boolean (TObj_Object::*)( const Standard_Integer & ) >(&TObj_Object::SetOrder),
             R"#(sets order of object)#"  , py::arg("theIndx"))
        .def("GetTypeFlags",
             (Standard_Integer (TObj_Object::*)() const) static_cast<Standard_Integer (TObj_Object::*)() const>(&TObj_Object::GetTypeFlags),
             R"#(Returns flags (bitmask) that define properties of objects of that type By default returns flag Visible)#" )
        .def("AfterRetrieval",
             (void (TObj_Object::*)() ) static_cast<void (TObj_Object::*)() >(&TObj_Object::AfterRetrieval),
             R"#(Preforms updating the links and dependances of the object which are not stored in persistence. Should be redefined if necessary.)#" )
        .def("BeforeStoring",
             (void (TObj_Object::*)() ) static_cast<void (TObj_Object::*)() >(&TObj_Object::BeforeStoring),
             R"#(Preforms storing the objects transient fields in OCAF document which were outside transaction mechanism. Default implementation doesnot nothing)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_Object::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_Object::*)() const>(&TObj_Object::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_Object::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TObj_ObjectIterator ,opencascade::handle<TObj_ObjectIterator>>(m,"TObj_ObjectIterator");

    static_cast<py::class_<TObj_ObjectIterator ,opencascade::handle<TObj_ObjectIterator> , Standard_Transient>>(m.attr("TObj_ObjectIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TObj_ObjectIterator::*)() const) static_cast<Standard_Boolean (TObj_ObjectIterator::*)() const>(&TObj_ObjectIterator::More),
             R"#(Returns True if iteration is not finished and method Current() will give the object. Default implementation returns False)#" )
        .def("Next",
             (void (TObj_ObjectIterator::*)() ) static_cast<void (TObj_ObjectIterator::*)() >(&TObj_ObjectIterator::Next),
             R"#(Iterates to the next object Default implementation does nothing)#" )
        .def("Value",
             (opencascade::handle<TObj_Object> (TObj_ObjectIterator::*)() const) static_cast<opencascade::handle<TObj_Object> (TObj_ObjectIterator::*)() const>(&TObj_ObjectIterator::Value),
             R"#(Returns current object (or null if iteration has finished) Default implementation returns null handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_ObjectIterator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_ObjectIterator::*)() const>(&TObj_ObjectIterator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_ObjectIterator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_Persistence , shared_ptr_nodelete<TObj_Persistence>,Py_TObj_Persistence >>(m.attr("TObj_Persistence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_TIntSparseArray ,opencascade::handle<TObj_TIntSparseArray> , TDF_Attribute>>(m.attr("TObj_TIntSparseArray"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TObj_TIntSparseArray::*)() const) static_cast<const Standard_GUID & (TObj_TIntSparseArray::*)() const>(&TObj_TIntSparseArray::ID),
             R"#(Returns the ID of this attribute.)#" )
        .def("Size",
             (Standard_Size (TObj_TIntSparseArray::*)() const) static_cast<Standard_Size (TObj_TIntSparseArray::*)() const>(&TObj_TIntSparseArray::Size),
             R"#(Returns the number of stored values in the set)#" )
        .def("GetIterator",
             (TObj_TIntSparseArray::Iterator (TObj_TIntSparseArray::*)() const) static_cast<TObj_TIntSparseArray::Iterator (TObj_TIntSparseArray::*)() const>(&TObj_TIntSparseArray::GetIterator),
             R"#(Returns iterator on objects contained in the set)#" )
        .def("HasValue",
             (Standard_Boolean (TObj_TIntSparseArray::*)( const Standard_Size ) const) static_cast<Standard_Boolean (TObj_TIntSparseArray::*)( const Standard_Size ) const>(&TObj_TIntSparseArray::HasValue),
             R"#(Returns true if the value with the given ID is present.)#"  , py::arg("theId"))
        .def("Value",
             (Standard_Integer (TObj_TIntSparseArray::*)( const Standard_Size ) const) static_cast<Standard_Integer (TObj_TIntSparseArray::*)( const Standard_Size ) const>(&TObj_TIntSparseArray::Value),
             R"#(Returns the value by its ID. Raises an exception if no value is stored with this ID)#"  , py::arg("theId"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TObj_TIntSparseArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TObj_TIntSparseArray::*)() const>(&TObj_TIntSparseArray::NewEmpty),
             R"#(Returns an new empty TObj_TIntSparseArray attribute. It is used by the copy algorithm.)#" )
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TObj_TIntSparseArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TObj_TIntSparseArray::*)() const>(&TObj_TIntSparseArray::BackupCopy),
             R"#(Moves this delta into a new other attribute.)#" )
        .def("Restore",
             (void (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_Attribute> & ) >(&TObj_TIntSparseArray::Restore),
             R"#(Restores the set using info saved in backup attribute theDelta.)#"  , py::arg("theDelta"))
        .def("Paste",
             (void (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TObj_TIntSparseArray::Paste),
             R"#(This method is used when copying an attribute from a source structure into a target structure.)#"  , py::arg("theInto"),  py::arg("theRT"))
        .def("BeforeCommitTransaction",
             (void (TObj_TIntSparseArray::*)() ) static_cast<void (TObj_TIntSparseArray::*)() >(&TObj_TIntSparseArray::BeforeCommitTransaction),
             R"#(It is called just before Commit or Abort transaction and does Backup() to create a delta)#" )
        .def("DeltaOnModification",
             (void (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_DeltaOnModification> & ) ) static_cast<void (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_DeltaOnModification> & ) >(&TObj_TIntSparseArray::DeltaOnModification),
             R"#(Applies theDelta to this.)#"  , py::arg("theDelta"))
        .def("AfterUndo",
             (Standard_Boolean (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TObj_TIntSparseArray::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TObj_TIntSparseArray::AfterUndo),
             R"#(Clears my modification delta; called after application of theDelta)#"  , py::arg("theDelta"),  py::arg("toForce"))
        .def("SetDoBackup",
             (void (TObj_TIntSparseArray::*)( const Standard_Boolean ) ) static_cast<void (TObj_TIntSparseArray::*)( const Standard_Boolean ) >(&TObj_TIntSparseArray::SetDoBackup),
             R"#(Sets the flag pointing to the necessity to maintain a modification delta. It is called by the retrieval driver)#"  , py::arg("toDo"))
        .def("ClearDelta",
             (void (TObj_TIntSparseArray::*)() ) static_cast<void (TObj_TIntSparseArray::*)() >(&TObj_TIntSparseArray::ClearDelta),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_TIntSparseArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_TIntSparseArray::*)() const>(&TObj_TIntSparseArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_TIntSparseArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_TModel ,opencascade::handle<TObj_TModel> , TDF_Attribute>>(m.attr("TObj_TModel"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TObj_TModel::*)() const) static_cast<const Standard_GUID & (TObj_TModel::*)() const>(&TObj_TModel::ID),
             R"#(Returns the ID of TObj_TModel attribute.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TObj_TModel::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TObj_TModel::*)() const>(&TObj_TModel::NewEmpty),
             R"#(Returns an new empty TObj_TModel attribute. It is used by the copy algorithm.)#" )
        .def("Restore",
             (void (TObj_TModel::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TObj_TModel::*)( const opencascade::handle<TDF_Attribute> & ) >(&TObj_TModel::Restore),
             R"#(Restores the backuped contents from <theWith> into this one. It is used when aborting a transaction.)#"  , py::arg("theWith"))
        .def("Paste",
             (void (TObj_TModel::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TObj_TModel::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TObj_TModel::Paste),
             R"#(This method is used when copying an attribute from a source structure into a target structure.)#"  , py::arg("theInto"),  py::arg("theRT"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_TModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_TModel::*)() const>(&TObj_TModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_TModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_TNameContainer ,opencascade::handle<TObj_TNameContainer> , TDF_Attribute>>(m.attr("TObj_TNameContainer"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TObj_TNameContainer::*)() const) static_cast<const Standard_GUID & (TObj_TNameContainer::*)() const>(&TObj_TNameContainer::ID),
             R"#(Returns the ID of TObj_TNameContainer attribute.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TObj_TNameContainer::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TObj_TNameContainer::*)() const>(&TObj_TNameContainer::NewEmpty),
             R"#(Returns an new empty TObj_TNameContainer attribute. It is used by the copy algorithm.)#" )
        .def("Restore",
             (void (TObj_TNameContainer::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TObj_TNameContainer::*)( const opencascade::handle<TDF_Attribute> & ) >(&TObj_TNameContainer::Restore),
             R"#(Restores the backuped contents from <theWith> into this one. It is used when aborting a transaction.)#"  , py::arg("theWith"))
        .def("Paste",
             (void (TObj_TNameContainer::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TObj_TNameContainer::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TObj_TNameContainer::Paste),
             R"#(This method is used when copying an attribute from a source structure into a target structure.)#"  , py::arg("theInto"),  py::arg("theRT"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_TNameContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_TNameContainer::*)() const>(&TObj_TNameContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_TNameContainer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_TObject ,opencascade::handle<TObj_TObject> , TDF_Attribute>>(m.attr("TObj_TObject"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TObj_TObject::*)() const) static_cast<const Standard_GUID & (TObj_TObject::*)() const>(&TObj_TObject::ID),
             R"#(Returns the ID of TObj_TObject attribute.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TObj_TObject::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TObj_TObject::*)() const>(&TObj_TObject::NewEmpty),
             R"#(Returns an new empty TObj_TObject attribute. It is used by the copy algorithm.)#" )
        .def("Restore",
             (void (TObj_TObject::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TObj_TObject::*)( const opencascade::handle<TDF_Attribute> & ) >(&TObj_TObject::Restore),
             R"#(Restores the backuped contents from <theWith> into this one. It is used when aborting a transaction.)#"  , py::arg("theWith"))
        .def("Paste",
             (void (TObj_TObject::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TObj_TObject::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TObj_TObject::Paste),
             R"#(This method is used when copying an attribute from a source structure into a target structure.)#"  , py::arg("theInto"),  py::arg("theRT"))
        .def("BeforeForget",
             (void (TObj_TObject::*)() ) static_cast<void (TObj_TObject::*)() >(&TObj_TObject::BeforeForget),
             R"#(Tell TObj_Object to die, i.e. (myElem->IsAlive() == false) after that)#" )
        .def("AfterUndo",
             (Standard_Boolean (TObj_TObject::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TObj_TObject::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TObj_TObject::AfterUndo),
             R"#(Tell TObj_Object to rise from the dead, i.e. (myElem->IsAlive() == true) after that)#"  , py::arg("anAttDelta"),  py::arg("forceIt"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_TObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_TObject::*)() const>(&TObj_TObject::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_TObject::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_TReference ,opencascade::handle<TObj_TReference> , TDF_Attribute>>(m.attr("TObj_TReference"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TObj_TReference::*)() const) static_cast<const Standard_GUID & (TObj_TReference::*)() const>(&TObj_TReference::ID),
             R"#(Returns the ID of TObj_TReference attribute.)#" )
        .def("GetMasterLabel",
             (TDF_Label (TObj_TReference::*)() const) static_cast<TDF_Label (TObj_TReference::*)() const>(&TObj_TReference::GetMasterLabel),
             R"#(Returns the Label of master object.)#" )
        .def("GetLabel",
             (TDF_Label (TObj_TReference::*)() const) static_cast<TDF_Label (TObj_TReference::*)() const>(&TObj_TReference::GetLabel),
             R"#(Returns the referred label.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TObj_TReference::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TObj_TReference::*)() const>(&TObj_TReference::NewEmpty),
             R"#(Returns an new empty TObj_TReference attribute. It is used by the copy algorithm.)#" )
        .def("Restore",
             (void (TObj_TReference::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TObj_TReference::*)( const opencascade::handle<TDF_Attribute> & ) >(&TObj_TReference::Restore),
             R"#(Restores the backuped contents from <theWith> into this one. It is used when aborting a transaction.)#"  , py::arg("theWith"))
        .def("Paste",
             (void (TObj_TReference::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TObj_TReference::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TObj_TReference::Paste),
             R"#(This method is used when copying an attribute from a source structure into a target structure.)#"  , py::arg("theInto"),  py::arg("theRT"))
        .def("BeforeForget",
             (void (TObj_TReference::*)() ) static_cast<void (TObj_TReference::*)() >(&TObj_TReference::BeforeForget),
             R"#(Remove back references of it reference if it is in other document.)#" )
        .def("BeforeUndo",
             (Standard_Boolean (TObj_TReference::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TObj_TReference::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TObj_TReference::BeforeUndo),
             R"#(It is necessary for tranzaction mechanism (Undo/Redo).)#"  , py::arg("theDelta"),  py::arg("isForced")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AfterUndo",
             (Standard_Boolean (TObj_TReference::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TObj_TReference::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TObj_TReference::AfterUndo),
             R"#(It is necessary for tranzaction mechanism (Undo/Redo).)#"  , py::arg("theDelta"),  py::arg("isForced")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AfterResume",
             (void (TObj_TReference::*)() ) static_cast<void (TObj_TReference::*)() >(&TObj_TReference::AfterResume),
             R"#(Check if back reference exists for reference.)#" )
        .def("AfterRetrieval",
             (Standard_Boolean (TObj_TReference::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (TObj_TReference::*)( const Standard_Boolean ) >(&TObj_TReference::AfterRetrieval),
             R"#(Called after retrieval reference from file.)#"  , py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_TReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_TReference::*)() const>(&TObj_TReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_TReference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_TXYZ ,opencascade::handle<TObj_TXYZ> , TDF_Attribute>>(m.attr("TObj_TXYZ"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TObj_TXYZ::*)() const) static_cast<const Standard_GUID & (TObj_TXYZ::*)() const>(&TObj_TXYZ::ID),
             R"#(Returns the ID of TObj_TXYZ attribute.)#" )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TObj_TXYZ::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TObj_TXYZ::*)() const>(&TObj_TXYZ::NewEmpty),
             R"#(Returns an new empty TObj_TXYZ attribute. It is used by the copy algorithm.)#" )
        .def("Restore",
             (void (TObj_TXYZ::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TObj_TXYZ::*)( const opencascade::handle<TDF_Attribute> & ) >(&TObj_TXYZ::Restore),
             R"#(Restores the backuped contents from <theWith> into this one. It is used when aborting a transaction.)#"  , py::arg("theWith"))
        .def("Paste",
             (void (TObj_TXYZ::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TObj_TXYZ::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TObj_TXYZ::Paste),
             R"#(This method is used when copying an attribute from a source structure into a target structure.)#"  , py::arg("theInto"),  py::arg("theRT"))
        .def("Dump",
             (Standard_OStream & (TObj_TXYZ::*)( std::ostream & ) const) static_cast<Standard_OStream & (TObj_TXYZ::*)( std::ostream & ) const>(&TObj_TXYZ::Dump),
             R"#(This method dumps the attribute value into the stream)#"  , py::arg("theOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_TXYZ::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_TXYZ::*)() const>(&TObj_TXYZ::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_TXYZ::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_LabelIterator ,opencascade::handle<TObj_LabelIterator>,Py_TObj_LabelIterator , TObj_ObjectIterator>>(m.attr("TObj_LabelIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TObj_LabelIterator::*)() const) static_cast<Standard_Boolean (TObj_LabelIterator::*)() const>(&TObj_LabelIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TObj_LabelIterator::*)() ) static_cast<void (TObj_LabelIterator::*)() >(&TObj_LabelIterator::Next),
             R"#(Move to the next Item)#" )
        .def("Value",
             (opencascade::handle<TObj_Object> (TObj_LabelIterator::*)() const) static_cast<opencascade::handle<TObj_Object> (TObj_LabelIterator::*)() const>(&TObj_LabelIterator::Value),
             R"#(Returns the current item)#" )
        .def("LabelValue",
             (const TDF_Label & (TObj_LabelIterator::*)() const) static_cast<const TDF_Label & (TObj_LabelIterator::*)() const>(&TObj_LabelIterator::LabelValue),
             R"#(Returns the label of the current item)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_LabelIterator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_LabelIterator::*)() const>(&TObj_LabelIterator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_LabelIterator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_ModelIterator ,opencascade::handle<TObj_ModelIterator> , TObj_ObjectIterator>>(m.attr("TObj_ModelIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TObj_ModelIterator::*)() const) static_cast<Standard_Boolean (TObj_ModelIterator::*)() const>(&TObj_ModelIterator::More),
             R"#(Returns True if iteration is not finished and method Value() will give the object)#" )
        .def("Next",
             (void (TObj_ModelIterator::*)() ) static_cast<void (TObj_ModelIterator::*)() >(&TObj_ModelIterator::Next),
             R"#(Iterates to the next object)#" )
        .def("Value",
             (opencascade::handle<TObj_Object> (TObj_ModelIterator::*)() const) static_cast<opencascade::handle<TObj_Object> (TObj_ModelIterator::*)() const>(&TObj_ModelIterator::Value),
             R"#(Returns current object (or MainObj of Model if iteration has finished))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_ModelIterator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_ModelIterator::*)() const>(&TObj_ModelIterator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_ModelIterator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_Partition ,opencascade::handle<TObj_Partition> , TObj_Object>>(m.attr("TObj_Partition"))
    // constructors
    // custom constructors
    // methods
        .def("SetName",
             (Standard_Boolean (TObj_Partition::*)( const opencascade::handle<TCollection_HExtendedString> & ) const) static_cast<Standard_Boolean (TObj_Partition::*)( const opencascade::handle<TCollection_HExtendedString> & ) const>(&TObj_Partition::SetName),
             R"#(Sets name of the object. partition does not check unique of own name)#"  , py::arg("theName"))
        .def("AfterRetrieval",
             (void (TObj_Partition::*)() ) static_cast<void (TObj_Partition::*)() >(&TObj_Partition::AfterRetrieval),
             R"#(Preforms updating the links and dependances of the object which are not stored in persistence. Does not register the partition name)#" )
        .def("GetNamePrefix",
             (opencascade::handle<TCollection_HExtendedString> (TObj_Partition::*)() const) static_cast<opencascade::handle<TCollection_HExtendedString> (TObj_Partition::*)() const>(&TObj_Partition::GetNamePrefix),
             R"#(Returns prefix for names of the objects in partition.)#" )
        .def("Update",
             (Standard_Boolean (TObj_Partition::*)() ) static_cast<Standard_Boolean (TObj_Partition::*)() >(&TObj_Partition::Update),
             R"#(Does nothing in the partition.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_Partition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_Partition::*)() const>(&TObj_Partition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_Partition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_SequenceIterator ,opencascade::handle<TObj_SequenceIterator> , TObj_ObjectIterator>>(m.attr("TObj_SequenceIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TObj_SequenceIterator::*)() const) static_cast<Standard_Boolean (TObj_SequenceIterator::*)() const>(&TObj_SequenceIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TObj_SequenceIterator::*)() ) static_cast<void (TObj_SequenceIterator::*)() >(&TObj_SequenceIterator::Next),
             R"#(Move to the next Item)#" )
        .def("Value",
             (opencascade::handle<TObj_Object> (TObj_SequenceIterator::*)() const) static_cast<opencascade::handle<TObj_Object> (TObj_SequenceIterator::*)() const>(&TObj_SequenceIterator::Value),
             R"#(Returns the current item)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_SequenceIterator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_SequenceIterator::*)() const>(&TObj_SequenceIterator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_SequenceIterator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_HiddenPartition ,opencascade::handle<TObj_HiddenPartition> , TObj_Partition>>(m.attr("TObj_HiddenPartition"))
    // constructors
    // custom constructors
    // methods
        .def("GetTypeFlags",
             (Standard_Integer (TObj_HiddenPartition::*)() const) static_cast<Standard_Integer (TObj_HiddenPartition::*)() const>(&TObj_HiddenPartition::GetTypeFlags),
             R"#(Returns all flags of father except Visible)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_HiddenPartition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_HiddenPartition::*)() const>(&TObj_HiddenPartition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_HiddenPartition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_OcafObjectIterator ,opencascade::handle<TObj_OcafObjectIterator> , TObj_LabelIterator>>(m.attr("TObj_OcafObjectIterator"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_OcafObjectIterator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_OcafObjectIterator::*)() const>(&TObj_OcafObjectIterator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_OcafObjectIterator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TObj_ReferenceIterator ,opencascade::handle<TObj_ReferenceIterator> , TObj_LabelIterator>>(m.attr("TObj_ReferenceIterator"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TObj_ReferenceIterator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TObj_ReferenceIterator::*)() const>(&TObj_ReferenceIterator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TObj_ReferenceIterator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TObj_ReferenceIterator.hxx
// ./opencascade/TObj_Persistence.hxx
// ./opencascade/TObj_Application.hxx
// ./opencascade/TObj_LabelIterator.hxx
// ./opencascade/TObj_Model.hxx
// ./opencascade/TObj_Object.hxx
// ./opencascade/TObj_SequenceIterator.hxx
// ./opencascade/TObj_TIntSparseArray.hxx
// ./opencascade/TObj_TNameContainer.hxx
// ./opencascade/TObj_DeletingMode.hxx
// ./opencascade/TObj_Container.hxx
// ./opencascade/TObj_Assistant.hxx
// ./opencascade/TObj_ObjectIterator.hxx
// ./opencascade/TObj_TObject.hxx
// ./opencascade/TObj_TModel.hxx
// ./opencascade/TObj_TReference.hxx
// ./opencascade/TObj_Common.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const opencascade::handle<TCollection_HExtendedString> & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const opencascade::handle<TCollection_HExtendedString> & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given handle referred to extended string, in the range [1, theUpperBound])#"  , py::arg("theHExtendedString"),  py::arg("theUpperBound"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const opencascade::handle<TCollection_HExtendedString> & , const opencascade::handle<TCollection_HExtendedString> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<TCollection_HExtendedString> & , const opencascade::handle<TCollection_HExtendedString> & )>(&IsEqual),
          R"#(None)#"  , py::arg("theStr1"),  py::arg("theStr2"));
// ./opencascade/TObj_TXYZ.hxx
// ./opencascade/TObj_CheckModel.hxx
// ./opencascade/TObj_SequenceOfObject.hxx
// ./opencascade/TObj_SequenceOfIterator.hxx
// ./opencascade/TObj_Partition.hxx
// ./opencascade/TObj_ModelIterator.hxx
// ./opencascade/TObj_HiddenPartition.hxx
// ./opencascade/TObj_OcafObjectIterator.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_SparseArray<Standard_Integer>(m,"TObj_TIntSparseArray_VecOfData");
    register_template_NCollection_DataMap<opencascade::handle<TCollection_HExtendedString>, TDF_Label>(m,"TObj_DataMapOfNameLabel");
    register_template_NCollection_DataMap<TCollection_AsciiString, Standard_Address>(m,"TObj_DataMapOfStringPointer");
    register_template_NCollection_Sequence<opencascade::handle<TObj_Object> >(m,"TObj_SequenceOfObject");
    register_template_NCollection_Sequence<opencascade::handle<TObj_ObjectIterator> >(m,"TObj_SequenceOfIterator");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
