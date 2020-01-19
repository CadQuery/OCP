
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
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom2d_Curve.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom_Surface.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom_Curve.hxx>

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

    register_default_constructor<GeomTools , shared_ptr<GeomTools>>(m,"GeomTools");

    static_cast<py::class_<GeomTools , shared_ptr<GeomTools>  >>(m.attr("GeomTools"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Dump_s",
                    (void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream &  ) >(&GeomTools::Dump),
                    R"#(A set of Curves from Geom2d. Dumps the surface on the stream.)#"  , py::arg("S"),  py::arg("OS"))
        .def_static("Write_s",
                    (void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream &  ) >(&GeomTools::Write),
                    R"#(Writes the surface on the stream.)#"  , py::arg("S"),  py::arg("OS"))
        .def_static("Read_s",
                    (void (*)( opencascade::handle<Geom_Surface> & ,  std::istream &  ) ) static_cast<void (*)( opencascade::handle<Geom_Surface> & ,  std::istream &  ) >(&GeomTools::Read),
                    R"#(Reads the surface from the stream.)#"  , py::arg("S"),  py::arg("IS"))
        .def_static("Dump_s",
                    (void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream &  ) >(&GeomTools::Dump),
                    R"#(Dumps the Curve on the stream.)#"  , py::arg("C"),  py::arg("OS"))
        .def_static("Write_s",
                    (void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream &  ) >(&GeomTools::Write),
                    R"#(Writes the Curve on the stream.)#"  , py::arg("C"),  py::arg("OS"))
        .def_static("Read_s",
                    (void (*)( opencascade::handle<Geom_Curve> & ,  std::istream &  ) ) static_cast<void (*)( opencascade::handle<Geom_Curve> & ,  std::istream &  ) >(&GeomTools::Read),
                    R"#(Reads the Curve from the stream.)#"  , py::arg("C"),  py::arg("IS"))
        .def_static("Dump_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream &  ) >(&GeomTools::Dump),
                    R"#(Dumps the Curve on the stream.)#"  , py::arg("C"),  py::arg("OS"))
        .def_static("Write_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream &  ) >(&GeomTools::Write),
                    R"#(Writes the Curve on the stream.)#"  , py::arg("C"),  py::arg("OS"))
        .def_static("Read_s",
                    (void (*)( opencascade::handle<Geom2d_Curve> & ,  std::istream &  ) ) static_cast<void (*)( opencascade::handle<Geom2d_Curve> & ,  std::istream &  ) >(&GeomTools::Read),
                    R"#(Reads the Curve from the stream.)#"  , py::arg("C"),  py::arg("IS"))
        .def_static("SetUndefinedTypeHandler_s",
                    (void (*)( const opencascade::handle<GeomTools_UndefinedTypeHandler> &  ) ) static_cast<void (*)( const opencascade::handle<GeomTools_UndefinedTypeHandler> &  ) >(&GeomTools::SetUndefinedTypeHandler),
                    R"#(None)#"  , py::arg("aHandler"))
        .def_static("GetUndefinedTypeHandler_s",
                    (opencascade::handle<GeomTools_UndefinedTypeHandler> (*)() ) static_cast<opencascade::handle<GeomTools_UndefinedTypeHandler> (*)() >(&GeomTools::GetUndefinedTypeHandler),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
        .def_static("GetReal_s",
                    []( std::istream & IS ){ Standard_Real  theValue; GeomTools::GetReal(IS,theValue); return std::make_tuple(theValue); },
                    R"#(Reads the Standard_Real value from the stream. Zero is read in case of error)#"  , py::arg("IS"))
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomTools_Curve2dSet , shared_ptr<GeomTools_Curve2dSet>  >>(m.attr("GeomTools_Curve2dSet"))
        .def(py::init<  >()  )
    // methods
        .def("Clear",
             (void (GeomTools_Curve2dSet::*)() ) static_cast<void (GeomTools_Curve2dSet::*)() >(&GeomTools_Curve2dSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (GeomTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_Integer (GeomTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&GeomTools_Curve2dSet::Add),
             R"#(Incorporate a new Curve in the set and returns its index.)#"  , py::arg("C"))
        .def("Curve2d",
             (opencascade::handle<Geom2d_Curve> (GeomTools_Curve2dSet::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_Curve> (GeomTools_Curve2dSet::*)( const Standard_Integer  ) const>(&GeomTools_Curve2dSet::Curve2d),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (GeomTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) const) static_cast<Standard_Integer (GeomTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) const>(&GeomTools_Curve2dSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("C"))
        .def("Dump",
             (void (GeomTools_Curve2dSet::*)( std::ostream &  ) const) static_cast<void (GeomTools_Curve2dSet::*)( std::ostream &  ) const>(&GeomTools_Curve2dSet::Dump),
             R"#(Dumps the content of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("Write",
             (void (GeomTools_Curve2dSet::*)( std::ostream &  ) const) static_cast<void (GeomTools_Curve2dSet::*)( std::ostream &  ) const>(&GeomTools_Curve2dSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (GeomTools_Curve2dSet::*)( std::istream &  ) ) static_cast<void (GeomTools_Curve2dSet::*)( std::istream &  ) >(&GeomTools_Curve2dSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def("SetProgress",
             (void (GeomTools_Curve2dSet::*)( const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (GeomTools_Curve2dSet::*)( const opencascade::handle<Message_ProgressIndicator> &  ) >(&GeomTools_Curve2dSet::SetProgress),
             R"#(None)#"  , py::arg("PR"))
        .def("GetProgress",
             (opencascade::handle<Message_ProgressIndicator> (GeomTools_Curve2dSet::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (GeomTools_Curve2dSet::*)() const>(&GeomTools_Curve2dSet::GetProgress),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("PrintCurve2d_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) >(&GeomTools_Curve2dSet::PrintCurve2d),
                    R"#(Dumps the curve on the stream, if compact is True use the compact format that can be read back.)#"  , py::arg("C"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("ReadCurve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( std::istream &  ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( std::istream &  ) >(&GeomTools_Curve2dSet::ReadCurve2d),
                    R"#(Reads the curve from the stream. The curve is assumed to have been written with the Print method (compact = True).)#"  , py::arg("IS"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomTools_CurveSet , shared_ptr<GeomTools_CurveSet>  >>(m.attr("GeomTools_CurveSet"))
        .def(py::init<  >()  )
    // methods
        .def("Clear",
             (void (GeomTools_CurveSet::*)() ) static_cast<void (GeomTools_CurveSet::*)() >(&GeomTools_CurveSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (GeomTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<Standard_Integer (GeomTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) >(&GeomTools_CurveSet::Add),
             R"#(Incorporate a new Curve in the set and returns its index.)#"  , py::arg("C"))
        .def("Curve",
             (opencascade::handle<Geom_Curve> (GeomTools_CurveSet::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_Curve> (GeomTools_CurveSet::*)( const Standard_Integer  ) const>(&GeomTools_CurveSet::Curve),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (GeomTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) const) static_cast<Standard_Integer (GeomTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) const>(&GeomTools_CurveSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("C"))
        .def("Dump",
             (void (GeomTools_CurveSet::*)( std::ostream &  ) const) static_cast<void (GeomTools_CurveSet::*)( std::ostream &  ) const>(&GeomTools_CurveSet::Dump),
             R"#(Dumps the content of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("Write",
             (void (GeomTools_CurveSet::*)( std::ostream &  ) const) static_cast<void (GeomTools_CurveSet::*)( std::ostream &  ) const>(&GeomTools_CurveSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (GeomTools_CurveSet::*)( std::istream &  ) ) static_cast<void (GeomTools_CurveSet::*)( std::istream &  ) >(&GeomTools_CurveSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def("SetProgress",
             (void (GeomTools_CurveSet::*)( const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (GeomTools_CurveSet::*)( const opencascade::handle<Message_ProgressIndicator> &  ) >(&GeomTools_CurveSet::SetProgress),
             R"#(None)#"  , py::arg("PR"))
        .def("GetProgress",
             (opencascade::handle<Message_ProgressIndicator> (GeomTools_CurveSet::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (GeomTools_CurveSet::*)() const>(&GeomTools_CurveSet::GetProgress),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("PrintCurve_s",
                    (void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) >(&GeomTools_CurveSet::PrintCurve),
                    R"#(Dumps the curve on the stream, if compact is True use the compact format that can be read back.)#"  , py::arg("C"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("ReadCurve_s",
                    (opencascade::handle<Geom_Curve> (*)( std::istream &  ) ) static_cast<opencascade::handle<Geom_Curve> (*)( std::istream &  ) >(&GeomTools_CurveSet::ReadCurve),
                    R"#(Reads the curve from the stream. The curve is assumed to have been written with the Print method (compact = True).)#"  , py::arg("IS"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomTools_SurfaceSet , shared_ptr<GeomTools_SurfaceSet>  >>(m.attr("GeomTools_SurfaceSet"))
        .def(py::init<  >()  )
    // methods
        .def("Clear",
             (void (GeomTools_SurfaceSet::*)() ) static_cast<void (GeomTools_SurfaceSet::*)() >(&GeomTools_SurfaceSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (GeomTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<Standard_Integer (GeomTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) >(&GeomTools_SurfaceSet::Add),
             R"#(Incorporate a new Surface in the set and returns its index.)#"  , py::arg("S"))
        .def("Surface",
             (opencascade::handle<Geom_Surface> (GeomTools_SurfaceSet::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_Surface> (GeomTools_SurfaceSet::*)( const Standard_Integer  ) const>(&GeomTools_SurfaceSet::Surface),
             R"#(Returns the Surface of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (GeomTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) const) static_cast<Standard_Integer (GeomTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) const>(&GeomTools_SurfaceSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("S"))
        .def("Dump",
             (void (GeomTools_SurfaceSet::*)( std::ostream &  ) const) static_cast<void (GeomTools_SurfaceSet::*)( std::ostream &  ) const>(&GeomTools_SurfaceSet::Dump),
             R"#(Dumps the content of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("Write",
             (void (GeomTools_SurfaceSet::*)( std::ostream &  ) const) static_cast<void (GeomTools_SurfaceSet::*)( std::ostream &  ) const>(&GeomTools_SurfaceSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (GeomTools_SurfaceSet::*)( std::istream &  ) ) static_cast<void (GeomTools_SurfaceSet::*)( std::istream &  ) >(&GeomTools_SurfaceSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def("SetProgress",
             (void (GeomTools_SurfaceSet::*)( const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (GeomTools_SurfaceSet::*)( const opencascade::handle<Message_ProgressIndicator> &  ) >(&GeomTools_SurfaceSet::SetProgress),
             R"#(None)#"  , py::arg("PR"))
        .def("GetProgress",
             (opencascade::handle<Message_ProgressIndicator> (GeomTools_SurfaceSet::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (GeomTools_SurfaceSet::*)() const>(&GeomTools_SurfaceSet::GetProgress),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("PrintSurface_s",
                    (void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream & ,  const Standard_Boolean  ) >(&GeomTools_SurfaceSet::PrintSurface),
                    R"#(Dumps the surface on the stream, if compact is True use the compact format that can be read back.)#"  , py::arg("S"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("ReadSurface_s",
                    (opencascade::handle<Geom_Surface> (*)( std::istream &  ) ) static_cast<opencascade::handle<Geom_Surface> (*)( std::istream &  ) >(&GeomTools_SurfaceSet::ReadSurface),
                    R"#(Reads the surface from the stream. The surface is assumed to have been written with the Print method (compact = True).)#"  , py::arg("IS"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomTools_UndefinedTypeHandler ,opencascade::handle<GeomTools_UndefinedTypeHandler>  , Standard_Transient >>(m.attr("GeomTools_UndefinedTypeHandler"))
        .def(py::init<  >()  )
    // methods
        .def("PrintCurve",
             (void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) const) static_cast<void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) const>(&GeomTools_UndefinedTypeHandler::PrintCurve),
             R"#(None)#"  , py::arg("C"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadCurve",
             (Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer ,  std::istream & ,  opencascade::handle<Geom_Curve> &  ) const) static_cast<Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer ,  std::istream & ,  opencascade::handle<Geom_Curve> &  ) const>(&GeomTools_UndefinedTypeHandler::ReadCurve),
             R"#(None)#"  , py::arg("ctype"),  py::arg("IS"),  py::arg("C"))
        .def("PrintCurve2d",
             (void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) const) static_cast<void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream & ,  const Standard_Boolean  ) const>(&GeomTools_UndefinedTypeHandler::PrintCurve2d),
             R"#(None)#"  , py::arg("C"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadCurve2d",
             (Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer ,  std::istream & ,  opencascade::handle<Geom2d_Curve> &  ) const) static_cast<Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer ,  std::istream & ,  opencascade::handle<Geom2d_Curve> &  ) const>(&GeomTools_UndefinedTypeHandler::ReadCurve2d),
             R"#(None)#"  , py::arg("ctype"),  py::arg("IS"),  py::arg("C"))
        .def("PrintSurface",
             (void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Surface> & ,  std::ostream & ,  const Standard_Boolean  ) const) static_cast<void (GeomTools_UndefinedTypeHandler::*)( const opencascade::handle<Geom_Surface> & ,  std::ostream & ,  const Standard_Boolean  ) const>(&GeomTools_UndefinedTypeHandler::PrintSurface),
             R"#(None)#"  , py::arg("S"),  py::arg("OS"),  py::arg("compact")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReadSurface",
             (Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer ,  std::istream & ,  opencascade::handle<Geom_Surface> &  ) const) static_cast<Standard_IStream & (GeomTools_UndefinedTypeHandler::*)( const Standard_Integer ,  std::istream & ,  opencascade::handle<Geom_Surface> &  ) const>(&GeomTools_UndefinedTypeHandler::ReadSurface),
             R"#(None)#"  , py::arg("ctype"),  py::arg("IS"),  py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomTools_UndefinedTypeHandler::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomTools_UndefinedTypeHandler::*)() const>(&GeomTools_UndefinedTypeHandler::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomTools_UndefinedTypeHandler::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomTools_UndefinedTypeHandler::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/GeomTools.hxx
// ./opencascade/GeomTools_UndefinedTypeHandler.hxx
// ./opencascade/GeomTools_Curve2dSet.hxx
// ./opencascade/GeomTools_SurfaceSet.hxx
// ./opencascade/GeomTools_CurveSet.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
