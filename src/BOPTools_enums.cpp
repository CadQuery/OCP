
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BOPTools_Set.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <IntTools_Context.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Vec.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Vertex.hxx>
#include <IntTools_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Solid.hxx>
#include <IntTools_Range.hxx>
#include <TopoDS_Shell.hxx>
#include <Message_Report.hxx>

// module includes
#include <BOPTools_AlgoTools.hxx>
#include <BOPTools_AlgoTools2D.hxx>
#include <BOPTools_AlgoTools3D.hxx>
#include <BOPTools_BoxBndTree.hxx>
#include <BOPTools_BoxSelector.hxx>
#include <BOPTools_ConnexityBlock.hxx>
#include <BOPTools_CoupleOfShape.hxx>
#include <BOPTools_IndexedDataMapOfSetShape.hxx>
#include <BOPTools_ListOfConnexityBlock.hxx>
#include <BOPTools_ListOfCoupleOfShape.hxx>
#include <BOPTools_MapOfSet.hxx>
#include <BOPTools_Parallel.hxx>
#include <BOPTools_Set.hxx>
#include <BOPTools_SetMapHasher.hxx>

// template related includes
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
#include "NCollection.hxx"
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/BOPTools_MapOfSet.hxx
#include "NCollection.hxx"
// ./opencascade/BOPTools_BoxBndTree.hxx
#include "BOPTools.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BOPTools_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BOPTools", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BOPTools_SetMapHasher ,std::unique_ptr<BOPTools_SetMapHasher>  >(m,"BOPTools_SetMapHasher",R"#(None)#");
    py::class_<BOPTools_AlgoTools3D ,std::unique_ptr<BOPTools_AlgoTools3D>  >(m,"BOPTools_AlgoTools3D",R"#(The class contains handy static functions dealing with the topology This is the copy of BOPTools_AlgoTools3D.cdl file)#");
    py::class_<BOPTools_Set ,std::unique_ptr<BOPTools_Set>  >(m,"BOPTools_Set",R"#(None)#");
    py::class_<BOPTools_AlgoTools ,std::unique_ptr<BOPTools_AlgoTools>  >(m,"BOPTools_AlgoTools",R"#(Provides tools used in Boolean Operations algorithm: - Vertices intersection; - Vertex construction; - Edge construction; - Classification algorithms; - Making connexity blocks; - Shape validation.)#");
    py::class_<BOPTools_ConnexityBlock ,std::unique_ptr<BOPTools_ConnexityBlock>  >(m,"BOPTools_ConnexityBlock",R"#(None)#");
    py::class_<BOPTools_AlgoTools2D ,std::unique_ptr<BOPTools_AlgoTools2D>  >(m,"BOPTools_AlgoTools2D",R"#(The class contains handy static functions dealing with the topology This is the copy of the BOPTools_AlgoTools2D.cdl)#");
    py::class_<BOPTools_CoupleOfShape ,std::unique_ptr<BOPTools_CoupleOfShape>  >(m,"BOPTools_CoupleOfShape",R"#(None)#");

// pre-register typdefs
// ./opencascade/BOPTools_SetMapHasher.hxx
// ./opencascade/BOPTools_ConnexityBlock.hxx
// ./opencascade/BOPTools_AlgoTools3D.hxx
// ./opencascade/BOPTools_Parallel.hxx
// ./opencascade/BOPTools_CoupleOfShape.hxx
// ./opencascade/BOPTools_Set.hxx
// ./opencascade/BOPTools_BoxSelector.hxx
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
    preregister_template_NCollection_IndexedDataMap<BOPTools_Set, TopoDS_Shape, BOPTools_SetMapHasher>(m,"BOPTools_IndexedDataMapOfSetShape");  
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
    preregister_template_NCollection_List<BOPTools_ConnexityBlock>(m,"BOPTools_ListOfConnexityBlock");  
// ./opencascade/BOPTools_AlgoTools2D.hxx
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
    preregister_template_NCollection_List<BOPTools_CoupleOfShape>(m,"BOPTools_ListOfCoupleOfShape");  
// ./opencascade/BOPTools_MapOfSet.hxx
    preregister_template_NCollection_Map<BOPTools_Set, BOPTools_SetMapHasher>(m,"BOPTools_MapOfSet");  
// ./opencascade/BOPTools_BoxBndTree.hxx
    preregister_template_BOPTools_BoxSelector<Bnd_Box>(m,"BOPTools_BoxBndTreeSelector");  
// ./opencascade/BOPTools_AlgoTools.hxx

};

// user-defined post-inclusion per module

// user-defined post
