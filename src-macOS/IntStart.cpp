
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>

// module includes
#include <IntStart_SITopolTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntStart(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntStart"));


//Python trampoline classes
    class Py_IntStart_SITopolTool : public IntStart_SITopolTool{
    public:
        using IntStart_SITopolTool::IntStart_SITopolTool;


        // public pure virtual
        TopAbs_State Classify(const gp_Pnt2d & P,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(TopAbs_State,IntStart_SITopolTool,Classify,P,Tol) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<IntStart_SITopolTool ,opencascade::handle<IntStart_SITopolTool>,Py_IntStart_SITopolTool , Standard_Transient>>(m.attr("IntStart_SITopolTool"))
    // constructors
    // custom constructors
    // methods
        .def("Classify",
             (TopAbs_State (IntStart_SITopolTool::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<TopAbs_State (IntStart_SITopolTool::*)( const gp_Pnt2d & , const Standard_Real ) >(&IntStart_SITopolTool::Classify),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntStart_SITopolTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntStart_SITopolTool::*)() const>(&IntStart_SITopolTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntStart_SITopolTool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntStart_SITopolTool.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
