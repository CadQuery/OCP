
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <GeomTools_UndefinedTypeHandler.hxx>
#include <GeomTools_UndefinedTypeHandler.hxx>
#include <GeomTools_SurfaceSet.hxx>
#include <GeomTools_CurveSet.hxx>
#include <GeomTools_Curve2dSet.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom2d_Curve.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <GeomTools.hxx>
#include <GeomTools_Curve2dSet.hxx>
#include <GeomTools_CurveSet.hxx>
#include <GeomTools_SurfaceSet.hxx>
#include <GeomTools_UndefinedTypeHandler.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomTools"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomTools , shared_ptr<GeomTools>>(m,"GeomTools");

    static_cast<py::class_<GeomTools , shared_ptr<GeomTools> >>(m.attr("GeomTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomTools_Curve2dSet , shared_ptr<GeomTools_Curve2dSet> >>(m.attr("GeomTools_Curve2dSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomTools_CurveSet , shared_ptr<GeomTools_CurveSet> >>(m.attr("GeomTools_CurveSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomTools_SurfaceSet , shared_ptr<GeomTools_SurfaceSet> >>(m.attr("GeomTools_SurfaceSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomTools_UndefinedTypeHandler ,opencascade::handle<GeomTools_UndefinedTypeHandler> , Standard_Transient>>(m.attr("GeomTools_UndefinedTypeHandler"))
    // constructors
    // custom constructors
    // methods
        .def("PrintCurve",
             (void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Curve> & , std::ostream & , const Standard_Boolean ) const) static_cast<void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Curve> & , std::ostream & , const Standard_Boolean ) const>(&GeomTools_UndefinedTypeHandler::PrintCurve),
             R"#(None)#"  , py::arg("C"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadCurve",
             (Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer , std::istream & , opencascade::handle<Geom_Curve> & ) const) static_cast<Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer , std::istream & , opencascade::handle<Geom_Curve> & ) const>(&GeomTools_UndefinedTypeHandler::ReadCurve),
             R"#(None)#"  , py::arg("ctype"),  py::arg("IS"),  py::arg("C"))
        .def("PrintCurve2d",
             (void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom2d_Curve> & , std::ostream & , const Standard_Boolean ) const) static_cast<void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom2d_Curve> & , std::ostream & , const Standard_Boolean ) const>(&GeomTools_UndefinedTypeHandler::PrintCurve2d),
             R"#(None)#"  , py::arg("C"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadCurve2d",
             (Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer , std::istream & , opencascade::handle<Geom2d_Curve> & ) const) static_cast<Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer , std::istream & , opencascade::handle<Geom2d_Curve> & ) const>(&GeomTools_UndefinedTypeHandler::ReadCurve2d),
             R"#(None)#"  , py::arg("ctype"),  py::arg("IS"),  py::arg("C"))
        .def("PrintSurface",
             (void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Surface> & , std::ostream & , const Standard_Boolean ) const) static_cast<void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Surface> & , std::ostream & , const Standard_Boolean ) const>(&GeomTools_UndefinedTypeHandler::PrintSurface),
             R"#(None)#"  , py::arg("S"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadSurface",
             (Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer , std::istream & , opencascade::handle<Geom_Surface> & ) const) static_cast<Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer , std::istream & , opencascade::handle<Geom_Surface> & ) const>(&GeomTools_UndefinedTypeHandler::ReadSurface),
             R"#(None)#"  , py::arg("ctype"),  py::arg("IS"),  py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomTools_UndefinedTypeHandler::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomTools_UndefinedTypeHandler::*)() const>(&GeomTools_UndefinedTypeHandler::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomTools_UndefinedTypeHandler::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomTools.hxx
// ./opencascade/GeomTools_Curve2dSet.hxx
// ./opencascade/GeomTools_CurveSet.hxx
// ./opencascade/GeomTools_UndefinedTypeHandler.hxx
// ./opencascade/GeomTools_SurfaceSet.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
