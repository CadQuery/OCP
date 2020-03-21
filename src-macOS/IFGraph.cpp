
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


    static_cast<py::class_<IFGraph_AllConnected , shared_ptr<IFGraph_AllConnected> , Interface_GraphContent>>(m.attr("IFGraph_AllConnected"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_AllConnected::*)() ) static_cast<void (IFGraph_AllConnected::*)() >(&IFGraph_AllConnected::Evaluate),
             R"#(does the specific evaluation (Connected entities atall levels))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_AllShared , shared_ptr<IFGraph_AllShared> , Interface_GraphContent>>(m.attr("IFGraph_AllShared"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_AllShared::*)() ) static_cast<void (IFGraph_AllShared::*)() >(&IFGraph_AllShared::Evaluate),
             R"#(does the specific evaluation (shared entities atall levels))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_Articulations , shared_ptr<IFGraph_Articulations> , Interface_GraphContent>>(m.attr("IFGraph_Articulations"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_Articulations::*)() ) static_cast<void (IFGraph_Articulations::*)() >(&IFGraph_Articulations::Evaluate),
             R"#(Evaluates the list of Articulation points)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_Compare , shared_ptr<IFGraph_Compare> , Interface_GraphContent>>(m.attr("IFGraph_Compare"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_Compare::*)() ) static_cast<void (IFGraph_Compare::*)() >(&IFGraph_Compare::Evaluate),
             R"#(Recomputes result of comparing to sub-parts)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_Cumulate , shared_ptr<IFGraph_Cumulate> , Interface_GraphContent>>(m.attr("IFGraph_Cumulate"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_Cumulate::*)() ) static_cast<void (IFGraph_Cumulate::*)() >(&IFGraph_Cumulate::Evaluate),
             R"#(Evaluates the result of cumulation)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_ExternalSources , shared_ptr<IFGraph_ExternalSources> , Interface_GraphContent>>(m.attr("IFGraph_ExternalSources"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_ExternalSources::*)() ) static_cast<void (IFGraph_ExternalSources::*)() >(&IFGraph_ExternalSources::Evaluate),
             R"#(Evaluates external sources of a set of entities)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_SubPartsIterator , shared_ptr<IFGraph_SubPartsIterator> >>(m.attr("IFGraph_SubPartsIterator"))
    // constructors
    // custom constructors
    // methods
        .def("Evaluate",
             (void (IFGraph_SubPartsIterator::*)() ) static_cast<void (IFGraph_SubPartsIterator::*)() >(&IFGraph_SubPartsIterator::Evaluate),
             R"#(Called by Clear, this method allows evaluation just before iteration; its default is doing nothing, it is designed to be redefined)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFGraph_ConnectedComponants , shared_ptr<IFGraph_ConnectedComponants> , IFGraph_SubPartsIterator>>(m.attr("IFGraph_ConnectedComponants"))
    // constructors
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


    static_cast<py::class_<IFGraph_Cycles , shared_ptr<IFGraph_Cycles> , IFGraph_SubPartsIterator>>(m.attr("IFGraph_Cycles"))
    // constructors
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


    static_cast<py::class_<IFGraph_StrongComponants , shared_ptr<IFGraph_StrongComponants> , IFGraph_SubPartsIterator>>(m.attr("IFGraph_StrongComponants"))
    // constructors
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


    static_cast<py::class_<IFGraph_SCRoots , shared_ptr<IFGraph_SCRoots> , IFGraph_StrongComponants>>(m.attr("IFGraph_SCRoots"))
    // constructors
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
// ./opencascade/IFGraph_Compare.hxx
// ./opencascade/IFGraph_Cycles.hxx
// ./opencascade/IFGraph_AllShared.hxx
// ./opencascade/IFGraph_StrongComponants.hxx
// ./opencascade/IFGraph_Articulations.hxx
// ./opencascade/IFGraph_SCRoots.hxx
// ./opencascade/IFGraph_ExternalSources.hxx
// ./opencascade/IFGraph_ConnectedComponants.hxx
// ./opencascade/IFGraph_Cumulate.hxx
// ./opencascade/IFGraph_SubPartsIterator.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
