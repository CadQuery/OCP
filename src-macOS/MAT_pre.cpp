
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <MAT_Edge.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_TListNodeOfListOfBisector.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Node.hxx>
#include <Standard_DomainError.hxx>
#include <MAT_TListNodeOfListOfEdge.hxx>
#include <MAT_Edge.hxx>
#include <MAT_Edge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_Arc.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Node.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_ListOfBisector.hxx>

// module includes
#include <MAT_Arc.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerBisector.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerNode.hxx>
#include <MAT_DataMapOfIntegerArc.hxx>
#include <MAT_DataMapOfIntegerBasicElt.hxx>
#include <MAT_DataMapOfIntegerBisector.hxx>
#include <MAT_DataMapOfIntegerNode.hxx>
#include <MAT_Edge.hxx>
#include <MAT_Graph.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_Node.hxx>
#include <MAT_SequenceOfArc.hxx>
#include <MAT_SequenceOfBasicElt.hxx>
#include <MAT_Side.hxx>
#include <MAT_TListNodeOfListOfBisector.hxx>
#include <MAT_TListNodeOfListOfEdge.hxx>
#include <MAT_Zone.hxx>

// template related includes
// ./opencascade/MAT_DataMapOfIntegerNode.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_SequenceOfBasicElt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_DataMapOfIntegerBisector.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_DataMapOfIntegerArc.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_DataMapOfIntegerBasicElt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_SequenceOfArc.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MAT_enums(py::module &main_module) {


py::module m = main_module.def_submodule("MAT", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<MAT_Side>(m, "MAT_Side",R"#(Definition on the Left and the Right on the Fig.)#")
        .value("MAT_Left",MAT_Side::MAT_Left)
        .value("MAT_Right",MAT_Side::MAT_Right).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<MAT_BasicElt> >(m,"MAT_SequenceOfBasicElt");
    preregister_template_NCollection_Sequence<opencascade::handle<MAT_Arc> >(m,"MAT_SequenceOfArc");

// classes forward declarations only
    py::class_<MAT_Arc ,opencascade::handle<MAT_Arc> , Standard_Transient>(m,"MAT_Arc",R"#(An Arc is associated to each Bisecting of the mat.An Arc is associated to each Bisecting of the mat.An Arc is associated to each Bisecting of the mat.)#");
    py::class_<MAT_BasicElt ,opencascade::handle<MAT_BasicElt> , Standard_Transient>(m,"MAT_BasicElt",R"#(A BasicELt is associated to each elemtary constituant of the figure.A BasicELt is associated to each elemtary constituant of the figure.A BasicELt is associated to each elemtary constituant of the figure.)#");
    py::class_<MAT_Bisector ,opencascade::handle<MAT_Bisector> , Standard_Transient>(m,"MAT_Bisector",R"#()#");
    py::class_<MAT_Edge ,opencascade::handle<MAT_Edge> , Standard_Transient>(m,"MAT_Edge",R"#()#");
    py::class_<MAT_Graph ,opencascade::handle<MAT_Graph> , Standard_Transient>(m,"MAT_Graph",R"#(The Class Graph permits the exploration of the Bisector Locus.The Class Graph permits the exploration of the Bisector Locus.The Class Graph permits the exploration of the Bisector Locus.)#");
    py::class_<MAT_ListOfBisector ,opencascade::handle<MAT_ListOfBisector> , Standard_Transient>(m,"MAT_ListOfBisector",R"#()#");
    py::class_<MAT_ListOfEdge ,opencascade::handle<MAT_ListOfEdge> , Standard_Transient>(m,"MAT_ListOfEdge",R"#()#");
    py::class_<MAT_Node ,opencascade::handle<MAT_Node> , Standard_Transient>(m,"MAT_Node",R"#(Node of Graph.Node of Graph.Node of Graph.)#");
    py::class_<MAT_TListNodeOfListOfBisector ,opencascade::handle<MAT_TListNodeOfListOfBisector> , Standard_Transient>(m,"MAT_TListNodeOfListOfBisector",R"#()#");
    py::class_<MAT_TListNodeOfListOfEdge ,opencascade::handle<MAT_TListNodeOfListOfEdge> , Standard_Transient>(m,"MAT_TListNodeOfListOfEdge",R"#()#");
    py::class_<MAT_Zone ,opencascade::handle<MAT_Zone> , Standard_Transient>(m,"MAT_Zone",R"#(Definition of Zone of Proximity of a BasicElt : ---------------------------------------------- A Zone of proximity is the set of the points which are more near from the BasicElt than any other.Definition of Zone of Proximity of a BasicElt : ---------------------------------------------- A Zone of proximity is the set of the points which are more near from the BasicElt than any other.Definition of Zone of Proximity of a BasicElt : ---------------------------------------------- A Zone of proximity is the set of the points which are more near from the BasicElt than any other.)#");

};

// user-defined post-inclusion per module

// user-defined post
