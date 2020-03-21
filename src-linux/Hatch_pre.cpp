
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Hatch_Line.hxx>
#include <Hatch_Hatcher.hxx>
#include <Hatch_Hatcher.hxx>

// module includes
#include <Hatch_Hatcher.hxx>
#include <Hatch_Line.hxx>
#include <Hatch_LineForm.hxx>
#include <Hatch_Parameter.hxx>
#include <Hatch_SequenceOfLine.hxx>
#include <Hatch_SequenceOfParameter.hxx>

// template related includes
// ./opencascade/Hatch_SequenceOfLine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Hatch_SequenceOfParameter.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Hatch_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Hatch", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Hatch_LineForm>(m, "Hatch_LineForm",R"#(Form of a trimmed line)#")
        .value("Hatch_XLINE",Hatch_LineForm::Hatch_XLINE)
        .value("Hatch_YLINE",Hatch_LineForm::Hatch_YLINE)
        .value("Hatch_ANYLINE",Hatch_LineForm::Hatch_ANYLINE).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<Hatch_Line>(m,"Hatch_SequenceOfLine");
    preregister_template_NCollection_Sequence<Hatch_Parameter>(m,"Hatch_SequenceOfParameter");

// classes forward declarations only
    py::class_<Hatch_Hatcher , shared_ptr<Hatch_Hatcher> >(m,"Hatch_Hatcher",R"#(The Hatcher is an algorithm to compute cross hatchings in a 2d plane. It is mainly dedicated to display purpose.)#");
    py::class_<Hatch_Line , shared_ptr<Hatch_Line> >(m,"Hatch_Line",R"#(Stores a Line in the Hatcher. Represented by :)#");
    py::class_<Hatch_Parameter , shared_ptr<Hatch_Parameter> >(m,"Hatch_Parameter",R"#(Stores an intersection on a line represented by :)#");

};

// user-defined post-inclusion per module

// user-defined post
