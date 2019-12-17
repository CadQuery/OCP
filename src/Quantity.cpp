
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
#include "NCollection.hxx"
// ./opencascade/Quantity_Array2OfColor.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Quantity(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Quantity"));


//Python trampoline classes

// classes


    static_cast<py::class_<Quantity_Color ,std::unique_ptr<Quantity_Color>  >>(m.attr("Quantity_Color"))
        .def(py::init<  >()  )
        .def(py::init< const Quantity_NameOfColor >()  , py::arg("AName") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Quantity_TypeOfColor >()  , py::arg("theR1"),  py::arg("theR2"),  py::arg("theR3"),  py::arg("theType") )
        .def(py::init< const NCollection_Vec3<float> & >()  , py::arg("theRgb") )
        .def("ChangeContrast",
             (void (Quantity_Color::*)( const Standard_Real  ) ) static_cast<void (Quantity_Color::*)( const Standard_Real  ) >(&Quantity_Color::ChangeContrast),
             R"#(Increases or decreases the contrast by <ADelta>. <ADelta> is a percentage. Any value greater than zero will increase the contrast. The variation is expressed as a percentage of the current value. It is a variation of the saturation.)#"  , py::arg("ADelta"))
        .def("ChangeIntensity",
             (void (Quantity_Color::*)( const Standard_Real  ) ) static_cast<void (Quantity_Color::*)( const Standard_Real  ) >(&Quantity_Color::ChangeIntensity),
             R"#(Increases or decreases the intensity by <ADelta>. <ADelta> is a percentage. Any value greater than zero will increase the intensity. The variation is expressed as a percentage of the current value. It is a variation of the lightness.)#"  , py::arg("ADelta"))
        .def("SetValues",
             (void (Quantity_Color::*)( const Quantity_NameOfColor  ) ) static_cast<void (Quantity_Color::*)( const Quantity_NameOfColor  ) >(&Quantity_Color::SetValues),
             R"#(Updates the colour <me> from the definition of the colour <AName>.)#"  , py::arg("AName"))
        .def("SetValues",
             (void (Quantity_Color::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Quantity_TypeOfColor  ) ) static_cast<void (Quantity_Color::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Quantity_TypeOfColor  ) >(&Quantity_Color::SetValues),
             R"#(Updates a color according to the mode specified by theType. TOC_RGB: - theR1 the value of Red within range [0.0; 1.0] - theR2 the value of Green within range [0.0; 1.0] - theR3 the value of Blue within range [0.0; 1.0])#"  , py::arg("theR1"),  py::arg("theR2"),  py::arg("theR3"),  py::arg("theType"))
        .def("Delta",
             (void (Quantity_Color::*)( const Quantity_Color & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Quantity_Color::*)( const Quantity_Color & ,  Standard_Real & ,  Standard_Real &  ) const>(&Quantity_Color::Delta),
             R"#(Returns the percentage change of contrast and intensity between <me> and <AColor>. <DC> and <DI> are percentages, either positive or negative. The calculation is with respect to the current value of <me> If <DC> is positive then <me> is more contrasty. If <DI> is positive then <me> is more intense.)#"  , py::arg("AColor"),  py::arg("DC"),  py::arg("DI"))
        .def("Distance",
             (Standard_Real (Quantity_Color::*)( const Quantity_Color &  ) const) static_cast<Standard_Real (Quantity_Color::*)( const Quantity_Color &  ) const>(&Quantity_Color::Distance),
             R"#(Returns the distance between two colours. It's a value between 0 and the square root of 3 (the black/white distance))#"  , py::arg("AColor"))
        .def("SquareDistance",
             (Standard_Real (Quantity_Color::*)( const Quantity_Color &  ) const) static_cast<Standard_Real (Quantity_Color::*)( const Quantity_Color &  ) const>(&Quantity_Color::SquareDistance),
             R"#(Returns the square of distance between two colours.)#"  , py::arg("AColor"))
        .def("Blue",
             (Standard_Real (Quantity_Color::*)() const) static_cast<Standard_Real (Quantity_Color::*)() const>(&Quantity_Color::Blue),
             R"#(Returns the Blue component (quantity of blue) of the color within range [0.0; 1.0].)#" )
        .def("Green",
             (Standard_Real (Quantity_Color::*)() const) static_cast<Standard_Real (Quantity_Color::*)() const>(&Quantity_Color::Green),
             R"#(Returns the Green component (quantity of green) of the color within range [0.0; 1.0].)#" )
        .def("Hue",
             (Standard_Real (Quantity_Color::*)() const) static_cast<Standard_Real (Quantity_Color::*)() const>(&Quantity_Color::Hue),
             R"#(Returns the Hue component (hue angle) of the color in degrees within range [0.0; 360.0], 0.0 being Red. -1.0 is a special value reserved for grayscale color (S should be 0.0))#" )
        .def("IsDifferent",
             (Standard_Boolean (Quantity_Color::*)( const Quantity_Color &  ) const) static_cast<Standard_Boolean (Quantity_Color::*)( const Quantity_Color &  ) const>(&Quantity_Color::IsDifferent),
             R"#(Returns Standard_True if the distance between <me> and <Other> is greater than Epsilon ().)#"  , py::arg("Other"))
        .def("IsEqual",
             (Standard_Boolean (Quantity_Color::*)( const Quantity_Color &  ) const) static_cast<Standard_Boolean (Quantity_Color::*)( const Quantity_Color &  ) const>(&Quantity_Color::IsEqual),
             R"#(Returns true if the Other color is - different from, or - equal to this color. Two colors are considered to be equal if their distance is no greater than Epsilon(). These methods are aliases of operator != and operator ==.)#"  , py::arg("Other"))
        .def("Light",
             (Standard_Real (Quantity_Color::*)() const) static_cast<Standard_Real (Quantity_Color::*)() const>(&Quantity_Color::Light),
             R"#(Returns the Light component (value of the lightness) of the color within range [0.0; 1.0].)#" )
        .def("Name",
             (Quantity_NameOfColor (Quantity_Color::*)() const) static_cast<Quantity_NameOfColor (Quantity_Color::*)() const>(&Quantity_Color::Name),
             R"#(Returns the name of the color defined by its quantities of red R, green G and blue B; more precisely this is the nearest color from the Quantity_NameOfColor enumeration. Exceptions Standard_OutOfRange if R, G or B is less than 0. or greater than 1.)#" )
        .def("Red",
             (Standard_Real (Quantity_Color::*)() const) static_cast<Standard_Real (Quantity_Color::*)() const>(&Quantity_Color::Red),
             R"#(Returns the Red component (quantity of red) of the color within range [0.0; 1.0].)#" )
        .def("Saturation",
             (Standard_Real (Quantity_Color::*)() const) static_cast<Standard_Real (Quantity_Color::*)() const>(&Quantity_Color::Saturation),
             R"#(Returns the Saturation component (value of the saturation) of the color within range [0.0; 1.0].)#" )
        .def("Values",
             (void (Quantity_Color::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const Quantity_TypeOfColor  ) const) static_cast<void (Quantity_Color::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const Quantity_TypeOfColor  ) const>(&Quantity_Color::Values),
             R"#(Returns in theR1, theR2 and theR3 the components of this color according to the color system definition theType. If theType is Quantity_TOC_RGB: - theR1 the value of Red between 0.0 and 1.0 - theR2 the value of Green between 0.0 and 1.0 - theR3 the value of Blue between 0.0 and 1.0 If theType is Quantity_TOC_HLS: - theR1 is the Hue (H) angle in degrees within range [0.0; 360.0], 0.0 being Red. -1.0 is a special value reserved for grayscale color (S should be 0.0). - theR2 is the Lightness (L) within range [0.0; 1.0] - theR3 is the Saturation (S) within range [0.0; 1.0])#"  , py::arg("theR1"),  py::arg("theR2"),  py::arg("theR3"),  py::arg("theType"))
        .def_static("SetEpsilon_s",
                    (void (*)( const Standard_Real  ) ) static_cast<void (*)( const Standard_Real  ) >(&Quantity_Color::SetEpsilon),
                    R"#(Sets the specified value used to compare <me> and an other color in IsDifferent and in IsEqual methods. Warning: The default value is 0.0001)#"  , py::arg("AnEpsilon"))
        .def_static("Epsilon_s",
                    (Standard_Real (*)() ) static_cast<Standard_Real (*)() >(&Quantity_Color::Epsilon),
                    R"#(Returns the specified value used to compare <me> and an other color in IsDifferent and in IsEqual methods.)#" )
        .def_static("Name_s",
                    (Quantity_NameOfColor (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Quantity_NameOfColor (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Quantity_Color::Name),
                    R"#(Returns the name of the colour for which the RGB components are nearest to <R>, <G> and <B>.)#"  , py::arg("R"),  py::arg("G"),  py::arg("B"))
        .def_static("StringName_s",
                    (Standard_CString (*)( const Quantity_NameOfColor  ) ) static_cast<Standard_CString (*)( const Quantity_NameOfColor  ) >(&Quantity_Color::StringName),
                    R"#(Returns the name of the color identified by AName in the Quantity_NameOfColor enumeration. For example, the name of the color which corresponds to Quantity_NOC_BLACK is "BLACK". Exceptions Standard_OutOfRange if AName in not known in the Quantity_NameOfColor enumeration.)#"  , py::arg("AColor"))
        .def_static("ColorFromName_s",
                    (Standard_Boolean (*)( const Standard_CString ,  Quantity_NameOfColor &  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  Quantity_NameOfColor &  ) >(&Quantity_Color::ColorFromName),
                    R"#(Finds color from predefined names. For example, the name of the color which corresponds to "BLACK" is Quantity_NOC_BLACK. Returns false if name is unknown.)#"  , py::arg("theName"),  py::arg("theColor"))
        .def_static("HlsRgb_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&Quantity_Color::HlsRgb),
                    R"#(Converts HLS components into RGB ones.)#"  , py::arg("H"),  py::arg("L"),  py::arg("S"),  py::arg("R"),  py::arg("G"),  py::arg("B"))
        .def_static("RgbHls_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&Quantity_Color::RgbHls),
                    R"#(Converts RGB components into HLS ones.)#"  , py::arg("R"),  py::arg("G"),  py::arg("B"),  py::arg("H"),  py::arg("L"),  py::arg("S"))
        .def_static("Color2argb_s",
                    (void (*)( const Quantity_Color & ,  Standard_Integer &  ) ) static_cast<void (*)( const Quantity_Color & ,  Standard_Integer &  ) >(&Quantity_Color::Color2argb),
                    R"#(Convert the Color value to ARGB integer value. theARGB has Alpha equal to zero, so the output is formatted as 0x00RRGGBB)#"  , py::arg("theColor"),  py::arg("theARGB"))
        .def_static("Argb2color_s",
                    (void (*)( const Standard_Integer ,  Quantity_Color &  ) ) static_cast<void (*)( const Standard_Integer ,  Quantity_Color &  ) >(&Quantity_Color::Argb2color),
                    R"#(Convert integer ARGB value to Color. Alpha bits are ignored)#"  , py::arg("theARGB"),  py::arg("theColor"))
        .def_static("Test_s",
                    (void (*)() ) static_cast<void (*)() >(&Quantity_Color::Test),
                    R"#(Internal test)#" )
;


    static_cast<py::class_<Quantity_Period ,std::unique_ptr<Quantity_Period>  >>(m.attr("Quantity_Period"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis")=static_cast<const Standard_Integer>(0),  py::arg("mics")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("ss"),  py::arg("mics")=static_cast<const Standard_Integer>(0) )
        .def("Values",
             (void (Quantity_Period::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Quantity_Period::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Quantity_Period::Values),
             R"#(Decomposes this period into a number of days,hours, minutes,seconds,milliseconds and microseconds Example of return values: 2 days, 15 hours, 0 minute , 0 second 0 millisecond and 0 microsecond)#"  , py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis"),  py::arg("mics"))
        .def("Values",
             (void (Quantity_Period::*)( Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Quantity_Period::*)( Standard_Integer & ,  Standard_Integer &  ) const>(&Quantity_Period::Values),
             R"#(Returns the number of seconds in Ss and the number of remainding microseconds in Mics of this period. Example of return values: 3600 seconds and 0 microseconds)#"  , py::arg("ss"),  py::arg("mics"))
        .def("SetValues",
             (void (Quantity_Period::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Quantity_Period::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Quantity_Period::SetValues),
             R"#(Assigns to this period the time interval defined - with dd days, hh hours, mn minutes, ss seconds, mis (defaulted to 0) milliseconds and mics (defaulted to 0) microseconds; or)#"  , py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis")=static_cast<const Standard_Integer>(0),  py::arg("mics")=static_cast<const Standard_Integer>(0))
        .def("SetValues",
             (void (Quantity_Period::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Quantity_Period::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Quantity_Period::SetValues),
             R"#(Assigns to this period the time interval defined - with Ss seconds and Mics (defaulted to 0) microseconds. Exceptions Quantity_PeriodDefinitionError: - if the number of seconds expressed either by: - dd days, hh hours, mn minutes and ss seconds, or - Ss is less than 0. - if the number of microseconds expressed either by: - mis milliseconds and mics microseconds, or - Mics is less than 0.)#"  , py::arg("ss"),  py::arg("mics")=static_cast<const Standard_Integer>(0))
        .def("Subtract",
             (Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const) static_cast<Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const>(&Quantity_Period::Subtract),
             R"#(Subtracts one Period from another and returns the difference.)#"  , py::arg("anOther"))
        .def("Add",
             (Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const) static_cast<Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const>(&Quantity_Period::Add),
             R"#(Adds one Period to another one.)#"  , py::arg("anOther"))
        .def("IsEqual",
             (Standard_Boolean (Quantity_Period::*)( const Quantity_Period &  ) const) static_cast<Standard_Boolean (Quantity_Period::*)( const Quantity_Period &  ) const>(&Quantity_Period::IsEqual),
             R"#(Returns TRUE if both <me> and <other> are equal.)#"  , py::arg("anOther"))
        .def("IsShorter",
             (Standard_Boolean (Quantity_Period::*)( const Quantity_Period &  ) const) static_cast<Standard_Boolean (Quantity_Period::*)( const Quantity_Period &  ) const>(&Quantity_Period::IsShorter),
             R"#(Returns TRUE if <me> is shorter than <other>.)#"  , py::arg("anOther"))
        .def("IsLonger",
             (Standard_Boolean (Quantity_Period::*)( const Quantity_Period &  ) const) static_cast<Standard_Boolean (Quantity_Period::*)( const Quantity_Period &  ) const>(&Quantity_Period::IsLonger),
             R"#(Returns TRUE if <me> is longer then <other>.)#"  , py::arg("anOther"))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Quantity_Period::IsValid),
                    R"#(Checks the validity of a Period in form (dd,hh,mn,ss,mil,mic) With: 0 <= dd 0 <= hh 0 <= mn 0 <= ss 0 <= mis 0 <= mics)#"  , py::arg("dd"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis")=static_cast<const Standard_Integer>(0),  py::arg("mics")=static_cast<const Standard_Integer>(0))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_Integer ,  const Standard_Integer  ) >(&Quantity_Period::IsValid),
                    R"#(Checks the validity of a Period in form (ss,mic) With: 0 <= ss 0 <= mics)#"  , py::arg("ss"),  py::arg("mics")=static_cast<const Standard_Integer>(0))
        .def("__sub__",
             (Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const) static_cast<Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const>(&Quantity_Period::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("anOther"))
        .def("__add__",
             (Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const) static_cast<Quantity_Period (Quantity_Period::*)( const Quantity_Period &  ) const>(&Quantity_Period::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("anOther"))
;


    static_cast<py::class_<Quantity_Date ,std::unique_ptr<Quantity_Date>  >>(m.attr("Quantity_Date"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("mm"),  py::arg("dd"),  py::arg("yyyy"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis")=static_cast<const Standard_Integer>(0),  py::arg("mics")=static_cast<const Standard_Integer>(0) )
        .def("Values",
             (void (Quantity_Date::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Quantity_Date::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Quantity_Date::Values),
             R"#(Gets a complete Date. - in mm - the month, - in dd - the day, - in yyyy - the year, - in hh - the hour, - in mn - the minute, - in ss - the second, - in mis - the millisecond, and - in mics - the microsecond)#"  , py::arg("mm"),  py::arg("dd"),  py::arg("yy"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis"),  py::arg("mics"))
        .def("SetValues",
             (void (Quantity_Date::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Quantity_Date::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Quantity_Date::SetValues),
             R"#(Assigns to this date the year yyyy, the month mm, the day dd, the hour hh, the minute mn, the second ss, the millisecond mis (defaulted to 0) and the microsecond mics (defaulted to 0). Exceptions Quantity_DateDefinitionError if mm, dd, hh, mn, ss, mis and mics are not components of a valid date.)#"  , py::arg("mm"),  py::arg("dd"),  py::arg("yy"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis")=static_cast<const Standard_Integer>(0),  py::arg("mics")=static_cast<const Standard_Integer>(0))
        .def("Difference",
             (Quantity_Period (Quantity_Date::*)( const Quantity_Date &  ) ) static_cast<Quantity_Period (Quantity_Date::*)( const Quantity_Date &  ) >(&Quantity_Date::Difference),
             R"#(Subtracts one Date from another one to find the period between and returns the value. The result is the absolute value between the difference of two dates.)#"  , py::arg("anOther"))
        .def("Subtract",
             (Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) ) static_cast<Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) >(&Quantity_Date::Subtract),
             R"#(Subtracts a period from a Date and returns the new Date. Raises an exception if the result date is anterior to Jan 1, 1979.)#"  , py::arg("aPeriod"))
        .def("Add",
             (Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) ) static_cast<Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) >(&Quantity_Date::Add),
             R"#(Adds a Period to a Date and returns the new Date.)#"  , py::arg("aPeriod"))
        .def("Year",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::Year),
             R"#(Returns year of a Date.)#" )
        .def("Month",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::Month),
             R"#(Returns month of a Date.)#" )
        .def("Day",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::Day),
             R"#(Returns Day of a Date.)#" )
        .def("Hour",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::Hour),
             R"#(Returns Hour of a Date.)#" )
        .def("Minute",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::Minute),
             R"#(Returns minute of a Date.)#" )
        .def("Second",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::Second),
             R"#(Returns seconde of a Date.)#" )
        .def("MilliSecond",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::MilliSecond),
             R"#(Returns millisecond of a Date.)#" )
        .def("MicroSecond",
             (Standard_Integer (Quantity_Date::*)() ) static_cast<Standard_Integer (Quantity_Date::*)() >(&Quantity_Date::MicroSecond),
             R"#(Returns microsecond of a Date.)#" )
        .def("IsEqual",
             (Standard_Boolean (Quantity_Date::*)( const Quantity_Date &  ) const) static_cast<Standard_Boolean (Quantity_Date::*)( const Quantity_Date &  ) const>(&Quantity_Date::IsEqual),
             R"#(Returns TRUE if both <me> and <other> are equal. This method is an alias of operator ==.)#"  , py::arg("anOther"))
        .def("IsEarlier",
             (Standard_Boolean (Quantity_Date::*)( const Quantity_Date &  ) const) static_cast<Standard_Boolean (Quantity_Date::*)( const Quantity_Date &  ) const>(&Quantity_Date::IsEarlier),
             R"#(Returns TRUE if <me> is earlier than <other>.)#"  , py::arg("anOther"))
        .def("IsLater",
             (Standard_Boolean (Quantity_Date::*)( const Quantity_Date &  ) const) static_cast<Standard_Boolean (Quantity_Date::*)( const Quantity_Date &  ) const>(&Quantity_Date::IsLater),
             R"#(Returns TRUE if <me> is later then <other>.)#"  , py::arg("anOther"))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Quantity_Date::IsValid),
                    R"#(Checks the validity of a date - returns true if a date defined from the year yyyy, the month mm, the day dd, the hour hh, the minute mn, the second ss, the millisecond mis (defaulted to 0) and the microsecond mics (defaulted to 0) is valid. A date must satisfy the conditions above: - yyyy is greater than or equal to 1979, - mm lies within the range [1, 12] (with 1 corresponding to January and 12 to December), - dd lies within a valid range for the month mm (from 1 to 28, 29, 30 or 31 depending on mm and whether yyyy is a leap year or not), - hh lies within the range [0, 23], - mn lies within the range [0, 59], - ss lies within the range [0, 59], - mis lies within the range [0, 999], - mics lies within the range [0, 999].C)#"  , py::arg("mm"),  py::arg("dd"),  py::arg("yy"),  py::arg("hh"),  py::arg("mn"),  py::arg("ss"),  py::arg("mis")=static_cast<const Standard_Integer>(0),  py::arg("mics")=static_cast<const Standard_Integer>(0))
        .def_static("IsLeap_s",
                    (Standard_Boolean (*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_Integer  ) >(&Quantity_Date::IsLeap),
                    R"#(Returns true if a year is a leap year. The leap years are divisable by 4 and not by 100 except the years divisable by 400.)#"  , py::arg("yy"))
        .def("__sub__",
             (Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) ) static_cast<Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) >(&Quantity_Date::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("aPeriod"))
        .def("__add__",
             (Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) ) static_cast<Quantity_Date (Quantity_Date::*)( const Quantity_Period &  ) >(&Quantity_Date::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("aPeriod"))
;


    static_cast<py::class_<Quantity_HArray1OfColor ,std::unique_ptr<Quantity_HArray1OfColor>  >>(m.attr("Quantity_HArray1OfColor"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Quantity_Color & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Quantity_Color> & >()  , py::arg("theOther") )
        .def("Array1",
             (const Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() const) static_cast<const Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() const>(&Quantity_HArray1OfColor::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() ) static_cast<Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() >(&Quantity_HArray1OfColor::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Quantity_HArray1OfColor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Quantity_HArray1OfColor::*)() const>(&Quantity_HArray1OfColor::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Quantity_HArray1OfColor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Quantity_HArray1OfColor::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/Quantity_MolarMass.hxx
// ./opencascade/Quantity_Torque.hxx
// ./opencascade/Quantity_Array1OfColor.hxx
// ./opencascade/Quantity_Parameter.hxx
// ./opencascade/Quantity_Speed.hxx
// ./opencascade/Quantity_Volume.hxx
// ./opencascade/Quantity_Frequency.hxx
// ./opencascade/Quantity_Temperature.hxx
// ./opencascade/Quantity_Consumption.hxx
// ./opencascade/Quantity_Color.hxx
// ./opencascade/Quantity_Power.hxx
// ./opencascade/Quantity_LuminousExposition.hxx
// ./opencascade/Quantity_LuminousEfficacity.hxx
// ./opencascade/Quantity_MassFlow.hxx
// ./opencascade/Quantity_Pressure.hxx
// ./opencascade/Quantity_MagneticFluxDensity.hxx
// ./opencascade/Quantity_Inductance.hxx
// ./opencascade/Quantity_Momentum.hxx
// ./opencascade/Quantity_Array2OfColor.hxx
// ./opencascade/Quantity_Quotient.hxx
// ./opencascade/Quantity_Illuminance.hxx
// ./opencascade/Quantity_LuminousIntensity.hxx
// ./opencascade/Quantity_MolarVolume.hxx
// ./opencascade/Quantity_Capacitance.hxx
// ./opencascade/Quantity_Entropy.hxx
// ./opencascade/Quantity_Energy.hxx
// ./opencascade/Quantity_Weight.hxx
// ./opencascade/Quantity_Enthalpy.hxx
// ./opencascade/Quantity_Area.hxx
// ./opencascade/Quantity_Index.hxx
// ./opencascade/Quantity_Work.hxx
// ./opencascade/Quantity_LuminousFlux.hxx
// ./opencascade/Quantity_Coefficient.hxx
// ./opencascade/Quantity_MagneticFlux.hxx
// ./opencascade/Quantity_Scalaire.hxx
// ./opencascade/Quantity_SurfaceTension.hxx
// ./opencascade/Quantity_CoefficientOfExpansion.hxx
// ./opencascade/Quantity_Activity.hxx
// ./opencascade/Quantity_ElectricCapacitance.hxx
// ./opencascade/Quantity_SolidAngle.hxx
// ./opencascade/Quantity_Mass.hxx
// ./opencascade/Quantity_AcousticIntensity.hxx
// ./opencascade/Quantity_Normality.hxx
// ./opencascade/Quantity_SpecificHeatCapacity.hxx
// ./opencascade/Quantity_Rate.hxx
// ./opencascade/Quantity_Constant.hxx
// ./opencascade/Quantity_SoundIntensity.hxx
// ./opencascade/Quantity_PlaneAngle.hxx
// ./opencascade/Quantity_PeriodDefinitionError.hxx
// ./opencascade/Quantity_Period.hxx
// ./opencascade/Quantity_ElectricPotential.hxx
// ./opencascade/Quantity_MagneticFieldStrength.hxx
// ./opencascade/Quantity_Length.hxx
// ./opencascade/Quantity_Viscosity.hxx
// ./opencascade/Quantity_ColorDefinitionError.hxx
// ./opencascade/Quantity_Reluctance.hxx
// ./opencascade/Quantity_ElectricCurrent.hxx
// ./opencascade/Quantity_AbsorbedDose.hxx
// ./opencascade/Quantity_ColorRGBAHasher.hxx
// ./opencascade/Quantity_Admittance.hxx
// ./opencascade/Quantity_Density.hxx
// ./opencascade/Quantity_ElectricCharge.hxx
// ./opencascade/Quantity_ThermalConductivity.hxx
// ./opencascade/Quantity_AngularVelocity.hxx
// ./opencascade/Quantity_ElectricFieldStrength.hxx
// ./opencascade/Quantity_Date.hxx
// ./opencascade/Quantity_ColorRGBA.hxx
// ./opencascade/Quantity_Impedance.hxx
// ./opencascade/Quantity_VolumeFlow.hxx
// ./opencascade/Quantity_MolarConcentration.hxx
// ./opencascade/Quantity_TypeOfColor.hxx
// ./opencascade/Quantity_KinematicViscosity.hxx
// ./opencascade/Quantity_AmountOfSubstance.hxx
// ./opencascade/Quantity_Velocity.hxx
// ./opencascade/Quantity_Conductivity.hxx
// ./opencascade/Quantity_MomentOfInertia.hxx
// ./opencascade/Quantity_Concentration.hxx
// ./opencascade/Quantity_Factor.hxx
// ./opencascade/Quantity_NameOfColor.hxx
// ./opencascade/Quantity_ColorHasher.hxx
// ./opencascade/Quantity_Resistance.hxx
// ./opencascade/Quantity_Acceleration.hxx
// ./opencascade/Quantity_Ratio.hxx
// ./opencascade/Quantity_Molarity.hxx
// ./opencascade/Quantity_DoseEquivalent.hxx
// ./opencascade/Quantity_Force.hxx
// ./opencascade/Quantity_PhysicalQuantity.hxx
// ./opencascade/Quantity_HArray1OfColor.hxx
// ./opencascade/Quantity_Content.hxx
// ./opencascade/Quantity_Resistivity.hxx
// ./opencascade/Quantity_Luminance.hxx
// ./opencascade/Quantity_MomentOfAForce.hxx
// ./opencascade/Quantity_KineticMoment.hxx
// ./opencascade/Quantity_DateDefinitionError.hxx

// operators

// register typdefs
// ./opencascade/Quantity_MolarMass.hxx
// ./opencascade/Quantity_Torque.hxx
// ./opencascade/Quantity_Array1OfColor.hxx
    register_template_NCollection_Array1<Quantity_Color>(m,"Quantity_Array1OfColor");  
// ./opencascade/Quantity_Parameter.hxx
// ./opencascade/Quantity_Speed.hxx
// ./opencascade/Quantity_Volume.hxx
// ./opencascade/Quantity_Frequency.hxx
// ./opencascade/Quantity_Temperature.hxx
// ./opencascade/Quantity_Consumption.hxx
// ./opencascade/Quantity_Color.hxx
// ./opencascade/Quantity_Power.hxx
// ./opencascade/Quantity_LuminousExposition.hxx
// ./opencascade/Quantity_LuminousEfficacity.hxx
// ./opencascade/Quantity_MassFlow.hxx
// ./opencascade/Quantity_Pressure.hxx
// ./opencascade/Quantity_MagneticFluxDensity.hxx
// ./opencascade/Quantity_Inductance.hxx
// ./opencascade/Quantity_Momentum.hxx
// ./opencascade/Quantity_Array2OfColor.hxx
    register_template_NCollection_Array2<Quantity_Color>(m,"Quantity_Array2OfColor");  
// ./opencascade/Quantity_Quotient.hxx
// ./opencascade/Quantity_Illuminance.hxx
// ./opencascade/Quantity_LuminousIntensity.hxx
// ./opencascade/Quantity_MolarVolume.hxx
// ./opencascade/Quantity_Capacitance.hxx
// ./opencascade/Quantity_Entropy.hxx
// ./opencascade/Quantity_Energy.hxx
// ./opencascade/Quantity_Weight.hxx
// ./opencascade/Quantity_Enthalpy.hxx
// ./opencascade/Quantity_Area.hxx
// ./opencascade/Quantity_Index.hxx
// ./opencascade/Quantity_Work.hxx
// ./opencascade/Quantity_LuminousFlux.hxx
// ./opencascade/Quantity_Coefficient.hxx
// ./opencascade/Quantity_MagneticFlux.hxx
// ./opencascade/Quantity_Scalaire.hxx
// ./opencascade/Quantity_SurfaceTension.hxx
// ./opencascade/Quantity_CoefficientOfExpansion.hxx
// ./opencascade/Quantity_Activity.hxx
// ./opencascade/Quantity_ElectricCapacitance.hxx
// ./opencascade/Quantity_SolidAngle.hxx
// ./opencascade/Quantity_Mass.hxx
// ./opencascade/Quantity_AcousticIntensity.hxx
// ./opencascade/Quantity_Normality.hxx
// ./opencascade/Quantity_SpecificHeatCapacity.hxx
// ./opencascade/Quantity_Rate.hxx
// ./opencascade/Quantity_Constant.hxx
// ./opencascade/Quantity_SoundIntensity.hxx
// ./opencascade/Quantity_PlaneAngle.hxx
// ./opencascade/Quantity_PeriodDefinitionError.hxx
// ./opencascade/Quantity_Period.hxx
// ./opencascade/Quantity_ElectricPotential.hxx
// ./opencascade/Quantity_MagneticFieldStrength.hxx
// ./opencascade/Quantity_Length.hxx
// ./opencascade/Quantity_Viscosity.hxx
// ./opencascade/Quantity_ColorDefinitionError.hxx
// ./opencascade/Quantity_Reluctance.hxx
// ./opencascade/Quantity_ElectricCurrent.hxx
// ./opencascade/Quantity_AbsorbedDose.hxx
// ./opencascade/Quantity_ColorRGBAHasher.hxx
// ./opencascade/Quantity_Admittance.hxx
// ./opencascade/Quantity_Density.hxx
// ./opencascade/Quantity_ElectricCharge.hxx
// ./opencascade/Quantity_ThermalConductivity.hxx
// ./opencascade/Quantity_AngularVelocity.hxx
// ./opencascade/Quantity_ElectricFieldStrength.hxx
// ./opencascade/Quantity_Date.hxx
// ./opencascade/Quantity_ColorRGBA.hxx
// ./opencascade/Quantity_Impedance.hxx
// ./opencascade/Quantity_VolumeFlow.hxx
// ./opencascade/Quantity_MolarConcentration.hxx
// ./opencascade/Quantity_TypeOfColor.hxx
// ./opencascade/Quantity_KinematicViscosity.hxx
// ./opencascade/Quantity_AmountOfSubstance.hxx
// ./opencascade/Quantity_Velocity.hxx
// ./opencascade/Quantity_Conductivity.hxx
// ./opencascade/Quantity_MomentOfInertia.hxx
// ./opencascade/Quantity_Concentration.hxx
// ./opencascade/Quantity_Factor.hxx
// ./opencascade/Quantity_NameOfColor.hxx
// ./opencascade/Quantity_ColorHasher.hxx
// ./opencascade/Quantity_Resistance.hxx
// ./opencascade/Quantity_Acceleration.hxx
// ./opencascade/Quantity_Ratio.hxx
// ./opencascade/Quantity_Molarity.hxx
// ./opencascade/Quantity_DoseEquivalent.hxx
// ./opencascade/Quantity_Force.hxx
// ./opencascade/Quantity_PhysicalQuantity.hxx
// ./opencascade/Quantity_HArray1OfColor.hxx
// ./opencascade/Quantity_Content.hxx
// ./opencascade/Quantity_Resistivity.hxx
// ./opencascade/Quantity_Luminance.hxx
// ./opencascade/Quantity_MomentOfAForce.hxx
// ./opencascade/Quantity_KineticMoment.hxx
// ./opencascade/Quantity_DateDefinitionError.hxx


// exceptions
register_occ_exception<Quantity_PeriodDefinitionError>(m, "Quantity_PeriodDefinitionError");
register_occ_exception<Quantity_ColorDefinitionError>(m, "Quantity_ColorDefinitionError");
register_occ_exception<Quantity_DateDefinitionError>(m, "Quantity_DateDefinitionError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
