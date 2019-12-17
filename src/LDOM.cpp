
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <LDOM_BasicElement.hxx>
#include <LDOM_CharacterData.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_NodeList.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_DocumentType.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_BasicText.hxx>
#include <LDOM_OSStream.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_Attr.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_Node.hxx>
#include <LDOM_BasicElement.hxx>

// module includes
#include <LDOM_Attr.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_BasicText.hxx>
#include <LDOM_CDATASection.hxx>
#include <LDOM_CharacterData.hxx>
#include <LDOM_CharReference.hxx>
#include <LDOM_Comment.hxx>
#include <LDOM_DeclareSequence.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_DocumentType.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_LDOMImplementation.hxx>
#include <LDOM_MemManager.hxx>
#include <LDOM_Node.hxx>
#include <LDOM_NodeList.hxx>
#include <LDOM_OSStream.hxx>
#include <LDOM_Text.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_XmlWriter.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LDOM(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LDOM"));


//Python trampoline classes

// classes


    static_cast<py::class_<LDOM_BasicNode ,std::unique_ptr<LDOM_BasicNode>  >>(m.attr("LDOM_BasicNode"))
        .def("isNull",
             (Standard_Boolean (LDOM_BasicNode::*)() const) static_cast<Standard_Boolean (LDOM_BasicNode::*)() const>(&LDOM_BasicNode::isNull),
             R"#(None)#" )
        .def("getNodeType",
             (LDOM_Node::NodeType (LDOM_BasicNode::*)() const) static_cast<LDOM_Node::NodeType (LDOM_BasicNode::*)() const>(&LDOM_BasicNode::getNodeType),
             R"#(None)#" )
        .def("GetSibling",
             (const LDOM_BasicNode * (LDOM_BasicNode::*)() const) static_cast<const LDOM_BasicNode * (LDOM_BasicNode::*)() const>(&LDOM_BasicNode::GetSibling),
             R"#(None)#" )
;


    static_cast<py::class_<LDOM_MemManager ,opencascade::handle<LDOM_MemManager>  , Standard_Transient >>(m.attr("LDOM_MemManager"))
        .def(py::init< const Standard_Integer >()  , py::arg("aBlockSize") )
        .def("Allocate",
             (void * (LDOM_MemManager::*)( const Standard_Integer  ) ) static_cast<void * (LDOM_MemManager::*)( const Standard_Integer  ) >(&LDOM_MemManager::Allocate),
             R"#(None)#"  , py::arg("aSize"))
        .def("HashedAllocate",
             (const char * (LDOM_MemManager::*)( const char * ,  const Standard_Integer ,  Standard_Integer &  ) ) static_cast<const char * (LDOM_MemManager::*)( const char * ,  const Standard_Integer ,  Standard_Integer &  ) >(&LDOM_MemManager::HashedAllocate),
             R"#(None)#"  , py::arg("aString"),  py::arg("theLen"),  py::arg("theHash"))
        .def("HashedAllocate",
             (void (LDOM_MemManager::*)( const char * ,  const Standard_Integer ,  LDOMBasicString &  ) ) static_cast<void (LDOM_MemManager::*)( const char * ,  const Standard_Integer ,  LDOMBasicString &  ) >(&LDOM_MemManager::HashedAllocate),
             R"#(None)#"  , py::arg("aString"),  py::arg("theLen"),  py::arg("theResult"))
        .def("Self",
             (const LDOM_MemManager & (LDOM_MemManager::*)() const) static_cast<const LDOM_MemManager & (LDOM_MemManager::*)() const>(&LDOM_MemManager::Self),
             R"#(None)#" )
        .def("RootElement",
             (const LDOM_BasicElement * (LDOM_MemManager::*)() const) static_cast<const LDOM_BasicElement * (LDOM_MemManager::*)() const>(&LDOM_MemManager::RootElement),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (LDOM_MemManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (LDOM_MemManager::*)() const>(&LDOM_MemManager::DynamicType),
             R"#(None)#" )
        .def_static("Hash_s",
                    (Standard_Integer (*)( const char * ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const char * ,  const Standard_Integer  ) >(&LDOM_MemManager::Hash),
                    R"#(None)#"  , py::arg("theString"),  py::arg("theLen"))
        .def_static("CompareStrings_s",
                    (Standard_Boolean (*)( const char * ,  const Standard_Integer ,  const char *  ) ) static_cast<Standard_Boolean (*)( const char * ,  const Standard_Integer ,  const char *  ) >(&LDOM_MemManager::CompareStrings),
                    R"#(None)#"  , py::arg("theString"),  py::arg("theHashValue"),  py::arg("theHashedStr"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&LDOM_MemManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&LDOM_MemManager::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/LDOM_BasicNode.hxx
// ./opencascade/LDOM_CharReference.hxx
// ./opencascade/LDOM_DocumentType.hxx
// ./opencascade/LDOM_BasicText.hxx
// ./opencascade/LDOM_BasicElement.hxx
// ./opencascade/LDOM_DeclareSequence.hxx
// ./opencascade/LDOM_CDATASection.hxx
// ./opencascade/LDOM_MemManager.hxx
// ./opencascade/LDOM_NodeList.hxx
// ./opencascade/LDOM_LDOMImplementation.hxx
// ./opencascade/LDOM_Text.hxx
// ./opencascade/LDOM_Attr.hxx
// ./opencascade/LDOM_CharacterData.hxx
// ./opencascade/LDOM_XmlReader.hxx
// ./opencascade/LDOM_Comment.hxx
// ./opencascade/LDOM_BasicAttribute.hxx
// ./opencascade/LDOM_Node.hxx
// ./opencascade/LDOM_XmlWriter.hxx
// ./opencascade/LDOM_Element.hxx
// ./opencascade/LDOM_Document.hxx
// ./opencascade/LDOM_OSStream.hxx

// operators

// register typdefs
// ./opencascade/LDOM_BasicNode.hxx
// ./opencascade/LDOM_CharReference.hxx
// ./opencascade/LDOM_DocumentType.hxx
// ./opencascade/LDOM_BasicText.hxx
// ./opencascade/LDOM_BasicElement.hxx
// ./opencascade/LDOM_DeclareSequence.hxx
// ./opencascade/LDOM_CDATASection.hxx
// ./opencascade/LDOM_MemManager.hxx
// ./opencascade/LDOM_NodeList.hxx
// ./opencascade/LDOM_LDOMImplementation.hxx
// ./opencascade/LDOM_Text.hxx
// ./opencascade/LDOM_Attr.hxx
// ./opencascade/LDOM_CharacterData.hxx
// ./opencascade/LDOM_XmlReader.hxx
// ./opencascade/LDOM_Comment.hxx
// ./opencascade/LDOM_BasicAttribute.hxx
// ./opencascade/LDOM_Node.hxx
// ./opencascade/LDOM_XmlWriter.hxx
// ./opencascade/LDOM_Element.hxx
// ./opencascade/LDOM_Document.hxx
// ./opencascade/LDOM_OSStream.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
