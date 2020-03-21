
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Quantity_ColorDefinitionError.hxx>
#include <Quantity_PeriodDefinitionError.hxx>
#include <Quantity_DateDefinitionError.hxx>
#include <Standard_OutOfRange.hxx>
#include <Quantity_Period.hxx>

// module includes
#include <Quantity_AbsorbedDose.hxx>
#include <Quantity_Acceleration.hxx>
#include <Quantity_AcousticIntensity.hxx>
#include <Quantity_Activity.hxx>
#include <Quantity_Admittance.hxx>
#include <Quantity_AmountOfSubstance.hxx>
#include <Quantity_AngularVelocity.hxx>
#include <Quantity_Area.hxx>
#include <Quantity_Array1OfColor.hxx>
#include <Quantity_Array2OfColor.hxx>
#include <Quantity_Capacitance.hxx>
#include <Quantity_Coefficient.hxx>
#include <Quantity_CoefficientOfExpansion.hxx>
#include <Quantity_Color.hxx>
#include <Quantity_ColorDefinitionError.hxx>
#include <Quantity_ColorHasher.hxx>
#include <Quantity_ColorRGBA.hxx>
#include <Quantity_ColorRGBAHasher.hxx>
#include <Quantity_Concentration.hxx>
#include <Quantity_Conductivity.hxx>
#include <Quantity_Constant.hxx>
#include <Quantity_Consumption.hxx>
#include <Quantity_Content.hxx>
#include <Quantity_Date.hxx>
#include <Quantity_DateDefinitionError.hxx>
#include <Quantity_Density.hxx>
#include <Quantity_DoseEquivalent.hxx>
#include <Quantity_ElectricCapacitance.hxx>
#include <Quantity_ElectricCharge.hxx>
#include <Quantity_ElectricCurrent.hxx>
#include <Quantity_ElectricFieldStrength.hxx>
#include <Quantity_ElectricPotential.hxx>
#include <Quantity_Energy.hxx>
#include <Quantity_Enthalpy.hxx>
#include <Quantity_Entropy.hxx>
#include <Quantity_Factor.hxx>
#include <Quantity_Force.hxx>
#include <Quantity_Frequency.hxx>
#include <Quantity_HArray1OfColor.hxx>
#include <Quantity_Illuminance.hxx>
#include <Quantity_Impedance.hxx>
#include <Quantity_Index.hxx>
#include <Quantity_Inductance.hxx>
#include <Quantity_KinematicViscosity.hxx>
#include <Quantity_KineticMoment.hxx>
#include <Quantity_Length.hxx>
#include <Quantity_Luminance.hxx>
#include <Quantity_LuminousEfficacity.hxx>
#include <Quantity_LuminousExposition.hxx>
#include <Quantity_LuminousFlux.hxx>
#include <Quantity_LuminousIntensity.hxx>
#include <Quantity_MagneticFieldStrength.hxx>
#include <Quantity_MagneticFlux.hxx>
#include <Quantity_MagneticFluxDensity.hxx>
#include <Quantity_Mass.hxx>
#include <Quantity_MassFlow.hxx>
#include <Quantity_MolarConcentration.hxx>
#include <Quantity_Molarity.hxx>
#include <Quantity_MolarMass.hxx>
#include <Quantity_MolarVolume.hxx>
#include <Quantity_MomentOfAForce.hxx>
#include <Quantity_MomentOfInertia.hxx>
#include <Quantity_Momentum.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Normality.hxx>
#include <Quantity_Parameter.hxx>
#include <Quantity_Period.hxx>
#include <Quantity_PeriodDefinitionError.hxx>
#include <Quantity_PhysicalQuantity.hxx>
#include <Quantity_PlaneAngle.hxx>
#include <Quantity_Power.hxx>
#include <Quantity_Pressure.hxx>
#include <Quantity_Quotient.hxx>
#include <Quantity_Rate.hxx>
#include <Quantity_Ratio.hxx>
#include <Quantity_Reluctance.hxx>
#include <Quantity_Resistance.hxx>
#include <Quantity_Resistivity.hxx>
#include <Quantity_Scalaire.hxx>
#include <Quantity_SolidAngle.hxx>
#include <Quantity_SoundIntensity.hxx>
#include <Quantity_SpecificHeatCapacity.hxx>
#include <Quantity_Speed.hxx>
#include <Quantity_SurfaceTension.hxx>
#include <Quantity_Temperature.hxx>
#include <Quantity_ThermalConductivity.hxx>
#include <Quantity_Torque.hxx>
#include <Quantity_TypeOfColor.hxx>
#include <Quantity_Velocity.hxx>
#include <Quantity_Viscosity.hxx>
#include <Quantity_Volume.hxx>
#include <Quantity_VolumeFlow.hxx>
#include <Quantity_Weight.hxx>
#include <Quantity_Work.hxx>

