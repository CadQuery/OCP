
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <LDOM_BasicElement.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_Node.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_NodeList.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_Attr.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_OSStream.hxx>
#include <LDOM_DocumentType.hxx>
#include <LDOM_CharacterData.hxx>
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_NodeList , shared_ptr<LDOM_NodeList> >>(m.attr("LDOM_NodeList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LDOM_OSStream , shared_ptr<LDOM_OSStream> >>(m.attr("LDOM_OSStream"))
    // constructors
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
    // custom constructors
    // methods
        .def("Length",
             (Standard_Integer (LDOM_SBuffer::*)() const) static_cast<Standard_Integer (LDOM_SBuffer::*)() const>(&LDOM_SBuffer::Length),
             R"#(Returns full length of data contained)#" )
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
    // custom constructors
    // methods
        .def("SetIndentation",
             (void (LDOM_XmlWriter::*)( const Standard_Integer ) ) static_cast<void (LDOM_XmlWriter::*)( const Standard_Integer ) >(&LDOM_XmlWriter::SetIndentation),
             R"#(None)#"  , py::arg("theIndent"))
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
// ./opencascade/LDOM_BasicNode.hxx
// ./opencascade/LDOM_Comment.hxx
// ./opencascade/LDOM_Attr.hxx
// ./opencascade/LDOM_Node.hxx
// ./opencascade/LDOM_CharReference.hxx
// ./opencascade/LDOM_XmlWriter.hxx
// ./opencascade/LDOM_DocumentType.hxx
// ./opencascade/LDOM_Element.hxx
// ./opencascade/LDOM_BasicElement.hxx
// ./opencascade/LDOM_Document.hxx
// ./opencascade/LDOM_BasicAttribute.hxx
// ./opencascade/LDOM_MemManager.hxx
// ./opencascade/LDOM_CDATASection.hxx
// ./opencascade/LDOM_NodeList.hxx
// ./opencascade/LDOM_OSStream.hxx
// ./opencascade/LDOM_DeclareSequence.hxx
// ./opencascade/LDOM_XmlReader.hxx
// ./opencascade/LDOM_Text.hxx
// ./opencascade/LDOM_CharacterData.hxx
// ./opencascade/LDOM_LDOMImplementation.hxx
// ./opencascade/LDOM_BasicText.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
