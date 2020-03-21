
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <MAT_Graph.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <Geom2d_Geometry.hxx>
#include <MAT_Node.hxx>
#include <MAT_Arc.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <TopoDS_Wire.hxx>

// module includes
#include <BRepMAT2d_BisectingLocus.hxx>
#include <BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx>
#include <BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx>
#include <BRepMAT2d_DataMapOfBasicEltShape.hxx>
#include <BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <BRepMAT2d_LinkTopoBilo.hxx>

// template related includes
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepMAT2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepMAT2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepMAT2d_BisectingLocus , shared_ptr<BRepMAT2d_BisectingLocus> >>(m.attr("BRepMAT2d_BisectingLocus"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMAT2d_Explorer , shared_ptr<BRepMAT2d_Explorer> >>(m.attr("BRepMAT2d_Explorer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMAT2d_LinkTopoBilo , shared_ptr<BRepMAT2d_LinkTopoBilo> >>(m.attr("BRepMAT2d_LinkTopoBilo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx
// ./opencascade/BRepMAT2d_BisectingLocus.hxx
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
// ./opencascade/BRepMAT2d_Explorer.hxx
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx
// ./opencascade/BRepMAT2d_LinkTopoBilo.hxx
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<opencascade::handle<MAT_BasicElt>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"BRepMAT2d_DataMapOfBasicEltShape");
    register_template_NCollection_DataMap<TopoDS_Shape, MAT_SequenceOfBasicElt, TopTools_ShapeMapHasher>(m,"BRepMAT2d_DataMapOfShapeSequenceOfBasicElt");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
