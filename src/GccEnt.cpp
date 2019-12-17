
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <GccEnt_QualifiedLin.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_QualifiedCirc.hxx>

// module includes
#include <GccEnt.hxx>
#include <GccEnt_Array1OfPosition.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_Position.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>

// template related includes
// ./opencascade/GccEnt_Array1OfPosition.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GccEnt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GccEnt"));


//Python trampoline classes

// classes


    static_cast<py::class_<GccEnt_QualifiedCirc ,std::unique_ptr<GccEnt_QualifiedCirc>  >>(m.attr("GccEnt_QualifiedCirc"))
        .def(py::init< const gp_Circ2d &,const GccEnt_Position >()  , py::arg("Qualified"),  py::arg("Qualifier") )
        .def("Qualified",
             (gp_Circ2d (GccEnt_QualifiedCirc::*)() const) static_cast<gp_Circ2d (GccEnt_QualifiedCirc::*)() const>(&GccEnt_QualifiedCirc::Qualified),
             R"#(Returns a 2D circle to which the qualifier is assigned.)#" )
        .def("Qualifier",
             (GccEnt_Position (GccEnt_QualifiedCirc::*)() const) static_cast<GccEnt_Position (GccEnt_QualifiedCirc::*)() const>(&GccEnt_QualifiedCirc::Qualifier),
             R"#(Returns - the qualifier of this qualified circle, if it is enclosing, enclosed or outside, or - GccEnt_noqualifier if it is unqualified.)#" )
        .def("IsUnqualified",
             (Standard_Boolean (GccEnt_QualifiedCirc::*)() const) static_cast<Standard_Boolean (GccEnt_QualifiedCirc::*)() const>(&GccEnt_QualifiedCirc::IsUnqualified),
             R"#(Returns true if the Circ2d is Unqualified and false in the other cases.)#" )
        .def("IsEnclosing",
             (Standard_Boolean (GccEnt_QualifiedCirc::*)() const) static_cast<Standard_Boolean (GccEnt_QualifiedCirc::*)() const>(&GccEnt_QualifiedCirc::IsEnclosing),
             R"#(Returns true if the solution computed by a construction algorithm using this qualified circle encloses the circle.)#" )
        .def("IsEnclosed",
             (Standard_Boolean (GccEnt_QualifiedCirc::*)() const) static_cast<Standard_Boolean (GccEnt_QualifiedCirc::*)() const>(&GccEnt_QualifiedCirc::IsEnclosed),
             R"#(Returns true if the solution computed by a construction algorithm using this qualified circle is enclosed by the circle.)#" )
        .def("IsOutside",
             (Standard_Boolean (GccEnt_QualifiedCirc::*)() const) static_cast<Standard_Boolean (GccEnt_QualifiedCirc::*)() const>(&GccEnt_QualifiedCirc::IsOutside),
             R"#(Returns true if both the solution computed by a construction algorithm using this qualified circle and the circle are external to one another.)#" )
;


    static_cast<py::class_<GccEnt_QualifiedLin ,std::unique_ptr<GccEnt_QualifiedLin>  >>(m.attr("GccEnt_QualifiedLin"))
        .def(py::init< const gp_Lin2d &,const GccEnt_Position >()  , py::arg("Qualified"),  py::arg("Qualifier") )
        .def("Qualified",
             (gp_Lin2d (GccEnt_QualifiedLin::*)() const) static_cast<gp_Lin2d (GccEnt_QualifiedLin::*)() const>(&GccEnt_QualifiedLin::Qualified),
             R"#(Returns a 2D line to which the qualifier is assigned.)#" )
        .def("Qualifier",
             (GccEnt_Position (GccEnt_QualifiedLin::*)() const) static_cast<GccEnt_Position (GccEnt_QualifiedLin::*)() const>(&GccEnt_QualifiedLin::Qualifier),
             R"#(Returns the qualifier of this qualified line, if it is "enclosed" or "outside", or - GccEnt_noqualifier if it is unqualified.)#" )
        .def("IsUnqualified",
             (Standard_Boolean (GccEnt_QualifiedLin::*)() const) static_cast<Standard_Boolean (GccEnt_QualifiedLin::*)() const>(&GccEnt_QualifiedLin::IsUnqualified),
             R"#(Returns true if the solution is unqualified and false in the other cases.)#" )
        .def("IsEnclosed",
             (Standard_Boolean (GccEnt_QualifiedLin::*)() const) static_cast<Standard_Boolean (GccEnt_QualifiedLin::*)() const>(&GccEnt_QualifiedLin::IsEnclosed),
             R"#(Returns true if the solution is Enclosed in the Lin2d and false in the other cases.)#" )
        .def("IsOutside",
             (Standard_Boolean (GccEnt_QualifiedLin::*)() const) static_cast<Standard_Boolean (GccEnt_QualifiedLin::*)() const>(&GccEnt_QualifiedLin::IsOutside),
             R"#(Returns true if the solution is Outside the Lin2d and false in the other cases.)#" )
