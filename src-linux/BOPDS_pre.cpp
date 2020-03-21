
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BOPDS_DS.hxx>
#include <BOPDS_PaveBlock.hxx>
#include <BOPDS_PaveBlock.hxx>
#include <BOPDS_DS.hxx>

// module includes
#include <BOPDS_CommonBlock.hxx>
#include <BOPDS_CoupleOfPaveBlocks.hxx>
#include <BOPDS_Curve.hxx>
#include <BOPDS_DataMapOfIntegerListOfPaveBlock.hxx>
#include <BOPDS_DataMapOfPaveBlockCommonBlock.hxx>
#include <BOPDS_DataMapOfPaveBlockListOfInteger.hxx>
#include <BOPDS_DataMapOfPaveBlockListOfPaveBlock.hxx>
#include <BOPDS_DataMapOfShapeCoupleOfPaveBlocks.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_FaceInfo.hxx>
#include <BOPDS_IndexedDataMapOfPaveBlockListOfInteger.hxx>
#include <BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock.hxx>
#include <BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks.hxx>
#include <BOPDS_IndexedMapOfPaveBlock.hxx>
#include <BOPDS_IndexRange.hxx>
#include <BOPDS_Interf.hxx>
#include <BOPDS_ListOfPave.hxx>
#include <BOPDS_ListOfPaveBlock.hxx>
#include <BOPDS_MapOfCommonBlock.hxx>
#include <BOPDS_MapOfPair.hxx>
#include <BOPDS_MapOfPave.hxx>
#include <BOPDS_MapOfPaveBlock.hxx>
#include <BOPDS_Pair.hxx>
#include <BOPDS_PairMapHasher.hxx>
#include <BOPDS_Pave.hxx>
#include <BOPDS_PaveBlock.hxx>
#include <BOPDS_PaveMapHasher.hxx>
#include <BOPDS_PDS.hxx>
#include <BOPDS_PIterator.hxx>
#include <BOPDS_PIteratorSI.hxx>
#include <BOPDS_Point.hxx>
#include <BOPDS_ShapeInfo.hxx>
#include <BOPDS_SubIterator.hxx>
#include <BOPDS_Tools.hxx>
#include <BOPDS_VectorOfCurve.hxx>
#include <BOPDS_VectorOfFaceInfo.hxx>
#include <BOPDS_VectorOfIndexRange.hxx>
#include <BOPDS_VectorOfInterfEE.hxx>
#include <BOPDS_VectorOfInterfEF.hxx>
#include <BOPDS_VectorOfInterfEZ.hxx>
#include <BOPDS_VectorOfInterfFF.hxx>
#include <BOPDS_VectorOfInterfFZ.hxx>
#include <BOPDS_VectorOfInterfVE.hxx>
#include <BOPDS_VectorOfInterfVF.hxx>
#include <BOPDS_VectorOfInterfVV.hxx>
#include <BOPDS_VectorOfInterfVZ.hxx>
#include <BOPDS_VectorOfInterfZZ.hxx>
#include <BOPDS_VectorOfListOfPaveBlock.hxx>
#include <BOPDS_VectorOfPair.hxx>
#include <BOPDS_VectorOfPave.hxx>
#include <BOPDS_VectorOfPoint.hxx>
#include <BOPDS_VectorOfShapeInfo.hxx>
#include <BOPDS_VectorOfVectorOfPair.hxx>

