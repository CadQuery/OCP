
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <STEPSelections_AssemblyComponent.hxx>
#include <XSControl_TransferReader.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>

// module includes
#include <STEPSelections_AssemblyComponent.hxx>
#include <STEPSelections_AssemblyExplorer.hxx>
#include <STEPSelections_AssemblyLink.hxx>
#include <STEPSelections_Counter.hxx>
#include <STEPSelections_HSequenceOfAssemblyLink.hxx>
#include <STEPSelections_SelectAssembly.hxx>
#include <STEPSelections_SelectDerived.hxx>
#include <STEPSelections_SelectFaces.hxx>
#include <STEPSelections_SelectForTransfer.hxx>
#include <STEPSelections_SelectGSCurves.hxx>
#include <STEPSelections_SelectInstances.hxx>
#include <STEPSelections_SequenceOfAssemblyComponent.hxx>
#include <STEPSelections_SequenceOfAssemblyLink.hxx>

// template related includes
// ./opencascade/STEPSelections_SequenceOfAssemblyComponent.hxx
#include "NCollection.hxx"
// ./opencascade/STEPSelections_SequenceOfAssemblyLink.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_STEPSelections(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("STEPSelections"));


//Python trampoline classes

// classes


    static_cast<py::class_<STEPSelections_AssemblyComponent ,opencascade::handle<STEPSelections_AssemblyComponent>  , Standard_Transient >>(m.attr("STEPSelections_AssemblyComponent"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_ShapeDefinitionRepresentation> &,const opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> & >()  , py::arg("sdr"),  py::arg("list") )
    // methods
        .def("GetSDR",
             (opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPSelections_AssemblyComponent::*)() const) static_cast<opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPSelections_AssemblyComponent::*)() const>(&STEPSelections_AssemblyComponent::GetSDR),
             R"#(None)#" )
        .def("GetList",
             (opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> (STEPSelections_AssemblyComponent::*)() const) static_cast<opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> (STEPSelections_AssemblyComponent::*)() const>(&STEPSelections_AssemblyComponent::GetList),
             R"#(None)#" )
        .def("SetSDR",
             (void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> &  ) ) static_cast<void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> &  ) >(&STEPSelections_AssemblyComponent::SetSDR),
             R"#(None)#"  , py::arg("sdr"))
        .def("SetList",
             (void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> &  ) ) static_cast<void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> &  ) >(&STEPSelections_AssemblyComponent::SetList),
             R"#(None)#"  , py::arg("list"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_AssemblyComponent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_AssemblyComponent::*)() const>(&STEPSelections_AssemblyComponent::DynamicType),
             R"#(None)#" )
        .def("GetSDR",
             (opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPSelections_AssemblyComponent::*)() const) static_cast<opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPSelections_AssemblyComponent::*)() const>(&STEPSelections_AssemblyComponent::GetSDR),
             R"#(None)#" )
        .def("GetList",
             (opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> (STEPSelections_AssemblyComponent::*)() const) static_cast<opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> (STEPSelections_AssemblyComponent::*)() const>(&STEPSelections_AssemblyComponent::GetList),
             R"#(None)#" )
        .def("SetSDR",
             (void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> &  ) ) static_cast<void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> &  ) >(&STEPSelections_AssemblyComponent::SetSDR),
             R"#(None)#"  , py::arg("sdr"))
        .def("SetList",
             (void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> &  ) ) static_cast<void (STEPSelections_AssemblyComponent::*)( const opencascade::handle<STEPSelections_HSequenceOfAssemblyLink> &  ) >(&STEPSelections_AssemblyComponent::SetList),
             R"#(None)#"  , py::arg("list"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_AssemblyComponent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_AssemblyComponent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_AssemblyExplorer , shared_ptr<STEPSelections_AssemblyExplorer>  >>(m.attr("STEPSelections_AssemblyExplorer"))
        .def(py::init< const Interface_Graph & >()  , py::arg("G") )
    // methods
        .def("Init",
             (void (STEPSelections_AssemblyExplorer::*)( const Interface_Graph &  ) ) static_cast<void (STEPSelections_AssemblyExplorer::*)( const Interface_Graph &  ) >(&STEPSelections_AssemblyExplorer::Init),
             R"#(None)#"  , py::arg("G"))
        .def("Dump",
             (void (STEPSelections_AssemblyExplorer::*)( std::ostream &  ) const) static_cast<void (STEPSelections_AssemblyExplorer::*)( std::ostream &  ) const>(&STEPSelections_AssemblyExplorer::Dump),
             R"#(None)#"  , py::arg("os"))
        .def("FindSDRWithProduct",
             (opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPSelections_AssemblyExplorer::*)( const opencascade::handle<StepBasic_ProductDefinition> &  ) const) static_cast<opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPSelections_AssemblyExplorer::*)( const opencascade::handle<StepBasic_ProductDefinition> &  ) const>(&STEPSelections_AssemblyExplorer::FindSDRWithProduct),
             R"#(None)#"  , py::arg("product"))
        .def("FillListWithGraph",
             (void (STEPSelections_AssemblyExplorer::*)( const opencascade::handle<STEPSelections_AssemblyComponent> &  ) ) static_cast<void (STEPSelections_AssemblyExplorer::*)( const opencascade::handle<STEPSelections_AssemblyComponent> &  ) >(&STEPSelections_AssemblyExplorer::FillListWithGraph),
             R"#(None)#"  , py::arg("cmp"))
        .def("FindItemWithNAUO",
             (opencascade::handle<Standard_Transient> (STEPSelections_AssemblyExplorer::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> &  ) const) static_cast<opencascade::handle<Standard_Transient> (STEPSelections_AssemblyExplorer::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> &  ) const>(&STEPSelections_AssemblyExplorer::FindItemWithNAUO),
             R"#(None)#"  , py::arg("nauo"))
        .def("NbAssemblies",
             (Standard_Integer (STEPSelections_AssemblyExplorer::*)() const) static_cast<Standard_Integer (STEPSelections_AssemblyExplorer::*)() const>(&STEPSelections_AssemblyExplorer::NbAssemblies),
             R"#(Returns the number of root assemblies;)#" )
        .def("Root",
             (opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyExplorer::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyExplorer::*)( const Standard_Integer  ) const>(&STEPSelections_AssemblyExplorer::Root),
             R"#(Returns root of assenbly by its rank;)#"  , py::arg("rank")=static_cast<const Standard_Integer>(1))
        .def("NbAssemblies",
             (Standard_Integer (STEPSelections_AssemblyExplorer::*)() const) static_cast<Standard_Integer (STEPSelections_AssemblyExplorer::*)() const>(&STEPSelections_AssemblyExplorer::NbAssemblies),
             R"#(Returns the number of root assemblies;)#" )
        .def("Root",
             (opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyExplorer::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyExplorer::*)( const Standard_Integer  ) const>(&STEPSelections_AssemblyExplorer::Root),
             R"#(Returns root of assenbly by its rank;)#"  , py::arg("rank"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_AssemblyLink ,opencascade::handle<STEPSelections_AssemblyLink>  , Standard_Transient >>(m.attr("STEPSelections_AssemblyLink"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> &,const opencascade::handle<Standard_Transient> &,const opencascade::handle<STEPSelections_AssemblyComponent> & >()  , py::arg("nauo"),  py::arg("item"),  py::arg("part") )
    // methods
        .def("GetNAUO",
             (opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPSelections_AssemblyLink::*)() const) static_cast<opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPSelections_AssemblyLink::*)() const>(&STEPSelections_AssemblyLink::GetNAUO),
             R"#(None)#" )
        .def("GetItem",
             (opencascade::handle<Standard_Transient> (STEPSelections_AssemblyLink::*)() const) static_cast<opencascade::handle<Standard_Transient> (STEPSelections_AssemblyLink::*)() const>(&STEPSelections_AssemblyLink::GetItem),
             R"#(None)#" )
        .def("GetComponent",
             (opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyLink::*)() const) static_cast<opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyLink::*)() const>(&STEPSelections_AssemblyLink::GetComponent),
             R"#(None)#" )
        .def("SetNAUO",
             (void (STEPSelections_AssemblyLink::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> &  ) ) static_cast<void (STEPSelections_AssemblyLink::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> &  ) >(&STEPSelections_AssemblyLink::SetNAUO),
             R"#(None)#"  , py::arg("nauo"))
        .def("SetItem",
             (void (STEPSelections_AssemblyLink::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (STEPSelections_AssemblyLink::*)( const opencascade::handle<Standard_Transient> &  ) >(&STEPSelections_AssemblyLink::SetItem),
             R"#(None)#"  , py::arg("item"))
        .def("SetComponent",
             (void (STEPSelections_AssemblyLink::*)( const opencascade::handle<STEPSelections_AssemblyComponent> &  ) ) static_cast<void (STEPSelections_AssemblyLink::*)( const opencascade::handle<STEPSelections_AssemblyComponent> &  ) >(&STEPSelections_AssemblyLink::SetComponent),
             R"#(None)#"  , py::arg("part"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_AssemblyLink::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_AssemblyLink::*)() const>(&STEPSelections_AssemblyLink::DynamicType),
             R"#(None)#" )
        .def("GetNAUO",
             (opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPSelections_AssemblyLink::*)() const) static_cast<opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPSelections_AssemblyLink::*)() const>(&STEPSelections_AssemblyLink::GetNAUO),
             R"#(None)#" )
        .def("GetItem",
             (opencascade::handle<Standard_Transient> (STEPSelections_AssemblyLink::*)() const) static_cast<opencascade::handle<Standard_Transient> (STEPSelections_AssemblyLink::*)() const>(&STEPSelections_AssemblyLink::GetItem),
             R"#(None)#" )
        .def("GetComponent",
             (opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyLink::*)() const) static_cast<opencascade::handle<STEPSelections_AssemblyComponent> (STEPSelections_AssemblyLink::*)() const>(&STEPSelections_AssemblyLink::GetComponent),
             R"#(None)#" )
        .def("SetNAUO",
             (void (STEPSelections_AssemblyLink::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> &  ) ) static_cast<void (STEPSelections_AssemblyLink::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> &  ) >(&STEPSelections_AssemblyLink::SetNAUO),
             R"#(None)#"  , py::arg("nauo"))
        .def("SetItem",
             (void (STEPSelections_AssemblyLink::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (STEPSelections_AssemblyLink::*)( const opencascade::handle<Standard_Transient> &  ) >(&STEPSelections_AssemblyLink::SetItem),
             R"#(None)#"  , py::arg("item"))
        .def("SetComponent",
             (void (STEPSelections_AssemblyLink::*)( const opencascade::handle<STEPSelections_AssemblyComponent> &  ) ) static_cast<void (STEPSelections_AssemblyLink::*)( const opencascade::handle<STEPSelections_AssemblyComponent> &  ) >(&STEPSelections_AssemblyLink::SetComponent),
             R"#(None)#"  , py::arg("part"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_AssemblyLink::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_AssemblyLink::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_Counter , shared_ptr<STEPSelections_Counter>  >>(m.attr("STEPSelections_Counter"))
        .def(py::init<  >()  )
    // methods
        .def("Count",
             (void (STEPSelections_Counter::*)( const Interface_Graph & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (STEPSelections_Counter::*)( const Interface_Graph & ,  const opencascade::handle<Standard_Transient> &  ) >(&STEPSelections_Counter::Count),
             R"#(None)#"  , py::arg("graph"),  py::arg("start"))
        .def("Clear",
             (void (STEPSelections_Counter::*)() ) static_cast<void (STEPSelections_Counter::*)() >(&STEPSelections_Counter::Clear),
             R"#(None)#" )
        .def("NbInstancesOfFaces",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfFaces),
             R"#(None)#" )
        .def("NbInstancesOfShells",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfShells),
             R"#(None)#" )
        .def("NbInstancesOfSolids",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfSolids),
             R"#(None)#" )
        .def("NbInstancesOfEdges",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfEdges),
             R"#(None)#" )
        .def("NbInstancesOfWires",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfWires),
             R"#(None)#" )
        .def("NbSourceFaces",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceFaces),
             R"#(None)#" )
        .def("NbSourceShells",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceShells),
             R"#(None)#" )
        .def("NbSourceSolids",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceSolids),
             R"#(None)#" )
        .def("NbSourceEdges",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceEdges),
             R"#(None)#" )
        .def("NbSourceWires",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceWires),
             R"#(None)#" )
        .def("NbInstancesOfFaces",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfFaces),
             R"#(None)#" )
        .def("NbInstancesOfShells",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfShells),
             R"#(None)#" )
        .def("NbInstancesOfSolids",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfSolids),
             R"#(None)#" )
        .def("NbInstancesOfEdges",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfEdges),
             R"#(None)#" )
        .def("NbInstancesOfWires",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbInstancesOfWires),
             R"#(None)#" )
        .def("NbSourceFaces",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceFaces),
             R"#(None)#" )
        .def("NbSourceShells",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceShells),
             R"#(None)#" )
        .def("NbSourceSolids",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceSolids),
             R"#(None)#" )
        .def("NbSourceEdges",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceEdges),
             R"#(None)#" )
        .def("NbSourceWires",
             (Standard_Integer (STEPSelections_Counter::*)() const) static_cast<Standard_Integer (STEPSelections_Counter::*)() const>(&STEPSelections_Counter::NbSourceWires),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_HSequenceOfAssemblyLink ,opencascade::handle<STEPSelections_HSequenceOfAssemblyLink>  , STEPSelections_SequenceOfAssemblyLink , Standard_Transient >>(m.attr("STEPSelections_HSequenceOfAssemblyLink"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<STEPSelections_AssemblyLink> > & >()  , py::arg("theOther") )
    // methods
        .def("Sequence",
             (const STEPSelections_SequenceOfAssemblyLink & (STEPSelections_HSequenceOfAssemblyLink::*)() const) static_cast<const STEPSelections_SequenceOfAssemblyLink & (STEPSelections_HSequenceOfAssemblyLink::*)() const>(&STEPSelections_HSequenceOfAssemblyLink::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (STEPSelections_HSequenceOfAssemblyLink::*)(  const opencascade::handle<STEPSelections_AssemblyLink> &  ) ) static_cast<void (STEPSelections_HSequenceOfAssemblyLink::*)(  const opencascade::handle<STEPSelections_AssemblyLink> &  ) >(&STEPSelections_HSequenceOfAssemblyLink::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (STEPSelections_HSequenceOfAssemblyLink::*)( NCollection_Sequence<opencascade::handle<STEPSelections_AssemblyLink> > &  ) ) static_cast<void (STEPSelections_HSequenceOfAssemblyLink::*)( NCollection_Sequence<opencascade::handle<STEPSelections_AssemblyLink> > &  ) >(&STEPSelections_HSequenceOfAssemblyLink::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (STEPSelections_SequenceOfAssemblyLink & (STEPSelections_HSequenceOfAssemblyLink::*)() ) static_cast<STEPSelections_SequenceOfAssemblyLink & (STEPSelections_HSequenceOfAssemblyLink::*)() >(&STEPSelections_HSequenceOfAssemblyLink::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_HSequenceOfAssemblyLink::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_HSequenceOfAssemblyLink::*)() const>(&STEPSelections_HSequenceOfAssemblyLink::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_HSequenceOfAssemblyLink::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_HSequenceOfAssemblyLink::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_SelectAssembly ,opencascade::handle<STEPSelections_SelectAssembly>  , IFSelect_SelectExplore >>(m.attr("STEPSelections_SelectAssembly"))
        .def(py::init<  >()  )
    // methods
        .def("Explore",
             (Standard_Boolean (STEPSelections_SelectAssembly::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (STEPSelections_SelectAssembly::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&STEPSelections_SelectAssembly::Explore),
             R"#(Explores an entity, to take its faces Works recursively)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (STEPSelections_SelectAssembly::*)() const) static_cast<TCollection_AsciiString (STEPSelections_SelectAssembly::*)() const>(&STEPSelections_SelectAssembly::ExploreLabel),
             R"#(Returns a text defining the criterium : "Assembly structures")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_SelectAssembly::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_SelectAssembly::*)() const>(&STEPSelections_SelectAssembly::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_SelectAssembly::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_SelectAssembly::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_SelectDerived ,opencascade::handle<STEPSelections_SelectDerived>  >>(m.attr("STEPSelections_SelectDerived"))
        .def(py::init<  >()  )
    // methods
        .def("Matches",
             (Standard_Boolean (STEPSelections_SelectDerived::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (STEPSelections_SelectDerived::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) const>(&STEPSelections_SelectDerived::Matches),
             R"#(None)#"  , py::arg("ent"),  py::arg("model"),  py::arg("text"),  py::arg("exact"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_SelectDerived::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_SelectDerived::*)() const>(&STEPSelections_SelectDerived::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_SelectDerived::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_SelectDerived::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_SelectFaces ,opencascade::handle<STEPSelections_SelectFaces>  , IFSelect_SelectExplore >>(m.attr("STEPSelections_SelectFaces"))
        .def(py::init<  >()  )
    // methods
        .def("Explore",
             (Standard_Boolean (STEPSelections_SelectFaces::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (STEPSelections_SelectFaces::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&STEPSelections_SelectFaces::Explore),
             R"#(Explores an entity, to take its faces Works recursively)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (STEPSelections_SelectFaces::*)() const) static_cast<TCollection_AsciiString (STEPSelections_SelectFaces::*)() const>(&STEPSelections_SelectFaces::ExploreLabel),
             R"#(Returns a text defining the criterium : "Faces")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_SelectFaces::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_SelectFaces::*)() const>(&STEPSelections_SelectFaces::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_SelectFaces::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_SelectFaces::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_SelectForTransfer ,opencascade::handle<STEPSelections_SelectForTransfer>  , XSControl_SelectForTransfer >>(m.attr("STEPSelections_SelectForTransfer"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_TransferReader> & >()  , py::arg("TR") )
    // methods
        .def("RootResult",
             (Interface_EntityIterator (STEPSelections_SelectForTransfer::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (STEPSelections_SelectForTransfer::*)( const Interface_Graph &  ) const>(&STEPSelections_SelectForTransfer::RootResult),
             R"#(None)#"  , py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_SelectForTransfer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_SelectForTransfer::*)() const>(&STEPSelections_SelectForTransfer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_SelectForTransfer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_SelectForTransfer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_SelectGSCurves ,opencascade::handle<STEPSelections_SelectGSCurves>  , IFSelect_SelectExplore >>(m.attr("STEPSelections_SelectGSCurves"))
        .def(py::init<  >()  )
    // methods
        .def("Explore",
             (Standard_Boolean (STEPSelections_SelectGSCurves::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (STEPSelections_SelectGSCurves::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&STEPSelections_SelectGSCurves::Explore),
             R"#(None)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (STEPSelections_SelectGSCurves::*)() const) static_cast<TCollection_AsciiString (STEPSelections_SelectGSCurves::*)() const>(&STEPSelections_SelectGSCurves::ExploreLabel),
             R"#(Returns a text defining the criterium : "Curves")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_SelectGSCurves::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_SelectGSCurves::*)() const>(&STEPSelections_SelectGSCurves::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_SelectGSCurves::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_SelectGSCurves::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<STEPSelections_SelectInstances ,opencascade::handle<STEPSelections_SelectInstances>  , IFSelect_SelectExplore >>(m.attr("STEPSelections_SelectInstances"))
        .def(py::init<  >()  )
    // methods
        .def("RootResult",
             (Interface_EntityIterator (STEPSelections_SelectInstances::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (STEPSelections_SelectInstances::*)( const Interface_Graph &  ) const>(&STEPSelections_SelectInstances::RootResult),
             R"#(None)#"  , py::arg("G"))
        .def("Explore",
             (Standard_Boolean (STEPSelections_SelectInstances::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (STEPSelections_SelectInstances::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&STEPSelections_SelectInstances::Explore),
             R"#(None)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (STEPSelections_SelectInstances::*)() const) static_cast<TCollection_AsciiString (STEPSelections_SelectInstances::*)() const>(&STEPSelections_SelectInstances::ExploreLabel),
             R"#(Returns a text defining the criterium : "Instances")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (STEPSelections_SelectInstances::*)() const) static_cast<const opencascade::handle<Standard_Type> & (STEPSelections_SelectInstances::*)() const>(&STEPSelections_SelectInstances::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&STEPSelections_SelectInstances::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&STEPSelections_SelectInstances::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/STEPSelections_AssemblyComponent.hxx
// ./opencascade/STEPSelections_SequenceOfAssemblyComponent.hxx
// ./opencascade/STEPSelections_AssemblyLink.hxx
// ./opencascade/STEPSelections_SequenceOfAssemblyLink.hxx
// ./opencascade/STEPSelections_SelectForTransfer.hxx
// ./opencascade/STEPSelections_SelectDerived.hxx
// ./opencascade/STEPSelections_SelectGSCurves.hxx
// ./opencascade/STEPSelections_HSequenceOfAssemblyLink.hxx
// ./opencascade/STEPSelections_SelectInstances.hxx
// ./opencascade/STEPSelections_Counter.hxx
// ./opencascade/STEPSelections_AssemblyExplorer.hxx
// ./opencascade/STEPSelections_SelectAssembly.hxx
// ./opencascade/STEPSelections_SelectFaces.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<STEPSelections_AssemblyComponent> >(m,"STEPSelections_SequenceOfAssemblyComponent");  
    register_template_NCollection_Sequence<opencascade::handle<STEPSelections_AssemblyLink> >(m,"STEPSelections_SequenceOfAssemblyLink");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
