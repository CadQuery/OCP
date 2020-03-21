
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <V3d_Viewer.hxx>
#include <V3d_View.hxx>
#include <Graphic3d_Group.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
#include <Aspect_Grid.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <V3d_BadValue.hxx>
#include <V3d_UnMapped.hxx>
#include <Aspect_Grid.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <V3d_BadValue.hxx>
#include <V3d_CircularGrid.hxx>
#include <V3d_RectangularGrid.hxx>
#include <V3d_View.hxx>
#include <V3d_View.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_Group.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_Group.hxx>

// module includes
#include <V3d.hxx>
#include <V3d_AmbientLight.hxx>
#include <V3d_BadValue.hxx>
#include <V3d_CircularGrid.hxx>
#include <V3d_Coordinate.hxx>
#include <V3d_DirectionalLight.hxx>
#include <V3d_ImageDumpOptions.hxx>
#include <V3d_Light.hxx>
#include <V3d_ListOfLight.hxx>
#include <V3d_ListOfView.hxx>
#include <V3d_Parameter.hxx>
#include <V3d_Plane.hxx>
#include <V3d_PositionalLight.hxx>
#include <V3d_PositionLight.hxx>
#include <V3d_RectangularGrid.hxx>
#include <V3d_SpotLight.hxx>
#include <V3d_StereoDumpOptions.hxx>
#include <V3d_Trihedron.hxx>
#include <V3d_TypeOfAxe.hxx>
#include <V3d_TypeOfBackfacingModel.hxx>
#include <V3d_TypeOfLight.hxx>
#include <V3d_TypeOfOrientation.hxx>
#include <V3d_TypeOfPickCamera.hxx>
#include <V3d_TypeOfPickLight.hxx>
#include <V3d_TypeOfRepresentation.hxx>
#include <V3d_TypeOfShadingModel.hxx>
#include <V3d_TypeOfView.hxx>
#include <V3d_TypeOfVisualization.hxx>
#include <V3d_UnMapped.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
#include <V3d_ViewerPointer.hxx>
#include <V3d_ViewPointer.hxx>