// template related includes
// ./opencascade/BOPDS_VectorOfInterfZZ.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfFF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfVF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_DataMapOfShapeCoupleOfPaveBlocks.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_MapOfPair.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_MapOfPave.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfPave.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfIndexRange.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfFZ.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfListOfPaveBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfVectorOfPair.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfEZ.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfShapeInfo.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_DataMapOfPaveBlockListOfPaveBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfEF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfVZ.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_IndexedMapOfPaveBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfPair.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_MapOfCommonBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_ListOfPave.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_MapOfPaveBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfEE.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfFaceInfo.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_ListOfPaveBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfVE.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPDS_VectorOfInterfVV.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BOPDS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BOPDS", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Vector<BOPDS_InterfZZ>(m,"BOPDS_VectorOfInterfZZ");
    preregister_template_NCollection_Vector<BOPDS_InterfFF>(m,"BOPDS_VectorOfInterfFF");
    preregister_template_NCollection_Vector<BOPDS_InterfVF>(m,"BOPDS_VectorOfInterfVF");
    preregister_template_NCollection_DataMap<TopoDS_Shape, BOPDS_CoupleOfPaveBlocks, TopTools_ShapeMapHasher>(m,"BOPDS_DataMapOfShapeCoupleOfPaveBlocks");
    preregister_template_NCollection_Map<BOPDS_Pair, BOPDS_PairMapHasher>(m,"BOPDS_MapOfPair");
    preregister_template_NCollection_IndexedDataMap<opencascade::handle<BOPDS_PaveBlock>, BOPDS_ListOfPaveBlock, TColStd_MapTransientHasher>(m,"BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock");
    preregister_template_NCollection_Map<BOPDS_Pave, BOPDS_PaveMapHasher>(m,"BOPDS_MapOfPave");
    preregister_template_NCollection_Array1<BOPDS_Pave>(m,"BOPDS_VectorOfPave");
    preregister_template_NCollection_Vector<BOPDS_IndexRange>(m,"BOPDS_VectorOfIndexRange");
    preregister_template_NCollection_Vector<BOPDS_Point>(m,"BOPDS_VectorOfPoint");
    preregister_template_NCollection_Vector<BOPDS_InterfFZ>(m,"BOPDS_VectorOfInterfFZ");
    preregister_template_NCollection_Vector<BOPDS_ListOfPaveBlock>(m,"BOPDS_VectorOfListOfPaveBlock");
    preregister_template_NCollection_Vector<BOPDS_VectorOfPair>(m,"BOPDS_VectorOfVectorOfPair");
    preregister_template_NCollection_Vector<BOPDS_Curve>(m,"BOPDS_VectorOfCurve");
    preregister_template_NCollection_Vector<BOPDS_InterfEZ>(m,"BOPDS_VectorOfInterfEZ");
    preregister_template_NCollection_Vector<BOPDS_ShapeInfo>(m,"BOPDS_VectorOfShapeInfo");
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, BOPDS_CoupleOfPaveBlocks, TopTools_ShapeMapHasher>(m,"BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks");
    preregister_template_NCollection_DataMap<opencascade::handle<BOPDS_PaveBlock>, BOPDS_ListOfPaveBlock, TColStd_MapTransientHasher>(m,"BOPDS_DataMapOfPaveBlockListOfPaveBlock");
    preregister_template_NCollection_IndexedDataMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_ListOfInteger, TColStd_MapTransientHasher>(m,"BOPDS_IndexedDataMapOfPaveBlockListOfInteger");
    preregister_template_NCollection_Vector<BOPDS_InterfEF>(m,"BOPDS_VectorOfInterfEF");
    preregister_template_NCollection_Vector<BOPDS_InterfVZ>(m,"BOPDS_VectorOfInterfVZ");
    preregister_template_NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher>(m,"BOPDS_IndexedMapOfPaveBlock");
    preregister_template_NCollection_Vector<BOPDS_Pair>(m,"BOPDS_VectorOfPair");
    preregister_template_NCollection_Map<opencascade::handle<BOPDS_CommonBlock>, TColStd_MapTransientHasher>(m,"BOPDS_MapOfCommonBlock");
    preregister_template_NCollection_List<BOPDS_Pave>(m,"BOPDS_ListOfPave");
    preregister_template_NCollection_Map<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher>(m,"BOPDS_MapOfPaveBlock");
    preregister_template_NCollection_Vector<BOPDS_InterfEE>(m,"BOPDS_VectorOfInterfEE");
    preregister_template_NCollection_Vector<BOPDS_FaceInfo>(m,"BOPDS_VectorOfFaceInfo");
    preregister_template_NCollection_List<opencascade::handle<BOPDS_PaveBlock> >(m,"BOPDS_ListOfPaveBlock");
    preregister_template_NCollection_Vector<BOPDS_InterfVE>(m,"BOPDS_VectorOfInterfVE");
    preregister_template_NCollection_Vector<BOPDS_InterfVV>(m,"BOPDS_VectorOfInterfVV");

