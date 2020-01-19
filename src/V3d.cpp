
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Aspect_Grid.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <V3d_BadValue.hxx>
#include <V3d_UnMapped.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_Group.hxx>
#include <V3d_Viewer.hxx>
#include <Graphic3d_Group.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
#include <Aspect_Grid.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <V3d_BadValue.hxx>
#include <V3d_CircularGrid.hxx>
#include <V3d_RectangularGrid.hxx>
#include <V3d_View.hxx>
#include <V3d_View.hxx>
#include <V3d_View.hxx>
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
#include "NCollection.hxx"
// ./opencascade/V3d_ListOfLight.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_V3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("V3d"));


//Python trampoline classes

// classes

    register_default_constructor<V3d , shared_ptr<V3d>>(m,"V3d");

    static_cast<py::class_<V3d , shared_ptr<V3d>  >>(m.attr("V3d"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetProjAxis_s",
                    (gp_Dir (*)( const V3d_TypeOfOrientation  ) ) static_cast<gp_Dir (*)( const V3d_TypeOfOrientation  ) >(&V3d::GetProjAxis),
                    R"#(Determines the orientation vector corresponding to the predefined orientation type.)#"  , py::arg("theOrientation"))
        .def_static("ArrowOfRadius_s",
                    (void (*)( const opencascade::handle<Graphic3d_Group> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_Group> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d::ArrowOfRadius),
                    R"#(Compute the graphic structure of arrow. X0,Y0,Z0 : coordinate of the arrow. DX,DY,DZ : Direction of the arrow. Alpha : Angle of arrow. Lng : Length of arrow.)#"  , py::arg("garrow"),  py::arg("X0"),  py::arg("Y0"),  py::arg("Z0"),  py::arg("DX"),  py::arg("DY"),  py::arg("DZ"),  py::arg("Alpha"),  py::arg("Lng"))
        .def_static("CircleInPlane_s",
                    (void (*)( const opencascade::handle<Graphic3d_Group> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_Group> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d::CircleInPlane),
                    R"#(Compute the graphic structure of circle. X0,Y0,Z0 : Center of circle. VX,VY,VZ : Axis of circle. Radius : Radius of circle.)#"  , py::arg("gcircle"),  py::arg("X0"),  py::arg("Y0"),  py::arg("Z0"),  py::arg("VX"),  py::arg("VY"),  py::arg("VZ"),  py::arg("Radius"))
        .def_static("SwitchViewsinWindow_s",
                    (void (*)( const opencascade::handle<V3d_View> & ,  const opencascade::handle<V3d_View> &  ) ) static_cast<void (*)( const opencascade::handle<V3d_View> & ,  const opencascade::handle<V3d_View> &  ) >(&V3d::SwitchViewsinWindow),
                    R"#(None)#"  , py::arg("aPreviousView"),  py::arg("aNextView"))
        .def_static("TypeOfOrientationToString_s",
                    (Standard_CString (*)( V3d_TypeOfOrientation  ) ) static_cast<Standard_CString (*)( V3d_TypeOfOrientation  ) >(&V3d::TypeOfOrientationToString),
                    R"#(Returns the string name for a given orientation type.)#"  , py::arg("theType"))
        .def_static("TypeOfOrientationFromString_s",
                    (V3d_TypeOfOrientation (*)( Standard_CString  ) ) static_cast<V3d_TypeOfOrientation (*)( Standard_CString  ) >(&V3d::TypeOfOrientationFromString),
                    R"#(Returns the orientation type from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theTypeString"))
        .def_static("TypeOfOrientationFromString_s",
                    (Standard_Boolean (*)( const Standard_CString ,  V3d_TypeOfOrientation &  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  V3d_TypeOfOrientation &  ) >(&V3d::TypeOfOrientationFromString),
                    R"#(Determines the shape type from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theTypeString"),  py::arg("theType"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_AmbientLight ,opencascade::handle<V3d_AmbientLight>  , Graphic3d_CLight >>(m.attr("V3d_AmbientLight"))
        .def(py::init< const Quantity_Color & >()  , py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE) )
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const Quantity_Color & >()  , py::arg("theViewer"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_AmbientLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_AmbientLight::*)() const>(&V3d_AmbientLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_AmbientLight::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_AmbientLight::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_CircularGrid ,opencascade::handle<V3d_CircularGrid>  , Aspect_CircularGrid >>(m.attr("V3d_CircularGrid"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_CircularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_CircularGrid::*)() const>(&V3d_CircularGrid::DynamicType),
             R"#(None)#" )
        .def("SetColors",
             (void (V3d_CircularGrid::*)( const Quantity_Color & ,  const Quantity_Color &  ) ) static_cast<void (V3d_CircularGrid::*)( const Quantity_Color & ,  const Quantity_Color &  ) >(&V3d_CircularGrid::SetColors),
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
        .def("SetGraphicValues",
             (void (V3d_CircularGrid::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_CircularGrid::*)( const Standard_Real ,  const Standard_Real  ) >(&V3d_CircularGrid::SetGraphicValues),
             R"#(None)#"  , py::arg("Radius"),  py::arg("OffSet"))
    // methods using call by reference i.s.o. return
        .def("GraphicValues",
             []( V3d_CircularGrid &self   ){ Standard_Real  Radius; Standard_Real  OffSet; self.GraphicValues(Radius,OffSet); return std::make_tuple(Radius,OffSet); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_CircularGrid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_CircularGrid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_Plane ,opencascade::handle<V3d_Plane>  , Standard_Transient >>(m.attr("V3d_Plane"))
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theA")=static_cast<const Standard_Real>(0.0),  py::arg("theB")=static_cast<const Standard_Real>(0.0),  py::arg("theC")=static_cast<const Standard_Real>(1.0),  py::arg("theD")=static_cast<const Standard_Real>(0.0) )
    // methods
        .def("SetPlane",
             (void (V3d_Plane::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_Plane::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_Plane::SetPlane),
             R"#(Change plane equation.)#"  , py::arg("theA"),  py::arg("theB"),  py::arg("theC"),  py::arg("theD"))
        .def("Display",
             (void (V3d_Plane::*)( const opencascade::handle<V3d_View> & ,  const Quantity_Color &  ) ) static_cast<void (V3d_Plane::*)( const opencascade::handle<V3d_View> & ,  const Quantity_Color &  ) >(&V3d_Plane::Display),
             R"#(Display the plane representation in the choosen view.)#"  , py::arg("theView"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_GRAY))
        .def("Erase",
             (void (V3d_Plane::*)() ) static_cast<void (V3d_Plane::*)() >(&V3d_Plane::Erase),
             R"#(Erase the plane representation.)#" )
        .def("IsDisplayed",
             (Standard_Boolean (V3d_Plane::*)() const) static_cast<Standard_Boolean (V3d_Plane::*)() const>(&V3d_Plane::IsDisplayed),
             R"#(Returns TRUE when the plane representation is displayed.)#" )
        .def("ClipPlane",
             (const opencascade::handle<Graphic3d_ClipPlane> & (V3d_Plane::*)() const) static_cast<const opencascade::handle<Graphic3d_ClipPlane> & (V3d_Plane::*)() const>(&V3d_Plane::ClipPlane),
             R"#(Use this method to pass clipping plane implementation for standard clipping workflow.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_Plane::*)() const>(&V3d_Plane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Plane",
             []( V3d_Plane &self   ){ Standard_Real  theA; Standard_Real  theB; Standard_Real  theC; Standard_Real  theD; self.Plane(theA,theB,theC,theD); return std::make_tuple(theA,theB,theC,theD); },
             R"#(Returns the parameters of the plane.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_Plane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_Plane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_PositionLight ,opencascade::handle<V3d_PositionLight>  , Graphic3d_CLight >>(m.attr("V3d_PositionLight"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_PositionLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_PositionLight::*)() const>(&V3d_PositionLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_PositionLight::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_PositionLight::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_RectangularGrid ,opencascade::handle<V3d_RectangularGrid>  , Aspect_RectangularGrid >>(m.attr("V3d_RectangularGrid"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_RectangularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_RectangularGrid::*)() const>(&V3d_RectangularGrid::DynamicType),
             R"#(None)#" )
        .def("SetColors",
             (void (V3d_RectangularGrid::*)( const Quantity_Color & ,  const Quantity_Color &  ) ) static_cast<void (V3d_RectangularGrid::*)( const Quantity_Color & ,  const Quantity_Color &  ) >(&V3d_RectangularGrid::SetColors),
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
        .def("SetGraphicValues",
             (void (V3d_RectangularGrid::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_RectangularGrid::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_RectangularGrid::SetGraphicValues),
             R"#(None)#"  , py::arg("XSize"),  py::arg("YSize"),  py::arg("OffSet"))
    // methods using call by reference i.s.o. return
        .def("GraphicValues",
             []( V3d_RectangularGrid &self   ){ Standard_Real  XSize; Standard_Real  YSize; Standard_Real  OffSet; self.GraphicValues(XSize,YSize,OffSet); return std::make_tuple(XSize,YSize,OffSet); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_RectangularGrid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_RectangularGrid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_Trihedron ,opencascade::handle<V3d_Trihedron>  , Standard_Transient >>(m.attr("V3d_Trihedron"))
        .def(py::init<  >()  )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_Trihedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_Trihedron::*)() const>(&V3d_Trihedron::DynamicType),
             R"#(None)#" )
        .def("SetWireframe",
             (void (V3d_Trihedron::*)( const Standard_Boolean  ) ) static_cast<void (V3d_Trihedron::*)( const Standard_Boolean  ) >(&V3d_Trihedron::SetWireframe),
             R"#(Switch wireframe / shaded trihedron.)#"  , py::arg("theAsWireframe"))
        .def("SetPosition",
             (void (V3d_Trihedron::*)( const Aspect_TypeOfTriedronPosition  ) ) static_cast<void (V3d_Trihedron::*)( const Aspect_TypeOfTriedronPosition  ) >(&V3d_Trihedron::SetPosition),
             R"#(Setup the corner to draw the trihedron.)#"  , py::arg("thePosition"))
        .def("SetScale",
             (void (V3d_Trihedron::*)( const Standard_Real  ) ) static_cast<void (V3d_Trihedron::*)( const Standard_Real  ) >(&V3d_Trihedron::SetScale),
             R"#(Setup the scale factor.)#"  , py::arg("theScale"))
        .def("SetSizeRatio",
             (void (V3d_Trihedron::*)( const Standard_Real  ) ) static_cast<void (V3d_Trihedron::*)( const Standard_Real  ) >(&V3d_Trihedron::SetSizeRatio),
             R"#(Setup the size ratio factor.)#"  , py::arg("theRatio"))
        .def("SetArrowDiameter",
             (void (V3d_Trihedron::*)( const Standard_Real  ) ) static_cast<void (V3d_Trihedron::*)( const Standard_Real  ) >(&V3d_Trihedron::SetArrowDiameter),
             R"#(Setup the arrow diameter.)#"  , py::arg("theDiam"))
        .def("SetNbFacets",
             (void (V3d_Trihedron::*)( const Standard_Integer  ) ) static_cast<void (V3d_Trihedron::*)( const Standard_Integer  ) >(&V3d_Trihedron::SetNbFacets),
             R"#(Setup the number of facets for tessellation.)#"  , py::arg("theNbFacets"))
        .def("SetLabelsColor",
             (void (V3d_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (V3d_Trihedron::*)( const Quantity_Color &  ) >(&V3d_Trihedron::SetLabelsColor),
             R"#(Setup color of text labels.)#"  , py::arg("theColor"))
        .def("SetArrowsColor",
             (void (V3d_Trihedron::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Quantity_Color &  ) ) static_cast<void (V3d_Trihedron::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Quantity_Color &  ) >(&V3d_Trihedron::SetArrowsColor),
             R"#(Setup colors of arrows.)#"  , py::arg("theXColor"),  py::arg("theYColor"),  py::arg("theZColor"))
        .def("Display",
             (void (V3d_Trihedron::*)( const V3d_View &  ) ) static_cast<void (V3d_Trihedron::*)( const V3d_View &  ) >(&V3d_Trihedron::Display),
             R"#(Display trihedron.)#"  , py::arg("theView"))
        .def("Erase",
             (void (V3d_Trihedron::*)() ) static_cast<void (V3d_Trihedron::*)() >(&V3d_Trihedron::Erase),
             R"#(Erase trihedron.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_Trihedron::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_Trihedron::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_View ,opencascade::handle<V3d_View>  , Standard_Transient >>(m.attr("V3d_View"))
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const V3d_TypeOfView >()  , py::arg("theViewer"),  py::arg("theType")=static_cast<const V3d_TypeOfView>(V3d_ORTHOGRAPHIC) )
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const opencascade::handle<V3d_View> & >()  , py::arg("theViewer"),  py::arg("theView") )
    // methods
        .def("SetWindow",
             (void (V3d_View::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Aspect_Window> & ,  const Aspect_RenderingContext  ) >(&V3d_View::SetWindow),
             R"#(Activates the view in the specified Window If <aContext> is not NULL the graphic context is used to draw something in this view. Otherwise an internal graphic context is created. Warning: The view is centered and resized to preserve the height/width ratio of the window.)#"  , py::arg("theWindow"),  py::arg("theContext")=static_cast<const Aspect_RenderingContext>(NULL))
        .def("SetMagnify",
             (void (V3d_View::*)( const opencascade::handle<Aspect_Window> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Aspect_Window> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::SetMagnify),
             R"#(None)#"  , py::arg("theWindow"),  py::arg("thePreviousView"),  py::arg("theX1"),  py::arg("theY1"),  py::arg("theX2"),  py::arg("theY2"))
        .def("Remove",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::Remove),
             R"#(Destroys the view.)#" )
        .def("Update",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::Update),
             R"#(Deprecated, Redraw() should be used instead.)#" )
        .def("Redraw",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::Redraw),
             R"#(Redisplays the view even if there has not been any modification. Must be called if the view is shown. (Ex: DeIconification ) .)#" )
        .def("RedrawImmediate",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::RedrawImmediate),
             R"#(Updates layer of immediate presentations.)#" )
        .def("Invalidate",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::Invalidate),
             R"#(Invalidates view content but does not redraw it.)#" )
        .def("IsInvalidated",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::IsInvalidated),
             R"#(Returns true if cached view content has been invalidated.)#" )
        .def("MustBeResized",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::MustBeResized),
             R"#(Must be called when the window supporting the view changes size. if the view is not mapped on a window. Warning: The view is centered and resized to preserve the height/width ratio of the window.)#" )
        .def("DoMapping",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::DoMapping),
             R"#(Must be called when the window supporting the view is mapped or unmapped.)#" )
        .def("IsEmpty",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::IsEmpty),
             R"#(Returns the status of the view regarding the displayed structures inside Returns True is The View is empty)#" )
        .def("UpdateLights",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::UpdateLights),
             R"#(Updates the lights of the view.)#" )
        .def("SetAutoZFitMode",
             (void (V3d_View::*)( const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Boolean ,  const Standard_Real  ) >(&V3d_View::SetAutoZFitMode),
             R"#(Sets the automatic z-fit mode and its parameters. The auto z-fit has extra parameters which can controlled from application level to ensure that the size of viewing volume will be sufficiently large to cover the depth of unmanaged objects, for example, transformation persistent ones.)#"  , py::arg("theIsOn"),  py::arg("theScaleFactor")=static_cast<const Standard_Real>(1.0))
        .def("AutoZFitMode",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::AutoZFitMode),
             R"#(returns TRUE if automatic z-fit mode is turned on.)#" )
        .def("AutoZFitScaleFactor",
             (Standard_Real (V3d_View::*)() const) static_cast<Standard_Real (V3d_View::*)() const>(&V3d_View::AutoZFitScaleFactor),
             R"#(returns scale factor parameter of automatic z-fit mode.)#" )
        .def("AutoZFit",
             (void (V3d_View::*)() const) static_cast<void (V3d_View::*)() const>(&V3d_View::AutoZFit),
             R"#(If automatic z-range fitting is turned on, adjusts Z-min and Z-max projection volume planes with call to ZFitAll.)#" )
        .def("ZFitAll",
             (void (V3d_View::*)( const Standard_Real  ) const) static_cast<void (V3d_View::*)( const Standard_Real  ) const>(&V3d_View::ZFitAll),
             R"#(Change Z-min and Z-max planes of projection volume to match the displayed objects.)#"  , py::arg("theScaleFactor")=static_cast<const Standard_Real>(1.0))
        .def("SetBackgroundColor",
             (void (V3d_View::*)( const Quantity_TypeOfColor ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Quantity_TypeOfColor ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::SetBackgroundColor),
             R"#(Defines the background color of the view by the color definition type and the three corresponding values.)#"  , py::arg("theType"),  py::arg("theV1"),  py::arg("theV2"),  py::arg("theV3"))
        .def("SetBackgroundColor",
             (void (V3d_View::*)( const Quantity_Color &  ) ) static_cast<void (V3d_View::*)( const Quantity_Color &  ) >(&V3d_View::SetBackgroundColor),
             R"#(Defines the background color of the view.)#"  , py::arg("theColor"))
        .def("SetBgGradientColors",
             (void (V3d_View::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod ,  const Standard_Boolean  ) >(&V3d_View::SetBgGradientColors),
             R"#(Defines the gradient background colors of the view by supplying the colors and the fill method (horizontal by default).)#"  , py::arg("theColor1"),  py::arg("theColor2"),  py::arg("theFillStyle")=static_cast<const Aspect_GradientFillMethod>(Aspect_GFM_HOR),  py::arg("theToUpdate")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetBgGradientStyle",
             (void (V3d_View::*)( const Aspect_GradientFillMethod ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Aspect_GradientFillMethod ,  const Standard_Boolean  ) >(&V3d_View::SetBgGradientStyle),
             R"#(Defines the gradient background fill method of the view.)#"  , py::arg("theMethod")=static_cast<const Aspect_GradientFillMethod>(Aspect_GFM_HOR),  py::arg("theToUpdate")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetBackgroundImage",
             (void (V3d_View::*)( const Standard_CString ,  const Aspect_FillMethod ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_CString ,  const Aspect_FillMethod ,  const Standard_Boolean  ) >(&V3d_View::SetBackgroundImage),
             R"#(Defines the background texture of the view by supplying the texture image file name and fill method (centered by default).)#"  , py::arg("theFileName"),  py::arg("theFillStyle")=static_cast<const Aspect_FillMethod>(Aspect_FM_CENTERED),  py::arg("theToUpdate")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetBgImageStyle",
             (void (V3d_View::*)( const Aspect_FillMethod ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Aspect_FillMethod ,  const Standard_Boolean  ) >(&V3d_View::SetBgImageStyle),
             R"#(Defines the textured background fill method of the view.)#"  , py::arg("theFillStyle"),  py::arg("theToUpdate")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetAxis",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::SetAxis),
             R"#(Definition of an axis from its origin and its orientation . This will be the current axis for rotations and movements. Warning! raises BadValue from V3d if the vector normal is NULL. .)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("Vx"),  py::arg("Vy"),  py::arg("Vz"))
        .def("SetShadingModel",
             (void (V3d_View::*)( const Graphic3d_TypeOfShadingModel  ) ) static_cast<void (V3d_View::*)( const Graphic3d_TypeOfShadingModel  ) >(&V3d_View::SetShadingModel),
             R"#(Defines the shading model for the visualization. Various models are available.)#"  , py::arg("theShadingModel"))
        .def("SetTextureEnv",
             (void (V3d_View::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Graphic3d_TextureEnv> &  ) >(&V3d_View::SetTextureEnv),
             R"#(Sets the environment texture to use. No environment texture by default.)#"  , py::arg("theTexture"))
        .def("SetVisualization",
             (void (V3d_View::*)( const V3d_TypeOfVisualization  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfVisualization  ) >(&V3d_View::SetVisualization),
             R"#(Defines the visualization type in the view.)#"  , py::arg("theType"))
        .def("SetLightOn",
             (void (V3d_View::*)( const opencascade::handle<V3d_Light> &  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<V3d_Light> &  ) >(&V3d_View::SetLightOn),
             R"#(Activates theLight in the view.)#"  , py::arg("theLight"))
        .def("SetLightOn",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::SetLightOn),
             R"#(Activates all the lights defined in this view.)#" )
        .def("SetLightOff",
             (void (V3d_View::*)( const opencascade::handle<V3d_Light> &  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<V3d_Light> &  ) >(&V3d_View::SetLightOff),
             R"#(Deactivate theLight in this view.)#"  , py::arg("theLight"))
        .def("SetLightOff",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::SetLightOff),
             R"#(Deactivate all the Lights defined in this view.)#" )
        .def("IsActiveLight",
             (Standard_Boolean (V3d_View::*)( const opencascade::handle<V3d_Light> &  ) const) static_cast<Standard_Boolean (V3d_View::*)( const opencascade::handle<V3d_Light> &  ) const>(&V3d_View::IsActiveLight),
             R"#(Returns TRUE when the light is active in this view.)#"  , py::arg("theLight"))
        .def("SetImmediateUpdate",
             (Standard_Boolean (V3d_View::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (V3d_View::*)( const Standard_Boolean  ) >(&V3d_View::SetImmediateUpdate),
             R"#(sets the immediate update mode and returns the previous one.)#"  , py::arg("theImmediateUpdate"))
        .def("ZBufferTriedronSetup",
             (void (V3d_View::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Quantity_Color & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Quantity_Color & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&V3d_View::ZBufferTriedronSetup),
             R"#(Customization of the ZBUFFER Triedron. XColor,YColor,ZColor - colors of axis SizeRatio - ratio of decreasing of the trihedron size when its physical position comes out of the view AxisDiametr - diameter relatively to axis length NbFacettes - number of facets of cylinders and cones)#"  , py::arg("theXColor")=static_cast<const Quantity_Color &>(Quantity_NOC_RED),  py::arg("theYColor")=static_cast<const Quantity_Color &>(Quantity_NOC_GREEN),  py::arg("theZColor")=static_cast<const Quantity_Color &>(Quantity_NOC_BLUE1),  py::arg("theSizeRatio")=static_cast<const Standard_Real>(0.8),  py::arg("theAxisDiametr")=static_cast<const Standard_Real>(0.05),  py::arg("theNbFacettes")=static_cast<const Standard_Integer>(12))
        .def("TriedronDisplay",
             (void (V3d_View::*)( const Aspect_TypeOfTriedronPosition ,  const Quantity_Color & ,  const Standard_Real ,  const V3d_TypeOfVisualization  ) ) static_cast<void (V3d_View::*)( const Aspect_TypeOfTriedronPosition ,  const Quantity_Color & ,  const Standard_Real ,  const V3d_TypeOfVisualization  ) >(&V3d_View::TriedronDisplay),
             R"#(Display of the Triedron. Initialize position, color and length of Triedron axes. The scale is a percent of the window width.)#"  , py::arg("thePosition")=static_cast<const Aspect_TypeOfTriedronPosition>(Aspect_TOTP_CENTER),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theScale")=static_cast<const Standard_Real>(0.02),  py::arg("theMode")=static_cast<const V3d_TypeOfVisualization>(V3d_WIREFRAME))
        .def("TriedronErase",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::TriedronErase),
             R"#(Erases the Triedron.)#" )
        .def("GetGraduatedTrihedron",
             (const Graphic3d_GraduatedTrihedron & (V3d_View::*)() const) static_cast<const Graphic3d_GraduatedTrihedron & (V3d_View::*)() const>(&V3d_View::GetGraduatedTrihedron),
             R"#(Returns data of a graduated trihedron.)#" )
        .def("GraduatedTrihedronDisplay",
             (void (V3d_View::*)( const Graphic3d_GraduatedTrihedron &  ) ) static_cast<void (V3d_View::*)( const Graphic3d_GraduatedTrihedron &  ) >(&V3d_View::GraduatedTrihedronDisplay),
             R"#(Displays a graduated trihedron.)#"  , py::arg("theTrihedronData"))
        .def("GraduatedTrihedronErase",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::GraduatedTrihedronErase),
             R"#(Erases a graduated trihedron from the view.)#" )
        .def("SetFront",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::SetFront),
             R"#(modify the Projection of the view perpendicularly to the privileged plane of the viewer.)#" )
        .def("Rotate",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Rotate),
             R"#(Rotates the eye about the coordinate system of reference of the screen for which the origin is the view point of the projection, with a relative angular value in RADIANS with respect to the initial position expressed by Start = Standard_True Warning! raises BadValue from V3d If the eye, the view point, or the high point are aligned or confused.)#"  , py::arg("Ax"),  py::arg("Ay"),  py::arg("Az"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Rotate",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Rotate),
             R"#(Rotates the eye about the coordinate system of reference of the screen for which the origin is Gravity point {X,Y,Z}, with a relative angular value in RADIANS with respect to the initial position expressed by Start = Standard_True If the eye, the view point, or the high point are aligned or confused.)#"  , py::arg("Ax"),  py::arg("Ay"),  py::arg("Az"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Rotate",
             (void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Rotate),
             R"#(Rotates the eye about one of the coordinate axes of of the view for which the origin is the Gravity point{X,Y,Z} with an relative angular value in RADIANS with respect to the initial position expressed by Start = Standard_True)#"  , py::arg("Axe"),  py::arg("Angle"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Rotate",
             (void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Rotate),
             R"#(Rotates the eye about one of the coordinate axes of of the view for which the origin is the view point of the projection with an relative angular value in RADIANS with respect to the initial position expressed by Start = Standard_True)#"  , py::arg("Axe"),  py::arg("Angle"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Rotate",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Rotate),
             R"#(Rotates the eye around the current axis a relative angular value in RADIANS with respect to the initial position expressed by Start = Standard_True)#"  , py::arg("Angle"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Move",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Move),
             R"#(Movement of the eye parallel to the coordinate system of reference of the screen a distance relative to the initial position expressed by Start = Standard_True.)#"  , py::arg("Dx"),  py::arg("Dy"),  py::arg("Dz"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Move",
             (void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Move),
             R"#(Movement of the eye parallel to one of the axes of the coordinate system of reference of the view a distance relative to the initial position expressed by Start = Standard_True.)#"  , py::arg("Axe"),  py::arg("Length"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Move",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Move),
             R"#(Movement of the eye parllel to the current axis a distance relative to the initial position expressed by Start = Standard_True)#"  , py::arg("Length"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Translate",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Translate),
             R"#(Movement of the ye and the view point parallel to the frame of reference of the screen a distance relative to the initial position expressed by Start = Standard_True)#"  , py::arg("Dx"),  py::arg("Dy"),  py::arg("Dz"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Translate",
             (void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Translate),
             R"#(Movement of the eye and the view point parallel to one of the axes of the fame of reference of the view a distance relative to the initial position expressed by Start = Standard_True)#"  , py::arg("Axe"),  py::arg("Length"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Translate",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Translate),
             R"#(Movement of the eye and view point parallel to the current axis a distance relative to the initial position expressed by Start = Standard_True)#"  , py::arg("Length"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Place",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&V3d_View::Place),
             R"#(places the point of the view corresponding at the pixel position x,y at the center of the window and updates the view.)#"  , py::arg("theXp"),  py::arg("theYp"),  py::arg("theZoomFactor")=static_cast<const Standard_Real>(1))
        .def("Turn",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Turn),
             R"#(Rotation of the view point around the frame of reference of the screen for which the origin is the eye of the projection with a relative angular value in RADIANS with respect to the initial position expressed by Start = Standard_True)#"  , py::arg("Ax"),  py::arg("Ay"),  py::arg("Az"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Turn",
             (void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfAxe ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Turn),
             R"#(Rotation of the view point around one of the axes of the frame of reference of the view for which the origin is the eye of the projection with an angular value in RADIANS relative to the initial position expressed by Start = Standard_True)#"  , py::arg("Axe"),  py::arg("Angle"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Turn",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Turn),
             R"#(Rotation of the view point around the current axis an angular value in RADIANS relative to the initial position expressed by Start = Standard_True)#"  , py::arg("Angle"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetTwist",
             (void (V3d_View::*)( const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real  ) >(&V3d_View::SetTwist),
             R"#(Defines the angular position of the high point of the reference frame of the view with respect to the Y screen axis with an absolute angular value in RADIANS.)#"  , py::arg("Angle"))
        .def("SetEye",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::SetEye),
             R"#(Defines the position of the eye..)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetDepth",
             (void (V3d_View::*)( const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real  ) >(&V3d_View::SetDepth),
             R"#(Defines the Depth of the eye from the view point without update the projection .)#"  , py::arg("Depth"))
        .def("SetProj",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::SetProj),
             R"#(Defines the orientation of the projection.)#"  , py::arg("Vx"),  py::arg("Vy"),  py::arg("Vz"))
        .def("SetProj",
             (void (V3d_View::*)( const V3d_TypeOfOrientation  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfOrientation  ) >(&V3d_View::SetProj),
             R"#(Defines the orientation of the projection .)#"  , py::arg("Orientation"))
        .def("SetAt",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::SetAt),
             R"#(Defines the position of the view point.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetUp",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::SetUp),
             R"#(Defines the orientation of the high point.)#"  , py::arg("Vx"),  py::arg("Vy"),  py::arg("Vz"))
        .def("SetUp",
             (void (V3d_View::*)( const V3d_TypeOfOrientation  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfOrientation  ) >(&V3d_View::SetUp),
             R"#(Defines the orientation(SO) of the high point.)#"  , py::arg("Orientation"))
        .def("SetViewOrientationDefault",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::SetViewOrientationDefault),
             R"#(Saves the current state of the orientation of the view which will be the return state at ResetViewOrientation.)#" )
        .def("ResetViewOrientation",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::ResetViewOrientation),
             R"#(Resets the orientation of the view. Updates the view)#" )
        .def("Panning",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Panning),
             R"#(Translates the center of the view along "x" and "y" axes of view projection. Can be used to perform interactive panning operation. In that case the DXv, DXy parameters specify panning relative to the point where the operation is started.)#"  , py::arg("theDXv"),  py::arg("theDYv"),  py::arg("theZoomFactor")=static_cast<const Standard_Real>(1),  py::arg("theToStart")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetCenter",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::SetCenter),
             R"#(Relocates center of screen to the point, determined by {Xp, Yp} pixel coordinates relative to the bottom-left corner of screen. To calculate pixel coordinates for any point from world coordinate space, it can be projected using "Project".)#"  , py::arg("theXp"),  py::arg("theYp"))
        .def("SetSize",
             (void (V3d_View::*)( const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real  ) >(&V3d_View::SetSize),
             R"#(Defines the view projection size in its maximum dimension, keeping the inital height/width ratio unchanged.)#"  , py::arg("theSize"))
        .def("SetZSize",
             (void (V3d_View::*)( const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real  ) >(&V3d_View::SetZSize),
             R"#(Defines the Depth size of the view Front Plane will be set to Size/2. Back Plane will be set to -Size/2. Any Object located Above the Front Plane or behind the Back Plane will be Clipped . NOTE than the XY Size of the View is NOT modified .)#"  , py::arg("SetZSize"))
        .def("SetZoom",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::SetZoom),
             R"#(Zooms the view by a factor relative to the initial value expressed by Start = Standard_True Updates the view.)#"  , py::arg("Coef"),  py::arg("Start")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetScale",
             (void (V3d_View::*)( const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real  ) >(&V3d_View::SetScale),
             R"#(Zooms the view by a factor relative to the value initialised by SetViewMappingDefault(). Updates the view.)#"  , py::arg("Coef"))
        .def("SetAxialScale",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::SetAxialScale),
             R"#(Sets anisotropic (axial) scale factors <Sx>, <Sy>, <Sz> for view <me>. Anisotropic scaling operation is performed through multiplying the current view orientation matrix by a scaling matrix: || Sx 0 0 0 || || 0 Sy 0 0 || || 0 0 Sz 0 || || 0 0 0 1 || Updates the view.)#"  , py::arg("Sx"),  py::arg("Sy"),  py::arg("Sz"))
        .def("FitAll",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::FitAll),
             R"#(Adjust view parameters to fit the displayed scene, respecting height / width ratio. The Z clipping range (depth range) is fitted if AutoZFit flag is TRUE. Throws program error exception if margin coefficient is < 0 or >= 1. Updates the view.)#"  , py::arg("theMargin")=static_cast<const Standard_Real>(0.01),  py::arg("theToUpdate")=static_cast<const Standard_Boolean>(Standard_True))
        .def("FitAll",
             (void (V3d_View::*)( const Bnd_Box & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Bnd_Box & ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::FitAll),
             R"#(Adjust view parameters to fit the displayed scene, respecting height / width ratio according to the custom bounding box given. Throws program error exception if margin coefficient is < 0 or >= 1. Updates the view.)#"  , py::arg("theBox"),  py::arg("theMargin")=static_cast<const Standard_Real>(0.01),  py::arg("theToUpdate")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DepthFitAll",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real  ) >(&V3d_View::DepthFitAll),
             R"#(Adjusts the viewing volume so as not to clip the displayed objects by front and back and back clipping planes. Also sets depth value automatically depending on the calculated Z size and Aspect parameter. NOTE than the original XY size of the view is NOT modified .)#"  , py::arg("Aspect")=static_cast<const Standard_Real>(0.01),  py::arg("Margin")=static_cast<const Standard_Real>(0.01))
        .def("FitAll",
             (void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_View::FitAll),
             R"#(Centers the defined projection window so that it occupies the maximum space while respecting the initial height/width ratio. NOTE than the original Z size of the view is NOT modified .)#"  , py::arg("theMinXv"),  py::arg("theMinYv"),  py::arg("theMaxXv"),  py::arg("theMaxYv"))
        .def("WindowFit",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::WindowFit),
             R"#(Centers the defined PIXEL window so that it occupies the maximum space while respecting the initial height/width ratio. NOTE than the original Z size of the view is NOT modified.)#"  , py::arg("theMinXp"),  py::arg("theMinYp"),  py::arg("theMaxXp"),  py::arg("theMaxYp"))
        .def("SetViewMappingDefault",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::SetViewMappingDefault),
             R"#(Saves the current view mapping. This will be the state returned from ResetViewmapping.)#" )
        .def("ResetViewMapping",
             (void (V3d_View::*)() ) static_cast<void (V3d_View::*)() >(&V3d_View::ResetViewMapping),
             R"#(Resets the centering of the view. Updates the view)#" )
        .def("Reset",
             (void (V3d_View::*)( const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Boolean  ) >(&V3d_View::Reset),
             R"#(Resets the centering and the orientation of the view.)#"  , py::arg("theToUpdate")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Convert",
             (Standard_Real (V3d_View::*)( const Standard_Integer  ) const) static_cast<Standard_Real (V3d_View::*)( const Standard_Integer  ) const>(&V3d_View::Convert),
             R"#(Converts the PIXEL value to a value in the projection plane.)#"  , py::arg("Vp"))
        .def("Convert",
             (Standard_Integer (V3d_View::*)( const Standard_Real  ) const) static_cast<Standard_Integer (V3d_View::*)( const Standard_Real  ) const>(&V3d_View::Convert),
             R"#(Converts tha value of the projection plane into a PIXEL value.)#"  , py::arg("Vv"))
        .def("BackgroundColor",
             (Quantity_Color (V3d_View::*)() const) static_cast<Quantity_Color (V3d_View::*)() const>(&V3d_View::BackgroundColor),
             R"#(Returns the Background color object of the view.)#" )
        .def("GradientBackgroundColors",
             (void (V3d_View::*)( Quantity_Color & ,  Quantity_Color &  ) const) static_cast<void (V3d_View::*)( Quantity_Color & ,  Quantity_Color &  ) const>(&V3d_View::GradientBackgroundColors),
             R"#(Returns the gradient background colors of the view.)#"  , py::arg("theColor1"),  py::arg("theColor2"))
        .def("GradientBackground",
             (Aspect_GradientBackground (V3d_View::*)() const) static_cast<Aspect_GradientBackground (V3d_View::*)() const>(&V3d_View::GradientBackground),
             R"#(Returns the gradient background of the view.)#" )
        .def("Scale",
             (Standard_Real (V3d_View::*)() const) static_cast<Standard_Real (V3d_View::*)() const>(&V3d_View::Scale),
             R"#(Returns the current value of the zoom expressed with respect to SetViewMappingDefault().)#" )
        .def("ZSize",
             (Standard_Real (V3d_View::*)() const) static_cast<Standard_Real (V3d_View::*)() const>(&V3d_View::ZSize),
             R"#(Returns the Depth of the view .)#" )
        .def("Depth",
             (Standard_Real (V3d_View::*)() const) static_cast<Standard_Real (V3d_View::*)() const>(&V3d_View::Depth),
             R"#(Returns the Distance between the Eye and View Point.)#" )
        .def("Twist",
             (Standard_Real (V3d_View::*)() const) static_cast<Standard_Real (V3d_View::*)() const>(&V3d_View::Twist),
             R"#(Returns in RADIANS the orientation of the view around the visual axis measured from the Y axis of the screen.)#" )
        .def("ShadingModel",
             (Graphic3d_TypeOfShadingModel (V3d_View::*)() const) static_cast<Graphic3d_TypeOfShadingModel (V3d_View::*)() const>(&V3d_View::ShadingModel),
             R"#(Returns the current shading model.)#" )
        .def("TextureEnv",
             (opencascade::handle<Graphic3d_TextureEnv> (V3d_View::*)() const) static_cast<opencascade::handle<Graphic3d_TextureEnv> (V3d_View::*)() const>(&V3d_View::TextureEnv),
             R"#(None)#" )
        .def("Visualization",
             (V3d_TypeOfVisualization (V3d_View::*)() const) static_cast<V3d_TypeOfVisualization (V3d_View::*)() const>(&V3d_View::Visualization),
             R"#(Returns the current visualisation mode.)#" )
        .def("IfMoreLights",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::IfMoreLights),
             R"#(Returns True if One light more can be activated in this View.)#" )
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
        .def("LightLimit",
             (Standard_Integer (V3d_View::*)() const) static_cast<Standard_Integer (V3d_View::*)() const>(&V3d_View::LightLimit),
             R"#(Returns the MAX number of light associated to the view.)#" )
        .def("Viewer",
             (opencascade::handle<V3d_Viewer> (V3d_View::*)() const) static_cast<opencascade::handle<V3d_Viewer> (V3d_View::*)() const>(&V3d_View::Viewer),
             R"#(Returns the viewer in which the view has been created.)#" )
        .def("IfWindow",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::IfWindow),
             R"#(Returns True if MyView is associated with a window .)#" )
        .def("Window",
             (opencascade::handle<Aspect_Window> (V3d_View::*)() const) static_cast<opencascade::handle<Aspect_Window> (V3d_View::*)() const>(&V3d_View::Window),
             R"#(Returns the Aspect Window associated with the view.)#" )
        .def("Type",
             (V3d_TypeOfView (V3d_View::*)() const) static_cast<V3d_TypeOfView (V3d_View::*)() const>(&V3d_View::Type),
             R"#(Returns the Type of the View)#" )
        .def("Pan",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) >(&V3d_View::Pan),
             R"#(Translates the center of the view along "x" and "y" axes of view projection. Can be used to perform interactive panning operation. In that case the DXp, DXp parameters specify panning relative to the point where the operation is started.)#"  , py::arg("theDXp"),  py::arg("theDYp"),  py::arg("theZoomFactor")=static_cast<const Standard_Real>(1),  py::arg("theToStart")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Zoom",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::Zoom),
             R"#(Zoom the view according to a zoom factor computed from the distance between the 2 mouse position.)#"  , py::arg("theXp1"),  py::arg("theYp1"),  py::arg("theXp2"),  py::arg("theYp2"))
        .def("StartZoomAtPoint",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::StartZoomAtPoint),
             R"#(Defines starting point for ZoomAtPoint view operation.)#"  , py::arg("theXp"),  py::arg("theYp"))
        .def("ZoomAtPoint",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::ZoomAtPoint),
             R"#(Zooms the model at a pixel defined by the method StartZoomAtPoint().)#"  , py::arg("theMouseStartX"),  py::arg("theMouseStartY"),  py::arg("theMouseEndX"),  py::arg("theMouseEndY"))
        .def("AxialScale",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const V3d_TypeOfAxe  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const V3d_TypeOfAxe  ) >(&V3d_View::AxialScale),
             R"#(Performs anisotropic scaling of <me> view along the given <Axis>. The scale factor is calculated on a basis of the mouse pointer displacement <Dx,Dy>. The calculated scale factor is then passed to SetAxialScale(Sx, Sy, Sz) method.)#"  , py::arg("Dx"),  py::arg("Dy"),  py::arg("Axis"))
        .def("StartRotation",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&V3d_View::StartRotation),
             R"#(Begin the rotation of the view around the screen axis according to the mouse position <X,Y>. Warning: Enable rotation around the Z screen axis when <zRotationThreshold> factor is > 0 soon the distance from the start point and the center of the view is > (medium viewSize * <zRotationThreshold> ). Generally a value of 0.4 is usable to rotate around XY screen axis inside the circular threshold area and to rotate around Z screen axis outside this area.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("zRotationThreshold")=static_cast<const Standard_Real>(0.0))
        .def("Rotation",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::Rotation),
             R"#(Continues the rotation of the view with an angle computed from the last and new mouse position <X,Y>.)#"  , py::arg("X"),  py::arg("Y"))
        .def("SetFocale",
             (void (V3d_View::*)( const Standard_Real  ) ) static_cast<void (V3d_View::*)( const Standard_Real  ) >(&V3d_View::SetFocale),
             R"#(Change View Plane Distance for Perspective Views Warning! raises TypeMismatch from Standard if the view is not a perspective view.)#"  , py::arg("Focale"))
        .def("Focale",
             (Standard_Real (V3d_View::*)() const) static_cast<Standard_Real (V3d_View::*)() const>(&V3d_View::Focale),
             R"#(Returns the View Plane Distance for Perspective Views)#" )
        .def("View",
             (opencascade::handle<Graphic3d_CView> (V3d_View::*)() const) static_cast<opencascade::handle<Graphic3d_CView> (V3d_View::*)() const>(&V3d_View::View),
             R"#(Returns the associated Graphic3d view.)#" )
        .def("SetComputedMode",
             (void (V3d_View::*)( const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Boolean  ) >(&V3d_View::SetComputedMode),
             R"#(Switches computed HLR mode in the view.)#"  , py::arg("theMode"))
        .def("ComputedMode",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::ComputedMode),
             R"#(Returns the computed HLR mode state.)#" )
        .def("WindowFitAll",
             (void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (V3d_View::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&V3d_View::WindowFitAll),
             R"#(idem than WindowFit)#"  , py::arg("Xmin"),  py::arg("Ymin"),  py::arg("Xmax"),  py::arg("Ymax"))
        .def("SetGrid",
             (void (V3d_View::*)( const gp_Ax3 & ,  const opencascade::handle<Aspect_Grid> &  ) ) static_cast<void (V3d_View::*)( const gp_Ax3 & ,  const opencascade::handle<Aspect_Grid> &  ) >(&V3d_View::SetGrid),
             R"#(Defines or Updates the definition of the grid in <me>)#"  , py::arg("aPlane"),  py::arg("aGrid"))
        .def("SetGridActivity",
             (void (V3d_View::*)( const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Boolean  ) >(&V3d_View::SetGridActivity),
             R"#(Defines or Updates the activity of the grid in <me>)#"  , py::arg("aFlag"))
        .def("Dump",
             (Standard_Boolean (V3d_View::*)( const Standard_CString ,  const Graphic3d_BufferType &  ) ) static_cast<Standard_Boolean (V3d_View::*)( const Standard_CString ,  const Graphic3d_BufferType &  ) >(&V3d_View::Dump),
             R"#(dump the full contents of the view at the same scale in the file <theFile>. The file name extension must be one of ".png",".bmp",".jpg",".gif". Returns FALSE when the dump has failed)#"  , py::arg("theFile"),  py::arg("theBufferType")=static_cast<const Graphic3d_BufferType &>(Graphic3d_BT_RGB))
        .def("Export",
             (Standard_Boolean (V3d_View::*)( const Standard_CString ,  const Graphic3d_ExportFormat ,  const Graphic3d_SortType  ) ) static_cast<Standard_Boolean (V3d_View::*)( const Standard_CString ,  const Graphic3d_ExportFormat ,  const Graphic3d_SortType  ) >(&V3d_View::Export),
             R"#(Export scene into the one of the Vector graphics formats (SVG, PS, PDF...). In contrast to Bitmaps, Vector graphics is scalable (so you may got quality benefits on printing to laser printer). Notice however that results may differ a lot and do not contain some elements.)#"  , py::arg("theFileName"),  py::arg("theFormat"),  py::arg("theSortType")=static_cast<const Graphic3d_SortType>(Graphic3d_ST_BSP_Tree))
        .def("ToPixMap",
             (Standard_Boolean (V3d_View::*)( Image_PixMap & ,  const V3d_ImageDumpOptions &  ) ) static_cast<Standard_Boolean (V3d_View::*)( Image_PixMap & ,  const V3d_ImageDumpOptions &  ) >(&V3d_View::ToPixMap),
             R"#(Dumps the full contents of the view to a pixmap with specified parameters.)#"  , py::arg("theImage"),  py::arg("theParams"))
        .def("ToPixMap",
             (Standard_Boolean (V3d_View::*)( Image_PixMap & ,  const Standard_Integer ,  const Standard_Integer ,  const Graphic3d_BufferType & ,  const Standard_Boolean ,  const V3d_StereoDumpOptions  ) ) static_cast<Standard_Boolean (V3d_View::*)( Image_PixMap & ,  const Standard_Integer ,  const Standard_Integer ,  const Graphic3d_BufferType & ,  const Standard_Boolean ,  const V3d_StereoDumpOptions  ) >(&V3d_View::ToPixMap),
             R"#(Dumps the full contents of the view to a pixmap.)#"  , py::arg("theImage"),  py::arg("theWidth"),  py::arg("theHeight"),  py::arg("theBufferType")=static_cast<const Graphic3d_BufferType &>(Graphic3d_BT_RGB),  py::arg("theToAdjustAspect")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theStereoOptions")=static_cast<const V3d_StereoDumpOptions>(V3d_SDO_MONO))
        .def("SetBackFacingModel",
             (void (V3d_View::*)( const V3d_TypeOfBackfacingModel  ) ) static_cast<void (V3d_View::*)( const V3d_TypeOfBackfacingModel  ) >(&V3d_View::SetBackFacingModel),
             R"#(Manages display of the back faces When <aModel> is TOBM_AUTOMATIC the object backfaces are displayed only for surface objects and never displayed for solid objects. this was the previous mode. <aModel> is TOBM_ALWAYS_DISPLAYED the object backfaces are always displayed both for surfaces or solids. <aModel> is TOBM_NEVER_DISPLAYED the object backfaces are never displayed.)#"  , py::arg("theModel")=static_cast<const V3d_TypeOfBackfacingModel>(V3d_TOBM_AUTOMATIC))
        .def("BackFacingModel",
             (V3d_TypeOfBackfacingModel (V3d_View::*)() const) static_cast<V3d_TypeOfBackfacingModel (V3d_View::*)() const>(&V3d_View::BackFacingModel),
             R"#(Returns current state of the back faces display)#" )
        .def("AddClipPlane",
             (void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) >(&V3d_View::AddClipPlane),
             R"#(Adds clip plane to the view. The composition of clip planes truncates the rendering space to convex volume. Number of supported clip planes can be consulted by PlaneLimit method of associated Graphic3d_GraphicDriver. Please be aware that the planes which exceed the limit are ignored during rendering.)#"  , py::arg("thePlane"))
        .def("RemoveClipPlane",
             (void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) >(&V3d_View::RemoveClipPlane),
             R"#(Removes clip plane from the view.)#"  , py::arg("thePlane"))
        .def("SetClipPlanes",
             (void (V3d_View::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&V3d_View::SetClipPlanes),
             R"#(Sets sequence of clip planes to the view. The planes that have been set before are removed from the view. The composition of clip planes truncates the rendering space to convex volume. Number of supported clip planes can be consulted by InquirePlaneLimit method of Graphic3d_GraphicDriver. Please be aware that the planes that exceed the limit are ignored during rendering.)#"  , py::arg("thePlanes"))
        .def("SetClipPlanes",
             (void (V3d_View::*)( const Graphic3d_SequenceOfHClipPlane &  ) ) static_cast<void (V3d_View::*)( const Graphic3d_SequenceOfHClipPlane &  ) >(&V3d_View::SetClipPlanes),
             R"#(None)#"  , py::arg("thePlanes"))
        .def("ClipPlanes",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (V3d_View::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (V3d_View::*)() const>(&V3d_View::ClipPlanes),
             R"#(Get clip planes.)#" )
        .def("PlaneLimit",
             (Standard_Integer (V3d_View::*)() const) static_cast<Standard_Integer (V3d_View::*)() const>(&V3d_View::PlaneLimit),
             R"#(Returns the MAX number of clipping planes associated to the view.)#" )
        .def("SetCamera",
             (void (V3d_View::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (V3d_View::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&V3d_View::SetCamera),
             R"#(Change camera used by view.)#"  , py::arg("theCamera"))
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (V3d_View::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (V3d_View::*)() const>(&V3d_View::Camera),
             R"#(Returns camera object of the view.)#" )
        .def("DefaultCamera",
             (const opencascade::handle<Graphic3d_Camera> & (V3d_View::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (V3d_View::*)() const>(&V3d_View::DefaultCamera),
             R"#(Return default camera.)#" )
        .def("RenderingParams",
             (const Graphic3d_RenderingParams & (V3d_View::*)() const) static_cast<const Graphic3d_RenderingParams & (V3d_View::*)() const>(&V3d_View::RenderingParams),
             R"#(Returns current rendering parameters and effect settings. By default it returns default parameters of current viewer. To define view-specific settings use method V3d_View::ChangeRenderingParams().)#" )
        .def("ChangeRenderingParams",
             (Graphic3d_RenderingParams & (V3d_View::*)() ) static_cast<Graphic3d_RenderingParams & (V3d_View::*)() >(&V3d_View::ChangeRenderingParams),
             R"#(Returns reference to current rendering parameters and effect settings.)#" )
        .def("IsCullingEnabled",
             (Standard_Boolean (V3d_View::*)() const) static_cast<Standard_Boolean (V3d_View::*)() const>(&V3d_View::IsCullingEnabled),
             R"#(Returns flag value of objects culling mechanism)#" )
        .def("SetFrustumCulling",
             (void (V3d_View::*)( const Standard_Boolean  ) ) static_cast<void (V3d_View::*)( const Standard_Boolean  ) >(&V3d_View::SetFrustumCulling),
             R"#(Turn on/off automatic culling of objects outside frustrum (ON by default))#"  , py::arg("theMode"))
        .def("DiagnosticInformation",
             (void (V3d_View::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const) static_cast<void (V3d_View::*)( NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & ,  Graphic3d_DiagnosticInfo  ) const>(&V3d_View::DiagnosticInformation),
             R"#(Fill in the dictionary with diagnostic info. Should be called within rendering thread.)#"  , py::arg("theDict"),  py::arg("theFlags"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_View::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_View::*)() const>(&V3d_View::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Convert",
             []( V3d_View &self , const Standard_Integer Xp,const Standard_Integer Yp ){ Standard_Real  Xv; Standard_Real  Yv; self.Convert(Xp,Yp,Xv,Yv); return std::make_tuple(Xv,Yv); },
             R"#(Converts the point PIXEL into a point projected in the reference frame of the projection plane.)#"  , py::arg("Xp"),  py::arg("Yp"))
        .def("Convert",
             []( V3d_View &self , const Standard_Real Xv,const Standard_Real Yv ){ Standard_Integer  Xp; Standard_Integer  Yp; self.Convert(Xv,Yv,Xp,Yp); return std::make_tuple(Xp,Yp); },
             R"#(Converts the point defined in the reference frame of the projection plane into a point PIXEL.)#"  , py::arg("Xv"),  py::arg("Yv"))
        .def("Convert",
             []( V3d_View &self , const Standard_Integer Xp,const Standard_Integer Yp ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Convert(Xp,Yp,X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Converts the projected point into a point in the reference frame of the view corresponding to the intersection with the projection plane of the eye/view point vector.)#"  , py::arg("Xp"),  py::arg("Yp"))
        .def("ConvertWithProj",
             []( V3d_View &self , const Standard_Integer Xp,const Standard_Integer Yp ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; Standard_Real  Vx; Standard_Real  Vy; Standard_Real  Vz; self.ConvertWithProj(Xp,Yp,X,Y,Z,Vx,Vy,Vz); return std::make_tuple(X,Y,Z,Vx,Vy,Vz); },
             R"#(Converts the projected point into a point in the reference frame of the view corresponding to the intersection with the projection plane of the eye/view point vector and returns the projection ray for further computations.)#"  , py::arg("Xp"),  py::arg("Yp"))
        .def("ConvertToGrid",
             []( V3d_View &self , const Standard_Integer Xp,const Standard_Integer Yp ){ Standard_Real  Xg; Standard_Real  Yg; Standard_Real  Zg; self.ConvertToGrid(Xp,Yp,Xg,Yg,Zg); return std::make_tuple(Xg,Yg,Zg); },
             R"#(Converts the projected point into the nearest grid point in the reference frame of the view corresponding to the intersection with the projection plane of the eye/view point vector and display the grid marker. Warning: When the grid is not active the result is identical to the above Convert() method. How to use: 1) Enable the grid echo display myViewer->SetGridEcho(Standard_True); 2) When application receive a move event: 2.1) Check if any object is detected if( myInteractiveContext->MoveTo(x,y) == AIS_SOD_Nothing ) { 2.2) Check if the grid is active if( myViewer->Grid()->IsActive() ) { 2.3) Display the grid echo and gets the grid point myView->ConvertToGrid(x,y,X,Y,Z); myView->Viewer()->ShowGridEcho (myView, Graphic3d_Vertex (X,Y,Z)); myView->RedrawImmediate(); 2.4) Else this is the standard case } else myView->Convert(x,y,X,Y,Z);)#"  , py::arg("Xp"),  py::arg("Yp"))
        .def("ConvertToGrid",
             []( V3d_View &self , const Standard_Real X,const Standard_Real Y,const Standard_Real Z ){ Standard_Real  Xg; Standard_Real  Yg; Standard_Real  Zg; self.ConvertToGrid(X,Y,Z,Xg,Yg,Zg); return std::make_tuple(Xg,Yg,Zg); },
             R"#(Converts the point into the nearest grid point and display the grid marker.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("Convert",
             []( V3d_View &self , const Standard_Real X,const Standard_Real Y,const Standard_Real Z ){ Standard_Integer  Xp; Standard_Integer  Yp; self.Convert(X,Y,Z,Xp,Yp); return std::make_tuple(Xp,Yp); },
             R"#(Projects the point defined in the reference frame of the view into the projected point in the associated window.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("Project",
             []( V3d_View &self , const Standard_Real theX,const Standard_Real theY,const Standard_Real theZ ){ Standard_Real  theXp; Standard_Real  theYp; self.Project(theX,theY,theZ,theXp,theYp); return std::make_tuple(theXp,theYp); },
             R"#(Converts the point defined in the user space of the view to the projection plane at the depth relative to theZ.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("Project",
             []( V3d_View &self , const Standard_Real theX,const Standard_Real theY,const Standard_Real theZ ){ Standard_Real  theXp; Standard_Real  theYp; Standard_Real  theZp; self.Project(theX,theY,theZ,theXp,theYp,theZp); return std::make_tuple(theXp,theYp,theZp); },
             R"#(Converts the point defined in the user space of the view to the projection plane at the depth relative to theZ.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("BackgroundColor",
             []( V3d_View &self , const Quantity_TypeOfColor Type ){ Standard_Real  V1; Standard_Real  V2; Standard_Real  V3; self.BackgroundColor(Type,V1,V2,V3); return std::make_tuple(V1,V2,V3); },
             R"#(Returns the Background color values of the view depending of the color Type.)#"  , py::arg("Type"))
        .def("AxialScale",
             []( V3d_View &self   ){ Standard_Real  Sx; Standard_Real  Sy; Standard_Real  Sz; self.AxialScale(Sx,Sy,Sz); return std::make_tuple(Sx,Sy,Sz); },
             R"#(Returns the current values of the anisotropic (axial) scale factors.)#" )
        .def("Size",
             []( V3d_View &self   ){ Standard_Real  Width; Standard_Real  Height; self.Size(Width,Height); return std::make_tuple(Width,Height); },
             R"#(Returns the height and width of the view.)#" )
        .def("Eye",
             []( V3d_View &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Eye(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Returns the position of the eye.)#" )
        .def("FocalReferencePoint",
             []( V3d_View &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.FocalReferencePoint(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Returns the position of point which emanating the projections.)#" )
        .def("ProjReferenceAxe",
             []( V3d_View &self , const Standard_Integer Xpix,const Standard_Integer Ypix ){ Standard_Real  XP; Standard_Real  YP; Standard_Real  ZP; Standard_Real  VX; Standard_Real  VY; Standard_Real  VZ; self.ProjReferenceAxe(Xpix,Ypix,XP,YP,ZP,VX,VY,VZ); return std::make_tuple(XP,YP,ZP,VX,VY,VZ); },
             R"#(Returns the coordinate of the point (Xpix,Ypix) in the view (XP,YP,ZP), and the projection vector of the view passing by the point (for PerspectiveView).)#"  , py::arg("Xpix"),  py::arg("Ypix"))
        .def("Proj",
             []( V3d_View &self   ){ Standard_Real  Vx; Standard_Real  Vy; Standard_Real  Vz; self.Proj(Vx,Vy,Vz); return std::make_tuple(Vx,Vy,Vz); },
             R"#(Returns the projection vector.)#" )
        .def("At",
             []( V3d_View &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.At(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Returns the position of the view point.)#" )
        .def("Up",
             []( V3d_View &self   ){ Standard_Real  Vx; Standard_Real  Vy; Standard_Real  Vz; self.Up(Vx,Vy,Vz); return std::make_tuple(Vx,Vy,Vz); },
             R"#(Returns the vector giving the position of the high point.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_View::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_View::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_Viewer ,opencascade::handle<V3d_Viewer>  , Standard_Transient >>(m.attr("V3d_Viewer"))
        .def(py::init< const opencascade::handle<Graphic3d_GraphicDriver> & >()  , py::arg("theDriver") )
        .def(py::init< const opencascade::handle<Graphic3d_GraphicDriver> &,const Standard_ExtString,const Standard_CString,const Standard_Real,const V3d_TypeOfOrientation,const Quantity_Color &,const V3d_TypeOfVisualization,const Graphic3d_TypeOfShadingModel,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theDriver"),  py::arg("theName"),  py::arg("theDomain")=static_cast<const Standard_CString>(""),  py::arg("theViewSize")=static_cast<const Standard_Real>(1000.0),  py::arg("theViewProj")=static_cast<const V3d_TypeOfOrientation>(V3d_XposYnegZpos),  py::arg("theViewBackground")=static_cast<const Quantity_Color &>(Quantity_NOC_GRAY30),  py::arg("theVisualization")=static_cast<const V3d_TypeOfVisualization>(V3d_ZBUFFER),  py::arg("theShadingModel")=static_cast<const Graphic3d_TypeOfShadingModel>(Graphic3d_TOSM_VERTEX),  py::arg("theComputedMode")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theDefaultComputedMode")=static_cast<const Standard_Boolean>(Standard_True) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_Viewer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_Viewer::*)() const>(&V3d_Viewer::DynamicType),
             R"#(None)#" )
        .def("IfMoreViews",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::IfMoreViews),
             R"#(Returns True if One View more can be defined in this Viewer.)#" )
        .def("CreateView",
             (opencascade::handle<V3d_View> (V3d_Viewer::*)() ) static_cast<opencascade::handle<V3d_View> (V3d_Viewer::*)() >(&V3d_Viewer::CreateView),
             R"#(Creates a view in the viewer according to its default parameters.)#" )
        .def("SetViewOn",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::SetViewOn),
             R"#(Activates all of the views of a viewer attached to a window.)#" )
        .def("SetViewOn",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_View> &  ) >(&V3d_Viewer::SetViewOn),
             R"#(Activates a particular view in the Viewer. Must be call if the Window attached to the view has been Deiconified.)#"  , py::arg("theView"))
        .def("SetViewOff",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::SetViewOff),
             R"#(Deactivates all the views of a Viewer attached to a window.)#" )
        .def("SetViewOff",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_View> &  ) >(&V3d_Viewer::SetViewOff),
             R"#(Deactivates a particular view in the Viewer. Must be call if the Window attached to the view has been Iconified .)#"  , py::arg("theView"))
        .def("Update",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::Update),
             R"#(Deprecated, Redraw() should be used instead.)#" )
        .def("Redraw",
             (void (V3d_Viewer::*)() const) static_cast<void (V3d_Viewer::*)() const>(&V3d_Viewer::Redraw),
             R"#(Redraws all the views of the Viewer even if no modification has taken place. Must be called if all the views of the Viewer are exposed, as for example in a global DeIconification.)#" )
        .def("RedrawImmediate",
             (void (V3d_Viewer::*)() const) static_cast<void (V3d_Viewer::*)() const>(&V3d_Viewer::RedrawImmediate),
             R"#(Updates layer of immediate presentations.)#" )
        .def("Invalidate",
             (void (V3d_Viewer::*)() const) static_cast<void (V3d_Viewer::*)() const>(&V3d_Viewer::Invalidate),
             R"#(Invalidates viewer content but does not redraw it.)#" )
        .def("Remove",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::Remove),
             R"#(Suppresses the Viewer.)#" )
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
             (void (V3d_Viewer::*)( const Graphic3d_RenderingParams &  ) ) static_cast<void (V3d_Viewer::*)( const Graphic3d_RenderingParams &  ) >(&V3d_Viewer::SetDefaultRenderingParams),
             R"#(Set default Rendering Parameters.)#"  , py::arg("theParams"))
        .def("SetDefaultBackgroundColor",
             (void (V3d_Viewer::*)( const Quantity_Color &  ) ) static_cast<void (V3d_Viewer::*)( const Quantity_Color &  ) >(&V3d_Viewer::SetDefaultBackgroundColor),
             R"#(Defines the default background colour of views attached to the viewer by supplying the color object)#"  , py::arg("theColor"))
        .def("GetGradientBackground",
             (const Aspect_GradientBackground & (V3d_Viewer::*)() const) static_cast<const Aspect_GradientBackground & (V3d_Viewer::*)() const>(&V3d_Viewer::GetGradientBackground),
             R"#(Returns the gradient background of the view.)#" )
        .def("SetDefaultBgGradientColors",
             (void (V3d_Viewer::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) ) static_cast<void (V3d_Viewer::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) >(&V3d_Viewer::SetDefaultBgGradientColors),
             R"#(Defines the default gradient background colours of views attached to the viewer by supplying the colour objects)#"  , py::arg("theColor1"),  py::arg("theColor2"),  py::arg("theFillStyle")=static_cast<const Aspect_GradientFillMethod>(Aspect_GFM_HOR))
        .def("DefaultViewSize",
             (Standard_Real (V3d_Viewer::*)() const) static_cast<Standard_Real (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultViewSize),
             R"#(Returns the default size of the view.)#" )
        .def("SetDefaultViewSize",
             (void (V3d_Viewer::*)( const Standard_Real  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Real  ) >(&V3d_Viewer::SetDefaultViewSize),
             R"#(Gives a default size for the creation of views of the viewer.)#"  , py::arg("theSize"))
        .def("DefaultViewProj",
             (V3d_TypeOfOrientation (V3d_Viewer::*)() const) static_cast<V3d_TypeOfOrientation (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultViewProj),
             R"#(Returns the default Projection.)#" )
        .def("SetDefaultViewProj",
             (void (V3d_Viewer::*)( const V3d_TypeOfOrientation  ) ) static_cast<void (V3d_Viewer::*)( const V3d_TypeOfOrientation  ) >(&V3d_Viewer::SetDefaultViewProj),
             R"#(Sets the default projection for creating views in the viewer.)#"  , py::arg("theOrientation"))
        .def("DefaultVisualization",
             (V3d_TypeOfVisualization (V3d_Viewer::*)() const) static_cast<V3d_TypeOfVisualization (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultVisualization),
             R"#(Returns the default type of Visualization.)#" )
        .def("SetDefaultVisualization",
             (void (V3d_Viewer::*)( const V3d_TypeOfVisualization  ) ) static_cast<void (V3d_Viewer::*)( const V3d_TypeOfVisualization  ) >(&V3d_Viewer::SetDefaultVisualization),
             R"#(Gives the default visualization mode.)#"  , py::arg("theType"))
        .def("DefaultShadingModel",
             (Graphic3d_TypeOfShadingModel (V3d_Viewer::*)() const) static_cast<Graphic3d_TypeOfShadingModel (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultShadingModel),
             R"#(Returns the default type of Shading)#" )
        .def("SetDefaultShadingModel",
             (void (V3d_Viewer::*)( const Graphic3d_TypeOfShadingModel  ) ) static_cast<void (V3d_Viewer::*)( const Graphic3d_TypeOfShadingModel  ) >(&V3d_Viewer::SetDefaultShadingModel),
             R"#(Gives the default type of SHADING.)#"  , py::arg("theType"))
        .def("DefaultTypeOfView",
             (V3d_TypeOfView (V3d_Viewer::*)() const) static_cast<V3d_TypeOfView (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultTypeOfView),
             R"#(Returns the default type of View (orthographic or perspective projection) to be returned by CreateView() method.)#" )
        .def("SetDefaultTypeOfView",
             (void (V3d_Viewer::*)( const V3d_TypeOfView  ) ) static_cast<void (V3d_Viewer::*)( const V3d_TypeOfView  ) >(&V3d_Viewer::SetDefaultTypeOfView),
             R"#(Set the default type of View (orthographic or perspective projection) to be returned by CreateView() method.)#"  , py::arg("theType"))
        .def("DefaultBackgroundColor",
             (Quantity_Color (V3d_Viewer::*)() const) static_cast<Quantity_Color (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultBackgroundColor),
             R"#(Returns the default background colour object.)#" )
        .def("DefaultBgGradientColors",
             (void (V3d_Viewer::*)( Quantity_Color & ,  Quantity_Color &  ) const) static_cast<void (V3d_Viewer::*)( Quantity_Color & ,  Quantity_Color &  ) const>(&V3d_Viewer::DefaultBgGradientColors),
             R"#(Returns the gradient background colour objects of the view.)#"  , py::arg("theColor1"),  py::arg("theColor2"))
        .def("GetAllZLayers",
             (void (V3d_Viewer::*)( NCollection_Sequence<Standard_Integer> &  ) const) static_cast<void (V3d_Viewer::*)( NCollection_Sequence<Standard_Integer> &  ) const>(&V3d_Viewer::GetAllZLayers),
             R"#(Return all Z layer ids in sequence ordered by overlay level from lowest layer to highest ( foreground ). The first layer ID in sequence is the default layer that can't be removed.)#"  , py::arg("theLayerSeq"))
        .def("AddZLayer",
             (Standard_Boolean (V3d_Viewer::*)( Graphic3d_ZLayerId &  ) ) static_cast<Standard_Boolean (V3d_Viewer::*)( Graphic3d_ZLayerId &  ) >(&V3d_Viewer::AddZLayer),
             R"#(Add a new top-level Z layer to all managed views and get its ID as <theLayerId> value. The Z layers are controlled entirely by viewer, it is not possible to add a layer to a particular view. The method returns Standard_False if the layer can not be created. The layer mechanism allows to display structures in higher layers in overlay of structures in lower layers.)#"  , py::arg("theLayerId"))
        .def("RemoveZLayer",
             (Standard_Boolean (V3d_Viewer::*)( const Graphic3d_ZLayerId  ) ) static_cast<Standard_Boolean (V3d_Viewer::*)( const Graphic3d_ZLayerId  ) >(&V3d_Viewer::RemoveZLayer),
             R"#(Remove Z layer with ID <theLayerId>. Method returns Standard_False if the layer can not be removed or doesn't exists. By default, there are always default bottom-level layer that can't be removed.)#"  , py::arg("theLayerId"))
        .def("ZLayerSettings",
             (Graphic3d_ZLayerSettings (V3d_Viewer::*)( const Graphic3d_ZLayerId  ) ) static_cast<Graphic3d_ZLayerSettings (V3d_Viewer::*)( const Graphic3d_ZLayerId  ) >(&V3d_Viewer::ZLayerSettings),
             R"#(Returns the settings of a single Z layer.)#"  , py::arg("theLayerId"))
        .def("SetZLayerSettings",
             (void (V3d_Viewer::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) ) static_cast<void (V3d_Viewer::*)( const Graphic3d_ZLayerId ,  const Graphic3d_ZLayerSettings &  ) >(&V3d_Viewer::SetZLayerSettings),
             R"#(Sets the settings for a single Z layer.)#"  , py::arg("theLayerId"),  py::arg("theSettings"))
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
        .def("SetDefaultLights",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::SetDefaultLights),
             R"#(Defines default lights: positional-light 0.3 0. 0. directional-light V3d_XnegYposZpos directional-light V3d_XnegYneg ambient-light)#" )
        .def("SetLightOn",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) >(&V3d_Viewer::SetLightOn),
             R"#(Activates MyLight in the viewer.)#"  , py::arg("theLight"))
        .def("SetLightOn",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::SetLightOn),
             R"#(Activates all the lights defined in this viewer.)#" )
        .def("SetLightOff",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) >(&V3d_Viewer::SetLightOff),
             R"#(Deactivates MyLight in this viewer.)#"  , py::arg("theLight"))
        .def("SetLightOff",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::SetLightOff),
             R"#(Deactivate all the Lights defined in this viewer.)#" )
        .def("AddLight",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) >(&V3d_Viewer::AddLight),
             R"#(Adds Light in Sequence Of Lights.)#"  , py::arg("theLight"))
        .def("DelLight",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) >(&V3d_Viewer::DelLight),
             R"#(Delete Light in Sequence Of Lights.)#"  , py::arg("theLight"))
        .def("UpdateLights",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::UpdateLights),
             R"#(Updates the lights of all the views of a viewer.)#" )
        .def("IsGlobalLight",
             (Standard_Boolean (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) const) static_cast<Standard_Boolean (V3d_Viewer::*)( const opencascade::handle<V3d_Light> &  ) const>(&V3d_Viewer::IsGlobalLight),
             R"#(None)#"  , py::arg("TheLight"))
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
        .def("Erase",
             (void (V3d_Viewer::*)() const) static_cast<void (V3d_Viewer::*)() const>(&V3d_Viewer::Erase),
             R"#(Erase all Objects in All the views.)#" )
        .def("UnHighlight",
             (void (V3d_Viewer::*)() const) static_cast<void (V3d_Viewer::*)() const>(&V3d_Viewer::UnHighlight),
             R"#(UnHighlight all Objects in All the views.)#" )
        .def("ComputedMode",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::ComputedMode),
             R"#(returns true if the computed mode can be used.)#" )
        .def("SetComputedMode",
             (void (V3d_Viewer::*)( const Standard_Boolean  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Boolean  ) >(&V3d_Viewer::SetComputedMode),
             R"#(Set if the computed mode can be used.)#"  , py::arg("theMode"))
        .def("DefaultComputedMode",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::DefaultComputedMode),
             R"#(returns true if by default the computed mode must be used.)#" )
        .def("SetDefaultComputedMode",
             (void (V3d_Viewer::*)( const Standard_Boolean  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Boolean  ) >(&V3d_Viewer::SetDefaultComputedMode),
             R"#(Set if by default the computed mode must be used.)#"  , py::arg("theMode"))
        .def("PrivilegedPlane",
             (const gp_Ax3 & (V3d_Viewer::*)() const) static_cast<const gp_Ax3 & (V3d_Viewer::*)() const>(&V3d_Viewer::PrivilegedPlane),
             R"#()#" )
        .def("SetPrivilegedPlane",
             (void (V3d_Viewer::*)( const gp_Ax3 &  ) ) static_cast<void (V3d_Viewer::*)( const gp_Ax3 &  ) >(&V3d_Viewer::SetPrivilegedPlane),
             R"#(None)#"  , py::arg("thePlane"))
        .def("DisplayPrivilegedPlane",
             (void (V3d_Viewer::*)( const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Boolean ,  const Standard_Real  ) >(&V3d_Viewer::DisplayPrivilegedPlane),
             R"#(None)#"  , py::arg("theOnOff"),  py::arg("theSize")=static_cast<const Standard_Real>(1))
        .def("ActivateGrid",
             (void (V3d_Viewer::*)( const Aspect_GridType ,  const Aspect_GridDrawMode  ) ) static_cast<void (V3d_Viewer::*)( const Aspect_GridType ,  const Aspect_GridDrawMode  ) >(&V3d_Viewer::ActivateGrid),
             R"#(Activates the grid in all views of <me>.)#"  , py::arg("aGridType"),  py::arg("aGridDrawMode"))
        .def("DeactivateGrid",
             (void (V3d_Viewer::*)() ) static_cast<void (V3d_Viewer::*)() >(&V3d_Viewer::DeactivateGrid),
             R"#(Deactivates the grid in all views of <me>.)#" )
        .def("SetGridEcho",
             (void (V3d_Viewer::*)( const Standard_Boolean  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Boolean  ) >(&V3d_Viewer::SetGridEcho),
             R"#(Show/Don't show grid echo to the hit point. If TRUE,the grid echo will be shown at ConvertToGrid() time.)#"  , py::arg("showGrid")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetGridEcho",
             (void (V3d_Viewer::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<Graphic3d_AspectMarker3d> &  ) >(&V3d_Viewer::SetGridEcho),
             R"#(Show grid echo <aMarker> to the hit point. Warning: When the grid echo marker is not set, a default marker is build with the attributes: marker type : Aspect_TOM_STAR marker color : Quantity_NOC_GRAY90 marker size : 3.0)#"  , py::arg("aMarker"))
        .def("GridEcho",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::GridEcho),
             R"#(Returns TRUE when grid echo must be displayed at hit point.)#" )
        .def("IsActive",
             (Standard_Boolean (V3d_Viewer::*)() const) static_cast<Standard_Boolean (V3d_Viewer::*)() const>(&V3d_Viewer::IsActive),
             R"#(Returns Standard_True if a grid is activated in <me>.)#" )
        .def("Grid",
             (opencascade::handle<Aspect_Grid> (V3d_Viewer::*)() const) static_cast<opencascade::handle<Aspect_Grid> (V3d_Viewer::*)() const>(&V3d_Viewer::Grid),
             R"#(Returns the defined grid in <me>.)#" )
        .def("GridType",
             (Aspect_GridType (V3d_Viewer::*)() const) static_cast<Aspect_GridType (V3d_Viewer::*)() const>(&V3d_Viewer::GridType),
             R"#(Returns the current grid type defined in <me>.)#" )
        .def("GridDrawMode",
             (Aspect_GridDrawMode (V3d_Viewer::*)() const) static_cast<Aspect_GridDrawMode (V3d_Viewer::*)() const>(&V3d_Viewer::GridDrawMode),
             R"#(Returns the current grid draw mode defined in <me>.)#" )
        .def("SetRectangularGridValues",
             (void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_Viewer::SetRectangularGridValues),
             R"#(Sets the definition of the rectangular grid. <XOrigin>, <YOrigin> defines the origin of the grid. <XStep> defines the interval between 2 vertical lines. <YStep> defines the interval between 2 horizontal lines. <RotationAngle> defines the rotation angle of the grid.)#"  , py::arg("XOrigin"),  py::arg("YOrigin"),  py::arg("XStep"),  py::arg("YStep"),  py::arg("RotationAngle"))
        .def("SetCircularGridValues",
             (void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Real  ) >(&V3d_Viewer::SetCircularGridValues),
             R"#(Sets the definition of the circular grid. <XOrigin>, <YOrigin> defines the origin of the grid. <RadiusStep> defines the interval between 2 circles. <DivisionNumber> defines the section number of one half circle. <RotationAngle> defines the rotation angle of the grid.)#"  , py::arg("XOrigin"),  py::arg("YOrigin"),  py::arg("RadiusStep"),  py::arg("DivisionNumber"),  py::arg("RotationAngle"))
        .def("SetCircularGridGraphicValues",
             (void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real  ) >(&V3d_Viewer::SetCircularGridGraphicValues),
             R"#(Sets the location and the size of the grid. <XSize> defines the width of the grid. <YSize> defines the height of the grid. <OffSet> defines the displacement along the plane normal.)#"  , py::arg("Radius"),  py::arg("OffSet"))
        .def("SetRectangularGridGraphicValues",
             (void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_Viewer::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_Viewer::SetRectangularGridGraphicValues),
             R"#(Sets the location and the size of the grid. <XSize> defines the width of the grid. <YSize> defines the height of the grid. <OffSet> defines the displacement along the plane normal.)#"  , py::arg("XSize"),  py::arg("YSize"),  py::arg("OffSet"))
        .def("ShowGridEcho",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_View> & ,  const Graphic3d_Vertex &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_View> & ,  const Graphic3d_Vertex &  ) >(&V3d_Viewer::ShowGridEcho),
             R"#(Display grid echo at requested point in the view.)#"  , py::arg("theView"),  py::arg("thePoint"))
        .def("HideGridEcho",
             (void (V3d_Viewer::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (V3d_Viewer::*)( const opencascade::handle<V3d_View> &  ) >(&V3d_Viewer::HideGridEcho),
             R"#(Temporarly hide grid echo.)#"  , py::arg("theView"))
        .def("SetDefaultBackgroundColor",
             (void (V3d_Viewer::*)( const Quantity_TypeOfColor ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (V3d_Viewer::*)( const Quantity_TypeOfColor ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&V3d_Viewer::SetDefaultBackgroundColor),
             R"#(Defines the default base colour of views attached to the Viewer by supplying the type of colour definition and the three component values.)#"  , py::arg("theType"),  py::arg("theV1"),  py::arg("theV2"),  py::arg("theV3"))
    // methods using call by reference i.s.o. return
        .def("RectangularGridValues",
             []( V3d_Viewer &self   ){ Standard_Real  XOrigin; Standard_Real  YOrigin; Standard_Real  XStep; Standard_Real  YStep; Standard_Real  RotationAngle; self.RectangularGridValues(XOrigin,YOrigin,XStep,YStep,RotationAngle); return std::make_tuple(XOrigin,YOrigin,XStep,YStep,RotationAngle); },
             R"#(Returns the definition of the rectangular grid.)#" )
        .def("CircularGridValues",
             []( V3d_Viewer &self   ){ Standard_Real  XOrigin; Standard_Real  YOrigin; Standard_Real  RadiusStep; Standard_Integer  DivisionNumber; Standard_Real  RotationAngle; self.CircularGridValues(XOrigin,YOrigin,RadiusStep,DivisionNumber,RotationAngle); return std::make_tuple(XOrigin,YOrigin,RadiusStep,DivisionNumber,RotationAngle); },
             R"#(Returns the definition of the circular grid.)#" )
        .def("CircularGridGraphicValues",
             []( V3d_Viewer &self   ){ Standard_Real  Radius; Standard_Real  OffSet; self.CircularGridGraphicValues(Radius,OffSet); return std::make_tuple(Radius,OffSet); },
             R"#(Returns the location and the size of the grid.)#" )
        .def("RectangularGridGraphicValues",
             []( V3d_Viewer &self   ){ Standard_Real  XSize; Standard_Real  YSize; Standard_Real  OffSet; self.RectangularGridGraphicValues(XSize,YSize,OffSet); return std::make_tuple(XSize,YSize,OffSet); },
             R"#(Returns the location and the size of the grid.)#" )
        .def("DefaultBackgroundColor",
             []( V3d_Viewer &self , const Quantity_TypeOfColor theType ){ Standard_Real  theV1; Standard_Real  theV2; Standard_Real  theV3; self.DefaultBackgroundColor(theType,theV1,theV2,theV3); return std::make_tuple(theV1,theV2,theV3); },
             R"#(None)#"  , py::arg("theType"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_Viewer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_Viewer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_DirectionalLight ,opencascade::handle<V3d_DirectionalLight>  , V3d_PositionLight >>(m.attr("V3d_DirectionalLight"))
        .def(py::init< const V3d_TypeOfOrientation,const Quantity_Color &,const Standard_Boolean >()  , py::arg("theDirection")=static_cast<const V3d_TypeOfOrientation>(V3d_XposYposZpos),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theIsHeadlight")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const gp_Dir &,const Quantity_Color &,const Standard_Boolean >()  , py::arg("theDirection"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theIsHeadlight")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const V3d_TypeOfOrientation,const Quantity_Color &,const Standard_Boolean >()  , py::arg("theViewer"),  py::arg("theDirection")=static_cast<const V3d_TypeOfOrientation>(V3d_XposYposZpos),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theIsHeadlight")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Quantity_Color &,const Standard_Boolean >()  , py::arg("theViewer"),  py::arg("theXt"),  py::arg("theYt"),  py::arg("theZt"),  py::arg("theXp"),  py::arg("theYp"),  py::arg("theZp"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theIsHeadlight")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_DirectionalLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_DirectionalLight::*)() const>(&V3d_DirectionalLight::DynamicType),
             R"#(None)#" )
        .def("SetDirection",
             (void (V3d_DirectionalLight::*)( V3d_TypeOfOrientation  ) ) static_cast<void (V3d_DirectionalLight::*)( V3d_TypeOfOrientation  ) >(&V3d_DirectionalLight::SetDirection),
             R"#(Defines the direction of the light source by a predefined orientation.)#"  , py::arg("theDirection"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_DirectionalLight::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_DirectionalLight::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_PositionalLight ,opencascade::handle<V3d_PositionalLight>  , V3d_PositionLight >>(m.attr("V3d_PositionalLight"))
        .def(py::init< const gp_Pnt &,const Quantity_Color & >()  , py::arg("thePos"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE) )
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const Standard_Real,const Standard_Real,const Standard_Real,const Quantity_Color &,const Standard_Real,const Standard_Real >()  , py::arg("theViewer"),  py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theConstAttenuation")=static_cast<const Standard_Real>(1.0),  py::arg("theLinearAttenuation")=static_cast<const Standard_Real>(0.0) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_PositionalLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_PositionalLight::*)() const>(&V3d_PositionalLight::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_PositionalLight::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_PositionalLight::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<V3d_SpotLight ,opencascade::handle<V3d_SpotLight>  , V3d_PositionLight >>(m.attr("V3d_SpotLight"))
        .def(py::init< const gp_Pnt &,const V3d_TypeOfOrientation,const Quantity_Color & >()  , py::arg("thePos"),  py::arg("theDirection")=static_cast<const V3d_TypeOfOrientation>(V3d_XnegYnegZpos),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE) )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const Quantity_Color & >()  , py::arg("thePos"),  py::arg("theDirection"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE) )
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const Standard_Real,const Standard_Real,const Standard_Real,const V3d_TypeOfOrientation,const Quantity_Color &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theViewer"),  py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDirection")=static_cast<const V3d_TypeOfOrientation>(V3d_XnegYnegZpos),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theConstAttenuation")=static_cast<const Standard_Real>(1.0),  py::arg("theLinearAttenuation")=static_cast<const Standard_Real>(0.0),  py::arg("theConcentration")=static_cast<const Standard_Real>(1.0),  py::arg("theAngle")=static_cast<const Standard_Real>(0.523599) )
        .def(py::init< const opencascade::handle<V3d_Viewer> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Quantity_Color &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theViewer"),  py::arg("theXt"),  py::arg("theYt"),  py::arg("theZt"),  py::arg("theXp"),  py::arg("theYp"),  py::arg("theZp"),  py::arg("theColor")=static_cast<const Quantity_Color &>(Quantity_NOC_WHITE),  py::arg("theConstAttenuation")=static_cast<const Standard_Real>(1.0),  py::arg("theLinearAttenuation")=static_cast<const Standard_Real>(0.0),  py::arg("theConcentration")=static_cast<const Standard_Real>(1.0),  py::arg("theAngle")=static_cast<const Standard_Real>(0.523599) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (V3d_SpotLight::*)() const) static_cast<const opencascade::handle<Standard_Type> & (V3d_SpotLight::*)() const>(&V3d_SpotLight::DynamicType),
             R"#(None)#" )
        .def("SetDirection",
             (void (V3d_SpotLight::*)( V3d_TypeOfOrientation  ) ) static_cast<void (V3d_SpotLight::*)( V3d_TypeOfOrientation  ) >(&V3d_SpotLight::SetDirection),
             R"#(Defines the direction of the light source according to a predefined directional vector.)#"  , py::arg("theOrientation"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&V3d_SpotLight::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&V3d_SpotLight::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/V3d_TypeOfBackfacingModel.hxx
// ./opencascade/V3d_TypeOfRepresentation.hxx
// ./opencascade/V3d_View.hxx
// ./opencascade/V3d_ListOfView.hxx
// ./opencascade/V3d_DirectionalLight.hxx
// ./opencascade/V3d_ViewerPointer.hxx
// ./opencascade/V3d_CircularGrid.hxx
// ./opencascade/V3d_TypeOfLight.hxx
// ./opencascade/V3d_SpotLight.hxx
// ./opencascade/V3d_PositionLight.hxx
// ./opencascade/V3d_Light.hxx
// ./opencascade/V3d_TypeOfOrientation.hxx
// ./opencascade/V3d.hxx
// ./opencascade/V3d_Coordinate.hxx
// ./opencascade/V3d_ListOfLight.hxx
// ./opencascade/V3d_TypeOfPickCamera.hxx
// ./opencascade/V3d_TypeOfAxe.hxx
// ./opencascade/V3d_BadValue.hxx
// ./opencascade/V3d_TypeOfShadingModel.hxx
// ./opencascade/V3d_TypeOfVisualization.hxx
// ./opencascade/V3d_AmbientLight.hxx
// ./opencascade/V3d_ImageDumpOptions.hxx
// ./opencascade/V3d_UnMapped.hxx
// ./opencascade/V3d_Parameter.hxx
// ./opencascade/V3d_Viewer.hxx
// ./opencascade/V3d_TypeOfView.hxx
// ./opencascade/V3d_ViewPointer.hxx
// ./opencascade/V3d_PositionalLight.hxx
// ./opencascade/V3d_StereoDumpOptions.hxx
// ./opencascade/V3d_Trihedron.hxx
// ./opencascade/V3d_TypeOfPickLight.hxx
// ./opencascade/V3d_Plane.hxx
// ./opencascade/V3d_RectangularGrid.hxx

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
