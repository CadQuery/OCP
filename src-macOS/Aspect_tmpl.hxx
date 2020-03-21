#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Aspect_IdentDefinitionError.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>

// module includes
#include <Aspect_NeutralWindow.hxx>
#include <Aspect_AspectLineDefinitionError.hxx>
#include <Aspect_TypeOfResize.hxx>
#include <Aspect_GenId.hxx>
#include <Aspect_TypeOfStyleText.hxx>
#include <Aspect_Background.hxx>
#include <Aspect_Drawable.hxx>
#include <Aspect_GradientBackground.hxx>
#include <Aspect_TypeOfColorScaleData.hxx>
#include <Aspect_AspectFillAreaDefinitionError.hxx>
#include <Aspect_Units.hxx>
#include <Aspect_AspectMarkerDefinitionError.hxx>
#include <Aspect_RenderingContext.hxx>
#include <Aspect_TypeOfColorScalePosition.hxx>
#include <Aspect_TypeOfMarker.hxx>
#include <Aspect_Grid.hxx>
#include <Aspect_WindowError.hxx>
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_TypeOfTriedronPosition.hxx>
#include <Aspect_RectangularGrid.hxx>
#include <Aspect_TypeOfFacingModel.hxx>
#include <Aspect_Window.hxx>
#include <Aspect_TypeOfLine.hxx>
#include <Aspect_TypeOfDisplayText.hxx>
#include <Aspect_Touch.hxx>
#include <Aspect_TypeOfHighlightMethod.hxx>
#include <Aspect_Display.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Aspect_WidthOfLine.hxx>
#include <Aspect_FBConfig.hxx>
#include <Aspect_IdentDefinitionError.hxx>
#include <Aspect_GridDrawMode.hxx>
#include <Aspect_TypeOfColorScaleOrientation.hxx>
#include <Aspect_ScrollDelta.hxx>
#include <Aspect_XWD.hxx>
#include <Aspect_TypeOfDeflection.hxx>
#include <Aspect_HatchStyle.hxx>
#include <Aspect_CircularGrid.hxx>
#include <Aspect_GraphicDeviceDefinitionError.hxx>
#include <Aspect_VKeyFlags.hxx>
#include <Aspect_GradientFillMethod.hxx>
#include <Aspect_DisplayConnectionDefinitionError.hxx>
#include <Aspect_InteriorStyle.hxx>
#include <Aspect_SequenceOfColor.hxx>
#include <Aspect_PolygonOffsetMode.hxx>
#include <Aspect_TouchMap.hxx>
#include <Aspect_Convert.hxx>
#include <Aspect_VKey.hxx>
#include <Aspect_XAtom.hxx>
#include <Aspect_GridType.hxx>
#include <Aspect_Handle.hxx>
#include <Aspect_FillMethod.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Aspect_NeutralWindow.hxx
// ./opencascade/Aspect_AspectLineDefinitionError.hxx
// ./opencascade/Aspect_TypeOfResize.hxx
// ./opencascade/Aspect_GenId.hxx
// ./opencascade/Aspect_TypeOfStyleText.hxx
// ./opencascade/Aspect_Background.hxx
// ./opencascade/Aspect_Drawable.hxx
// ./opencascade/Aspect_GradientBackground.hxx
// ./opencascade/Aspect_TypeOfColorScaleData.hxx
// ./opencascade/Aspect_AspectFillAreaDefinitionError.hxx
// ./opencascade/Aspect_Units.hxx
// ./opencascade/Aspect_AspectMarkerDefinitionError.hxx
// ./opencascade/Aspect_RenderingContext.hxx
// ./opencascade/Aspect_TypeOfColorScalePosition.hxx
// ./opencascade/Aspect_TypeOfMarker.hxx
// ./opencascade/Aspect_Grid.hxx
// ./opencascade/Aspect_WindowError.hxx
// ./opencascade/Aspect_WindowDefinitionError.hxx
// ./opencascade/Aspect_TypeOfTriedronPosition.hxx
// ./opencascade/Aspect_RectangularGrid.hxx
// ./opencascade/Aspect_TypeOfFacingModel.hxx
// ./opencascade/Aspect_Window.hxx
// ./opencascade/Aspect_TypeOfLine.hxx
// ./opencascade/Aspect_TypeOfDisplayText.hxx
// ./opencascade/Aspect_Touch.hxx
// ./opencascade/Aspect_TypeOfHighlightMethod.hxx
// ./opencascade/Aspect_Display.hxx
// ./opencascade/Aspect_DisplayConnection.hxx
// ./opencascade/Aspect_WidthOfLine.hxx
// ./opencascade/Aspect_FBConfig.hxx
// ./opencascade/Aspect_IdentDefinitionError.hxx
// ./opencascade/Aspect_GridDrawMode.hxx
// ./opencascade/Aspect_TypeOfColorScaleOrientation.hxx
// ./opencascade/Aspect_ScrollDelta.hxx
// ./opencascade/Aspect_XWD.hxx
// ./opencascade/Aspect_TypeOfDeflection.hxx
// ./opencascade/Aspect_HatchStyle.hxx
// ./opencascade/Aspect_CircularGrid.hxx
// ./opencascade/Aspect_GraphicDeviceDefinitionError.hxx
// ./opencascade/Aspect_VKeyFlags.hxx
// ./opencascade/Aspect_GradientFillMethod.hxx
// ./opencascade/Aspect_DisplayConnectionDefinitionError.hxx
// ./opencascade/Aspect_InteriorStyle.hxx
// ./opencascade/Aspect_SequenceOfColor.hxx
// ./opencascade/Aspect_PolygonOffsetMode.hxx
// ./opencascade/Aspect_TouchMap.hxx
// ./opencascade/Aspect_Convert.hxx
// ./opencascade/Aspect_VKey.hxx
// ./opencascade/Aspect_XAtom.hxx
// ./opencascade/Aspect_GridType.hxx
// ./opencascade/Aspect_Handle.hxx
// ./opencascade/Aspect_FillMethod.hxx

// user-defined post
