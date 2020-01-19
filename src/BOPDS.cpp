
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BOPDS_PaveBlock.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_IteratorSI.hxx>
#include <BOPDS_Iterator.hxx>
#include <BOPDS_PaveBlock.hxx>
#include <BOPDS_DS.hxx>
#include <IntTools_Context.hxx>

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
#include <BOPDS_Iterator.hxx>
#include <BOPDS_IteratorSI.hxx>
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
// ./opencascade/BOPDS_VectorOfInterfVF.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfEF.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfVectorOfPair.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfPair.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfVZ.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfEE.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfShapeInfo.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_IndexedMapOfPaveBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_DataMapOfPaveBlockListOfPaveBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfPave.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_ListOfPaveBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_MapOfCommonBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_MapOfPair.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfEZ.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfVV.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfFF.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfListOfPaveBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfPoint.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_DataMapOfShapeCoupleOfPaveBlocks.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfIndexRange.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfFaceInfo.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfFZ.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_MapOfPave.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_ListOfPave.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_MapOfPaveBlock.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfVE.hxx
#include "NCollection.hxx"
// ./opencascade/BOPDS_VectorOfInterfZZ.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BOPDS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BOPDS"));


//Python trampoline classes

// classes


    static_cast<py::class_<BOPDS_CommonBlock ,opencascade::handle<BOPDS_CommonBlock>  , Standard_Transient >>(m.attr("BOPDS_CommonBlock"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("AddPaveBlock",
             (void (BOPDS_CommonBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<void (BOPDS_CommonBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_CommonBlock::AddPaveBlock),
             R"#(Modifier Adds the pave block <aPB> to the list of pave blocks of the common block)#"  , py::arg("aPB"))
        .def("SetPaveBlocks",
             (void (BOPDS_CommonBlock::*)(  const NCollection_List<opencascade::handle<BOPDS_PaveBlock> > &  ) ) static_cast<void (BOPDS_CommonBlock::*)(  const NCollection_List<opencascade::handle<BOPDS_PaveBlock> > &  ) >(&BOPDS_CommonBlock::SetPaveBlocks),
             R"#(Modifier Adds the list of pave blocks <aLPB> to the list of pave blocks of the common block)#"  , py::arg("aLPB"))
        .def("AddFace",
             (void (BOPDS_CommonBlock::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_CommonBlock::*)( const Standard_Integer  ) >(&BOPDS_CommonBlock::AddFace),
             R"#(Modifier Adds the index of the face <aF> to the list of indices of faces of the common block)#"  , py::arg("aF"))
        .def("SetFaces",
             (void (BOPDS_CommonBlock::*)(  const NCollection_List<Standard_Integer> &  ) ) static_cast<void (BOPDS_CommonBlock::*)(  const NCollection_List<Standard_Integer> &  ) >(&BOPDS_CommonBlock::SetFaces),
             R"#(Modifier Sets the list of indices of faces <aLF> of the common block)#"  , py::arg("aLF"))
        .def("AppendFaces",
             (void (BOPDS_CommonBlock::*)( NCollection_List<Standard_Integer> &  ) ) static_cast<void (BOPDS_CommonBlock::*)( NCollection_List<Standard_Integer> &  ) >(&BOPDS_CommonBlock::AppendFaces),
             R"#(Modifier Appends the list of indices of faces <aLF> to the list of indices of faces of the common block (the input list is emptied))#"  , py::arg("aLF"))
        .def("PaveBlocks",
             (const BOPDS_ListOfPaveBlock & (BOPDS_CommonBlock::*)() const) static_cast<const BOPDS_ListOfPaveBlock & (BOPDS_CommonBlock::*)() const>(&BOPDS_CommonBlock::PaveBlocks),
             R"#(Selector Returns the list of pave blocks of the common block)#" )
        .def("Faces",
             (const TColStd_ListOfInteger & (BOPDS_CommonBlock::*)() const) static_cast<const TColStd_ListOfInteger & (BOPDS_CommonBlock::*)() const>(&BOPDS_CommonBlock::Faces),
             R"#(Selector Returns the list of indices of faces of the common block)#" )
        .def("PaveBlock1",
             (const opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CommonBlock::*)() const) static_cast<const opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CommonBlock::*)() const>(&BOPDS_CommonBlock::PaveBlock1),
             R"#(Selector Returns the first pave block of the common block)#" )
        .def("PaveBlockOnEdge",
             (opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CommonBlock::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CommonBlock::*)( const Standard_Integer  ) >(&BOPDS_CommonBlock::PaveBlockOnEdge),
             R"#(Selector Returns the pave block that belongs to the edge with index <theIx>)#"  , py::arg("theIndex"))
        .def("IsPaveBlockOnFace",
             (Standard_Boolean (BOPDS_CommonBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_CommonBlock::*)( const Standard_Integer  ) const>(&BOPDS_CommonBlock::IsPaveBlockOnFace),
             R"#(Query Returns true if the common block contains a pave block that belongs to the face with index <theIx>)#"  , py::arg("theIndex"))
        .def("IsPaveBlockOnEdge",
             (Standard_Boolean (BOPDS_CommonBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_CommonBlock::*)( const Standard_Integer  ) const>(&BOPDS_CommonBlock::IsPaveBlockOnEdge),
             R"#(Query Returns true if the common block contains a pave block that belongs to the edge with index <theIx>)#"  , py::arg("theIndex"))
        .def("Contains",
             (Standard_Boolean (BOPDS_CommonBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const) static_cast<Standard_Boolean (BOPDS_CommonBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const>(&BOPDS_CommonBlock::Contains),
             R"#(Query Returns true if the common block contains a pave block that is equal to <thePB>)#"  , py::arg("thePB"))
        .def("Contains",
             (Standard_Boolean (BOPDS_CommonBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_CommonBlock::*)( const Standard_Integer  ) const>(&BOPDS_CommonBlock::Contains),
             R"#(Query Returns true if the common block contains the face with index equal to <theF>)#"  , py::arg("theF"))
        .def("SetEdge",
             (void (BOPDS_CommonBlock::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_CommonBlock::*)( const Standard_Integer  ) >(&BOPDS_CommonBlock::SetEdge),
             R"#(Modifier Assign the index <theEdge> as the edge index to all pave blocks of the common block)#"  , py::arg("theEdge"))
        .def("Edge",
             (Standard_Integer (BOPDS_CommonBlock::*)() const) static_cast<Standard_Integer (BOPDS_CommonBlock::*)() const>(&BOPDS_CommonBlock::Edge),
             R"#(Selector Returns the index of the edge of all pave blocks of the common block)#" )
        .def("Dump",
             (void (BOPDS_CommonBlock::*)() const) static_cast<void (BOPDS_CommonBlock::*)() const>(&BOPDS_CommonBlock::Dump),
             R"#(None)#" )
        .def("SetRealPaveBlock",
             (void (BOPDS_CommonBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<void (BOPDS_CommonBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_CommonBlock::SetRealPaveBlock),
             R"#(Moves the pave blocks in the list to make the given pave block to be the first. It will be representative for the whole group.)#"  , py::arg("thePB"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPDS_CommonBlock::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPDS_CommonBlock::*)() const>(&BOPDS_CommonBlock::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPDS_CommonBlock::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPDS_CommonBlock::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_CoupleOfPaveBlocks , shared_ptr<BOPDS_CoupleOfPaveBlocks>  >>(m.attr("BOPDS_CoupleOfPaveBlocks"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BOPDS_PaveBlock> &,const opencascade::handle<BOPDS_PaveBlock> & >()  , py::arg("thePB1"),  py::arg("thePB2") )
    // methods
        .def("SetIndex",
             (void (BOPDS_CoupleOfPaveBlocks::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_CoupleOfPaveBlocks::*)( const Standard_Integer  ) >(&BOPDS_CoupleOfPaveBlocks::SetIndex),
             R"#(Sets an index)#"  , py::arg("theIndex"))
        .def("Index",
             (Standard_Integer (BOPDS_CoupleOfPaveBlocks::*)() const) static_cast<Standard_Integer (BOPDS_CoupleOfPaveBlocks::*)() const>(&BOPDS_CoupleOfPaveBlocks::Index),
             R"#(Returns the index)#" )
        .def("SetIndexInterf",
             (void (BOPDS_CoupleOfPaveBlocks::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_CoupleOfPaveBlocks::*)( const Standard_Integer  ) >(&BOPDS_CoupleOfPaveBlocks::SetIndexInterf),
             R"#(Sets an index of an interference)#"  , py::arg("theIndex"))
        .def("IndexInterf",
             (Standard_Integer (BOPDS_CoupleOfPaveBlocks::*)() const) static_cast<Standard_Integer (BOPDS_CoupleOfPaveBlocks::*)() const>(&BOPDS_CoupleOfPaveBlocks::IndexInterf),
             R"#(Returns the index of an interference)#" )
        .def("SetPaveBlocks",
             (void (BOPDS_CoupleOfPaveBlocks::*)( const opencascade::handle<BOPDS_PaveBlock> & ,  const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<void (BOPDS_CoupleOfPaveBlocks::*)( const opencascade::handle<BOPDS_PaveBlock> & ,  const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_CoupleOfPaveBlocks::SetPaveBlocks),
             R"#(Sets pave blocks)#"  , py::arg("thePB1"),  py::arg("thePB2"))
        .def("PaveBlocks",
             (void (BOPDS_CoupleOfPaveBlocks::*)( opencascade::handle<BOPDS_PaveBlock> & ,  opencascade::handle<BOPDS_PaveBlock> &  ) const) static_cast<void (BOPDS_CoupleOfPaveBlocks::*)( opencascade::handle<BOPDS_PaveBlock> & ,  opencascade::handle<BOPDS_PaveBlock> &  ) const>(&BOPDS_CoupleOfPaveBlocks::PaveBlocks),
             R"#(Returns pave blocks)#"  , py::arg("thePB1"),  py::arg("thePB2"))
        .def("SetPaveBlock1",
             (void (BOPDS_CoupleOfPaveBlocks::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<void (BOPDS_CoupleOfPaveBlocks::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_CoupleOfPaveBlocks::SetPaveBlock1),
             R"#(Sets the first pave block)#"  , py::arg("thePB"))
        .def("PaveBlock1",
             (const opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CoupleOfPaveBlocks::*)() const) static_cast<const opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CoupleOfPaveBlocks::*)() const>(&BOPDS_CoupleOfPaveBlocks::PaveBlock1),
             R"#(Returns the first pave block)#" )
        .def("SetPaveBlock2",
             (void (BOPDS_CoupleOfPaveBlocks::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<void (BOPDS_CoupleOfPaveBlocks::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_CoupleOfPaveBlocks::SetPaveBlock2),
             R"#(Sets the second pave block)#"  , py::arg("thePB"))
        .def("PaveBlock2",
             (const opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CoupleOfPaveBlocks::*)() const) static_cast<const opencascade::handle<BOPDS_PaveBlock> & (BOPDS_CoupleOfPaveBlocks::*)() const>(&BOPDS_CoupleOfPaveBlocks::PaveBlock2),
             R"#(Returns the second pave block)#" )
        .def("SetTolerance",
             (void (BOPDS_CoupleOfPaveBlocks::*)( const Standard_Real  ) ) static_cast<void (BOPDS_CoupleOfPaveBlocks::*)( const Standard_Real  ) >(&BOPDS_CoupleOfPaveBlocks::SetTolerance),
             R"#(Sets the tolerance associated with this couple)#"  , py::arg("theTol"))
        .def("Tolerance",
             (Standard_Real (BOPDS_CoupleOfPaveBlocks::*)() const) static_cast<Standard_Real (BOPDS_CoupleOfPaveBlocks::*)() const>(&BOPDS_CoupleOfPaveBlocks::Tolerance),
             R"#(Returns the tolerance associated with this couple)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_Curve , shared_ptr<BOPDS_Curve>  >>(m.attr("BOPDS_Curve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("SetCurve",
             (void (BOPDS_Curve::*)( const IntTools_Curve &  ) ) static_cast<void (BOPDS_Curve::*)( const IntTools_Curve &  ) >(&BOPDS_Curve::SetCurve),
             R"#(Modifier Sets the curve <theC>)#"  , py::arg("theC"))
        .def("Curve",
             (const IntTools_Curve & (BOPDS_Curve::*)() const) static_cast<const IntTools_Curve & (BOPDS_Curve::*)() const>(&BOPDS_Curve::Curve),
             R"#(Selector Returns the curve)#" )
        .def("SetBox",
             (void (BOPDS_Curve::*)( const Bnd_Box &  ) ) static_cast<void (BOPDS_Curve::*)( const Bnd_Box &  ) >(&BOPDS_Curve::SetBox),
             R"#(Modifier Sets the bounding box <theBox> of the curve)#"  , py::arg("theBox"))
        .def("Box",
             (const Bnd_Box & (BOPDS_Curve::*)() const) static_cast<const Bnd_Box & (BOPDS_Curve::*)() const>(&BOPDS_Curve::Box),
             R"#(Selector Returns the bounding box of the curve)#" )
        .def("ChangeBox",
             (Bnd_Box & (BOPDS_Curve::*)() ) static_cast<Bnd_Box & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangeBox),
             R"#(Selector/Modifier Returns the bounding box of the curve)#" )
        .def("SetPaveBlocks",
             (void (BOPDS_Curve::*)(  const NCollection_List<opencascade::handle<BOPDS_PaveBlock> > &  ) ) static_cast<void (BOPDS_Curve::*)(  const NCollection_List<opencascade::handle<BOPDS_PaveBlock> > &  ) >(&BOPDS_Curve::SetPaveBlocks),
             R"#(None)#"  , py::arg("theLPB"))
        .def("PaveBlocks",
             (const BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() const) static_cast<const BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() const>(&BOPDS_Curve::PaveBlocks),
             R"#(Selector Returns the list of pave blocks of the curve)#" )
        .def("ChangePaveBlocks",
             (BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() ) static_cast<BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangePaveBlocks),
             R"#(Selector/Modifier Returns the list of pave blocks of the curve)#" )
        .def("InitPaveBlock1",
             (void (BOPDS_Curve::*)() ) static_cast<void (BOPDS_Curve::*)() >(&BOPDS_Curve::InitPaveBlock1),
             R"#(Creates initial pave block of the curve)#" )
        .def("ChangePaveBlock1",
             (opencascade::handle<BOPDS_PaveBlock> & (BOPDS_Curve::*)() ) static_cast<opencascade::handle<BOPDS_PaveBlock> & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangePaveBlock1),
             R"#(Selector/Modifier Returns initial pave block of the curve)#" )
        .def("TechnoVertices",
             (const TColStd_ListOfInteger & (BOPDS_Curve::*)() const) static_cast<const TColStd_ListOfInteger & (BOPDS_Curve::*)() const>(&BOPDS_Curve::TechnoVertices),
             R"#(Selector Returns list of indices of technologic vertices of the curve)#" )
        .def("ChangeTechnoVertices",
             (TColStd_ListOfInteger & (BOPDS_Curve::*)() ) static_cast<TColStd_ListOfInteger & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangeTechnoVertices),
             R"#(Selector/Modifier Returns list of indices of technologic vertices of the curve)#" )
        .def("HasEdge",
             (Standard_Boolean (BOPDS_Curve::*)() const) static_cast<Standard_Boolean (BOPDS_Curve::*)() const>(&BOPDS_Curve::HasEdge),
             R"#(Query Returns true if at least one pave block of the curve has edge)#" )
        .def("SetTolerance",
             (void (BOPDS_Curve::*)( const Standard_Real  ) ) static_cast<void (BOPDS_Curve::*)( const Standard_Real  ) >(&BOPDS_Curve::SetTolerance),
             R"#(Sets the tolerance for the curve.)#"  , py::arg("theTol"))
        .def("Tolerance",
             (Standard_Real (BOPDS_Curve::*)() const) static_cast<Standard_Real (BOPDS_Curve::*)() const>(&BOPDS_Curve::Tolerance),
             R"#(Returns the tolerance of the curve)#" )
        .def("TangentialTolerance",
             (Standard_Real (BOPDS_Curve::*)() const) static_cast<Standard_Real (BOPDS_Curve::*)() const>(&BOPDS_Curve::TangentialTolerance),
             R"#(Returns the tangential tolerance of the curve)#" )
        .def("SetCurve",
             (void (BOPDS_Curve::*)( const IntTools_Curve &  ) ) static_cast<void (BOPDS_Curve::*)( const IntTools_Curve &  ) >(&BOPDS_Curve::SetCurve),
             R"#(Modifier Sets the curve <theC>)#"  , py::arg("theCurve"))
        .def("Curve",
             (const IntTools_Curve & (BOPDS_Curve::*)() const) static_cast<const IntTools_Curve & (BOPDS_Curve::*)() const>(&BOPDS_Curve::Curve),
             R"#(Selector Returns the curve)#" )
        .def("SetPaveBlocks",
             (void (BOPDS_Curve::*)(  const NCollection_List<opencascade::handle<BOPDS_PaveBlock> > &  ) ) static_cast<void (BOPDS_Curve::*)(  const NCollection_List<opencascade::handle<BOPDS_PaveBlock> > &  ) >(&BOPDS_Curve::SetPaveBlocks),
             R"#(None)#"  , py::arg("theLPB"))
        .def("PaveBlocks",
             (const BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() const) static_cast<const BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() const>(&BOPDS_Curve::PaveBlocks),
             R"#(Selector Returns the list of pave blocks of the curve)#" )
        .def("ChangePaveBlocks",
             (BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() ) static_cast<BOPDS_ListOfPaveBlock & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangePaveBlocks),
             R"#(Selector/Modifier Returns the list of pave blocks of the curve)#" )
        .def("InitPaveBlock1",
             (void (BOPDS_Curve::*)() ) static_cast<void (BOPDS_Curve::*)() >(&BOPDS_Curve::InitPaveBlock1),
             R"#(Creates initial pave block of the curve)#" )
        .def("ChangePaveBlock1",
             (opencascade::handle<BOPDS_PaveBlock> & (BOPDS_Curve::*)() ) static_cast<opencascade::handle<BOPDS_PaveBlock> & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangePaveBlock1),
             R"#(Selector/Modifier Returns initial pave block of the curve)#" )
        .def("TechnoVertices",
             (const TColStd_ListOfInteger & (BOPDS_Curve::*)() const) static_cast<const TColStd_ListOfInteger & (BOPDS_Curve::*)() const>(&BOPDS_Curve::TechnoVertices),
             R"#(Selector Returns list of indices of technologic vertices of the curve)#" )
        .def("ChangeTechnoVertices",
             (TColStd_ListOfInteger & (BOPDS_Curve::*)() ) static_cast<TColStd_ListOfInteger & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangeTechnoVertices),
             R"#(Selector/Modifier Returns list of indices of technologic vertices of the curve)#" )
        .def("SetBox",
             (void (BOPDS_Curve::*)( const Bnd_Box &  ) ) static_cast<void (BOPDS_Curve::*)( const Bnd_Box &  ) >(&BOPDS_Curve::SetBox),
             R"#(Modifier Sets the bounding box <theBox> of the curve)#"  , py::arg("theBox"))
        .def("Box",
             (const Bnd_Box & (BOPDS_Curve::*)() const) static_cast<const Bnd_Box & (BOPDS_Curve::*)() const>(&BOPDS_Curve::Box),
             R"#(Selector Returns the bounding box of the curve)#" )
        .def("ChangeBox",
             (Bnd_Box & (BOPDS_Curve::*)() ) static_cast<Bnd_Box & (BOPDS_Curve::*)() >(&BOPDS_Curve::ChangeBox),
             R"#(Selector/Modifier Returns the bounding box of the curve)#" )
        .def("HasEdge",
             (Standard_Boolean (BOPDS_Curve::*)() const) static_cast<Standard_Boolean (BOPDS_Curve::*)() const>(&BOPDS_Curve::HasEdge),
             R"#(Query Returns true if at least one pave block of the curve has edge)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_DS , shared_ptr<BOPDS_DS>  >>(m.attr("BOPDS_DS"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("Clear",
             (void (BOPDS_DS::*)() ) static_cast<void (BOPDS_DS::*)() >(&BOPDS_DS::Clear),
             R"#(Clears the contents)#" )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (BOPDS_DS::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (BOPDS_DS::*)() const>(&BOPDS_DS::Allocator),
             R"#(Selector)#" )
        .def("SetArguments",
             (void (BOPDS_DS::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BOPDS_DS::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BOPDS_DS::SetArguments),
             R"#(Modifier Sets the arguments [theLS] of an operation)#"  , py::arg("theLS"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BOPDS_DS::*)() const) static_cast<const TopTools_ListOfShape & (BOPDS_DS::*)() const>(&BOPDS_DS::Arguments),
             R"#(Selector Returns the arguments of an operation)#" )
        .def("Init",
             (void (BOPDS_DS::*)( const Standard_Real  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Real  ) >(&BOPDS_DS::Init),
             R"#(Initializes the data structure for the arguments)#"  , py::arg("theFuzz")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def("NbShapes",
             (Standard_Integer (BOPDS_DS::*)() const) static_cast<Standard_Integer (BOPDS_DS::*)() const>(&BOPDS_DS::NbShapes),
             R"#(Selector Returns the total number of shapes stored)#" )
        .def("NbSourceShapes",
             (Standard_Integer (BOPDS_DS::*)() const) static_cast<Standard_Integer (BOPDS_DS::*)() const>(&BOPDS_DS::NbSourceShapes),
             R"#(Selector Returns the total number of source shapes stored)#" )
        .def("NbRanges",
             (Standard_Integer (BOPDS_DS::*)() const) static_cast<Standard_Integer (BOPDS_DS::*)() const>(&BOPDS_DS::NbRanges),
             R"#(Selector Returns the number of index ranges)#" )
        .def("Range",
             (const BOPDS_IndexRange & (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<const BOPDS_IndexRange & (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::Range),
             R"#(Selector Returns the index range "i")#"  , py::arg("theIndex"))
        .def("Rank",
             (Standard_Integer (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::Rank),
             R"#(Selector Returns the rank of the shape of index "i")#"  , py::arg("theIndex"))
        .def("IsNewShape",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::IsNewShape),
             R"#(Returns true if the shape of index "i" is not the source shape/sub-shape)#"  , py::arg("theIndex"))
        .def("Append",
             (Standard_Integer (BOPDS_DS::*)( const BOPDS_ShapeInfo &  ) ) static_cast<Standard_Integer (BOPDS_DS::*)( const BOPDS_ShapeInfo &  ) >(&BOPDS_DS::Append),
             R"#(Modifier Appends the information about the shape [theSI] to the data structure Returns the index of theSI in the data structure)#"  , py::arg("theSI"))
        .def("Append",
             (Standard_Integer (BOPDS_DS::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Integer (BOPDS_DS::*)( const TopoDS_Shape &  ) >(&BOPDS_DS::Append),
             R"#(Modifier Appends the default information about the shape [theS] to the data structure Returns the index of theS in the data structure)#"  , py::arg("theS"))
        .def("ShapeInfo",
             (const BOPDS_ShapeInfo & (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<const BOPDS_ShapeInfo & (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::ShapeInfo),
             R"#(Selector Returns the information about the shape with index theIndex)#"  , py::arg("theIndex"))
        .def("ChangeShapeInfo",
             (BOPDS_ShapeInfo & (BOPDS_DS::*)( const Standard_Integer  ) ) static_cast<BOPDS_ShapeInfo & (BOPDS_DS::*)( const Standard_Integer  ) >(&BOPDS_DS::ChangeShapeInfo),
             R"#(Selector/Modifier Returns the information about the shape with index theIndex)#"  , py::arg("theIndex"))
        .def("Shape",
             (const TopoDS_Shape & (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Shape & (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::Shape),
             R"#(Selector Returns the shape with index theIndex)#"  , py::arg("theIndex"))
        .def("Index",
             (Standard_Integer (BOPDS_DS::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (BOPDS_DS::*)( const TopoDS_Shape &  ) const>(&BOPDS_DS::Index),
             R"#(Selector Returns the index of the shape theS)#"  , py::arg("theS"))
        .def("PaveBlocksPool",
             (const BOPDS_VectorOfListOfPaveBlock & (BOPDS_DS::*)() const) static_cast<const BOPDS_VectorOfListOfPaveBlock & (BOPDS_DS::*)() const>(&BOPDS_DS::PaveBlocksPool),
             R"#(Selector Returns the information about pave blocks on source edges)#" )
        .def("ChangePaveBlocksPool",
             (BOPDS_VectorOfListOfPaveBlock & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfListOfPaveBlock & (BOPDS_DS::*)() >(&BOPDS_DS::ChangePaveBlocksPool),
             R"#(Selector/Modifier Returns the information about pave blocks on source edges)#" )
        .def("HasPaveBlocks",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::HasPaveBlocks),
             R"#(Query Returns true if the shape with index theIndex has the information about pave blocks)#"  , py::arg("theIndex"))
        .def("PaveBlocks",
             (const BOPDS_ListOfPaveBlock & (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<const BOPDS_ListOfPaveBlock & (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::PaveBlocks),
             R"#(Selector Returns the pave blocks for the shape with index theIndex)#"  , py::arg("theIndex"))
        .def("ChangePaveBlocks",
             (BOPDS_ListOfPaveBlock & (BOPDS_DS::*)( const Standard_Integer  ) ) static_cast<BOPDS_ListOfPaveBlock & (BOPDS_DS::*)( const Standard_Integer  ) >(&BOPDS_DS::ChangePaveBlocks),
             R"#(Selector/Modifier Returns the pave blocks for the shape with index theIndex)#"  , py::arg("theIndex"))
        .def("UpdatePaveBlocks",
             (void (BOPDS_DS::*)() ) static_cast<void (BOPDS_DS::*)() >(&BOPDS_DS::UpdatePaveBlocks),
             R"#(Update the pave blocks for the all shapes in data structure)#" )
        .def("UpdatePaveBlock",
             (void (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<void (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_DS::UpdatePaveBlock),
             R"#(Update the pave block thePB)#"  , py::arg("thePB"))
        .def("UpdateCommonBlock",
             (void (BOPDS_DS::*)( const opencascade::handle<BOPDS_CommonBlock> & ,  const Standard_Real  ) ) static_cast<void (BOPDS_DS::*)( const opencascade::handle<BOPDS_CommonBlock> & ,  const Standard_Real  ) >(&BOPDS_DS::UpdateCommonBlock),
             R"#(Update the common block theCB)#"  , py::arg("theCB"),  py::arg("theFuzz"))
        .def("IsCommonBlock",
             (Standard_Boolean (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const>(&BOPDS_DS::IsCommonBlock),
             R"#(Query Returns true if the pave block is common block)#"  , py::arg("thePB"))
        .def("CommonBlock",
             (opencascade::handle<BOPDS_CommonBlock> (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const) static_cast<opencascade::handle<BOPDS_CommonBlock> (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const>(&BOPDS_DS::CommonBlock),
             R"#(Selector Returns the common block)#"  , py::arg("thePB"))
        .def("SetCommonBlock",
             (void (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> & ,  const opencascade::handle<BOPDS_CommonBlock> &  ) ) static_cast<void (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> & ,  const opencascade::handle<BOPDS_CommonBlock> &  ) >(&BOPDS_DS::SetCommonBlock),
             R"#(Modifier Sets the common block <theCB>)#"  , py::arg("thePB"),  py::arg("theCB"))
        .def("RealPaveBlock",
             (opencascade::handle<BOPDS_PaveBlock> (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const) static_cast<opencascade::handle<BOPDS_PaveBlock> (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const>(&BOPDS_DS::RealPaveBlock),
             R"#(Selector Returns the real first pave block)#"  , py::arg("thePB"))
        .def("IsCommonBlockOnEdge",
             (Standard_Boolean (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const>(&BOPDS_DS::IsCommonBlockOnEdge),
             R"#(Query Returns true if common block contains more then one pave block)#"  , py::arg("thePB"))
        .def("FaceInfoPool",
             (const BOPDS_VectorOfFaceInfo & (BOPDS_DS::*)() const) static_cast<const BOPDS_VectorOfFaceInfo & (BOPDS_DS::*)() const>(&BOPDS_DS::FaceInfoPool),
             R"#(Selector Returns the information about state of faces)#" )
        .def("HasFaceInfo",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::HasFaceInfo),
             R"#(Query Returns true if the shape with index theIndex has the information about state of face)#"  , py::arg("theIndex"))
        .def("FaceInfo",
             (const BOPDS_FaceInfo & (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<const BOPDS_FaceInfo & (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::FaceInfo),
             R"#(Selector Returns the state of face with index theIndex)#"  , py::arg("theIndex"))
        .def("ChangeFaceInfo",
             (BOPDS_FaceInfo & (BOPDS_DS::*)( const Standard_Integer  ) ) static_cast<BOPDS_FaceInfo & (BOPDS_DS::*)( const Standard_Integer  ) >(&BOPDS_DS::ChangeFaceInfo),
             R"#(Selector/Modifier Returns the state of face with index theIndex)#"  , py::arg("theIndex"))
        .def("UpdateFaceInfoIn",
             (void (BOPDS_DS::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer  ) >(&BOPDS_DS::UpdateFaceInfoIn),
             R"#(Update the state In of face with index theIndex)#"  , py::arg("theIndex"))
        .def("UpdateFaceInfoOn",
             (void (BOPDS_DS::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer  ) >(&BOPDS_DS::UpdateFaceInfoOn),
             R"#(Update the state On of face with index theIndex)#"  , py::arg("theIndex"))
        .def("FaceInfoOn",
             (void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> & ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> &  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> & ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> &  ) >(&BOPDS_DS::FaceInfoOn),
             R"#(Selector Returns the state On [theMPB,theMVP] of face with index theIndex)#"  , py::arg("theIndex"),  py::arg("theMPB"),  py::arg("theMVP"))
        .def("FaceInfoIn",
             (void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> & ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> &  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> & ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> &  ) >(&BOPDS_DS::FaceInfoIn),
             R"#(Selector Returns the state In [theMPB,theMVP] of face with index theIndex)#"  , py::arg("theIndex"),  py::arg("theMPB"),  py::arg("theMVP"))
        .def("AloneVertices",
             (void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_List<Standard_Integer> &  ) const) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_List<Standard_Integer> &  ) const>(&BOPDS_DS::AloneVertices),
             R"#(Selector Returns the indices of alone vertices for the face with index theIndex)#"  , py::arg("theF"),  py::arg("theLI"))
        .def("RefineFaceInfoOn",
             (void (BOPDS_DS::*)() ) static_cast<void (BOPDS_DS::*)() >(&BOPDS_DS::RefineFaceInfoOn),
             R"#(Refine the state On for the all faces having state information)#" )
        .def("SubShapesOnIn",
             (void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> & ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> & ,  NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> & ,  NCollection_Map<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> &  ) const) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> & ,  NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> & ,  NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> & ,  NCollection_Map<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher> &  ) const>(&BOPDS_DS::SubShapesOnIn),
             R"#(Returns information about ON/IN sub-shapes of the given faces.)#"  , py::arg("theNF1"),  py::arg("theNF2"),  py::arg("theMVOnIn"),  py::arg("theMVCommon"),  py::arg("thePBOnIn"),  py::arg("theCommonPB"))
        .def("SharedEdges",
             (void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer ,  NCollection_List<Standard_Integer> & ,  const opencascade::handle<NCollection_BaseAllocator> &  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer ,  NCollection_List<Standard_Integer> & ,  const opencascade::handle<NCollection_BaseAllocator> &  ) >(&BOPDS_DS::SharedEdges),
             R"#(Returns the indices of edges that are shared for the faces with indices theF1, theF2)#"  , py::arg("theF1"),  py::arg("theF2"),  py::arg("theLI"),  py::arg("theAllocator"))
        .def("ShapesSD",
             (TColStd_DataMapOfIntegerInteger & (BOPDS_DS::*)() ) static_cast<TColStd_DataMapOfIntegerInteger & (BOPDS_DS::*)() >(&BOPDS_DS::ShapesSD),
             R"#(Selector Returns the collection same domain shapes)#" )
        .def("AddShapeSD",
             (void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_DS::AddShapeSD),
             R"#(Modifier Adds the information about same domain shapes with indices theIndex, theIndexSD)#"  , py::arg("theIndex"),  py::arg("theIndexSD"))
        .def("HasShapeSD",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  Standard_Integer &  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  Standard_Integer &  ) const>(&BOPDS_DS::HasShapeSD),
             R"#(Query Returns true if the shape with index theIndex has the same domain shape. In this case theIndexSD will contain the index of same domain shape found)#"  , py::arg("theIndex"),  py::arg("theIndexSD"))
        .def("InterfVV",
             (BOPDS_VectorOfInterfVV & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVV & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVV),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Vertex)#" )
        .def("InterfVE",
             (BOPDS_VectorOfInterfVE & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVE & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVE),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Edge)#" )
        .def("InterfVF",
             (BOPDS_VectorOfInterfVF & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVF & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVF),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Face)#" )
        .def("InterfEE",
             (BOPDS_VectorOfInterfEE & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfEE & (BOPDS_DS::*)() >(&BOPDS_DS::InterfEE),
             R"#(Selector/Modifier Returns the collection of interferences Edge/Edge)#" )
        .def("InterfEF",
             (BOPDS_VectorOfInterfEF & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfEF & (BOPDS_DS::*)() >(&BOPDS_DS::InterfEF),
             R"#(Selector/Modifier Returns the collection of interferences Edge/Face)#" )
        .def("InterfFF",
             (BOPDS_VectorOfInterfFF & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfFF & (BOPDS_DS::*)() >(&BOPDS_DS::InterfFF),
             R"#(Selector/Modifier Returns the collection of interferences Face/Face)#" )
        .def("InterfVZ",
             (BOPDS_VectorOfInterfVZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVZ),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Solid)#" )
        .def("InterfEZ",
             (BOPDS_VectorOfInterfEZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfEZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfEZ),
             R"#(Selector/Modifier Returns the collection of interferences Edge/Solid)#" )
        .def("InterfFZ",
             (BOPDS_VectorOfInterfFZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfFZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfFZ),
             R"#(Selector/Modifier Returns the collection of interferences Face/Solid)#" )
        .def("InterfZZ",
             (BOPDS_VectorOfInterfZZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfZZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfZZ),
             R"#(Selector/Modifier Returns the collection of interferences Solid/Solid)#" )
        .def("AddInterf",
             (void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_DS::AddInterf),
             R"#(Modifier Adds the information about an interference between shapes with indices theI1, theI2 to the summary table of interferences)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("HasInterf",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer  ) const>(&BOPDS_DS::HasInterf),
             R"#(Query Returns true if the shape with index theI is interferred)#"  , py::arg("theI"))
        .def("HasInterf",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BOPDS_DS::HasInterf),
             R"#(Query Returns true if the shapes with indices theI1, theI2 are interferred)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("HasInterfShapeSubShapes",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&BOPDS_DS::HasInterfShapeSubShapes),
             R"#(Query Returns true if the shape with index theI1 is interfered with any sub-shape of the shape with index theI2 (theFlag=true) all sub-shapes of the shape with index theI2 (theFlag=false))#"  , py::arg("theI1"),  py::arg("theI2"),  py::arg("theFlag")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasInterfSubShapes",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BOPDS_DS::HasInterfSubShapes),
             R"#(Query Returns true if the shapes with indices theI1, theI2 have interferred sub-shapes)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("Interferences",
             (const BOPDS_MapOfPair & (BOPDS_DS::*)() const) static_cast<const BOPDS_MapOfPair & (BOPDS_DS::*)() const>(&BOPDS_DS::Interferences),
             R"#(Selector Returns the table of interferences)#" )
        .def("Dump",
             (void (BOPDS_DS::*)() const) static_cast<void (BOPDS_DS::*)() const>(&BOPDS_DS::Dump),
             R"#(None)#" )
        .def("IsSubShape",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_DS::IsSubShape),
             R"#(None)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("Paves",
             (void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_List<BOPDS_Pave> &  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  NCollection_List<BOPDS_Pave> &  ) >(&BOPDS_DS::Paves),
             R"#(Fills theLP with sorted paves of the shape with index theIndex)#"  , py::arg("theIndex"),  py::arg("theLP"))
        .def("UpdateEdgeTolerance",
             (void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&BOPDS_DS::UpdateEdgeTolerance),
             R"#(Updates tolerance of the sub-shapes of the shape with index <theIndex>.)#"  , py::arg("theIndex"),  py::arg("theTolerance"),  py::arg("theFuzz")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def("UpdatePaveBlocksWithSDVertices",
             (void (BOPDS_DS::*)() ) static_cast<void (BOPDS_DS::*)() >(&BOPDS_DS::UpdatePaveBlocksWithSDVertices),
             R"#(Update the pave blocks for all shapes in data structure)#" )
        .def("UpdatePaveBlockWithSDVertices",
             (void (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<void (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_DS::UpdatePaveBlockWithSDVertices),
             R"#(Update the pave block for all shapes in data structure)#"  , py::arg("thePB"))
        .def("UpdateCommonBlockWithSDVertices",
             (void (BOPDS_DS::*)( const opencascade::handle<BOPDS_CommonBlock> &  ) ) static_cast<void (BOPDS_DS::*)( const opencascade::handle<BOPDS_CommonBlock> &  ) >(&BOPDS_DS::UpdateCommonBlockWithSDVertices),
             R"#(Update the pave block of the common block for all shapes in data structure)#"  , py::arg("theCB"))
        .def("InitPaveBlocksForVertex",
             (void (BOPDS_DS::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer  ) >(&BOPDS_DS::InitPaveBlocksForVertex),
             R"#(None)#"  , py::arg("theNV"))
        .def("ReleasePaveBlocks",
             (void (BOPDS_DS::*)() ) static_cast<void (BOPDS_DS::*)() >(&BOPDS_DS::ReleasePaveBlocks),
             R"#(Clears information about PaveBlocks for the untouched edges)#" )
        .def("IsValidShrunkData",
             (Standard_Boolean (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) ) static_cast<Standard_Boolean (BOPDS_DS::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) >(&BOPDS_DS::IsValidShrunkData),
             R"#(Checks if the existing shrunk data of the pave block is still valid. The shrunk data may become invalid if e.g. the vertices of the pave block have been replaced with the new one with bigger tolerances, or the tolerances of the existing vertices have been increased.)#"  , py::arg("thePB"))
        .def("BuildBndBoxSolid",
             (void (BOPDS_DS::*)( const Standard_Integer ,  Bnd_Box & ,  const Standard_Boolean  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  Bnd_Box & ,  const Standard_Boolean  ) >(&BOPDS_DS::BuildBndBoxSolid),
             R"#(Computes bounding box <theBox> for the solid with DS-index <theIndex>. The flag <theCheckInverted> enables/disables the check of the solid for inverted status. By default the solids will be checked.)#"  , py::arg("theIndex"),  py::arg("theBox"),  py::arg("theCheckInverted")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InterfVV",
             (BOPDS_VectorOfInterfVV & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVV & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVV),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Vertex)#" )
        .def("InterfVE",
             (BOPDS_VectorOfInterfVE & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVE & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVE),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Edge)#" )
        .def("InterfVF",
             (BOPDS_VectorOfInterfVF & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVF & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVF),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Face)#" )
        .def("InterfEE",
             (BOPDS_VectorOfInterfEE & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfEE & (BOPDS_DS::*)() >(&BOPDS_DS::InterfEE),
             R"#(Selector/Modifier Returns the collection of interferences Edge/Edge)#" )
        .def("InterfEF",
             (BOPDS_VectorOfInterfEF & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfEF & (BOPDS_DS::*)() >(&BOPDS_DS::InterfEF),
             R"#(Selector/Modifier Returns the collection of interferences Edge/Face)#" )
        .def("InterfFF",
             (BOPDS_VectorOfInterfFF & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfFF & (BOPDS_DS::*)() >(&BOPDS_DS::InterfFF),
             R"#(Selector/Modifier Returns the collection of interferences Face/Face)#" )
        .def("InterfVZ",
             (BOPDS_VectorOfInterfVZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfVZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfVZ),
             R"#(Selector/Modifier Returns the collection of interferences Vertex/Solid)#" )
        .def("InterfEZ",
             (BOPDS_VectorOfInterfEZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfEZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfEZ),
             R"#(Selector/Modifier Returns the collection of interferences Edge/Solid)#" )
        .def("InterfFZ",
             (BOPDS_VectorOfInterfFZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfFZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfFZ),
             R"#(Selector/Modifier Returns the collection of interferences Face/Solid)#" )
        .def("InterfZZ",
             (BOPDS_VectorOfInterfZZ & (BOPDS_DS::*)() ) static_cast<BOPDS_VectorOfInterfZZ & (BOPDS_DS::*)() >(&BOPDS_DS::InterfZZ),
             R"#(Selector/Modifier Returns the collection of interferences Solid/Solid)#" )
        .def("AddInterf",
             (void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_DS::AddInterf),
             R"#(Modifier Adds the information about an interference between shapes with indices theI1, theI2 to the summary table of interferences)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("HasInterf",
             (Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_DS::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BOPDS_DS::HasInterf),
             R"#(Query Returns true if the shapes with indices theI1, theI2 are interferred)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("Interferences",
             (const BOPDS_MapOfPair & (BOPDS_DS::*)() const) static_cast<const BOPDS_MapOfPair & (BOPDS_DS::*)() const>(&BOPDS_DS::Interferences),
             R"#(Selector Returns the table of interferences)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NbInterfTypes_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&BOPDS_DS::NbInterfTypes),
                    R"#(Returns the number of types of the interferences)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_FaceInfo , shared_ptr<BOPDS_FaceInfo>  >>(m.attr("BOPDS_FaceInfo"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("Clear",
             (void (BOPDS_FaceInfo::*)() ) static_cast<void (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::Clear),
             R"#(Clears the contents)#" )
        .def("SetIndex",
             (void (BOPDS_FaceInfo::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_FaceInfo::*)( const Standard_Integer  ) >(&BOPDS_FaceInfo::SetIndex),
             R"#(Modifier Sets the index of the face <theI>)#"  , py::arg("theI"))
        .def("Index",
             (Standard_Integer (BOPDS_FaceInfo::*)() const) static_cast<Standard_Integer (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::Index),
             R"#(Selector Returns the index of the face)#" )
        .def("PaveBlocksIn",
             (const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const) static_cast<const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::PaveBlocksIn),
             R"#(Selector Returns the pave blocks of the face that have state In)#" )
        .def("ChangePaveBlocksIn",
             (BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() ) static_cast<BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangePaveBlocksIn),
             R"#(Selector/Modifier Returns the pave blocks of the face that have state In)#" )
        .def("VerticesIn",
             (const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const) static_cast<const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::VerticesIn),
             R"#(Selector Returns the list of indices for vertices of the face that have state In)#" )
        .def("ChangeVerticesIn",
             (TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() ) static_cast<TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangeVerticesIn),
             R"#(Selector/Modifier Returns the list of indices for vertices of the face that have state In)#" )
        .def("PaveBlocksOn",
             (const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const) static_cast<const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::PaveBlocksOn),
             R"#(Selector Returns the pave blocks of the face that have state On)#" )
        .def("ChangePaveBlocksOn",
             (BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() ) static_cast<BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangePaveBlocksOn),
             R"#(Selector/Modifier Returns the pave blocks of the face that have state On)#" )
        .def("VerticesOn",
             (const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const) static_cast<const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::VerticesOn),
             R"#(Selector Returns the list of indices for vertices of the face that have state On)#" )
        .def("ChangeVerticesOn",
             (TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() ) static_cast<TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangeVerticesOn),
             R"#(Selector/Modifier Returns the list of indices for vertices of the face that have state On)#" )
        .def("PaveBlocksSc",
             (const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const) static_cast<const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::PaveBlocksSc),
             R"#(Selector Returns the pave blocks of the face that are pave blocks of section edges)#" )
        .def("ChangePaveBlocksSc",
             (BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() ) static_cast<BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangePaveBlocksSc),
             R"#(None)#" )
        .def("VerticesSc",
             (const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const) static_cast<const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::VerticesSc),
             R"#(Selector Returns the list of indices for section vertices of the face)#" )
        .def("ChangeVerticesSc",
             (TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() ) static_cast<TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangeVerticesSc),
             R"#(Selector/Modifier Returns the list of indices for section vertices of the face)#" )
        .def("Clear",
             (void (BOPDS_FaceInfo::*)() ) static_cast<void (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::Clear),
             R"#(Clears the contents)#" )
        .def("SetIndex",
             (void (BOPDS_FaceInfo::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_FaceInfo::*)( const Standard_Integer  ) >(&BOPDS_FaceInfo::SetIndex),
             R"#(Modifier Sets the index of the face <theI>)#"  , py::arg("theI"))
        .def("Index",
             (Standard_Integer (BOPDS_FaceInfo::*)() const) static_cast<Standard_Integer (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::Index),
             R"#(Selector Returns the index of the face)#" )
        .def("PaveBlocksIn",
             (const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const) static_cast<const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::PaveBlocksIn),
             R"#(Selector Returns the pave blocks of the face that have state In)#" )
        .def("ChangePaveBlocksIn",
             (BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() ) static_cast<BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangePaveBlocksIn),
             R"#(Selector/Modifier Returns the pave blocks of the face that have state In)#" )
        .def("VerticesIn",
             (const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const) static_cast<const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::VerticesIn),
             R"#(Selector Returns the list of indices for vertices of the face that have state In)#" )
        .def("ChangeVerticesIn",
             (TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() ) static_cast<TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangeVerticesIn),
             R"#(Selector/Modifier Returns the list of indices for vertices of the face that have state In)#" )
        .def("PaveBlocksOn",
             (const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const) static_cast<const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::PaveBlocksOn),
             R"#(Selector Returns the pave blocks of the face that have state On)#" )
        .def("ChangePaveBlocksOn",
             (BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() ) static_cast<BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangePaveBlocksOn),
             R"#(Selector/Modifier Returns the pave blocks of the face that have state On)#" )
        .def("VerticesOn",
             (const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const) static_cast<const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::VerticesOn),
             R"#(Selector Returns the list of indices for vertices of the face that have state On)#" )
        .def("ChangeVerticesOn",
             (TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() ) static_cast<TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangeVerticesOn),
             R"#(Selector/Modifier Returns the list of indices for vertices of the face that have state On)#" )
        .def("PaveBlocksSc",
             (const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const) static_cast<const BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::PaveBlocksSc),
             R"#(Selector Returns the pave blocks of the face that are pave blocks of section edges)#" )
        .def("ChangePaveBlocksSc",
             (BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() ) static_cast<BOPDS_IndexedMapOfPaveBlock & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangePaveBlocksSc),
             R"#(None)#" )
        .def("VerticesSc",
             (const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const) static_cast<const TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() const>(&BOPDS_FaceInfo::VerticesSc),
             R"#(Selector Returns the list of indices for section vertices of the face)#" )
        .def("ChangeVerticesSc",
             (TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() ) static_cast<TColStd_MapOfInteger & (BOPDS_FaceInfo::*)() >(&BOPDS_FaceInfo::ChangeVerticesSc),
             R"#(Selector/Modifier Returns the list of indices for section vertices of the face)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_IndexRange , shared_ptr<BOPDS_IndexRange>  >>(m.attr("BOPDS_IndexRange"))
        .def(py::init<  >()  )
    // methods
        .def("SetFirst",
             (void (BOPDS_IndexRange::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_IndexRange::*)( const Standard_Integer  ) >(&BOPDS_IndexRange::SetFirst),
             R"#(Modifier Sets the first index <theI1> of the range)#"  , py::arg("theI1"))
        .def("SetLast",
             (void (BOPDS_IndexRange::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_IndexRange::*)( const Standard_Integer  ) >(&BOPDS_IndexRange::SetLast),
             R"#(Modifier Sets the second index <theI2> of the range)#"  , py::arg("theI2"))
        .def("First",
             (Standard_Integer (BOPDS_IndexRange::*)() const) static_cast<Standard_Integer (BOPDS_IndexRange::*)() const>(&BOPDS_IndexRange::First),
             R"#(Selector Returns the first index of the range)#" )
        .def("Last",
             (Standard_Integer (BOPDS_IndexRange::*)() const) static_cast<Standard_Integer (BOPDS_IndexRange::*)() const>(&BOPDS_IndexRange::Last),
             R"#(Selector Returns the second index of the range)#" )
        .def("SetIndices",
             (void (BOPDS_IndexRange::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_IndexRange::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_IndexRange::SetIndices),
             R"#(Modifier Sets the first index of the range <theI1> Sets the second index of the range <theI2>)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("Contains",
             (Standard_Boolean (BOPDS_IndexRange::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_IndexRange::*)( const Standard_Integer  ) const>(&BOPDS_IndexRange::Contains),
             R"#(Query Returns true if the range contains <theIndex>)#"  , py::arg("theIndex"))
        .def("Dump",
             (void (BOPDS_IndexRange::*)() const) static_cast<void (BOPDS_IndexRange::*)() const>(&BOPDS_IndexRange::Dump),
             R"#(None)#" )
        .def("SetFirst",
             (void (BOPDS_IndexRange::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_IndexRange::*)( const Standard_Integer  ) >(&BOPDS_IndexRange::SetFirst),
             R"#(Modifier Sets the first index <theI1> of the range)#"  , py::arg("aFirst"))
        .def("First",
             (Standard_Integer (BOPDS_IndexRange::*)() const) static_cast<Standard_Integer (BOPDS_IndexRange::*)() const>(&BOPDS_IndexRange::First),
             R"#(Selector Returns the first index of the range)#" )
        .def("SetLast",
             (void (BOPDS_IndexRange::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_IndexRange::*)( const Standard_Integer  ) >(&BOPDS_IndexRange::SetLast),
             R"#(Modifier Sets the second index <theI2> of the range)#"  , py::arg("aLast"))
        .def("Last",
             (Standard_Integer (BOPDS_IndexRange::*)() const) static_cast<Standard_Integer (BOPDS_IndexRange::*)() const>(&BOPDS_IndexRange::Last),
             R"#(Selector Returns the second index of the range)#" )
        .def("SetIndices",
             (void (BOPDS_IndexRange::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_IndexRange::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_IndexRange::SetIndices),
             R"#(Modifier Sets the first index of the range <theI1> Sets the second index of the range <theI2>)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("Contains",
             (Standard_Boolean (BOPDS_IndexRange::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_IndexRange::*)( const Standard_Integer  ) const>(&BOPDS_IndexRange::Contains),
             R"#(Query Returns true if the range contains <theIndex>)#"  , py::arg("aIndex"))
    // methods using call by reference i.s.o. return
        .def("Indices",
             []( BOPDS_IndexRange &self   ){ Standard_Integer  theI1; Standard_Integer  theI2; self.Indices(theI1,theI2); return std::make_tuple(theI1,theI2); },
             R"#(Selector Returns the first index of the range <theI1> Returns the second index of the range <theI2>)#" )
        .def("Indices",
             []( BOPDS_IndexRange &self   ){ Standard_Integer  theI1; Standard_Integer  theI2; self.Indices(theI1,theI2); return std::make_tuple(theI1,theI2); },
             R"#(Selector Returns the first index of the range <theI1> Returns the second index of the range <theI2>)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_Interf , shared_ptr_nodelete<BOPDS_Interf>  >>(m.attr("BOPDS_Interf"))
    // methods
        .def("SetIndices",
             (void (BOPDS_Interf::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_Interf::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_Interf::SetIndices),
             R"#(Sets the indices of interferred shapes)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("SetIndex1",
             (void (BOPDS_Interf::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_Interf::*)( const Standard_Integer  ) >(&BOPDS_Interf::SetIndex1),
             R"#(Sets the index of the first interferred shape)#"  , py::arg("theIndex"))
        .def("SetIndex2",
             (void (BOPDS_Interf::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_Interf::*)( const Standard_Integer  ) >(&BOPDS_Interf::SetIndex2),
             R"#(Sets the index of the second interferred shape)#"  , py::arg("theIndex"))
        .def("Index1",
             (Standard_Integer (BOPDS_Interf::*)() const) static_cast<Standard_Integer (BOPDS_Interf::*)() const>(&BOPDS_Interf::Index1),
             R"#(Returns the index of the first interferred shape)#" )
        .def("Index2",
             (Standard_Integer (BOPDS_Interf::*)() const) static_cast<Standard_Integer (BOPDS_Interf::*)() const>(&BOPDS_Interf::Index2),
             R"#(Returns the index of the second interferred shape)#" )
        .def("OppositeIndex",
             (Standard_Integer (BOPDS_Interf::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BOPDS_Interf::*)( const Standard_Integer  ) const>(&BOPDS_Interf::OppositeIndex),
             R"#(Returns the index of that are opposite to the given index)#"  , py::arg("theI"))
        .def("Contains",
             (Standard_Boolean (BOPDS_Interf::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_Interf::*)( const Standard_Integer  ) const>(&BOPDS_Interf::Contains),
             R"#(Returns true if the interference contains given index)#"  , py::arg("theIndex"))
        .def("SetIndexNew",
             (void (BOPDS_Interf::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_Interf::*)( const Standard_Integer  ) >(&BOPDS_Interf::SetIndexNew),
             R"#(Sets the index of new shape)#"  , py::arg("theIndex"))
        .def("IndexNew",
             (Standard_Integer (BOPDS_Interf::*)() const) static_cast<Standard_Integer (BOPDS_Interf::*)() const>(&BOPDS_Interf::IndexNew),
             R"#(Returns the index of new shape)#" )
        .def("HasIndexNew",
             (Standard_Boolean (BOPDS_Interf::*)( Standard_Integer &  ) const) static_cast<Standard_Boolean (BOPDS_Interf::*)( Standard_Integer &  ) const>(&BOPDS_Interf::HasIndexNew),
             R"#(Returns true if the interference has index of new shape that is equal to the given index)#"  , py::arg("theIndex"))
        .def("HasIndexNew",
             (Standard_Boolean (BOPDS_Interf::*)() const) static_cast<Standard_Boolean (BOPDS_Interf::*)() const>(&BOPDS_Interf::HasIndexNew),
             R"#(Returns true if the interference has index of new shape the index)#" )
    // methods using call by reference i.s.o. return
        .def("Indices",
             []( BOPDS_Interf &self   ){ Standard_Integer  theIndex1; Standard_Integer  theIndex2; self.Indices(theIndex1,theIndex2); return std::make_tuple(theIndex1,theIndex2); },
             R"#(Returns the indices of interferred shapes)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_Iterator , shared_ptr<BOPDS_Iterator>  >>(m.attr("BOPDS_Iterator"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("DS",
             (const BOPDS_DS & (BOPDS_Iterator::*)() const) static_cast<const BOPDS_DS & (BOPDS_Iterator::*)() const>(&BOPDS_Iterator::DS),
             R"#(Selector Returns the data structure)#" )
        .def("Initialize",
             (void (BOPDS_Iterator::*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<void (BOPDS_Iterator::*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&BOPDS_Iterator::Initialize),
             R"#(Initializes the iterator theType1 - the first type of shape theType2 - the second type of shape)#"  , py::arg("theType1"),  py::arg("theType2"))
        .def("More",
             (Standard_Boolean (BOPDS_Iterator::*)() const) static_cast<Standard_Boolean (BOPDS_Iterator::*)() const>(&BOPDS_Iterator::More),
             R"#(Returns true if still there are pairs of intersected shapes)#" )
        .def("Next",
             (void (BOPDS_Iterator::*)() ) static_cast<void (BOPDS_Iterator::*)() >(&BOPDS_Iterator::Next),
             R"#(Moves iterations ahead)#" )
        .def("Prepare",
             (void (BOPDS_Iterator::*)( const opencascade::handle<IntTools_Context> & ,  const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (BOPDS_Iterator::*)( const opencascade::handle<IntTools_Context> & ,  const Standard_Boolean ,  const Standard_Real  ) >(&BOPDS_Iterator::Prepare),
             R"#(Perform the intersection algorithm and prepare the results to be used)#"  , py::arg("theCtx")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )),  py::arg("theCheckOBB")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theFuzzyValue")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def("ExpectedLength",
             (Standard_Integer (BOPDS_Iterator::*)() const) static_cast<Standard_Integer (BOPDS_Iterator::*)() const>(&BOPDS_Iterator::ExpectedLength),
             R"#(Returns the number of intersections founded)#" )
        .def("BlockLength",
             (Standard_Integer (BOPDS_Iterator::*)() const) static_cast<Standard_Integer (BOPDS_Iterator::*)() const>(&BOPDS_Iterator::BlockLength),
             R"#(Returns the block length)#" )
        .def("SetRunParallel",
             (void (BOPDS_Iterator::*)( const Standard_Boolean  ) ) static_cast<void (BOPDS_Iterator::*)( const Standard_Boolean  ) >(&BOPDS_Iterator::SetRunParallel),
             R"#(Set the flag of parallel processing if <theFlag> is true the parallel processing is switched on if <theFlag> is false the parallel processing is switched off)#"  , py::arg("theFlag"))
        .def("RunParallel",
             (Standard_Boolean (BOPDS_Iterator::*)() const) static_cast<Standard_Boolean (BOPDS_Iterator::*)() const>(&BOPDS_Iterator::RunParallel),
             R"#(Returns the flag of parallel processing)#" )
    // methods using call by reference i.s.o. return
        .def("Value",
             []( BOPDS_Iterator &self   ){ Standard_Integer  theIndex1; Standard_Integer  theIndex2; self.Value(theIndex1,theIndex2); return std::make_tuple(theIndex1,theIndex2); },
             R"#(Returns indices (DS) of intersected shapes theIndex1 - the index of the first shape theIndex2 - the index of the second shape)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_Pair , shared_ptr<BOPDS_Pair>  >>(m.attr("BOPDS_Pair"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theIndex1"),  py::arg("theIndex2") )
    // methods
        .def("SetIndices",
             (void (BOPDS_Pair::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_Pair::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_Pair::SetIndices),
             R"#(Sets the indices)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("IsEqual",
             (Standard_Boolean (BOPDS_Pair::*)( const BOPDS_Pair &  ) const) static_cast<Standard_Boolean (BOPDS_Pair::*)( const BOPDS_Pair &  ) const>(&BOPDS_Pair::IsEqual),
             R"#(Returns true if the Pair is equal to <the theOther>)#"  , py::arg("theOther"))
        .def("HashCode",
             (Standard_Integer (BOPDS_Pair::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BOPDS_Pair::*)( const Standard_Integer  ) const>(&BOPDS_Pair::HashCode),
             R"#(Returns hash code)#"  , py::arg("theUpper"))
    // methods using call by reference i.s.o. return
        .def("Indices",
             []( BOPDS_Pair &self   ){ Standard_Integer  theIndex1; Standard_Integer  theIndex2; self.Indices(theIndex1,theIndex2); return std::make_tuple(theIndex1,theIndex2); },
             R"#(Gets the indices)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BOPDS_PairMapHasher , shared_ptr<BOPDS_PairMapHasher>>(m,"BOPDS_PairMapHasher");

    static_cast<py::class_<BOPDS_PairMapHasher , shared_ptr<BOPDS_PairMapHasher>  >>(m.attr("BOPDS_PairMapHasher"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const BOPDS_Pair & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const BOPDS_Pair & ,  const Standard_Integer  ) >(&BOPDS_PairMapHasher::HashCode),
                    R"#(None)#"  , py::arg("thePair"),  py::arg("Upper"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const BOPDS_Pair & ,  const BOPDS_Pair &  ) ) static_cast<Standard_Boolean (*)( const BOPDS_Pair & ,  const BOPDS_Pair &  ) >(&BOPDS_PairMapHasher::IsEqual),
                    R"#(None)#"  , py::arg("thePair1"),  py::arg("thePair2"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_Pave , shared_ptr<BOPDS_Pave>  >>(m.attr("BOPDS_Pave"))
        .def(py::init<  >()  )
    // methods
        .def("SetIndex",
             (void (BOPDS_Pave::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_Pave::*)( const Standard_Integer  ) >(&BOPDS_Pave::SetIndex),
             R"#(Modifier Sets the index of vertex <theIndex>)#"  , py::arg("theIndex"))
        .def("Index",
             (Standard_Integer (BOPDS_Pave::*)() const) static_cast<Standard_Integer (BOPDS_Pave::*)() const>(&BOPDS_Pave::Index),
             R"#(Selector Returns the index of vertex)#" )
        .def("SetParameter",
             (void (BOPDS_Pave::*)( const Standard_Real  ) ) static_cast<void (BOPDS_Pave::*)( const Standard_Real  ) >(&BOPDS_Pave::SetParameter),
             R"#(Modifier Sets the parameter of vertex <theParameter>)#"  , py::arg("theParameter"))
        .def("Parameter",
             (Standard_Real (BOPDS_Pave::*)() const) static_cast<Standard_Real (BOPDS_Pave::*)() const>(&BOPDS_Pave::Parameter),
             R"#(Selector Returns the parameter of vertex)#" )
        .def("IsLess",
             (Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const) static_cast<Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const>(&BOPDS_Pave::IsLess),
             R"#(Query Returns true if thr parameter od this is less than the parameter of <theOther>)#"  , py::arg("theOther"))
        .def("IsEqual",
             (Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const) static_cast<Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const>(&BOPDS_Pave::IsEqual),
             R"#(Query Returns true if thr parameter od this is equal to the parameter of <theOther>)#"  , py::arg("theOther"))
        .def("Dump",
             (void (BOPDS_Pave::*)() const) static_cast<void (BOPDS_Pave::*)() const>(&BOPDS_Pave::Dump),
             R"#(None)#" )
        .def("SetIndex",
             (void (BOPDS_Pave::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_Pave::*)( const Standard_Integer  ) >(&BOPDS_Pave::SetIndex),
             R"#(Modifier Sets the index of vertex <theIndex>)#"  , py::arg("theIndex"))
        .def("Index",
             (Standard_Integer (BOPDS_Pave::*)() const) static_cast<Standard_Integer (BOPDS_Pave::*)() const>(&BOPDS_Pave::Index),
             R"#(Selector Returns the index of vertex)#" )
        .def("SetParameter",
             (void (BOPDS_Pave::*)( const Standard_Real  ) ) static_cast<void (BOPDS_Pave::*)( const Standard_Real  ) >(&BOPDS_Pave::SetParameter),
             R"#(Modifier Sets the parameter of vertex <theParameter>)#"  , py::arg("theParameter"))
        .def("Parameter",
             (Standard_Real (BOPDS_Pave::*)() const) static_cast<Standard_Real (BOPDS_Pave::*)() const>(&BOPDS_Pave::Parameter),
             R"#(Selector Returns the parameter of vertex)#" )
        .def("IsLess",
             (Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const) static_cast<Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const>(&BOPDS_Pave::IsLess),
             R"#(Query Returns true if thr parameter od this is less than the parameter of <theOther>)#"  , py::arg("theOther"))
        .def("IsEqual",
             (Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const) static_cast<Standard_Boolean (BOPDS_Pave::*)( const BOPDS_Pave &  ) const>(&BOPDS_Pave::IsEqual),
             R"#(Query Returns true if thr parameter od this is equal to the parameter of <theOther>)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
        .def("Contents",
             []( BOPDS_Pave &self   ){ Standard_Integer  theIndex; Standard_Real  theParameter; self.Contents(theIndex,theParameter); return std::make_tuple(theIndex,theParameter); },
             R"#(Selector Returns the index of vertex <theIndex> Returns the parameter of vertex <theParameter>)#" )
        .def("Contents",
             []( BOPDS_Pave &self   ){ Standard_Integer  theIndex; Standard_Real  theParameter; self.Contents(theIndex,theParameter); return std::make_tuple(theIndex,theParameter); },
             R"#(Selector Returns the index of vertex <theIndex> Returns the parameter of vertex <theParameter>)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_PaveBlock ,opencascade::handle<BOPDS_PaveBlock>  , Standard_Transient >>(m.attr("BOPDS_PaveBlock"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("SetPave1",
             (void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) ) static_cast<void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) >(&BOPDS_PaveBlock::SetPave1),
             R"#(Modifier Sets the first pave <thePave>)#"  , py::arg("thePave"))
        .def("Pave1",
             (const BOPDS_Pave & (BOPDS_PaveBlock::*)() const) static_cast<const BOPDS_Pave & (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::Pave1),
             R"#(Selector Returns the first pave)#" )
        .def("SetPave2",
             (void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) ) static_cast<void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) >(&BOPDS_PaveBlock::SetPave2),
             R"#(Modifier Sets the second pave <thePave>)#"  , py::arg("thePave"))
        .def("Pave2",
             (const BOPDS_Pave & (BOPDS_PaveBlock::*)() const) static_cast<const BOPDS_Pave & (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::Pave2),
             R"#(Selector Returns the second pave)#" )
        .def("SetEdge",
             (void (BOPDS_PaveBlock::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_PaveBlock::*)( const Standard_Integer  ) >(&BOPDS_PaveBlock::SetEdge),
             R"#(Modifier Sets the index of edge of pave block <theEdge>)#"  , py::arg("theEdge"))
        .def("Edge",
             (Standard_Integer (BOPDS_PaveBlock::*)() const) static_cast<Standard_Integer (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::Edge),
             R"#(Selector Returns the index of edge of pave block)#" )
        .def("HasEdge",
             (Standard_Boolean (BOPDS_PaveBlock::*)() const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::HasEdge),
             R"#(Query Returns true if the pave block has edge)#" )
        .def("HasEdge",
             (Standard_Boolean (BOPDS_PaveBlock::*)( Standard_Integer &  ) const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)( Standard_Integer &  ) const>(&BOPDS_PaveBlock::HasEdge),
             R"#(Query Returns true if the pave block has edge Returns the index of edge <theEdge>)#"  , py::arg("theEdge"))
        .def("SetOriginalEdge",
             (void (BOPDS_PaveBlock::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_PaveBlock::*)( const Standard_Integer  ) >(&BOPDS_PaveBlock::SetOriginalEdge),
             R"#(Modifier Sets the index of original edge of the pave block <theEdge>)#"  , py::arg("theEdge"))
        .def("OriginalEdge",
             (Standard_Integer (BOPDS_PaveBlock::*)() const) static_cast<Standard_Integer (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::OriginalEdge),
             R"#(Selector Returns the index of original edge of pave block)#" )
        .def("IsSplitEdge",
             (Standard_Boolean (BOPDS_PaveBlock::*)() const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::IsSplitEdge),
             R"#(Query Returns true if the edge is equal to the original edge of the pave block)#" )
        .def("HasSameBounds",
             (Standard_Boolean (BOPDS_PaveBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)( const opencascade::handle<BOPDS_PaveBlock> &  ) const>(&BOPDS_PaveBlock::HasSameBounds),
             R"#(Query Returns true if the pave block has pave indices that equal to the pave indices of the pave block <theOther>)#"  , py::arg("theOther"))
        .def("IsToUpdate",
             (Standard_Boolean (BOPDS_PaveBlock::*)() const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::IsToUpdate),
             R"#(Query Returns true if the pave block contains extra paves)#" )
        .def("AppendExtPave",
             (void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) ) static_cast<void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) >(&BOPDS_PaveBlock::AppendExtPave),
             R"#(Modifier Appends extra paves <thePave>)#"  , py::arg("thePave"))
        .def("AppendExtPave1",
             (void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) ) static_cast<void (BOPDS_PaveBlock::*)( const BOPDS_Pave &  ) >(&BOPDS_PaveBlock::AppendExtPave1),
             R"#(Modifier Appends extra pave <thePave>)#"  , py::arg("thePave"))
        .def("RemoveExtPave",
             (void (BOPDS_PaveBlock::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_PaveBlock::*)( const Standard_Integer  ) >(&BOPDS_PaveBlock::RemoveExtPave),
             R"#(Modifier Removes a pave with the given vertex number from extra paves)#"  , py::arg("theVertNum"))
        .def("ExtPaves",
             (const BOPDS_ListOfPave & (BOPDS_PaveBlock::*)() const) static_cast<const BOPDS_ListOfPave & (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::ExtPaves),
             R"#(Selector Returns the extra paves)#" )
        .def("ChangeExtPaves",
             (BOPDS_ListOfPave & (BOPDS_PaveBlock::*)() ) static_cast<BOPDS_ListOfPave & (BOPDS_PaveBlock::*)() >(&BOPDS_PaveBlock::ChangeExtPaves),
             R"#(Selector / Modifier Returns the extra paves)#" )
        .def("Update",
             (void (BOPDS_PaveBlock::*)( NCollection_List<opencascade::handle<BOPDS_PaveBlock> > & ,  const Standard_Boolean  ) ) static_cast<void (BOPDS_PaveBlock::*)( NCollection_List<opencascade::handle<BOPDS_PaveBlock> > & ,  const Standard_Boolean  ) >(&BOPDS_PaveBlock::Update),
             R"#(Modifier Updates the pave block. The extra paves are used to create new pave blocks <theLPB>. <theFlag> - if true, the first pave and the second pave are used to produce new pave blocks.)#"  , py::arg("theLPB"),  py::arg("theFlag")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ContainsParameter",
             (Standard_Boolean (BOPDS_PaveBlock::*)( const Standard_Real ,  const Standard_Real ,  Standard_Integer &  ) const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)( const Standard_Real ,  const Standard_Real ,  Standard_Integer &  ) const>(&BOPDS_PaveBlock::ContainsParameter),
             R"#(Query Returns true if the extra paves contain the pave with given value of the parameter <thePrm> <theTol> - the value of the tolerance to compare <theInd> - index of the found pave)#"  , py::arg("thePrm"),  py::arg("theTol"),  py::arg("theInd"))
        .def("SetShrunkData",
             (void (BOPDS_PaveBlock::*)( const Standard_Real ,  const Standard_Real ,  const Bnd_Box & ,  const Standard_Boolean  ) ) static_cast<void (BOPDS_PaveBlock::*)( const Standard_Real ,  const Standard_Real ,  const Bnd_Box & ,  const Standard_Boolean  ) >(&BOPDS_PaveBlock::SetShrunkData),
             R"#(Modifier Sets the shrunk data for the pave block <theTS1>, <theTS2> - shrunk range <theBox> - the bounding box <theIsSplittable> - defines whether the edge can be split)#"  , py::arg("theTS1"),  py::arg("theTS2"),  py::arg("theBox"),  py::arg("theIsSplittable"))
        .def("HasShrunkData",
             (Standard_Boolean (BOPDS_PaveBlock::*)() const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::HasShrunkData),
             R"#(Query Returns true if the pave block contains the shrunk data)#" )
        .def("Dump",
             (void (BOPDS_PaveBlock::*)() const) static_cast<void (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::Dump),
             R"#(None)#" )
        .def("IsSplittable",
             (Standard_Boolean (BOPDS_PaveBlock::*)() const) static_cast<Standard_Boolean (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::IsSplittable),
             R"#(Query Returns FALSE if the pave block has a too short shrunk range and cannot be split, otherwise returns TRUE)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BOPDS_PaveBlock::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BOPDS_PaveBlock::*)() const>(&BOPDS_PaveBlock::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Range",
             []( BOPDS_PaveBlock &self   ){ Standard_Real  theT1; Standard_Real  theT2; self.Range(theT1,theT2); return std::make_tuple(theT1,theT2); },
             R"#(Selector Returns the parametric range <theT1,theT2> of the pave block)#" )
        .def("Indices",
             []( BOPDS_PaveBlock &self   ){ Standard_Integer  theIndex1; Standard_Integer  theIndex2; self.Indices(theIndex1,theIndex2); return std::make_tuple(theIndex1,theIndex2); },
             R"#(Selector Returns the pave indices <theIndex1,theIndex2> of the pave block)#" )
        .def("ShrunkData",
             []( BOPDS_PaveBlock &self , Bnd_Box & theBox ){ Standard_Real  theTS1; Standard_Real  theTS2; Standard_Boolean  theIsSplittable; self.ShrunkData(theTS1,theTS2,theBox,theIsSplittable); return std::make_tuple(theTS1,theTS2,theIsSplittable); },
             R"#(Selector Returns the shrunk data for the pave block <theTS1>, <theTS2> - shrunk range <theBox> - the bounding box <theIsSplittable> - defines whether the edge can be split)#"  , py::arg("theBox"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BOPDS_PaveBlock::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BOPDS_PaveBlock::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BOPDS_PaveMapHasher , shared_ptr<BOPDS_PaveMapHasher>>(m,"BOPDS_PaveMapHasher");

    static_cast<py::class_<BOPDS_PaveMapHasher , shared_ptr<BOPDS_PaveMapHasher>  >>(m.attr("BOPDS_PaveMapHasher"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const BOPDS_Pave & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const BOPDS_Pave & ,  const Standard_Integer  ) >(&BOPDS_PaveMapHasher::HashCode),
                    R"#(None)#"  , py::arg("aPave"),  py::arg("Upper"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const BOPDS_Pave & ,  const BOPDS_Pave &  ) ) static_cast<Standard_Boolean (*)( const BOPDS_Pave & ,  const BOPDS_Pave &  ) >(&BOPDS_PaveMapHasher::IsEqual),
                    R"#(None)#"  , py::arg("aPave1"),  py::arg("aPave2"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_Point , shared_ptr<BOPDS_Point>  >>(m.attr("BOPDS_Point"))
        .def(py::init<  >()  )
    // methods
        .def("SetPnt",
             (void (BOPDS_Point::*)( const gp_Pnt &  ) ) static_cast<void (BOPDS_Point::*)( const gp_Pnt &  ) >(&BOPDS_Point::SetPnt),
             R"#(Modifier Sets 3D point <thePnt>)#"  , py::arg("thePnt"))
        .def("Pnt",
             (const gp_Pnt & (BOPDS_Point::*)() const) static_cast<const gp_Pnt & (BOPDS_Point::*)() const>(&BOPDS_Point::Pnt),
             R"#(Selector Returns 3D point)#" )
        .def("SetPnt2D1",
             (void (BOPDS_Point::*)( const gp_Pnt2d &  ) ) static_cast<void (BOPDS_Point::*)( const gp_Pnt2d &  ) >(&BOPDS_Point::SetPnt2D1),
             R"#(Modifier Sets 2D point on the first face <thePnt>)#"  , py::arg("thePnt"))
        .def("Pnt2D1",
             (const gp_Pnt2d & (BOPDS_Point::*)() const) static_cast<const gp_Pnt2d & (BOPDS_Point::*)() const>(&BOPDS_Point::Pnt2D1),
             R"#(Selector Returns 2D point on the first face <thePnt>)#" )
        .def("SetPnt2D2",
             (void (BOPDS_Point::*)( const gp_Pnt2d &  ) ) static_cast<void (BOPDS_Point::*)( const gp_Pnt2d &  ) >(&BOPDS_Point::SetPnt2D2),
             R"#(Modifier Sets 2D point on the second face <thePnt>)#"  , py::arg("thePnt"))
        .def("Pnt2D2",
             (const gp_Pnt2d & (BOPDS_Point::*)() const) static_cast<const gp_Pnt2d & (BOPDS_Point::*)() const>(&BOPDS_Point::Pnt2D2),
             R"#(Selector Returns 2D point on the second face <thePnt>)#" )
        .def("SetIndex",
             (void (BOPDS_Point::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_Point::*)( const Standard_Integer  ) >(&BOPDS_Point::SetIndex),
             R"#(Modifier Sets the index of the vertex <theIndex>)#"  , py::arg("theIndex"))
        .def("Index",
             (Standard_Integer (BOPDS_Point::*)() const) static_cast<Standard_Integer (BOPDS_Point::*)() const>(&BOPDS_Point::Index),
             R"#(Selector Returns index of the vertex)#" )
        .def("SetIndex",
             (void (BOPDS_Point::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_Point::*)( const Standard_Integer  ) >(&BOPDS_Point::SetIndex),
             R"#(Modifier Sets the index of the vertex <theIndex>)#"  , py::arg("theIndex"))
        .def("Index",
             (Standard_Integer (BOPDS_Point::*)() const) static_cast<Standard_Integer (BOPDS_Point::*)() const>(&BOPDS_Point::Index),
             R"#(Selector Returns index of the vertex)#" )
        .def("SetPnt",
             (void (BOPDS_Point::*)( const gp_Pnt &  ) ) static_cast<void (BOPDS_Point::*)( const gp_Pnt &  ) >(&BOPDS_Point::SetPnt),
             R"#(Modifier Sets 3D point <thePnt>)#"  , py::arg("thePnt"))
        .def("Pnt",
             (const gp_Pnt & (BOPDS_Point::*)() const) static_cast<const gp_Pnt & (BOPDS_Point::*)() const>(&BOPDS_Point::Pnt),
             R"#(Selector Returns 3D point)#" )
        .def("SetPnt2D1",
             (void (BOPDS_Point::*)( const gp_Pnt2d &  ) ) static_cast<void (BOPDS_Point::*)( const gp_Pnt2d &  ) >(&BOPDS_Point::SetPnt2D1),
             R"#(Modifier Sets 2D point on the first face <thePnt>)#"  , py::arg("thePnt"))
        .def("Pnt2D1",
             (const gp_Pnt2d & (BOPDS_Point::*)() const) static_cast<const gp_Pnt2d & (BOPDS_Point::*)() const>(&BOPDS_Point::Pnt2D1),
             R"#(Selector Returns 2D point on the first face <thePnt>)#" )
        .def("SetPnt2D2",
             (void (BOPDS_Point::*)( const gp_Pnt2d &  ) ) static_cast<void (BOPDS_Point::*)( const gp_Pnt2d &  ) >(&BOPDS_Point::SetPnt2D2),
             R"#(Modifier Sets 2D point on the second face <thePnt>)#"  , py::arg("thePnt"))
        .def("Pnt2D2",
             (const gp_Pnt2d & (BOPDS_Point::*)() const) static_cast<const gp_Pnt2d & (BOPDS_Point::*)() const>(&BOPDS_Point::Pnt2D2),
             R"#(Selector Returns 2D point on the second face <thePnt>)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_ShapeInfo , shared_ptr<BOPDS_ShapeInfo>  >>(m.attr("BOPDS_ShapeInfo"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("SetShape",
             (void (BOPDS_ShapeInfo::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const TopoDS_Shape &  ) >(&BOPDS_ShapeInfo::SetShape),
             R"#(Modifier Sets the shape <theS>)#"  , py::arg("theS"))
        .def("Shape",
             (const TopoDS_Shape & (BOPDS_ShapeInfo::*)() const) static_cast<const TopoDS_Shape & (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Shape),
             R"#(Selector Returns the shape)#" )
        .def("SetShapeType",
             (void (BOPDS_ShapeInfo::*)( const TopAbs_ShapeEnum  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const TopAbs_ShapeEnum  ) >(&BOPDS_ShapeInfo::SetShapeType),
             R"#(Modifier Sets the type of shape theType)#"  , py::arg("theType"))
        .def("ShapeType",
             (TopAbs_ShapeEnum (BOPDS_ShapeInfo::*)() const) static_cast<TopAbs_ShapeEnum (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::ShapeType),
             R"#(Selector Returns the type of shape)#" )
        .def("SetBox",
             (void (BOPDS_ShapeInfo::*)( const Bnd_Box &  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const Bnd_Box &  ) >(&BOPDS_ShapeInfo::SetBox),
             R"#(Modifier Sets the boundung box of the shape theBox)#"  , py::arg("theBox"))
        .def("Box",
             (const Bnd_Box & (BOPDS_ShapeInfo::*)() const) static_cast<const Bnd_Box & (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Box),
             R"#(Selector Returns the boundung box of the shape)#" )
        .def("ChangeBox",
             (Bnd_Box & (BOPDS_ShapeInfo::*)() ) static_cast<Bnd_Box & (BOPDS_ShapeInfo::*)() >(&BOPDS_ShapeInfo::ChangeBox),
             R"#(Selector/Modifier Returns the boundung box of the shape)#" )
        .def("SubShapes",
             (const TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() const) static_cast<const TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::SubShapes),
             R"#(Selector Returns the list of indices of sub-shapes)#" )
        .def("ChangeSubShapes",
             (TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() ) static_cast<TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() >(&BOPDS_ShapeInfo::ChangeSubShapes),
             R"#(Selector/ Modifier Returns the list of indices of sub-shapes)#" )
        .def("HasSubShape",
             (Standard_Boolean (BOPDS_ShapeInfo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)( const Standard_Integer  ) const>(&BOPDS_ShapeInfo::HasSubShape),
             R"#(Query Returns true if the shape has sub-shape with index theI)#"  , py::arg("theI"))
        .def("HasReference",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::HasReference),
             R"#(None)#" )
        .def("SetReference",
             (void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) >(&BOPDS_ShapeInfo::SetReference),
             R"#(Modifier Sets the index of a reference information)#"  , py::arg("theI"))
        .def("Reference",
             (Standard_Integer (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Integer (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Reference),
             R"#(Selector Returns the index of a reference information)#" )
        .def("HasBRep",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::HasBRep),
             R"#(Query Returns true if the shape has boundary representation)#" )
        .def("IsInterfering",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::IsInterfering),
             R"#(Returns true if the shape can be participant of an interference)#" )
        .def("HasFlag",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::HasFlag),
             R"#(Query Returns true if there is flag.)#" )
        .def("HasFlag",
             (Standard_Boolean (BOPDS_ShapeInfo::*)( Standard_Integer &  ) const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)( Standard_Integer &  ) const>(&BOPDS_ShapeInfo::HasFlag),
             R"#(Query Returns true if there is flag. Returns the the flag theFlag)#"  , py::arg("theFlag"))
        .def("SetFlag",
             (void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) >(&BOPDS_ShapeInfo::SetFlag),
             R"#(Modifier Sets the flag)#"  , py::arg("theI"))
        .def("Flag",
             (Standard_Integer (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Integer (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Flag),
             R"#(Returns the flag)#" )
        .def("Dump",
             (void (BOPDS_ShapeInfo::*)() const) static_cast<void (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Dump),
             R"#(None)#" )
        .def("SetShape",
             (void (BOPDS_ShapeInfo::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const TopoDS_Shape &  ) >(&BOPDS_ShapeInfo::SetShape),
             R"#(Modifier Sets the shape <theS>)#"  , py::arg("theS"))
        .def("Shape",
             (const TopoDS_Shape & (BOPDS_ShapeInfo::*)() const) static_cast<const TopoDS_Shape & (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Shape),
             R"#(Selector Returns the shape)#" )
        .def("SetShapeType",
             (void (BOPDS_ShapeInfo::*)( const TopAbs_ShapeEnum  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const TopAbs_ShapeEnum  ) >(&BOPDS_ShapeInfo::SetShapeType),
             R"#(Modifier Sets the type of shape theType)#"  , py::arg("theType"))
        .def("ShapeType",
             (TopAbs_ShapeEnum (BOPDS_ShapeInfo::*)() const) static_cast<TopAbs_ShapeEnum (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::ShapeType),
             R"#(Selector Returns the type of shape)#" )
        .def("SetBox",
             (void (BOPDS_ShapeInfo::*)( const Bnd_Box &  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const Bnd_Box &  ) >(&BOPDS_ShapeInfo::SetBox),
             R"#(Modifier Sets the boundung box of the shape theBox)#"  , py::arg("theBox"))
        .def("Box",
             (const Bnd_Box & (BOPDS_ShapeInfo::*)() const) static_cast<const Bnd_Box & (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Box),
             R"#(Selector Returns the boundung box of the shape)#" )
        .def("ChangeBox",
             (Bnd_Box & (BOPDS_ShapeInfo::*)() ) static_cast<Bnd_Box & (BOPDS_ShapeInfo::*)() >(&BOPDS_ShapeInfo::ChangeBox),
             R"#(Selector/Modifier Returns the boundung box of the shape)#" )
        .def("SubShapes",
             (const TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() const) static_cast<const TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::SubShapes),
             R"#(Selector Returns the list of indices of sub-shapes)#" )
        .def("ChangeSubShapes",
             (TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() ) static_cast<TColStd_ListOfInteger & (BOPDS_ShapeInfo::*)() >(&BOPDS_ShapeInfo::ChangeSubShapes),
             R"#(Selector/ Modifier Returns the list of indices of sub-shapes)#" )
        .def("HasSubShape",
             (Standard_Boolean (BOPDS_ShapeInfo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)( const Standard_Integer  ) const>(&BOPDS_ShapeInfo::HasSubShape),
             R"#(Query Returns true if the shape has sub-shape with index theI)#"  , py::arg("theI"))
        .def("HasReference",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::HasReference),
             R"#(None)#" )
        .def("SetReference",
             (void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) >(&BOPDS_ShapeInfo::SetReference),
             R"#(Modifier Sets the index of a reference information)#"  , py::arg("theI"))
        .def("Reference",
             (Standard_Integer (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Integer (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Reference),
             R"#(Selector Returns the index of a reference information)#" )
        .def("HasBRep",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::HasBRep),
             R"#(Query Returns true if the shape has boundary representation)#" )
        .def("IsInterfering",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::IsInterfering),
             R"#(Returns true if the shape can be participant of an interference)#" )
        .def("HasFlag",
             (Standard_Boolean (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::HasFlag),
             R"#(Query Returns true if there is flag.)#" )
        .def("HasFlag",
             (Standard_Boolean (BOPDS_ShapeInfo::*)( Standard_Integer &  ) const) static_cast<Standard_Boolean (BOPDS_ShapeInfo::*)( Standard_Integer &  ) const>(&BOPDS_ShapeInfo::HasFlag),
             R"#(Query Returns true if there is flag. Returns the the flag theFlag)#"  , py::arg("theFlag"))
        .def("SetFlag",
             (void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_ShapeInfo::*)( const Standard_Integer  ) >(&BOPDS_ShapeInfo::SetFlag),
             R"#(Modifier Sets the flag)#"  , py::arg("theFlag"))
        .def("Flag",
             (Standard_Integer (BOPDS_ShapeInfo::*)() const) static_cast<Standard_Integer (BOPDS_ShapeInfo::*)() const>(&BOPDS_ShapeInfo::Flag),
             R"#(Returns the flag)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_SubIterator , shared_ptr<BOPDS_SubIterator>  >>(m.attr("BOPDS_SubIterator"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("DS",
             (const BOPDS_DS & (BOPDS_SubIterator::*)() const) static_cast<const BOPDS_DS & (BOPDS_SubIterator::*)() const>(&BOPDS_SubIterator::DS),
             R"#(Returns the data structure)#" )
        .def("SetSubSet1",
             (void (BOPDS_SubIterator::*)(  const NCollection_List<Standard_Integer> &  ) ) static_cast<void (BOPDS_SubIterator::*)(  const NCollection_List<Standard_Integer> &  ) >(&BOPDS_SubIterator::SetSubSet1),
             R"#(Sets the first set of indices <theLI> to process)#"  , py::arg("theLI"))
        .def("SubSet1",
             (const TColStd_ListOfInteger & (BOPDS_SubIterator::*)() const) static_cast<const TColStd_ListOfInteger & (BOPDS_SubIterator::*)() const>(&BOPDS_SubIterator::SubSet1),
             R"#(Returns the first set of indices to process)#" )
        .def("SetSubSet2",
             (void (BOPDS_SubIterator::*)(  const NCollection_List<Standard_Integer> &  ) ) static_cast<void (BOPDS_SubIterator::*)(  const NCollection_List<Standard_Integer> &  ) >(&BOPDS_SubIterator::SetSubSet2),
             R"#(Sets the second set of indices <theLI> to process)#"  , py::arg("theLI"))
        .def("SubSet2",
             (const TColStd_ListOfInteger & (BOPDS_SubIterator::*)() const) static_cast<const TColStd_ListOfInteger & (BOPDS_SubIterator::*)() const>(&BOPDS_SubIterator::SubSet2),
             R"#(Returns the second set of indices to process)#" )
        .def("Initialize",
             (void (BOPDS_SubIterator::*)() ) static_cast<void (BOPDS_SubIterator::*)() >(&BOPDS_SubIterator::Initialize),
             R"#(Initializes the iterator)#" )
        .def("More",
             (Standard_Boolean (BOPDS_SubIterator::*)() const) static_cast<Standard_Boolean (BOPDS_SubIterator::*)() const>(&BOPDS_SubIterator::More),
             R"#(Returns true if there are more pairs of intersected shapes)#" )
        .def("Next",
             (void (BOPDS_SubIterator::*)() ) static_cast<void (BOPDS_SubIterator::*)() >(&BOPDS_SubIterator::Next),
             R"#(Moves iterations ahead)#" )
        .def("Prepare",
             (void (BOPDS_SubIterator::*)() ) static_cast<void (BOPDS_SubIterator::*)() >(&BOPDS_SubIterator::Prepare),
             R"#(Perform the intersection algorithm and prepare the results to be used)#" )
        .def("ExpectedLength",
             (Standard_Integer (BOPDS_SubIterator::*)() const) static_cast<Standard_Integer (BOPDS_SubIterator::*)() const>(&BOPDS_SubIterator::ExpectedLength),
             R"#(Returns the number of interfering pairs)#" )
    // methods using call by reference i.s.o. return
        .def("Value",
             []( BOPDS_SubIterator &self   ){ Standard_Integer  theIndex1; Standard_Integer  theIndex2; self.Value(theIndex1,theIndex2); return std::make_tuple(theIndex1,theIndex2); },
             R"#(Returns indices (DS) of intersected shapes theIndex1 - the index of the first shape theIndex2 - the index of the second shape)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BOPDS_Tools , shared_ptr<BOPDS_Tools>>(m,"BOPDS_Tools");

    static_cast<py::class_<BOPDS_Tools , shared_ptr<BOPDS_Tools>  >>(m.attr("BOPDS_Tools"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("TypeToInteger_s",
                    (Standard_Integer (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<Standard_Integer (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&BOPDS_Tools::TypeToInteger),
                    R"#(Converts the conmbination of two types of shape <theT1>,<theT2> to the one integer value, that is returned)#"  , py::arg("theT1"),  py::arg("theT2"))
        .def_static("TypeToInteger_s",
                    (Standard_Integer (*)( const TopAbs_ShapeEnum  ) ) static_cast<Standard_Integer (*)( const TopAbs_ShapeEnum  ) >(&BOPDS_Tools::TypeToInteger),
                    R"#(Converts the type of shape <theT>, to integer value, that is returned)#"  , py::arg("theT"))
        .def_static("HasBRep_s",
                    (Standard_Boolean (*)( const TopAbs_ShapeEnum  ) ) static_cast<Standard_Boolean (*)( const TopAbs_ShapeEnum  ) >(&BOPDS_Tools::HasBRep),
                    R"#(Returns true if the type <theT> correspond to a shape having boundary representation)#"  , py::arg("theT"))
        .def_static("IsInterfering_s",
                    (Standard_Boolean (*)( const TopAbs_ShapeEnum  ) ) static_cast<Standard_Boolean (*)( const TopAbs_ShapeEnum  ) >(&BOPDS_Tools::IsInterfering),
                    R"#(Returns true if the type <theT> can be participant of an interference)#"  , py::arg("theT"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfEE , shared_ptr<BOPDS_InterfEE>  , BOPDS_Interf >>(m.attr("BOPDS_InterfEE"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("SetCommonPart",
             (void (BOPDS_InterfEE::*)( const IntTools_CommonPrt &  ) ) static_cast<void (BOPDS_InterfEE::*)( const IntTools_CommonPrt &  ) >(&BOPDS_InterfEE::SetCommonPart),
             R"#(Modifier Sets the info of common part)#"  , py::arg("theCP"))
        .def("CommonPart",
             (const IntTools_CommonPrt & (BOPDS_InterfEE::*)() const) static_cast<const IntTools_CommonPrt & (BOPDS_InterfEE::*)() const>(&BOPDS_InterfEE::CommonPart),
             R"#(Selector Returns the info of common part)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfEF , shared_ptr<BOPDS_InterfEF>  , BOPDS_Interf >>(m.attr("BOPDS_InterfEF"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("SetCommonPart",
             (void (BOPDS_InterfEF::*)( const IntTools_CommonPrt &  ) ) static_cast<void (BOPDS_InterfEF::*)( const IntTools_CommonPrt &  ) >(&BOPDS_InterfEF::SetCommonPart),
             R"#(Modifier Sets the info of common part)#"  , py::arg("theCP"))
        .def("CommonPart",
             (const IntTools_CommonPrt & (BOPDS_InterfEF::*)() const) static_cast<const IntTools_CommonPrt & (BOPDS_InterfEF::*)() const>(&BOPDS_InterfEF::CommonPart),
             R"#(Selector Returns the info of common part)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfEZ , shared_ptr<BOPDS_InterfEZ>  , BOPDS_Interf >>(m.attr("BOPDS_InterfEZ"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfFF , shared_ptr<BOPDS_InterfFF>  , BOPDS_Interf >>(m.attr("BOPDS_InterfFF"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (BOPDS_InterfFF::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BOPDS_InterfFF::*)( const Standard_Integer ,  const Standard_Integer  ) >(&BOPDS_InterfFF::Init),
             R"#(Initializer)#"  , py::arg("theNbCurves"),  py::arg("theNbPoints"))
        .def("SetTangentFaces",
             (void (BOPDS_InterfFF::*)( const Standard_Boolean  ) ) static_cast<void (BOPDS_InterfFF::*)( const Standard_Boolean  ) >(&BOPDS_InterfFF::SetTangentFaces),
             R"#(Modifier Sets the flag of whether the faces are tangent)#"  , py::arg("theFlag"))
        .def("TangentFaces",
             (Standard_Boolean (BOPDS_InterfFF::*)() const) static_cast<Standard_Boolean (BOPDS_InterfFF::*)() const>(&BOPDS_InterfFF::TangentFaces),
             R"#(Selector Returns the flag whether the faces are tangent)#" )
        .def("Curves",
             (const BOPDS_VectorOfCurve & (BOPDS_InterfFF::*)() const) static_cast<const BOPDS_VectorOfCurve & (BOPDS_InterfFF::*)() const>(&BOPDS_InterfFF::Curves),
             R"#(Selector Returns the intersection curves)#" )
        .def("ChangeCurves",
             (BOPDS_VectorOfCurve & (BOPDS_InterfFF::*)() ) static_cast<BOPDS_VectorOfCurve & (BOPDS_InterfFF::*)() >(&BOPDS_InterfFF::ChangeCurves),
             R"#(Selector/Modifier Returns the intersection curves)#" )
        .def("Points",
             (const BOPDS_VectorOfPoint & (BOPDS_InterfFF::*)() const) static_cast<const BOPDS_VectorOfPoint & (BOPDS_InterfFF::*)() const>(&BOPDS_InterfFF::Points),
             R"#(Selector Returns the intersection points)#" )
        .def("ChangePoints",
             (BOPDS_VectorOfPoint & (BOPDS_InterfFF::*)() ) static_cast<BOPDS_VectorOfPoint & (BOPDS_InterfFF::*)() >(&BOPDS_InterfFF::ChangePoints),
             R"#(Selector/Modifier Returns the intersection points)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfFZ , shared_ptr<BOPDS_InterfFZ>  , BOPDS_Interf >>(m.attr("BOPDS_InterfFZ"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfVE , shared_ptr<BOPDS_InterfVE>  , BOPDS_Interf >>(m.attr("BOPDS_InterfVE"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("SetParameter",
             (void (BOPDS_InterfVE::*)( const Standard_Real  ) ) static_cast<void (BOPDS_InterfVE::*)( const Standard_Real  ) >(&BOPDS_InterfVE::SetParameter),
             R"#(Modifier Sets the value of parameter of the point of the vertex on the curve of the edge)#"  , py::arg("theT"))
        .def("Parameter",
             (Standard_Real (BOPDS_InterfVE::*)() const) static_cast<Standard_Real (BOPDS_InterfVE::*)() const>(&BOPDS_InterfVE::Parameter),
             R"#(Selector Returrns the value of parameter of the point of the vertex on the curve of the edge)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfVF , shared_ptr<BOPDS_InterfVF>  , BOPDS_Interf >>(m.attr("BOPDS_InterfVF"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("SetUV",
             (void (BOPDS_InterfVF::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BOPDS_InterfVF::*)( const Standard_Real ,  const Standard_Real  ) >(&BOPDS_InterfVF::SetUV),
             R"#(Modifier Sets the value of parameters of the point of the vertex on the surface of of the face)#"  , py::arg("theU"),  py::arg("theV"))
    // methods using call by reference i.s.o. return
        .def("UV",
             []( BOPDS_InterfVF &self   ){ Standard_Real  theU; Standard_Real  theV; self.UV(theU,theV); return std::make_tuple(theU,theV); },
             R"#(Selector Returns the value of parameters of the point of the vertex on the surface of of the face)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfVV , shared_ptr<BOPDS_InterfVV>  , BOPDS_Interf >>(m.attr("BOPDS_InterfVV"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfVZ , shared_ptr<BOPDS_InterfVZ>  , BOPDS_Interf >>(m.attr("BOPDS_InterfVZ"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_InterfZZ , shared_ptr<BOPDS_InterfZZ>  , BOPDS_Interf >>(m.attr("BOPDS_InterfZZ"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BOPDS_IteratorSI , shared_ptr<BOPDS_IteratorSI>  , BOPDS_Iterator >>(m.attr("BOPDS_IteratorSI"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // methods
        .def("UpdateByLevelOfCheck",
             (void (BOPDS_IteratorSI::*)( const Standard_Integer  ) ) static_cast<void (BOPDS_IteratorSI::*)( const Standard_Integer  ) >(&BOPDS_IteratorSI::UpdateByLevelOfCheck),
             R"#(Updates the lists of possible intersections according to the value of <theLevel>. It defines which interferferences will be checked: 0 - only V/V; 1 - V/V and V/E; 2 - V/V, V/E and E/E; 3 - V/V, V/E, E/E and V/F; 4 - V/V, V/E, E/E, V/F and E/F; other - all interferences.)#"  , py::arg("theLevel"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/BOPDS_VectorOfInterfVF.hxx
// ./opencascade/BOPDS_CommonBlock.hxx
// ./opencascade/BOPDS_VectorOfInterfEF.hxx
// ./opencascade/BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks.hxx
// ./opencascade/BOPDS_VectorOfVectorOfPair.hxx
// ./opencascade/BOPDS_VectorOfPair.hxx
// ./opencascade/BOPDS_VectorOfCurve.hxx
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfInteger.hxx
// ./opencascade/BOPDS_VectorOfInterfVZ.hxx
// ./opencascade/BOPDS_Point.hxx
// ./opencascade/BOPDS_VectorOfInterfEE.hxx
// ./opencascade/BOPDS_DataMapOfPaveBlockListOfInteger.hxx
// ./opencascade/BOPDS_VectorOfShapeInfo.hxx
// ./opencascade/BOPDS_PaveBlock.hxx
// ./opencascade/BOPDS_PDS.hxx
// ./opencascade/BOPDS_IndexedMapOfPaveBlock.hxx
// ./opencascade/BOPDS_SubIterator.hxx
// ./opencascade/BOPDS_Pave.hxx
// ./opencascade/BOPDS_DataMapOfPaveBlockListOfPaveBlock.hxx
// ./opencascade/BOPDS_PIteratorSI.hxx
// ./opencascade/BOPDS_PIterator.hxx
// ./opencascade/BOPDS_VectorOfPave.hxx
// ./opencascade/BOPDS_ListOfPaveBlock.hxx
// ./opencascade/BOPDS_DataMapOfIntegerListOfPaveBlock.hxx
// ./opencascade/BOPDS_Iterator.hxx
// ./opencascade/BOPDS_PaveMapHasher.hxx
// ./opencascade/BOPDS_MapOfCommonBlock.hxx
// ./opencascade/BOPDS_MapOfPair.hxx
// ./opencascade/BOPDS_VectorOfInterfEZ.hxx
// ./opencascade/BOPDS_CoupleOfPaveBlocks.hxx
// ./opencascade/BOPDS_VectorOfInterfVV.hxx
// ./opencascade/BOPDS_VectorOfInterfFF.hxx
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock.hxx
// ./opencascade/BOPDS_PairMapHasher.hxx
// ./opencascade/BOPDS_VectorOfListOfPaveBlock.hxx
// ./opencascade/BOPDS_VectorOfPoint.hxx
// ./opencascade/BOPDS_DataMapOfShapeCoupleOfPaveBlocks.hxx
// ./opencascade/BOPDS_VectorOfIndexRange.hxx
// ./opencascade/BOPDS_VectorOfFaceInfo.hxx
// ./opencascade/BOPDS_VectorOfInterfFZ.hxx
// ./opencascade/BOPDS_Interf.hxx
// ./opencascade/BOPDS_IteratorSI.hxx
// ./opencascade/BOPDS_IndexRange.hxx
// ./opencascade/BOPDS_DS.hxx
// ./opencascade/BOPDS_MapOfPave.hxx
// ./opencascade/BOPDS_ListOfPave.hxx
// ./opencascade/BOPDS_MapOfPaveBlock.hxx
// ./opencascade/BOPDS_Pair.hxx
// ./opencascade/BOPDS_VectorOfInterfVE.hxx
// ./opencascade/BOPDS_VectorOfInterfZZ.hxx
// ./opencascade/BOPDS_Tools.hxx
// ./opencascade/BOPDS_ShapeInfo.hxx
// ./opencascade/BOPDS_DataMapOfPaveBlockCommonBlock.hxx
// ./opencascade/BOPDS_FaceInfo.hxx
// ./opencascade/BOPDS_Curve.hxx

// operators

// register typdefs
    register_template_NCollection_Vector<BOPDS_InterfVF>(m,"BOPDS_VectorOfInterfVF");  
    register_template_NCollection_Vector<BOPDS_InterfEF>(m,"BOPDS_VectorOfInterfEF");  
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, BOPDS_CoupleOfPaveBlocks, TopTools_ShapeMapHasher>(m,"BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks");  
    register_template_NCollection_Vector<BOPDS_VectorOfPair>(m,"BOPDS_VectorOfVectorOfPair");  
    register_template_NCollection_Vector<BOPDS_Pair>(m,"BOPDS_VectorOfPair");  
    register_template_NCollection_Vector<BOPDS_Curve>(m,"BOPDS_VectorOfCurve");  
    register_template_NCollection_IndexedDataMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_ListOfInteger, TColStd_MapTransientHasher>(m,"BOPDS_IndexedDataMapOfPaveBlockListOfInteger");  
    register_template_NCollection_Vector<BOPDS_InterfVZ>(m,"BOPDS_VectorOfInterfVZ");  
    register_template_NCollection_Vector<BOPDS_InterfEE>(m,"BOPDS_VectorOfInterfEE");  
    register_template_NCollection_Vector<BOPDS_ShapeInfo>(m,"BOPDS_VectorOfShapeInfo");  
    register_template_NCollection_IndexedMap<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher>(m,"BOPDS_IndexedMapOfPaveBlock");  
    register_template_NCollection_DataMap<opencascade::handle<BOPDS_PaveBlock>, BOPDS_ListOfPaveBlock, TColStd_MapTransientHasher>(m,"BOPDS_DataMapOfPaveBlockListOfPaveBlock");  
    register_template_NCollection_Array1<BOPDS_Pave>(m,"BOPDS_VectorOfPave");  
    register_template_NCollection_List<opencascade::handle<BOPDS_PaveBlock> >(m,"BOPDS_ListOfPaveBlock");  
    register_template_NCollection_Map<opencascade::handle<BOPDS_CommonBlock>, TColStd_MapTransientHasher>(m,"BOPDS_MapOfCommonBlock");  
    register_template_NCollection_Map<BOPDS_Pair, BOPDS_PairMapHasher>(m,"BOPDS_MapOfPair");  
    register_template_NCollection_Vector<BOPDS_InterfEZ>(m,"BOPDS_VectorOfInterfEZ");  
    register_template_NCollection_Vector<BOPDS_InterfVV>(m,"BOPDS_VectorOfInterfVV");  
    register_template_NCollection_Vector<BOPDS_InterfFF>(m,"BOPDS_VectorOfInterfFF");  
    register_template_NCollection_IndexedDataMap<opencascade::handle<BOPDS_PaveBlock>, BOPDS_ListOfPaveBlock, TColStd_MapTransientHasher>(m,"BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock");  
    register_template_NCollection_Vector<BOPDS_ListOfPaveBlock>(m,"BOPDS_VectorOfListOfPaveBlock");  
    register_template_NCollection_Vector<BOPDS_Point>(m,"BOPDS_VectorOfPoint");  
    register_template_NCollection_DataMap<TopoDS_Shape, BOPDS_CoupleOfPaveBlocks, TopTools_ShapeMapHasher>(m,"BOPDS_DataMapOfShapeCoupleOfPaveBlocks");  
    register_template_NCollection_Vector<BOPDS_IndexRange>(m,"BOPDS_VectorOfIndexRange");  
    register_template_NCollection_Vector<BOPDS_FaceInfo>(m,"BOPDS_VectorOfFaceInfo");  
    register_template_NCollection_Vector<BOPDS_InterfFZ>(m,"BOPDS_VectorOfInterfFZ");  
    register_template_NCollection_Map<BOPDS_Pave, BOPDS_PaveMapHasher>(m,"BOPDS_MapOfPave");  
    register_template_NCollection_List<BOPDS_Pave>(m,"BOPDS_ListOfPave");  
    register_template_NCollection_Map<opencascade::handle<BOPDS_PaveBlock>, TColStd_MapTransientHasher>(m,"BOPDS_MapOfPaveBlock");  
    register_template_NCollection_Vector<BOPDS_InterfVE>(m,"BOPDS_VectorOfInterfVE");  
    register_template_NCollection_Vector<BOPDS_InterfZZ>(m,"BOPDS_VectorOfInterfZZ");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
