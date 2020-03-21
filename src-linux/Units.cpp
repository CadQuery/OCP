
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Units_NoSuchUnit.hxx>
#include <Units_NoSuchType.hxx>
#include <Units_UnitsDictionary.hxx>
#include <Units_Quantity.hxx>
#include <Units_Lexicon.hxx>
#include <Units_Dimensions.hxx>
#include <Units_Dimensions.hxx>
#include <Units_Unit.hxx>
#include <Units_ShiftedUnit.hxx>
#include <Units_Token.hxx>
#include <Units_ShiftedToken.hxx>
#include <Units_Quantity.hxx>
#include <Units_UnitsDictionary.hxx>
#include <Units_UnitsSystem.hxx>
#include <Units_Explorer.hxx>
#include <Units_Sentence.hxx>
#include <Units_MathSentence.hxx>
#include <Units_UnitSentence.hxx>
#include <Units_Lexicon.hxx>
#include <Units_UnitsLexicon.hxx>
#include <Units_Measurement.hxx>
#include <Units_UnitsSystem.hxx>
#include <Units_UnitsDictionary.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Units_Lexicon.hxx>
#include <Units_Token.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Units_Quantity.hxx>
#include <Units_Token.hxx>
#include <Units_Quantity.hxx>
#include <Units_Token.hxx>

// module includes
#include <Units.hxx>
#include <Units_Dimensions.hxx>
#include <Units_Explorer.hxx>
#include <Units_Lexicon.hxx>
#include <Units_MathSentence.hxx>
#include <Units_Measurement.hxx>
#include <Units_NoSuchType.hxx>
#include <Units_NoSuchUnit.hxx>
#include <Units_Operators.hxx>
#include <Units_QtsSequence.hxx>
#include <Units_QuantitiesSequence.hxx>
#include <Units_Quantity.hxx>
#include <Units_Sentence.hxx>
#include <Units_ShiftedToken.hxx>
#include <Units_ShiftedUnit.hxx>
#include <Units_TksSequence.hxx>
#include <Units_Token.hxx>
#include <Units_TokensSequence.hxx>
#include <Units_Unit.hxx>
#include <Units_UnitsDictionary.hxx>
#include <Units_UnitSentence.hxx>
#include <Units_UnitsLexicon.hxx>
#include <Units_UnitsSequence.hxx>
#include <Units_UnitsSystem.hxx>
#include <Units_UtsSequence.hxx>

