
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_GeometricItemSpecificUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_IdAttribute.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_DraughtingModelItemAssociation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_ItemIdentifiedRepresentationUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepAP242_RWDraughtingModelItemAssociation.hxx>
#include <RWStepAP242_RWGeometricItemSpecificUsage.hxx>
#include <RWStepAP242_RWIdAttribute.hxx>
#include <RWStepAP242_RWItemIdentifiedRepresentationUsage.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepAP242(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepAP242"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepAP242_RWDraughtingModelItemAssociation , shared_ptr<RWStepAP242_RWDraughtingModelItemAssociation> >>(m.attr("RWStepAP242_RWDraughtingModelItemAssociation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepAP242_RWDraughtingModelItemAssociation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_DraughtingModelItemAssociation> & ) const) static_cast<void (RWStepAP242_RWDraughtingModelItemAssociation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_DraughtingModelItemAssociation> & ) const>(&RWStepAP242_RWDraughtingModelItemAssociation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP242_RWDraughtingModelItemAssociation::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_DraughtingModelItemAssociation> & ) const) static_cast<void (RWStepAP242_RWDraughtingModelItemAssociation::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_DraughtingModelItemAssociation> & ) const>(&RWStepAP242_RWDraughtingModelItemAssociation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP242_RWDraughtingModelItemAssociation::*)( const opencascade::handle<StepAP242_DraughtingModelItemAssociation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepAP242_RWDraughtingModelItemAssociation::*)( const opencascade::handle<StepAP242_DraughtingModelItemAssociation> & , Interface_EntityIterator & ) const>(&RWStepAP242_RWDraughtingModelItemAssociation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP242_RWGeometricItemSpecificUsage , shared_ptr<RWStepAP242_RWGeometricItemSpecificUsage> >>(m.attr("RWStepAP242_RWGeometricItemSpecificUsage"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepAP242_RWGeometricItemSpecificUsage::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_GeometricItemSpecificUsage> & ) const) static_cast<void (RWStepAP242_RWGeometricItemSpecificUsage::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_GeometricItemSpecificUsage> & ) const>(&RWStepAP242_RWGeometricItemSpecificUsage::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP242_RWGeometricItemSpecificUsage::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_GeometricItemSpecificUsage> & ) const) static_cast<void (RWStepAP242_RWGeometricItemSpecificUsage::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_GeometricItemSpecificUsage> & ) const>(&RWStepAP242_RWGeometricItemSpecificUsage::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP242_RWGeometricItemSpecificUsage::*)( const opencascade::handle<StepAP242_GeometricItemSpecificUsage> & , Interface_EntityIterator & ) const) static_cast<void (RWStepAP242_RWGeometricItemSpecificUsage::*)( const opencascade::handle<StepAP242_GeometricItemSpecificUsage> & , Interface_EntityIterator & ) const>(&RWStepAP242_RWGeometricItemSpecificUsage::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP242_RWIdAttribute , shared_ptr<RWStepAP242_RWIdAttribute> >>(m.attr("RWStepAP242_RWIdAttribute"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepAP242_RWIdAttribute::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_IdAttribute> & ) const) static_cast<void (RWStepAP242_RWIdAttribute::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_IdAttribute> & ) const>(&RWStepAP242_RWIdAttribute::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP242_RWIdAttribute::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_IdAttribute> & ) const) static_cast<void (RWStepAP242_RWIdAttribute::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_IdAttribute> & ) const>(&RWStepAP242_RWIdAttribute::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP242_RWIdAttribute::*)( const opencascade::handle<StepAP242_IdAttribute> & , Interface_EntityIterator & ) const) static_cast<void (RWStepAP242_RWIdAttribute::*)( const opencascade::handle<StepAP242_IdAttribute> & , Interface_EntityIterator & ) const>(&RWStepAP242_RWIdAttribute::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP242_RWItemIdentifiedRepresentationUsage , shared_ptr<RWStepAP242_RWItemIdentifiedRepresentationUsage> >>(m.attr("RWStepAP242_RWItemIdentifiedRepresentationUsage"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepAP242_RWItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage> & ) const) static_cast<void (RWStepAP242_RWItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage> & ) const>(&RWStepAP242_RWItemIdentifiedRepresentationUsage::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP242_RWItemIdentifiedRepresentationUsage::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage> & ) const) static_cast<void (RWStepAP242_RWItemIdentifiedRepresentationUsage::*)( StepData_StepWriter & , const opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage> & ) const>(&RWStepAP242_RWItemIdentifiedRepresentationUsage::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP242_RWItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage> & , Interface_EntityIterator & ) const) static_cast<void (RWStepAP242_RWItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage> & , Interface_EntityIterator & ) const>(&RWStepAP242_RWItemIdentifiedRepresentationUsage::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepAP242_RWGeometricItemSpecificUsage.hxx
// ./opencascade/RWStepAP242_RWIdAttribute.hxx
// ./opencascade/RWStepAP242_RWDraughtingModelItemAssociation.hxx
// ./opencascade/RWStepAP242_RWItemIdentifiedRepresentationUsage.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
