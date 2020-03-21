
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BOPTools_Set.hxx>
#include <TopoDS_Vertex.hxx>
#include <IntTools_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Solid.hxx>
#include <IntTools_Range.hxx>
#include <TopoDS_Shell.hxx>
#include <Message_Report.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Vec.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <IntTools_Context.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <BOPTools_AlgoTools.hxx>
#include <BOPTools_AlgoTools2D.hxx>
#include <BOPTools_AlgoTools3D.hxx>
#include <BOPTools_BoxSelector.hxx>
#include <BOPTools_BoxTree.hxx>
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
// ./opencascade/BOPTools_MapOfSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools_tmpl.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools_tmpl.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BOPTools_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BOPTools", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Map<BOPTools_Set, BOPTools_SetMapHasher>(m,"BOPTools_MapOfSet");
    preregister_template_NCollection_List<BOPTools_CoupleOfShape>(m,"BOPTools_ListOfCoupleOfShape");
    preregister_template_NCollection_List<BOPTools_ConnexityBlock>(m,"BOPTools_ListOfConnexityBlock");
    preregister_template_NCollection_IndexedDataMap<BOPTools_Set, TopoDS_Shape, BOPTools_SetMapHasher>(m,"BOPTools_IndexedDataMapOfSetShape");
    preregister_template_BOPTools_BoxSelector<2>(m,"BOPTools_Box2dTreeSelector");
    preregister_template_BOPTools_BoxSet<Standard_Real, 3, Standard_Integer>(m,"BOPTools_BoxTree");
    preregister_template_BOPTools_BoxSelector<3>(m,"BOPTools_BoxTreeSelector");

// classes forward declarations only
    py::class_<BOPTools_AlgoTools , shared_ptr<BOPTools_AlgoTools> >(m,"BOPTools_AlgoTools",R"#(Provides tools used in Boolean Operations algorithm: - Vertices intersection; - Vertex construction; - Edge construction; - Classification algorithms; - Making connexity blocks; - Shape validation.)#");
    py::class_<BOPTools_AlgoTools2D , shared_ptr<BOPTools_AlgoTools2D> >(m,"BOPTools_AlgoTools2D",R"#(The class contains handy static functions dealing with the topology This is the copy of the BOPTools_AlgoTools2D.cdl)#");
    py::class_<BOPTools_AlgoTools3D , shared_ptr<BOPTools_AlgoTools3D> >(m,"BOPTools_AlgoTools3D",R"#(The class contains handy static functions dealing with the topology This is the copy of BOPTools_AlgoTools3D.cdl file)#");
    py::class_<BOPTools_ConnexityBlock , shared_ptr<BOPTools_ConnexityBlock> >(m,"BOPTools_ConnexityBlock",R"#(None)#");
    py::class_<BOPTools_CoupleOfShape , shared_ptr<BOPTools_CoupleOfShape> >(m,"BOPTools_CoupleOfShape",R"#(None)#");
    py::class_<BOPTools_Parallel , shared_ptr<BOPTools_Parallel> >(m,"BOPTools_Parallel",R"#(Implementation of Functors/Starters)#");
    py::class_<BOPTools_Set , shared_ptr<BOPTools_Set> >(m,"BOPTools_Set",R"#(None)#");
    py::class_<BOPTools_SetMapHasher , shared_ptr<BOPTools_SetMapHasher> >(m,"BOPTools_SetMapHasher",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
