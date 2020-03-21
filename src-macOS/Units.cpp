
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Units_UnitsSystem.hxx>
#include <Units_UnitsDictionary.hxx>
#include <Units_Quantity.hxx>
#include <Units_Token.hxx>
#include <Units_Token.hxx>
#include <Units_NoSuchUnit.hxx>
#include <Units_NoSuchType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Units_Quantity.hxx>
#include <Units_Token.hxx>
#include <Units_Lexicon.hxx>
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
#include <TCollection_HAsciiString.hxx>

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
// ./opencascade/Units_TksSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Units_UtsSequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Units_QtsSequence.hxx
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Dimensions ,opencascade::handle<Units_Dimensions> , Standard_Transient>>(m.attr("Units_Dimensions"))
    // constructors
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_Dimensions::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Explorer , shared_ptr<Units_Explorer> >>(m.attr("Units_Explorer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Lexicon ,opencascade::handle<Units_Lexicon> , Standard_Transient>>(m.attr("Units_Lexicon"))
    // constructors
    // custom constructors
    // methods
        .def("Sequence",
             (opencascade::handle<Units_TokensSequence> (Units_Lexicon::*)() const) static_cast<opencascade::handle<Units_TokensSequence> (Units_Lexicon::*)() const>(&Units_Lexicon::Sequence),
             R"#(Returns the first item of the sequence of tokens.)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Measurement , shared_ptr<Units_Measurement> >>(m.attr("Units_Measurement"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_Sentence , shared_ptr<Units_Sentence> >>(m.attr("Units_Sentence"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
        .def("Creates",
             (opencascade::handle<Units_Token> (Units_Token::*)() const) static_cast<opencascade::handle<Units_Token> (Units_Token::*)() const>(&Units_Token::Creates),
             R"#(Creates and returns a token, which is a ShiftedToken.)#" )
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
        .def("Multiplied",
             (Standard_Real (Units_Token::*)( const Standard_Real ) const) static_cast<Standard_Real (Units_Token::*)( const Standard_Real ) const>(&Units_Token::Multiplied),
             R"#(This virtual method is called by the Measurement methods, to compute the measurement during a conversion.)#"  , py::arg("avalue"))
        .def("Divided",
             (Standard_Real (Units_Token::*)( const Standard_Real ) const) static_cast<Standard_Real (Units_Token::*)( const Standard_Real ) const>(&Units_Token::Divided),
             R"#(This virtual method is called by the Measurement methods, to compute the measurement during a conversion.)#"  , py::arg("avalue"))
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
    // custom constructors
    // methods
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
        .def("Token",
             (opencascade::handle<Units_Token> (Units_Unit::*)() const) static_cast<opencascade::handle<Units_Token> (Units_Unit::*)() const>(&Units_Unit::Token),
             R"#(Starting with <me>, returns a new Token object.)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitsDictionary ,opencascade::handle<Units_UnitsDictionary> , Standard_Transient>>(m.attr("Units_UnitsDictionary"))
    // constructors
    // custom constructors
    // methods
        .def("Sequence",
             (opencascade::handle<Units_QuantitiesSequence> (Units_UnitsDictionary::*)() const) static_cast<opencascade::handle<Units_QuantitiesSequence> (Units_UnitsDictionary::*)() const>(&Units_UnitsDictionary::Sequence),
             R"#(Returns the head of the sequence of physical quantities.)#" )
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
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Units_UnitsSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Units_UnitsSystem::*)() const>(&Units_UnitsSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Units_UnitsSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_MathSentence , shared_ptr<Units_MathSentence> , Units_Sentence>>(m.attr("Units_MathSentence"))
    // constructors
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
    // custom constructors
    // methods
        .def("Creates",
             (opencascade::handle<Units_Token> (Units_ShiftedToken::*)() const) static_cast<opencascade::handle<Units_Token> (Units_ShiftedToken::*)() const>(&Units_ShiftedToken::Creates),
             R"#(Creates and returns a token, which is a ShiftedToken.)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_ShiftedUnit ,opencascade::handle<Units_ShiftedUnit> , Units_Unit>>(m.attr("Units_ShiftedUnit"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitSentence , shared_ptr<Units_UnitSentence> , Units_Sentence>>(m.attr("Units_UnitSentence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Units_UnitsLexicon ,opencascade::handle<Units_UnitsLexicon> , Units_Lexicon>>(m.attr("Units_UnitsLexicon"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Units_ShiftedToken.hxx
// ./opencascade/Units_UnitsSequence.hxx
// ./opencascade/Units_MathSentence.hxx
// ./opencascade/Units_Explorer.hxx
// ./opencascade/Units_ShiftedUnit.hxx
// ./opencascade/Units_Measurement.hxx
// ./opencascade/Units_UnitsSystem.hxx
// ./opencascade/Units_TksSequence.hxx
// ./opencascade/Units_NoSuchUnit.hxx
// ./opencascade/Units_UtsSequence.hxx
// ./opencascade/Units_UnitSentence.hxx
// ./opencascade/Units_UnitsLexicon.hxx
// ./opencascade/Units_Unit.hxx
// ./opencascade/Units_Sentence.hxx
// ./opencascade/Units_NoSuchType.hxx
// ./opencascade/Units_QtsSequence.hxx
// ./opencascade/Units_Token.hxx
// ./opencascade/Units_QuantitiesSequence.hxx
// ./opencascade/Units_UnitsDictionary.hxx
// ./opencascade/Units_Operators.hxx
// ./opencascade/Units.hxx
// ./opencascade/Units_TokensSequence.hxx
// ./opencascade/Units_Lexicon.hxx
// ./opencascade/Units_Dimensions.hxx
// ./opencascade/Units_Quantity.hxx

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
    register_template_NCollection_Sequence<opencascade::handle<Units_Token> >(m,"Units_TksSequence");
    register_template_NCollection_Sequence<opencascade::handle<Units_Unit> >(m,"Units_UtsSequence");
    register_template_NCollection_Sequence<opencascade::handle<Units_Quantity> >(m,"Units_QtsSequence");


// exceptions
register_occ_exception<Units_NoSuchType>(m, "Units_NoSuchType");
register_occ_exception<Units_NoSuchUnit>(m, "Units_NoSuchUnit");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
