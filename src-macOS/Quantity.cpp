
// std lib related includes
#include <tuple>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/Quantity_Array2OfColor.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Quantity(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Quantity"));


//Python trampoline classes

// classes


    static_cast<py::class_<Quantity_Color , shared_ptr<Quantity_Color> >>(m.attr("Quantity_Color"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ColorFromName_s",
                    (Standard_Boolean (*)( const Standard_CString , Quantity_Color & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , Quantity_Color & ) >(&Quantity_Color::ColorFromName),
                    R"#(Finds color from predefined names. For example, the name of the color which corresponds to "BLACK" is Quantity_NOC_BLACK. Returns false if name is unknown.)#"  , py::arg("theColorNameString"),  py::arg("theColor"))
        .def_static("ColorToHex_s",
                    (TCollection_AsciiString (*)( const Quantity_Color & , const bool ) ) static_cast<TCollection_AsciiString (*)( const Quantity_Color & , const bool ) >(&Quantity_Color::ColorToHex),
                    R"#(Returns hex sRGB string in format "#FFAAFF".)#"  , py::arg("theColor"),  py::arg("theToPrefixHash")=static_cast<const bool>(true))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Quantity_ColorHasher , shared_ptr<Quantity_ColorHasher>>(m,"Quantity_ColorHasher");

    static_cast<py::class_<Quantity_ColorHasher , shared_ptr<Quantity_ColorHasher> >>(m.attr("Quantity_ColorHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const Quantity_Color & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const Quantity_Color & , const Standard_Integer ) >(&Quantity_ColorHasher::HashCode),
                    R"#(Returns hash code for the given RGB color, in the range [1, theUpperBound])#"  , py::arg("theColor"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const Quantity_Color & , const Quantity_Color & ) ) static_cast<Standard_Boolean (*)( const Quantity_Color & , const Quantity_Color & ) >(&Quantity_ColorHasher::IsEqual),
                    R"#(Returns true if two colors are equal.)#"  , py::arg("theColor1"),  py::arg("theColor2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Quantity_ColorRGBA , shared_ptr<Quantity_ColorRGBA> >>(m.attr("Quantity_ColorRGBA"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Quantity_Color & >()  , py::arg("theRgb") )
        .def(py::init< const Quantity_Color &,float >()  , py::arg("theRgb"),  py::arg("theAlpha") )
        .def(py::init< const NCollection_Vec4<float> & >()  , py::arg("theRgba") )
        .def(py::init< float,float,float,float >()  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha") )
    // custom constructors
    // methods
        .def("SetValues",
             (void (Quantity_ColorRGBA::*)( float , float , float , float ) ) static_cast<void (Quantity_ColorRGBA::*)( float , float , float , float ) >(&Quantity_ColorRGBA::SetValues),
             R"#(Assign new values to the color.)#"  , py::arg("theRed"),  py::arg("theGreen"),  py::arg("theBlue"),  py::arg("theAlpha"))
        .def("GetRGB",
             (const Quantity_Color & (Quantity_ColorRGBA::*)() const) static_cast<const Quantity_Color & (Quantity_ColorRGBA::*)() const>(&Quantity_ColorRGBA::GetRGB),
             R"#(Return RGB color value.)#" )
        .def("ChangeRGB",
             (Quantity_Color & (Quantity_ColorRGBA::*)() ) static_cast<Quantity_Color & (Quantity_ColorRGBA::*)() >(&Quantity_ColorRGBA::ChangeRGB),
             R"#(Modify RGB color components without affecting alpha value.)#" )
        .def("SetRGB",
             (void (Quantity_ColorRGBA::*)( const Quantity_Color & ) ) static_cast<void (Quantity_ColorRGBA::*)( const Quantity_Color & ) >(&Quantity_ColorRGBA::SetRGB),
             R"#(Assign RGB color components without affecting alpha value.)#"  , py::arg("theRgb"))
        .def("Alpha",
             (Standard_ShortReal (Quantity_ColorRGBA::*)() const) static_cast<Standard_ShortReal (Quantity_ColorRGBA::*)() const>(&Quantity_ColorRGBA::Alpha),
             R"#(Return alpha value (1.0 means opaque, 0.0 means fully transparent).)#" )
        .def("SetAlpha",
             (void (Quantity_ColorRGBA::*)( const Standard_ShortReal ) ) static_cast<void (Quantity_ColorRGBA::*)( const Standard_ShortReal ) >(&Quantity_ColorRGBA::SetAlpha),
             R"#(Assign the alpha value.)#"  , py::arg("theAlpha"))
        .def("IsDifferent",
             (bool (Quantity_ColorRGBA::*)( const Quantity_ColorRGBA & ) const) static_cast<bool (Quantity_ColorRGBA::*)( const Quantity_ColorRGBA & ) const>(&Quantity_ColorRGBA::IsDifferent),
             R"#(Returns true if the distance between colors is greater than Epsilon().)#"  , py::arg("theOther"))
        .def("IsEqual",
             (bool (Quantity_ColorRGBA::*)( const Quantity_ColorRGBA & ) const) static_cast<bool (Quantity_ColorRGBA::*)( const Quantity_ColorRGBA & ) const>(&Quantity_ColorRGBA::IsEqual),
             R"#(Two colors are considered to be equal if their distance is no greater than Epsilon().)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ColorFromName_s",
                    (Standard_Boolean (*)( const Standard_CString , Quantity_ColorRGBA & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , Quantity_ColorRGBA & ) >(&Quantity_ColorRGBA::ColorFromName),
                    R"#(Finds color from predefined names. For example, the name of the color which corresponds to "BLACK" is Quantity_NOC_BLACK. Returns false if name is unknown. An alpha component is set to 1.0.)#"  , py::arg("theColorNameString"),  py::arg("theColor"))
        .def_static("ColorToHex_s",
                    (TCollection_AsciiString (*)( const Quantity_ColorRGBA & , const bool ) ) static_cast<TCollection_AsciiString (*)( const Quantity_ColorRGBA & , const bool ) >(&Quantity_ColorRGBA::ColorToHex),
                    R"#(Returns hex sRGBA string in format "#RRGGBBAA".)#"  , py::arg("theColor"),  py::arg("theToPrefixHash")=static_cast<const bool>(true))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Quantity_ColorRGBAHasher , shared_ptr<Quantity_ColorRGBAHasher>>(m,"Quantity_ColorRGBAHasher");

    static_cast<py::class_<Quantity_ColorRGBAHasher , shared_ptr<Quantity_ColorRGBAHasher> >>(m.attr("Quantity_ColorRGBAHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const Quantity_ColorRGBA & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const Quantity_ColorRGBA & , const Standard_Integer ) >(&Quantity_ColorRGBAHasher::HashCode),
                    R"#(Returns hash code for the given RGBA color, in the range [1, theUpperBound])#"  , py::arg("theColor"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const Quantity_ColorRGBA & , const Quantity_ColorRGBA & ) ) static_cast<Standard_Boolean (*)( const Quantity_ColorRGBA & , const Quantity_ColorRGBA & ) >(&Quantity_ColorRGBAHasher::IsEqual),
                    R"#(Returns true if two colors are equal.)#"  , py::arg("theColor1"),  py::arg("theColor2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Quantity_Date , shared_ptr<Quantity_Date> >>(m.attr("Quantity_Date"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsLeap_s",
                    (Standard_Boolean (*)( const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_Integer ) >(&Quantity_Date::IsLeap),
                    R"#(Returns true if a year is a leap year. The leap years are divisable by 4 and not by 100 except the years divisable by 400.)#"  , py::arg("yy"))
    // static methods using call by reference i.s.o. return
    // operators
        .def("__sub__",
             (Quantity_Date (Quantity_Date::*)( const Quantity_Period & ) ) static_cast<Quantity_Date (Quantity_Date::*)( const Quantity_Period & ) >(&Quantity_Date::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("aPeriod"))
        .def("__add__",
             (Quantity_Date (Quantity_Date::*)( const Quantity_Period & ) ) static_cast<Quantity_Date (Quantity_Date::*)( const Quantity_Period & ) >(&Quantity_Date::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("aPeriod"))
    // additional methods and static methods
;


    static_cast<py::class_<Quantity_HArray1OfColor ,opencascade::handle<Quantity_HArray1OfColor> , Quantity_Array1OfColor, Standard_Transient>>(m.attr("Quantity_HArray1OfColor"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Quantity_Color & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Quantity_Color> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() const) static_cast<const Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() const>(&Quantity_HArray1OfColor::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() ) static_cast<Quantity_Array1OfColor & (Quantity_HArray1OfColor::*)() >(&Quantity_HArray1OfColor::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Quantity_HArray1OfColor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Quantity_HArray1OfColor::*)() const>(&Quantity_HArray1OfColor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Quantity_HArray1OfColor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Quantity_HArray1OfColor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Quantity_Period , shared_ptr<Quantity_Period> >>(m.attr("Quantity_Period"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__sub__",
             (Quantity_Period (Quantity_Period::*)( const Quantity_Period & ) const) static_cast<Quantity_Period (Quantity_Period::*)( const Quantity_Period & ) const>(&Quantity_Period::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("anOther"))
        .def("__add__",
             (Quantity_Period (Quantity_Period::*)( const Quantity_Period & ) const) static_cast<Quantity_Period (Quantity_Period::*)( const Quantity_Period & ) const>(&Quantity_Period::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("anOther"))
    // additional methods and static methods
;

// functions
// ./opencascade/Quantity_ColorRGBAHasher.hxx
// ./opencascade/Quantity_MomentOfAForce.hxx
// ./opencascade/Quantity_Power.hxx
// ./opencascade/Quantity_Color.hxx
// ./opencascade/Quantity_SpecificHeatCapacity.hxx
// ./opencascade/Quantity_MomentOfInertia.hxx
// ./opencascade/Quantity_Resistivity.hxx
// ./opencascade/Quantity_Force.hxx
// ./opencascade/Quantity_Normality.hxx
// ./opencascade/Quantity_ColorRGBA.hxx
// ./opencascade/Quantity_Speed.hxx
// ./opencascade/Quantity_MolarMass.hxx
// ./opencascade/Quantity_PlaneAngle.hxx
// ./opencascade/Quantity_Momentum.hxx
// ./opencascade/Quantity_Velocity.hxx
// ./opencascade/Quantity_HArray1OfColor.hxx
// ./opencascade/Quantity_Torque.hxx
// ./opencascade/Quantity_Index.hxx
// ./opencascade/Quantity_Admittance.hxx
// ./opencascade/Quantity_Activity.hxx
// ./opencascade/Quantity_Pressure.hxx
// ./opencascade/Quantity_Acceleration.hxx
// ./opencascade/Quantity_KinematicViscosity.hxx
// ./opencascade/Quantity_DateDefinitionError.hxx
// ./opencascade/Quantity_Period.hxx
// ./opencascade/Quantity_Energy.hxx
// ./opencascade/Quantity_ElectricCapacitance.hxx
// ./opencascade/Quantity_ElectricPotential.hxx
// ./opencascade/Quantity_Viscosity.hxx
// ./opencascade/Quantity_DoseEquivalent.hxx
// ./opencascade/Quantity_Area.hxx
// ./opencascade/Quantity_Capacitance.hxx
// ./opencascade/Quantity_LuminousEfficacity.hxx
// ./opencascade/Quantity_Array1OfColor.hxx
// ./opencascade/Quantity_Content.hxx
// ./opencascade/Quantity_ThermalConductivity.hxx
// ./opencascade/Quantity_AngularVelocity.hxx
// ./opencascade/Quantity_Quotient.hxx
// ./opencascade/Quantity_Illuminance.hxx
// ./opencascade/Quantity_SolidAngle.hxx
// ./opencascade/Quantity_PeriodDefinitionError.hxx
// ./opencascade/Quantity_Enthalpy.hxx
// ./opencascade/Quantity_MolarConcentration.hxx
// ./opencascade/Quantity_Concentration.hxx
// ./opencascade/Quantity_TypeOfColor.hxx
// ./opencascade/Quantity_Resistance.hxx
// ./opencascade/Quantity_ElectricFieldStrength.hxx
// ./opencascade/Quantity_LuminousIntensity.hxx
// ./opencascade/Quantity_Weight.hxx
// ./opencascade/Quantity_Reluctance.hxx
// ./opencascade/Quantity_Array2OfColor.hxx
// ./opencascade/Quantity_Inductance.hxx
// ./opencascade/Quantity_Luminance.hxx
// ./opencascade/Quantity_MagneticFlux.hxx
// ./opencascade/Quantity_ElectricCharge.hxx
// ./opencascade/Quantity_Factor.hxx
// ./opencascade/Quantity_ElectricCurrent.hxx
// ./opencascade/Quantity_ColorHasher.hxx
// ./opencascade/Quantity_LuminousExposition.hxx
// ./opencascade/Quantity_Date.hxx
// ./opencascade/Quantity_Rate.hxx
// ./opencascade/Quantity_Mass.hxx
// ./opencascade/Quantity_Ratio.hxx
// ./opencascade/Quantity_Scalaire.hxx
// ./opencascade/Quantity_AcousticIntensity.hxx
// ./opencascade/Quantity_VolumeFlow.hxx
// ./opencascade/Quantity_SurfaceTension.hxx
// ./opencascade/Quantity_MagneticFluxDensity.hxx
// ./opencascade/Quantity_NameOfColor.hxx
// ./opencascade/Quantity_ColorDefinitionError.hxx
// ./opencascade/Quantity_AbsorbedDose.hxx
// ./opencascade/Quantity_CoefficientOfExpansion.hxx
// ./opencascade/Quantity_Frequency.hxx
// ./opencascade/Quantity_MagneticFieldStrength.hxx
// ./opencascade/Quantity_PhysicalQuantity.hxx
// ./opencascade/Quantity_MassFlow.hxx
// ./opencascade/Quantity_Entropy.hxx
// ./opencascade/Quantity_Conductivity.hxx
// ./opencascade/Quantity_LuminousFlux.hxx
// ./opencascade/Quantity_Constant.hxx
// ./opencascade/Quantity_Work.hxx
// ./opencascade/Quantity_Volume.hxx
// ./opencascade/Quantity_Coefficient.hxx
// ./opencascade/Quantity_KineticMoment.hxx
// ./opencascade/Quantity_Consumption.hxx
// ./opencascade/Quantity_Length.hxx
// ./opencascade/Quantity_Molarity.hxx
// ./opencascade/Quantity_Density.hxx
// ./opencascade/Quantity_Parameter.hxx
// ./opencascade/Quantity_Impedance.hxx
// ./opencascade/Quantity_MolarVolume.hxx
// ./opencascade/Quantity_Temperature.hxx
// ./opencascade/Quantity_SoundIntensity.hxx
// ./opencascade/Quantity_AmountOfSubstance.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<Quantity_Color>(m,"Quantity_Array1OfColor");
    register_template_NCollection_Array2<Quantity_Color>(m,"Quantity_Array2OfColor");


// exceptions
register_occ_exception<Quantity_ColorDefinitionError>(m, "Quantity_ColorDefinitionError");
register_occ_exception<Quantity_DateDefinitionError>(m, "Quantity_DateDefinitionError");
register_occ_exception<Quantity_PeriodDefinitionError>(m, "Quantity_PeriodDefinitionError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
