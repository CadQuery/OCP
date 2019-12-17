
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Draft_Modification.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_VertexInfo.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Draft.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_ErrorStatus.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_IndexedDataMapOfEdgeEdgeInfo.hxx>
#include <Draft_IndexedDataMapOfFaceFaceInfo.hxx>
#include <Draft_IndexedDataMapOfVertexVertexInfo.hxx>
#include <Draft_Modification.hxx>
#include <Draft_VertexInfo.hxx>

// template related includes
// ./opencascade/Draft_IndexedDataMapOfEdgeEdgeInfo.hxx
#include "NCollection.hxx"
// ./opencascade/Draft_IndexedDataMapOfVertexVertexInfo.hxx
#include "NCollection.hxx"
// ./opencascade/Draft_IndexedDataMapOfFaceFaceInfo.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Draft_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Draft", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Draft_ErrorStatus>(m, "Draft_ErrorStatus",R"#(None)#")
        .value("Draft_NoError",Draft_ErrorStatus::Draft_NoError)
        .value("Draft_FaceRecomputation",Draft_ErrorStatus::Draft_FaceRecomputation)
        .value("Draft_EdgeRecomputation",Draft_ErrorStatus::Draft_EdgeRecomputation)
        .value("Draft_VertexRecomputation",Draft_ErrorStatus::Draft_VertexRecomputation).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<Draft_FaceInfo ,std::unique_ptr<Draft_FaceInfo>  >(m,"Draft_FaceInfo",R"#(None)#");
    py::class_<Draft_VertexInfo ,std::unique_ptr<Draft_VertexInfo>  >(m,"Draft_VertexInfo",R"#(None)#");
    py::class_<Draft_Modification ,opencascade::handle<Draft_Modification>  , BRepTools_Modification >(m,"Draft_Modification",R"#()#");
    py::class_<Draft_EdgeInfo ,std::unique_ptr<Draft_EdgeInfo>  >(m,"Draft_EdgeInfo",R"#(None)#");
    py::class_<Draft ,std::unique_ptr<Draft>  >(m,"Draft",R"#(None)#");

// pre-register typdefs
// ./opencascade/Draft_FaceInfo.hxx
// ./opencascade/Draft_IndexedDataMapOfEdgeEdgeInfo.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Edge, Draft_EdgeInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfEdgeEdgeInfo");  
// ./opencascade/Draft_ErrorStatus.hxx
// ./opencascade/Draft_EdgeInfo.hxx
// ./opencascade/Draft_IndexedDataMapOfVertexVertexInfo.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Vertex, Draft_VertexInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfVertexVertexInfo");  
// ./opencascade/Draft_VertexInfo.hxx
// ./opencascade/Draft.hxx
// ./opencascade/Draft_IndexedDataMapOfFaceFaceInfo.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Face, Draft_FaceInfo, TopTools_ShapeMapHasher>(m,"Draft_IndexedDataMapOfFaceFaceInfo");  
// ./opencascade/Draft_Modification.hxx

};

// user-defined post-inclusion per module

// user-defined post
