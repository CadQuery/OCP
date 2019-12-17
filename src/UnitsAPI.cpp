
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Units_Dimensions.hxx>

// module includes
#include <UnitsAPI.hxx>
#include <UnitsAPI_SystemUnits.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_UnitsAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("UnitsAPI"));


//Python trampoline classes

// classes

    register_default_constructor<UnitsAPI ,std::unique_ptr<UnitsAPI>>(m,"UnitsAPI");

    static_cast<py::class_<UnitsAPI ,std::unique_ptr<UnitsAPI>  >>(m.attr("UnitsAPI"))
        .def_static("CurrentToLS_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::CurrentToLS),
                    R"#(Converts the current unit value to the local system units value. Example: CurrentToLS(1.,"LENGTH") returns 1000. if the current length unit is meter and LocalSystem is MDTV.)#"  , py::arg("aData"),  py::arg("aQuantity"))
        .def_static("CurrentToSI_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::CurrentToSI),
                    R"#(Converts the current unit value to the SI system units value. Example: CurrentToSI(1.,"LENGTH") returns 0.001 if current length unit is millimeter.)#"  , py::arg("aData"),  py::arg("aQuantity"))
        .def_static("CurrentFromLS_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::CurrentFromLS),
                    R"#(Converts the local system units value to the current unit value. Example: CurrentFromLS(1000.,"LENGTH") returns 1. if current length unit is meter and LocalSystem is MDTV.)#"  , py::arg("aData"),  py::arg("aQuantity"))
        .def_static("CurrentFromSI_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::CurrentFromSI),
                    R"#(Converts the SI system units value to the current unit value. Example: CurrentFromSI(0.001,"LENGTH") returns 1 if current length unit is millimeter.)#"  , py::arg("aData"),  py::arg("aQuantity"))
        .def_static("AnyToLS_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::AnyToLS),
                    R"#(Converts the local unit value to the local system units value. Example: AnyToLS(1.,"in.") returns 25.4 if the LocalSystem is MDTV.)#"  , py::arg("aData"),  py::arg("aUnit"))
        .def_static("AnyToLS_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  opencascade::handle<Units_Dimensions> &  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  opencascade::handle<Units_Dimensions> &  ) >(&UnitsAPI::AnyToLS),
                    R"#(Converts the local unit value to the local system units value. and gives the associated dimension of the unit)#"  , py::arg("aData"),  py::arg("aUnit"),  py::arg("aDim"))
        .def_static("AnyToSI_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::AnyToSI),
                    R"#(Converts the local unit value to the SI system units value. Example: AnyToSI(1.,"in.") returns 0.0254)#"  , py::arg("aData"),  py::arg("aUnit"))
        .def_static("AnyToSI_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  opencascade::handle<Units_Dimensions> &  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  opencascade::handle<Units_Dimensions> &  ) >(&UnitsAPI::AnyToSI),
                    R"#(Converts the local unit value to the SI system units value. and gives the associated dimension of the unit)#"  , py::arg("aData"),  py::arg("aUnit"),  py::arg("aDim"))
        .def_static("AnyFromLS_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::AnyFromLS),
                    R"#(Converts the local system units value to the local unit value. Example: AnyFromLS(25.4,"in.") returns 1. if the LocalSystem is MDTV. Note: aUnit is also used to identify the type of physical quantity to convert.)#"  , py::arg("aData"),  py::arg("aUnit"))
        .def_static("AnyFromSI_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::AnyFromSI),
                    R"#(Converts the SI system units value to the local unit value. Example: AnyFromSI(0.0254,"in.") returns 0.001 Note: aUnit is also used to identify the type of physical quantity to convert.)#"  , py::arg("aData"),  py::arg("aUnit"))
        .def_static("CurrentToAny_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  const Standard_CString  ) >(&UnitsAPI::CurrentToAny),
                    R"#(Converts the aData value expressed in the current unit for the working environment, as defined for the physical quantity aQuantity by the last call to the SetCurrentUnit function, into the unit aUnit.)#"  , py::arg("aData"),  py::arg("aQuantity"),  py::arg("aUnit"))
        .def_static("CurrentFromAny_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  const Standard_CString  ) >(&UnitsAPI::CurrentFromAny),
                    R"#(Converts the aData value expressed in the unit aUnit, into the current unit for the working environment, as defined for the physical quantity aQuantity by the last call to the SetCurrentUnit function.)#"  , py::arg("aData"),  py::arg("aQuantity"),  py::arg("aUnit"))
        .def_static("AnyToAny_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString ,  const Standard_CString  ) >(&UnitsAPI::AnyToAny),
                    R"#(Converts the local unit value to another local unit value. Example: AnyToAny(0.0254,"in.","millimeter") returns 1. ;)#"  , py::arg("aData"),  py::arg("aUnit1"),  py::arg("aUnit2"))
        .def_static("LSToSI_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::LSToSI),
                    R"#(Converts the local system units value to the SI system unit value. Example: LSToSI(1.,"LENGTH") returns 0.001 if the local system length unit is millimeter.)#"  , py::arg("aData"),  py::arg("aQuantity"))
        .def_static("SIToLS_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_CString  ) >(&UnitsAPI::SIToLS),
                    R"#(Converts the SI system unit value to the local system units value. Example: SIToLS(1.,"LENGTH") returns 1000. if the local system length unit is millimeter.)#"  , py::arg("aData"),  py::arg("aQuantity"))
        .def_static("SetLocalSystem_s",
                    (void (*)( const UnitsAPI_SystemUnits  ) ) static_cast<void (*)( const UnitsAPI_SystemUnits  ) >(&UnitsAPI::SetLocalSystem),
                    R"#(Sets the local system units. Example: SetLocalSystem(UnitsAPI_MDTV))#"  , py::arg("aSystemUnit")=static_cast<const UnitsAPI_SystemUnits>(UnitsAPI_SI))
        .def_static("LocalSystem_s",
                    (UnitsAPI_SystemUnits (*)() ) static_cast<UnitsAPI_SystemUnits (*)() >(&UnitsAPI::LocalSystem),
                    R"#(Returns the current local system units.)#" )
        .def_static("SetCurrentUnit_s",
                    (void (*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<void (*)( const Standard_CString ,  const Standard_CString  ) >(&UnitsAPI::SetCurrentUnit),
                    R"#(Sets the current unit dimension <aUnit> to the unit quantity <aQuantity>. Example: SetCurrentUnit("LENGTH","millimeter"))#"  , py::arg("aQuantity"),  py::arg("aUnit"))
        .def_static("CurrentUnit_s",
                    (Standard_CString (*)( const Standard_CString  ) ) static_cast<Standard_CString (*)( const Standard_CString  ) >(&UnitsAPI::CurrentUnit),
                    R"#(Returns the current unit dimension <aUnit> from the unit quantity <aQuantity>.)#"  , py::arg("aQuantity"))
        .def_static("Save_s",
                    (void (*)() ) static_cast<void (*)() >(&UnitsAPI::Save),
                    R"#(saves the units in the file .CurrentUnits of the directory pointed by the CSF_CurrentUnitsUserDefaults environment variable.)#" )
        .def_static("Reload_s",
                    (void (*)() ) static_cast<void (*)() >(&UnitsAPI::Reload),
                    R"#(None)#" )
        .def_static("Dimensions_s",
                    (opencascade::handle<Units_Dimensions> (*)( const Standard_CString  ) ) static_cast<opencascade::handle<Units_Dimensions> (*)( const Standard_CString  ) >(&UnitsAPI::Dimensions),
                    R"#(return the dimension associated to the quantity)#"  , py::arg("aQuantity"))
        .def_static("DimensionLess_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionLess),
                    R"#(None)#" )
        .def_static("DimensionMass_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionMass),
                    R"#(None)#" )
        .def_static("DimensionLength_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionLength),
                    R"#(None)#" )
        .def_static("DimensionTime_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionTime),
                    R"#(None)#" )
        .def_static("DimensionElectricCurrent_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionElectricCurrent),
                    R"#(None)#" )
        .def_static("DimensionThermodynamicTemperature_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionThermodynamicTemperature),
                    R"#(None)#" )
        .def_static("DimensionAmountOfSubstance_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionAmountOfSubstance),
                    R"#(None)#" )
        .def_static("DimensionLuminousIntensity_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionLuminousIntensity),
                    R"#(None)#" )
        .def_static("DimensionPlaneAngle_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionPlaneAngle),
                    R"#(None)#" )
        .def_static("DimensionSolidAngle_s",
                    (opencascade::handle<Units_Dimensions> (*)() ) static_cast<opencascade::handle<Units_Dimensions> (*)() >(&UnitsAPI::DimensionSolidAngle),
                    R"#(Returns the basic dimensions.)#" )
        .def_static("Check_s",
                    (Standard_Boolean (*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  const Standard_CString  ) >(&UnitsAPI::Check),
                    R"#(Checks the coherence between the quantity <aQuantity> and the unit <aUnits> in the current system and returns FALSE when it's WRONG.)#"  , py::arg("aQuantity"),  py::arg("aUnit"))
;

// functions
// ./opencascade/UnitsAPI_SystemUnits.hxx
// ./opencascade/UnitsAPI.hxx

// operators

// register typdefs
// ./opencascade/UnitsAPI_SystemUnits.hxx
// ./opencascade/UnitsAPI.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
