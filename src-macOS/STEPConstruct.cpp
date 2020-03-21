
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepBasic_SiUnit.hxx>
#include <gp_Pnt.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <TopLoc_Location.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_Binder.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <STEPConstruct_Tool.hxx>
#include <STEPConstruct_UnitContext.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <STEPConstruct_Styles.hxx>
#include <STEPConstruct_ValidationProps.hxx>
#include <STEPConstruct_ExternRefs.hxx>
#include <STEPConstruct_AP203Context.hxx>
#include <STEPConstruct_ContextTool.hxx>
#include <STEPConstruct_PointHasher.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <Interface_Graph.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_StepModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP203_CcDesignSecurityClassification.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepAP203_CcDesignApproval.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepBasic_ApprovalDateTime.hxx>
#include <StepBasic_ProductCategoryRelationship.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <STEPConstruct_Part.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepVisual_Colour.hxx>
#include <Quantity_Color.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <gp_Pnt.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepBasic_DocumentFile.hxx>

// module includes
#include <STEPConstruct.hxx>
#include <STEPConstruct_AP203Context.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <STEPConstruct_ContextTool.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx>
#include <STEPConstruct_DataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct_DataMapOfPointTransient.hxx>
#include <STEPConstruct_ExternRefs.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_PointHasher.hxx>
#include <STEPConstruct_Styles.hxx>
#include <STEPConstruct_Tool.hxx>
#include <STEPConstruct_UnitContext.hxx>
#include <STEPConstruct_ValidationProps.hxx>

// template related includes
// ./opencascade/STEPConstruct_DataMapOfAsciiStringTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/STEPConstruct_DataMapOfPointTransient.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_STEPConstruct(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("STEPConstruct"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<STEPConstruct , shared_ptr<STEPConstruct>>(m,"STEPConstruct");

    static_cast<py::class_<STEPConstruct , shared_ptr<STEPConstruct> >>(m.attr("STEPConstruct"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_AP203Context , shared_ptr<STEPConstruct_AP203Context> >>(m.attr("STEPConstruct_AP203Context"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Assembly , shared_ptr<STEPConstruct_Assembly> >>(m.attr("STEPConstruct_Assembly"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_ContextTool , shared_ptr<STEPConstruct_ContextTool> >>(m.attr("STEPConstruct_ContextTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Part , shared_ptr<STEPConstruct_Part> >>(m.attr("STEPConstruct_Part"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<STEPConstruct_PointHasher , shared_ptr<STEPConstruct_PointHasher>>(m,"STEPConstruct_PointHasher");

    static_cast<py::class_<STEPConstruct_PointHasher , shared_ptr<STEPConstruct_PointHasher> >>(m.attr("STEPConstruct_PointHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const gp_Pnt & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const gp_Pnt & , const Standard_Integer ) >(&STEPConstruct_PointHasher::HashCode),
                    R"#(Computes a hash code for the point, in the range [1, theUpperBound])#"  , py::arg("thePoint"),  py::arg("theUpperBound"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Tool , shared_ptr<STEPConstruct_Tool> >>(m.attr("STEPConstruct_Tool"))
    // constructors
    // custom constructors
    // methods
        .def("WS",
             (const opencascade::handle<XSControl_WorkSession> & (STEPConstruct_Tool::*)() const) static_cast<const opencascade::handle<XSControl_WorkSession> & (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::WS),
             R"#(Returns currently loaded WorkSession)#" )
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (STEPConstruct_Tool::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::Model),
             R"#(Returns current model (Null if not loaded))#" )
        .def("Graph",
             (const Interface_Graph & (STEPConstruct_Tool::*)( const Standard_Boolean ) const) static_cast<const Interface_Graph & (STEPConstruct_Tool::*)( const Standard_Boolean ) const>(&STEPConstruct_Tool::Graph),
             R"#(Returns current graph (recomputing if necessary))#"  , py::arg("recompute")=static_cast<const Standard_Boolean>(Standard_False))
        .def("TransientProcess",
             (const opencascade::handle<Transfer_TransientProcess> & (STEPConstruct_Tool::*)() const) static_cast<const opencascade::handle<Transfer_TransientProcess> & (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::TransientProcess),
             R"#(Returns TransientProcess (reading; Null if not loaded))#" )
        .def("FinderProcess",
             (const opencascade::handle<Transfer_FinderProcess> & (STEPConstruct_Tool::*)() const) static_cast<const opencascade::handle<Transfer_FinderProcess> & (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::FinderProcess),
             R"#(Returns FinderProcess (writing; Null if not loaded))#" )
        .def("WS",
             (const opencascade::handle<XSControl_WorkSession> & (STEPConstruct_Tool::*)() const) static_cast<const opencascade::handle<XSControl_WorkSession> & (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::WS),
             R"#(Returns currently loaded WorkSession)#" )
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (STEPConstruct_Tool::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::Model),
             R"#(Returns current model (Null if not loaded))#" )
        .def("Graph",
             (const Interface_Graph & (STEPConstruct_Tool::*)( const Standard_Boolean ) const) static_cast<const Interface_Graph & (STEPConstruct_Tool::*)( const Standard_Boolean ) const>(&STEPConstruct_Tool::Graph),
             R"#(Returns current graph (recomputing if necessary))#"  , py::arg("recompute"))
        .def("TransientProcess",
             (const opencascade::handle<Transfer_TransientProcess> & (STEPConstruct_Tool::*)() const) static_cast<const opencascade::handle<Transfer_TransientProcess> & (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::TransientProcess),
             R"#(Returns TransientProcess (reading; Null if not loaded))#" )
        .def("FinderProcess",
             (const opencascade::handle<Transfer_FinderProcess> & (STEPConstruct_Tool::*)() const) static_cast<const opencascade::handle<Transfer_FinderProcess> & (STEPConstruct_Tool::*)() const>(&STEPConstruct_Tool::FinderProcess),
             R"#(Returns FinderProcess (writing; Null if not loaded))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_UnitContext , shared_ptr<STEPConstruct_UnitContext> >>(m.attr("STEPConstruct_UnitContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_ExternRefs , shared_ptr<STEPConstruct_ExternRefs> , STEPConstruct_Tool>>(m.attr("STEPConstruct_ExternRefs"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Styles , shared_ptr<STEPConstruct_Styles> , STEPConstruct_Tool>>(m.attr("STEPConstruct_Styles"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_ValidationProps , shared_ptr<STEPConstruct_ValidationProps> , STEPConstruct_Tool>>(m.attr("STEPConstruct_ValidationProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/STEPConstruct_UnitContext.hxx
// ./opencascade/STEPConstruct_PointHasher.hxx
// ./opencascade/STEPConstruct.hxx
// ./opencascade/STEPConstruct_Assembly.hxx
// ./opencascade/STEPConstruct_DataMapOfAsciiStringTransient.hxx
// ./opencascade/STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx
// ./opencascade/STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx
// ./opencascade/STEPConstruct_Part.hxx
// ./opencascade/STEPConstruct_ContextTool.hxx
// ./opencascade/STEPConstruct_Tool.hxx
// ./opencascade/STEPConstruct_DataMapOfPointTransient.hxx
// ./opencascade/STEPConstruct_AP203Context.hxx
// ./opencascade/STEPConstruct_Styles.hxx
// ./opencascade/STEPConstruct_ValidationProps.hxx
// ./opencascade/STEPConstruct_ExternRefs.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