;

    register_default_constructor<GccEnt ,std::unique_ptr<GccEnt>>(m,"GccEnt");

    static_cast<py::class_<GccEnt ,std::unique_ptr<GccEnt>  >>(m.attr("GccEnt"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const GccEnt_Position ,  std::ostream &  ) ) static_cast<Standard_OStream & (*)( const GccEnt_Position ,  std::ostream &  ) >(&GccEnt::Print),
                    R"#(Prints the name of Position type as a String on the Stream.)#"  , py::arg("thePosition"),  py::arg("theStream"))
        .def_static("PositionToString_s",
                    (Standard_CString (*)( GccEnt_Position  ) ) static_cast<Standard_CString (*)( GccEnt_Position  ) >(&GccEnt::PositionToString),
                    R"#(Returns the string name for a given position.)#"  , py::arg("thePosition"))
        .def_static("PositionFromString_s",
                    (GccEnt_Position (*)( Standard_CString  ) ) static_cast<GccEnt_Position (*)( Standard_CString  ) >(&GccEnt::PositionFromString),
                    R"#(Returns the position from the given string identifier (using case-insensitive comparison).)#"  , py::arg("thePositionString"))
        .def_static("PositionFromString_s",
                    (Standard_Boolean (*)( Standard_CString ,  GccEnt_Position &  ) ) static_cast<Standard_Boolean (*)( Standard_CString ,  GccEnt_Position &  ) >(&GccEnt::PositionFromString),
                    R"#(Determines the position from the given string identifier (using case-insensitive comparison).)#"  , py::arg("thePositionString"),  py::arg("thePosition"))
        .def_static("Unqualified_s",
                    (GccEnt_QualifiedLin (*)( const gp_Lin2d &  ) ) static_cast<GccEnt_QualifiedLin (*)( const gp_Lin2d &  ) >(&GccEnt::Unqualified),
                    R"#(Constructs a qualified line, so that the relative position to the circle or line of the solution computed by a construction algorithm using the qualified circle or line is not qualified, i.e. all solutions apply.)#"  , py::arg("Obj"))
        .def_static("Unqualified_s",
                    (GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) ) static_cast<GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) >(&GccEnt::Unqualified),
                    R"#(Constructs a qualified circle so that the relative position to the circle or line of the solution computed by a construction algorithm using the qualified circle or line is not qualified, i.e. all solutions apply.)#"  , py::arg("Obj"))
        .def_static("Enclosing_s",
                    (GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) ) static_cast<GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) >(&GccEnt::Enclosing),
                    R"#(Constructs such a qualified circle that the solution computed by a construction algorithm using the qualified circle encloses the circle.)#"  , py::arg("Obj"))
        .def_static("Enclosed_s",
                    (GccEnt_QualifiedLin (*)( const gp_Lin2d &  ) ) static_cast<GccEnt_QualifiedLin (*)( const gp_Lin2d &  ) >(&GccEnt::Enclosed),
                    R"#(Constructs a qualified line, so that the solution computed by a construction algorithm using the qualified circle or line is enclosed by the circle or line.)#"  , py::arg("Obj"))
        .def_static("Enclosed_s",
                    (GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) ) static_cast<GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) >(&GccEnt::Enclosed),
                    R"#(Constructs a qualified circle so that the solution computed by a construction algorithm using the qualified circle or line is enclosed by the circle or line.)#"  , py::arg("Obj"))
        .def_static("Outside_s",
                    (GccEnt_QualifiedLin (*)( const gp_Lin2d &  ) ) static_cast<GccEnt_QualifiedLin (*)( const gp_Lin2d &  ) >(&GccEnt::Outside),
                    R"#(Constructs a qualified line, so that the solution computed by a construction algorithm using the qualified circle or line and the circle or line are external to one another.)#"  , py::arg("Obj"))
        .def_static("Outside_s",
                    (GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) ) static_cast<GccEnt_QualifiedCirc (*)( const gp_Circ2d &  ) >(&GccEnt::Outside),
                    R"#(Constructs a qualified circle so that the solution computed by a construction algorithm using the qualified circle or line and the circle or line are external to one another.)#"  , py::arg("Obj"))
;

// functions
// ./opencascade/GccEnt_QualifiedCirc.hxx
// ./opencascade/GccEnt_BadQualifier.hxx
// ./opencascade/GccEnt_Array1OfPosition.hxx
// ./opencascade/GccEnt_Position.hxx
// ./opencascade/GccEnt_QualifiedLin.hxx
// ./opencascade/GccEnt.hxx

// operators

// register typdefs
// ./opencascade/GccEnt_QualifiedCirc.hxx
// ./opencascade/GccEnt_BadQualifier.hxx
// ./opencascade/GccEnt_Array1OfPosition.hxx
    register_template_NCollection_Array1<GccEnt_Position>(m,"GccEnt_Array1OfPosition");  
// ./opencascade/GccEnt_Position.hxx
// ./opencascade/GccEnt_QualifiedLin.hxx
// ./opencascade/GccEnt.hxx


// exceptions
register_occ_exception<GccEnt_BadQualifier>(m, "GccEnt_BadQualifier");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
