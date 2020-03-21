
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <StdObject_gp_Axes.hxx>
#include <StdObject_gp_Curves.hxx>
#include <StdObject_gp_Surfaces.hxx>
#include <StdObject_gp_Trsfs.hxx>
#include <StdObject_gp_Vectors.hxx>
#include <StdObject_Location.hxx>
#include <StdObject_Shape.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdObject(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdObject"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdObject_Location , shared_ptr<StdObject_Location>>(m,"StdObject_Location");

    static_cast<py::class_<StdObject_Location , shared_ptr<StdObject_Location> >>(m.attr("StdObject_Location"))
    // constructors
    // custom constructors
    // methods
        .def("PChildren",
             (void (StdObject_Location::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdObject_Location::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdObject_Location::PChildren),
             R"#(Gets persistent child objects)#"  , py::arg("theChildren"))
        .def("Import",
             (TopLoc_Location (StdObject_Location::*)() const) static_cast<TopLoc_Location (StdObject_Location::*)() const>(&StdObject_Location::Import),
             R"#(Import transient object from the persistent data.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Translate_s",
                    (StdObject_Location (*)( const TopLoc_Location & , NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<StdObjMgt_Persistent> > & ) ) static_cast<StdObject_Location (*)( const TopLoc_Location & , NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<StdObjMgt_Persistent> > & ) >(&StdObject_Location::Translate),
                    R"#(Creates a persistent wrapper object for a location)#"  , py::arg("theLoc"),  py::arg("theMap"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdObject_Shape , shared_ptr<StdObject_Shape>>(m,"StdObject_Shape");

    static_cast<py::class_<StdObject_Shape , shared_ptr<StdObject_Shape> >>(m.attr("StdObject_Shape"))
    // constructors
    // custom constructors
    // methods
        .def("Import",
             (TopoDS_Shape (StdObject_Shape::*)() const) static_cast<TopoDS_Shape (StdObject_Shape::*)() const>(&StdObject_Shape::Import),
             R"#(Import transient object from the persistent data.)#" )
        .def("PChildren",
             (void (StdObject_Shape::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const) static_cast<void (StdObject_Shape::*)( NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const>(&StdObject_Shape::PChildren),
             R"#(None)#"  , py::arg("theChildren"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StdObject_gp_Surfaces.hxx
// ./opencascade/StdObject_gp_Trsfs.hxx
// ./opencascade/StdObject_gp_Vectors.hxx
// ./opencascade/StdObject_Shape.hxx
// ./opencascade/StdObject_gp_Curves.hxx
// ./opencascade/StdObject_Location.hxx
// ./opencascade/StdObject_gp_Axes.hxx
    m.def("write",
          (StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax2d & ))  static_cast<StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax2d & )>(&write),
          R"#(None)#"  , py::arg("theWriteData"),  py::arg("theAx"));
    m.def("write",
          (StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax1 & ))  static_cast<StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax1 & )>(&write),
          R"#(None)#"  , py::arg("theWriteData"),  py::arg("theAx"));

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