// classes forward declarations only
    py::class_<BOPDS_CommonBlock ,opencascade::handle<BOPDS_CommonBlock> , Standard_Transient>(m,"BOPDS_CommonBlock",R"#(The class BOPDS_CommonBlock is to store the information about pave blocks that have geometrical coincidence (in terms of a tolerance) with: a) other pave block(s); b) face(s). First pave block in the common block (real pave block) is always a pave block with the minimal index of the original edge.The class BOPDS_CommonBlock is to store the information about pave blocks that have geometrical coincidence (in terms of a tolerance) with: a) other pave block(s); b) face(s). First pave block in the common block (real pave block) is always a pave block with the minimal index of the original edge.The class BOPDS_CommonBlock is to store the information about pave blocks that have geometrical coincidence (in terms of a tolerance) with: a) other pave block(s); b) face(s). First pave block in the common block (real pave block) is always a pave block with the minimal index of the original edge.)#");
    py::class_<BOPDS_CoupleOfPaveBlocks , shared_ptr<BOPDS_CoupleOfPaveBlocks> >(m,"BOPDS_CoupleOfPaveBlocks",R"#(The Class BOPDS_CoupleOfPaveBlocks is to store the information about two pave blocks and some satellite information)#");
    py::class_<BOPDS_Curve , shared_ptr<BOPDS_Curve> >(m,"BOPDS_Curve",R"#(The class BOPDS_Curve is to store the information about intersection curve)#");
    py::class_<BOPDS_DS , shared_ptr<BOPDS_DS> >(m,"BOPDS_DS",R"#(The class BOPDS_DS provides the control of data structure for the algorithms in the Boolean Component such as General Fuse, Boolean operations, Section, Maker Volume, Splitter and Cells Builder.)#");
    py::class_<BOPDS_FaceInfo , shared_ptr<BOPDS_FaceInfo> >(m,"BOPDS_FaceInfo",R"#(The class BOPDS_FaceInfo is to store handy information about state of face)#");
    py::class_<BOPDS_IndexRange , shared_ptr<BOPDS_IndexRange> >(m,"BOPDS_IndexRange",R"#(The class BOPDS_IndexRange is to store the information about range of two indices)#");
    py::class_<BOPDS_Interf , shared_ptr_nodelete<BOPDS_Interf> >(m,"BOPDS_Interf",R"#(The class BOPDS_Interf is is to store the information about the interference between two shapes. The class BOPDS_Interf is root class)#");
    py::class_<BOPDS_Pair , shared_ptr<BOPDS_Pair> >(m,"BOPDS_Pair",R"#(The class is to provide the pair of indices of interfering shapes.)#");
    py::class_<BOPDS_PairMapHasher , shared_ptr<BOPDS_PairMapHasher> >(m,"BOPDS_PairMapHasher",R"#(None)#");
    py::class_<BOPDS_Pave , shared_ptr<BOPDS_Pave> >(m,"BOPDS_Pave",R"#(The class BOPDS_Pave is to store information about vertex on an edge)#");
    py::class_<BOPDS_PaveBlock ,opencascade::handle<BOPDS_PaveBlock> , Standard_Transient>(m,"BOPDS_PaveBlock",R"#(The class BOPDS_PaveBlock is to store the information about pave block on an edge. Two adjacent paves on edge make up pave block.The class BOPDS_PaveBlock is to store the information about pave block on an edge. Two adjacent paves on edge make up pave block.The class BOPDS_PaveBlock is to store the information about pave block on an edge. Two adjacent paves on edge make up pave block.)#");
    py::class_<BOPDS_PaveMapHasher , shared_ptr<BOPDS_PaveMapHasher> >(m,"BOPDS_PaveMapHasher",R"#(None)#");
    py::class_<BOPDS_Point , shared_ptr<BOPDS_Point> >(m,"BOPDS_Point",R"#(The class BOPDS_Point is to store the information about intersection point)#");
    py::class_<BOPDS_ShapeInfo , shared_ptr<BOPDS_ShapeInfo> >(m,"BOPDS_ShapeInfo",R"#(The class BOPDS_ShapeInfo is to store handy information about shape)#");
    py::class_<BOPDS_SubIterator , shared_ptr<BOPDS_SubIterator> >(m,"BOPDS_SubIterator",R"#(The class BOPDS_SubIterator is used to compute intersections between bounding boxes of two sub-sets of BRep sub-shapes of arguments of an operation (see the class BOPDS_DS). The class provides interface to iterate the pairs of intersected sub-shapes.)#");
    py::class_<BOPDS_Tools , shared_ptr<BOPDS_Tools> >(m,"BOPDS_Tools",R"#(The class BOPDS_Tools contains a set auxiliary static functions of the package BOPDS)#");
    py::class_<BOPDS_InterfEE , shared_ptr<BOPDS_InterfEE> , BOPDS_Interf>(m,"BOPDS_InterfEE",R"#(The class BOPDS_InterfEE is is to store the information about the interference of the type edge/edge.)#");
    py::class_<BOPDS_InterfEF , shared_ptr<BOPDS_InterfEF> , BOPDS_Interf>(m,"BOPDS_InterfEF",R"#(The class BOPDS_InterfEF is is to store the information about the interference of the type edge/face.)#");
    py::class_<BOPDS_InterfEZ , shared_ptr<BOPDS_InterfEZ> , BOPDS_Interf>(m,"BOPDS_InterfEZ",R"#(The class BOPDS_InterfEZ is is to store the information about the interference of the type edge/solid.)#");
    py::class_<BOPDS_InterfFF , shared_ptr<BOPDS_InterfFF> , BOPDS_Interf>(m,"BOPDS_InterfFF",R"#(None)#");
    py::class_<BOPDS_InterfFZ , shared_ptr<BOPDS_InterfFZ> , BOPDS_Interf>(m,"BOPDS_InterfFZ",R"#(The class BOPDS_InterfFZ is is to store the information about the interference of the type face/solid.)#");
    py::class_<BOPDS_InterfVE , shared_ptr<BOPDS_InterfVE> , BOPDS_Interf>(m,"BOPDS_InterfVE",R"#(The class BOPDS_InterfVE is is to store the information about the interference of the type vertex/edge.)#");
    py::class_<BOPDS_InterfVF , shared_ptr<BOPDS_InterfVF> , BOPDS_Interf>(m,"BOPDS_InterfVF",R"#(The class BOPDS_InterfVF is is to store the information about the interference of the type vertex/face)#");
    py::class_<BOPDS_InterfVV , shared_ptr<BOPDS_InterfVV> , BOPDS_Interf>(m,"BOPDS_InterfVV",R"#(The class BOPDS_InterfVV is is to store the information about the interference of the type vertex/vertex.)#");
    py::class_<BOPDS_InterfVZ , shared_ptr<BOPDS_InterfVZ> , BOPDS_Interf>(m,"BOPDS_InterfVZ",R"#(The class BOPDS_InterfVZ is is to store the information about the interference of the type vertex/solid.)#");
    py::class_<BOPDS_InterfZZ , shared_ptr<BOPDS_InterfZZ> , BOPDS_Interf>(m,"BOPDS_InterfZZ",R"#(The class BOPDS_InterfZZ is is to store the information about the interference of the type solid/solid.)#");

};

// user-defined post-inclusion per module

// user-defined post
