
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <V3d_Viewer.hxx>
#include <V3d_Viewer.hxx>
#include <Graphic3d_Group.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_Group.hxx>
#include <V3d_View.hxx>
#include <Aspect_Grid.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <V3d_BadValue.hxx>
#include <V3d_CircularGrid.hxx>
#include <V3d_RectangularGrid.hxx>
#include <V3d_View.hxx>
#include <V3d_View.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_Group.hxx>
#include <Aspect_Grid.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <V3d_BadValue.hxx>
#include <V3d_UnMapped.hxx>
#include <V3d_View.hxx>

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
void register_V3d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("V3d", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<V3d_TypeOfPickCamera>(m, "V3d_TypeOfPickCamera",R"#(None)#")
        .value("V3d_POSITIONCAMERA",V3d_TypeOfPickCamera::V3d_POSITIONCAMERA)
        .value("V3d_SPACECAMERA",V3d_TypeOfPickCamera::V3d_SPACECAMERA)
        .value("V3d_RADIUSTEXTCAMERA",V3d_TypeOfPickCamera::V3d_RADIUSTEXTCAMERA)
        .value("V3d_ExtRADIUSCAMERA",V3d_TypeOfPickCamera::V3d_ExtRADIUSCAMERA)
        .value("V3d_IntRADIUSCAMERA",V3d_TypeOfPickCamera::V3d_IntRADIUSCAMERA)
        .value("V3d_NOTHINGCAMERA",V3d_TypeOfPickCamera::V3d_NOTHINGCAMERA).export_values();
    py::enum_<V3d_TypeOfBackfacingModel>(m, "V3d_TypeOfBackfacingModel",R"#(Modes of display of back faces in the view)#")
        .value("V3d_TOBM_AUTOMATIC",V3d_TypeOfBackfacingModel::V3d_TOBM_AUTOMATIC)
        .value("V3d_TOBM_ALWAYS_DISPLAYED",V3d_TypeOfBackfacingModel::V3d_TOBM_ALWAYS_DISPLAYED)
        .value("V3d_TOBM_NEVER_DISPLAYED",V3d_TypeOfBackfacingModel::V3d_TOBM_NEVER_DISPLAYED).export_values();
    py::enum_<V3d_TypeOfPickLight>(m, "V3d_TypeOfPickLight",R"#(None)#")
        .value("V3d_POSITIONLIGHT",V3d_TypeOfPickLight::V3d_POSITIONLIGHT)
        .value("V3d_SPACELIGHT",V3d_TypeOfPickLight::V3d_SPACELIGHT)
        .value("V3d_RADIUSTEXTLIGHT",V3d_TypeOfPickLight::V3d_RADIUSTEXTLIGHT)
        .value("V3d_ExtRADIUSLIGHT",V3d_TypeOfPickLight::V3d_ExtRADIUSLIGHT)
        .value("V3d_IntRADIUSLIGHT",V3d_TypeOfPickLight::V3d_IntRADIUSLIGHT)
        .value("V3d_NOTHING",V3d_TypeOfPickLight::V3d_NOTHING).export_values();
    py::enum_<V3d_TypeOfOrientation>(m, "V3d_TypeOfOrientation",R"#(Determines the type of orientation as a combination of standard DX/DY/DZ directions. This enumeration defines a model orientation looking towards the user's eye, which is an opposition to Camera main direction. For example, V3d_Xneg defines +X Camera main direction.)#")
        .value("V3d_Xpos",V3d_TypeOfOrientation::V3d_Xpos)
        .value("V3d_Ypos",V3d_TypeOfOrientation::V3d_Ypos)
        .value("V3d_Zpos",V3d_TypeOfOrientation::V3d_Zpos)
        .value("V3d_Xneg",V3d_TypeOfOrientation::V3d_Xneg)
        .value("V3d_Yneg",V3d_TypeOfOrientation::V3d_Yneg)
        .value("V3d_Zneg",V3d_TypeOfOrientation::V3d_Zneg)
        .value("V3d_XposYpos",V3d_TypeOfOrientation::V3d_XposYpos)
        .value("V3d_XposZpos",V3d_TypeOfOrientation::V3d_XposZpos)
        .value("V3d_YposZpos",V3d_TypeOfOrientation::V3d_YposZpos)
        .value("V3d_XnegYneg",V3d_TypeOfOrientation::V3d_XnegYneg)
        .value("V3d_XnegYpos",V3d_TypeOfOrientation::V3d_XnegYpos)
        .value("V3d_XnegZneg",V3d_TypeOfOrientation::V3d_XnegZneg)
        .value("V3d_XnegZpos",V3d_TypeOfOrientation::V3d_XnegZpos)
        .value("V3d_YnegZneg",V3d_TypeOfOrientation::V3d_YnegZneg)
        .value("V3d_YnegZpos",V3d_TypeOfOrientation::V3d_YnegZpos)
        .value("V3d_XposYneg",V3d_TypeOfOrientation::V3d_XposYneg)
        .value("V3d_XposZneg",V3d_TypeOfOrientation::V3d_XposZneg)
        .value("V3d_YposZneg",V3d_TypeOfOrientation::V3d_YposZneg)
        .value("V3d_XposYposZpos",V3d_TypeOfOrientation::V3d_XposYposZpos)
        .value("V3d_XposYnegZpos",V3d_TypeOfOrientation::V3d_XposYnegZpos)
        .value("V3d_XposYposZneg",V3d_TypeOfOrientation::V3d_XposYposZneg)
        .value("V3d_XnegYposZpos",V3d_TypeOfOrientation::V3d_XnegYposZpos)
        .value("V3d_XposYnegZneg",V3d_TypeOfOrientation::V3d_XposYnegZneg)
        .value("V3d_XnegYposZneg",V3d_TypeOfOrientation::V3d_XnegYposZneg)
        .value("V3d_XnegYnegZpos",V3d_TypeOfOrientation::V3d_XnegYnegZpos)
        .value("V3d_XnegYnegZneg",V3d_TypeOfOrientation::V3d_XnegYnegZneg)
        .value("V3d_TypeOfOrientation_Zup_AxoLeft",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_AxoLeft)
        .value("V3d_TypeOfOrientation_Zup_AxoRight",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_AxoRight)
        .value("V3d_TypeOfOrientation_Zup_Front",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_Front)
        .value("V3d_TypeOfOrientation_Zup_Back",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_Back)
        .value("V3d_TypeOfOrientation_Zup_Top",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_Top)
        .value("V3d_TypeOfOrientation_Zup_Bottom",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_Bottom)
        .value("V3d_TypeOfOrientation_Zup_Left",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_Left)
        .value("V3d_TypeOfOrientation_Zup_Right",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Zup_Right)
        .value("V3d_TypeOfOrientation_Yup_AxoLeft",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_AxoLeft)
        .value("V3d_TypeOfOrientation_Yup_AxoRight",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_AxoRight)
        .value("V3d_TypeOfOrientation_Yup_Front",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_Front)
        .value("V3d_TypeOfOrientation_Yup_Back",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_Back)
        .value("V3d_TypeOfOrientation_Yup_Top",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_Top)
        .value("V3d_TypeOfOrientation_Yup_Bottom",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_Bottom)
        .value("V3d_TypeOfOrientation_Yup_Left",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_Left)
        .value("V3d_TypeOfOrientation_Yup_Right",V3d_TypeOfOrientation::V3d_TypeOfOrientation_Yup_Right).export_values();
    py::enum_<V3d_TypeOfView>(m, "V3d_TypeOfView",R"#(Defines the type of projection of the view.)#")
        .value("V3d_ORTHOGRAPHIC",V3d_TypeOfView::V3d_ORTHOGRAPHIC)
        .value("V3d_PERSPECTIVE",V3d_TypeOfView::V3d_PERSPECTIVE).export_values();
    py::enum_<V3d_StereoDumpOptions>(m, "V3d_StereoDumpOptions",R"#(Options to be used with image dumping. Notice that the value will have no effect with disabled stereo output.)#")
        .value("V3d_SDO_MONO",V3d_StereoDumpOptions::V3d_SDO_MONO)
        .value("V3d_SDO_LEFT_EYE",V3d_StereoDumpOptions::V3d_SDO_LEFT_EYE)
        .value("V3d_SDO_RIGHT_EYE",V3d_StereoDumpOptions::V3d_SDO_RIGHT_EYE)
        .value("V3d_SDO_BLENDED",V3d_StereoDumpOptions::V3d_SDO_BLENDED).export_values();
    py::enum_<V3d_TypeOfAxe>(m, "V3d_TypeOfAxe",R"#(Determines the axis type through the coordinates X, Y, Z.)#")
        .value("V3d_X",V3d_TypeOfAxe::V3d_X)
        .value("V3d_Y",V3d_TypeOfAxe::V3d_Y)
        .value("V3d_Z",V3d_TypeOfAxe::V3d_Z).export_values();
    py::enum_<V3d_TypeOfVisualization>(m, "V3d_TypeOfVisualization",R"#(Determines the type of visualization in the view, either WIREFRAME or ZBUFFER (shading).)#")
        .value("V3d_WIREFRAME",V3d_TypeOfVisualization::V3d_WIREFRAME)
        .value("V3d_ZBUFFER",V3d_TypeOfVisualization::V3d_ZBUFFER).export_values();
    py::enum_<V3d_TypeOfRepresentation>(m, "V3d_TypeOfRepresentation",R"#(None)#")
        .value("V3d_SIMPLE",V3d_TypeOfRepresentation::V3d_SIMPLE)
        .value("V3d_COMPLETE",V3d_TypeOfRepresentation::V3d_COMPLETE)
        .value("V3d_PARTIAL",V3d_TypeOfRepresentation::V3d_PARTIAL)
        .value("V3d_SAMELAST",V3d_TypeOfRepresentation::V3d_SAMELAST).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<V3d_View> >(m,"V3d_ListOfView");  
    preregister_template_NCollection_List<opencascade::handle<Graphic3d_CLight> >(m,"V3d_ListOfLight");  

// classes forward declarations only
    py::class_<V3d , shared_ptr<V3d>  >(m,"V3d",R"#(This package contains the set of commands and services of the 3D Viewer. It provides a set of high level commands to control the views and viewing modes.)#");
    py::class_<V3d_AmbientLight ,opencascade::handle<V3d_AmbientLight>  , Graphic3d_CLight >(m,"V3d_AmbientLight",R"#(Creation of an ambient light source in a viewer.Creation of an ambient light source in a viewer.)#");
    py::class_<V3d_CircularGrid ,opencascade::handle<V3d_CircularGrid>  , Aspect_CircularGrid >(m,"V3d_CircularGrid",R"#()#");
    py::class_<V3d_ImageDumpOptions , shared_ptr<V3d_ImageDumpOptions>  >(m,"V3d_ImageDumpOptions",R"#(The structure defines options for image dump functionality.)#");
    py::class_<V3d_Plane ,opencascade::handle<V3d_Plane>  , Standard_Transient >(m,"V3d_Plane",R"#(Obsolete clip plane presentation class. Ported on new core of Graphic3d_ClipPlane approach. Please access Graphic3d_ClipPlane via ClipPlane() method to use it for standard clipping workflow. Example of use:Obsolete clip plane presentation class. Ported on new core of Graphic3d_ClipPlane approach. Please access Graphic3d_ClipPlane via ClipPlane() method to use it for standard clipping workflow. Example of use:Obsolete clip plane presentation class. Ported on new core of Graphic3d_ClipPlane approach. Please access Graphic3d_ClipPlane via ClipPlane() method to use it for standard clipping workflow. Example of use:)#");
    py::class_<V3d_PositionLight ,opencascade::handle<V3d_PositionLight>  , Graphic3d_CLight >(m,"V3d_PositionLight",R"#(Base class for Positional, Spot and Directional Light classes.Base class for Positional, Spot and Directional Light classes.)#");
    py::class_<V3d_RectangularGrid ,opencascade::handle<V3d_RectangularGrid>  , Aspect_RectangularGrid >(m,"V3d_RectangularGrid",R"#()#");
    py::class_<V3d_Trihedron ,opencascade::handle<V3d_Trihedron>  , Standard_Transient >(m,"V3d_Trihedron",R"#(Class for presentation of zbuffer trihedron object.Class for presentation of zbuffer trihedron object.)#");
    py::class_<V3d_View ,opencascade::handle<V3d_View>  , Standard_Transient >(m,"V3d_View",R"#(Defines the application object VIEW for the VIEWER application. The methods of this class allow the editing and inquiring the parameters linked to the view. Provides a set of services common to all types of view. Warning: The default parameters are defined by the class Viewer (Example : SetDefaultViewSize()). Certain methods are mouse oriented, and it is necessary to know the difference between the start and the continuation of this gesture in putting the method into operation. Example : Shifting the eye-view along the screen axes.Defines the application object VIEW for the VIEWER application. The methods of this class allow the editing and inquiring the parameters linked to the view. Provides a set of services common to all types of view. Warning: The default parameters are defined by the class Viewer (Example : SetDefaultViewSize()). Certain methods are mouse oriented, and it is necessary to know the difference between the start and the continuation of this gesture in putting the method into operation. Example : Shifting the eye-view along the screen axes.Defines the application object VIEW for the VIEWER application. The methods of this class allow the editing and inquiring the parameters linked to the view. Provides a set of services common to all types of view. Warning: The default parameters are defined by the class Viewer (Example : SetDefaultViewSize()). Certain methods are mouse oriented, and it is necessary to know the difference between the start and the continuation of this gesture in putting the method into operation. Example : Shifting the eye-view along the screen axes.)#");
    py::class_<V3d_Viewer ,opencascade::handle<V3d_Viewer>  , Standard_Transient >(m,"V3d_Viewer",R"#(Defines services on Viewer type objects. The methods of this class allow editing and interrogation of the parameters linked to the viewer its friend classes (View,light,plane).Defines services on Viewer type objects. The methods of this class allow editing and interrogation of the parameters linked to the viewer its friend classes (View,light,plane).)#");
    py::class_<V3d_DirectionalLight ,opencascade::handle<V3d_DirectionalLight>  , V3d_PositionLight >(m,"V3d_DirectionalLight",R"#(Directional light source for a viewer.Directional light source for a viewer.)#");
    py::class_<V3d_PositionalLight ,opencascade::handle<V3d_PositionalLight>  , V3d_PositionLight >(m,"V3d_PositionalLight",R"#(Creation and modification of an isolated (positional) light source. It is also defined by the color and two attenuation factors ConstAttentuation() and LinearAttentuation(). The resulting attenuation factor determining the illumination of a surface depends on the following formula: Where Distance is the distance of the isolated source from the surface.Creation and modification of an isolated (positional) light source. It is also defined by the color and two attenuation factors ConstAttentuation() and LinearAttentuation(). The resulting attenuation factor determining the illumination of a surface depends on the following formula: Where Distance is the distance of the isolated source from the surface.)#");
    py::class_<V3d_SpotLight ,opencascade::handle<V3d_SpotLight>  , V3d_PositionLight >(m,"V3d_SpotLight",R"#(Creation and modification of a spot. The attenuation factor F determines the illumination of a surface: Where Distance is the distance from the source to the surface. The default values (1.0, 0.0) correspond to a minimum of attenuation. The concentration factor determines the dispersion of the light on the surface, the default value (1.0) corresponds to a minimum of dispersion.Creation and modification of a spot. The attenuation factor F determines the illumination of a surface: Where Distance is the distance from the source to the surface. The default values (1.0, 0.0) correspond to a minimum of attenuation. The concentration factor determines the dispersion of the light on the surface, the default value (1.0) corresponds to a minimum of dispersion.)#");

};

// user-defined post-inclusion per module

// user-defined post
