
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
#include <LDOM_OSStream.hxx>
#include <LDOM_DocumentType.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_NodeList.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_Attr.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_Node.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_CharacterData.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_Element.hxx>
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


    static_cast<py::class_<LDOM_BasicNode , shared_ptr<LDOM_BasicNode> >>(m.attr("LDOM_BasicNode"))
    // constructors
    // custom constructors
    // methods
        .def("isNull",
             (Standard_Boolean (LDOM_BasicNode::*)() const) static_cast<Standard_Boolean (LDOM_BasicNode::*)() const>(&LDOM_BasicNode::isNull),
             R"#(None)#" )
        .def("getNodeType",
             (LDOM_Node::NodeType (LDOM_BasicNode::*)() const) static_cast<LDOM_Node::NodeType (LDOM_BasicNode::*)() const>(&LDOM_BasicNode::getNodeType),
             R"#(None)#" )
        .def("GetSibling",
             (const LDOM_BasicNode * (LDOM_BasicNode::*)() const) static_cast<const LDOM_BasicNode * (LDOM_BasicNode::*)() const>(&LDOM_BasicNode::GetSibling),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<LDOM_CharReference , shared_ptr<LDOM_CharReference>>(m,"LDOM_CharReference");

    static_cast<py::class_<LDOM_CharReference , shared_ptr<LDOM_CharReference> >>(m.attr("LDOM_CharReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_Document , shared_ptr<LDOM_Document> >>(m.attr("LDOM_Document"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_MemManager & >()  , py::arg("aMemManager") )
    // custom constructors
    // methods
        .def("createElement",
             (LDOM_Element (LDOM_Document::*)( const LDOMString & ) ) static_cast<LDOM_Element (LDOM_Document::*)( const LDOMString & ) >(&LDOM_Document::createElement),
             R"#(None)#"  , py::arg("theTagName"))
        .def("createCDATASection",
             (LDOM_CDATASection (LDOM_Document::*)( const LDOMString & ) ) static_cast<LDOM_CDATASection (LDOM_Document::*)( const LDOMString & ) >(&LDOM_Document::createCDATASection),
             R"#(None)#"  , py::arg("theData"))
        .def("createComment",
             (LDOM_Comment (LDOM_Document::*)( const LDOMString & ) ) static_cast<LDOM_Comment (LDOM_Document::*)( const LDOMString & ) >(&LDOM_Document::createComment),
             R"#(None)#"  , py::arg("theData"))
        .def("createTextNode",
             (LDOM_Text (LDOM_Document::*)( const LDOMString & ) ) static_cast<LDOM_Text (LDOM_Document::*)( const LDOMString & ) >(&LDOM_Document::createTextNode),
             R"#(None)#"  , py::arg("theData"))
        .def("getDocumentElement",
             (LDOM_Element (LDOM_Document::*)() const) static_cast<LDOM_Element (LDOM_Document::*)() const>(&LDOM_Document::getDocumentElement),
             R"#(None)#" )
        .def("getElementsByTagName",
             (LDOM_NodeList (LDOM_Document::*)( const LDOMString & ) const) static_cast<LDOM_NodeList (LDOM_Document::*)( const LDOMString & ) const>(&LDOM_Document::getElementsByTagName),
             R"#(None)#"  , py::arg("theTagName"))
        .def("isNull",
             (Standard_Boolean (LDOM_Document::*)() const) static_cast<Standard_Boolean (LDOM_Document::*)() const>(&LDOM_Document::isNull),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("createDocument_s",
                    (LDOM_Document (*)( const LDOMString & ) ) static_cast<LDOM_Document (*)( const LDOMString & ) >(&LDOM_Document::createDocument),
                    R"#(None)#"  , py::arg("theQualifiedName"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_DocumentType , shared_ptr<LDOM_DocumentType> >>(m.attr("LDOM_DocumentType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<LDOM_LDOMImplementation , shared_ptr<LDOM_LDOMImplementation>>(m,"LDOM_LDOMImplementation");

    static_cast<py::class_<LDOM_LDOMImplementation , shared_ptr<LDOM_LDOMImplementation> >>(m.attr("LDOM_LDOMImplementation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("createDocument_s",
                    (LDOM_Document (*)( const LDOMString & , const LDOMString & , const LDOM_DocumentType & ) ) static_cast<LDOM_Document (*)( const LDOMString & , const LDOMString & , const LDOM_DocumentType & ) >(&LDOM_LDOMImplementation::createDocument),
                    R"#(None)#"  , py::arg("aNamespaceURI"),  py::arg("aQualifiedName"),  py::arg("aDocType"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_Node , shared_ptr<LDOM_Node> >>(m.attr("LDOM_Node"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_Node & >()  , py::arg("anOther") )
    // custom constructors
    // methods
        .def("getOwnerDocument",
             (const LDOM_MemManager & (LDOM_Node::*)() const) static_cast<const LDOM_MemManager & (LDOM_Node::*)() const>(&LDOM_Node::getOwnerDocument),
             R"#(None)#" )
        .def("isNull",
             (Standard_Boolean (LDOM_Node::*)() const) static_cast<Standard_Boolean (LDOM_Node::*)() const>(&LDOM_Node::isNull),
             R"#(None)#" )
        .def("getNodeType",
             (LDOM_Node::NodeType (LDOM_Node::*)() const) static_cast<LDOM_Node::NodeType (LDOM_Node::*)() const>(&LDOM_Node::getNodeType),
             R"#(None)#" )
        .def("getNodeName",
             (LDOMString (LDOM_Node::*)() const) static_cast<LDOMString (LDOM_Node::*)() const>(&LDOM_Node::getNodeName),
             R"#(None)#" )
        .def("getNodeValue",
             (LDOMString (LDOM_Node::*)() const) static_cast<LDOMString (LDOM_Node::*)() const>(&LDOM_Node::getNodeValue),
             R"#(None)#" )
        .def("getFirstChild",
             (LDOM_Node (LDOM_Node::*)() const) static_cast<LDOM_Node (LDOM_Node::*)() const>(&LDOM_Node::getFirstChild),
             R"#(None)#" )
        .def("getLastChild",
             (LDOM_Node (LDOM_Node::*)() const) static_cast<LDOM_Node (LDOM_Node::*)() const>(&LDOM_Node::getLastChild),
             R"#(None)#" )
        .def("getNextSibling",
             (LDOM_Node (LDOM_Node::*)() const) static_cast<LDOM_Node (LDOM_Node::*)() const>(&LDOM_Node::getNextSibling),
             R"#(None)#" )
        .def("removeChild",
             (void (LDOM_Node::*)( const LDOM_Node & ) ) static_cast<void (LDOM_Node::*)( const LDOM_Node & ) >(&LDOM_Node::removeChild),
             R"#(None)#"  , py::arg("aChild"))
        .def("appendChild",
             (void (LDOM_Node::*)( const LDOM_Node & ) ) static_cast<void (LDOM_Node::*)( const LDOM_Node & ) >(&LDOM_Node::appendChild),
             R"#(None)#"  , py::arg("aChild"))
        .def("hasChildNodes",
             (Standard_Boolean (LDOM_Node::*)() const) static_cast<Standard_Boolean (LDOM_Node::*)() const>(&LDOM_Node::hasChildNodes),
             R"#(None)#" )
        .def("SetValueClear",
             (void (LDOM_Node::*)() const) static_cast<void (LDOM_Node::*)() const>(&LDOM_Node::SetValueClear),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_NodeList , shared_ptr<LDOM_NodeList> >>(m.attr("LDOM_NodeList"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_NodeList & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("item",
             (LDOM_Node (LDOM_NodeList::*)( const Standard_Integer ) const) static_cast<LDOM_Node (LDOM_NodeList::*)( const Standard_Integer ) const>(&LDOM_NodeList::item),
             R"#(None)#"  , py::arg(""))
        .def("getLength",
             (Standard_Integer (LDOM_NodeList::*)() const) static_cast<Standard_Integer (LDOM_NodeList::*)() const>(&LDOM_NodeList::getLength),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_OSStream , shared_ptr<LDOM_OSStream> >>(m.attr("LDOM_OSStream"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("theMaxBuf") )
    // custom constructors
    // methods
        .def("str",
             (Standard_CString (LDOM_OSStream::*)() const) static_cast<Standard_CString (LDOM_OSStream::*)() const>(&LDOM_OSStream::str),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (LDOM_OSStream::*)() const) static_cast<Standard_Integer (LDOM_OSStream::*)() const>(&LDOM_OSStream::Length),
             R"#(None)#" )
        .def("Clear",
             (void (LDOM_OSStream::*)() ) static_cast<void (LDOM_OSStream::*)() >(&LDOM_OSStream::Clear),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_SBuffer , shared_ptr<LDOM_SBuffer> >>(m.attr("LDOM_SBuffer"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("theMaxBuf") )
    // custom constructors
    // methods
        .def("str",
             (Standard_CString (LDOM_SBuffer::*)() const) static_cast<Standard_CString (LDOM_SBuffer::*)() const>(&LDOM_SBuffer::str),
             R"#(Concatenates strings of all sequence elements into one string. Space for output string is allocated with operator new. Caller of this function is responsible for memory release after the string usage.)#" )
        .def("Length",
             (Standard_Integer (LDOM_SBuffer::*)() const) static_cast<Standard_Integer (LDOM_SBuffer::*)() const>(&LDOM_SBuffer::Length),
             R"#(Returns full length of data contained)#" )
        .def("Clear",
             (void (LDOM_SBuffer::*)() ) static_cast<void (LDOM_SBuffer::*)() >(&LDOM_SBuffer::Clear),
             R"#(Clears first element of sequence and removes all others)#" )
        .def("overflow",
             (int (LDOM_SBuffer::*)( int ) ) static_cast<int (LDOM_SBuffer::*)( int ) >(&LDOM_SBuffer::overflow),
             R"#(None)#"  , py::arg("c")=static_cast<int>(EOF))
        .def("underflow",
             (int (LDOM_SBuffer::*)() ) static_cast<int (LDOM_SBuffer::*)() >(&LDOM_SBuffer::underflow),
             R"#(None)#" )
        .def("xsputn",
             (std::streamsize (LDOM_SBuffer::*)( const char * , std::streamsize ) ) static_cast<std::streamsize (LDOM_SBuffer::*)( const char * , std::streamsize ) >(&LDOM_SBuffer::xsputn),
             R"#(None)#"  , py::arg("s"),  py::arg("n"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_XmlReader , shared_ptr<LDOM_XmlReader> >>(m.attr("LDOM_XmlReader"))
    // constructors
    // custom constructors
    // methods
        .def("GetElement",
             (LDOM_BasicElement & (LDOM_XmlReader::*)() const) static_cast<LDOM_BasicElement & (LDOM_XmlReader::*)() const>(&LDOM_XmlReader::GetElement),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_XmlWriter , shared_ptr<LDOM_XmlWriter> >>(m.attr("LDOM_XmlWriter"))
    // constructors
        .def(py::init< const char * >()  , py::arg("theEncoding")=static_cast<const char *>(NULL) )
    // custom constructors
    // methods
        .def("SetIndentation",
             (void (LDOM_XmlWriter::*)( const Standard_Integer ) ) static_cast<void (LDOM_XmlWriter::*)( const Standard_Integer ) >(&LDOM_XmlWriter::SetIndentation),
             R"#(None)#"  , py::arg("theIndent"))
        .def("Write",
             (void (LDOM_XmlWriter::*)( std::ostream & , const LDOM_Document & ) ) static_cast<void (LDOM_XmlWriter::*)( std::ostream & , const LDOM_Document & ) >(&LDOM_XmlWriter::Write),
             R"#(None)#"  , py::arg("theOStream"),  py::arg("theDoc"))
        .def("Write",
             (void (LDOM_XmlWriter::*)( std::ostream & , const LDOM_Node & ) ) static_cast<void (LDOM_XmlWriter::*)( std::ostream & , const LDOM_Node & ) >(&LDOM_XmlWriter::Write),
             R"#(None)#"  , py::arg("theOStream"),  py::arg("theNode"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_Attr , shared_ptr<LDOM_Attr> , LDOM_Node>>(m.attr("LDOM_Attr"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_Attr & >()  , py::arg("anOther") )
    // custom constructors
    // methods
        .def("getName",
             (LDOMString (LDOM_Attr::*)() const) static_cast<LDOMString (LDOM_Attr::*)() const>(&LDOM_Attr::getName),
             R"#(None)#" )
        .def("getValue",
             (LDOMString (LDOM_Attr::*)() const) static_cast<LDOMString (LDOM_Attr::*)() const>(&LDOM_Attr::getValue),
             R"#(None)#" )
        .def("setValue",
             (void (LDOM_Attr::*)( const LDOMString & ) ) static_cast<void (LDOM_Attr::*)( const LDOMString & ) >(&LDOM_Attr::setValue),
             R"#(None)#"  , py::arg("aValue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_BasicAttribute , shared_ptr<LDOM_BasicAttribute> , LDOM_BasicNode>>(m.attr("LDOM_BasicAttribute"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetName",
             (const char * (LDOM_BasicAttribute::*)() const) static_cast<const char * (LDOM_BasicAttribute::*)() const>(&LDOM_BasicAttribute::GetName),
             R"#(None)#" )
        .def("GetValue",
             (const LDOMBasicString & (LDOM_BasicAttribute::*)() const) static_cast<const LDOMBasicString & (LDOM_BasicAttribute::*)() const>(&LDOM_BasicAttribute::GetValue),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_BasicElement , shared_ptr<LDOM_BasicElement> , LDOM_BasicNode>>(m.attr("LDOM_BasicElement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetTagName",
             (const char * (LDOM_BasicElement::*)() const) static_cast<const char * (LDOM_BasicElement::*)() const>(&LDOM_BasicElement::GetTagName),
             R"#(None)#" )
        .def("GetFirstChild",
             (const LDOM_BasicNode * (LDOM_BasicElement::*)() const) static_cast<const LDOM_BasicNode * (LDOM_BasicElement::*)() const>(&LDOM_BasicElement::GetFirstChild),
             R"#(None)#" )
        .def("GetLastChild",
             (const LDOM_BasicNode * (LDOM_BasicElement::*)() const) static_cast<const LDOM_BasicNode * (LDOM_BasicElement::*)() const>(&LDOM_BasicElement::GetLastChild),
             R"#(None)#" )
        .def("GetAttribute",
             (const LDOM_BasicAttribute & (LDOM_BasicElement::*)( const LDOMBasicString & , const LDOM_BasicNode * ) const) static_cast<const LDOM_BasicAttribute & (LDOM_BasicElement::*)( const LDOMBasicString & , const LDOM_BasicNode * ) const>(&LDOM_BasicElement::GetAttribute),
             R"#(None)#"  , py::arg("aName"),  py::arg("aLastCh"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_CharacterData , shared_ptr<LDOM_CharacterData> , LDOM_Node>>(m.attr("LDOM_CharacterData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_CharacterData & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("getData",
             (LDOMString (LDOM_CharacterData::*)() const) static_cast<LDOMString (LDOM_CharacterData::*)() const>(&LDOM_CharacterData::getData),
             R"#(None)#" )
        .def("setData",
             (void (LDOM_CharacterData::*)( const LDOMString & ) ) static_cast<void (LDOM_CharacterData::*)( const LDOMString & ) >(&LDOM_CharacterData::setData),
             R"#(None)#"  , py::arg("aValue"))
        .def("getLength",
             (Standard_Integer (LDOM_CharacterData::*)() const) static_cast<Standard_Integer (LDOM_CharacterData::*)() const>(&LDOM_CharacterData::getLength),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_Element , shared_ptr<LDOM_Element> , LDOM_Node>>(m.attr("LDOM_Element"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_Element & >()  , py::arg("anOther") )
    // custom constructors
    // methods
        .def("getTagName",
             (LDOMString (LDOM_Element::*)() const) static_cast<LDOMString (LDOM_Element::*)() const>(&LDOM_Element::getTagName),
             R"#(None)#" )
        .def("getAttribute",
             (LDOMString (LDOM_Element::*)( const LDOMString & ) const) static_cast<LDOMString (LDOM_Element::*)( const LDOMString & ) const>(&LDOM_Element::getAttribute),
             R"#(None)#"  , py::arg("aName"))
        .def("getAttributeNode",
             (LDOM_Attr (LDOM_Element::*)( const LDOMString & ) const) static_cast<LDOM_Attr (LDOM_Element::*)( const LDOMString & ) const>(&LDOM_Element::getAttributeNode),
             R"#(None)#"  , py::arg("aName"))
        .def("getElementsByTagName",
             (LDOM_NodeList (LDOM_Element::*)( const LDOMString & ) const) static_cast<LDOM_NodeList (LDOM_Element::*)( const LDOMString & ) const>(&LDOM_Element::getElementsByTagName),
             R"#(None)#"  , py::arg("aName"))
        .def("setAttribute",
             (void (LDOM_Element::*)( const LDOMString & , const LDOMString & ) ) static_cast<void (LDOM_Element::*)( const LDOMString & , const LDOMString & ) >(&LDOM_Element::setAttribute),
             R"#(None)#"  , py::arg("aName"),  py::arg("aValue"))
        .def("setAttributeNode",
             (void (LDOM_Element::*)( const LDOM_Attr & ) ) static_cast<void (LDOM_Element::*)( const LDOM_Attr & ) >(&LDOM_Element::setAttributeNode),
             R"#(None)#"  , py::arg("aNewAttr"))
        .def("removeAttribute",
             (void (LDOM_Element::*)( const LDOMString & ) ) static_cast<void (LDOM_Element::*)( const LDOMString & ) >(&LDOM_Element::removeAttribute),
             R"#(None)#"  , py::arg("aName"))
        .def("GetChildByTagName",
             (LDOM_Element (LDOM_Element::*)( const LDOMString & ) const) static_cast<LDOM_Element (LDOM_Element::*)( const LDOMString & ) const>(&LDOM_Element::GetChildByTagName),
             R"#(None)#"  , py::arg("aTagName"))
        .def("GetSiblingByTagName",
             (LDOM_Element (LDOM_Element::*)() const) static_cast<LDOM_Element (LDOM_Element::*)() const>(&LDOM_Element::GetSiblingByTagName),
             R"#(None)#" )
        .def("ReplaceElement",
             (void (LDOM_Element::*)( const LDOM_Element & ) ) static_cast<void (LDOM_Element::*)( const LDOM_Element & ) >(&LDOM_Element::ReplaceElement),
             R"#(None)#"  , py::arg("anOther"))
        .def("GetAttributesList",
             (LDOM_NodeList (LDOM_Element::*)() const) static_cast<LDOM_NodeList (LDOM_Element::*)() const>(&LDOM_Element::GetAttributesList),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_Comment , shared_ptr<LDOM_Comment> , LDOM_CharacterData>>(m.attr("LDOM_Comment"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_Comment & >()  , py::arg("theOther") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_Text , shared_ptr<LDOM_Text> , LDOM_CharacterData>>(m.attr("LDOM_Text"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_Text & >()  , py::arg("anOther") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_CDATASection , shared_ptr<LDOM_CDATASection> , LDOM_Text>>(m.attr("LDOM_CDATASection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const LDOM_CDATASection & >()  , py::arg("theOther") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\LDOM_CharacterData.hxx
// ./opencascade\LDOM_DeclareSequence.hxx
// ./opencascade\LDOM_XmlReader.hxx
// ./opencascade\LDOM_LDOMImplementation.hxx
// ./opencascade\LDOM_OSStream.hxx
// ./opencascade\LDOM_Node.hxx
// ./opencascade\LDOM_BasicElement.hxx
// ./opencascade\LDOM_Comment.hxx
// ./opencascade\LDOM_NodeList.hxx
// ./opencascade\LDOM_CDATASection.hxx
// ./opencascade\LDOM_DocumentType.hxx
// ./opencascade\LDOM_Document.hxx
// ./opencascade\LDOM_BasicAttribute.hxx
// ./opencascade\LDOM_BasicNode.hxx
// ./opencascade\LDOM_CharReference.hxx
// ./opencascade\LDOM_Text.hxx
// ./opencascade\LDOM_XmlWriter.hxx
// ./opencascade\LDOM_MemManager.hxx
// ./opencascade\LDOM_BasicText.hxx
// ./opencascade\LDOM_Attr.hxx
// ./opencascade\LDOM_Element.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
