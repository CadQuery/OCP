
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_BRepMAT2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepMAT2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<opencascade::handle<MAT_BasicElt>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"BRepMAT2d_DataMapOfBasicEltShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, MAT_SequenceOfBasicElt, TopTools_ShapeMapHasher>(m,"BRepMAT2d_DataMapOfShapeSequenceOfBasicElt");

// classes forward declarations only
    py::class_<BRepMAT2d_BisectingLocus , shared_ptr<BRepMAT2d_BisectingLocus> >(m,"BRepMAT2d_BisectingLocus",R"#(BisectingLocus generates and contains the Bisecting_Locus of a set of lines from Geom2d, defined by <ExploSet>.)#");
    py::class_<BRepMAT2d_Explorer , shared_ptr<BRepMAT2d_Explorer> >(m,"BRepMAT2d_Explorer",R"#(Construct an explorer from wires, face, set of curves from Geom2d to compute the bisecting Locus.)#");
    py::class_<BRepMAT2d_LinkTopoBilo , shared_ptr<BRepMAT2d_LinkTopoBilo> >(m,"BRepMAT2d_LinkTopoBilo",R"#(Constucts links between the Wire or the Face of the explorer and the BasicElts contained in the bisecting locus.)#");

};

// user-defined post-inclusion per module

// user-defined post
