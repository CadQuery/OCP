
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <V3d_View.hxx>
#include <StdSelect_Shape.hxx>
#include <StdSelect_BRepSelectionTool.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <StdSelect_Prs.hxx>
#include <StdSelect_Shape.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Graphic3d_StructureManager.hxx>

// module includes
#include <StdSelect.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <StdSelect_BRepSelectionTool.hxx>
#include <StdSelect_DisplayMode.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <StdSelect_IndexedDataMapOfOwnerPrs.hxx>
#include <StdSelect_Prs.hxx>
#include <StdSelect_SensitivityMode.hxx>
#include <StdSelect_Shape.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <StdSelect_TypeOfEdge.hxx>
#include <StdSelect_TypeOfFace.hxx>
#include <StdSelect_TypeOfResult.hxx>
#include <StdSelect_TypeOfSelectionImage.hxx>
#include <StdSelect_ViewerSelector3d.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Prs3d_Projector.hxx>

// Module definiiton
void register_StdSelect(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdSelect"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdSelect , shared_ptr<StdSelect>>(m,"StdSelect");

    static_cast<py::class_<StdSelect , shared_ptr<StdSelect> >>(m.attr("StdSelect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdSelect_BRepOwner ,opencascade::handle<StdSelect_BRepOwner> , SelectMgr_EntityOwner>>(m.attr("StdSelect_BRepOwner"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdSelect_BRepOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdSelect_BRepOwner::*)() const>(&StdSelect_BRepOwner::DynamicType),
             R"#(None)#" )
        .def("HasShape",
             (Standard_Boolean (StdSelect_BRepOwner::*)() const) static_cast<Standard_Boolean (StdSelect_BRepOwner::*)() const>(&StdSelect_BRepOwner::HasShape),
             R"#(returns False if no shape was set)#" )
        .def("Shape",
             (const TopoDS_Shape & (StdSelect_BRepOwner::*)() const) static_cast<const TopoDS_Shape & (StdSelect_BRepOwner::*)() const>(&StdSelect_BRepOwner::Shape),
             R"#(Returns the shape.)#" )
        .def("HasHilightMode",
             (Standard_Boolean (StdSelect_BRepOwner::*)() const) static_cast<Standard_Boolean (StdSelect_BRepOwner::*)() const>(&StdSelect_BRepOwner::HasHilightMode),
             R"#(Returns true if this framework has a highlight mode defined for it.)#" )
        .def("SetHilightMode",
             (void (StdSelect_BRepOwner::*)( const Standard_Integer ) ) static_cast<void (StdSelect_BRepOwner::*)( const Standard_Integer ) >(&StdSelect_BRepOwner::SetHilightMode),
             R"#(Sets the highlight mode for this framework. This defines the type of display used to highlight the owner of the shape when it is detected by the selector. The default type of display is wireframe, defined by the index 0.)#"  , py::arg("theMode"))
        .def("ResetHilightMode",
             (void (StdSelect_BRepOwner::*)() ) static_cast<void (StdSelect_BRepOwner::*)() >(&StdSelect_BRepOwner::ResetHilightMode),
             R"#(Resets the higlight mode for this framework. This defines the type of display used to highlight the owner of the shape when it is detected by the selector. The default type of display is wireframe, defined by the index 0.)#" )
        .def("HilightMode",
             (Standard_Integer (StdSelect_BRepOwner::*)() const) static_cast<Standard_Integer (StdSelect_BRepOwner::*)() const>(&StdSelect_BRepOwner::HilightMode),
             R"#(Returns the highlight mode for this framework. This defines the type of display used to highlight the owner of the shape when it is detected by the selector. The default type of display is wireframe, defined by the index 0.)#" )
        .def("IsHilighted",
             (Standard_Boolean (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) const) static_cast<Standard_Boolean (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) const>(&StdSelect_BRepOwner::IsHilighted),
             R"#(Returns true if an object with the selection mode aMode is highlighted in the presentation manager aPM.)#"  , py::arg("aPM"),  py::arg("aMode")=static_cast<const Standard_Integer>(0))
        .def("HilightWithColor",
             (void (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) ) static_cast<void (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) >(&StdSelect_BRepOwner::HilightWithColor),
             R"#(None)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Unhilight",
             (void (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&StdSelect_BRepOwner::Unhilight),
             R"#(Removes highlighting from the type of shape identified the selection mode aMode in the presentation manager aPM.)#"  , py::arg("aPM"),  py::arg("aMode")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (StdSelect_BRepOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&StdSelect_BRepOwner::Clear),
             R"#(Clears the presentation manager object aPM of all shapes with the selection mode aMode.)#"  , py::arg("aPM"),  py::arg("aMode")=static_cast<const Standard_Integer>(0))
        .def("SetLocation",
             (void (StdSelect_BRepOwner::*)( const TopLoc_Location & ) ) static_cast<void (StdSelect_BRepOwner::*)( const TopLoc_Location & ) >(&StdSelect_BRepOwner::SetLocation),
             R"#(None)#"  , py::arg("aLoc"))
        .def("UpdateHighlightTrsf",
             (void (StdSelect_BRepOwner::*)( const opencascade::handle<V3d_Viewer> & , const opencascade::handle<PrsMgr_PresentationManager3d> & , const Standard_Integer ) ) static_cast<void (StdSelect_BRepOwner::*)( const opencascade::handle<V3d_Viewer> & , const opencascade::handle<PrsMgr_PresentationManager3d> & , const Standard_Integer ) >(&StdSelect_BRepOwner::UpdateHighlightTrsf),
             R"#(Implements immediate application of location transformation of parent object to dynamic highlight structure)#"  , py::arg("theViewer"),  py::arg("theManager"),  py::arg("theDispMode"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdSelect_BRepOwner::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdSelect_BRepSelectionTool , shared_ptr<StdSelect_BRepSelectionTool>>(m,"StdSelect_BRepSelectionTool");

    static_cast<py::class_<StdSelect_BRepSelectionTool , shared_ptr<StdSelect_BRepSelectionTool> >>(m.attr("StdSelect_BRepSelectionTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetStandardPriority_s",
                    (Standard_Integer (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&StdSelect_BRepSelectionTool::GetStandardPriority),
                    R"#(Returns the standard priority of the shape aShap having the type aType. This priority is passed to a StdSelect_BRepOwner object. You can use the function Load to modify the selection priority of an owner to make one entity more selectable than another one.)#"  , py::arg("theShape"),  py::arg("theType"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdSelect_EdgeFilter ,opencascade::handle<StdSelect_EdgeFilter> , SelectMgr_Filter>>(m.attr("StdSelect_EdgeFilter"))
    // constructors
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (StdSelect_EdgeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const) static_cast<Standard_Boolean (StdSelect_EdgeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const>(&StdSelect_EdgeFilter::IsOk),
             R"#(None)#"  , py::arg("anobj"))
        .def("ActsOn",
             (Standard_Boolean (StdSelect_EdgeFilter::*)( const TopAbs_ShapeEnum ) const) static_cast<Standard_Boolean (StdSelect_EdgeFilter::*)( const TopAbs_ShapeEnum ) const>(&StdSelect_EdgeFilter::ActsOn),
             R"#(None)#"  , py::arg("aStandardMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdSelect_EdgeFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdSelect_EdgeFilter::*)() const>(&StdSelect_EdgeFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdSelect_EdgeFilter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdSelect_FaceFilter ,opencascade::handle<StdSelect_FaceFilter> , SelectMgr_Filter>>(m.attr("StdSelect_FaceFilter"))
    // constructors
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (StdSelect_FaceFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const) static_cast<Standard_Boolean (StdSelect_FaceFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const>(&StdSelect_FaceFilter::IsOk),
             R"#(None)#"  , py::arg("anobj"))
        .def("ActsOn",
             (Standard_Boolean (StdSelect_FaceFilter::*)( const TopAbs_ShapeEnum ) const) static_cast<Standard_Boolean (StdSelect_FaceFilter::*)( const TopAbs_ShapeEnum ) const>(&StdSelect_FaceFilter::ActsOn),
             R"#(None)#"  , py::arg("aStandardMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdSelect_FaceFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdSelect_FaceFilter::*)() const>(&StdSelect_FaceFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdSelect_FaceFilter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdSelect_Prs , shared_ptr<StdSelect_Prs> >>(m.attr("StdSelect_Prs"))
    // constructors
    // custom constructors
    // methods
        .def("Manager",
             (const opencascade::handle<Graphic3d_StructureManager> & (StdSelect_Prs::*)() const) static_cast<const opencascade::handle<Graphic3d_StructureManager> & (StdSelect_Prs::*)() const>(&StdSelect_Prs::Manager),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdSelect_Prs::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdSelect_Prs::*)() const>(&StdSelect_Prs::DynamicType),
             R"#(None)#" )
        .def("Manager",
             (const opencascade::handle<Graphic3d_StructureManager> & (StdSelect_Prs::*)() const) static_cast<const opencascade::handle<Graphic3d_StructureManager> & (StdSelect_Prs::*)() const>(&StdSelect_Prs::Manager),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdSelect_Prs::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdSelect_Shape ,opencascade::handle<StdSelect_Shape> , PrsMgr_PresentableObject>>(m.attr("StdSelect_Shape"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdSelect_Shape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdSelect_Shape::*)() const>(&StdSelect_Shape::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (StdSelect_Shape::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Presentation> & , const Standard_Integer ) ) static_cast<void (StdSelect_Shape::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Presentation> & , const Standard_Integer ) >(&StdSelect_Shape::Compute),
             R"#(None)#"  , py::arg("aPresentationManager"),  py::arg("aPresentation"),  py::arg("aMode")=static_cast<const Standard_Integer>(0))
        .def("Compute",
             (void (StdSelect_Shape::*)( const opencascade::handle<Prs3d_Projector> & , const opencascade::handle<Geom_Transformation> & , const opencascade::handle<Prs3d_Presentation> & ) ) static_cast<void (StdSelect_Shape::*)( const opencascade::handle<Prs3d_Projector> & , const opencascade::handle<Geom_Transformation> & , const opencascade::handle<Prs3d_Presentation> & ) >(&StdSelect_Shape::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("Shape",
             (const TopoDS_Shape & (StdSelect_Shape::*)() const) static_cast<const TopoDS_Shape & (StdSelect_Shape::*)() const>(&StdSelect_Shape::Shape),
             R"#(None)#" )
        .def("Shape",
             (void (StdSelect_Shape::*)( const TopoDS_Shape & ) ) static_cast<void (StdSelect_Shape::*)( const TopoDS_Shape & ) >(&StdSelect_Shape::Shape),
             R"#(None)#"  , py::arg("theShape"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdSelect_Shape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdSelect_ShapeTypeFilter ,opencascade::handle<StdSelect_ShapeTypeFilter> , SelectMgr_Filter>>(m.attr("StdSelect_ShapeTypeFilter"))
    // constructors
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (StdSelect_ShapeTypeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const) static_cast<Standard_Boolean (StdSelect_ShapeTypeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const>(&StdSelect_ShapeTypeFilter::IsOk),
             R"#(None)#"  , py::arg("anobj"))
        .def("Type",
             (TopAbs_ShapeEnum (StdSelect_ShapeTypeFilter::*)() const) static_cast<TopAbs_ShapeEnum (StdSelect_ShapeTypeFilter::*)() const>(&StdSelect_ShapeTypeFilter::Type),
             R"#(Returns the type of shape selected by the filter.)#" )
        .def("ActsOn",
             (Standard_Boolean (StdSelect_ShapeTypeFilter::*)( const TopAbs_ShapeEnum ) const) static_cast<Standard_Boolean (StdSelect_ShapeTypeFilter::*)( const TopAbs_ShapeEnum ) const>(&StdSelect_ShapeTypeFilter::ActsOn),
             R"#(None)#"  , py::arg("aStandardMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdSelect_ShapeTypeFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdSelect_ShapeTypeFilter::*)() const>(&StdSelect_ShapeTypeFilter::DynamicType),
             R"#(None)#" )
        .def("Type",
             (TopAbs_ShapeEnum (StdSelect_ShapeTypeFilter::*)() const) static_cast<TopAbs_ShapeEnum (StdSelect_ShapeTypeFilter::*)() const>(&StdSelect_ShapeTypeFilter::Type),
             R"#(Returns the type of shape selected by the filter.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdSelect_ShapeTypeFilter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdSelect_ViewerSelector3d ,opencascade::handle<StdSelect_ViewerSelector3d> , SelectMgr_ViewerSelector>>(m.attr("StdSelect_ViewerSelector3d"))
    // constructors
    // custom constructors
    // methods
        .def("PixelTolerance",
             (Standard_Integer (StdSelect_ViewerSelector3d::*)() const) static_cast<Standard_Integer (StdSelect_ViewerSelector3d::*)() const>(&StdSelect_ViewerSelector3d::PixelTolerance),
             R"#(Returns the pixel tolerance.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdSelect_ViewerSelector3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdSelect_ViewerSelector3d::*)() const>(&StdSelect_ViewerSelector3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdSelect_ViewerSelector3d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StdSelect_BRepSelectionTool.hxx
// ./opencascade/StdSelect_EdgeFilter.hxx
// ./opencascade/StdSelect_ViewerSelector3d.hxx
// ./opencascade/StdSelect_DisplayMode.hxx
// ./opencascade/StdSelect_BRepOwner.hxx
// ./opencascade/StdSelect.hxx
// ./opencascade/StdSelect_FaceFilter.hxx
// ./opencascade/StdSelect_Shape.hxx
// ./opencascade/StdSelect_ShapeTypeFilter.hxx
// ./opencascade/StdSelect_TypeOfFace.hxx
// ./opencascade/StdSelect_SensitivityMode.hxx
// ./opencascade/StdSelect_TypeOfEdge.hxx
// ./opencascade/StdSelect_IndexedDataMapOfOwnerPrs.hxx
// ./opencascade/StdSelect_TypeOfResult.hxx
// ./opencascade/StdSelect_TypeOfSelectionImage.hxx
// ./opencascade/StdSelect_Prs.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