// template related includes
// ./opencascade/Quantity_Array1OfColor.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Quantity_Array2OfColor.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Quantity_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Quantity", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Quantity_TypeOfColor>(m, "Quantity_TypeOfColor",R"#(Identifies color definition systems - Quantity_TOC_RGB: with this system a color is defined by its quantities of red, green and blue (R-G-B values). - Quantity_TOC_HLS: with this system a color is defined by its hue angle and its lightness and saturation values (H-L-S values). A Quantity_Color object may define a color from three values R-G-B or H-L-S according to a given color definition system.)#")
        .value("Quantity_TOC_RGB",Quantity_TypeOfColor::Quantity_TOC_RGB)
        .value("Quantity_TOC_HLS",Quantity_TypeOfColor::Quantity_TOC_HLS).export_values();
    py::enum_<Quantity_NameOfColor>(m, "Quantity_NameOfColor",R"#(Definition of names of known colors. The names come (mostly) from the X11 specification.)#")
        .value("Quantity_NOC_BLACK",Quantity_NameOfColor::Quantity_NOC_BLACK)
        .value("Quantity_NOC_MATRABLUE",Quantity_NameOfColor::Quantity_NOC_MATRABLUE)
        .value("Quantity_NOC_MATRAGRAY",Quantity_NameOfColor::Quantity_NOC_MATRAGRAY)
        .value("Quantity_NOC_ALICEBLUE",Quantity_NameOfColor::Quantity_NOC_ALICEBLUE)
        .value("Quantity_NOC_ANTIQUEWHITE",Quantity_NameOfColor::Quantity_NOC_ANTIQUEWHITE)
        .value("Quantity_NOC_ANTIQUEWHITE1",Quantity_NameOfColor::Quantity_NOC_ANTIQUEWHITE1)
        .value("Quantity_NOC_ANTIQUEWHITE2",Quantity_NameOfColor::Quantity_NOC_ANTIQUEWHITE2)
        .value("Quantity_NOC_ANTIQUEWHITE3",Quantity_NameOfColor::Quantity_NOC_ANTIQUEWHITE3)
        .value("Quantity_NOC_ANTIQUEWHITE4",Quantity_NameOfColor::Quantity_NOC_ANTIQUEWHITE4)
        .value("Quantity_NOC_AQUAMARINE1",Quantity_NameOfColor::Quantity_NOC_AQUAMARINE1)
        .value("Quantity_NOC_AQUAMARINE2",Quantity_NameOfColor::Quantity_NOC_AQUAMARINE2)
        .value("Quantity_NOC_AQUAMARINE4",Quantity_NameOfColor::Quantity_NOC_AQUAMARINE4)
        .value("Quantity_NOC_AZURE",Quantity_NameOfColor::Quantity_NOC_AZURE)
        .value("Quantity_NOC_AZURE2",Quantity_NameOfColor::Quantity_NOC_AZURE2)
        .value("Quantity_NOC_AZURE3",Quantity_NameOfColor::Quantity_NOC_AZURE3)
        .value("Quantity_NOC_AZURE4",Quantity_NameOfColor::Quantity_NOC_AZURE4)
        .value("Quantity_NOC_BEIGE",Quantity_NameOfColor::Quantity_NOC_BEIGE)
        .value("Quantity_NOC_BISQUE",Quantity_NameOfColor::Quantity_NOC_BISQUE)
        .value("Quantity_NOC_BISQUE2",Quantity_NameOfColor::Quantity_NOC_BISQUE2)
        .value("Quantity_NOC_BISQUE3",Quantity_NameOfColor::Quantity_NOC_BISQUE3)
        .value("Quantity_NOC_BISQUE4",Quantity_NameOfColor::Quantity_NOC_BISQUE4)
        .value("Quantity_NOC_BLANCHEDALMOND",Quantity_NameOfColor::Quantity_NOC_BLANCHEDALMOND)
        .value("Quantity_NOC_BLUE1",Quantity_NameOfColor::Quantity_NOC_BLUE1)
        .value("Quantity_NOC_BLUE2",Quantity_NameOfColor::Quantity_NOC_BLUE2)
        .value("Quantity_NOC_BLUE3",Quantity_NameOfColor::Quantity_NOC_BLUE3)
        .value("Quantity_NOC_BLUE4",Quantity_NameOfColor::Quantity_NOC_BLUE4)
        .value("Quantity_NOC_BLUEVIOLET",Quantity_NameOfColor::Quantity_NOC_BLUEVIOLET)
        .value("Quantity_NOC_BROWN",Quantity_NameOfColor::Quantity_NOC_BROWN)
        .value("Quantity_NOC_BROWN1",Quantity_NameOfColor::Quantity_NOC_BROWN1)
        .value("Quantity_NOC_BROWN2",Quantity_NameOfColor::Quantity_NOC_BROWN2)
        .value("Quantity_NOC_BROWN3",Quantity_NameOfColor::Quantity_NOC_BROWN3)
        .value("Quantity_NOC_BROWN4",Quantity_NameOfColor::Quantity_NOC_BROWN4)
        .value("Quantity_NOC_BURLYWOOD",Quantity_NameOfColor::Quantity_NOC_BURLYWOOD)
        .value("Quantity_NOC_BURLYWOOD1",Quantity_NameOfColor::Quantity_NOC_BURLYWOOD1)
        .value("Quantity_NOC_BURLYWOOD2",Quantity_NameOfColor::Quantity_NOC_BURLYWOOD2)
        .value("Quantity_NOC_BURLYWOOD3",Quantity_NameOfColor::Quantity_NOC_BURLYWOOD3)
        .value("Quantity_NOC_BURLYWOOD4",Quantity_NameOfColor::Quantity_NOC_BURLYWOOD4)
        .value("Quantity_NOC_CADETBLUE",Quantity_NameOfColor::Quantity_NOC_CADETBLUE)
        .value("Quantity_NOC_CADETBLUE1",Quantity_NameOfColor::Quantity_NOC_CADETBLUE1)
        .value("Quantity_NOC_CADETBLUE2",Quantity_NameOfColor::Quantity_NOC_CADETBLUE2)
        .value("Quantity_NOC_CADETBLUE3",Quantity_NameOfColor::Quantity_NOC_CADETBLUE3)
        .value("Quantity_NOC_CADETBLUE4",Quantity_NameOfColor::Quantity_NOC_CADETBLUE4)
        .value("Quantity_NOC_CHARTREUSE",Quantity_NameOfColor::Quantity_NOC_CHARTREUSE)
        .value("Quantity_NOC_CHARTREUSE1",Quantity_NameOfColor::Quantity_NOC_CHARTREUSE1)
        .value("Quantity_NOC_CHARTREUSE2",Quantity_NameOfColor::Quantity_NOC_CHARTREUSE2)
        .value("Quantity_NOC_CHARTREUSE3",Quantity_NameOfColor::Quantity_NOC_CHARTREUSE3)
        .value("Quantity_NOC_CHARTREUSE4",Quantity_NameOfColor::Quantity_NOC_CHARTREUSE4)
        .value("Quantity_NOC_CHOCOLATE",Quantity_NameOfColor::Quantity_NOC_CHOCOLATE)
        .value("Quantity_NOC_CHOCOLATE1",Quantity_NameOfColor::Quantity_NOC_CHOCOLATE1)
        .value("Quantity_NOC_CHOCOLATE2",Quantity_NameOfColor::Quantity_NOC_CHOCOLATE2)
        .value("Quantity_NOC_CHOCOLATE3",Quantity_NameOfColor::Quantity_NOC_CHOCOLATE3)
        .value("Quantity_NOC_CHOCOLATE4",Quantity_NameOfColor::Quantity_NOC_CHOCOLATE4)
        .value("Quantity_NOC_CORAL",Quantity_NameOfColor::Quantity_NOC_CORAL)
        .value("Quantity_NOC_CORAL1",Quantity_NameOfColor::Quantity_NOC_CORAL1)
        .value("Quantity_NOC_CORAL2",Quantity_NameOfColor::Quantity_NOC_CORAL2)
        .value("Quantity_NOC_CORAL3",Quantity_NameOfColor::Quantity_NOC_CORAL3)
        .value("Quantity_NOC_CORAL4",Quantity_NameOfColor::Quantity_NOC_CORAL4)
        .value("Quantity_NOC_CORNFLOWERBLUE",Quantity_NameOfColor::Quantity_NOC_CORNFLOWERBLUE)
        .value("Quantity_NOC_CORNSILK1",Quantity_NameOfColor::Quantity_NOC_CORNSILK1)
        .value("Quantity_NOC_CORNSILK2",Quantity_NameOfColor::Quantity_NOC_CORNSILK2)
        .value("Quantity_NOC_CORNSILK3",Quantity_NameOfColor::Quantity_NOC_CORNSILK3)
        .value("Quantity_NOC_CORNSILK4",Quantity_NameOfColor::Quantity_NOC_CORNSILK4)
        .value("Quantity_NOC_CYAN1",Quantity_NameOfColor::Quantity_NOC_CYAN1)
        .value("Quantity_NOC_CYAN2",Quantity_NameOfColor::Quantity_NOC_CYAN2)
        .value("Quantity_NOC_CYAN3",Quantity_NameOfColor::Quantity_NOC_CYAN3)
        .value("Quantity_NOC_CYAN4",Quantity_NameOfColor::Quantity_NOC_CYAN4)
        .value("Quantity_NOC_DARKGOLDENROD",Quantity_NameOfColor::Quantity_NOC_DARKGOLDENROD)
        .value("Quantity_NOC_DARKGOLDENROD1",Quantity_NameOfColor::Quantity_NOC_DARKGOLDENROD1)
        .value("Quantity_NOC_DARKGOLDENROD2",Quantity_NameOfColor::Quantity_NOC_DARKGOLDENROD2)
        .value("Quantity_NOC_DARKGOLDENROD3",Quantity_NameOfColor::Quantity_NOC_DARKGOLDENROD3)
        .value("Quantity_NOC_DARKGOLDENROD4",Quantity_NameOfColor::Quantity_NOC_DARKGOLDENROD4)
        .value("Quantity_NOC_DARKGREEN",Quantity_NameOfColor::Quantity_NOC_DARKGREEN)
        .value("Quantity_NOC_DARKKHAKI",Quantity_NameOfColor::Quantity_NOC_DARKKHAKI)
        .value("Quantity_NOC_DARKOLIVEGREEN",Quantity_NameOfColor::Quantity_NOC_DARKOLIVEGREEN)
        .value("Quantity_NOC_DARKOLIVEGREEN1",Quantity_NameOfColor::Quantity_NOC_DARKOLIVEGREEN1)
        .value("Quantity_NOC_DARKOLIVEGREEN2",Quantity_NameOfColor::Quantity_NOC_DARKOLIVEGREEN2)
        .value("Quantity_NOC_DARKOLIVEGREEN3",Quantity_NameOfColor::Quantity_NOC_DARKOLIVEGREEN3)
        .value("Quantity_NOC_DARKOLIVEGREEN4",Quantity_NameOfColor::Quantity_NOC_DARKOLIVEGREEN4)
        .value("Quantity_NOC_DARKORANGE",Quantity_NameOfColor::Quantity_NOC_DARKORANGE)
        .value("Quantity_NOC_DARKORANGE1",Quantity_NameOfColor::Quantity_NOC_DARKORANGE1)
        .value("Quantity_NOC_DARKORANGE2",Quantity_NameOfColor::Quantity_NOC_DARKORANGE2)
        .value("Quantity_NOC_DARKORANGE3",Quantity_NameOfColor::Quantity_NOC_DARKORANGE3)
        .value("Quantity_NOC_DARKORANGE4",Quantity_NameOfColor::Quantity_NOC_DARKORANGE4)
        .value("Quantity_NOC_DARKORCHID",Quantity_NameOfColor::Quantity_NOC_DARKORCHID)
        .value("Quantity_NOC_DARKORCHID1",Quantity_NameOfColor::Quantity_NOC_DARKORCHID1)
        .value("Quantity_NOC_DARKORCHID2",Quantity_NameOfColor::Quantity_NOC_DARKORCHID2)
        .value("Quantity_NOC_DARKORCHID3",Quantity_NameOfColor::Quantity_NOC_DARKORCHID3)
        .value("Quantity_NOC_DARKORCHID4",Quantity_NameOfColor::Quantity_NOC_DARKORCHID4)
        .value("Quantity_NOC_DARKSALMON",Quantity_NameOfColor::Quantity_NOC_DARKSALMON)
        .value("Quantity_NOC_DARKSEAGREEN",Quantity_NameOfColor::Quantity_NOC_DARKSEAGREEN)
        .value("Quantity_NOC_DARKSEAGREEN1",Quantity_NameOfColor::Quantity_NOC_DARKSEAGREEN1)
        .value("Quantity_NOC_DARKSEAGREEN2",Quantity_NameOfColor::Quantity_NOC_DARKSEAGREEN2)
        .value("Quantity_NOC_DARKSEAGREEN3",Quantity_NameOfColor::Quantity_NOC_DARKSEAGREEN3)
        .value("Quantity_NOC_DARKSEAGREEN4",Quantity_NameOfColor::Quantity_NOC_DARKSEAGREEN4)
        .value("Quantity_NOC_DARKSLATEBLUE",Quantity_NameOfColor::Quantity_NOC_DARKSLATEBLUE)
        .value("Quantity_NOC_DARKSLATEGRAY1",Quantity_NameOfColor::Quantity_NOC_DARKSLATEGRAY1)
        .value("Quantity_NOC_DARKSLATEGRAY2",Quantity_NameOfColor::Quantity_NOC_DARKSLATEGRAY2)
        .value("Quantity_NOC_DARKSLATEGRAY3",Quantity_NameOfColor::Quantity_NOC_DARKSLATEGRAY3)
        .value("Quantity_NOC_DARKSLATEGRAY4",Quantity_NameOfColor::Quantity_NOC_DARKSLATEGRAY4)
        .value("Quantity_NOC_DARKSLATEGRAY",Quantity_NameOfColor::Quantity_NOC_DARKSLATEGRAY)
        .value("Quantity_NOC_DARKTURQUOISE",Quantity_NameOfColor::Quantity_NOC_DARKTURQUOISE)
        .value("Quantity_NOC_DARKVIOLET",Quantity_NameOfColor::Quantity_NOC_DARKVIOLET)
        .value("Quantity_NOC_DEEPPINK",Quantity_NameOfColor::Quantity_NOC_DEEPPINK)
        .value("Quantity_NOC_DEEPPINK2",Quantity_NameOfColor::Quantity_NOC_DEEPPINK2)
        .value("Quantity_NOC_DEEPPINK3",Quantity_NameOfColor::Quantity_NOC_DEEPPINK3)
        .value("Quantity_NOC_DEEPPINK4",Quantity_NameOfColor::Quantity_NOC_DEEPPINK4)
        .value("Quantity_NOC_DEEPSKYBLUE1",Quantity_NameOfColor::Quantity_NOC_DEEPSKYBLUE1)
        .value("Quantity_NOC_DEEPSKYBLUE2",Quantity_NameOfColor::Quantity_NOC_DEEPSKYBLUE2)
        .value("Quantity_NOC_DEEPSKYBLUE3",Quantity_NameOfColor::Quantity_NOC_DEEPSKYBLUE3)
        .value("Quantity_NOC_DEEPSKYBLUE4",Quantity_NameOfColor::Quantity_NOC_DEEPSKYBLUE4)
        .value("Quantity_NOC_DODGERBLUE1",Quantity_NameOfColor::Quantity_NOC_DODGERBLUE1)
        .value("Quantity_NOC_DODGERBLUE2",Quantity_NameOfColor::Quantity_NOC_DODGERBLUE2)
        .value("Quantity_NOC_DODGERBLUE3",Quantity_NameOfColor::Quantity_NOC_DODGERBLUE3)
        .value("Quantity_NOC_DODGERBLUE4",Quantity_NameOfColor::Quantity_NOC_DODGERBLUE4)
        .value("Quantity_NOC_FIREBRICK",Quantity_NameOfColor::Quantity_NOC_FIREBRICK)
        .value("Quantity_NOC_FIREBRICK1",Quantity_NameOfColor::Quantity_NOC_FIREBRICK1)
        .value("Quantity_NOC_FIREBRICK2",Quantity_NameOfColor::Quantity_NOC_FIREBRICK2)
        .value("Quantity_NOC_FIREBRICK3",Quantity_NameOfColor::Quantity_NOC_FIREBRICK3)
        .value("Quantity_NOC_FIREBRICK4",Quantity_NameOfColor::Quantity_NOC_FIREBRICK4)
        .value("Quantity_NOC_FLORALWHITE",Quantity_NameOfColor::Quantity_NOC_FLORALWHITE)
        .value("Quantity_NOC_FORESTGREEN",Quantity_NameOfColor::Quantity_NOC_FORESTGREEN)
        .value("Quantity_NOC_GAINSBORO",Quantity_NameOfColor::Quantity_NOC_GAINSBORO)
        .value("Quantity_NOC_GHOSTWHITE",Quantity_NameOfColor::Quantity_NOC_GHOSTWHITE)
        .value("Quantity_NOC_GOLD",Quantity_NameOfColor::Quantity_NOC_GOLD)
        .value("Quantity_NOC_GOLD1",Quantity_NameOfColor::Quantity_NOC_GOLD1)
        .value("Quantity_NOC_GOLD2",Quantity_NameOfColor::Quantity_NOC_GOLD2)
        .value("Quantity_NOC_GOLD3",Quantity_NameOfColor::Quantity_NOC_GOLD3)
        .value("Quantity_NOC_GOLD4",Quantity_NameOfColor::Quantity_NOC_GOLD4)
        .value("Quantity_NOC_GOLDENROD",Quantity_NameOfColor::Quantity_NOC_GOLDENROD)
        .value("Quantity_NOC_GOLDENROD1",Quantity_NameOfColor::Quantity_NOC_GOLDENROD1)
        .value("Quantity_NOC_GOLDENROD2",Quantity_NameOfColor::Quantity_NOC_GOLDENROD2)
        .value("Quantity_NOC_GOLDENROD3",Quantity_NameOfColor::Quantity_NOC_GOLDENROD3)
        .value("Quantity_NOC_GOLDENROD4",Quantity_NameOfColor::Quantity_NOC_GOLDENROD4)
        .value("Quantity_NOC_GRAY",Quantity_NameOfColor::Quantity_NOC_GRAY)
        .value("Quantity_NOC_GRAY0",Quantity_NameOfColor::Quantity_NOC_GRAY0)
        .value("Quantity_NOC_GRAY1",Quantity_NameOfColor::Quantity_NOC_GRAY1)
        .value("Quantity_NOC_GRAY10",Quantity_NameOfColor::Quantity_NOC_GRAY10)
        .value("Quantity_NOC_GRAY11",Quantity_NameOfColor::Quantity_NOC_GRAY11)
        .value("Quantity_NOC_GRAY12",Quantity_NameOfColor::Quantity_NOC_GRAY12)
        .value("Quantity_NOC_GRAY13",Quantity_NameOfColor::Quantity_NOC_GRAY13)
        .value("Quantity_NOC_GRAY14",Quantity_NameOfColor::Quantity_NOC_GRAY14)
        .value("Quantity_NOC_GRAY15",Quantity_NameOfColor::Quantity_NOC_GRAY15)
        .value("Quantity_NOC_GRAY16",Quantity_NameOfColor::Quantity_NOC_GRAY16)
        .value("Quantity_NOC_GRAY17",Quantity_NameOfColor::Quantity_NOC_GRAY17)
        .value("Quantity_NOC_GRAY18",Quantity_NameOfColor::Quantity_NOC_GRAY18)
        .value("Quantity_NOC_GRAY19",Quantity_NameOfColor::Quantity_NOC_GRAY19)
        .value("Quantity_NOC_GRAY2",Quantity_NameOfColor::Quantity_NOC_GRAY2)
        .value("Quantity_NOC_GRAY20",Quantity_NameOfColor::Quantity_NOC_GRAY20)
        .value("Quantity_NOC_GRAY21",Quantity_NameOfColor::Quantity_NOC_GRAY21)
        .value("Quantity_NOC_GRAY22",Quantity_NameOfColor::Quantity_NOC_GRAY22)
        .value("Quantity_NOC_GRAY23",Quantity_NameOfColor::Quantity_NOC_GRAY23)
        .value("Quantity_NOC_GRAY24",Quantity_NameOfColor::Quantity_NOC_GRAY24)
        .value("Quantity_NOC_GRAY25",Quantity_NameOfColor::Quantity_NOC_GRAY25)
        .value("Quantity_NOC_GRAY26",Quantity_NameOfColor::Quantity_NOC_GRAY26)
        .value("Quantity_NOC_GRAY27",Quantity_NameOfColor::Quantity_NOC_GRAY27)
        .value("Quantity_NOC_GRAY28",Quantity_NameOfColor::Quantity_NOC_GRAY28)
        .value("Quantity_NOC_GRAY29",Quantity_NameOfColor::Quantity_NOC_GRAY29)
        .value("Quantity_NOC_GRAY3",Quantity_NameOfColor::Quantity_NOC_GRAY3)
        .value("Quantity_NOC_GRAY30",Quantity_NameOfColor::Quantity_NOC_GRAY30)
        .value("Quantity_NOC_GRAY31",Quantity_NameOfColor::Quantity_NOC_GRAY31)
        .value("Quantity_NOC_GRAY32",Quantity_NameOfColor::Quantity_NOC_GRAY32)
        .value("Quantity_NOC_GRAY33",Quantity_NameOfColor::Quantity_NOC_GRAY33)
        .value("Quantity_NOC_GRAY34",Quantity_NameOfColor::Quantity_NOC_GRAY34)
        .value("Quantity_NOC_GRAY35",Quantity_NameOfColor::Quantity_NOC_GRAY35)
        .value("Quantity_NOC_GRAY36",Quantity_NameOfColor::Quantity_NOC_GRAY36)
        .value("Quantity_NOC_GRAY37",Quantity_NameOfColor::Quantity_NOC_GRAY37)
        .value("Quantity_NOC_GRAY38",Quantity_NameOfColor::Quantity_NOC_GRAY38)
        .value("Quantity_NOC_GRAY39",Quantity_NameOfColor::Quantity_NOC_GRAY39)
        .value("Quantity_NOC_GRAY4",Quantity_NameOfColor::Quantity_NOC_GRAY4)
        .value("Quantity_NOC_GRAY40",Quantity_NameOfColor::Quantity_NOC_GRAY40)
        .value("Quantity_NOC_GRAY41",Quantity_NameOfColor::Quantity_NOC_GRAY41)
        .value("Quantity_NOC_GRAY42",Quantity_NameOfColor::Quantity_NOC_GRAY42)
        .value("Quantity_NOC_GRAY43",Quantity_NameOfColor::Quantity_NOC_GRAY43)
        .value("Quantity_NOC_GRAY44",Quantity_NameOfColor::Quantity_NOC_GRAY44)
        .value("Quantity_NOC_GRAY45",Quantity_NameOfColor::Quantity_NOC_GRAY45)
        .value("Quantity_NOC_GRAY46",Quantity_NameOfColor::Quantity_NOC_GRAY46)
        .value("Quantity_NOC_GRAY47",Quantity_NameOfColor::Quantity_NOC_GRAY47)
        .value("Quantity_NOC_GRAY48",Quantity_NameOfColor::Quantity_NOC_GRAY48)
        .value("Quantity_NOC_GRAY49",Quantity_NameOfColor::Quantity_NOC_GRAY49)
        .value("Quantity_NOC_GRAY5",Quantity_NameOfColor::Quantity_NOC_GRAY5)
        .value("Quantity_NOC_GRAY50",Quantity_NameOfColor::Quantity_NOC_GRAY50)
        .value("Quantity_NOC_GRAY51",Quantity_NameOfColor::Quantity_NOC_GRAY51)
        .value("Quantity_NOC_GRAY52",Quantity_NameOfColor::Quantity_NOC_GRAY52)
        .value("Quantity_NOC_GRAY53",Quantity_NameOfColor::Quantity_NOC_GRAY53)
        .value("Quantity_NOC_GRAY54",Quantity_NameOfColor::Quantity_NOC_GRAY54)
        .value("Quantity_NOC_GRAY55",Quantity_NameOfColor::Quantity_NOC_GRAY55)
        .value("Quantity_NOC_GRAY56",Quantity_NameOfColor::Quantity_NOC_GRAY56)
        .value("Quantity_NOC_GRAY57",Quantity_NameOfColor::Quantity_NOC_GRAY57)
        .value("Quantity_NOC_GRAY58",Quantity_NameOfColor::Quantity_NOC_GRAY58)
        .value("Quantity_NOC_GRAY59",Quantity_NameOfColor::Quantity_NOC_GRAY59)
        .value("Quantity_NOC_GRAY6",Quantity_NameOfColor::Quantity_NOC_GRAY6)
        .value("Quantity_NOC_GRAY60",Quantity_NameOfColor::Quantity_NOC_GRAY60)
        .value("Quantity_NOC_GRAY61",Quantity_NameOfColor::Quantity_NOC_GRAY61)
        .value("Quantity_NOC_GRAY62",Quantity_NameOfColor::Quantity_NOC_GRAY62)
        .value("Quantity_NOC_GRAY63",Quantity_NameOfColor::Quantity_NOC_GRAY63)
        .value("Quantity_NOC_GRAY64",Quantity_NameOfColor::Quantity_NOC_GRAY64)
        .value("Quantity_NOC_GRAY65",Quantity_NameOfColor::Quantity_NOC_GRAY65)
        .value("Quantity_NOC_GRAY66",Quantity_NameOfColor::Quantity_NOC_GRAY66)
        .value("Quantity_NOC_GRAY67",Quantity_NameOfColor::Quantity_NOC_GRAY67)
        .value("Quantity_NOC_GRAY68",Quantity_NameOfColor::Quantity_NOC_GRAY68)
        .value("Quantity_NOC_GRAY69",Quantity_NameOfColor::Quantity_NOC_GRAY69)
        .value("Quantity_NOC_GRAY7",Quantity_NameOfColor::Quantity_NOC_GRAY7)
        .value("Quantity_NOC_GRAY70",Quantity_NameOfColor::Quantity_NOC_GRAY70)
        .value("Quantity_NOC_GRAY71",Quantity_NameOfColor::Quantity_NOC_GRAY71)
        .value("Quantity_NOC_GRAY72",Quantity_NameOfColor::Quantity_NOC_GRAY72)
        .value("Quantity_NOC_GRAY73",Quantity_NameOfColor::Quantity_NOC_GRAY73)
        .value("Quantity_NOC_GRAY74",Quantity_NameOfColor::Quantity_NOC_GRAY74)
        .value("Quantity_NOC_GRAY75",Quantity_NameOfColor::Quantity_NOC_GRAY75)
        .value("Quantity_NOC_GRAY76",Quantity_NameOfColor::Quantity_NOC_GRAY76)
        .value("Quantity_NOC_GRAY77",Quantity_NameOfColor::Quantity_NOC_GRAY77)
        .value("Quantity_NOC_GRAY78",Quantity_NameOfColor::Quantity_NOC_GRAY78)
        .value("Quantity_NOC_GRAY79",Quantity_NameOfColor::Quantity_NOC_GRAY79)
        .value("Quantity_NOC_GRAY8",Quantity_NameOfColor::Quantity_NOC_GRAY8)
        .value("Quantity_NOC_GRAY80",Quantity_NameOfColor::Quantity_NOC_GRAY80)
        .value("Quantity_NOC_GRAY81",Quantity_NameOfColor::Quantity_NOC_GRAY81)
        .value("Quantity_NOC_GRAY82",Quantity_NameOfColor::Quantity_NOC_GRAY82)
        .value("Quantity_NOC_GRAY83",Quantity_NameOfColor::Quantity_NOC_GRAY83)
        .value("Quantity_NOC_GRAY85",Quantity_NameOfColor::Quantity_NOC_GRAY85)
        .value("Quantity_NOC_GRAY86",Quantity_NameOfColor::Quantity_NOC_GRAY86)
        .value("Quantity_NOC_GRAY87",Quantity_NameOfColor::Quantity_NOC_GRAY87)
        .value("Quantity_NOC_GRAY88",Quantity_NameOfColor::Quantity_NOC_GRAY88)
        .value("Quantity_NOC_GRAY89",Quantity_NameOfColor::Quantity_NOC_GRAY89)
        .value("Quantity_NOC_GRAY9",Quantity_NameOfColor::Quantity_NOC_GRAY9)
        .value("Quantity_NOC_GRAY90",Quantity_NameOfColor::Quantity_NOC_GRAY90)
        .value("Quantity_NOC_GRAY91",Quantity_NameOfColor::Quantity_NOC_GRAY91)
        .value("Quantity_NOC_GRAY92",Quantity_NameOfColor::Quantity_NOC_GRAY92)
        .value("Quantity_NOC_GRAY93",Quantity_NameOfColor::Quantity_NOC_GRAY93)
        .value("Quantity_NOC_GRAY94",Quantity_NameOfColor::Quantity_NOC_GRAY94)
        .value("Quantity_NOC_GRAY95",Quantity_NameOfColor::Quantity_NOC_GRAY95)
        .value("Quantity_NOC_GREEN",Quantity_NameOfColor::Quantity_NOC_GREEN)
        .value("Quantity_NOC_GREEN1",Quantity_NameOfColor::Quantity_NOC_GREEN1)
        .value("Quantity_NOC_GREEN2",Quantity_NameOfColor::Quantity_NOC_GREEN2)
        .value("Quantity_NOC_GREEN3",Quantity_NameOfColor::Quantity_NOC_GREEN3)
        .value("Quantity_NOC_GREEN4",Quantity_NameOfColor::Quantity_NOC_GREEN4)
        .value("Quantity_NOC_GREENYELLOW",Quantity_NameOfColor::Quantity_NOC_GREENYELLOW)
        .value("Quantity_NOC_GRAY97",Quantity_NameOfColor::Quantity_NOC_GRAY97)
        .value("Quantity_NOC_GRAY98",Quantity_NameOfColor::Quantity_NOC_GRAY98)
        .value("Quantity_NOC_GRAY99",Quantity_NameOfColor::Quantity_NOC_GRAY99)
        .value("Quantity_NOC_HONEYDEW",Quantity_NameOfColor::Quantity_NOC_HONEYDEW)
        .value("Quantity_NOC_HONEYDEW2",Quantity_NameOfColor::Quantity_NOC_HONEYDEW2)
        .value("Quantity_NOC_HONEYDEW3",Quantity_NameOfColor::Quantity_NOC_HONEYDEW3)
        .value("Quantity_NOC_HONEYDEW4",Quantity_NameOfColor::Quantity_NOC_HONEYDEW4)
        .value("Quantity_NOC_HOTPINK",Quantity_NameOfColor::Quantity_NOC_HOTPINK)
        .value("Quantity_NOC_HOTPINK1",Quantity_NameOfColor::Quantity_NOC_HOTPINK1)
        .value("Quantity_NOC_HOTPINK2",Quantity_NameOfColor::Quantity_NOC_HOTPINK2)
        .value("Quantity_NOC_HOTPINK3",Quantity_NameOfColor::Quantity_NOC_HOTPINK3)
        .value("Quantity_NOC_HOTPINK4",Quantity_NameOfColor::Quantity_NOC_HOTPINK4)
        .value("Quantity_NOC_INDIANRED",Quantity_NameOfColor::Quantity_NOC_INDIANRED)
        .value("Quantity_NOC_INDIANRED1",Quantity_NameOfColor::Quantity_NOC_INDIANRED1)
        .value("Quantity_NOC_INDIANRED2",Quantity_NameOfColor::Quantity_NOC_INDIANRED2)
        .value("Quantity_NOC_INDIANRED3",Quantity_NameOfColor::Quantity_NOC_INDIANRED3)
        .value("Quantity_NOC_INDIANRED4",Quantity_NameOfColor::Quantity_NOC_INDIANRED4)
        .value("Quantity_NOC_IVORY",Quantity_NameOfColor::Quantity_NOC_IVORY)
        .value("Quantity_NOC_IVORY2",Quantity_NameOfColor::Quantity_NOC_IVORY2)
        .value("Quantity_NOC_IVORY3",Quantity_NameOfColor::Quantity_NOC_IVORY3)
        .value("Quantity_NOC_IVORY4",Quantity_NameOfColor::Quantity_NOC_IVORY4)
        .value("Quantity_NOC_KHAKI",Quantity_NameOfColor::Quantity_NOC_KHAKI)
        .value("Quantity_NOC_KHAKI1",Quantity_NameOfColor::Quantity_NOC_KHAKI1)
        .value("Quantity_NOC_KHAKI2",Quantity_NameOfColor::Quantity_NOC_KHAKI2)
        .value("Quantity_NOC_KHAKI3",Quantity_NameOfColor::Quantity_NOC_KHAKI3)
        .value("Quantity_NOC_KHAKI4",Quantity_NameOfColor::Quantity_NOC_KHAKI4)
        .value("Quantity_NOC_LAVENDER",Quantity_NameOfColor::Quantity_NOC_LAVENDER)
        .value("Quantity_NOC_LAVENDERBLUSH1",Quantity_NameOfColor::Quantity_NOC_LAVENDERBLUSH1)
        .value("Quantity_NOC_LAVENDERBLUSH2",Quantity_NameOfColor::Quantity_NOC_LAVENDERBLUSH2)
        .value("Quantity_NOC_LAVENDERBLUSH3",Quantity_NameOfColor::Quantity_NOC_LAVENDERBLUSH3)
        .value("Quantity_NOC_LAVENDERBLUSH4",Quantity_NameOfColor::Quantity_NOC_LAVENDERBLUSH4)
        .value("Quantity_NOC_LAWNGREEN",Quantity_NameOfColor::Quantity_NOC_LAWNGREEN)
        .value("Quantity_NOC_LEMONCHIFFON1",Quantity_NameOfColor::Quantity_NOC_LEMONCHIFFON1)
        .value("Quantity_NOC_LEMONCHIFFON2",Quantity_NameOfColor::Quantity_NOC_LEMONCHIFFON2)
        .value("Quantity_NOC_LEMONCHIFFON3",Quantity_NameOfColor::Quantity_NOC_LEMONCHIFFON3)
        .value("Quantity_NOC_LEMONCHIFFON4",Quantity_NameOfColor::Quantity_NOC_LEMONCHIFFON4)
        .value("Quantity_NOC_LIGHTBLUE",Quantity_NameOfColor::Quantity_NOC_LIGHTBLUE)
        .value("Quantity_NOC_LIGHTBLUE1",Quantity_NameOfColor::Quantity_NOC_LIGHTBLUE1)
        .value("Quantity_NOC_LIGHTBLUE2",Quantity_NameOfColor::Quantity_NOC_LIGHTBLUE2)
        .value("Quantity_NOC_LIGHTBLUE3",Quantity_NameOfColor::Quantity_NOC_LIGHTBLUE3)
        .value("Quantity_NOC_LIGHTBLUE4",Quantity_NameOfColor::Quantity_NOC_LIGHTBLUE4)
        .value("Quantity_NOC_LIGHTCORAL",Quantity_NameOfColor::Quantity_NOC_LIGHTCORAL)
        .value("Quantity_NOC_LIGHTCYAN1",Quantity_NameOfColor::Quantity_NOC_LIGHTCYAN1)
        .value("Quantity_NOC_LIGHTCYAN2",Quantity_NameOfColor::Quantity_NOC_LIGHTCYAN2)
        .value("Quantity_NOC_LIGHTCYAN3",Quantity_NameOfColor::Quantity_NOC_LIGHTCYAN3)
        .value("Quantity_NOC_LIGHTCYAN4",Quantity_NameOfColor::Quantity_NOC_LIGHTCYAN4)
        .value("Quantity_NOC_LIGHTGOLDENROD",Quantity_NameOfColor::Quantity_NOC_LIGHTGOLDENROD)
        .value("Quantity_NOC_LIGHTGOLDENROD1",Quantity_NameOfColor::Quantity_NOC_LIGHTGOLDENROD1)
        .value("Quantity_NOC_LIGHTGOLDENROD2",Quantity_NameOfColor::Quantity_NOC_LIGHTGOLDENROD2)
        .value("Quantity_NOC_LIGHTGOLDENROD3",Quantity_NameOfColor::Quantity_NOC_LIGHTGOLDENROD3)
        .value("Quantity_NOC_LIGHTGOLDENROD4",Quantity_NameOfColor::Quantity_NOC_LIGHTGOLDENROD4)
        .value("Quantity_NOC_LIGHTGOLDENRODYELLOW",Quantity_NameOfColor::Quantity_NOC_LIGHTGOLDENRODYELLOW)
        .value("Quantity_NOC_LIGHTGRAY",Quantity_NameOfColor::Quantity_NOC_LIGHTGRAY)
        .value("Quantity_NOC_LIGHTPINK",Quantity_NameOfColor::Quantity_NOC_LIGHTPINK)
        .value("Quantity_NOC_LIGHTPINK1",Quantity_NameOfColor::Quantity_NOC_LIGHTPINK1)
        .value("Quantity_NOC_LIGHTPINK2",Quantity_NameOfColor::Quantity_NOC_LIGHTPINK2)
        .value("Quantity_NOC_LIGHTPINK3",Quantity_NameOfColor::Quantity_NOC_LIGHTPINK3)
        .value("Quantity_NOC_LIGHTPINK4",Quantity_NameOfColor::Quantity_NOC_LIGHTPINK4)
        .value("Quantity_NOC_LIGHTSALMON1",Quantity_NameOfColor::Quantity_NOC_LIGHTSALMON1)
        .value("Quantity_NOC_LIGHTSALMON2",Quantity_NameOfColor::Quantity_NOC_LIGHTSALMON2)
        .value("Quantity_NOC_LIGHTSALMON3",Quantity_NameOfColor::Quantity_NOC_LIGHTSALMON3)
        .value("Quantity_NOC_LIGHTSALMON4",Quantity_NameOfColor::Quantity_NOC_LIGHTSALMON4)
        .value("Quantity_NOC_LIGHTSEAGREEN",Quantity_NameOfColor::Quantity_NOC_LIGHTSEAGREEN)
        .value("Quantity_NOC_LIGHTSKYBLUE",Quantity_NameOfColor::Quantity_NOC_LIGHTSKYBLUE)
        .value("Quantity_NOC_LIGHTSKYBLUE1",Quantity_NameOfColor::Quantity_NOC_LIGHTSKYBLUE1)
        .value("Quantity_NOC_LIGHTSKYBLUE2",Quantity_NameOfColor::Quantity_NOC_LIGHTSKYBLUE2)
        .value("Quantity_NOC_LIGHTSKYBLUE3",Quantity_NameOfColor::Quantity_NOC_LIGHTSKYBLUE3)
        .value("Quantity_NOC_LIGHTSKYBLUE4",Quantity_NameOfColor::Quantity_NOC_LIGHTSKYBLUE4)
        .value("Quantity_NOC_LIGHTSLATEBLUE",Quantity_NameOfColor::Quantity_NOC_LIGHTSLATEBLUE)
        .value("Quantity_NOC_LIGHTSLATEGRAY",Quantity_NameOfColor::Quantity_NOC_LIGHTSLATEGRAY)
        .value("Quantity_NOC_LIGHTSTEELBLUE",Quantity_NameOfColor::Quantity_NOC_LIGHTSTEELBLUE)
        .value("Quantity_NOC_LIGHTSTEELBLUE1",Quantity_NameOfColor::Quantity_NOC_LIGHTSTEELBLUE1)
        .value("Quantity_NOC_LIGHTSTEELBLUE2",Quantity_NameOfColor::Quantity_NOC_LIGHTSTEELBLUE2)
        .value("Quantity_NOC_LIGHTSTEELBLUE3",Quantity_NameOfColor::Quantity_NOC_LIGHTSTEELBLUE3)
        .value("Quantity_NOC_LIGHTSTEELBLUE4",Quantity_NameOfColor::Quantity_NOC_LIGHTSTEELBLUE4)
        .value("Quantity_NOC_LIGHTYELLOW",Quantity_NameOfColor::Quantity_NOC_LIGHTYELLOW)
        .value("Quantity_NOC_LIGHTYELLOW2",Quantity_NameOfColor::Quantity_NOC_LIGHTYELLOW2)
        .value("Quantity_NOC_LIGHTYELLOW3",Quantity_NameOfColor::Quantity_NOC_LIGHTYELLOW3)
        .value("Quantity_NOC_LIGHTYELLOW4",Quantity_NameOfColor::Quantity_NOC_LIGHTYELLOW4)
        .value("Quantity_NOC_LIMEGREEN",Quantity_NameOfColor::Quantity_NOC_LIMEGREEN)
        .value("Quantity_NOC_LINEN",Quantity_NameOfColor::Quantity_NOC_LINEN)
        .value("Quantity_NOC_MAGENTA1",Quantity_NameOfColor::Quantity_NOC_MAGENTA1)
        .value("Quantity_NOC_MAGENTA2",Quantity_NameOfColor::Quantity_NOC_MAGENTA2)
        .value("Quantity_NOC_MAGENTA3",Quantity_NameOfColor::Quantity_NOC_MAGENTA3)
        .value("Quantity_NOC_MAGENTA4",Quantity_NameOfColor::Quantity_NOC_MAGENTA4)
        .value("Quantity_NOC_MAROON",Quantity_NameOfColor::Quantity_NOC_MAROON)
        .value("Quantity_NOC_MAROON1",Quantity_NameOfColor::Quantity_NOC_MAROON1)
        .value("Quantity_NOC_MAROON2",Quantity_NameOfColor::Quantity_NOC_MAROON2)
        .value("Quantity_NOC_MAROON3",Quantity_NameOfColor::Quantity_NOC_MAROON3)
        .value("Quantity_NOC_MAROON4",Quantity_NameOfColor::Quantity_NOC_MAROON4)
        .value("Quantity_NOC_MEDIUMAQUAMARINE",Quantity_NameOfColor::Quantity_NOC_MEDIUMAQUAMARINE)
        .value("Quantity_NOC_MEDIUMORCHID",Quantity_NameOfColor::Quantity_NOC_MEDIUMORCHID)
        .value("Quantity_NOC_MEDIUMORCHID1",Quantity_NameOfColor::Quantity_NOC_MEDIUMORCHID1)
        .value("Quantity_NOC_MEDIUMORCHID2",Quantity_NameOfColor::Quantity_NOC_MEDIUMORCHID2)
        .value("Quantity_NOC_MEDIUMORCHID3",Quantity_NameOfColor::Quantity_NOC_MEDIUMORCHID3)
        .value("Quantity_NOC_MEDIUMORCHID4",Quantity_NameOfColor::Quantity_NOC_MEDIUMORCHID4)
        .value("Quantity_NOC_MEDIUMPURPLE",Quantity_NameOfColor::Quantity_NOC_MEDIUMPURPLE)
        .value("Quantity_NOC_MEDIUMPURPLE1",Quantity_NameOfColor::Quantity_NOC_MEDIUMPURPLE1)
        .value("Quantity_NOC_MEDIUMPURPLE2",Quantity_NameOfColor::Quantity_NOC_MEDIUMPURPLE2)
        .value("Quantity_NOC_MEDIUMPURPLE3",Quantity_NameOfColor::Quantity_NOC_MEDIUMPURPLE3)
        .value("Quantity_NOC_MEDIUMPURPLE4",Quantity_NameOfColor::Quantity_NOC_MEDIUMPURPLE4)
        .value("Quantity_NOC_MEDIUMSEAGREEN",Quantity_NameOfColor::Quantity_NOC_MEDIUMSEAGREEN)
        .value("Quantity_NOC_MEDIUMSLATEBLUE",Quantity_NameOfColor::Quantity_NOC_MEDIUMSLATEBLUE)
        .value("Quantity_NOC_MEDIUMSPRINGGREEN",Quantity_NameOfColor::Quantity_NOC_MEDIUMSPRINGGREEN)
        .value("Quantity_NOC_MEDIUMTURQUOISE",Quantity_NameOfColor::Quantity_NOC_MEDIUMTURQUOISE)
        .value("Quantity_NOC_MEDIUMVIOLETRED",Quantity_NameOfColor::Quantity_NOC_MEDIUMVIOLETRED)
        .value("Quantity_NOC_MIDNIGHTBLUE",Quantity_NameOfColor::Quantity_NOC_MIDNIGHTBLUE)
        .value("Quantity_NOC_MINTCREAM",Quantity_NameOfColor::Quantity_NOC_MINTCREAM)
        .value("Quantity_NOC_MISTYROSE",Quantity_NameOfColor::Quantity_NOC_MISTYROSE)
        .value("Quantity_NOC_MISTYROSE2",Quantity_NameOfColor::Quantity_NOC_MISTYROSE2)
        .value("Quantity_NOC_MISTYROSE3",Quantity_NameOfColor::Quantity_NOC_MISTYROSE3)
        .value("Quantity_NOC_MISTYROSE4",Quantity_NameOfColor::Quantity_NOC_MISTYROSE4)
        .value("Quantity_NOC_MOCCASIN",Quantity_NameOfColor::Quantity_NOC_MOCCASIN)
        .value("Quantity_NOC_NAVAJOWHITE1",Quantity_NameOfColor::Quantity_NOC_NAVAJOWHITE1)
        .value("Quantity_NOC_NAVAJOWHITE2",Quantity_NameOfColor::Quantity_NOC_NAVAJOWHITE2)
        .value("Quantity_NOC_NAVAJOWHITE3",Quantity_NameOfColor::Quantity_NOC_NAVAJOWHITE3)
        .value("Quantity_NOC_NAVAJOWHITE4",Quantity_NameOfColor::Quantity_NOC_NAVAJOWHITE4)
        .value("Quantity_NOC_NAVYBLUE",Quantity_NameOfColor::Quantity_NOC_NAVYBLUE)
        .value("Quantity_NOC_OLDLACE",Quantity_NameOfColor::Quantity_NOC_OLDLACE)
        .value("Quantity_NOC_OLIVEDRAB",Quantity_NameOfColor::Quantity_NOC_OLIVEDRAB)
        .value("Quantity_NOC_OLIVEDRAB1",Quantity_NameOfColor::Quantity_NOC_OLIVEDRAB1)
        .value("Quantity_NOC_OLIVEDRAB2",Quantity_NameOfColor::Quantity_NOC_OLIVEDRAB2)
        .value("Quantity_NOC_OLIVEDRAB3",Quantity_NameOfColor::Quantity_NOC_OLIVEDRAB3)
        .value("Quantity_NOC_OLIVEDRAB4",Quantity_NameOfColor::Quantity_NOC_OLIVEDRAB4)
        .value("Quantity_NOC_ORANGE",Quantity_NameOfColor::Quantity_NOC_ORANGE)
        .value("Quantity_NOC_ORANGE1",Quantity_NameOfColor::Quantity_NOC_ORANGE1)
        .value("Quantity_NOC_ORANGE2",Quantity_NameOfColor::Quantity_NOC_ORANGE2)
        .value("Quantity_NOC_ORANGE3",Quantity_NameOfColor::Quantity_NOC_ORANGE3)
        .value("Quantity_NOC_ORANGE4",Quantity_NameOfColor::Quantity_NOC_ORANGE4)
        .value("Quantity_NOC_ORANGERED",Quantity_NameOfColor::Quantity_NOC_ORANGERED)
        .value("Quantity_NOC_ORANGERED1",Quantity_NameOfColor::Quantity_NOC_ORANGERED1)
        .value("Quantity_NOC_ORANGERED2",Quantity_NameOfColor::Quantity_NOC_ORANGERED2)
        .value("Quantity_NOC_ORANGERED3",Quantity_NameOfColor::Quantity_NOC_ORANGERED3)
        .value("Quantity_NOC_ORANGERED4",Quantity_NameOfColor::Quantity_NOC_ORANGERED4)
        .value("Quantity_NOC_ORCHID",Quantity_NameOfColor::Quantity_NOC_ORCHID)
        .value("Quantity_NOC_ORCHID1",Quantity_NameOfColor::Quantity_NOC_ORCHID1)
        .value("Quantity_NOC_ORCHID2",Quantity_NameOfColor::Quantity_NOC_ORCHID2)
        .value("Quantity_NOC_ORCHID3",Quantity_NameOfColor::Quantity_NOC_ORCHID3)
        .value("Quantity_NOC_ORCHID4",Quantity_NameOfColor::Quantity_NOC_ORCHID4)
        .value("Quantity_NOC_PALEGOLDENROD",Quantity_NameOfColor::Quantity_NOC_PALEGOLDENROD)
        .value("Quantity_NOC_PALEGREEN",Quantity_NameOfColor::Quantity_NOC_PALEGREEN)
        .value("Quantity_NOC_PALEGREEN1",Quantity_NameOfColor::Quantity_NOC_PALEGREEN1)
        .value("Quantity_NOC_PALEGREEN2",Quantity_NameOfColor::Quantity_NOC_PALEGREEN2)
        .value("Quantity_NOC_PALEGREEN3",Quantity_NameOfColor::Quantity_NOC_PALEGREEN3)
        .value("Quantity_NOC_PALEGREEN4",Quantity_NameOfColor::Quantity_NOC_PALEGREEN4)
        .value("Quantity_NOC_PALETURQUOISE",Quantity_NameOfColor::Quantity_NOC_PALETURQUOISE)
        .value("Quantity_NOC_PALETURQUOISE1",Quantity_NameOfColor::Quantity_NOC_PALETURQUOISE1)
        .value("Quantity_NOC_PALETURQUOISE2",Quantity_NameOfColor::Quantity_NOC_PALETURQUOISE2)
        .value("Quantity_NOC_PALETURQUOISE3",Quantity_NameOfColor::Quantity_NOC_PALETURQUOISE3)
        .value("Quantity_NOC_PALETURQUOISE4",Quantity_NameOfColor::Quantity_NOC_PALETURQUOISE4)
        .value("Quantity_NOC_PALEVIOLETRED",Quantity_NameOfColor::Quantity_NOC_PALEVIOLETRED)
        .value("Quantity_NOC_PALEVIOLETRED1",Quantity_NameOfColor::Quantity_NOC_PALEVIOLETRED1)
        .value("Quantity_NOC_PALEVIOLETRED2",Quantity_NameOfColor::Quantity_NOC_PALEVIOLETRED2)
        .value("Quantity_NOC_PALEVIOLETRED3",Quantity_NameOfColor::Quantity_NOC_PALEVIOLETRED3)
        .value("Quantity_NOC_PALEVIOLETRED4",Quantity_NameOfColor::Quantity_NOC_PALEVIOLETRED4)
        .value("Quantity_NOC_PAPAYAWHIP",Quantity_NameOfColor::Quantity_NOC_PAPAYAWHIP)
        .value("Quantity_NOC_PEACHPUFF",Quantity_NameOfColor::Quantity_NOC_PEACHPUFF)
        .value("Quantity_NOC_PEACHPUFF2",Quantity_NameOfColor::Quantity_NOC_PEACHPUFF2)
        .value("Quantity_NOC_PEACHPUFF3",Quantity_NameOfColor::Quantity_NOC_PEACHPUFF3)
        .value("Quantity_NOC_PEACHPUFF4",Quantity_NameOfColor::Quantity_NOC_PEACHPUFF4)
        .value("Quantity_NOC_PERU",Quantity_NameOfColor::Quantity_NOC_PERU)
        .value("Quantity_NOC_PINK",Quantity_NameOfColor::Quantity_NOC_PINK)
        .value("Quantity_NOC_PINK1",Quantity_NameOfColor::Quantity_NOC_PINK1)
        .value("Quantity_NOC_PINK2",Quantity_NameOfColor::Quantity_NOC_PINK2)
        .value("Quantity_NOC_PINK3",Quantity_NameOfColor::Quantity_NOC_PINK3)
        .value("Quantity_NOC_PINK4",Quantity_NameOfColor::Quantity_NOC_PINK4)
        .value("Quantity_NOC_PLUM",Quantity_NameOfColor::Quantity_NOC_PLUM)
        .value("Quantity_NOC_PLUM1",Quantity_NameOfColor::Quantity_NOC_PLUM1)
        .value("Quantity_NOC_PLUM2",Quantity_NameOfColor::Quantity_NOC_PLUM2)
        .value("Quantity_NOC_PLUM3",Quantity_NameOfColor::Quantity_NOC_PLUM3)
        .value("Quantity_NOC_PLUM4",Quantity_NameOfColor::Quantity_NOC_PLUM4)
        .value("Quantity_NOC_POWDERBLUE",Quantity_NameOfColor::Quantity_NOC_POWDERBLUE)
        .value("Quantity_NOC_PURPLE",Quantity_NameOfColor::Quantity_NOC_PURPLE)
        .value("Quantity_NOC_PURPLE1",Quantity_NameOfColor::Quantity_NOC_PURPLE1)
        .value("Quantity_NOC_PURPLE2",Quantity_NameOfColor::Quantity_NOC_PURPLE2)
        .value("Quantity_NOC_PURPLE3",Quantity_NameOfColor::Quantity_NOC_PURPLE3)
        .value("Quantity_NOC_PURPLE4",Quantity_NameOfColor::Quantity_NOC_PURPLE4)
        .value("Quantity_NOC_RED",Quantity_NameOfColor::Quantity_NOC_RED)
        .value("Quantity_NOC_RED1",Quantity_NameOfColor::Quantity_NOC_RED1)
        .value("Quantity_NOC_RED2",Quantity_NameOfColor::Quantity_NOC_RED2)
        .value("Quantity_NOC_RED3",Quantity_NameOfColor::Quantity_NOC_RED3)
        .value("Quantity_NOC_RED4",Quantity_NameOfColor::Quantity_NOC_RED4)
        .value("Quantity_NOC_ROSYBROWN",Quantity_NameOfColor::Quantity_NOC_ROSYBROWN)
        .value("Quantity_NOC_ROSYBROWN1",Quantity_NameOfColor::Quantity_NOC_ROSYBROWN1)
        .value("Quantity_NOC_ROSYBROWN2",Quantity_NameOfColor::Quantity_NOC_ROSYBROWN2)
        .value("Quantity_NOC_ROSYBROWN3",Quantity_NameOfColor::Quantity_NOC_ROSYBROWN3)
        .value("Quantity_NOC_ROSYBROWN4",Quantity_NameOfColor::Quantity_NOC_ROSYBROWN4)
        .value("Quantity_NOC_ROYALBLUE",Quantity_NameOfColor::Quantity_NOC_ROYALBLUE)
        .value("Quantity_NOC_ROYALBLUE1",Quantity_NameOfColor::Quantity_NOC_ROYALBLUE1)
        .value("Quantity_NOC_ROYALBLUE2",Quantity_NameOfColor::Quantity_NOC_ROYALBLUE2)
        .value("Quantity_NOC_ROYALBLUE3",Quantity_NameOfColor::Quantity_NOC_ROYALBLUE3)
        .value("Quantity_NOC_ROYALBLUE4",Quantity_NameOfColor::Quantity_NOC_ROYALBLUE4)
        .value("Quantity_NOC_SADDLEBROWN",Quantity_NameOfColor::Quantity_NOC_SADDLEBROWN)
        .value("Quantity_NOC_SALMON",Quantity_NameOfColor::Quantity_NOC_SALMON)
        .value("Quantity_NOC_SALMON1",Quantity_NameOfColor::Quantity_NOC_SALMON1)
        .value("Quantity_NOC_SALMON2",Quantity_NameOfColor::Quantity_NOC_SALMON2)
        .value("Quantity_NOC_SALMON3",Quantity_NameOfColor::Quantity_NOC_SALMON3)
        .value("Quantity_NOC_SALMON4",Quantity_NameOfColor::Quantity_NOC_SALMON4)
        .value("Quantity_NOC_SANDYBROWN",Quantity_NameOfColor::Quantity_NOC_SANDYBROWN)
        .value("Quantity_NOC_SEAGREEN",Quantity_NameOfColor::Quantity_NOC_SEAGREEN)
        .value("Quantity_NOC_SEAGREEN1",Quantity_NameOfColor::Quantity_NOC_SEAGREEN1)
        .value("Quantity_NOC_SEAGREEN2",Quantity_NameOfColor::Quantity_NOC_SEAGREEN2)
        .value("Quantity_NOC_SEAGREEN3",Quantity_NameOfColor::Quantity_NOC_SEAGREEN3)
        .value("Quantity_NOC_SEAGREEN4",Quantity_NameOfColor::Quantity_NOC_SEAGREEN4)
        .value("Quantity_NOC_SEASHELL",Quantity_NameOfColor::Quantity_NOC_SEASHELL)
        .value("Quantity_NOC_SEASHELL2",Quantity_NameOfColor::Quantity_NOC_SEASHELL2)
        .value("Quantity_NOC_SEASHELL3",Quantity_NameOfColor::Quantity_NOC_SEASHELL3)
        .value("Quantity_NOC_SEASHELL4",Quantity_NameOfColor::Quantity_NOC_SEASHELL4)
        .value("Quantity_NOC_BEET",Quantity_NameOfColor::Quantity_NOC_BEET)
        .value("Quantity_NOC_TEAL",Quantity_NameOfColor::Quantity_NOC_TEAL)
        .value("Quantity_NOC_SIENNA",Quantity_NameOfColor::Quantity_NOC_SIENNA)
        .value("Quantity_NOC_SIENNA1",Quantity_NameOfColor::Quantity_NOC_SIENNA1)
        .value("Quantity_NOC_SIENNA2",Quantity_NameOfColor::Quantity_NOC_SIENNA2)
        .value("Quantity_NOC_SIENNA3",Quantity_NameOfColor::Quantity_NOC_SIENNA3)
        .value("Quantity_NOC_SIENNA4",Quantity_NameOfColor::Quantity_NOC_SIENNA4)
        .value("Quantity_NOC_SKYBLUE",Quantity_NameOfColor::Quantity_NOC_SKYBLUE)
        .value("Quantity_NOC_SKYBLUE1",Quantity_NameOfColor::Quantity_NOC_SKYBLUE1)
        .value("Quantity_NOC_SKYBLUE2",Quantity_NameOfColor::Quantity_NOC_SKYBLUE2)
        .value("Quantity_NOC_SKYBLUE3",Quantity_NameOfColor::Quantity_NOC_SKYBLUE3)
        .value("Quantity_NOC_SKYBLUE4",Quantity_NameOfColor::Quantity_NOC_SKYBLUE4)
        .value("Quantity_NOC_SLATEBLUE",Quantity_NameOfColor::Quantity_NOC_SLATEBLUE)
        .value("Quantity_NOC_SLATEBLUE1",Quantity_NameOfColor::Quantity_NOC_SLATEBLUE1)
        .value("Quantity_NOC_SLATEBLUE2",Quantity_NameOfColor::Quantity_NOC_SLATEBLUE2)
        .value("Quantity_NOC_SLATEBLUE3",Quantity_NameOfColor::Quantity_NOC_SLATEBLUE3)
        .value("Quantity_NOC_SLATEBLUE4",Quantity_NameOfColor::Quantity_NOC_SLATEBLUE4)
        .value("Quantity_NOC_SLATEGRAY1",Quantity_NameOfColor::Quantity_NOC_SLATEGRAY1)
        .value("Quantity_NOC_SLATEGRAY2",Quantity_NameOfColor::Quantity_NOC_SLATEGRAY2)
        .value("Quantity_NOC_SLATEGRAY3",Quantity_NameOfColor::Quantity_NOC_SLATEGRAY3)
        .value("Quantity_NOC_SLATEGRAY4",Quantity_NameOfColor::Quantity_NOC_SLATEGRAY4)
        .value("Quantity_NOC_SLATEGRAY",Quantity_NameOfColor::Quantity_NOC_SLATEGRAY)
        .value("Quantity_NOC_SNOW",Quantity_NameOfColor::Quantity_NOC_SNOW)
        .value("Quantity_NOC_SNOW2",Quantity_NameOfColor::Quantity_NOC_SNOW2)
        .value("Quantity_NOC_SNOW3",Quantity_NameOfColor::Quantity_NOC_SNOW3)
        .value("Quantity_NOC_SNOW4",Quantity_NameOfColor::Quantity_NOC_SNOW4)
        .value("Quantity_NOC_SPRINGGREEN",Quantity_NameOfColor::Quantity_NOC_SPRINGGREEN)
        .value("Quantity_NOC_SPRINGGREEN2",Quantity_NameOfColor::Quantity_NOC_SPRINGGREEN2)
        .value("Quantity_NOC_SPRINGGREEN3",Quantity_NameOfColor::Quantity_NOC_SPRINGGREEN3)
        .value("Quantity_NOC_SPRINGGREEN4",Quantity_NameOfColor::Quantity_NOC_SPRINGGREEN4)
        .value("Quantity_NOC_STEELBLUE",Quantity_NameOfColor::Quantity_NOC_STEELBLUE)
        .value("Quantity_NOC_STEELBLUE1",Quantity_NameOfColor::Quantity_NOC_STEELBLUE1)
        .value("Quantity_NOC_STEELBLUE2",Quantity_NameOfColor::Quantity_NOC_STEELBLUE2)
        .value("Quantity_NOC_STEELBLUE3",Quantity_NameOfColor::Quantity_NOC_STEELBLUE3)
        .value("Quantity_NOC_STEELBLUE4",Quantity_NameOfColor::Quantity_NOC_STEELBLUE4)
        .value("Quantity_NOC_TAN",Quantity_NameOfColor::Quantity_NOC_TAN)
        .value("Quantity_NOC_TAN1",Quantity_NameOfColor::Quantity_NOC_TAN1)
        .value("Quantity_NOC_TAN2",Quantity_NameOfColor::Quantity_NOC_TAN2)
        .value("Quantity_NOC_TAN3",Quantity_NameOfColor::Quantity_NOC_TAN3)
        .value("Quantity_NOC_TAN4",Quantity_NameOfColor::Quantity_NOC_TAN4)
        .value("Quantity_NOC_THISTLE",Quantity_NameOfColor::Quantity_NOC_THISTLE)
        .value("Quantity_NOC_THISTLE1",Quantity_NameOfColor::Quantity_NOC_THISTLE1)
        .value("Quantity_NOC_THISTLE2",Quantity_NameOfColor::Quantity_NOC_THISTLE2)
        .value("Quantity_NOC_THISTLE3",Quantity_NameOfColor::Quantity_NOC_THISTLE3)
        .value("Quantity_NOC_THISTLE4",Quantity_NameOfColor::Quantity_NOC_THISTLE4)
        .value("Quantity_NOC_TOMATO",Quantity_NameOfColor::Quantity_NOC_TOMATO)
        .value("Quantity_NOC_TOMATO1",Quantity_NameOfColor::Quantity_NOC_TOMATO1)
        .value("Quantity_NOC_TOMATO2",Quantity_NameOfColor::Quantity_NOC_TOMATO2)
        .value("Quantity_NOC_TOMATO3",Quantity_NameOfColor::Quantity_NOC_TOMATO3)
        .value("Quantity_NOC_TOMATO4",Quantity_NameOfColor::Quantity_NOC_TOMATO4)
        .value("Quantity_NOC_TURQUOISE",Quantity_NameOfColor::Quantity_NOC_TURQUOISE)
        .value("Quantity_NOC_TURQUOISE1",Quantity_NameOfColor::Quantity_NOC_TURQUOISE1)
        .value("Quantity_NOC_TURQUOISE2",Quantity_NameOfColor::Quantity_NOC_TURQUOISE2)
        .value("Quantity_NOC_TURQUOISE3",Quantity_NameOfColor::Quantity_NOC_TURQUOISE3)
        .value("Quantity_NOC_TURQUOISE4",Quantity_NameOfColor::Quantity_NOC_TURQUOISE4)
        .value("Quantity_NOC_VIOLET",Quantity_NameOfColor::Quantity_NOC_VIOLET)
        .value("Quantity_NOC_VIOLETRED",Quantity_NameOfColor::Quantity_NOC_VIOLETRED)
        .value("Quantity_NOC_VIOLETRED1",Quantity_NameOfColor::Quantity_NOC_VIOLETRED1)
        .value("Quantity_NOC_VIOLETRED2",Quantity_NameOfColor::Quantity_NOC_VIOLETRED2)
        .value("Quantity_NOC_VIOLETRED3",Quantity_NameOfColor::Quantity_NOC_VIOLETRED3)
        .value("Quantity_NOC_VIOLETRED4",Quantity_NameOfColor::Quantity_NOC_VIOLETRED4)
        .value("Quantity_NOC_WHEAT",Quantity_NameOfColor::Quantity_NOC_WHEAT)
        .value("Quantity_NOC_WHEAT1",Quantity_NameOfColor::Quantity_NOC_WHEAT1)
        .value("Quantity_NOC_WHEAT2",Quantity_NameOfColor::Quantity_NOC_WHEAT2)
        .value("Quantity_NOC_WHEAT3",Quantity_NameOfColor::Quantity_NOC_WHEAT3)
        .value("Quantity_NOC_WHEAT4",Quantity_NameOfColor::Quantity_NOC_WHEAT4)
        .value("Quantity_NOC_WHITESMOKE",Quantity_NameOfColor::Quantity_NOC_WHITESMOKE)
        .value("Quantity_NOC_YELLOW",Quantity_NameOfColor::Quantity_NOC_YELLOW)
        .value("Quantity_NOC_YELLOW1",Quantity_NameOfColor::Quantity_NOC_YELLOW1)
        .value("Quantity_NOC_YELLOW2",Quantity_NameOfColor::Quantity_NOC_YELLOW2)
        .value("Quantity_NOC_YELLOW3",Quantity_NameOfColor::Quantity_NOC_YELLOW3)
        .value("Quantity_NOC_YELLOW4",Quantity_NameOfColor::Quantity_NOC_YELLOW4)
        .value("Quantity_NOC_YELLOWGREEN",Quantity_NameOfColor::Quantity_NOC_YELLOWGREEN)
        .value("Quantity_NOC_WHITE",Quantity_NameOfColor::Quantity_NOC_WHITE).export_values();
    py::enum_<Quantity_PhysicalQuantity>(m, "Quantity_PhysicalQuantity",R"#(List of all physical quantities(Afnor))#")
        .value("Quantity_MASS",Quantity_PhysicalQuantity::Quantity_MASS)
        .value("Quantity_PLANEANGLE",Quantity_PhysicalQuantity::Quantity_PLANEANGLE)
        .value("Quantity_SOLIDANGLE",Quantity_PhysicalQuantity::Quantity_SOLIDANGLE)
        .value("Quantity_LENGTH",Quantity_PhysicalQuantity::Quantity_LENGTH)
        .value("Quantity_AREA",Quantity_PhysicalQuantity::Quantity_AREA)
        .value("Quantity_VOLUME",Quantity_PhysicalQuantity::Quantity_VOLUME)
        .value("Quantity_SPEED",Quantity_PhysicalQuantity::Quantity_SPEED)
        .value("Quantity_VELOCITY",Quantity_PhysicalQuantity::Quantity_VELOCITY)
        .value("Quantity_ACCELERATION",Quantity_PhysicalQuantity::Quantity_ACCELERATION)
        .value("Quantity_ANGULARVELOCITY",Quantity_PhysicalQuantity::Quantity_ANGULARVELOCITY)
        .value("Quantity_FREQUENCY",Quantity_PhysicalQuantity::Quantity_FREQUENCY)
        .value("Quantity_TEMPERATURE",Quantity_PhysicalQuantity::Quantity_TEMPERATURE)
        .value("Quantity_AMOUNTOFSUBSTANCE",Quantity_PhysicalQuantity::Quantity_AMOUNTOFSUBSTANCE)
        .value("Quantity_DENSITY",Quantity_PhysicalQuantity::Quantity_DENSITY)
        .value("Quantity_MASSFLOW",Quantity_PhysicalQuantity::Quantity_MASSFLOW)
        .value("Quantity_VOLUMEFLOW",Quantity_PhysicalQuantity::Quantity_VOLUMEFLOW)
        .value("Quantity_CONSUMPTION",Quantity_PhysicalQuantity::Quantity_CONSUMPTION)
        .value("Quantity_MOMENTUM",Quantity_PhysicalQuantity::Quantity_MOMENTUM)
        .value("Quantity_KINETICMOMENT",Quantity_PhysicalQuantity::Quantity_KINETICMOMENT)
        .value("Quantity_MOMENTOFINERTIA",Quantity_PhysicalQuantity::Quantity_MOMENTOFINERTIA)
        .value("Quantity_FORCE",Quantity_PhysicalQuantity::Quantity_FORCE)
        .value("Quantity_MOMENTOFAFORCE",Quantity_PhysicalQuantity::Quantity_MOMENTOFAFORCE)
        .value("Quantity_TORQUE",Quantity_PhysicalQuantity::Quantity_TORQUE)
        .value("Quantity_WEIGHT",Quantity_PhysicalQuantity::Quantity_WEIGHT)
        .value("Quantity_PRESSURE",Quantity_PhysicalQuantity::Quantity_PRESSURE)
        .value("Quantity_VISCOSITY",Quantity_PhysicalQuantity::Quantity_VISCOSITY)
        .value("Quantity_KINEMATICVISCOSITY",Quantity_PhysicalQuantity::Quantity_KINEMATICVISCOSITY)
        .value("Quantity_ENERGY",Quantity_PhysicalQuantity::Quantity_ENERGY)
        .value("Quantity_WORK",Quantity_PhysicalQuantity::Quantity_WORK)
        .value("Quantity_POWER",Quantity_PhysicalQuantity::Quantity_POWER)
        .value("Quantity_SURFACETENSION",Quantity_PhysicalQuantity::Quantity_SURFACETENSION)
        .value("Quantity_COEFFICIENTOFEXPANSION",Quantity_PhysicalQuantity::Quantity_COEFFICIENTOFEXPANSION)
        .value("Quantity_THERMALCONDUCTIVITY",Quantity_PhysicalQuantity::Quantity_THERMALCONDUCTIVITY)
        .value("Quantity_SPECIFICHEATCAPACITY",Quantity_PhysicalQuantity::Quantity_SPECIFICHEATCAPACITY)
        .value("Quantity_ENTROPY",Quantity_PhysicalQuantity::Quantity_ENTROPY)
        .value("Quantity_ENTHALPY",Quantity_PhysicalQuantity::Quantity_ENTHALPY)
        .value("Quantity_LUMINOUSINTENSITY",Quantity_PhysicalQuantity::Quantity_LUMINOUSINTENSITY)
        .value("Quantity_LUMINOUSFLUX",Quantity_PhysicalQuantity::Quantity_LUMINOUSFLUX)
        .value("Quantity_LUMINANCE",Quantity_PhysicalQuantity::Quantity_LUMINANCE)
        .value("Quantity_ILLUMINANCE",Quantity_PhysicalQuantity::Quantity_ILLUMINANCE)
        .value("Quantity_LUMINOUSEXPOSITION",Quantity_PhysicalQuantity::Quantity_LUMINOUSEXPOSITION)
        .value("Quantity_LUMINOUSEFFICACITY",Quantity_PhysicalQuantity::Quantity_LUMINOUSEFFICACITY)
        .value("Quantity_ELECTRICCHARGE",Quantity_PhysicalQuantity::Quantity_ELECTRICCHARGE)
        .value("Quantity_ELECTRICCURRENT",Quantity_PhysicalQuantity::Quantity_ELECTRICCURRENT)
        .value("Quantity_ELECTRICFIELDSTRENGTH",Quantity_PhysicalQuantity::Quantity_ELECTRICFIELDSTRENGTH)
        .value("Quantity_ELECTRICPOTENTIAL",Quantity_PhysicalQuantity::Quantity_ELECTRICPOTENTIAL)
        .value("Quantity_ELECTRICCAPACITANCE",Quantity_PhysicalQuantity::Quantity_ELECTRICCAPACITANCE)
        .value("Quantity_MAGNETICFLUX",Quantity_PhysicalQuantity::Quantity_MAGNETICFLUX)
        .value("Quantity_MAGNETICFLUXDENSITY",Quantity_PhysicalQuantity::Quantity_MAGNETICFLUXDENSITY)
        .value("Quantity_MAGNETICFIELDSTRENGTH",Quantity_PhysicalQuantity::Quantity_MAGNETICFIELDSTRENGTH)
        .value("Quantity_RELUCTANCE",Quantity_PhysicalQuantity::Quantity_RELUCTANCE)
        .value("Quantity_RESISTANCE",Quantity_PhysicalQuantity::Quantity_RESISTANCE)
        .value("Quantity_INDUCTANCE",Quantity_PhysicalQuantity::Quantity_INDUCTANCE)
        .value("Quantity_CAPACITANCE",Quantity_PhysicalQuantity::Quantity_CAPACITANCE)
        .value("Quantity_IMPEDANCE",Quantity_PhysicalQuantity::Quantity_IMPEDANCE)
        .value("Quantity_ADMITTANCE",Quantity_PhysicalQuantity::Quantity_ADMITTANCE)
        .value("Quantity_RESISTIVITY",Quantity_PhysicalQuantity::Quantity_RESISTIVITY)
        .value("Quantity_CONDUCTIVITY",Quantity_PhysicalQuantity::Quantity_CONDUCTIVITY)
        .value("Quantity_MOLARMASS",Quantity_PhysicalQuantity::Quantity_MOLARMASS)
        .value("Quantity_MOLARVOLUME",Quantity_PhysicalQuantity::Quantity_MOLARVOLUME)
        .value("Quantity_CONCENTRATION",Quantity_PhysicalQuantity::Quantity_CONCENTRATION)
        .value("Quantity_MOLARCONCENTRATION",Quantity_PhysicalQuantity::Quantity_MOLARCONCENTRATION)
        .value("Quantity_MOLARITY",Quantity_PhysicalQuantity::Quantity_MOLARITY)
        .value("Quantity_SOUNDINTENSITY",Quantity_PhysicalQuantity::Quantity_SOUNDINTENSITY)
        .value("Quantity_ACOUSTICINTENSITY",Quantity_PhysicalQuantity::Quantity_ACOUSTICINTENSITY)
        .value("Quantity_ACTIVITY",Quantity_PhysicalQuantity::Quantity_ACTIVITY)
        .value("Quantity_ABSORBEDDOSE",Quantity_PhysicalQuantity::Quantity_ABSORBEDDOSE)
        .value("Quantity_DOSEEQUIVALENT",Quantity_PhysicalQuantity::Quantity_DOSEEQUIVALENT).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<Quantity_Color>(m,"Quantity_Array1OfColor");
    preregister_template_NCollection_Array2<Quantity_Color>(m,"Quantity_Array2OfColor");

