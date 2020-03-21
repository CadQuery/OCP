
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_DomainError.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Elips2d.hxx>

// module includes
#include <GccInt_BCirc.hxx>
#include <GccInt_BElips.hxx>
#include <GccInt_BHyper.hxx>
#include <GccInt_Bisec.hxx>
#include <GccInt_BLine.hxx>
#include <GccInt_BParab.hxx>
#include <GccInt_BPoint.hxx>
#include <GccInt_IType.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GccInt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GccInt"));


//Python trampoline classes
    class Py_GccInt_Bisec : public GccInt_Bisec{
    public:
        using GccInt_Bisec::GccInt_Bisec;


        // public pure virtual
        GccInt_IType ArcType() const  override { PYBIND11_OVERLOAD_PURE(GccInt_IType,GccInt_Bisec,ArcType,) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<GccInt_Bisec ,opencascade::handle<GccInt_Bisec>,Py_GccInt_Bisec , Standard_Transient>>(m.attr("GccInt_Bisec"))
    // constructors
    // custom constructors
    // methods
        .def("ArcType",
             (GccInt_IType (GccInt_Bisec::*)() const) static_cast<GccInt_IType (GccInt_Bisec::*)() const>(&GccInt_Bisec::ArcType),
             R"#(Returns the type of bisecting object (line, circle, parabola, hyperbola, ellipse, point).)#" )
        .def("Point",
             (gp_Pnt2d (GccInt_Bisec::*)() const) static_cast<gp_Pnt2d (GccInt_Bisec::*)() const>(&GccInt_Bisec::Point),
             R"#(Returns the bisecting line when ArcType returns Pnt. An exception DomainError is raised if ArcType is not a Pnt.)#" )
        .def("Line",
             (gp_Lin2d (GccInt_Bisec::*)() const) static_cast<gp_Lin2d (GccInt_Bisec::*)() const>(&GccInt_Bisec::Line),
             R"#(Returns the bisecting line when ArcType returns Lin. An exception DomainError is raised if ArcType is not a Lin.)#" )
        .def("Circle",
             (gp_Circ2d (GccInt_Bisec::*)() const) static_cast<gp_Circ2d (GccInt_Bisec::*)() const>(&GccInt_Bisec::Circle),
             R"#(Returns the bisecting line when ArcType returns Cir. An exception DomainError is raised if ArcType is not a Cir.)#" )
        .def("Hyperbola",
             (gp_Hypr2d (GccInt_Bisec::*)() const) static_cast<gp_Hypr2d (GccInt_Bisec::*)() const>(&GccInt_Bisec::Hyperbola),
             R"#(Returns the bisecting line when ArcType returns Hpr. An exception DomainError is raised if ArcType is not a Hpr.)#" )
        .def("Parabola",
             (gp_Parab2d (GccInt_Bisec::*)() const) static_cast<gp_Parab2d (GccInt_Bisec::*)() const>(&GccInt_Bisec::Parabola),
             R"#(Returns the bisecting line when ArcType returns Par. An exception DomainError is raised if ArcType is not a Par.)#" )
        .def("Ellipse",
             (gp_Elips2d (GccInt_Bisec::*)() const) static_cast<gp_Elips2d (GccInt_Bisec::*)() const>(&GccInt_Bisec::Ellipse),
             R"#(Returns the bisecting line when ArcType returns Ell. An exception DomainError is raised if ArcType is not an Ell.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GccInt_Bisec::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GccInt_Bisec::*)() const>(&GccInt_Bisec::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GccInt_Bisec::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GccInt_Bisec::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccInt_BCirc ,opencascade::handle<GccInt_BCirc> , GccInt_Bisec>>(m.attr("GccInt_BCirc"))
    // constructors
        .def(py::init< const gp_Circ2d & >()  , py::arg("Circ") )
    // custom constructors
    // methods
        .def("Circle",
             (gp_Circ2d (GccInt_BCirc::*)() const) static_cast<gp_Circ2d (GccInt_BCirc::*)() const>(&GccInt_BCirc::Circle),
             R"#(Returns a 2D circle which is the geometry of this bisecting curve.)#" )
        .def("ArcType",
             (GccInt_IType (GccInt_BCirc::*)() const) static_cast<GccInt_IType (GccInt_BCirc::*)() const>(&GccInt_BCirc::ArcType),
             R"#(Returns GccInt_Cir, which is the type of any GccInt_BCirc bisecting curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GccInt_BCirc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GccInt_BCirc::*)() const>(&GccInt_BCirc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GccInt_BCirc::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GccInt_BCirc::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccInt_BElips ,opencascade::handle<GccInt_BElips> , GccInt_Bisec>>(m.attr("GccInt_BElips"))
    // constructors
        .def(py::init< const gp_Elips2d & >()  , py::arg("Ellipse") )
    // custom constructors
    // methods
        .def("Ellipse",
             (gp_Elips2d (GccInt_BElips::*)() const) static_cast<gp_Elips2d (GccInt_BElips::*)() const>(&GccInt_BElips::Ellipse),
             R"#(Returns a 2D ellipse which is the geometry of this bisecting curve.)#" )
        .def("ArcType",
             (GccInt_IType (GccInt_BElips::*)() const) static_cast<GccInt_IType (GccInt_BElips::*)() const>(&GccInt_BElips::ArcType),
             R"#(Returns GccInt_Ell, which is the type of any GccInt_BElips bisecting curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GccInt_BElips::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GccInt_BElips::*)() const>(&GccInt_BElips::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GccInt_BElips::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GccInt_BElips::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccInt_BHyper ,opencascade::handle<GccInt_BHyper> , GccInt_Bisec>>(m.attr("GccInt_BHyper"))
    // constructors
        .def(py::init< const gp_Hypr2d & >()  , py::arg("Hyper") )
    // custom constructors
    // methods
        .def("Hyperbola",
             (gp_Hypr2d (GccInt_BHyper::*)() const) static_cast<gp_Hypr2d (GccInt_BHyper::*)() const>(&GccInt_BHyper::Hyperbola),
             R"#(Returns a 2D hyperbola which is the geometry of this bisecting curve.)#" )
        .def("ArcType",
             (GccInt_IType (GccInt_BHyper::*)() const) static_cast<GccInt_IType (GccInt_BHyper::*)() const>(&GccInt_BHyper::ArcType),
             R"#(Returns GccInt_Hpr, which is the type of any GccInt_BHyper bisecting curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GccInt_BHyper::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GccInt_BHyper::*)() const>(&GccInt_BHyper::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GccInt_BHyper::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GccInt_BHyper::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccInt_BLine ,opencascade::handle<GccInt_BLine> , GccInt_Bisec>>(m.attr("GccInt_BLine"))
    // constructors
        .def(py::init< const gp_Lin2d & >()  , py::arg("Line") )
    // custom constructors
    // methods
        .def("Line",
             (gp_Lin2d (GccInt_BLine::*)() const) static_cast<gp_Lin2d (GccInt_BLine::*)() const>(&GccInt_BLine::Line),
             R"#(Returns a 2D line which is the geometry of this bisecting line.)#" )
        .def("ArcType",
             (GccInt_IType (GccInt_BLine::*)() const) static_cast<GccInt_IType (GccInt_BLine::*)() const>(&GccInt_BLine::ArcType),
             R"#(Returns GccInt_Lin, which is the type of any GccInt_BLine bisecting line.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GccInt_BLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GccInt_BLine::*)() const>(&GccInt_BLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GccInt_BLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GccInt_BLine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccInt_BParab ,opencascade::handle<GccInt_BParab> , GccInt_Bisec>>(m.attr("GccInt_BParab"))
    // constructors
        .def(py::init< const gp_Parab2d & >()  , py::arg("Parab") )
    // custom constructors
    // methods
        .def("Parabola",
             (gp_Parab2d (GccInt_BParab::*)() const) static_cast<gp_Parab2d (GccInt_BParab::*)() const>(&GccInt_BParab::Parabola),
             R"#(Returns a 2D parabola which is the geometry of this bisecting curve.)#" )
        .def("ArcType",
             (GccInt_IType (GccInt_BParab::*)() const) static_cast<GccInt_IType (GccInt_BParab::*)() const>(&GccInt_BParab::ArcType),
             R"#(Returns GccInt_Par, which is the type of any GccInt_BParab bisecting curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GccInt_BParab::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GccInt_BParab::*)() const>(&GccInt_BParab::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GccInt_BParab::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GccInt_BParab::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccInt_BPoint ,opencascade::handle<GccInt_BPoint> , GccInt_Bisec>>(m.attr("GccInt_BPoint"))
    // constructors
        .def(py::init< const gp_Pnt2d & >()  , py::arg("Point") )
    // custom constructors
    // methods
        .def("Point",
             (gp_Pnt2d (GccInt_BPoint::*)() const) static_cast<gp_Pnt2d (GccInt_BPoint::*)() const>(&GccInt_BPoint::Point),
             R"#(Returns a 2D point which is the geometry of this bisecting object.)#" )
        .def("ArcType",
             (GccInt_IType (GccInt_BPoint::*)() const) static_cast<GccInt_IType (GccInt_BPoint::*)() const>(&GccInt_BPoint::ArcType),
             R"#(Returns GccInt_Pnt, which is the type of any GccInt_BPoint bisecting object.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GccInt_BPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GccInt_BPoint::*)() const>(&GccInt_BPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GccInt_BPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GccInt_BPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\GccInt_IType.hxx
// ./opencascade\GccInt_BParab.hxx
// ./opencascade\GccInt_BLine.hxx
// ./opencascade\GccInt_Bisec.hxx
// ./opencascade\GccInt_BCirc.hxx
// ./opencascade\GccInt_BPoint.hxx
// ./opencascade\GccInt_BElips.hxx
// ./opencascade\GccInt_BHyper.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
