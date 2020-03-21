
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <LDOM_BasicElement.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_NodeList.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_Node.hxx>
#include <LDOM_CharacterData.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_OSStream.hxx>
#include <LDOM_BasicAttribute.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_Attr.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_DocumentType.hxx>

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
void register_LDOM_enums(py::module &main_module) {


py::module m = main_module.def_submodule("LDOM", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<LDOM_BasicNode , shared_ptr<LDOM_BasicNode> >(m,"LDOM_BasicNode",R"#(None)#");
    py::class_<LDOM_CharReference , shared_ptr<LDOM_CharReference> >(m,"LDOM_CharReference",R"#(None)#");
    py::class_<LDOM_Document , shared_ptr<LDOM_Document> >(m,"LDOM_Document",R"#(None)#");
    py::class_<LDOM_DocumentType , shared_ptr<LDOM_DocumentType> >(m,"LDOM_DocumentType",R"#(None)#");
    py::class_<LDOM_LDOMImplementation , shared_ptr<LDOM_LDOMImplementation> >(m,"LDOM_LDOMImplementation",R"#(None)#");
    py::class_<LDOM_Node , shared_ptr<LDOM_Node> >(m,"LDOM_Node",R"#(None)#");
    py::class_<LDOM_NodeList , shared_ptr<LDOM_NodeList> >(m,"LDOM_NodeList",R"#(None)#");
    py::class_<LDOM_OSStream , shared_ptr<LDOM_OSStream> >(m,"LDOM_OSStream",R"#(Subclass if std::ostream allowing to increase performance of outputting data into a string avoiding reallocation of buffer. Class LDOM_OSStream implements output into a sequence of strings and getting the result as a string. It inherits Standard_OStream (std::ostream). Beside methods of std::ostream, it also has additional useful methods: str(), Length() and Clear().)#");
    py::class_<LDOM_SBuffer , shared_ptr<LDOM_SBuffer> >(m,"LDOM_SBuffer",R"#(Class LDOM_SBuffer inherits std::streambuf and redefines some virtual methods of it (overflow() and xsputn()). This class contains pointers on first and current element of sequence, also it has methods for the sequence management.)#");
    py::class_<LDOM_XmlReader , shared_ptr<LDOM_XmlReader> >(m,"LDOM_XmlReader",R"#(None)#");
    py::class_<LDOM_XmlWriter , shared_ptr<LDOM_XmlWriter> >(m,"LDOM_XmlWriter",R"#(None)#");
    py::class_<LDOM_Attr , shared_ptr<LDOM_Attr> , LDOM_Node>(m,"LDOM_Attr",R"#(None)#");
    py::class_<LDOM_BasicAttribute , shared_ptr<LDOM_BasicAttribute> , LDOM_BasicNode>(m,"LDOM_BasicAttribute",R"#(None)#");
    py::class_<LDOM_BasicElement , shared_ptr<LDOM_BasicElement> , LDOM_BasicNode>(m,"LDOM_BasicElement",R"#(None)#");
    py::class_<LDOM_CharacterData , shared_ptr<LDOM_CharacterData> , LDOM_Node>(m,"LDOM_CharacterData",R"#(None)#");
    py::class_<LDOM_Element , shared_ptr<LDOM_Element> , LDOM_Node>(m,"LDOM_Element",R"#(None)#");
    py::class_<LDOM_Comment , shared_ptr<LDOM_Comment> , LDOM_CharacterData>(m,"LDOM_Comment",R"#(None)#");
    py::class_<LDOM_Text , shared_ptr<LDOM_Text> , LDOM_CharacterData>(m,"LDOM_Text",R"#(None)#");
    py::class_<LDOM_CDATASection , shared_ptr<LDOM_CDATASection> , LDOM_Text>(m,"LDOM_CDATASection",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
