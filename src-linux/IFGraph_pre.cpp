
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_GraphContent.hxx>
#include <IFGraph_StrongComponants.hxx>

// module includes
#include <IFGraph_AllConnected.hxx>
#include <IFGraph_AllShared.hxx>
#include <IFGraph_Articulations.hxx>
#include <IFGraph_Compare.hxx>
#include <IFGraph_ConnectedComponants.hxx>
#include <IFGraph_Cumulate.hxx>
#include <IFGraph_Cycles.hxx>
#include <IFGraph_ExternalSources.hxx>
#include <IFGraph_SCRoots.hxx>
#include <IFGraph_StrongComponants.hxx>
#include <IFGraph_SubPartsIterator.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IFGraph_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IFGraph", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<IFGraph_AllConnected , shared_ptr<IFGraph_AllConnected> , Interface_GraphContent>(m,"IFGraph_AllConnected",R"#(this class gives content of the CONNECTED COMPONANT(S) which include specific Entity(ies))#");
    py::class_<IFGraph_AllShared , shared_ptr<IFGraph_AllShared> , Interface_GraphContent>(m,"IFGraph_AllShared",R"#(this class determines all Entities shared by some specific ones, at any level (those which will be lead in a Transfer for instance))#");
    py::class_<IFGraph_Articulations , shared_ptr<IFGraph_Articulations> , Interface_GraphContent>(m,"IFGraph_Articulations",R"#(this class gives entities which are Articulation points in a whole Model or in a sub-part An Articulation Point divides the graph in two (or more) disconnected sub-graphs Identifying Articulation Points allows improving efficiency of spliting a set of Entities into sub-sets)#");
    py::class_<IFGraph_Compare , shared_ptr<IFGraph_Compare> , Interface_GraphContent>(m,"IFGraph_Compare",R"#(this class evaluates effect of two compared sub-parts : cumulation (union), common part (intersection-overlapping) part specific to first sub-part or to the second one Results are kept in a Graph, several question can be set Basic Iteration gives Cumulation (union))#");
    py::class_<IFGraph_Cumulate , shared_ptr<IFGraph_Cumulate> , Interface_GraphContent>(m,"IFGraph_Cumulate",R"#(this class evaluates effect of cumulated sub-parts : overlapping, forgotten entities Results are kept in a Graph, several question can be set Basic Iteration gives entities which are part of Cumulation)#");
    py::class_<IFGraph_ExternalSources , shared_ptr<IFGraph_ExternalSources> , Interface_GraphContent>(m,"IFGraph_ExternalSources",R"#(this class gives entities which are Source of entities of a sub-part, but are not contained by this sub-part)#");
    py::class_<IFGraph_SubPartsIterator , shared_ptr<IFGraph_SubPartsIterator> >(m,"IFGraph_SubPartsIterator",R"#(defines general form for graph classes of which result is not a single iteration on Entities, but a nested one : External iteration works on sub-parts, identified by each class (according to its algorithm) Internal Iteration concerns Entities of a sub-part Sub-Parts are assumed to be disjoined; if they are not, the first one has priority)#");
    py::class_<IFGraph_ConnectedComponants , shared_ptr<IFGraph_ConnectedComponants> , IFGraph_SubPartsIterator>(m,"IFGraph_ConnectedComponants",R"#(determines Connected Componants in a Graph. They define disjoined sets of Entities)#");
    py::class_<IFGraph_Cycles , shared_ptr<IFGraph_Cycles> , IFGraph_SubPartsIterator>(m,"IFGraph_Cycles",R"#(determines strong componants in a graph which are Cycles)#");
    py::class_<IFGraph_StrongComponants , shared_ptr<IFGraph_StrongComponants> , IFGraph_SubPartsIterator>(m,"IFGraph_StrongComponants",R"#(determines strong componants of a graph, that is isolated entities (single componants) or loops)#");
    py::class_<IFGraph_SCRoots , shared_ptr<IFGraph_SCRoots> , IFGraph_StrongComponants>(m,"IFGraph_SCRoots",R"#(determines strong componants in a graph which are Roots)#");

};

// user-defined post-inclusion per module

// user-defined post
