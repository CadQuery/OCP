
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepAdaptor_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx>
#include <BRepTopAdaptor_FClass2d.hxx>
#include <BRepTopAdaptor_HVertex.hxx>
#include <BRepTopAdaptor_MapOfShapeTool.hxx>
#include <BRepTopAdaptor_SeqOfPtr.hxx>
#include <BRepTopAdaptor_Tool.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>

// template related includes
// ./opencascade/BRepTopAdaptor_MapOfShapeTool.hxx
#include "NCollection.hxx"
// ./opencascade/BRepTopAdaptor_MapOfShapeTool.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepTopAdaptor_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepTopAdaptor", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<TopoDS_Shape, BRepTopAdaptor_Tool, TopTools_ShapeMapHasher>(m,"BRepTopAdaptor_MapOfShapeTool");  

// classes forward declarations only
    py::class_<BRepTopAdaptor_FClass2d , shared_ptr<BRepTopAdaptor_FClass2d>  >(m,"BRepTopAdaptor_FClass2d",R"#(None)#");
    py::class_<BRepTopAdaptor_HVertex ,opencascade::handle<BRepTopAdaptor_HVertex>  , Adaptor3d_HVertex >(m,"BRepTopAdaptor_HVertex",R"#()#");
    py::class_<BRepTopAdaptor_Tool , shared_ptr<BRepTopAdaptor_Tool>  >(m,"BRepTopAdaptor_Tool",R"#(None)#");
    py::class_<BRepTopAdaptor_TopolTool ,opencascade::handle<BRepTopAdaptor_TopolTool>  , Adaptor3d_TopolTool >(m,"BRepTopAdaptor_TopolTool",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