// template related includes
// ./opencascade/Units_QtsSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Units_UtsSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Units_TksSequence.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Units(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Units"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Units , shared_ptr<Units>>(m,"Units");

    static_cast<py::class_<Units , shared_ptr<Units> >>(m.attr("Units"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("UnitsFile_s",
                    (void (*)( const Standard_CString ) ) static_cast<void (*)( const Standard_CString ) >(&Units::UnitsFile),
                    R"#(Defines the location of the file containing all the information useful in creating the dictionary of all the units known to the system.)#"  , py::arg("afile"))
        .def_static("LexiconFile_s",
                    (void (*)( const Standard_CString ) ) static_cast<void (*)( const Standard_CString ) >(&Units::LexiconFile),
                    R"#(Defines the location of the file containing the lexicon useful in manipulating composite units.)#"  , py::arg("afile"))
        .def_static("DictionaryOfUnits_s",
                    (opencascade::handle<Units_UnitsDictionary> (*)( const Standard_Boolean ) ) static_cast<opencascade::handle<Units_UnitsDictionary> (*)( const Standard_Boolean ) >(&Units::DictionaryOfUnits),
                    R"#(Returns a unique instance of the dictionary of units. If <amode> is True, then it forces the recomputation of the dictionary of units.)#"  , py::arg("amode")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Quantity_s",
                    (opencascade::handle<Units_Quantity> (*)( const Standard_CString ) ) static_cast<opencascade::handle<Units_Quantity> (*)( const Standard_CString ) >(&Units::Quantity),
                    R"#(Returns a unique quantity instance corresponding to <aquantity>.)#"  , py::arg("aquantity"))
        .def_static("FirstQuantity_s",
                    (Standard_CString (*)( const Standard_CString ) ) static_cast<Standard_CString (*)( const Standard_CString ) >(&Units::FirstQuantity),
                    R"#(Returns the first quantity string founded from the unit <aUnit>.)#"  , py::arg("aunit"))
        .def_static("LexiconUnits_s",
                    (opencascade::handle<Units_Lexicon> (*)( const Standard_Boolean ) ) static_cast<opencascade::handle<Units_Lexicon> (*)( const Standard_Boolean ) >(&Units::LexiconUnits),
                    R"#(Returns a unique instance of the Units_Lexicon. If <amode> is True, it forces the recomputation of the dictionary of units, and by consequence the completion of the Units_Lexicon.)#"  , py::arg("amode")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("LexiconFormula_s",
                    (opencascade::handle<Units_Lexicon> (*)() ) static_cast<opencascade::handle<Units_Lexicon> (*)() >(&Units::LexiconFormula),
                    R"#(Return a unique instance of LexiconFormula.)#" )
        .def_static("NullDimensions_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units::NullDimensions),
                    R"#(Returns always the same instance of Dimensions.)#" )
        .def_static("Convert_s",
                    (Standard_Real (*)( const Standard_Real , const Standard_CString , const Standard_CString ) ) static_cast<Standard_Real (*)( const Standard_Real , const Standard_CString , const Standard_CString ) >(&Units::Convert),
                    R"#(Converts <avalue> expressed in <afirstunit> into the <asecondunit>.)#"  , py::arg("avalue"),  py::arg("afirstunit"),  py::arg("asecondunit"))
        .def_static("ToSI_s",
                    (Standard_Real (*)( const Standard_Real , const Standard_CString ) ) static_cast<Standard_Real (*)( const Standard_Real , const Standard_CString ) >(&Units::ToSI),
                    R"#(None)#"  , py::arg("aData"),  py::arg("aUnit"))
        .def_static("ToSI_s",
                    (Standard_Real (*)( const Standard_Real , const Standard_CString , opencascade::handle<Units_Dimensions> & ) ) static_cast<Standard_Real (*)( const Standard_Real , const Standard_CString , opencascade::handle<Units_Dimensions> & ) >(&Units::ToSI),
                    R"#(None)#"  , py::arg("aData"),  py::arg("aUnit"),  py::arg("aDim"))
        .def_static("FromSI_s",
                    (Standard_Real (*)( const Standard_Real , const Standard_CString ) ) static_cast<Standard_Real (*)( const Standard_Real , const Standard_CString ) >(&Units::FromSI),
                    R"#(None)#"  , py::arg("aData"),  py::arg("aUnit"))
        .def_static("FromSI_s",
                    (Standard_Real (*)( const Standard_Real , const Standard_CString , opencascade::handle<Units_Dimensions> & ) ) static_cast<Standard_Real (*)( const Standard_Real , const Standard_CString , opencascade::handle<Units_Dimensions> & ) >(&Units::FromSI),
                    R"#(None)#"  , py::arg("aData"),  py::arg("aUnit"),  py::arg("aDim"))
        .def_static("Dimensions_s",
                    (opencascade::handle<Units_Dimensions> (*)( const Standard_CString ) ) static_cast<opencascade::handle<Units_Dimensions> (*)( const Standard_CString ) >(&Units::Dimensions),
                    R"#(return the dimension associated to the Type)#"  , py::arg("aType"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Dimensions ,opencascade::handle<Units_Dimensions> , Standard_Transient>>(m.attr("Units_Dimensions"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("amass"),  py::arg("alength"),  py::arg("atime"),  py::arg("anelectriccurrent"),  py::arg("athermodynamictemperature"),  py::arg("anamountofsubstance"),  py::arg("aluminousintensity"),  py::arg("aplaneangle"),  py::arg("asolidangle") )
    // custom constructors
    // methods
        .def("Mass",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::Mass),
             R"#(Returns the power of mass stored in the dimensions.)#" )
        .def("Length",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::Length),
             R"#(Returns the power of length stored in the dimensions.)#" )
        .def("Time",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::Time),
             R"#(Returns the power of time stored in the dimensions.)#" )
        .def("ElectricCurrent",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::ElectricCurrent),
             R"#(Returns the power of electrical intensity (current) stored in the dimensions.)#" )
        .def("ThermodynamicTemperature",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::ThermodynamicTemperature),
             R"#(Returns the power of temperature stored in the dimensions.)#" )
        .def("AmountOfSubstance",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::AmountOfSubstance),
             R"#(Returns the power of quantity of material (mole) stored in the dimensions.)#" )
        .def("LuminousIntensity",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::LuminousIntensity),
             R"#(Returns the power of light intensity stored in the dimensions.)#" )
        .def("PlaneAngle",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::PlaneAngle),
             R"#(Returns the power of plane angle stored in the dimensions.)#" )
        .def("SolidAngle",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::SolidAngle),
             R"#(Returns the power of solid angle stored in the dimensions.)#" )
        .def("Quantity",
             (Standard_CString (Units_Dimensions::*)() const) static_cast<Standard_CString (Units_Dimensions::*)() const>(&Units_Dimensions::Quantity),
             R"#(Returns the quantity string of the dimension)#" )
        .def("Multiply",
             (opencascade::handle<Units_Dimensions> (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const) static_cast<opencascade::handle<Units_Dimensions> (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const>(&Units_Dimensions::Multiply),
             R"#(Creates and returns a new Dimensions object which is the result of the multiplication of <me> and <adimensions>.)#"  , py::arg("adimensions"))
        .def("Divide",
             (opencascade::handle<Units_Dimensions> (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const) static_cast<opencascade::handle<Units_Dimensions> (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const>(&Units_Dimensions::Divide),
             R"#(Creates and returns a new Dimensions object which is the result of the division of <me> by <adimensions>.)#"  , py::arg("adimensions"))
        .def("Power",
             (opencascade::handle<Units_Dimensions> (Units_Dimensions::*)( const Standard_Real ) const) static_cast<opencascade::handle<Units_Dimensions> (Units_Dimensions::*)( const Standard_Real ) const>(&Units_Dimensions::Power),
             R"#(Creates and returns a new Dimensions object which is the result of the power of <me> and <anexponent>.)#"  , py::arg("anexponent"))
        .def("IsEqual",
             (Standard_Boolean (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const) static_cast<Standard_Boolean (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const>(&Units_Dimensions::IsEqual),
             R"#(Returns true if <me> and <adimensions> have the same dimensions, false otherwise.)#"  , py::arg("adimensions"))
        .def("IsNotEqual",
             (Standard_Boolean (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const) static_cast<Standard_Boolean (Units_Dimensions::*)( const opencascade::handle<Units_Dimensions> & ) const>(&Units_Dimensions::IsNotEqual),
             R"#(Returns false if <me> and <adimensions> have the same dimensions, true otherwise.)#"  , py::arg("adimensions"))
        .def("Dump",
             (void (Units_Dimensions::*)( const Standard_Integer ) const) static_cast<void (Units_Dimensions::*)( const Standard_Integer ) const>(&Units_Dimensions::Dump),
             R"#(Useful for degugging.)#"  , py::arg("ashift"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_Dimensions::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_Dimensions::*)() const>(&Units_Dimensions::DynamicType),
             R"#(None)#" )
        .def("Mass",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::Mass),
             R"#(Returns the power of mass stored in the dimensions.)#" )
        .def("Length",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::Length),
             R"#(Returns the power of length stored in the dimensions.)#" )
        .def("Time",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::Time),
             R"#(Returns the power of time stored in the dimensions.)#" )
        .def("ElectricCurrent",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::ElectricCurrent),
             R"#(Returns the power of electrical intensity (current) stored in the dimensions.)#" )
        .def("ThermodynamicTemperature",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::ThermodynamicTemperature),
             R"#(Returns the power of temperature stored in the dimensions.)#" )
        .def("AmountOfSubstance",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::AmountOfSubstance),
             R"#(Returns the power of quantity of material (mole) stored in the dimensions.)#" )
        .def("LuminousIntensity",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::LuminousIntensity),
             R"#(Returns the power of light intensity stored in the dimensions.)#" )
        .def("PlaneAngle",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::PlaneAngle),
             R"#(Returns the power of plane angle stored in the dimensions.)#" )
        .def("SolidAngle",
             (Standard_Real (Units_Dimensions::*)() const) static_cast<Standard_Real (Units_Dimensions::*)() const>(&Units_Dimensions::SolidAngle),
             R"#(Returns the power of solid angle stored in the dimensions.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ALess_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::ALess),
                    R"#(None)#" )
        .def_static("AMass_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::AMass),
                    R"#(None)#" )
        .def_static("ALength_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::ALength),
                    R"#(None)#" )
        .def_static("ATime_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::ATime),
                    R"#(None)#" )
        .def_static("AElectricCurrent_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::AElectricCurrent),
                    R"#(None)#" )
        .def_static("AThermodynamicTemperature_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::AThermodynamicTemperature),
                    R"#(None)#" )
        .def_static("AAmountOfSubstance_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::AAmountOfSubstance),
                    R"#(None)#" )
        .def_static("ALuminousIntensity_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::ALuminousIntensity),
                    R"#(None)#" )
        .def_static("APlaneAngle_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::APlaneAngle),
                    R"#(None)#" )
        .def_static("ASolidAngle_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&Units_Dimensions::ASolidAngle),
                    R"#(Returns the basic dimensions.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_Dimensions::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_Dimensions::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Explorer , shared_ptr<Units_Explorer> >>(m.attr("Units_Explorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Units_UnitsSystem> & >()  , py::arg("aunitssystem") )
        .def(py::init< const opencascade::handle<Units_UnitsDictionary> & >()  , py::arg("aunitsdictionary") )
        .def(py::init< const opencascade::handle<Units_UnitsSystem> &,const Standard_CString >()  , py::arg("aunitssystem"),  py::arg("aquantity") )
        .def(py::init< const opencascade::handle<Units_UnitsDictionary> &,const Standard_CString >()  , py::arg("aunitsdictionary"),  py::arg("aquantity") )
    // custom constructors
    // methods
        .def("Init",
             (void (Units_Explorer::*)( const opencascade::handle<Units_UnitsSystem> & ) ) static_cast<void (Units_Explorer::*)( const opencascade::handle<Units_UnitsSystem> & ) >(&Units_Explorer::Init),
             R"#(Initializes the instance of the class with the UnitsSystem <aunitssystem>.)#"  , py::arg("aunitssystem"))
        .def("Init",
             (void (Units_Explorer::*)( const opencascade::handle<Units_UnitsDictionary> & ) ) static_cast<void (Units_Explorer::*)( const opencascade::handle<Units_UnitsDictionary> & ) >(&Units_Explorer::Init),
             R"#(Initializes the instance of the class with the UnitsDictionary <aunitsdictionary>.)#"  , py::arg("aunitsdictionary"))
        .def("Init",
             (void (Units_Explorer::*)( const opencascade::handle<Units_UnitsSystem> & , const Standard_CString ) ) static_cast<void (Units_Explorer::*)( const opencascade::handle<Units_UnitsSystem> & , const Standard_CString ) >(&Units_Explorer::Init),
             R"#(Initializes the instance of the class with the UnitsSystem <aunitssystem> and positioned at the quantity <aquantity>.)#"  , py::arg("aunitssystem"),  py::arg("aquantity"))
        .def("Init",
             (void (Units_Explorer::*)( const opencascade::handle<Units_UnitsDictionary> & , const Standard_CString ) ) static_cast<void (Units_Explorer::*)( const opencascade::handle<Units_UnitsDictionary> & , const Standard_CString ) >(&Units_Explorer::Init),
             R"#(Initializes the instance of the class with the UnitsDictionary <aunitsdictionary> and positioned at the quantity <aquantity>.)#"  , py::arg("aunitsdictionary"),  py::arg("aquantity"))
        .def("MoreQuantity",
             (Standard_Boolean (Units_Explorer::*)() const) static_cast<Standard_Boolean (Units_Explorer::*)() const>(&Units_Explorer::MoreQuantity),
             R"#(Returns True if there is another Quantity to explore, False otherwise.)#" )
        .def("NextQuantity",
             (void (Units_Explorer::*)() ) static_cast<void (Units_Explorer::*)() >(&Units_Explorer::NextQuantity),
             R"#(Sets the next Quantity current.)#" )
        .def("Quantity",
             (TCollection_AsciiString (Units_Explorer::*)() const) static_cast<TCollection_AsciiString (Units_Explorer::*)() const>(&Units_Explorer::Quantity),
             R"#(Returns the name of the current Quantity.)#" )
        .def("MoreUnit",
             (Standard_Boolean (Units_Explorer::*)() const) static_cast<Standard_Boolean (Units_Explorer::*)() const>(&Units_Explorer::MoreUnit),
             R"#(Returns True if there is another Unit to explore, False otherwise.)#" )
        .def("NextUnit",
             (void (Units_Explorer::*)() ) static_cast<void (Units_Explorer::*)() >(&Units_Explorer::NextUnit),
             R"#(Sets the next Unit current.)#" )
        .def("Unit",
             (TCollection_AsciiString (Units_Explorer::*)() const) static_cast<TCollection_AsciiString (Units_Explorer::*)() const>(&Units_Explorer::Unit),
             R"#(Returns the name of the current unit.)#" )
        .def("IsActive",
             (Standard_Boolean (Units_Explorer::*)() const) static_cast<Standard_Boolean (Units_Explorer::*)() const>(&Units_Explorer::IsActive),
             R"#(If the units system to explore is a user system, returns True if the current unit is active, False otherwise.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Lexicon ,opencascade::handle<Units_Lexicon> , Standard_Transient>>(m.attr("Units_Lexicon"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Creates",
             (void (Units_Lexicon::*)() ) static_cast<void (Units_Lexicon::*)() >(&Units_Lexicon::Creates),
             R"#(Reads the file <afilename> to create a sequence of tokens stored in <thesequenceoftokens>.)#" )
        .def("Sequence",
             (opencascade::handle<Units_TokensSequence> (Units_Lexicon::*)() const) static_cast<opencascade::handle<Units_TokensSequence> (Units_Lexicon::*)() const>(&Units_Lexicon::Sequence),
             R"#(Returns the first item of the sequence of tokens.)#" )
        .def("AddToken",
             (void (Units_Lexicon::*)( const Standard_CString , const Standard_CString , const Standard_Real ) ) static_cast<void (Units_Lexicon::*)( const Standard_CString , const Standard_CString , const Standard_Real ) >(&Units_Lexicon::AddToken),
             R"#(Adds to the lexicon a new token with <aword>, <amean>, <avalue> as arguments. If there is already a token with the field <theword> equal to <aword>, the existing token is updated.)#"  , py::arg("aword"),  py::arg("amean"),  py::arg("avalue"))
        .def("Dump",
             (void (Units_Lexicon::*)() const) static_cast<void (Units_Lexicon::*)() const>(&Units_Lexicon::Dump),
             R"#(Useful for debugging.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_Lexicon::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_Lexicon::*)() const>(&Units_Lexicon::DynamicType),
             R"#(None)#" )
        .def("Sequence",
             (opencascade::handle<Units_TokensSequence> (Units_Lexicon::*)() const) static_cast<opencascade::handle<Units_TokensSequence> (Units_Lexicon::*)() const>(&Units_Lexicon::Sequence),
             R"#(Returns the first item of the sequence of tokens.)#" )
        .def("Dump",
             (void (Units_Lexicon::*)() const) static_cast<void (Units_Lexicon::*)() const>(&Units_Lexicon::Dump),
             R"#(Useful for debugging.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_Lexicon::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_Lexicon::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Measurement , shared_ptr<Units_Measurement> >>(m.attr("Units_Measurement"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const opencascade::handle<Units_Token> & >()  , py::arg("avalue"),  py::arg("atoken") )
        .def(py::init< const Standard_Real,const Standard_CString >()  , py::arg("avalue"),  py::arg("aunit") )
    // custom constructors
    // methods
        .def("Convert",
             (void (Units_Measurement::*)( const Standard_CString ) ) static_cast<void (Units_Measurement::*)( const Standard_CString ) >(&Units_Measurement::Convert),
             R"#(Converts (if possible) the measurement object into another unit. <aunit> must have the same dimensionality as the unit contained in the token <thetoken>.)#"  , py::arg("aunit"))
        .def("Integer",
             (Units_Measurement (Units_Measurement::*)() const) static_cast<Units_Measurement (Units_Measurement::*)() const>(&Units_Measurement::Integer),
             R"#(Returns a Measurement object with the integer value of the measurement contained in <me>.)#" )
        .def("Fractional",
             (Units_Measurement (Units_Measurement::*)() const) static_cast<Units_Measurement (Units_Measurement::*)() const>(&Units_Measurement::Fractional),
             R"#(Returns a Measurement object with the fractional value of the measurement contained in <me>.)#" )
        .def("Measurement",
             (Standard_Real (Units_Measurement::*)() const) static_cast<Standard_Real (Units_Measurement::*)() const>(&Units_Measurement::Measurement),
             R"#(Returns the value of the measurement.)#" )
        .def("Token",
             (opencascade::handle<Units_Token> (Units_Measurement::*)() const) static_cast<opencascade::handle<Units_Token> (Units_Measurement::*)() const>(&Units_Measurement::Token),
             R"#(Returns the token contained in <me>.)#" )
        .def("Add",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::Add),
             R"#(Returns (if it is possible) a measurement which is the addition of <me> and <ameasurement>. The chosen returned unit is the unit of <me>.)#"  , py::arg("ameasurement"))
        .def("Subtract",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::Subtract),
             R"#(Returns (if it is possible) a measurement which is the subtraction of <me> and <ameasurement>. The chosen returned unit is the unit of <me>.)#"  , py::arg("ameasurement"))
        .def("Multiply",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::Multiply),
             R"#(Returns a measurement which is the multiplication of <me> and <ameasurement>.)#"  , py::arg("ameasurement"))
        .def("Multiply",
             (Units_Measurement (Units_Measurement::*)( const Standard_Real ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Standard_Real ) const>(&Units_Measurement::Multiply),
             R"#(Returns a measurement which is the multiplication of <me> with the value <avalue>.)#"  , py::arg("avalue"))
        .def("Divide",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::Divide),
             R"#(Returns a measurement which is the division of <me> by <ameasurement>.)#"  , py::arg("ameasurement"))
        .def("Divide",
             (Units_Measurement (Units_Measurement::*)( const Standard_Real ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Standard_Real ) const>(&Units_Measurement::Divide),
             R"#(Returns a measurement which is the division of <me> by the constant <avalue>.)#"  , py::arg("avalue"))
        .def("Power",
             (Units_Measurement (Units_Measurement::*)( const Standard_Real ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Standard_Real ) const>(&Units_Measurement::Power),
             R"#(Returns a measurement which is <me> powered <anexponent>.)#"  , py::arg("anexponent"))
        .def("HasToken",
             (Standard_Boolean (Units_Measurement::*)() const) static_cast<Standard_Boolean (Units_Measurement::*)() const>(&Units_Measurement::HasToken),
             R"#(None)#" )
        .def("Dump",
             (void (Units_Measurement::*)() const) static_cast<void (Units_Measurement::*)() const>(&Units_Measurement::Dump),
             R"#(Useful for debugging.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__add__",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("ameasurement"))
        .def("__sub__",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("ameasurement"))
        .def("__mul__",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("ameasurement"))
        .def("__rmul__",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("ameasurement"))
        .def("__mul__",
             (Units_Measurement (Units_Measurement::*)( const Standard_Real ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Standard_Real ) const>(&Units_Measurement::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("avalue"))
        .def("__rmul__",
             (Units_Measurement (Units_Measurement::*)( const Standard_Real ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Standard_Real ) const>(&Units_Measurement::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("avalue"))
        .def("__truediv__",
             (Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Units_Measurement & ) const>(&Units_Measurement::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("ameasurement"))
        .def("__truediv__",
             (Units_Measurement (Units_Measurement::*)( const Standard_Real ) const) static_cast<Units_Measurement (Units_Measurement::*)( const Standard_Real ) const>(&Units_Measurement::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("avalue"))
    // additional methods and static methods
;


    static_cast<py::class_<Units_QuantitiesSequence ,opencascade::handle<Units_QuantitiesSequence> , Units_QtsSequence, Standard_Transient>>(m.attr("Units_QuantitiesSequence"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Units_Quantity> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Units_QtsSequence & (Units_QuantitiesSequence::*)() const) static_cast<const Units_QtsSequence & (Units_QuantitiesSequence::*)() const>(&Units_QuantitiesSequence::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Units_QuantitiesSequence::*)(  const opencascade::handle<Units_Quantity> & ) ) static_cast<void (Units_QuantitiesSequence::*)(  const opencascade::handle<Units_Quantity> & ) >(&Units_QuantitiesSequence::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Units_QuantitiesSequence::*)( NCollection_Sequence<opencascade::handle<Units_Quantity> > & ) ) static_cast<void (Units_QuantitiesSequence::*)( NCollection_Sequence<opencascade::handle<Units_Quantity> > & ) >(&Units_QuantitiesSequence::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Units_QtsSequence & (Units_QuantitiesSequence::*)() ) static_cast<Units_QtsSequence & (Units_QuantitiesSequence::*)() >(&Units_QuantitiesSequence::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_QuantitiesSequence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_QuantitiesSequence::*)() const>(&Units_QuantitiesSequence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_QuantitiesSequence::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_QuantitiesSequence::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Quantity ,opencascade::handle<Units_Quantity> , Standard_Transient>>(m.attr("Units_Quantity"))
    // constructors
        .def(py::init< const Standard_CString,const opencascade::handle<Units_Dimensions> &,const opencascade::handle<Units_UnitsSequence> & >()  , py::arg("aname"),  py::arg("adimensions"),  py::arg("aunitssequence") )
    // custom constructors
    // methods
        .def("Name",
             (TCollection_AsciiString (Units_Quantity::*)() const) static_cast<TCollection_AsciiString (Units_Quantity::*)() const>(&Units_Quantity::Name),
             R"#(Returns in a AsciiString from TCollection the name of the quantity.)#" )
        .def("Dimensions",
             (opencascade::handle<Units_Dimensions> (Units_Quantity::*)() const) static_cast<opencascade::handle<Units_Dimensions> (Units_Quantity::*)() const>(&Units_Quantity::Dimensions),
             R"#(Returns the physical dimensions of the quantity.)#" )
        .def("Sequence",
             (opencascade::handle<Units_UnitsSequence> (Units_Quantity::*)() const) static_cast<opencascade::handle<Units_UnitsSequence> (Units_Quantity::*)() const>(&Units_Quantity::Sequence),
             R"#(Returns <theunitssequence>, which is the sequence of all the units stored for this physical quantity.)#" )
        .def("IsEqual",
             (Standard_Boolean (Units_Quantity::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Quantity::*)( const Standard_CString ) const>(&Units_Quantity::IsEqual),
             R"#(Returns True if the name of the Quantity <me> is equal to <astring>, False otherwise.)#"  , py::arg("astring"))
        .def("Dump",
             (void (Units_Quantity::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Units_Quantity::*)( const Standard_Integer , const Standard_Integer ) const>(&Units_Quantity::Dump),
             R"#(Useful for debugging.)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_Quantity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_Quantity::*)() const>(&Units_Quantity::DynamicType),
             R"#(None)#" )
        .def("Name",
             (TCollection_AsciiString (Units_Quantity::*)() const) static_cast<TCollection_AsciiString (Units_Quantity::*)() const>(&Units_Quantity::Name),
             R"#(Returns in a AsciiString from TCollection the name of the quantity.)#" )
        .def("Dimensions",
             (opencascade::handle<Units_Dimensions> (Units_Quantity::*)() const) static_cast<opencascade::handle<Units_Dimensions> (Units_Quantity::*)() const>(&Units_Quantity::Dimensions),
             R"#(Returns the physical dimensions of the quantity.)#" )
        .def("Sequence",
             (opencascade::handle<Units_UnitsSequence> (Units_Quantity::*)() const) static_cast<opencascade::handle<Units_UnitsSequence> (Units_Quantity::*)() const>(&Units_Quantity::Sequence),
             R"#(Returns <theunitssequence>, which is the sequence of all the units stored for this physical quantity.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_Quantity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_Quantity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Sentence , shared_ptr<Units_Sentence> >>(m.attr("Units_Sentence"))
    // constructors
        .def(py::init< const opencascade::handle<Units_Lexicon> &,const Standard_CString >()  , py::arg("alexicon"),  py::arg("astring") )
    // custom constructors
    // methods
        .def("SetConstants",
             (void (Units_Sentence::*)() ) static_cast<void (Units_Sentence::*)() >(&Units_Sentence::SetConstants),
             R"#(For each constant encountered, sets the value.)#" )
        .def("Sequence",
             (opencascade::handle<Units_TokensSequence> (Units_Sentence::*)() const) static_cast<opencascade::handle<Units_TokensSequence> (Units_Sentence::*)() const>(&Units_Sentence::Sequence),
             R"#(Returns <thesequenceoftokens>.)#" )
        .def("Sequence",
             (void (Units_Sentence::*)( const opencascade::handle<Units_TokensSequence> & ) ) static_cast<void (Units_Sentence::*)( const opencascade::handle<Units_TokensSequence> & ) >(&Units_Sentence::Sequence),
             R"#(Sets the field <thesequenceoftokens> to <asequenceoftokens>.)#"  , py::arg("asequenceoftokens"))
        .def("Evaluate",
             (opencascade::handle<Units_Token> (Units_Sentence::*)() ) static_cast<opencascade::handle<Units_Token> (Units_Sentence::*)() >(&Units_Sentence::Evaluate),
             R"#(Computes and returns in a token the result of the expression.)#" )
        .def("IsDone",
             (Standard_Boolean (Units_Sentence::*)() const) static_cast<Standard_Boolean (Units_Sentence::*)() const>(&Units_Sentence::IsDone),
             R"#(Return True if number of created tokens > 0 (i.e creation of sentence is succesfull))#" )
        .def("Dump",
             (void (Units_Sentence::*)() const) static_cast<void (Units_Sentence::*)() const>(&Units_Sentence::Dump),
             R"#(Useful for debugging.)#" )
        .def("Sequence",
             (opencascade::handle<Units_TokensSequence> (Units_Sentence::*)() const) static_cast<opencascade::handle<Units_TokensSequence> (Units_Sentence::*)() const>(&Units_Sentence::Sequence),
             R"#(Returns <thesequenceoftokens>.)#" )
        .def("Sequence",
             (void (Units_Sentence::*)( const opencascade::handle<Units_TokensSequence> & ) ) static_cast<void (Units_Sentence::*)( const opencascade::handle<Units_TokensSequence> & ) >(&Units_Sentence::Sequence),
             R"#(Sets the field <thesequenceoftokens> to <asequenceoftokens>.)#"  , py::arg("asequenceoftokens"))
        .def("IsDone",
             (Standard_Boolean (Units_Sentence::*)() const) static_cast<Standard_Boolean (Units_Sentence::*)() const>(&Units_Sentence::IsDone),
             R"#(Return True if number of created tokens > 0 (i.e creation of sentence is succesfull))#" )
        .def("Dump",
             (void (Units_Sentence::*)() const) static_cast<void (Units_Sentence::*)() const>(&Units_Sentence::Dump),
             R"#(Useful for debugging.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Token ,opencascade::handle<Units_Token> , Standard_Transient>>(m.attr("Units_Token"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("aword") )
        .def(py::init< const opencascade::handle<Units_Token> & >()  , py::arg("atoken") )
        .def(py::init< const Standard_CString,const Standard_CString >()  , py::arg("aword"),  py::arg("amean") )
        .def(py::init< const Standard_CString,const Standard_CString,const Standard_Real >()  , py::arg("aword"),  py::arg("amean"),  py::arg("avalue") )
        .def(py::init< const Standard_CString,const Standard_CString,const Standard_Real,const opencascade::handle<Units_Dimensions> & >()  , py::arg("aword"),  py::arg("amean"),  py::arg("avalue"),  py::arg("adimension") )
    // custom constructors
    // methods
        .def("Creates",
             (opencascade::handle<Units_Token> (Units_Token::*)() const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)() const>(&Units_Token::Creates),
             R"#(Creates and returns a token, which is a ShiftedToken.)#" )
        .def("Length",
             (Standard_Integer (Units_Token::*)() const) static_cast<Standard_Integer (Units_Token::*)() const>(&Units_Token::Length),
             R"#(Returns the length of the word.)#" )
        .def("Word",
             (TCollection_AsciiString (Units_Token::*)() const) static_cast<TCollection_AsciiString (Units_Token::*)() const>(&Units_Token::Word),
             R"#(Returns the string <theword>)#" )
        .def("Word",
             (void (Units_Token::*)( const Standard_CString ) ) static_cast<void (Units_Token::*)( const Standard_CString ) >(&Units_Token::Word),
             R"#(Sets the field <theword> to <aword>.)#"  , py::arg("aword"))
        .def("Mean",
             (TCollection_AsciiString (Units_Token::*)() const) static_cast<TCollection_AsciiString (Units_Token::*)() const>(&Units_Token::Mean),
             R"#(Returns the significance of the word <theword>, which is in the field <themean>.)#" )
        .def("Mean",
             (void (Units_Token::*)( const Standard_CString ) ) static_cast<void (Units_Token::*)( const Standard_CString ) >(&Units_Token::Mean),
             R"#(Sets the field <themean> to <amean>.)#"  , py::arg("amean"))
        .def("Value",
             (Standard_Real (Units_Token::*)() const) static_cast<Standard_Real (Units_Token::*)() const>(&Units_Token::Value),
             R"#(Returns the value stored in the field <thevalue>.)#" )
        .def("Value",
             (void (Units_Token::*)( const Standard_Real ) ) static_cast<void (Units_Token::*)( const Standard_Real ) >(&Units_Token::Value),
             R"#(Sets the field <thevalue> to <avalue>.)#"  , py::arg("avalue"))
        .def("Dimensions",
             (opencascade::handle<Units_Dimensions> (Units_Token::*)() const) static_cast<opencascade::handle<Units_Dimensions> (Units_Token::*)() const>(&Units_Token::Dimensions),
             R"#(Returns the dimensions of the token <thedimensions>.)#" )
        .def("Dimensions",
             (void (Units_Token::*)( const opencascade::handle<Units_Dimensions> & ) ) static_cast<void (Units_Token::*)( const opencascade::handle<Units_Dimensions> & ) >(&Units_Token::Dimensions),
             R"#(Sets the field <thedimensions> to <adimensions>.)#"  , py::arg("adimensions"))
        .def("Update",
             (void (Units_Token::*)( const Standard_CString ) ) static_cast<void (Units_Token::*)( const Standard_CString ) >(&Units_Token::Update),
             R"#(Updates the token <me> with the additional signification <amean> by concatenation of the two strings <themean> and <amean>. If the two significations are the same , an information message is written in the output device.)#"  , py::arg("amean"))
        .def("Add",
             (opencascade::handle<Units_Token> (Units_Token::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)( const Standard_Integer ) const>(&Units_Token::Add),
             R"#(None)#"  , py::arg("aninteger"))
        .def("Add",
             (opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::Add),
             R"#(Returns a token which is the addition of <me> and another token <atoken>. The addition is possible if and only if the dimensions are the same.)#"  , py::arg("atoken"))
        .def("Subtract",
             (opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::Subtract),
             R"#(Returns a token which is the subtraction of <me> and another token <atoken>. The subtraction is possible if and only if the dimensions are the same.)#"  , py::arg("atoken"))
        .def("Multiply",
             (opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::Multiply),
             R"#(Returns a token which is the product of <me> and another token <atoken>.)#"  , py::arg("atoken"))
        .def("Multiplied",
             (Standard_Real (Units_Token::*)( const Standard_Real ) const) static_cast<Standard_Real (Units_Token::*)( const Standard_Real ) const>(&Units_Token::Multiplied),
             R"#(This virtual method is called by the Measurement methods, to compute the measurement during a conversion.)#"  , py::arg("avalue"))
        .def("Divide",
             (opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::Divide),
             R"#(Returns a token which is the division of <me> by another token <atoken>.)#"  , py::arg("atoken"))
        .def("Divided",
             (Standard_Real (Units_Token::*)( const Standard_Real ) const) static_cast<Standard_Real (Units_Token::*)( const Standard_Real ) const>(&Units_Token::Divided),
             R"#(This virtual method is called by the Measurement methods, to compute the measurement during a conversion.)#"  , py::arg("avalue"))
        .def("Power",
             (opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::Power),
             R"#(Returns a token which is <me> to the power of another token <atoken>. The computation is possible only if <atoken> is a dimensionless constant.)#"  , py::arg("atoken"))
        .def("Power",
             (opencascade::handle<Units_Token> (Units_Token::*)( const Standard_Real ) const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)( const Standard_Real ) const>(&Units_Token::Power),
             R"#(Returns a token which is <me> to the power of <anexponent>.)#"  , py::arg("anexponent"))
        .def("IsEqual",
             (Standard_Boolean (Units_Token::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Token::*)( const Standard_CString ) const>(&Units_Token::IsEqual),
             R"#(Returns true if the field <theword> and the string <astring> are the same, false otherwise.)#"  , py::arg("astring"))
        .def("IsEqual",
             (Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::IsEqual),
             R"#(Returns true if the field <theword> and the string <theword> contained in the token <atoken> are the same, false otherwise.)#"  , py::arg("atoken"))
        .def("IsNotEqual",
             (Standard_Boolean (Units_Token::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Token::*)( const Standard_CString ) const>(&Units_Token::IsNotEqual),
             R"#(Returns false if the field <theword> and the string <astring> are the same, true otherwise.)#"  , py::arg("astring"))
        .def("IsNotEqual",
             (Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::IsNotEqual),
             R"#(Returns false if the field <theword> and the string <theword> contained in the token <atoken> are the same, true otherwise.)#"  , py::arg("atoken"))
        .def("IsLessOrEqual",
             (Standard_Boolean (Units_Token::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Token::*)( const Standard_CString ) const>(&Units_Token::IsLessOrEqual),
             R"#(Returns true if the field <theword> is strictly contained at the beginning of the string <astring>, false otherwise.)#"  , py::arg("astring"))
        .def("IsGreater",
             (Standard_Boolean (Units_Token::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Token::*)( const Standard_CString ) const>(&Units_Token::IsGreater),
             R"#(Returns false if the field <theword> is strictly contained at the beginning of the string <astring>, true otherwise.)#"  , py::arg("astring"))
        .def("IsGreater",
             (Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::IsGreater),
             R"#(Returns false if the field <theword> is strictly contained at the beginning of the string <astring>, true otherwise.)#"  , py::arg("atoken"))
        .def("IsGreaterOrEqual",
             (Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::IsGreaterOrEqual),
             R"#(Returns true if the string <astring> is strictly contained at the beginning of the field <theword> false otherwise.)#"  , py::arg("atoken"))
        .def("Dump",
             (void (Units_Token::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Units_Token::*)( const Standard_Integer , const Standard_Integer ) const>(&Units_Token::Dump),
             R"#(Useful for debugging)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_Token::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_Token::*)() const>(&Units_Token::DynamicType),
             R"#(None)#" )
        .def("Word",
             (TCollection_AsciiString (Units_Token::*)() const) static_cast<TCollection_AsciiString (Units_Token::*)() const>(&Units_Token::Word),
             R"#(Returns the string <theword>)#" )
        .def("Mean",
             (TCollection_AsciiString (Units_Token::*)() const) static_cast<TCollection_AsciiString (Units_Token::*)() const>(&Units_Token::Mean),
             R"#(Returns the significance of the word <theword>, which is in the field <themean>.)#" )
        .def("Value",
             (Standard_Real (Units_Token::*)() const) static_cast<Standard_Real (Units_Token::*)() const>(&Units_Token::Value),
             R"#(Returns the value stored in the field <thevalue>.)#" )
        .def("Dimensions",
             (opencascade::handle<Units_Dimensions> (Units_Token::*)() const) static_cast<opencascade::handle<Units_Dimensions> (Units_Token::*)() const>(&Units_Token::Dimensions),
             R"#(Returns the dimensions of the token <thedimensions>.)#" )
        .def("Word",
             (void (Units_Token::*)( const Standard_CString ) ) static_cast<void (Units_Token::*)( const Standard_CString ) >(&Units_Token::Word),
             R"#(Sets the field <theword> to <aword>.)#"  , py::arg("aword"))
        .def("Mean",
             (void (Units_Token::*)( const Standard_CString ) ) static_cast<void (Units_Token::*)( const Standard_CString ) >(&Units_Token::Mean),
             R"#(Sets the field <themean> to <amean>.)#"  , py::arg("amean"))
        .def("Value",
             (void (Units_Token::*)( const Standard_Real ) ) static_cast<void (Units_Token::*)( const Standard_Real ) >(&Units_Token::Value),
             R"#(Sets the field <thevalue> to <avalue>.)#"  , py::arg("avalue"))
        .def("IsNotEqual",
             (Standard_Boolean (Units_Token::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Token::*)( const Standard_CString ) const>(&Units_Token::IsNotEqual),
             R"#(Returns false if the field <theword> and the string <astring> are the same, true otherwise.)#"  , py::arg("astring"))
        .def("IsNotEqual",
             (Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::IsNotEqual),
             R"#(Returns false if the field <theword> and the string <theword> contained in the token <atoken> are the same, true otherwise.)#"  , py::arg("atoken"))
        .def("IsLessOrEqual",
             (Standard_Boolean (Units_Token::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Token::*)( const Standard_CString ) const>(&Units_Token::IsLessOrEqual),
             R"#(Returns true if the field <theword> is strictly contained at the beginning of the string <astring>, false otherwise.)#"  , py::arg("astring"))
        .def("IsGreater",
             (Standard_Boolean (Units_Token::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Token::*)( const Standard_CString ) const>(&Units_Token::IsGreater),
             R"#(Returns false if the field <theword> is strictly contained at the beginning of the string <astring>, true otherwise.)#"  , py::arg("astring"))
        .def("IsGreater",
             (Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::IsGreater),
             R"#(Returns false if the field <theword> is strictly contained at the beginning of the string <astring>, true otherwise.)#"  , py::arg("atoken"))
        .def("IsGreaterOrEqual",
             (Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const) static_cast<Standard_Boolean (Units_Token::*)( const opencascade::handle<Units_Token> & ) const>(&Units_Token::IsGreaterOrEqual),
             R"#(Returns true if the string <astring> is strictly contained at the beginning of the field <theword> false otherwise.)#"  , py::arg("atoken"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_Token::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_Token::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_TokensSequence ,opencascade::handle<Units_TokensSequence> , Units_TksSequence, Standard_Transient>>(m.attr("Units_TokensSequence"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Units_Token> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Units_TksSequence & (Units_TokensSequence::*)() const) static_cast<const Units_TksSequence & (Units_TokensSequence::*)() const>(&Units_TokensSequence::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Units_TokensSequence::*)(  const opencascade::handle<Units_Token> & ) ) static_cast<void (Units_TokensSequence::*)(  const opencascade::handle<Units_Token> & ) >(&Units_TokensSequence::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Units_TokensSequence::*)( NCollection_Sequence<opencascade::handle<Units_Token> > & ) ) static_cast<void (Units_TokensSequence::*)( NCollection_Sequence<opencascade::handle<Units_Token> > & ) >(&Units_TokensSequence::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Units_TksSequence & (Units_TokensSequence::*)() ) static_cast<Units_TksSequence & (Units_TokensSequence::*)() >(&Units_TokensSequence::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_TokensSequence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_TokensSequence::*)() const>(&Units_TokensSequence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_TokensSequence::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_TokensSequence::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Unit ,opencascade::handle<Units_Unit> , Standard_Transient>>(m.attr("Units_Unit"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_CString,const Standard_Real,const opencascade::handle<Units_Quantity> & >()  , py::arg("aname"),  py::arg("asymbol"),  py::arg("avalue"),  py::arg("aquantity") )
        .def(py::init< const Standard_CString,const Standard_CString >()  , py::arg("aname"),  py::arg("asymbol") )
        .def(py::init< const Standard_CString >()  , py::arg("aname") )
    // custom constructors
    // methods
        .def("Name",
             (TCollection_AsciiString (Units_Unit::*)() const) static_cast<TCollection_AsciiString (Units_Unit::*)() const>(&Units_Unit::Name),
             R"#(Returns the name of the unit <thename>)#" )
        .def("Symbol",
             (void (Units_Unit::*)( const Standard_CString ) ) static_cast<void (Units_Unit::*)( const Standard_CString ) >(&Units_Unit::Symbol),
             R"#(Adds a new symbol <asymbol> attached to <me>.)#"  , py::arg("asymbol"))
        .def("Value",
             (Standard_Real (Units_Unit::*)() const) static_cast<Standard_Real (Units_Unit::*)() const>(&Units_Unit::Value),
             R"#(Returns the value in relation with the International System of Units.)#" )
        .def("Quantity",
             (opencascade::handle<Units_Quantity> (Units_Unit::*)() const) static_cast<opencascade::handle<Units_Quantity> (Units_Unit::*)() const>(&Units_Unit::Quantity),
             R"#(Returns <thequantity> contained in <me>.)#" )
        .def("SymbolsSequence",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (Units_Unit::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (Units_Unit::*)() const>(&Units_Unit::SymbolsSequence),
             R"#(Returns the sequence of symbols <thesymbolssequence>)#" )
        .def("Value",
             (void (Units_Unit::*)( const Standard_Real ) ) static_cast<void (Units_Unit::*)( const Standard_Real ) >(&Units_Unit::Value),
             R"#(Sets the value <avalue> to <me>.)#"  , py::arg("avalue"))
        .def("Quantity",
             (void (Units_Unit::*)( const opencascade::handle<Units_Quantity> & ) ) static_cast<void (Units_Unit::*)( const opencascade::handle<Units_Quantity> & ) >(&Units_Unit::Quantity),
             R"#(Sets the physical Quantity <aquantity> to <me>.)#"  , py::arg("aquantity"))
        .def("Token",
             (opencascade::handle<Units_Token> (Units_Unit::*)() const) static_cast<opencascade::handle<Units_Token> (Units_Unit::*)() const>(&Units_Unit::Token),
             R"#(Starting with <me>, returns a new Token object.)#" )
        .def("IsEqual",
             (Standard_Boolean (Units_Unit::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Units_Unit::*)( const Standard_CString ) const>(&Units_Unit::IsEqual),
             R"#(Compares all the symbols linked within <me> with the name of <atoken>, and returns True if there is one symbol equal to the name, False otherwise.)#"  , py::arg("astring"))
        .def("Dump",
             (void (Units_Unit::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Units_Unit::*)( const Standard_Integer , const Standard_Integer ) const>(&Units_Unit::Dump),
             R"#(Useful for debugging)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_Unit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_Unit::*)() const>(&Units_Unit::DynamicType),
             R"#(None)#" )
        .def("Name",
             (TCollection_AsciiString (Units_Unit::*)() const) static_cast<TCollection_AsciiString (Units_Unit::*)() const>(&Units_Unit::Name),
             R"#(Returns the name of the unit <thename>)#" )
        .def("Value",
             (Standard_Real (Units_Unit::*)() const) static_cast<Standard_Real (Units_Unit::*)() const>(&Units_Unit::Value),
             R"#(Returns the value in relation with the International System of Units.)#" )
        .def("Quantity",
             (opencascade::handle<Units_Quantity> (Units_Unit::*)() const) static_cast<opencascade::handle<Units_Quantity> (Units_Unit::*)() const>(&Units_Unit::Quantity),
             R"#(Returns <thequantity> contained in <me>.)#" )
        .def("SymbolsSequence",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (Units_Unit::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (Units_Unit::*)() const>(&Units_Unit::SymbolsSequence),
             R"#(Returns the sequence of symbols <thesymbolssequence>)#" )
        .def("Value",
             (void (Units_Unit::*)( const Standard_Real ) ) static_cast<void (Units_Unit::*)( const Standard_Real ) >(&Units_Unit::Value),
             R"#(Sets the value <avalue> to <me>.)#"  , py::arg("avalue"))
        .def("Quantity",
             (void (Units_Unit::*)( const opencascade::handle<Units_Quantity> & ) ) static_cast<void (Units_Unit::*)( const opencascade::handle<Units_Quantity> & ) >(&Units_Unit::Quantity),
             R"#(Sets the physical Quantity <aquantity> to <me>.)#"  , py::arg("aquantity"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_Unit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_Unit::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitsDictionary ,opencascade::handle<Units_UnitsDictionary> , Standard_Transient>>(m.attr("Units_UnitsDictionary"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Creates",
             (void (Units_UnitsDictionary::*)() ) static_cast<void (Units_UnitsDictionary::*)() >(&Units_UnitsDictionary::Creates),
             R"#(Returns a UnitsDictionary object which contains the sequence of all the units you want to consider, physical quantity by physical quantity.)#" )
        .def("Sequence",
             (opencascade::handle<Units_QuantitiesSequence> (Units_UnitsDictionary::*)() const) static_cast<opencascade::handle<Units_QuantitiesSequence> (Units_UnitsDictionary::*)() const>(&Units_UnitsDictionary::Sequence),
             R"#(Returns the head of the sequence of physical quantities.)#" )
        .def("ActiveUnit",
             (TCollection_AsciiString (Units_UnitsDictionary::*)( const Standard_CString ) const) static_cast<TCollection_AsciiString (Units_UnitsDictionary::*)( const Standard_CString ) const>(&Units_UnitsDictionary::ActiveUnit),
             R"#(Returns for <aquantity> the active unit.)#"  , py::arg("aquantity"))
        .def("Dump",
             (void (Units_UnitsDictionary::*)( const Standard_Integer ) const) static_cast<void (Units_UnitsDictionary::*)( const Standard_Integer ) const>(&Units_UnitsDictionary::Dump),
             R"#(Dumps only the sequence of quantities without the units if <alevel> is equal to zero, and for each quantity all the units stored if <alevel> is equal to one.)#"  , py::arg("alevel"))
        .def("Dump",
             (void (Units_UnitsDictionary::*)( const opencascade::handle<Units_Dimensions> & ) const) static_cast<void (Units_UnitsDictionary::*)( const opencascade::handle<Units_Dimensions> & ) const>(&Units_UnitsDictionary::Dump),
             R"#(Dumps for a designated physical dimensions <adimensions> all the previously stored units.)#"  , py::arg("adimensions"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_UnitsDictionary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_UnitsDictionary::*)() const>(&Units_UnitsDictionary::DynamicType),
             R"#(None)#" )
        .def("Sequence",
             (opencascade::handle<Units_QuantitiesSequence> (Units_UnitsDictionary::*)() const) static_cast<opencascade::handle<Units_QuantitiesSequence> (Units_UnitsDictionary::*)() const>(&Units_UnitsDictionary::Sequence),
             R"#(Returns the head of the sequence of physical quantities.)#" )
        .def("Dump",
             (void (Units_UnitsDictionary::*)( const Standard_Integer ) const) static_cast<void (Units_UnitsDictionary::*)( const Standard_Integer ) const>(&Units_UnitsDictionary::Dump),
             R"#(Dumps only the sequence of quantities without the units if <alevel> is equal to zero, and for each quantity all the units stored if <alevel> is equal to one.)#"  , py::arg("alevel"))
        .def("Dump",
             (void (Units_UnitsDictionary::*)( const opencascade::handle<Units_Dimensions> & ) const) static_cast<void (Units_UnitsDictionary::*)( const opencascade::handle<Units_Dimensions> & ) const>(&Units_UnitsDictionary::Dump),
             R"#(Dumps for a designated physical dimensions <adimensions> all the previously stored units.)#"  , py::arg("adimensions"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_UnitsDictionary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_UnitsDictionary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitsSequence ,opencascade::handle<Units_UnitsSequence> , Units_UtsSequence, Standard_Transient>>(m.attr("Units_UnitsSequence"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Units_Unit> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Units_UtsSequence & (Units_UnitsSequence::*)() const) static_cast<const Units_UtsSequence & (Units_UnitsSequence::*)() const>(&Units_UnitsSequence::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Units_UnitsSequence::*)(  const opencascade::handle<Units_Unit> & ) ) static_cast<void (Units_UnitsSequence::*)(  const opencascade::handle<Units_Unit> & ) >(&Units_UnitsSequence::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Units_UnitsSequence::*)( NCollection_Sequence<opencascade::handle<Units_Unit> > & ) ) static_cast<void (Units_UnitsSequence::*)( NCollection_Sequence<opencascade::handle<Units_Unit> > & ) >(&Units_UnitsSequence::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Units_UtsSequence & (Units_UnitsSequence::*)() ) static_cast<Units_UtsSequence & (Units_UnitsSequence::*)() >(&Units_UnitsSequence::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_UnitsSequence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_UnitsSequence::*)() const>(&Units_UnitsSequence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_UnitsSequence::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_UnitsSequence::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitsSystem ,opencascade::handle<Units_UnitsSystem> , Standard_Transient>>(m.attr("Units_UnitsSystem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString,const Standard_Boolean >()  , py::arg("aName"),  py::arg("Verbose")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("QuantitiesSequence",
             (opencascade::handle<Units_QuantitiesSequence> (Units_UnitsSystem::*)() const) static_cast<opencascade::handle<Units_QuantitiesSequence> (Units_UnitsSystem::*)() const>(&Units_UnitsSystem::QuantitiesSequence),
             R"#(Returns the sequence of refined quantities.)#" )
        .def("ActiveUnitsSequence",
             (opencascade::handle<TColStd_HSequenceOfInteger> (Units_UnitsSystem::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfInteger> (Units_UnitsSystem::*)() const>(&Units_UnitsSystem::ActiveUnitsSequence),
             R"#(Returns a sequence of integer in correspondance with the sequence of quantities, which indicates, for each redefined quantity, the index into the sequence of units, of the active unit.)#" )
        .def("Specify",
             (void (Units_UnitsSystem::*)( const Standard_CString , const Standard_CString ) ) static_cast<void (Units_UnitsSystem::*)( const Standard_CString , const Standard_CString ) >(&Units_UnitsSystem::Specify),
             R"#(Specifies for <aquantity> the unit <aunit> used.)#"  , py::arg("aquantity"),  py::arg("aunit"))
        .def("Remove",
             (void (Units_UnitsSystem::*)( const Standard_CString , const Standard_CString ) ) static_cast<void (Units_UnitsSystem::*)( const Standard_CString , const Standard_CString ) >(&Units_UnitsSystem::Remove),
             R"#(Removes for <aquantity> the unit <aunit> used.)#"  , py::arg("aquantity"),  py::arg("aunit"))
        .def("Activate",
             (void (Units_UnitsSystem::*)( const Standard_CString , const Standard_CString ) ) static_cast<void (Units_UnitsSystem::*)( const Standard_CString , const Standard_CString ) >(&Units_UnitsSystem::Activate),
             R"#(Specifies for <aquantity> the unit <aunit> used.)#"  , py::arg("aquantity"),  py::arg("aunit"))
        .def("Activates",
             (void (Units_UnitsSystem::*)() ) static_cast<void (Units_UnitsSystem::*)() >(&Units_UnitsSystem::Activates),
             R"#(Activates the first unit of all defined system quantities)#" )
        .def("ActiveUnit",
             (TCollection_AsciiString (Units_UnitsSystem::*)( const Standard_CString ) const) static_cast<TCollection_AsciiString (Units_UnitsSystem::*)( const Standard_CString ) const>(&Units_UnitsSystem::ActiveUnit),
             R"#(Returns for <aquantity> the active unit.)#"  , py::arg("aquantity"))
        .def("ConvertValueToUserSystem",
             (Standard_Real (Units_UnitsSystem::*)( const Standard_CString , const Standard_Real , const Standard_CString ) const) static_cast<Standard_Real (Units_UnitsSystem::*)( const Standard_CString , const Standard_Real , const Standard_CString ) const>(&Units_UnitsSystem::ConvertValueToUserSystem),
             R"#(Converts a real value <avalue> from the unit <aunit> belonging to the physical dimensions <aquantity> to the corresponding unit of the user system.)#"  , py::arg("aquantity"),  py::arg("avalue"),  py::arg("aunit"))
        .def("ConvertSIValueToUserSystem",
             (Standard_Real (Units_UnitsSystem::*)( const Standard_CString , const Standard_Real ) const) static_cast<Standard_Real (Units_UnitsSystem::*)( const Standard_CString , const Standard_Real ) const>(&Units_UnitsSystem::ConvertSIValueToUserSystem),
             R"#(Converts the real value <avalue> from the S.I. system of units to the user system of units. <aquantity> is the physical dimensions of the measurement.)#"  , py::arg("aquantity"),  py::arg("avalue"))
        .def("ConvertUserSystemValueToSI",
             (Standard_Real (Units_UnitsSystem::*)( const Standard_CString , const Standard_Real ) const) static_cast<Standard_Real (Units_UnitsSystem::*)( const Standard_CString , const Standard_Real ) const>(&Units_UnitsSystem::ConvertUserSystemValueToSI),
             R"#(Converts the real value <avalue> from the user system of units to the S.I. system of units. <aquantity> is the physical dimensions of the measurement.)#"  , py::arg("aquantity"),  py::arg("avalue"))
        .def("Dump",
             (void (Units_UnitsSystem::*)() const) static_cast<void (Units_UnitsSystem::*)() const>(&Units_UnitsSystem::Dump),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (Units_UnitsSystem::*)() const) static_cast<Standard_Boolean (Units_UnitsSystem::*)() const>(&Units_UnitsSystem::IsEmpty),
             R"#(Returns TRUE if no units has been defined in the system.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_UnitsSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_UnitsSystem::*)() const>(&Units_UnitsSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_UnitsSystem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_UnitsSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_MathSentence , shared_ptr<Units_MathSentence> , Units_Sentence>>(m.attr("Units_MathSentence"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("astring") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_ShiftedToken ,opencascade::handle<Units_ShiftedToken> , Units_Token>>(m.attr("Units_ShiftedToken"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_CString,const Standard_Real,const Standard_Real,const opencascade::handle<Units_Dimensions> & >()  , py::arg("aword"),  py::arg("amean"),  py::arg("avalue"),  py::arg("amove"),  py::arg("adimensions") )
    // custom constructors
    // methods
        .def("Creates",
             (opencascade::handle<Units_Token> (Units_ShiftedToken::*)() const) static_cast<opencascade::handle<Units_Token> (Units_ShiftedToken::*)() const>(&Units_ShiftedToken::Creates),
             R"#(Creates and returns a token, which is a ShiftedToken.)#" )
        .def("Move",
             (Standard_Real (Units_ShiftedToken::*)() const) static_cast<Standard_Real (Units_ShiftedToken::*)() const>(&Units_ShiftedToken::Move),
             R"#(Returns the gap <themove>)#" )
        .def("Multiplied",
             (Standard_Real (Units_ShiftedToken::*)( const Standard_Real ) const) static_cast<Standard_Real (Units_ShiftedToken::*)( const Standard_Real ) const>(&Units_ShiftedToken::Multiplied),
             R"#(This virtual method is called by the Measurement methods, to compute the measurement during a conversion.)#"  , py::arg("avalue"))
        .def("Divided",
             (Standard_Real (Units_ShiftedToken::*)( const Standard_Real ) const) static_cast<Standard_Real (Units_ShiftedToken::*)( const Standard_Real ) const>(&Units_ShiftedToken::Divided),
             R"#(This virtual method is called by the Measurement methods, to compute the measurement during a conversion.)#"  , py::arg("avalue"))
        .def("Dump",
             (void (Units_ShiftedToken::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Units_ShiftedToken::*)( const Standard_Integer , const Standard_Integer ) const>(&Units_ShiftedToken::Dump),
             R"#(None)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_ShiftedToken::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_ShiftedToken::*)() const>(&Units_ShiftedToken::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_ShiftedToken::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_ShiftedToken::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_ShiftedUnit ,opencascade::handle<Units_ShiftedUnit> , Units_Unit>>(m.attr("Units_ShiftedUnit"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_CString,const Standard_Real,const Standard_Real,const opencascade::handle<Units_Quantity> & >()  , py::arg("aname"),  py::arg("asymbol"),  py::arg("avalue"),  py::arg("amove"),  py::arg("aquantity") )
        .def(py::init< const Standard_CString,const Standard_CString >()  , py::arg("aname"),  py::arg("asymbol") )
        .def(py::init< const Standard_CString >()  , py::arg("aname") )
    // custom constructors
    // methods
        .def("Move",
             (void (Units_ShiftedUnit::*)( const Standard_Real ) ) static_cast<void (Units_ShiftedUnit::*)( const Standard_Real ) >(&Units_ShiftedUnit::Move),
             R"#(Sets the field <themove> to <amove>)#"  , py::arg("amove"))
        .def("Move",
             (Standard_Real (Units_ShiftedUnit::*)() const) static_cast<Standard_Real (Units_ShiftedUnit::*)() const>(&Units_ShiftedUnit::Move),
             R"#(Returns the shifted value <themove>.)#" )
        .def("Token",
             (opencascade::handle<Units_Token> (Units_ShiftedUnit::*)() const) static_cast<opencascade::handle<Units_Token> (Units_ShiftedUnit::*)() const>(&Units_ShiftedUnit::Token),
             R"#(This redefined method returns a ShiftedToken object.)#" )
        .def("Dump",
             (void (Units_ShiftedUnit::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (Units_ShiftedUnit::*)( const Standard_Integer , const Standard_Integer ) const>(&Units_ShiftedUnit::Dump),
             R"#(None)#"  , py::arg("ashift"),  py::arg("alevel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_ShiftedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_ShiftedUnit::*)() const>(&Units_ShiftedUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_ShiftedUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_ShiftedUnit::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitSentence , shared_ptr<Units_UnitSentence> , Units_Sentence>>(m.attr("Units_UnitSentence"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("astring") )
        .def(py::init< const Standard_CString,const opencascade::handle<Units_QuantitiesSequence> & >()  , py::arg("astring"),  py::arg("aquantitiessequence") )
    // custom constructors
    // methods
        .def("Analyse",
             (void (Units_UnitSentence::*)() ) static_cast<void (Units_UnitSentence::*)() >(&Units_UnitSentence::Analyse),
             R"#(Analyzes the sequence of tokens created by the constructor to find the true significance of each token.)#" )
        .def("SetUnits",
             (void (Units_UnitSentence::*)( const opencascade::handle<Units_QuantitiesSequence> & ) ) static_cast<void (Units_UnitSentence::*)( const opencascade::handle<Units_QuantitiesSequence> & ) >(&Units_UnitSentence::SetUnits),
             R"#(For each token which represents a unit, finds in the sequence of physical quantities all the characteristics of the unit found.)#"  , py::arg("aquantitiessequence"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitsLexicon ,opencascade::handle<Units_UnitsLexicon> , Units_Lexicon>>(m.attr("Units_UnitsLexicon"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Creates",
             (void (Units_UnitsLexicon::*)( const Standard_Boolean ) ) static_cast<void (Units_UnitsLexicon::*)( const Standard_Boolean ) >(&Units_UnitsLexicon::Creates),
             R"#(Reads the files <afilename1> and <afilename2> to create a sequence of tokens stored in <thesequenceoftokens>.)#"  , py::arg("amode")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Dump",
             (void (Units_UnitsLexicon::*)() const) static_cast<void (Units_UnitsLexicon::*)() const>(&Units_UnitsLexicon::Dump),
             R"#(Useful for debugging.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_UnitsLexicon::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_UnitsLexicon::*)() const>(&Units_UnitsLexicon::DynamicType),
             R"#(None)#" )
        .def("Dump",
             (void (Units_UnitsLexicon::*)() const) static_cast<void (Units_UnitsLexicon::*)() const>(&Units_UnitsLexicon::Dump),
             R"#(Useful for debugging.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_UnitsLexicon::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Units_UnitsLexicon::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Units_UnitsDictionary.hxx
// ./opencascade/Units_Quantity.hxx
// ./opencascade/Units_ShiftedToken.hxx
// ./opencascade/Units_UnitsSystem.hxx
// ./opencascade/Units_UnitSentence.hxx
// ./opencascade/Units_QtsSequence.hxx
// ./opencascade/Units.hxx
// ./opencascade/Units_Token.hxx
// ./opencascade/Units_MathSentence.hxx
// ./opencascade/Units_UtsSequence.hxx
// ./opencascade/Units_Dimensions.hxx
// ./opencascade/Units_UnitsSequence.hxx
// ./opencascade/Units_QuantitiesSequence.hxx
// ./opencascade/Units_Explorer.hxx
// ./opencascade/Units_Lexicon.hxx
// ./opencascade/Units_TokensSequence.hxx
// ./opencascade/Units_NoSuchUnit.hxx
// ./opencascade/Units_Sentence.hxx
// ./opencascade/Units_Operators.hxx
    m.def("pow",
          (opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const Standard_Real ))  static_cast<opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const Standard_Real )>(&pow),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("pow",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & )>(&pow),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("pow",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const Standard_Real ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const Standard_Real )>(&pow),
          R"#(None)#"  , py::arg(""),  py::arg(""));
// ./opencascade/Units_Measurement.hxx
// ./opencascade/Units_UnitsLexicon.hxx
// ./opencascade/Units_ShiftedUnit.hxx
// ./opencascade/Units_TksSequence.hxx
// ./opencascade/Units_NoSuchType.hxx
// ./opencascade/Units_Unit.hxx

// Additional functions

// operators
    m.def("__mul__",
          (opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const opencascade::handle<Units_Dimensions> & ))  static_cast<opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const opencascade::handle<Units_Dimensions> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__rmul__",
          (opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const opencascade::handle<Units_Dimensions> & ))  static_cast<opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const opencascade::handle<Units_Dimensions> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__truediv__",
          (opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const opencascade::handle<Units_Dimensions> & ))  static_cast<opencascade::handle<Units_Dimensions> (*)( const opencascade::handle<Units_Dimensions> & , const opencascade::handle<Units_Dimensions> & )>(&operator/),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__add__",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const Standard_Integer ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const Standard_Integer )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__add__",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__sub__",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__mul__",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__rmul__",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("__truediv__",
          (opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & ))  static_cast<opencascade::handle<Units_Token> (*)( const opencascade::handle<Units_Token> & , const opencascade::handle<Units_Token> & )>(&operator/),
          py::is_operator(),
          R"#(None)#"  , py::arg(""),  py::arg(""));

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<Units_Quantity> >(m,"Units_QtsSequence");
    register_template_NCollection_Sequence<opencascade::handle<Units_Unit> >(m,"Units_UtsSequence");
    register_template_NCollection_Sequence<opencascade::handle<Units_Token> >(m,"Units_TksSequence");


// exceptions
register_occ_exception<Units_NoSuchType>(m, "Units_NoSuchType");
register_occ_exception<Units_NoSuchUnit>(m, "Units_NoSuchUnit");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
