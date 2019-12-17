
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_LDOM_enums(py::module &main_module) {


py::module m = main_module.def_submodule("LDOM", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<LDOM_BasicNode ,std::unique_ptr<LDOM_BasicNode>  >(m,"LDOM_BasicNode",R"#(None)#");
    py::class_<LDOM_Node ,std::unique_ptr<LDOM_Node>  >(m,"LDOM_Node",R"#(None)#");
    py::class_<LDOM_CharReference ,std::unique_ptr<LDOM_CharReference>  >(m,"LDOM_CharReference",R"#(None)#");
    py::class_<LDOM_BasicText ,std::unique_ptr<LDOM_BasicText>  , LDOM_BasicNode >(m,"LDOM_BasicText",R"#(None)#");
    py::class_<LDOM_MemManager ,opencascade::handle<LDOM_MemManager>  , Standard_Transient >(m,"LDOM_MemManager",R"#()#");
    py::class_<LDOM_LDOMImplementation ,std::unique_ptr<LDOM_LDOMImplementation>  >(m,"LDOM_LDOMImplementation",R"#(None)#");
    py::class_<LDOM_Attr ,std::unique_ptr<LDOM_Attr>  , LDOM_Node >(m,"LDOM_Attr",R"#(None)#");
    py::class_<LDOM_XmlReader ,std::unique_ptr<LDOM_XmlReader>  >(m,"LDOM_XmlReader",R"#(None)#");
    py::class_<LDOM_BasicAttribute ,std::unique_ptr<LDOM_BasicAttribute>  , LDOM_BasicNode >(m,"LDOM_BasicAttribute",R"#(None)#");
    py::class_<LDOM_Element ,std::unique_ptr<LDOM_Element>  , LDOM_Node >(m,"LDOM_Element",R"#(None)#");
    py::class_<LDOM_SBuffer ,std::unique_ptr<LDOM_SBuffer>  >(m,"LDOM_SBuffer",R"#(Class LDOM_SBuffer inherits streambuf and redefines some virtual methods of it (overflow() and xsputn()). This class contains pointers on first and current element of sequence, also it has methods for the sequence management.)#");
    py::class_<LDOM_DocumentType ,std::unique_ptr<LDOM_DocumentType>  >(m,"LDOM_DocumentType",R"#(None)#");
    py::class_<LDOM_NodeList ,std::unique_ptr<LDOM_NodeList>  >(m,"LDOM_NodeList",R"#(None)#");
    py::class_<LDOM_CharacterData ,std::unique_ptr<LDOM_CharacterData>  , LDOM_Node >(m,"LDOM_CharacterData",R"#(None)#");
    py::class_<LDOM_XmlWriter ,std::unique_ptr<LDOM_XmlWriter>  >(m,"LDOM_XmlWriter",R"#(None)#");
    py::class_<LDOM_OSStream ,std::unique_ptr<LDOM_OSStream>  >(m,"LDOM_OSStream",R"#(Subclass if std::ostream allowing to increase performance of outputting data into a string avoiding reallocation of buffer. Class LDOM_OSStream implements output into a sequence of strings and getting the result as a string. It inherits Standard_OStream (ostream). Beside methods of ostream, it also has additional useful methods: str(), Length() and Clear().)#");
    py::class_<LDOM_BasicElement ,std::unique_ptr<LDOM_BasicElement>  , LDOM_BasicNode >(m,"LDOM_BasicElement",R"#(None)#");
    py::class_<LDOM_Text ,std::unique_ptr<LDOM_Text>  , LDOM_CharacterData >(m,"LDOM_Text",R"#(None)#");
    py::class_<LDOM_Document ,std::unique_ptr<LDOM_Document>  >(m,"LDOM_Document",R"#(None)#");
    py::class_<LDOM_CDATASection ,std::unique_ptr<LDOM_CDATASection>  , LDOM_Text >(m,"LDOM_CDATASection",R"#(None)#");
    py::class_<LDOM_Comment ,std::unique_ptr<LDOM_Comment>  , LDOM_CharacterData >(m,"LDOM_Comment",R"#(None)#");

// pre-register typdefs
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

};

// user-defined post-inclusion per module

// user-defined post