// classes forward declarations only
    py::class_<Quantity_Color , shared_ptr<Quantity_Color> >(m,"Quantity_Color",R"#(This class allows the definition of a colour. The names of the colours are from the X11 specification. color object may be used for numerous applicative purposes. A color is defined by: - its respective quantities of red, green and blue (R-G-B values), or - its hue angle and its values of lightness and saturation (H-L-S values). These two color definition systems are equivalent. Use this class in conjunction with: - the Quantity_TypeOfColor enumeration which identifies the color definition system you are using, - the Quantity_NameOfColor enumeration which lists numerous predefined colors and identifies them by their name.)#");
    py::class_<Quantity_ColorHasher , shared_ptr<Quantity_ColorHasher> >(m,"Quantity_ColorHasher",R"#(Hasher of Quantity_Color.)#");
    py::class_<Quantity_ColorRGBA , shared_ptr<Quantity_ColorRGBA> >(m,"Quantity_ColorRGBA",R"#(The pair of Quantity_Color and Alpha component (1.0 opaque, 0.0 transparent).)#");
    py::class_<Quantity_ColorRGBAHasher , shared_ptr<Quantity_ColorRGBAHasher> >(m,"Quantity_ColorRGBAHasher",R"#(Hasher of Quantity_ColorRGBA.)#");
    py::class_<Quantity_Date , shared_ptr<Quantity_Date> >(m,"Quantity_Date",R"#(This class provides services to manage date information. A date represents the following time intervals: year, month, day, hour, minute, second, millisecond and microsecond. Current time is expressed in elapsed seconds and microseconds beginning from 00:00 GMT, January 1, 1979 (zero hour). The valid date can only be later than this one. Note: a Period object gives the interval between two dates.)#");
    py::class_<Quantity_HArray1OfColor ,opencascade::handle<Quantity_HArray1OfColor> , Quantity_Array1OfColor, Standard_Transient>(m,"Quantity_HArray1OfColor",R"#()#");
    py::class_<Quantity_Period , shared_ptr<Quantity_Period> >(m,"Quantity_Period",R"#(Manages date intervals. For example, a Period object gives the interval between two dates. A period is expressed in seconds and microseconds.)#");

};

// user-defined post-inclusion per module

// user-defined post
