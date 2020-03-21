
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepBasic_ProductDefinition.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <gp_Pnt.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <gp_Pnt.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepBasic_DocumentFile.hxx>
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
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <Interface_Graph.hxx>
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
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_StepModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepBasic_SiUnit.hxx>
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
// ./opencascade\STEPConstruct_DataMapOfPointTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\STEPConstruct_DataMapOfAsciiStringTransient.hxx
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
        .def_static("FindEntity_s",
                    (opencascade::handle<StepRepr_RepresentationItem> (*)( const opencascade::handle<Transfer_FinderProcess> & , const TopoDS_Shape & ) ) static_cast<opencascade::handle<StepRepr_RepresentationItem> (*)( const opencascade::handle<Transfer_FinderProcess> & , const TopoDS_Shape & ) >(&STEPConstruct::FindEntity),
                    R"#(Returns STEP entity of the (sub)type of RepresentationItem which is a result of the tranalation of the Shape, or Null if no result is recorded)#"  , py::arg("FinderProcess"),  py::arg("Shape"))
        .def_static("FindEntity_s",
                    (opencascade::handle<StepRepr_RepresentationItem> (*)( const opencascade::handle<Transfer_FinderProcess> & , const TopoDS_Shape & , TopLoc_Location & ) ) static_cast<opencascade::handle<StepRepr_RepresentationItem> (*)( const opencascade::handle<Transfer_FinderProcess> & , const TopoDS_Shape & , TopLoc_Location & ) >(&STEPConstruct::FindEntity),
                    R"#(The same as above, but in the case if item not found, repeats search on the same shape without location. The Loc corresponds to the location with which result is found (either location of the Shape, or Null))#"  , py::arg("FinderProcess"),  py::arg("Shape"),  py::arg("Loc"))
        .def_static("FindShape_s",
                    (TopoDS_Shape (*)( const opencascade::handle<Transfer_TransientProcess> & , const opencascade::handle<StepRepr_RepresentationItem> & ) ) static_cast<TopoDS_Shape (*)( const opencascade::handle<Transfer_TransientProcess> & , const opencascade::handle<StepRepr_RepresentationItem> & ) >(&STEPConstruct::FindShape),
                    R"#(Returns Shape resulting from given STEP entity (Null if not mapped))#"  , py::arg("TransientProcess"),  py::arg("item"))
        .def_static("FindCDSR_s",
                    (Standard_Boolean (*)( const opencascade::handle<Transfer_Binder> & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Transfer_Binder> & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) >(&STEPConstruct::FindCDSR),
                    R"#(Find CDSR correcponding to the component in the specified assembly)#"  , py::arg("ComponentBinder"),  py::arg("AssemblySDR"),  py::arg("ComponentCDSR"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_AP203Context , shared_ptr<STEPConstruct_AP203Context> >>(m.attr("STEPConstruct_AP203Context"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DefaultApproval",
             (opencascade::handle<StepBasic_Approval> (STEPConstruct_AP203Context::*)() ) static_cast<opencascade::handle<StepBasic_Approval> (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::DefaultApproval),
             R"#(Returns default approval entity which is used when no other data are available)#" )
        .def("SetDefaultApproval",
             (void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_Approval> & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_Approval> & ) >(&STEPConstruct_AP203Context::SetDefaultApproval),
             R"#(Sets default approval)#"  , py::arg("app"))
        .def("DefaultDateAndTime",
             (opencascade::handle<StepBasic_DateAndTime> (STEPConstruct_AP203Context::*)() ) static_cast<opencascade::handle<StepBasic_DateAndTime> (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::DefaultDateAndTime),
             R"#(Returns default date_and_time entity which is used when no other data are available)#" )
        .def("SetDefaultDateAndTime",
             (void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_DateAndTime> & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_DateAndTime> & ) >(&STEPConstruct_AP203Context::SetDefaultDateAndTime),
             R"#(Sets default date_and_time entity)#"  , py::arg("dt"))
        .def("DefaultPersonAndOrganization",
             (opencascade::handle<StepBasic_PersonAndOrganization> (STEPConstruct_AP203Context::*)() ) static_cast<opencascade::handle<StepBasic_PersonAndOrganization> (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::DefaultPersonAndOrganization),
             R"#(Returns default person_and_organization entity which is used when no other data are available)#" )
        .def("SetDefaultPersonAndOrganization",
             (void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ) >(&STEPConstruct_AP203Context::SetDefaultPersonAndOrganization),
             R"#(Sets default person_and_organization entity)#"  , py::arg("po"))
        .def("DefaultSecurityClassificationLevel",
             (opencascade::handle<StepBasic_SecurityClassificationLevel> (STEPConstruct_AP203Context::*)() ) static_cast<opencascade::handle<StepBasic_SecurityClassificationLevel> (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::DefaultSecurityClassificationLevel),
             R"#(Returns default security_classification_level entity which is used when no other data are available)#" )
        .def("SetDefaultSecurityClassificationLevel",
             (void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_SecurityClassificationLevel> & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepBasic_SecurityClassificationLevel> & ) >(&STEPConstruct_AP203Context::SetDefaultSecurityClassificationLevel),
             R"#(Sets default security_classification_level)#"  , py::arg("sc"))
        .def("RoleCreator",
             (opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::RoleCreator),
             R"#(None)#" )
        .def("RoleDesignOwner",
             (opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::RoleDesignOwner),
             R"#(None)#" )
        .def("RoleDesignSupplier",
             (opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::RoleDesignSupplier),
             R"#(None)#" )
        .def("RoleClassificationOfficer",
             (opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_PersonAndOrganizationRole> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::RoleClassificationOfficer),
             R"#(None)#" )
        .def("RoleCreationDate",
             (opencascade::handle<StepBasic_DateTimeRole> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_DateTimeRole> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::RoleCreationDate),
             R"#(None)#" )
        .def("RoleClassificationDate",
             (opencascade::handle<StepBasic_DateTimeRole> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_DateTimeRole> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::RoleClassificationDate),
             R"#(None)#" )
        .def("RoleApprover",
             (opencascade::handle<StepBasic_ApprovalRole> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalRole> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::RoleApprover),
             R"#(Return predefined PersonAndOrganizationRole and DateTimeRole entities named 'creator', 'design owner', 'design supplier', 'classification officer', 'creation date', 'classification date', 'approver')#" )
        .def("Init",
             (void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) >(&STEPConstruct_AP203Context::Init),
             R"#(Takes SDR (part) which brings all standard data around part (common for AP203 and AP214) and creates all the additional entities required for AP203)#"  , py::arg("sdr"))
        .def("Init",
             (void (STEPConstruct_AP203Context::*)( const STEPConstruct_Part & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const STEPConstruct_Part & ) >(&STEPConstruct_AP203Context::Init),
             R"#(Takes tool which describes standard data around part (common for AP203 and AP214) and creates all the additional entities required for AP203)#"  , py::arg("SDRTool"))
        .def("Init",
             (void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> & ) >(&STEPConstruct_AP203Context::Init),
             R"#(Takes NAUO which describes assembly link to component and creates the security_classification entity associated to it as required by the AP203)#"  , py::arg("nauo"))
        .def("GetCreator",
             (opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetCreator),
             R"#(None)#" )
        .def("GetDesignOwner",
             (opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetDesignOwner),
             R"#(None)#" )
        .def("GetDesignSupplier",
             (opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetDesignSupplier),
             R"#(None)#" )
        .def("GetClassificationOfficer",
             (opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetClassificationOfficer),
             R"#(None)#" )
        .def("GetSecurity",
             (opencascade::handle<StepAP203_CcDesignSecurityClassification> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignSecurityClassification> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetSecurity),
             R"#(None)#" )
        .def("GetCreationDate",
             (opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetCreationDate),
             R"#(None)#" )
        .def("GetClassificationDate",
             (opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetClassificationDate),
             R"#(None)#" )
        .def("GetApproval",
             (opencascade::handle<StepAP203_CcDesignApproval> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepAP203_CcDesignApproval> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetApproval),
             R"#(None)#" )
        .def("GetApprover",
             (opencascade::handle<StepBasic_ApprovalPersonOrganization> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalPersonOrganization> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetApprover),
             R"#(None)#" )
        .def("GetApprovalDateTime",
             (opencascade::handle<StepBasic_ApprovalDateTime> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalDateTime> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetApprovalDateTime),
             R"#(None)#" )
        .def("GetProductCategoryRelationship",
             (opencascade::handle<StepBasic_ProductCategoryRelationship> (STEPConstruct_AP203Context::*)() const) static_cast<opencascade::handle<StepBasic_ProductCategoryRelationship> (STEPConstruct_AP203Context::*)() const>(&STEPConstruct_AP203Context::GetProductCategoryRelationship),
             R"#(Return entities (roots) instantiated for the part by method Init)#" )
        .def("Clear",
             (void (STEPConstruct_AP203Context::*)() ) static_cast<void (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::Clear),
             R"#(Clears all fields describing entities specific to each part)#" )
        .def("InitRoles",
             (void (STEPConstruct_AP203Context::*)() ) static_cast<void (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::InitRoles),
             R"#(Initializes constant fields (shared entities))#" )
        .def("InitAssembly",
             (void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> & ) ) static_cast<void (STEPConstruct_AP203Context::*)( const opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> & ) >(&STEPConstruct_AP203Context::InitAssembly),
             R"#(Initializes all missing data which are required for assembly)#"  , py::arg("nauo"))
        .def("InitSecurityRequisites",
             (void (STEPConstruct_AP203Context::*)() ) static_cast<void (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::InitSecurityRequisites),
             R"#(Initializes ClassificationOfficer and ClassificationDate entities according to Security entity)#" )
        .def("InitApprovalRequisites",
             (void (STEPConstruct_AP203Context::*)() ) static_cast<void (STEPConstruct_AP203Context::*)() >(&STEPConstruct_AP203Context::InitApprovalRequisites),
             R"#(Initializes Approver and ApprovalDateTime entities according to Approval entity)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Assembly , shared_ptr<STEPConstruct_Assembly> >>(m.attr("STEPConstruct_Assembly"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (STEPConstruct_Assembly::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const opencascade::handle<StepGeom_Axis2Placement3d> & ) ) static_cast<void (STEPConstruct_Assembly::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const opencascade::handle<StepGeom_Axis2Placement3d> & ) >(&STEPConstruct_Assembly::Init),
             R"#(Initialises with starting values Ax0 : origin axis (typically, standard XYZ) Loc : location to which place the item Makes a MappedItem Resulting Value is returned by ItemValue)#"  , py::arg("aSR"),  py::arg("SDR0"),  py::arg("Ax0"),  py::arg("Loc"))
        .def("MakeRelationship",
             (void (STEPConstruct_Assembly::*)() ) static_cast<void (STEPConstruct_Assembly::*)() >(&STEPConstruct_Assembly::MakeRelationship),
             R"#(Make a (ShapeRepresentationRelationship,...WithTransformation) Resulting Value is returned by ItemValue)#" )
        .def("ItemValue",
             (opencascade::handle<Standard_Transient> (STEPConstruct_Assembly::*)() const) static_cast<opencascade::handle<Standard_Transient> (STEPConstruct_Assembly::*)() const>(&STEPConstruct_Assembly::ItemValue),
             R"#(Returns the Value If no Make... has been called, returns the starting SR)#" )
        .def("ItemLocation",
             (opencascade::handle<StepGeom_Axis2Placement3d> (STEPConstruct_Assembly::*)() const) static_cast<opencascade::handle<StepGeom_Axis2Placement3d> (STEPConstruct_Assembly::*)() const>(&STEPConstruct_Assembly::ItemLocation),
             R"#(Returns the location of the item, computed from starting aLoc)#" )
        .def("GetNAUO",
             (opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPConstruct_Assembly::*)() const) static_cast<opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPConstruct_Assembly::*)() const>(&STEPConstruct_Assembly::GetNAUO),
             R"#(Returns NAUO object describing the assembly link)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CheckSRRReversesNAUO_s",
                    (Standard_Boolean (*)( const Interface_Graph & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) ) static_cast<Standard_Boolean (*)( const Interface_Graph & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) >(&STEPConstruct_Assembly::CheckSRRReversesNAUO),
                    R"#(Checks whether SRR's definition of assembly and component contradicts with NAUO definition or not, according to model schema (AP214 or AP203))#"  , py::arg("theGraph"),  py::arg("CDSR"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_ContextTool , shared_ptr<STEPConstruct_ContextTool> >>(m.attr("STEPConstruct_ContextTool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepData_StepModel> & >()  , py::arg("aStepModel") )
    // custom constructors
    // methods
        .def("SetModel",
             (void (STEPConstruct_ContextTool::*)( const opencascade::handle<StepData_StepModel> & ) ) static_cast<void (STEPConstruct_ContextTool::*)( const opencascade::handle<StepData_StepModel> & ) >(&STEPConstruct_ContextTool::SetModel),
             R"#(Initialize ApplicationProtocolDefinition by the first entity of that type found in the model)#"  , py::arg("aStepModel"))
        .def("GetAPD",
             (opencascade::handle<StepBasic_ApplicationProtocolDefinition> (STEPConstruct_ContextTool::*)() ) static_cast<opencascade::handle<StepBasic_ApplicationProtocolDefinition> (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::GetAPD),
             R"#(None)#" )
        .def("AddAPD",
             (void (STEPConstruct_ContextTool::*)( const Standard_Boolean ) ) static_cast<void (STEPConstruct_ContextTool::*)( const Standard_Boolean ) >(&STEPConstruct_ContextTool::AddAPD),
             R"#(None)#"  , py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsAP203",
             (Standard_Boolean (STEPConstruct_ContextTool::*)() const) static_cast<Standard_Boolean (STEPConstruct_ContextTool::*)() const>(&STEPConstruct_ContextTool::IsAP203),
             R"#(Returns True if APD.schema_name is config_control_design)#" )
        .def("IsAP214",
             (Standard_Boolean (STEPConstruct_ContextTool::*)() const) static_cast<Standard_Boolean (STEPConstruct_ContextTool::*)() const>(&STEPConstruct_ContextTool::IsAP214),
             R"#(Returns True if APD.schema_name is automotive_design)#" )
        .def("IsAP242",
             (Standard_Boolean (STEPConstruct_ContextTool::*)() const) static_cast<Standard_Boolean (STEPConstruct_ContextTool::*)() const>(&STEPConstruct_ContextTool::IsAP242),
             R"#(Returns True if APD.schema_name is ap242_managed_model_based_3d_engineering)#" )
        .def("GetACstatus",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() ) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::GetACstatus),
             R"#(None)#" )
        .def("GetACschemaName",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() ) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::GetACschemaName),
             R"#(None)#" )
        .def("GetACyear",
             (Standard_Integer (STEPConstruct_ContextTool::*)() ) static_cast<Standard_Integer (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::GetACyear),
             R"#(None)#" )
        .def("GetACname",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() ) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::GetACname),
             R"#(None)#" )
        .def("SetACstatus",
             (void (STEPConstruct_ContextTool::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_ContextTool::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_ContextTool::SetACstatus),
             R"#(None)#"  , py::arg("status"))
        .def("SetACschemaName",
             (void (STEPConstruct_ContextTool::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_ContextTool::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_ContextTool::SetACschemaName),
             R"#(None)#"  , py::arg("schemaName"))
        .def("SetACyear",
             (void (STEPConstruct_ContextTool::*)( const Standard_Integer ) ) static_cast<void (STEPConstruct_ContextTool::*)( const Standard_Integer ) >(&STEPConstruct_ContextTool::SetACyear),
             R"#(None)#"  , py::arg("year"))
        .def("SetACname",
             (void (STEPConstruct_ContextTool::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_ContextTool::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_ContextTool::SetACname),
             R"#(None)#"  , py::arg("name"))
        .def("GetDefaultAxis",
             (opencascade::handle<StepGeom_Axis2Placement3d> (STEPConstruct_ContextTool::*)() ) static_cast<opencascade::handle<StepGeom_Axis2Placement3d> (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::GetDefaultAxis),
             R"#(Returns a default axis placement)#" )
        .def("AP203Context",
             (STEPConstruct_AP203Context & (STEPConstruct_ContextTool::*)() ) static_cast<STEPConstruct_AP203Context & (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::AP203Context),
             R"#(Returns tool which maintains context specific for AP203)#" )
        .def("Level",
             (Standard_Integer (STEPConstruct_ContextTool::*)() const) static_cast<Standard_Integer (STEPConstruct_ContextTool::*)() const>(&STEPConstruct_ContextTool::Level),
             R"#(Returns current assembly level)#" )
        .def("NextLevel",
             (void (STEPConstruct_ContextTool::*)() ) static_cast<void (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::NextLevel),
             R"#(None)#" )
        .def("PrevLevel",
             (void (STEPConstruct_ContextTool::*)() ) static_cast<void (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::PrevLevel),
             R"#(None)#" )
        .def("SetLevel",
             (void (STEPConstruct_ContextTool::*)( const Standard_Integer ) ) static_cast<void (STEPConstruct_ContextTool::*)( const Standard_Integer ) >(&STEPConstruct_ContextTool::SetLevel),
             R"#(Changes current assembly level)#"  , py::arg("lev"))
        .def("Index",
             (Standard_Integer (STEPConstruct_ContextTool::*)() const) static_cast<Standard_Integer (STEPConstruct_ContextTool::*)() const>(&STEPConstruct_ContextTool::Index),
             R"#(Returns current index of assembly component on current level)#" )
        .def("NextIndex",
             (void (STEPConstruct_ContextTool::*)() ) static_cast<void (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::NextIndex),
             R"#(None)#" )
        .def("PrevIndex",
             (void (STEPConstruct_ContextTool::*)() ) static_cast<void (STEPConstruct_ContextTool::*)() >(&STEPConstruct_ContextTool::PrevIndex),
             R"#(None)#" )
        .def("SetIndex",
             (void (STEPConstruct_ContextTool::*)( const Standard_Integer ) ) static_cast<void (STEPConstruct_ContextTool::*)( const Standard_Integer ) >(&STEPConstruct_ContextTool::SetIndex),
             R"#(Changes current index of assembly component on current level)#"  , py::arg("ind"))
        .def("GetProductName",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ContextTool::*)() const>(&STEPConstruct_ContextTool::GetProductName),
             R"#(Generates a product name basing on write.step.product.name parameter and current position in the assembly structure)#" )
        .def("GetRootsForPart",
             (opencascade::handle<TColStd_HSequenceOfTransient> (STEPConstruct_ContextTool::*)( const STEPConstruct_Part & ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (STEPConstruct_ContextTool::*)( const STEPConstruct_Part & ) >(&STEPConstruct_ContextTool::GetRootsForPart),
             R"#(Produces and returns a full list of root entities required for part identified by SDRTool (including SDR itself))#"  , py::arg("SDRTool"))
        .def("GetRootsForAssemblyLink",
             (opencascade::handle<TColStd_HSequenceOfTransient> (STEPConstruct_ContextTool::*)( const STEPConstruct_Assembly & ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (STEPConstruct_ContextTool::*)( const STEPConstruct_Assembly & ) >(&STEPConstruct_ContextTool::GetRootsForAssemblyLink),
             R"#(Produces and returns a full list of root entities required for assembly link identified by assembly (including NAUO and CDSR))#"  , py::arg("assembly"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Part , shared_ptr<STEPConstruct_Part> >>(m.attr("STEPConstruct_Part"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("MakeSDR",
             (void (STEPConstruct_Part::*)( const opencascade::handle<StepShape_ShapeRepresentation> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepBasic_ApplicationContext> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<StepShape_ShapeRepresentation> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepBasic_ApplicationContext> & ) >(&STEPConstruct_Part::MakeSDR),
             R"#(None)#"  , py::arg("aShape"),  py::arg("aName"),  py::arg("AC"))
        .def("ReadSDR",
             (void (STEPConstruct_Part::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) >(&STEPConstruct_Part::ReadSDR),
             R"#(None)#"  , py::arg("aShape"))
        .def("IsDone",
             (Standard_Boolean (STEPConstruct_Part::*)() const) static_cast<Standard_Boolean (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::IsDone),
             R"#(None)#" )
        .def("SDRValue",
             (opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepShape_ShapeDefinitionRepresentation> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::SDRValue),
             R"#(Returns SDR or Null if not done)#" )
        .def("SRValue",
             (opencascade::handle<StepShape_ShapeRepresentation> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::SRValue),
             R"#(Returns SDR->UsedRepresentation() or Null if not done)#" )
        .def("PC",
             (opencascade::handle<StepBasic_ProductContext> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepBasic_ProductContext> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PC),
             R"#(None)#" )
        .def("PCname",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PCname),
             R"#(None)#" )
        .def("PCdisciplineType",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PCdisciplineType),
             R"#(None)#" )
        .def("SetPCname",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPCname),
             R"#(None)#"  , py::arg("name"))
        .def("SetPCdisciplineType",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPCdisciplineType),
             R"#(None)#"  , py::arg("label"))
        .def("AC",
             (opencascade::handle<StepBasic_ApplicationContext> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepBasic_ApplicationContext> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::AC),
             R"#(None)#" )
        .def("ACapplication",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::ACapplication),
             R"#(None)#" )
        .def("SetACapplication",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetACapplication),
             R"#(None)#"  , py::arg("text"))
        .def("PDC",
             (opencascade::handle<StepBasic_ProductDefinitionContext> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionContext> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDC),
             R"#(None)#" )
        .def("PDCname",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDCname),
             R"#(None)#" )
        .def("PDCstage",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDCstage),
             R"#(None)#" )
        .def("SetPDCname",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPDCname),
             R"#(None)#"  , py::arg("label"))
        .def("SetPDCstage",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPDCstage),
             R"#(None)#"  , py::arg("label"))
        .def("Product",
             (opencascade::handle<StepBasic_Product> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepBasic_Product> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::Product),
             R"#(None)#" )
        .def("Pid",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::Pid),
             R"#(None)#" )
        .def("Pname",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::Pname),
             R"#(None)#" )
        .def("Pdescription",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::Pdescription),
             R"#(None)#" )
        .def("SetPid",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPid),
             R"#(None)#"  , py::arg("id"))
        .def("SetPname",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPname),
             R"#(None)#"  , py::arg("label"))
        .def("SetPdescription",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPdescription),
             R"#(None)#"  , py::arg("text"))
        .def("PDF",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDF),
             R"#(None)#" )
        .def("PDFid",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDFid),
             R"#(None)#" )
        .def("PDFdescription",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDFdescription),
             R"#(None)#" )
        .def("SetPDFid",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPDFid),
             R"#(None)#"  , py::arg("id"))
        .def("SetPDFdescription",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPDFdescription),
             R"#(None)#"  , py::arg("text"))
        .def("PD",
             (opencascade::handle<StepBasic_ProductDefinition> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PD),
             R"#(None)#" )
        .def("PDdescription",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDdescription),
             R"#(None)#" )
        .def("SetPDdescription",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPDdescription),
             R"#(None)#"  , py::arg("text"))
        .def("PDS",
             (opencascade::handle<StepRepr_ProductDefinitionShape> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepRepr_ProductDefinitionShape> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDS),
             R"#(None)#" )
        .def("PDSname",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDSname),
             R"#(None)#" )
        .def("PDSdescription",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PDSdescription),
             R"#(None)#" )
        .def("SetPDSname",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPDSname),
             R"#(None)#"  , py::arg("label"))
        .def("SetPDSdescription",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPDSdescription),
             R"#(None)#"  , py::arg("text"))
        .def("PRPC",
             (opencascade::handle<StepBasic_ProductRelatedProductCategory> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<StepBasic_ProductRelatedProductCategory> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PRPC),
             R"#(None)#" )
        .def("PRPCname",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PRPCname),
             R"#(None)#" )
        .def("PRPCdescription",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_Part::*)() const>(&STEPConstruct_Part::PRPCdescription),
             R"#(None)#" )
        .def("SetPRPCname",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPRPCname),
             R"#(None)#"  , py::arg("label"))
        .def("SetPRPCdescription",
             (void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (STEPConstruct_Part::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&STEPConstruct_Part::SetPRPCdescription),
             R"#(None)#"  , py::arg("text"))
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
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt & , const gp_Pnt & ) >(&STEPConstruct_PointHasher::IsEqual),
                    R"#(Returns True when the two keys are the same. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("Point1"),  py::arg("Point2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Tool , shared_ptr<STEPConstruct_Tool> >>(m.attr("STEPConstruct_Tool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> & >()  , py::arg("WS") )
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (STEPConstruct_UnitContext::*)( const Standard_Real ) ) static_cast<void (STEPConstruct_UnitContext::*)( const Standard_Real ) >(&STEPConstruct_UnitContext::Init),
             R"#(Creates new context (units are MM and radians, uncertainty equal to Tol3d))#"  , py::arg("Tol3d"))
        .def("IsDone",
             (Standard_Boolean (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Boolean (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::IsDone),
             R"#(Returns True if Init was called successfully)#" )
        .def("Value",
             (opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> (STEPConstruct_UnitContext::*)() const) static_cast<opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::Value),
             R"#(Returns context (or Null if not done))#" )
        .def("ComputeFactors",
             (Standard_Integer (STEPConstruct_UnitContext::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) ) static_cast<Standard_Integer (STEPConstruct_UnitContext::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) >(&STEPConstruct_UnitContext::ComputeFactors),
             R"#(Computes the length, plane angle and solid angle conversion factor . Returns a status, 0 if OK)#"  , py::arg("aContext"))
        .def("ComputeFactors",
             (Standard_Integer (STEPConstruct_UnitContext::*)( const opencascade::handle<StepBasic_NamedUnit> & ) ) static_cast<Standard_Integer (STEPConstruct_UnitContext::*)( const opencascade::handle<StepBasic_NamedUnit> & ) >(&STEPConstruct_UnitContext::ComputeFactors),
             R"#(None)#"  , py::arg("aUnit"))
        .def("ComputeTolerance",
             (Standard_Integer (STEPConstruct_UnitContext::*)( const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ) ) static_cast<Standard_Integer (STEPConstruct_UnitContext::*)( const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ) >(&STEPConstruct_UnitContext::ComputeTolerance),
             R"#(Computes the uncertainty value (for length))#"  , py::arg("aContext"))
        .def("LengthFactor",
             (Standard_Real (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Real (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::LengthFactor),
             R"#(Returns the lengthFactor)#" )
        .def("PlaneAngleFactor",
             (Standard_Real (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Real (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::PlaneAngleFactor),
             R"#(Returns the planeAngleFactor)#" )
        .def("SolidAngleFactor",
             (Standard_Real (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Real (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::SolidAngleFactor),
             R"#(Returns the solidAngleFactor)#" )
        .def("Uncertainty",
             (Standard_Real (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Real (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::Uncertainty),
             R"#(Returns the Uncertainty value (for length) It has been converted with LengthFactor)#" )
        .def("AreaFactor",
             (Standard_Real (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Real (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::AreaFactor),
             R"#(Returns the areaFactor)#" )
        .def("VolumeFactor",
             (Standard_Real (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Real (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::VolumeFactor),
             R"#(Returns the volumeFactor)#" )
        .def("HasUncertainty",
             (Standard_Boolean (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Boolean (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::HasUncertainty),
             R"#(Tells if a Uncertainty (for length) is recorded)#" )
        .def("LengthDone",
             (Standard_Boolean (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Boolean (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::LengthDone),
             R"#(Returns true if ComputeFactors has calculated a LengthFactor)#" )
        .def("PlaneAngleDone",
             (Standard_Boolean (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Boolean (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::PlaneAngleDone),
             R"#(Returns true if ComputeFactors has calculated a PlaneAngleFactor)#" )
        .def("SolidAngleDone",
             (Standard_Boolean (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Boolean (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::SolidAngleDone),
             R"#(Returns true if ComputeFactors has calculated a SolidAngleFactor)#" )
        .def("AreaDone",
             (Standard_Boolean (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Boolean (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::AreaDone),
             R"#(Returns true if areaFactor is computed)#" )
        .def("VolumeDone",
             (Standard_Boolean (STEPConstruct_UnitContext::*)() const) static_cast<Standard_Boolean (STEPConstruct_UnitContext::*)() const>(&STEPConstruct_UnitContext::VolumeDone),
             R"#(Returns true if volumeFactor is computed)#" )
        .def("StatusMessage",
             (Standard_CString (STEPConstruct_UnitContext::*)( const Standard_Integer ) const) static_cast<Standard_CString (STEPConstruct_UnitContext::*)( const Standard_Integer ) const>(&STEPConstruct_UnitContext::StatusMessage),
             R"#(Returns a message for a given status (0 - empty) This message can then be added as warning for transfer)#"  , py::arg("status"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ConvertSiPrefix_s",
                    (Standard_Real (*)( const StepBasic_SiPrefix ) ) static_cast<Standard_Real (*)( const StepBasic_SiPrefix ) >(&STEPConstruct_UnitContext::ConvertSiPrefix),
                    R"#(Convert SI prefix defined by enumertaion to corresponding real factor (e.g. 1e6 for mega))#"  , py::arg("aPrefix"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_ExternRefs , shared_ptr<STEPConstruct_ExternRefs> , STEPConstruct_Tool>>(m.attr("STEPConstruct_ExternRefs"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> & >()  , py::arg("WS") )
    // custom constructors
    // methods
        .def("Init",
             (Standard_Boolean (STEPConstruct_ExternRefs::*)( const opencascade::handle<XSControl_WorkSession> & ) ) static_cast<Standard_Boolean (STEPConstruct_ExternRefs::*)( const opencascade::handle<XSControl_WorkSession> & ) >(&STEPConstruct_ExternRefs::Init),
             R"#(Initializes tool; returns True if succeeded)#"  , py::arg("WS"))
        .def("Clear",
             (void (STEPConstruct_ExternRefs::*)() ) static_cast<void (STEPConstruct_ExternRefs::*)() >(&STEPConstruct_ExternRefs::Clear),
             R"#(Clears internal fields (list of defined extern refs))#" )
        .def("LoadExternRefs",
             (Standard_Boolean (STEPConstruct_ExternRefs::*)() ) static_cast<Standard_Boolean (STEPConstruct_ExternRefs::*)() >(&STEPConstruct_ExternRefs::LoadExternRefs),
             R"#(Searches current STEP model for external references and loads them to the internal data structures NOTE: does not clear data structures before loading)#" )
        .def("NbExternRefs",
             (Standard_Integer (STEPConstruct_ExternRefs::*)() const) static_cast<Standard_Integer (STEPConstruct_ExternRefs::*)() const>(&STEPConstruct_ExternRefs::NbExternRefs),
             R"#(Returns number of defined extern references)#" )
        .def("FileName",
             (Standard_CString (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const) static_cast<Standard_CString (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const>(&STEPConstruct_ExternRefs::FileName),
             R"#(Returns filename for numth extern reference Returns Null if FileName is not defined or bad)#"  , py::arg("num"))
        .def("ProdDef",
             (opencascade::handle<StepBasic_ProductDefinition> (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const>(&STEPConstruct_ExternRefs::ProdDef),
             R"#(Returns ProductDefinition to which numth extern reference is associated. Returns Null if cannot be detected or if extern reference is not associated to SDR in a proper way.)#"  , py::arg("num"))
        .def("Format",
             (opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const>(&STEPConstruct_ExternRefs::Format),
             R"#(Returns format identification string for the extern document Returns Null handle if format is not defined)#"  , py::arg("num"))
        .def("AddExternRef",
             (Standard_Integer (STEPConstruct_ExternRefs::*)( const Standard_CString , const opencascade::handle<StepBasic_ProductDefinition> & , const Standard_CString ) ) static_cast<Standard_Integer (STEPConstruct_ExternRefs::*)( const Standard_CString , const opencascade::handle<StepBasic_ProductDefinition> & , const Standard_CString ) >(&STEPConstruct_ExternRefs::AddExternRef),
             R"#(Create a new external reference with specified attributes attached to a given SDR <format> can be Null string, in that case this information is not written. Else, it can be "STEP AP214" or "STEP AP203" Returns index of a new extern ref)#"  , py::arg("filename"),  py::arg("PD"),  py::arg("format"))
        .def("checkAP214Shared",
             (void (STEPConstruct_ExternRefs::*)() ) static_cast<void (STEPConstruct_ExternRefs::*)() >(&STEPConstruct_ExternRefs::checkAP214Shared),
             R"#(Check (create if it is null) all shared entities for the model)#" )
        .def("WriteExternRefs",
             (Standard_Integer (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const) static_cast<Standard_Integer (STEPConstruct_ExternRefs::*)( const Standard_Integer ) const>(&STEPConstruct_ExternRefs::WriteExternRefs),
             R"#(Adds all the currently defined external refs to the model Returns number of written extern refs)#"  , py::arg("num"))
        .def("SetAP214APD",
             (void (STEPConstruct_ExternRefs::*)( const opencascade::handle<StepBasic_ApplicationProtocolDefinition> & ) ) static_cast<void (STEPConstruct_ExternRefs::*)( const opencascade::handle<StepBasic_ApplicationProtocolDefinition> & ) >(&STEPConstruct_ExternRefs::SetAP214APD),
             R"#(Set the ApplicationProtocolDefinition of the PDM schema)#"  , py::arg("APD"))
        .def("GetAP214APD",
             (opencascade::handle<StepBasic_ApplicationProtocolDefinition> (STEPConstruct_ExternRefs::*)() ) static_cast<opencascade::handle<StepBasic_ApplicationProtocolDefinition> (STEPConstruct_ExternRefs::*)() >(&STEPConstruct_ExternRefs::GetAP214APD),
             R"#(Returns the ApplicationProtocolDefinition of the PDM schema NOTE: if not defined then create new APD with new Application Context)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_Styles , shared_ptr<STEPConstruct_Styles> , STEPConstruct_Tool>>(m.attr("STEPConstruct_Styles"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> & >()  , py::arg("WS") )
    // custom constructors
    // methods
        .def("Init",
             (Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<XSControl_WorkSession> & ) ) static_cast<Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<XSControl_WorkSession> & ) >(&STEPConstruct_Styles::Init),
             R"#(Initializes tool; returns True if succeeded)#"  , py::arg("WS"))
        .def("NbStyles",
             (Standard_Integer (STEPConstruct_Styles::*)() const) static_cast<Standard_Integer (STEPConstruct_Styles::*)() const>(&STEPConstruct_Styles::NbStyles),
             R"#(Returns number of defined styles)#" )
        .def("Style",
             (opencascade::handle<StepVisual_StyledItem> (STEPConstruct_Styles::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepVisual_StyledItem> (STEPConstruct_Styles::*)( const Standard_Integer ) const>(&STEPConstruct_Styles::Style),
             R"#(Returns style with given index)#"  , py::arg("i"))
        .def("ClearStyles",
             (void (STEPConstruct_Styles::*)() ) static_cast<void (STEPConstruct_Styles::*)() >(&STEPConstruct_Styles::ClearStyles),
             R"#(Clears all defined styles and PSA sequence)#" )
        .def("AddStyle",
             (void (STEPConstruct_Styles::*)( const opencascade::handle<StepVisual_StyledItem> & ) ) static_cast<void (STEPConstruct_Styles::*)( const opencascade::handle<StepVisual_StyledItem> & ) >(&STEPConstruct_Styles::AddStyle),
             R"#(Adds a style to a sequence)#"  , py::arg("style"))
        .def("AddStyle",
             (opencascade::handle<StepVisual_StyledItem> (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepVisual_PresentationStyleAssignment> & , const opencascade::handle<StepVisual_StyledItem> & ) ) static_cast<opencascade::handle<StepVisual_StyledItem> (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepVisual_PresentationStyleAssignment> & , const opencascade::handle<StepVisual_StyledItem> & ) >(&STEPConstruct_Styles::AddStyle),
             R"#(Create a style linking giving PSA to the item, and add it to the sequence of stored styles. If Override is not Null, then the resulting style will be of the subtype OverridingStyledItem.)#"  , py::arg("item"),  py::arg("PSA"),  py::arg("Override"))
        .def("AddStyle",
             (opencascade::handle<StepVisual_StyledItem> (STEPConstruct_Styles::*)( const TopoDS_Shape & , const opencascade::handle<StepVisual_PresentationStyleAssignment> & , const opencascade::handle<StepVisual_StyledItem> & ) ) static_cast<opencascade::handle<StepVisual_StyledItem> (STEPConstruct_Styles::*)( const TopoDS_Shape & , const opencascade::handle<StepVisual_PresentationStyleAssignment> & , const opencascade::handle<StepVisual_StyledItem> & ) >(&STEPConstruct_Styles::AddStyle),
             R"#(Create a style linking giving PSA to the Shape, and add it to the sequence of stored styles. If Override is not Null, then the resulting style will be of the subtype OverridingStyledItem. The Sape is used to find corresponding STEP entity by call to STEPConstruct::FindEntity(), then previous method is called.)#"  , py::arg("Shape"),  py::arg("PSA"),  py::arg("Override"))
        .def("CreateMDGPR",
             (Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationContext> & , opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> & ) ) static_cast<Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationContext> & , opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> & ) >(&STEPConstruct_Styles::CreateMDGPR),
             R"#(Create MDGPR, fill it with all the styles previously defined, and add it to the model)#"  , py::arg("Context"),  py::arg("MDGPR"))
        .def("CreateNAUOSRD",
             (Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & , const opencascade::handle<StepRepr_ProductDefinitionShape> & ) ) static_cast<Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & , const opencascade::handle<StepRepr_ProductDefinitionShape> & ) >(&STEPConstruct_Styles::CreateNAUOSRD),
             R"#(Create MDGPR, fill it with all the styles previously defined, and add it to the model IMPORTANT: <initPDS> must be null when use for NAUO colors <initPDS> initialised only for SHUO case.)#"  , py::arg("Context"),  py::arg("CDSR"),  py::arg("initPDS"))
        .def("FindContext",
             (opencascade::handle<StepRepr_RepresentationContext> (STEPConstruct_Styles::*)( const TopoDS_Shape & ) const) static_cast<opencascade::handle<StepRepr_RepresentationContext> (STEPConstruct_Styles::*)( const TopoDS_Shape & ) const>(&STEPConstruct_Styles::FindContext),
             R"#(Searches the STEP model for the RepresentationContext in which given shape is defined. This context (if found) can be used then in call to CreateMDGPR())#"  , py::arg("Shape"))
        .def("LoadStyles",
             (Standard_Boolean (STEPConstruct_Styles::*)() ) static_cast<Standard_Boolean (STEPConstruct_Styles::*)() >(&STEPConstruct_Styles::LoadStyles),
             R"#(Searches the STEP model for the MDGPR or DM entities (which bring styles) and fills sequence of styles)#" )
        .def("LoadInvisStyles",
             (Standard_Boolean (STEPConstruct_Styles::*)( opencascade::handle<TColStd_HSequenceOfTransient> & ) const) static_cast<Standard_Boolean (STEPConstruct_Styles::*)( opencascade::handle<TColStd_HSequenceOfTransient> & ) const>(&STEPConstruct_Styles::LoadInvisStyles),
             R"#(Searches the STEP model for the INISIBILITY enteties (which bring styles) and fills out sequence of styles)#"  , py::arg("InvSyles"))
        .def("MakeColorPSA",
             (opencascade::handle<StepVisual_PresentationStyleAssignment> (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepVisual_Colour> & , const opencascade::handle<StepVisual_Colour> & , const Standard_Boolean ) const) static_cast<opencascade::handle<StepVisual_PresentationStyleAssignment> (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepVisual_Colour> & , const opencascade::handle<StepVisual_Colour> & , const Standard_Boolean ) const>(&STEPConstruct_Styles::MakeColorPSA),
             R"#(Create a PresentationStyleAssignment entity which defines two colors (for filling surfaces and curves) if isForNAUO true then returns PresentationStyleByContext)#"  , py::arg("item"),  py::arg("SurfCol"),  py::arg("CurveCol"),  py::arg("isForNAUO")=static_cast<const Standard_Boolean>(Standard_False))
        .def("GetColorPSA",
             (opencascade::handle<StepVisual_PresentationStyleAssignment> (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepVisual_Colour> & ) ) static_cast<opencascade::handle<StepVisual_PresentationStyleAssignment> (STEPConstruct_Styles::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepVisual_Colour> & ) >(&STEPConstruct_Styles::GetColorPSA),
             R"#(Returns a PresentationStyleAssignment entity which defines surface and curve colors as Col. This PSA is either created or taken from internal map where all PSAs created by this method are remembered.)#"  , py::arg("item"),  py::arg("Col"))
        .def("GetColors",
             (Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<StepVisual_StyledItem> & , opencascade::handle<StepVisual_Colour> & , opencascade::handle<StepVisual_Colour> & , opencascade::handle<StepVisual_Colour> & , Standard_Boolean & ) const) static_cast<Standard_Boolean (STEPConstruct_Styles::*)( const opencascade::handle<StepVisual_StyledItem> & , opencascade::handle<StepVisual_Colour> & , opencascade::handle<StepVisual_Colour> & , opencascade::handle<StepVisual_Colour> & , Standard_Boolean & ) const>(&STEPConstruct_Styles::GetColors),
             R"#(Extract color definitions from the style entity For each type of color supported, result can be either NULL if it is not defined by that style, or last definition (if they are 1 or more))#"  , py::arg("style"),  py::arg("SurfCol"),  py::arg("BoundCol"),  py::arg("CurveCol"),  py::arg("IsComponent"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("EncodeColor_s",
                    (opencascade::handle<StepVisual_Colour> (*)( const Quantity_Color & ) ) static_cast<opencascade::handle<StepVisual_Colour> (*)( const Quantity_Color & ) >(&STEPConstruct_Styles::EncodeColor),
                    R"#(Create STEP color entity by given Quantity_Color The analysis is performed for whether the color corresponds to one of standard colors predefined in STEP. In that case, PredefinedColour entity is created instead of RGBColour)#"  , py::arg("Col"))
        .def_static("EncodeColor_s",
                    (opencascade::handle<StepVisual_Colour> (*)( const Quantity_Color & , NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient>, TCollection_AsciiString> & , NCollection_DataMap<gp_Pnt, opencascade::handle<Standard_Transient>, STEPConstruct_PointHasher> & ) ) static_cast<opencascade::handle<StepVisual_Colour> (*)( const Quantity_Color & , NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient>, TCollection_AsciiString> & , NCollection_DataMap<gp_Pnt, opencascade::handle<Standard_Transient>, STEPConstruct_PointHasher> & ) >(&STEPConstruct_Styles::EncodeColor),
                    R"#(Create STEP color entity by given Quantity_Color The analysis is performed for whether the color corresponds to one of standard colors predefined in STEP. In that case, PredefinedColour entity is created instead of RGBColour)#"  , py::arg("Col"),  py::arg("DPDCs"),  py::arg("ColRGBs"))
        .def_static("DecodeColor_s",
                    (Standard_Boolean (*)( const opencascade::handle<StepVisual_Colour> & , Quantity_Color & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<StepVisual_Colour> & , Quantity_Color & ) >(&STEPConstruct_Styles::DecodeColor),
                    R"#(Decodes STEP color and fills the Quantity_Color. Returns True if OK or False if color is not recognized)#"  , py::arg("Colour"),  py::arg("Col"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<STEPConstruct_ValidationProps , shared_ptr<STEPConstruct_ValidationProps> , STEPConstruct_Tool>>(m.attr("STEPConstruct_ValidationProps"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> & >()  , py::arg("WS") )
    // custom constructors
    // methods
        .def("Init",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const opencascade::handle<XSControl_WorkSession> & ) ) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const opencascade::handle<XSControl_WorkSession> & ) >(&STEPConstruct_ValidationProps::Init),
             R"#(Load worksession; returns True if succeeded)#"  , py::arg("WS"))
        .def("AddProp",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const opencascade::handle<StepRepr_RepresentationItem> & , const Standard_CString , const Standard_Boolean ) ) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const opencascade::handle<StepRepr_RepresentationItem> & , const Standard_CString , const Standard_Boolean ) >(&STEPConstruct_ValidationProps::AddProp),
             R"#(General method for adding (writing) a validation property for shape which should be already mapped on writing itself. It uses FindTarget() to find target STEP entity resulting from given shape, and associated context Returns True if success, False in case of fail)#"  , py::arg("Shape"),  py::arg("Prop"),  py::arg("Descr"),  py::arg("instance")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AddProp",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const StepRepr_CharacterizedDefinition & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepRepr_RepresentationItem> & , const Standard_CString ) ) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const StepRepr_CharacterizedDefinition & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepRepr_RepresentationItem> & , const Standard_CString ) >(&STEPConstruct_ValidationProps::AddProp),
             R"#(General method for adding (writing) a validation property for shape which should be already mapped on writing itself. It takes target and Context entities which correspond to shape Returns True if success, False in case of fail)#"  , py::arg("target"),  py::arg("Context"),  py::arg("Prop"),  py::arg("Descr"))
        .def("AddArea",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const Standard_Real ) ) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const Standard_Real ) >(&STEPConstruct_ValidationProps::AddArea),
             R"#(Adds surface area property for given shape (already mapped). Returns True if success, False in case of fail)#"  , py::arg("Shape"),  py::arg("Area"))
        .def("AddVolume",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const Standard_Real ) ) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const Standard_Real ) >(&STEPConstruct_ValidationProps::AddVolume),
             R"#(Adds volume property for given shape (already mapped). Returns True if success, False in case of fail)#"  , py::arg("Shape"),  py::arg("Vol"))
        .def("AddCentroid",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const gp_Pnt & , const Standard_Boolean ) ) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , const gp_Pnt & , const Standard_Boolean ) >(&STEPConstruct_ValidationProps::AddCentroid),
             R"#(Adds centroid property for given shape (already mapped). Returns True if success, False in case of fail If instance is True, then centroid is assigned to an instance of component in assembly)#"  , py::arg("Shape"),  py::arg("Pnt"),  py::arg("instance")=static_cast<const Standard_Boolean>(Standard_False))
        .def("FindTarget",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , StepRepr_CharacterizedDefinition & , opencascade::handle<StepRepr_RepresentationContext> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & , StepRepr_CharacterizedDefinition & , opencascade::handle<StepRepr_RepresentationContext> & , const Standard_Boolean ) >(&STEPConstruct_ValidationProps::FindTarget),
             R"#(Finds target STEP entity to which validation props should be assigned, and corresponding context, starting from shape Returns True if success, False in case of fail)#"  , py::arg("S"),  py::arg("target"),  py::arg("Context"),  py::arg("instance")=static_cast<const Standard_Boolean>(Standard_False))
        .def("LoadProps",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( NCollection_Sequence<opencascade::handle<Standard_Transient> > & ) const) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( NCollection_Sequence<opencascade::handle<Standard_Transient> > & ) const>(&STEPConstruct_ValidationProps::LoadProps),
             R"#(Searches for entities of the type PropertyDefinitionRepresentation in the model and fills the sequence by them)#"  , py::arg("seq"))
        .def("GetPropNAUO",
             (opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ) const) static_cast<opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ) const>(&STEPConstruct_ValidationProps::GetPropNAUO),
             R"#(Returns CDSR associated with given PpD or NULL if not found (when, try GetPropSDR))#"  , py::arg("PD"))
        .def("GetPropPD",
             (opencascade::handle<StepBasic_ProductDefinition> (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ) const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ) const>(&STEPConstruct_ValidationProps::GetPropPD),
             R"#(Returns SDR associated with given PpD or NULL if not found (when, try GetPropCDSR))#"  , py::arg("PD"))
        .def("GetPropShape",
             (TopoDS_Shape (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const) static_cast<TopoDS_Shape (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const>(&STEPConstruct_ValidationProps::GetPropShape),
             R"#(Returns Shape associated with given SDR or Null Shape if not found)#"  , py::arg("ProdDef"))
        .def("GetPropShape",
             (TopoDS_Shape (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ) const) static_cast<TopoDS_Shape (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ) const>(&STEPConstruct_ValidationProps::GetPropShape),
             R"#(Returns Shape associated with given PpD or Null Shape if not found)#"  , py::arg("PD"))
        .def("GetPropReal",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_RepresentationItem> & , Standard_Real & , Standard_Boolean & ) const) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_RepresentationItem> & , Standard_Real & , Standard_Boolean & ) const>(&STEPConstruct_ValidationProps::GetPropReal),
             R"#(Returns value of Real-Valued property (Area or Volume) If Property is neither Area nor Volume, returns False Else returns True and isArea indicates whether property is area or volume)#"  , py::arg("item"),  py::arg("Val"),  py::arg("isArea"))
        .def("GetPropPnt",
             (Standard_Boolean (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , gp_Pnt & ) const) static_cast<Standard_Boolean (STEPConstruct_ValidationProps::*)( const opencascade::handle<StepRepr_RepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , gp_Pnt & ) const>(&STEPConstruct_ValidationProps::GetPropPnt),
             R"#(Returns value of Centriod property (or False if it is not))#"  , py::arg("item"),  py::arg("Context"),  py::arg("Pnt"))
        .def("SetAssemblyShape",
             (void (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & ) ) static_cast<void (STEPConstruct_ValidationProps::*)( const TopoDS_Shape & ) >(&STEPConstruct_ValidationProps::SetAssemblyShape),
             R"#(Sets current assembly shape SDR (for FindCDSR calls))#"  , py::arg("shape"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\STEPConstruct_ValidationProps.hxx
// ./opencascade\STEPConstruct_PointHasher.hxx
// ./opencascade\STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx
// ./opencascade\STEPConstruct_ExternRefs.hxx
// ./opencascade\STEPConstruct_Styles.hxx
// ./opencascade\STEPConstruct_Assembly.hxx
// ./opencascade\STEPConstruct_AP203Context.hxx
// ./opencascade\STEPConstruct.hxx
// ./opencascade\STEPConstruct_ContextTool.hxx
// ./opencascade\STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx
// ./opencascade\STEPConstruct_Tool.hxx
// ./opencascade\STEPConstruct_DataMapOfPointTransient.hxx
// ./opencascade\STEPConstruct_UnitContext.hxx
// ./opencascade\STEPConstruct_DataMapOfAsciiStringTransient.hxx
// ./opencascade\STEPConstruct_Part.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
