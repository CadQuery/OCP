
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
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <gp_Dir.hxx>

// module includes
#include <GeomProjLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomProjLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomProjLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomProjLib , shared_ptr<GeomProjLib>>(m,"GeomProjLib");

    static_cast<py::class_<GeomProjLib , shared_ptr<GeomProjLib> >>(m.attr("GeomProjLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Curve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & ) >(&GeomProjLib::Curve2d),
                    R"#(gives the 2d-curve of a 3d-curve lying on a surface ( uses GeomProjLib_ProjectedCurve ) The 3dCurve is taken between the parametrization range [First, Last] <Tolerance> is used as input if the projection needs an approximation. In this case, the reached tolerance is set in <Tolerance> as output. WARNING : if the projection has failed, this method returns a null Handle.)#"  , py::arg("C"),  py::arg("First"),  py::arg("Last"),  py::arg("S"),  py::arg("UFirst"),  py::arg("ULast"),  py::arg("VFirst"),  py::arg("VLast"),  py::arg("Tolerance"))
        .def_static("Curve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Surface> & , Standard_Real & ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Surface> & , Standard_Real & ) >(&GeomProjLib::Curve2d),
                    R"#(gives the 2d-curve of a 3d-curve lying on a surface ( uses GeomProjLib_ProjectedCurve ) The 3dCurve is taken between the parametrization range [First, Last] <Tolerance> is used as input if the projection needs an approximation. In this case, the reached tolerance is set in <Tolerance> as output. WARNING : if the projection has failed, this method returns a null Handle.)#"  , py::arg("C"),  py::arg("First"),  py::arg("Last"),  py::arg("S"),  py::arg("Tolerance"))
        .def_static("Curve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Surface> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Surface> & ) >(&GeomProjLib::Curve2d),
                    R"#(gives the 2d-curve of a 3d-curve lying on a surface ( uses GeomProjLib_ProjectedCurve ) The 3dCurve is taken between the parametrization range [First, Last] If the projection needs an approximation, Precision::PApproximation() is used. WARNING : if the projection has failed, this method returns a null Handle.)#"  , py::arg("C"),  py::arg("First"),  py::arg("Last"),  py::arg("S"))
        .def_static("Curve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & ) >(&GeomProjLib::Curve2d),
                    R"#(gives the 2d-curve of a 3d-curve lying on a surface ( uses GeomProjLib_ProjectedCurve ). If the projection needs an approximation, Precision::PApproximation() is used. WARNING : if the projection has failed, this method returns a null Handle.)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Curve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GeomProjLib::Curve2d),
                    R"#(gives the 2d-curve of a 3d-curve lying on a surface ( uses GeomProjLib_ProjectedCurve ). If the projection needs an approximation, Precision::PApproximation() is used. WARNING : if the projection has failed, this method returns a null Handle. can expand a little the bounds of surface)#"  , py::arg("C"),  py::arg("S"),  py::arg("UDeb"),  py::arg("UFin"),  py::arg("VDeb"),  py::arg("VFin"))
        .def_static("Curve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & ) >(&GeomProjLib::Curve2d),
                    R"#(gives the 2d-curve of a 3d-curve lying on a surface ( uses GeomProjLib_ProjectedCurve ). If the projection needs an approximation, Precision::PApproximation() is used. WARNING : if the projection has failed, this method returns a null Handle. can expand a little the bounds of surface)#"  , py::arg("C"),  py::arg("S"),  py::arg("UDeb"),  py::arg("UFin"),  py::arg("VDeb"),  py::arg("VFin"),  py::arg("Tolerance"))
        .def_static("Project_s",
                    (opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Surface> & ) >(&GeomProjLib::Project),
                    R"#(Constructs the 3d-curve from the normal projection of the Curve <C> on the surface <S>. WARNING : if the projection has failes returns a null Handle.)#"  , py::arg("C"),  py::arg("S"))
        .def_static("ProjectOnPlane_s",
                    (opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Plane> & , const gp_Dir & , const Standard_Boolean ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom_Plane> & , const gp_Dir & , const Standard_Boolean ) >(&GeomProjLib::ProjectOnPlane),
                    R"#(Constructs the 3d-curves from the projection of the curve <Curve> on the plane <Plane> along the direction <Dir>. If <KeepParametrization> is true, the parametrization of the Projected Curve <PC> will be the same as the parametrization of the initial curve <C>. It meens: proj(C(u)) = PC(u) for each u. Otherwize, the parametrization may change.)#"  , py::arg("Curve"),  py::arg("Plane"),  py::arg("Dir"),  py::arg("KeepParametrization"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\GeomProjLib.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
