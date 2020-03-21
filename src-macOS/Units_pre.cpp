
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_Units_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Units", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<Units_Token> >(m,"Units_TksSequence");
    preregister_template_NCollection_Sequence<opencascade::handle<Units_Unit> >(m,"Units_UtsSequence");
    preregister_template_NCollection_Sequence<opencascade::handle<Units_Quantity> >(m,"Units_QtsSequence");

// classes forward declarations only
    py::class_<Units , shared_ptr<Units> >(m,"Units",R"#(This package provides all the facilities to create and question a dictionary of units, and also to manipulate measurements which are real values with units.)#");
    py::class_<Units_Dimensions ,opencascade::handle<Units_Dimensions> , Standard_Transient>(m,"Units_Dimensions",R"#(This class includes all the methods to create and manipulate the dimensions of the physical quantities.This class includes all the methods to create and manipulate the dimensions of the physical quantities.This class includes all the methods to create and manipulate the dimensions of the physical quantities.)#");
    py::class_<Units_Explorer , shared_ptr<Units_Explorer> >(m,"Units_Explorer",R"#(This class provides all the services to explore UnitsSystem or UnitsDictionary.)#");
    py::class_<Units_Lexicon ,opencascade::handle<Units_Lexicon> , Standard_Transient>(m,"Units_Lexicon",R"#(This class defines a lexicon useful to analyse and recognize the different key words included in a sentence. The lexicon is stored in a sequence of tokens.This class defines a lexicon useful to analyse and recognize the different key words included in a sentence. The lexicon is stored in a sequence of tokens.This class defines a lexicon useful to analyse and recognize the different key words included in a sentence. The lexicon is stored in a sequence of tokens.)#");
    py::class_<Units_Measurement , shared_ptr<Units_Measurement> >(m,"Units_Measurement",R"#(This class defines a measurement which is the association of a real value and a unit.)#");
    py::class_<Units_QuantitiesSequence ,opencascade::handle<Units_QuantitiesSequence> , Units_QtsSequence, Standard_Transient>(m,"Units_QuantitiesSequence",R"#()#");
    py::class_<Units_Quantity ,opencascade::handle<Units_Quantity> , Standard_Transient>(m,"Units_Quantity",R"#(This class stores in its field all the possible units of all the unit systems for a given physical quantity. Each unit's value is expressed in the S.I. unit system.This class stores in its field all the possible units of all the unit systems for a given physical quantity. Each unit's value is expressed in the S.I. unit system.This class stores in its field all the possible units of all the unit systems for a given physical quantity. Each unit's value is expressed in the S.I. unit system.)#");
    py::class_<Units_Sentence , shared_ptr<Units_Sentence> >(m,"Units_Sentence",R"#(This class describes all the methods to create and compute an expression contained in a string.)#");
    py::class_<Units_Token ,opencascade::handle<Units_Token> , Standard_Transient>(m,"Units_Token",R"#(This class defines an elementary word contained in a Sentence object.This class defines an elementary word contained in a Sentence object.This class defines an elementary word contained in a Sentence object.)#");
    py::class_<Units_TokensSequence ,opencascade::handle<Units_TokensSequence> , Units_TksSequence, Standard_Transient>(m,"Units_TokensSequence",R"#()#");
    py::class_<Units_Unit ,opencascade::handle<Units_Unit> , Standard_Transient>(m,"Units_Unit",R"#(This class defines an elementary word contained in a physical quantity.This class defines an elementary word contained in a physical quantity.This class defines an elementary word contained in a physical quantity.)#");
    py::class_<Units_UnitsDictionary ,opencascade::handle<Units_UnitsDictionary> , Standard_Transient>(m,"Units_UnitsDictionary",R"#(This class creates a dictionary of all the units you want to know.This class creates a dictionary of all the units you want to know.This class creates a dictionary of all the units you want to know.)#");
    py::class_<Units_UnitsSequence ,opencascade::handle<Units_UnitsSequence> , Units_UtsSequence, Standard_Transient>(m,"Units_UnitsSequence",R"#()#");
    py::class_<Units_UnitsSystem ,opencascade::handle<Units_UnitsSystem> , Standard_Transient>(m,"Units_UnitsSystem",R"#(This class allows the user to define his own system of units.This class allows the user to define his own system of units.This class allows the user to define his own system of units.)#");
    py::class_<Units_MathSentence , shared_ptr<Units_MathSentence> , Units_Sentence>(m,"Units_MathSentence",R"#(This class defines all the methods to create and compute an algebraic formula.)#");
    py::class_<Units_ShiftedToken ,opencascade::handle<Units_ShiftedToken> , Units_Token>(m,"Units_ShiftedToken",R"#(The ShiftedToken class inherits from Token and describes tokens which have a gap in addition of the multiplicative factor. This kind of token allows the description of linear functions which do not pass through the origin, of the form :The ShiftedToken class inherits from Token and describes tokens which have a gap in addition of the multiplicative factor. This kind of token allows the description of linear functions which do not pass through the origin, of the form :The ShiftedToken class inherits from Token and describes tokens which have a gap in addition of the multiplicative factor. This kind of token allows the description of linear functions which do not pass through the origin, of the form :)#");
    py::class_<Units_ShiftedUnit ,opencascade::handle<Units_ShiftedUnit> , Units_Unit>(m,"Units_ShiftedUnit",R"#(This class is useful to describe units with a shifted origin in relation to another unit. A well known example is the Celsius degrees in relation to Kelvin degrees. The shift of the Celsius origin is 273.15 Kelvin degrees.This class is useful to describe units with a shifted origin in relation to another unit. A well known example is the Celsius degrees in relation to Kelvin degrees. The shift of the Celsius origin is 273.15 Kelvin degrees.This class is useful to describe units with a shifted origin in relation to another unit. A well known example is the Celsius degrees in relation to Kelvin degrees. The shift of the Celsius origin is 273.15 Kelvin degrees.)#");
    py::class_<Units_UnitSentence , shared_ptr<Units_UnitSentence> , Units_Sentence>(m,"Units_UnitSentence",R"#(This class describes all the facilities to manipulate and compute units contained in a string expression.)#");
    py::class_<Units_UnitsLexicon ,opencascade::handle<Units_UnitsLexicon> , Units_Lexicon>(m,"Units_UnitsLexicon",R"#(This class defines a lexicon useful to analyse and recognize the different key words included in a sentence. The lexicon is stored in a sequence of tokens.This class defines a lexicon useful to analyse and recognize the different key words included in a sentence. The lexicon is stored in a sequence of tokens.This class defines a lexicon useful to analyse and recognize the different key words included in a sentence. The lexicon is stored in a sequence of tokens.)#");

};

// user-defined post-inclusion per module

// user-defined post
