
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_UnitsAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("UnitsAPI", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<UnitsAPI_SystemUnits>(m, "UnitsAPI_SystemUnits",R"#(Identifies unit systems which may be defined as a basis system in the user's session: - UnitsAPI_DEFAULT : default system (this is the SI system) - UnitsAPI_SI : the SI unit system - UnitsAPI_MDTV : the MDTV unit system; it is equivalent to the SI unit system but the length unit and all its derivatives use millimeters instead of meters. Use the function SetLocalSystem to set up one of these unit systems as working environment.)#")
        .value("UnitsAPI_DEFAULT",UnitsAPI_SystemUnits::UnitsAPI_DEFAULT)
        .value("UnitsAPI_SI",UnitsAPI_SystemUnits::UnitsAPI_SI)
        .value("UnitsAPI_MDTV",UnitsAPI_SystemUnits::UnitsAPI_MDTV).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<UnitsAPI ,std::unique_ptr<UnitsAPI>  >(m,"UnitsAPI",R"#(The UnitsAPI global functions are used to convert a value from any unit into another unit. Principles Conversion is executed among three unit systems: - the SI System - the user's Local System - the user's Current System. The SI System is the standard international unit system. It is indicated by SI in the synopses of the UnitsAPI functions. The MDTV System corresponds to the SI international standard but the length unit and all its derivatives use millimeters instead of the meters. Both systems are proposed by Open CASCADE; the SI System is the standard option. By selecting one of these two systems, the user defines his Local System through the SetLocalSystem function. The Local System is indicated by LS in the synopses of the UnitsAPI functions. The user's Local System units can be modified in the working environment. The user defines his Current System by modifying its units through the SetCurrentUnit function. The Current System is indicated by Current in the synopses of the UnitsAPI functions.)#");

// pre-register typdefs
// ./opencascade/UnitsAPI_SystemUnits.hxx
// ./opencascade/UnitsAPI.hxx

};

// user-defined post-inclusion per module

// user-defined post
