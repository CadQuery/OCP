
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IFGraph_StrongComponants.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_GraphContent.hxx>

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
void register_IFGraph(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IFGraph"));


//Python trampoline classes

// classes


    static_cast<py::class_<IFGraph_AllConnected , shared_ptr<IFGraph_AllConnected>  , Interface_GraphContent >>(m.attr("IFGraph_AllConnected"))
    // constructors
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
        .def(py::init< const Interface_Graph &,const opencascade::handle<Standard_Transient> & >()  , py::arg("agraph"),  py::arg("ent") )
    // custom constructors
    // methods
        .def("GetFromEntity",
             (void (IFGraph_AllConnected::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (IFGraph_AllConnected::*)( const opencascade::handle<Standard_Transient> &  ) >(&IFGraph_AllConnected::GetFromEntity),
             R"#(adds an entity and its Connected ones to the list (allows to cumulate all Entities Connected by some ones) Note that if "ent" is in the already computed list,, no entity will be added, but if "ent" is not already in the list, a new Connected Componant will be cumulated)#"  , py::arg("ent"))
        .def("ResetData",
             (void (IFGraph_AllConnected::*)() ) static_cast<void (IFGraph_AllConnected::*)() >(&IFGraph_AllConnected::ResetData),
             R"#(Allows to restart on a new data set)#" )
        .def("Evaluate",
             (void (IFGraph_AllConnected::*)() ) static_cast<void (IFGraph_AllConnected::*)() >(&IFGraph_AllConnected::Evaluate),
             R"#(does the specific evaluation (Connected entities atall levels))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_AllShared , shared_ptr<IFGraph_AllShared>  , Interface_GraphContent >>(m.attr("IFGraph_AllShared"))
    // constructors
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
        .def(py::init< const Interface_Graph &,const opencascade::handle<Standard_Transient> & >()  , py::arg("agraph"),  py::arg("ent") )
    // custom constructors
    // methods
        .def("GetFromEntity",
             (void (IFGraph_AllShared::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (IFGraph_AllShared::*)( const opencascade::handle<Standard_Transient> &  ) >(&IFGraph_AllShared::GetFromEntity),
             R"#(adds an entity and its shared ones to the list (allows to cumulate all Entities shared by some ones))#"  , py::arg("ent"))
        .def("GetFromIter",
             (void (IFGraph_AllShared::*)( const Interface_EntityIterator &  ) ) static_cast<void (IFGraph_AllShared::*)( const Interface_EntityIterator &  ) >(&IFGraph_AllShared::GetFromIter),
             R"#(Adds Entities from an EntityIterator and all their shared ones at any level)#"  , py::arg("iter"))
        .def("ResetData",
             (void (IFGraph_AllShared::*)() ) static_cast<void (IFGraph_AllShared::*)() >(&IFGraph_AllShared::ResetData),
             R"#(Allows to restart on a new data set)#" )
        .def("Evaluate",
             (void (IFGraph_AllShared::*)() ) static_cast<void (IFGraph_AllShared::*)() >(&IFGraph_AllShared::Evaluate),
             R"#(does the specific evaluation (shared entities atall levels))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_Articulations , shared_ptr<IFGraph_Articulations>  , Interface_GraphContent >>(m.attr("IFGraph_Articulations"))
    // constructors
        .def(py::init< const Interface_Graph &,const Standard_Boolean >()  , py::arg("agraph"),  py::arg("whole") )
    // custom constructors
    // methods
        .def("GetFromEntity",
             (void (IFGraph_Articulations::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (IFGraph_Articulations::*)( const opencascade::handle<Standard_Transient> &  ) >(&IFGraph_Articulations::GetFromEntity),
             R"#(adds an entity and its shared ones to the list)#"  , py::arg("ent"))
        .def("GetFromIter",
             (void (IFGraph_Articulations::*)( const Interface_EntityIterator &  ) ) static_cast<void (IFGraph_Articulations::*)( const Interface_EntityIterator &  ) >(&IFGraph_Articulations::GetFromIter),
             R"#(adds a list of entities (as an iterator))#"  , py::arg("iter"))
        .def("ResetData",
             (void (IFGraph_Articulations::*)() ) static_cast<void (IFGraph_Articulations::*)() >(&IFGraph_Articulations::ResetData),
             R"#(Allows to restart on a new data set)#" )
        .def("Evaluate",
             (void (IFGraph_Articulations::*)() ) static_cast<void (IFGraph_Articulations::*)() >(&IFGraph_Articulations::Evaluate),
             R"#(Evaluates the list of Articulation points)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_Compare , shared_ptr<IFGraph_Compare>  , Interface_GraphContent >>(m.attr("IFGraph_Compare"))
    // constructors
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
    // custom constructors
    // methods
        .def("GetFromEntity",
             (void (IFGraph_Compare::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) ) static_cast<void (IFGraph_Compare::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) >(&IFGraph_Compare::GetFromEntity),
             R"#(adds an entity and its shared ones to the list : first True means adds to the first sub-list, else to the 2nd)#"  , py::arg("ent"),  py::arg("first"))
        .def("GetFromIter",
             (void (IFGraph_Compare::*)( const Interface_EntityIterator & ,  const Standard_Boolean  ) ) static_cast<void (IFGraph_Compare::*)( const Interface_EntityIterator & ,  const Standard_Boolean  ) >(&IFGraph_Compare::GetFromIter),
             R"#(adds a list of entities (as an iterator) as such, that is, their shared entities are not considered (use AllShared to have them) first True means adds to the first sub-list, else to the 2nd)#"  , py::arg("iter"),  py::arg("first"))
        .def("Merge",
             (void (IFGraph_Compare::*)() ) static_cast<void (IFGraph_Compare::*)() >(&IFGraph_Compare::Merge),
             R"#(merges the second list into the first one, hence the second list is empty)#" )
        .def("RemoveSecond",
             (void (IFGraph_Compare::*)() ) static_cast<void (IFGraph_Compare::*)() >(&IFGraph_Compare::RemoveSecond),
             R"#(Removes the contents of second list)#" )
        .def("KeepCommon",
             (void (IFGraph_Compare::*)() ) static_cast<void (IFGraph_Compare::*)() >(&IFGraph_Compare::KeepCommon),
             R"#(Keeps only Common part, sets it as First list and clears second list)#" )
        .def("ResetData",
             (void (IFGraph_Compare::*)() ) static_cast<void (IFGraph_Compare::*)() >(&IFGraph_Compare::ResetData),
             R"#(Allows to restart on a new data set)#" )
        .def("Evaluate",
             (void (IFGraph_Compare::*)() ) static_cast<void (IFGraph_Compare::*)() >(&IFGraph_Compare::Evaluate),
             R"#(Recomputes result of comparing to sub-parts)#" )
        .def("Common",
             (Interface_EntityIterator (IFGraph_Compare::*)() const) static_cast<Interface_EntityIterator (IFGraph_Compare::*)() const>(&IFGraph_Compare::Common),
             R"#(returns entities common to the both parts)#" )
        .def("FirstOnly",
             (Interface_EntityIterator (IFGraph_Compare::*)() const) static_cast<Interface_EntityIterator (IFGraph_Compare::*)() const>(&IFGraph_Compare::FirstOnly),
             R"#(returns entities which are exclusively in the first list)#" )
        .def("SecondOnly",
             (Interface_EntityIterator (IFGraph_Compare::*)() const) static_cast<Interface_EntityIterator (IFGraph_Compare::*)() const>(&IFGraph_Compare::SecondOnly),
             R"#(returns entities which are exclusively in the second part)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_Cumulate , shared_ptr<IFGraph_Cumulate>  , Interface_GraphContent >>(m.attr("IFGraph_Cumulate"))
    // constructors
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
    // custom constructors
    // methods
        .def("GetFromEntity",
             (void (IFGraph_Cumulate::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (IFGraph_Cumulate::*)( const opencascade::handle<Standard_Transient> &  ) >(&IFGraph_Cumulate::GetFromEntity),
             R"#(adds an entity and its shared ones to the list)#"  , py::arg("ent"))
        .def("GetFromIter",
             (void (IFGraph_Cumulate::*)( const Interface_EntityIterator &  ) ) static_cast<void (IFGraph_Cumulate::*)( const Interface_EntityIterator &  ) >(&IFGraph_Cumulate::GetFromIter),
             R"#(adds a list of entities (as an iterator) as such, that is, without their shared entities (use AllShared to have them))#"  , py::arg("iter"))
        .def("ResetData",
             (void (IFGraph_Cumulate::*)() ) static_cast<void (IFGraph_Cumulate::*)() >(&IFGraph_Cumulate::ResetData),
             R"#(Allows to restart on a new data set)#" )
        .def("Evaluate",
             (void (IFGraph_Cumulate::*)() ) static_cast<void (IFGraph_Cumulate::*)() >(&IFGraph_Cumulate::Evaluate),
             R"#(Evaluates the result of cumulation)#" )
        .def("Overlapped",
             (Interface_EntityIterator (IFGraph_Cumulate::*)() const) static_cast<Interface_EntityIterator (IFGraph_Cumulate::*)() const>(&IFGraph_Cumulate::Overlapped),
             R"#(returns entities which are taken several times)#" )
        .def("Forgotten",
             (Interface_EntityIterator (IFGraph_Cumulate::*)() const) static_cast<Interface_EntityIterator (IFGraph_Cumulate::*)() const>(&IFGraph_Cumulate::Forgotten),
             R"#(returns entities which are not taken)#" )
        .def("PerCount",
             (Interface_EntityIterator (IFGraph_Cumulate::*)( const Standard_Integer  ) const) static_cast<Interface_EntityIterator (IFGraph_Cumulate::*)( const Standard_Integer  ) const>(&IFGraph_Cumulate::PerCount),
             R"#(Returns entities taken a given count of times (0 : same as Forgotten, 1 : same as no Overlap : default))#"  , py::arg("count")=static_cast<const Standard_Integer>(1))
        .def("NbTimes",
             (Standard_Integer (IFGraph_Cumulate::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (IFGraph_Cumulate::*)( const opencascade::handle<Standard_Transient> &  ) const>(&IFGraph_Cumulate::NbTimes),
             R"#(returns number of times an Entity has been counted (0 means forgotten, more than 1 means overlap, 1 is normal))#"  , py::arg("ent"))
        .def("HighestNbTimes",
             (Standard_Integer (IFGraph_Cumulate::*)() const) static_cast<Standard_Integer (IFGraph_Cumulate::*)() const>(&IFGraph_Cumulate::HighestNbTimes),
             R"#(Returns the highest number of times recorded for every Entity (0 means empty, 1 means no overlap))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_ExternalSources , shared_ptr<IFGraph_ExternalSources>  , Interface_GraphContent >>(m.attr("IFGraph_ExternalSources"))
    // constructors
        .def(py::init< const Interface_Graph & >()  , py::arg("agraph") )
    // custom constructors
    // methods
        .def("GetFromEntity",
             (void (IFGraph_ExternalSources::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (IFGraph_ExternalSources::*)( const opencascade::handle<Standard_Transient> &  ) >(&IFGraph_ExternalSources::GetFromEntity),
             R"#(adds an entity and its shared ones to the list)#"  , py::arg("ent"))
        .def("GetFromIter",
             (void (IFGraph_ExternalSources::*)( const Interface_EntityIterator &  ) ) static_cast<void (IFGraph_ExternalSources::*)( const Interface_EntityIterator &  ) >(&IFGraph_ExternalSources::GetFromIter),
             R"#(adds a list of entities (as an iterator) with shared ones)#"  , py::arg("iter"))
        .def("ResetData",
             (void (IFGraph_ExternalSources::*)() ) static_cast<void (IFGraph_ExternalSources::*)() >(&IFGraph_ExternalSources::ResetData),
             R"#(Allows to restart on a new data set)#" )
        .def("Evaluate",
             (void (IFGraph_ExternalSources::*)() ) static_cast<void (IFGraph_ExternalSources::*)() >(&IFGraph_ExternalSources::Evaluate),
             R"#(Evaluates external sources of a set of entities)#" )
        .def("IsEmpty",
             (Standard_Boolean (IFGraph_ExternalSources::*)() ) static_cast<Standard_Boolean (IFGraph_ExternalSources::*)() >(&IFGraph_ExternalSources::IsEmpty),
             R"#(Returns True if no External Source are found It means that we have a "root" set (performs an Evaluation as necessary))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_SubPartsIterator , shared_ptr<IFGraph_SubPartsIterator>  >>(m.attr("IFGraph_SubPartsIterator"))
    // constructors
        .def(py::init< const Interface_Graph &,const Standard_Boolean >()  , py::arg("agraph"),  py::arg("whole") )
        .def(py::init< IFGraph_SubPartsIterator & >()  , py::arg("other") )
    // custom constructors
    // methods
        .def("GetParts",
             (void (IFGraph_SubPartsIterator::*)( IFGraph_SubPartsIterator &  ) ) static_cast<void (IFGraph_SubPartsIterator::*)( IFGraph_SubPartsIterator &  ) >(&IFGraph_SubPartsIterator::GetParts),
             R"#(Gets Parts from another SubPartsIterator (in addition to the ones already recorded) Error if both SubPartsIterators are not based on the same Model)#"  , py::arg("other"))
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (IFGraph_SubPartsIterator::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::Model),
             R"#(Returns the Model with which this Iterator was created)#" )
        .def("AddPart",
             (void (IFGraph_SubPartsIterator::*)() ) static_cast<void (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::AddPart),
             R"#(Adds an empty part and sets it to receive entities)#" )
        .def("NbParts",
             (Standard_Integer (IFGraph_SubPartsIterator::*)() const) static_cast<Standard_Integer (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::NbParts),
             R"#(Returns count of registered parts)#" )
        .def("PartNum",
             (Standard_Integer (IFGraph_SubPartsIterator::*)() const) static_cast<Standard_Integer (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::PartNum),
             R"#(Returns numero of part which currently receives entities (0 at load time))#" )
        .def("SetLoad",
             (void (IFGraph_SubPartsIterator::*)() ) static_cast<void (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::SetLoad),
             R"#(Sets SubPartIterator to get Entities (by GetFromEntity & GetFromIter) into load status, to be analysed later)#" )
        .def("SetPartNum",
             (void (IFGraph_SubPartsIterator::*)( const Standard_Integer  ) ) static_cast<void (IFGraph_SubPartsIterator::*)( const Standard_Integer  ) >(&IFGraph_SubPartsIterator::SetPartNum),
             R"#(Sets numero of receiving part to a new value Error if not in range (1-NbParts))#"  , py::arg("num"))
        .def("GetFromEntity",
             (void (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) ) static_cast<void (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Boolean  ) >(&IFGraph_SubPartsIterator::GetFromEntity),
             R"#(Adds an Entity : into load status if in Load mode, to the current part if there is one. If shared is True, adds also its shared ones (shared at all levels))#"  , py::arg("ent"),  py::arg("shared"))
        .def("GetFromIter",
             (void (IFGraph_SubPartsIterator::*)( const Interface_EntityIterator &  ) ) static_cast<void (IFGraph_SubPartsIterator::*)( const Interface_EntityIterator &  ) >(&IFGraph_SubPartsIterator::GetFromIter),
             R"#(Adds a list of Entities (into Load mode or to a Part), given as an Iterator)#"  , py::arg("iter"))
        .def("Reset",
             (void (IFGraph_SubPartsIterator::*)() ) static_cast<void (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::Reset),
             R"#(Erases data (parts, entities) : "me" becomes empty and in load status)#" )
        .def("Evaluate",
             (void (IFGraph_SubPartsIterator::*)() ) static_cast<void (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::Evaluate),
             R"#(Called by Clear, this method allows evaluation just before iteration; its default is doing nothing, it is designed to be redefined)#" )
        .def("Loaded",
             (Interface_GraphContent (IFGraph_SubPartsIterator::*)() const) static_cast<Interface_GraphContent (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::Loaded),
             R"#(Returns entities which where loaded (not set into a sub-part))#" )
        .def("LoadedGraph",
             (Interface_Graph (IFGraph_SubPartsIterator::*)() const) static_cast<Interface_Graph (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::LoadedGraph),
             R"#(Same as above, but under the form of a Graph)#" )
        .def("IsLoaded",
             (Standard_Boolean (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> &  ) const>(&IFGraph_SubPartsIterator::IsLoaded),
             R"#(Returns True if an Entity is loaded (either set into a sub-part or not))#"  , py::arg("ent"))
        .def("IsInPart",
             (Standard_Boolean (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> &  ) const>(&IFGraph_SubPartsIterator::IsInPart),
             R"#(Returns True if an Entity is Present in a sub-part)#"  , py::arg("ent"))
        .def("EntityPartNum",
             (Standard_Integer (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (IFGraph_SubPartsIterator::*)( const opencascade::handle<Standard_Transient> &  ) const>(&IFGraph_SubPartsIterator::EntityPartNum),
             R"#(Returns number of the sub-part in which an Entity has been set if it is not in a sub-part (or not loaded at all), Returns 0)#"  , py::arg("ent"))
        .def("Start",
             (void (IFGraph_SubPartsIterator::*)() ) static_cast<void (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::Start),
             R"#(Sets iteration to its beginning; calls Evaluate)#" )
        .def("More",
             (Standard_Boolean (IFGraph_SubPartsIterator::*)() ) static_cast<Standard_Boolean (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::More),
             R"#(Returns True if there are more sub-parts to iterate on Note : an empty sub-part is not taken in account by Iteration)#" )
        .def("Next",
             (void (IFGraph_SubPartsIterator::*)() ) static_cast<void (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::Next),
             R"#(Sets iteration to the next sub-part if there is not, IsSingle-Entities will raises an exception)#" )
        .def("IsSingle",
             (Standard_Boolean (IFGraph_SubPartsIterator::*)() const) static_cast<Standard_Boolean (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::IsSingle),
             R"#(Returns True if current sub-part is single (has only one Entity) Error if there is no sub-part to iterate now)#" )
        .def("FirstEntity",
             (opencascade::handle<Standard_Transient> (IFGraph_SubPartsIterator::*)() const) static_cast<opencascade::handle<Standard_Transient> (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::FirstEntity),
             R"#(Returns the first entity of current sub-part, that is for a Single one, the only one it contains Error : same as above (end of iteration))#" )
        .def("Entities",
             (Interface_EntityIterator (IFGraph_SubPartsIterator::*)() const) static_cast<Interface_EntityIterator (IFGraph_SubPartsIterator::*)() const>(&IFGraph_SubPartsIterator::Entities),
             R"#(Returns current sub-part, not as a "Value", but as an Iterator on Entities it contains Error : same as above (end of iteration))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_ConnectedComponants , shared_ptr<IFGraph_ConnectedComponants>  , IFGraph_SubPartsIterator >>(m.attr("IFGraph_ConnectedComponants"))
    // constructors
        .def(py::init< const Interface_Graph &,const Standard_Boolean >()  , py::arg("agraph"),  py::arg("whole") )
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_ConnectedComponants::*)() ) static_cast<void (IFGraph_ConnectedComponants::*)() >(&IFGraph_ConnectedComponants::Evaluate),
             R"#(does the computation)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_Cycles , shared_ptr<IFGraph_Cycles>  , IFGraph_SubPartsIterator >>(m.attr("IFGraph_Cycles"))
    // constructors
        .def(py::init< const Interface_Graph &,const Standard_Boolean >()  , py::arg("agraph"),  py::arg("whole") )
        .def(py::init< IFGraph_StrongComponants & >()  , py::arg("subparts") )
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_Cycles::*)() ) static_cast<void (IFGraph_Cycles::*)() >(&IFGraph_Cycles::Evaluate),
             R"#(does the computation. Cycles are StrongComponants which are not Single)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_StrongComponants , shared_ptr<IFGraph_StrongComponants>  , IFGraph_SubPartsIterator >>(m.attr("IFGraph_StrongComponants"))
    // constructors
        .def(py::init< const Interface_Graph &,const Standard_Boolean >()  , py::arg("agraph"),  py::arg("whole") )
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_StrongComponants::*)() ) static_cast<void (IFGraph_StrongComponants::*)() >(&IFGraph_StrongComponants::Evaluate),
             R"#(does the computation)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_SCRoots , shared_ptr<IFGraph_SCRoots>  , IFGraph_StrongComponants >>(m.attr("IFGraph_SCRoots"))
    // constructors
        .def(py::init< const Interface_Graph &,const Standard_Boolean >()  , py::arg("agraph"),  py::arg("whole") )
        .def(py::init< IFGraph_StrongComponants & >()  , py::arg("subparts") )
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_SCRoots::*)() ) static_cast<void (IFGraph_SCRoots::*)() >(&IFGraph_SCRoots::Evaluate),
             R"#(does the computation)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IFGraph_AllConnected.hxx
// ./opencascade/IFGraph_Articulations.hxx
// ./opencascade/IFGraph_SCRoots.hxx
// ./opencascade/IFGraph_ConnectedComponants.hxx
// ./opencascade/IFGraph_Cycles.hxx
// ./opencascade/IFGraph_AllShared.hxx
// ./opencascade/IFGraph_Cumulate.hxx
// ./opencascade/IFGraph_Compare.hxx
// ./opencascade/IFGraph_ExternalSources.hxx
// ./opencascade/IFGraph_SubPartsIterator.hxx
// ./opencascade/IFGraph_StrongComponants.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