// template related includes
// ./opencascade/V3d_ListOfView.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/V3d_ListOfLight.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_V3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("V3d"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<V3d , shared_ptr<V3d>>(m,"V3d");

    static_cast<py::class_<V3d , shared_ptr<V3d> >>(m.attr("V3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetProjAxis_s",
                    (gp_Dir (*)( const V3d_TypeOfOrientation ) ) static_cast<gp_Dir (*)( const V3d_TypeOfOrientation ) >(&V3d::GetProjAxis),
                    R"#(Determines the orientation vector corresponding to the predefined orientation type.)#"  , py::arg("theOrientation"))
        .def_static("TypeOfOrientationFromString_s",
                    (V3d_TypeOfOrientation (*)( Standard_CString ) ) static_cast<V3d_TypeOfOrientation (*)( Standard_CString ) >(&V3d::TypeOfOrientationFromString),
                    R"#(Returns the orientation type from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theTypeString"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_AmbientLight ,opencascade::handle<V3d_AmbientLight> , Graphic3d_CLight>>(m.attr("V3d_AmbientLight"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_AmbientLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_AmbientLight::*)() const>(&V3d_AmbientLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_AmbientLight::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_CircularGrid ,opencascade::handle<V3d_CircularGrid> , Aspect_CircularGrid>>(m.attr("V3d_CircularGrid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_CircularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_CircularGrid::*)() const>(&V3d_CircularGrid::DynamicType),
             R"#(None)#" )
        .def("SetColors",
             (void (V3d_CircularGrid::*)( const Quantity_Color & , const Quantity_Color & ) ) static_cast<void (V3d_CircularGrid::*)( const Quantity_Color & , const Quantity_Color & ) >(&V3d_CircularGrid::SetColors),
             R"#(None)#"  , py::arg("aColor"),  py::arg("aTenthColor"))
        .def("Display",
             (void (V3d_CircularGrid::*)() ) static_cast<void (V3d_CircularGrid::*)() >(&V3d_CircularGrid::Display),
             R"#(None)#" )
        .def("Erase",
             (void (V3d_CircularGrid::*)() const) static_cast<void (V3d_CircularGrid::*)() const>(&V3d_CircularGrid::Erase),
             R"#(None)#" )
        .def("IsDisplayed",
             (Standard_Boolean (V3d_CircularGrid::*)() const) static_cast<Standard_Boolean (V3d_CircularGrid::*)() const>(&V3d_CircularGrid::IsDisplayed),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_CircularGrid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_ImageDumpOptions , shared_ptr<V3d_ImageDumpOptions> >>(m.attr("V3d_ImageDumpOptions"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_Plane ,opencascade::handle<V3d_Plane> , Standard_Transient>>(m.attr("V3d_Plane"))
    // constructors
    // custom constructors
    // methods
        .def("Display",
             (void (V3d_Plane::*)( const opencascade::handle<V3d_View> & , const Quantity_Color & ) ) static_cast<void (V3d_Plane::*)( const opencascade::handle<V3d_View> & , const Quantity_Color & ) >(&V3d_Plane::Display),
             R"#(Display the plane representation in the choosen view.)#"  , py::arg("theView"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_GRAY))
        .def("ClipPlane",
             (const opencascade::handle<Graphic3d_ClipPlane> & (V3d_Plane::*)() const) static_cast<const opencascade::handle<Graphic3d_ClipPlane> & (V3d_Plane::*)() const>(&V3d_Plane::ClipPlane),
             R"#(Use this method to pass clipping plane implementation for standard clipping workflow.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_Plane::*)() const>(&V3d_Plane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_Plane::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_PositionLight ,opencascade::handle<V3d_PositionLight> , Graphic3d_CLight>>(m.attr("V3d_PositionLight"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_PositionLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_PositionLight::*)() const>(&V3d_PositionLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_PositionLight::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_RectangularGrid ,opencascade::handle<V3d_RectangularGrid> , Aspect_RectangularGrid>>(m.attr("V3d_RectangularGrid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_RectangularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_RectangularGrid::*)() const>(&V3d_RectangularGrid::DynamicType),
             R"#(None)#" )
        .def("SetColors",
             (void (V3d_RectangularGrid::*)( const Quantity_Color & , const Quantity_Color & ) ) static_cast<void (V3d_RectangularGrid::*)( const Quantity_Color & , const Quantity_Color & ) >(&V3d_RectangularGrid::SetColors),
             R"#(None)#"  , py::arg("aColor"),  py::arg("aTenthColor"))
        .def("Display",
             (void (V3d_RectangularGrid::*)() ) static_cast<void (V3d_RectangularGrid::*)() >(&V3d_RectangularGrid::Display),
             R"#(None)#" )
        .def("Erase",
             (void (V3d_RectangularGrid::*)() const) static_cast<void (V3d_RectangularGrid::*)() const>(&V3d_RectangularGrid::Erase),
             R"#(None)#" )
        .def("IsDisplayed",
             (Standard_Boolean (V3d_RectangularGrid::*)() const) static_cast<Standard_Boolean (V3d_RectangularGrid::*)() const>(&V3d_RectangularGrid::IsDisplayed),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_RectangularGrid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_Trihedron ,opencascade::handle<V3d_Trihedron> , Standard_Transient>>(m.attr("V3d_Trihedron"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_Trihedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_Trihedron::*)() const>(&V3d_Trihedron::DynamicType),
             R"#(None)#" )
        .def("SetWireframe",
             (void (V3d_Trihedron::*)( const Standard_Boolean ) ) static_cast<void (V3d_Trihedron::*)( const Standard_Boolean ) >(&V3d_Trihedron::SetWireframe),
             R"#(Switch wireframe / shaded trihedron.)#"  , py::arg("theAsWireframe"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_Trihedron::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_View ,opencascade::handle<V3d_View> , Standard_Transient>>(m.attr("V3d_View"))
    // constructors
    // custom constructors
    // methods
        .def("Redraw",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::Redraw),
             R"#(Redisplays the view even if there has not been any modification. Must be called if the view is shown. (Ex: DeIconification ) .)#" )
        .def("RedrawImmediate",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::RedrawImmediate),
             R"#(Updates layer of immediate presentations.)#" )
        .def("IsInvalidatedImmediate",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::IsInvalidatedImmediate),
             R"#(Returns true if immediate layer content has been invalidated.)#" )
        .def("InvalidateImmediate",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::InvalidateImmediate),
             R"#(Invalidates view content within immediate layer but does not redraw it.)#" )
        .def("AutoZFitMode",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::AutoZFitMode),
             R"#(returns TRUE if automatic z-fit mode is turned on.)#" )
        .def("AutoZFitScaleFactor",
             (Standard_Real (V3d_View::*)() const) static_cast<Standard_Real (V3d_View::*)() const>(&V3d_View::AutoZFitScaleFactor),
             R"#(returns scale factor parameter of automatic z-fit mode.)#" )
        .def("ActiveLightIterator",
             (V3d_ListOfLightIterator (V3d_View::*)() const) static_cast<V3d_ListOfLightIterator (V3d_View::*)() const>(&V3d_View::ActiveLightIterator),
             R"#(Return iterator for defined lights.)#" )
        .def("InitActiveLights",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::InitActiveLights),
             R"#(initializes an iteration on the active Lights.)#" )
        .def("MoreActiveLights",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::MoreActiveLights),
             R"#(returns true if there are more active Light(s) to return.)#" )
        .def("NextActiveLights",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::NextActiveLights),
             R"#(Go to the next active Light (if there is not, ActiveLight will raise an exception))#" )
        .def("ActiveLight",
             (const opencascade::handle<V3d_Light> & (V3d_View::*)() const) static_cast<const opencascade::handle<V3d_Light> & (V3d_View::*)() const>(&V3d_View::ActiveLight),
             R"#(None)#" )
        .def("Viewer",
             (opencascade::handle<V3d_Viewer> (V3d_View::*)() const) static_cast<opencascade::handle<V3d_Viewer> (V3d_View::*)() const>(&V3d_View::Viewer),
             R"#(Returns the viewer in which the view has been created.)#" )
        .def("Window",
             (const opencascade::handle<Aspect_Window> & (V3d_View::*)() const) static_cast<const opencascade::handle<Aspect_Window> & (V3d_View::*)() const>(&V3d_View::Window),
             R"#(Returns the Aspect Window associated with the view.)#" )
        .def("View",
             (const opencascade::handle<Graphic3d_CView> & (V3d_View::*)() const) static_cast<const opencascade::handle<Graphic3d_CView> & (V3d_View::*)() const>(&V3d_View::View),
             R"#(Returns the associated Graphic3d view.)#" )
        .def("WindowFitAll",
             (void (V3d_View::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (V3d_View::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&V3d_View::WindowFitAll),
             R"#(idem than WindowFit)#"  , py::arg("Xmin"),  py::arg("Ymin"),  py::arg("Xmax"),  py::arg("Ymax"))
        .def("ToPixMap",
             (Standard_Boolean (V3d_View::*)( Image_PixMap & , const Standard_Integer , const Standard_Integer , const Graphic3d_BufferType & , const Standard_Boolean , const V3d_StereoDumpOptions ) ) static_cast<Standard_Boolean (V3d_View::*)( Image_PixMap & , const Standard_Integer , const Standard_Integer , const Graphic3d_BufferType & , const Standard_Boolean , const V3d_StereoDumpOptions ) >(&V3d_View::ToPixMap),
             R"#(Dumps the full contents of the view to a pixmap. Internally this method calls Redraw() with an offscreen render buffer of requested target size (theWidth x theHeight), so that there is no need resizing a window control for making a dump of different size.)#"  , py::arg("theImage"),  py::arg("theWidth"),  py::arg("theHeight"),  py::arg("theBufferType")=static_cast<const Graphic3d_BufferType &>(Graphic3d_BT_RGB),  py::arg("theToAdjustAspect")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theStereoOptions")=static_cast<const V3d_StereoDumpOptions>(V3d_SDO_MONO))
        .def("AddClipPlane",
             (void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) >(&V3d_View::AddClipPlane),
             R"#(Adds clip plane to the view. The composition of clip planes truncates the rendering space to convex volume. Number of supported clip planes can be consulted by PlaneLimit method of associated Graphic3d_GraphicDriver. Please be aware that the planes which exceed the limit are ignored during rendering.)#"  , py::arg("thePlane"))
        .def("RemoveClipPlane",
             (void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) >(&V3d_View::RemoveClipPlane),
             R"#(Removes clip plane from the view.)#"  , py::arg("thePlane"))
        .def("SetClipPlanes",
             (void (V3d_View::*)( const Graphic3d_SequenceOfHClipPlane & ) ) static_cast<void (V3d_View::*)( const Graphic3d_SequenceOfHClipPlane & ) >(&V3d_View::SetClipPlanes),
             R"#(None)#"  , py::arg("thePlanes"))
        .def("DefaultCamera",
             (const opencascade::handle<Graphic3d_Camera> & (V3d_View::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (V3d_View::*)() const>(&V3d_View::DefaultCamera),
             R"#(Return default camera.)#" )
        .def("IsCullingEnabled",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::IsCullingEnabled),
             R"#(Returns flag value of objects culling mechanism)#" )
        .def("SetFrustumCulling",
             (void (V3d_View::*)( Standard_Boolean ) ) static_cast<void (V3d_View::*)( Standard_Boolean ) >(&V3d_View::SetFrustumCulling),
             R"#(Turn on/off automatic culling of objects outside frustum (ON by default))#"  , py::arg("theMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_View::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_View::*)() const>(&V3d_View::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("FocalReferencePoint",
             []( V3d_View &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.FocalReferencePoint(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Returns the position of point which emanating the projections.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_View::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_Viewer ,opencascade::handle<V3d_Viewer> , Standard_Transient>>(m.attr("V3d_Viewer"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_Viewer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_Viewer::*)() const>(&V3d_Viewer::DynamicType),
             R"#(None)#" )
        .def("Update",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::Update),
             R"#(Deprecated, Redraw() should be used instead.)#" )
        .def("Driver",
             (const opencascade::handle<Graphic3d_GraphicDriver> & (V3d_Viewer::*)() const) static_cast<const opencascade::handle<Graphic3d_GraphicDriver> & (V3d_Viewer::*)() const>(&V3d_Viewer::Driver),
             R"#(Return Graphic Driver instance.)#" )
        .def("StructureManager",
             (opencascade::handle<Graphic3d_StructureManager> (V3d_Viewer::*)() const) static_cast<opencascade::handle<Graphic3d_StructureManager> (V3d_Viewer::*)() const>(&V3d_Viewer::StructureManager),
             R"#(Returns the structure manager associated to this viewer.)#" )
        .def("DefaultRenderingParams",
             (const Graphic3d_RenderingParams & (V3d_Viewer::*)() const) static_cast<const Graphic3d_RenderingParams & (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultRenderingParams),
             R"#(Return default Rendering Parameters. By default these parameters are set in a new V3d_View.)#" )
        .def("SetDefaultRenderingParams",
             (void (V3d_Viewer::*)( const Graphic3d_RenderingParams & ) ) static_cast<void (V3d_Viewer::*)( const Graphic3d_RenderingParams & ) >(&V3d_Viewer::SetDefaultRenderingParams),
             R"#(Set default Rendering Parameters.)#"  , py::arg("theParams"))
        .def("SetDefaultBackgroundColor",
             (void (V3d_Viewer::*)( const Quantity_Color & ) ) static_cast<void (V3d_Viewer::*)( const Quantity_Color & ) >(&V3d_Viewer::SetDefaultBackgroundColor),
             R"#(Defines the default background colour of views attached to the viewer by supplying the color object)#"  , py::arg("theColor"))
        .def("GetGradientBackground",
             (const Aspect_GradientBackground & (V3d_Viewer::*)() const) static_cast<const Aspect_GradientBackground & (V3d_Viewer::*)() const>(&V3d_Viewer::GetGradientBackground),
             R"#(Returns the gradient background of the view.)#" )
        .def("SetDefaultBgGradientColors",
             (void (V3d_Viewer::*)( const Quantity_Color & , const Quantity_Color & , const Aspect_GradientFillMethod ) ) static_cast<void (V3d_Viewer::*)( const Quantity_Color & , const Quantity_Color & , const Aspect_GradientFillMethod ) >(&V3d_Viewer::SetDefaultBgGradientColors),
             R"#(Defines the default gradient background colours of views attached to the viewer by supplying the colour objects)#"  , py::arg("theColor1"),  py::arg("theColor2"),  py::arg("theFillStyle")=static_cast<const Aspect_GradientFillMethod>(Aspect_GFM_HOR))
        .def("DefaultViewSize",
             (Standard_Real (V3d_Viewer::*)() const) static_cast<Standard_Real (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultViewSize),
             R"#(Returns the default size of the view.)#" )
        .def("DefaultViewProj",
             (V3d_TypeOfOrientation (V3d_Viewer::*)() const) static_cast<V3d_TypeOfOrientation (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultViewProj),
             R"#(Returns the default Projection.)#" )
        .def("SetDefaultViewProj",
             (void (V3d_Viewer::*)( const V3d_TypeOfOrientation ) ) static_cast<void (V3d_Viewer::*)( const V3d_TypeOfOrientation ) >(&V3d_Viewer::SetDefaultViewProj),
             R"#(Sets the default projection for creating views in the viewer.)#"  , py::arg("theOrientation"))
        .def("DefaultVisualization",
             (V3d_TypeOfVisualization (V3d_Viewer::*)() const) static_cast<V3d_TypeOfVisualization (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultVisualization),
             R"#(Returns the default type of Visualization.)#" )
        .def("SetDefaultVisualization",
             (void (V3d_Viewer::*)( const V3d_TypeOfVisualization ) ) static_cast<void (V3d_Viewer::*)( const V3d_TypeOfVisualization ) >(&V3d_Viewer::SetDefaultVisualization),
             R"#(Gives the default visualization mode.)#"  , py::arg("theType"))
        .def("DefaultShadingModel",
             (Graphic3d_TypeOfShadingModel (V3d_Viewer::*)() const) static_cast<Graphic3d_TypeOfShadingModel (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultShadingModel),
             R"#(Returns the default type of Shading)#" )
        .def("SetDefaultShadingModel",
             (void (V3d_Viewer::*)( const Graphic3d_TypeOfShadingModel ) ) static_cast<void (V3d_Viewer::*)( const Graphic3d_TypeOfShadingModel ) >(&V3d_Viewer::SetDefaultShadingModel),
             R"#(Gives the default type of SHADING.)#"  , py::arg("theType"))
        .def("DefaultTypeOfView",
             (V3d_TypeOfView (V3d_Viewer::*)() const) static_cast<V3d_TypeOfView (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultTypeOfView),
             R"#(Returns the default type of View (orthographic or perspective projection) to be returned by CreateView() method.)#" )
        .def("SetDefaultTypeOfView",
             (void (V3d_Viewer::*)( const V3d_TypeOfView ) ) static_cast<void (V3d_Viewer::*)( const V3d_TypeOfView ) >(&V3d_Viewer::SetDefaultTypeOfView),
             R"#(Set the default type of View (orthographic or perspective projection) to be returned by CreateView() method.)#"  , py::arg("theType"))
        .def("DefaultBackgroundColor",
             (Quantity_Color (V3d_Viewer::*)() const) static_cast<Quantity_Color (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultBackgroundColor),
             R"#(Returns the default background colour object.)#" )
        .def("DefaultBgGradientColors",
             (void (V3d_Viewer::*)( Quantity_Color & , Quantity_Color & ) const) static_cast<void (V3d_Viewer::*)( Quantity_Color & , Quantity_Color & ) const>(&V3d_Viewer::DefaultBgGradientColors),
             R"#(Returns the gradient background colour objects of the view.)#"  , py::arg("theColor1"),  py::arg("theColor2"))
        .def("AddZLayer",
             (Standard_Boolean (V3d_Viewer::*)( Graphic3d_ZLayerId & , const Graphic3d_ZLayerSettings & ) ) static_cast<Standard_Boolean (V3d_Viewer::*)( Graphic3d_ZLayerId & , const Graphic3d_ZLayerSettings & ) >(&V3d_Viewer::AddZLayer),
             R"#(Add a new top-level Z layer to all managed views and get its ID as <theLayerId> value. The Z layers are controlled entirely by viewer, it is not possible to add a layer to a particular view. Custom layers will be inserted before Graphic3d_ZLayerId_Top (e.g. between Graphic3d_ZLayerId_Default and before Graphic3d_ZLayerId_Top).)#"  , py::arg("theLayerId"),  py::arg("theSettings")=static_cast<const Graphic3d_ZLayerSettings &>(Graphic3d_ZLayerSettings ( )))
        .def("ActiveViewIterator",
             (V3d_ListOfViewIterator (V3d_Viewer::*)() const) static_cast<V3d_ListOfViewIterator (V3d_Viewer::*)() const>(&V3d_Viewer::ActiveViewIterator),
             R"#(Return an iterator for active views.)#" )
        .def("InitActiveViews",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::InitActiveViews),
             R"#(Initializes an internal iterator on the active views.)#" )
        .def("MoreActiveViews",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::MoreActiveViews),
             R"#(Returns true if there are more active view(s) to return.)#" )
        .def("NextActiveViews",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::NextActiveViews),
             R"#(Go to the next active view (if there is not, ActiveView will raise an exception))#" )
        .def("ActiveView",
             (const opencascade::handle<V3d_View> & (V3d_Viewer::*)() const) static_cast<const opencascade::handle<V3d_View> & (V3d_Viewer::*)() const>(&V3d_Viewer::ActiveView),
             R"#(None)#" )
        .def("LastActiveView",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::LastActiveView),
             R"#(returns true if there is only one active view.)#" )
        .def("DefinedViewIterator",
             (V3d_ListOfViewIterator (V3d_Viewer::*)() const) static_cast<V3d_ListOfViewIterator (V3d_Viewer::*)() const>(&V3d_Viewer::DefinedViewIterator),
             R"#(Return an iterator for defined views.)#" )
        .def("InitDefinedViews",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::InitDefinedViews),
             R"#(Initializes an internal iterator on the Defined views.)#" )
        .def("MoreDefinedViews",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::MoreDefinedViews),
             R"#(returns true if there are more Defined view(s) to return.)#" )
        .def("NextDefinedViews",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::NextDefinedViews),
             R"#(Go to the next Defined view (if there is not, DefinedView will raise an exception))#" )
        .def("DefinedView",
             (const opencascade::handle<V3d_View> & (V3d_Viewer::*)() const) static_cast<const opencascade::handle<V3d_View> & (V3d_Viewer::*)() const>(&V3d_Viewer::DefinedView),
             R"#(None)#" )
        .def("ActiveLightIterator",
             (V3d_ListOfLightIterator (V3d_Viewer::*)() const) static_cast<V3d_ListOfLightIterator (V3d_Viewer::*)() const>(&V3d_Viewer::ActiveLightIterator),
             R"#(Return an iterator for defined lights.)#" )
        .def("InitActiveLights",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::InitActiveLights),
             R"#(Initializes an internal iteratator on the active Lights.)#" )
        .def("MoreActiveLights",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::MoreActiveLights),
             R"#(returns true if there are more active Light(s) to return.)#" )
        .def("NextActiveLights",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::NextActiveLights),
             R"#(Go to the next active Light (if there is not, ActiveLight() will raise an exception))#" )
        .def("ActiveLight",
             (const opencascade::handle<V3d_Light> & (V3d_Viewer::*)() const) static_cast<const opencascade::handle<V3d_Light> & (V3d_Viewer::*)() const>(&V3d_Viewer::ActiveLight),
             R"#(None)#" )
        .def("DefinedLightIterator",
             (V3d_ListOfLightIterator (V3d_Viewer::*)() const) static_cast<V3d_ListOfLightIterator (V3d_Viewer::*)() const>(&V3d_Viewer::DefinedLightIterator),
             R"#(Return an iterator for defined lights.)#" )
        .def("InitDefinedLights",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::InitDefinedLights),
             R"#(Initializes an internal iterattor on the Defined Lights.)#" )
        .def("MoreDefinedLights",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::MoreDefinedLights),
             R"#(Returns true if there are more Defined Light(s) to return.)#" )
        .def("NextDefinedLights",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::NextDefinedLights),
             R"#(Go to the next Defined Light (if there is not, DefinedLight() will raise an exception))#" )
        .def("DefinedLight",
             (const opencascade::handle<V3d_Light> & (V3d_Viewer::*)() const) static_cast<const opencascade::handle<V3d_Light> & (V3d_Viewer::*)() const>(&V3d_Viewer::DefinedLight),
             R"#(None)#" )
        .def("ComputedMode",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::ComputedMode),
             R"#(returns true if the computed mode can be used.)#" )
        .def("SetComputedMode",
             (void (V3d_Viewer::*)( const Standard_Boolean ) ) static_cast<void (V3d_Viewer::*)( const Standard_Boolean ) >(&V3d_Viewer::SetComputedMode),
             R"#(Set if the computed mode can be used.)#"  , py::arg("theMode"))
        .def("DefaultComputedMode",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultComputedMode),
             R"#(returns true if by default the computed mode must be used.)#" )
        .def("SetDefaultComputedMode",
             (void (V3d_Viewer::*)( const Standard_Boolean ) ) static_cast<void (V3d_Viewer::*)( const Standard_Boolean ) >(&V3d_Viewer::SetDefaultComputedMode),
             R"#(Set if by default the computed mode must be used.)#"  , py::arg("theMode"))
        .def("PrivilegedPlane",
             (const gp_Ax3 & (V3d_Viewer::*)() const) static_cast<const gp_Ax3 & (V3d_Viewer::*)() const>(&V3d_Viewer::PrivilegedPlane),
             R"#()#" )
        .def("GridEcho",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::GridEcho),
             R"#(Returns TRUE when grid echo must be displayed at hit point.)#" )
        .def("GridType",
             (Aspect_GridType (V3d_Viewer::*)() const) static_cast<Aspect_GridType (V3d_Viewer::*)() const>(&V3d_Viewer::GridType),
             R"#(Returns the current grid type defined in <me>.)#" )
        .def("SetDefaultBackgroundColor",
             (void (V3d_Viewer::*)( const Quantity_TypeOfColor , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (V3d_Viewer::*)( const Quantity_TypeOfColor , const Standard_Real , const Standard_Real , const Standard_Real ) >(&V3d_Viewer::SetDefaultBackgroundColor),
             R"#(Defines the default base colour of views attached to the Viewer by supplying the type of colour definition and the three component values.)#"  , py::arg("theType"),  py::arg("theV1"),  py::arg("theV2"),  py::arg("theV3"))
    // methods using call by reference i.s.o. return
        .def("DefaultBackgroundColor",
             []( V3d_Viewer &self , const Quantity_TypeOfColor theType ){ Standard_Real  theV1; Standard_Real  theV2; Standard_Real  theV3; self.DefaultBackgroundColor(theType,theV1,theV2,theV3); return std::make_tuple(theV1,theV2,theV3); },
             R"#(None)#"  , py::arg("theType"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_Viewer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_DirectionalLight ,opencascade::handle<V3d_DirectionalLight> , V3d_PositionLight>>(m.attr("V3d_DirectionalLight"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_DirectionalLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_DirectionalLight::*)() const>(&V3d_DirectionalLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_DirectionalLight::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_PositionalLight ,opencascade::handle<V3d_PositionalLight> , V3d_PositionLight>>(m.attr("V3d_PositionalLight"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_PositionalLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_PositionalLight::*)() const>(&V3d_PositionalLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_PositionalLight::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<V3d_SpotLight ,opencascade::handle<V3d_SpotLight> , V3d_PositionLight>>(m.attr("V3d_SpotLight"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_SpotLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_SpotLight::*)() const>(&V3d_SpotLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_SpotLight::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/V3d_BadValue.hxx
// ./opencascade/V3d_TypeOfPickLight.hxx
// ./opencascade/V3d_PositionLight.hxx
// ./opencascade/V3d_ListOfView.hxx
// ./opencascade/V3d.hxx
// ./opencascade/V3d_DirectionalLight.hxx
// ./opencascade/V3d_Parameter.hxx
// ./opencascade/V3d_AmbientLight.hxx
// ./opencascade/V3d_View.hxx
// ./opencascade/V3d_TypeOfLight.hxx
// ./opencascade/V3d_PositionalLight.hxx
// ./opencascade/V3d_TypeOfBackfacingModel.hxx
// ./opencascade/V3d_UnMapped.hxx
// ./opencascade/V3d_TypeOfView.hxx
// ./opencascade/V3d_TypeOfOrientation.hxx
// ./opencascade/V3d_TypeOfVisualization.hxx
// ./opencascade/V3d_Viewer.hxx
// ./opencascade/V3d_Plane.hxx
// ./opencascade/V3d_ListOfLight.hxx
// ./opencascade/V3d_TypeOfPickCamera.hxx
// ./opencascade/V3d_Trihedron.hxx
// ./opencascade/V3d_TypeOfRepresentation.hxx
// ./opencascade/V3d_Light.hxx
// ./opencascade/V3d_Coordinate.hxx
// ./opencascade/V3d_ViewPointer.hxx
// ./opencascade/V3d_SpotLight.hxx
// ./opencascade/V3d_TypeOfShadingModel.hxx
// ./opencascade/V3d_TypeOfAxe.hxx
// ./opencascade/V3d_ViewerPointer.hxx
// ./opencascade/V3d_StereoDumpOptions.hxx
// ./opencascade/V3d_RectangularGrid.hxx
// ./opencascade/V3d_CircularGrid.hxx
// ./opencascade/V3d_ImageDumpOptions.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<V3d_View> >(m,"V3d_ListOfView");
    register_template_NCollection_List<opencascade::handle<Graphic3d_CLight> >(m,"V3d_ListOfLight");


// exceptions
register_occ_exception<V3d_BadValue>(m, "V3d_BadValue");
register_occ_exception<V3d_UnMapped>(m, "V3d_UnMapped");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
