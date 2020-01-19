
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <HLRAlgo_EdgeStatus.hxx>
#include <gp_Ax2.hxx>
#include <gp_Lin.hxx>
#include <HLRAlgo_EdgeStatus.hxx>

// module includes
#include <HLRAlgo.hxx>
#include <HLRAlgo_Array1OfPHDat.hxx>
#include <HLRAlgo_Array1OfPINod.hxx>
#include <HLRAlgo_Array1OfPISeg.hxx>
#include <HLRAlgo_Array1OfTData.hxx>
#include <HLRAlgo_BiPoint.hxx>
#include <HLRAlgo_Coincidence.hxx>
#include <HLRAlgo_EdgeIterator.hxx>
#include <HLRAlgo_EdgesBlock.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRAlgo_HArray1OfPHDat.hxx>
#include <HLRAlgo_HArray1OfPINod.hxx>
#include <HLRAlgo_HArray1OfPISeg.hxx>
#include <HLRAlgo_HArray1OfTData.hxx>
#include <HLRAlgo_Interference.hxx>
#include <HLRAlgo_InterferenceList.hxx>
#include <HLRAlgo_Intersection.hxx>
#include <HLRAlgo_ListIteratorOfInterferenceList.hxx>
#include <HLRAlgo_ListIteratorOfListOfBPoint.hxx>
#include <HLRAlgo_ListOfBPoint.hxx>
#include <HLRAlgo_PolyAlgo.hxx>
#include <HLRAlgo_PolyData.hxx>
#include <HLRAlgo_PolyHidingData.hxx>
#include <HLRAlgo_PolyInternalData.hxx>
#include <HLRAlgo_PolyInternalNode.hxx>
#include <HLRAlgo_PolyInternalSegment.hxx>
#include <HLRAlgo_PolyMask.hxx>
#include <HLRAlgo_PolyShellData.hxx>
#include <HLRAlgo_Projector.hxx>
#include <HLRAlgo_TriangleData.hxx>
#include <HLRAlgo_WiresBlock.hxx>

// template related includes
// ./opencascade/HLRAlgo_InterferenceList.hxx
#include "NCollection.hxx"
// ./opencascade/HLRAlgo_InterferenceList.hxx
#include "NCollection.hxx"
// ./opencascade/HLRAlgo_Array1OfPISeg.hxx
#include "NCollection.hxx"
// ./opencascade/HLRAlgo_Array1OfPINod.hxx
#include "NCollection.hxx"
// ./opencascade/HLRAlgo_ListOfBPoint.hxx
#include "NCollection.hxx"
// ./opencascade/HLRAlgo_ListOfBPoint.hxx
#include "NCollection.hxx"
// ./opencascade/HLRAlgo_Array1OfTData.hxx
#include "NCollection.hxx"
// ./opencascade/HLRAlgo_Array1OfPHDat.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRAlgo(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("HLRAlgo"));


//Python trampoline classes

// classes

    register_default_constructor<HLRAlgo , shared_ptr<HLRAlgo>>(m,"HLRAlgo");

    static_cast<py::class_<HLRAlgo , shared_ptr<HLRAlgo>  >>(m.attr("HLRAlgo"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("UpdateMinMax_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real [16] ,  Standard_Real [16]  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real [16] ,  Standard_Real [16]  ) >(&HLRAlgo::UpdateMinMax),
                    R"#(Iterator on the visible or hidden parts of an EdgeStatus.)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("Min"),  py::arg("Max"))
        .def_static("EnlargeMinMax_s",
                    (void (*)( const Standard_Real ,  Standard_Real [16] ,  Standard_Real [16]  ) ) static_cast<void (*)( const Standard_Real ,  Standard_Real [16] ,  Standard_Real [16]  ) >(&HLRAlgo::EnlargeMinMax),
                    R"#(None)#"  , py::arg("tol"),  py::arg("Min"),  py::arg("Max"))
        .def_static("InitMinMax_s",
                    (void (*)( const Standard_Real ,  Standard_Real [16] ,  Standard_Real [16]  ) ) static_cast<void (*)( const Standard_Real ,  Standard_Real [16] ,  Standard_Real [16]  ) >(&HLRAlgo::InitMinMax),
                    R"#(None)#"  , py::arg("Big"),  py::arg("Min"),  py::arg("Max"))
        .def_static("EncodeMinMax_s",
                    (void (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) ) static_cast<void (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) >(&HLRAlgo::EncodeMinMax),
                    R"#(None)#"  , py::arg("Min"),  py::arg("Max"),  py::arg("MinMax"))
        .def_static("SizeBox_s",
                    (Standard_Real (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) ) static_cast<Standard_Real (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) >(&HLRAlgo::SizeBox),
                    R"#(None)#"  , py::arg("Min"),  py::arg("Max"))
        .def_static("DecodeMinMax_s",
                    (void (*)( const HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) ) static_cast<void (*)( const HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) >(&HLRAlgo::DecodeMinMax),
                    R"#(None)#"  , py::arg("MinMax"),  py::arg("Min"),  py::arg("Max"))
        .def_static("CopyMinMax_s",
                    (void (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) ) static_cast<void (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) >(&HLRAlgo::CopyMinMax),
                    R"#(None)#"  , py::arg("IMin"),  py::arg("IMax"),  py::arg("OMin"),  py::arg("OMax"))
        .def_static("AddMinMax_s",
                    (void (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) ) static_cast<void (*)( HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices & ,  HLRAlgo_EdgesBlock::MinMaxIndices &  ) >(&HLRAlgo::AddMinMax),
                    R"#(None)#"  , py::arg("IMin"),  py::arg("IMax"),  py::arg("OMin"),  py::arg("OMax"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_BiPoint , shared_ptr<HLRAlgo_BiPoint>  >>(m.attr("HLRAlgo_BiPoint"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("X1"),  py::arg("Y1"),  py::arg("Z1"),  py::arg("X2"),  py::arg("Y2"),  py::arg("Z2"),  py::arg("XT1"),  py::arg("YT1"),  py::arg("ZT1"),  py::arg("XT2"),  py::arg("YT2"),  py::arg("ZT2"),  py::arg("Index"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("X1"),  py::arg("Y1"),  py::arg("Z1"),  py::arg("X2"),  py::arg("Y2"),  py::arg("Z2"),  py::arg("XT1"),  py::arg("YT1"),  py::arg("ZT1"),  py::arg("XT2"),  py::arg("YT2"),  py::arg("ZT2"),  py::arg("Index"),  py::arg("flag") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("X1"),  py::arg("Y1"),  py::arg("Z1"),  py::arg("X2"),  py::arg("Y2"),  py::arg("Z2"),  py::arg("XT1"),  py::arg("YT1"),  py::arg("ZT1"),  py::arg("XT2"),  py::arg("YT2"),  py::arg("ZT2"),  py::arg("Index"),  py::arg("i1"),  py::arg("i1p1"),  py::arg("i1p2"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("X1"),  py::arg("Y1"),  py::arg("Z1"),  py::arg("X2"),  py::arg("Y2"),  py::arg("Z2"),  py::arg("XT1"),  py::arg("YT1"),  py::arg("ZT1"),  py::arg("XT2"),  py::arg("YT2"),  py::arg("ZT2"),  py::arg("Index"),  py::arg("i1"),  py::arg("i1p1"),  py::arg("i1p2"),  py::arg("flag") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("X1"),  py::arg("Y1"),  py::arg("Z1"),  py::arg("X2"),  py::arg("Y2"),  py::arg("Z2"),  py::arg("XT1"),  py::arg("YT1"),  py::arg("ZT1"),  py::arg("XT2"),  py::arg("YT2"),  py::arg("ZT2"),  py::arg("Index"),  py::arg("i1"),  py::arg("i1p1"),  py::arg("i1p2"),  py::arg("i2"),  py::arg("i2p1"),  py::arg("i2p2"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("X1"),  py::arg("Y1"),  py::arg("Z1"),  py::arg("X2"),  py::arg("Y2"),  py::arg("Z2"),  py::arg("XT1"),  py::arg("YT1"),  py::arg("ZT1"),  py::arg("XT2"),  py::arg("YT2"),  py::arg("ZT2"),  py::arg("Index"),  py::arg("i1"),  py::arg("i1p1"),  py::arg("i1p2"),  py::arg("i2"),  py::arg("i2p1"),  py::arg("i2p2"),  py::arg("flag") )
    // methods
        .def("Rg1Line",
             (Standard_Boolean (HLRAlgo_BiPoint::*)() const) static_cast<Standard_Boolean (HLRAlgo_BiPoint::*)() const>(&HLRAlgo_BiPoint::Rg1Line),
             R"#(None)#" )
        .def("Rg1Line",
             (void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) >(&HLRAlgo_BiPoint::Rg1Line),
             R"#(None)#"  , py::arg("B"))
        .def("RgNLine",
             (Standard_Boolean (HLRAlgo_BiPoint::*)() const) static_cast<Standard_Boolean (HLRAlgo_BiPoint::*)() const>(&HLRAlgo_BiPoint::RgNLine),
             R"#(None)#" )
        .def("RgNLine",
             (void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) >(&HLRAlgo_BiPoint::RgNLine),
             R"#(None)#"  , py::arg("B"))
        .def("OutLine",
             (Standard_Boolean (HLRAlgo_BiPoint::*)() const) static_cast<Standard_Boolean (HLRAlgo_BiPoint::*)() const>(&HLRAlgo_BiPoint::OutLine),
             R"#(None)#" )
        .def("OutLine",
             (void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) >(&HLRAlgo_BiPoint::OutLine),
             R"#(None)#"  , py::arg("B"))
        .def("IntLine",
             (Standard_Boolean (HLRAlgo_BiPoint::*)() const) static_cast<Standard_Boolean (HLRAlgo_BiPoint::*)() const>(&HLRAlgo_BiPoint::IntLine),
             R"#(None)#" )
        .def("IntLine",
             (void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) >(&HLRAlgo_BiPoint::IntLine),
             R"#(None)#"  , py::arg("B"))
        .def("Hidden",
             (Standard_Boolean (HLRAlgo_BiPoint::*)() const) static_cast<Standard_Boolean (HLRAlgo_BiPoint::*)() const>(&HLRAlgo_BiPoint::Hidden),
             R"#(None)#" )
        .def("Hidden",
             (void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_BiPoint::*)( const Standard_Boolean  ) >(&HLRAlgo_BiPoint::Hidden),
             R"#(None)#"  , py::arg("B"))
        .def("Indices",
             (HLRAlgo_BiPoint::IndicesT & (HLRAlgo_BiPoint::*)() ) static_cast<HLRAlgo_BiPoint::IndicesT & (HLRAlgo_BiPoint::*)() >(&HLRAlgo_BiPoint::Indices),
             R"#(None)#" )
        .def("Points",
             (HLRAlgo_BiPoint::PointsT & (HLRAlgo_BiPoint::*)() ) static_cast<HLRAlgo_BiPoint::PointsT & (HLRAlgo_BiPoint::*)() >(&HLRAlgo_BiPoint::Points),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_Coincidence , shared_ptr<HLRAlgo_Coincidence>  >>(m.attr("HLRAlgo_Coincidence"))
        .def(py::init<  >()  )
    // methods
        .def("Set2D",
             (void (HLRAlgo_Coincidence::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (HLRAlgo_Coincidence::*)( const Standard_Integer ,  const Standard_Real  ) >(&HLRAlgo_Coincidence::Set2D),
             R"#(None)#"  , py::arg("FE"),  py::arg("Param"))
        .def("SetState3D",
             (void (HLRAlgo_Coincidence::*)( const TopAbs_State ,  const TopAbs_State  ) ) static_cast<void (HLRAlgo_Coincidence::*)( const TopAbs_State ,  const TopAbs_State  ) >(&HLRAlgo_Coincidence::SetState3D),
             R"#(None)#"  , py::arg("stbef"),  py::arg("staft"))
        .def("State3D",
             (void (HLRAlgo_Coincidence::*)( TopAbs_State & ,  TopAbs_State &  ) const) static_cast<void (HLRAlgo_Coincidence::*)( TopAbs_State & ,  TopAbs_State &  ) const>(&HLRAlgo_Coincidence::State3D),
             R"#(None)#"  , py::arg("stbef"),  py::arg("staft"))
    // methods using call by reference i.s.o. return
        .def("Value2D",
             []( HLRAlgo_Coincidence &self   ){ Standard_Integer  FE; Standard_Real  Param; self.Value2D(FE,Param); return std::make_tuple(FE,Param); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_EdgeIterator , shared_ptr<HLRAlgo_EdgeIterator>  >>(m.attr("HLRAlgo_EdgeIterator"))
        .def(py::init<  >()  )
    // methods
        .def("InitHidden",
             (void (HLRAlgo_EdgeIterator::*)( HLRAlgo_EdgeStatus &  ) ) static_cast<void (HLRAlgo_EdgeIterator::*)( HLRAlgo_EdgeStatus &  ) >(&HLRAlgo_EdgeIterator::InitHidden),
             R"#(None)#"  , py::arg("status"))
        .def("MoreHidden",
             (Standard_Boolean (HLRAlgo_EdgeIterator::*)() const) static_cast<Standard_Boolean (HLRAlgo_EdgeIterator::*)() const>(&HLRAlgo_EdgeIterator::MoreHidden),
             R"#(None)#" )
        .def("NextHidden",
             (void (HLRAlgo_EdgeIterator::*)() ) static_cast<void (HLRAlgo_EdgeIterator::*)() >(&HLRAlgo_EdgeIterator::NextHidden),
             R"#(None)#" )
        .def("InitVisible",
             (void (HLRAlgo_EdgeIterator::*)( HLRAlgo_EdgeStatus &  ) ) static_cast<void (HLRAlgo_EdgeIterator::*)( HLRAlgo_EdgeStatus &  ) >(&HLRAlgo_EdgeIterator::InitVisible),
             R"#(None)#"  , py::arg("status"))
        .def("MoreVisible",
             (Standard_Boolean (HLRAlgo_EdgeIterator::*)() const) static_cast<Standard_Boolean (HLRAlgo_EdgeIterator::*)() const>(&HLRAlgo_EdgeIterator::MoreVisible),
             R"#(None)#" )
        .def("NextVisible",
             (void (HLRAlgo_EdgeIterator::*)() ) static_cast<void (HLRAlgo_EdgeIterator::*)() >(&HLRAlgo_EdgeIterator::NextVisible),
             R"#(None)#" )
        .def("MoreHidden",
             (Standard_Boolean (HLRAlgo_EdgeIterator::*)() const) static_cast<Standard_Boolean (HLRAlgo_EdgeIterator::*)() const>(&HLRAlgo_EdgeIterator::MoreHidden),
             R"#(None)#" )
        .def("InitVisible",
             (void (HLRAlgo_EdgeIterator::*)( HLRAlgo_EdgeStatus &  ) ) static_cast<void (HLRAlgo_EdgeIterator::*)( HLRAlgo_EdgeStatus &  ) >(&HLRAlgo_EdgeIterator::InitVisible),
             R"#(None)#"  , py::arg("status"))
        .def("MoreVisible",
             (Standard_Boolean (HLRAlgo_EdgeIterator::*)() const) static_cast<Standard_Boolean (HLRAlgo_EdgeIterator::*)() const>(&HLRAlgo_EdgeIterator::MoreVisible),
             R"#(None)#" )
        .def("NextVisible",
             (void (HLRAlgo_EdgeIterator::*)() ) static_cast<void (HLRAlgo_EdgeIterator::*)() >(&HLRAlgo_EdgeIterator::NextVisible),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Hidden",
             []( HLRAlgo_EdgeIterator &self , Standard_ShortReal & TolStart,Standard_ShortReal & TolEnd ){ Standard_Real  Start; Standard_Real  End; self.Hidden(Start,TolStart,End,TolEnd); return std::make_tuple(Start,End); },
             R"#(Returns the bounds and the tolerances of the current Hidden Interval)#"  , py::arg("TolStart"),  py::arg("TolEnd"))
        .def("Visible",
             []( HLRAlgo_EdgeIterator &self , Standard_ShortReal & TolStart,Standard_ShortReal & TolEnd ){ Standard_Real  Start; Standard_Real  End; self.Visible(Start,TolStart,End,TolEnd); return std::make_tuple(Start,End); },
             R"#(Returns the bounds and the tolerances of the current Visible Interval)#"  , py::arg("TolStart"),  py::arg("TolEnd"))
        .def("Hidden",
             []( HLRAlgo_EdgeIterator &self , Standard_ShortReal & TolStart,Standard_ShortReal & TolEnd ){ Standard_Real  Start; Standard_Real  End; self.Hidden(Start,TolStart,End,TolEnd); return std::make_tuple(Start,End); },
             R"#(Returns the bounds and the tolerances of the current Hidden Interval)#"  , py::arg("TolStart"),  py::arg("TolEnd"))
        .def("Visible",
             []( HLRAlgo_EdgeIterator &self , Standard_ShortReal & TolStart,Standard_ShortReal & TolEnd ){ Standard_Real  Start; Standard_Real  End; self.Visible(Start,TolStart,End,TolEnd); return std::make_tuple(Start,End); },
             R"#(Returns the bounds and the tolerances of the current Visible Interval)#"  , py::arg("TolStart"),  py::arg("TolEnd"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_EdgeStatus , shared_ptr<HLRAlgo_EdgeStatus>  >>(m.attr("HLRAlgo_EdgeStatus"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_ShortReal,const Standard_Real,const Standard_ShortReal >()  , py::arg("Start"),  py::arg("TolStart"),  py::arg("End"),  py::arg("TolEnd") )
    // methods
        .def("Initialize",
             (void (HLRAlgo_EdgeStatus::*)( const Standard_Real ,  const Standard_ShortReal ,  const Standard_Real ,  const Standard_ShortReal  ) ) static_cast<void (HLRAlgo_EdgeStatus::*)( const Standard_Real ,  const Standard_ShortReal ,  const Standard_Real ,  const Standard_ShortReal  ) >(&HLRAlgo_EdgeStatus::Initialize),
             R"#(Initialize an EdgeStatus. Default visible. The Edge is bounded by the interval <Start>, <End> with the tolerances <TolStart>, <TolEnd>.)#"  , py::arg("Start"),  py::arg("TolStart"),  py::arg("End"),  py::arg("TolEnd"))
        .def("NbVisiblePart",
             (Standard_Integer (HLRAlgo_EdgeStatus::*)() const) static_cast<Standard_Integer (HLRAlgo_EdgeStatus::*)() const>(&HLRAlgo_EdgeStatus::NbVisiblePart),
             R"#(None)#" )
        .def("Hide",
             (void (HLRAlgo_EdgeStatus::*)( const Standard_Real ,  const Standard_ShortReal ,  const Standard_Real ,  const Standard_ShortReal ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (HLRAlgo_EdgeStatus::*)( const Standard_Real ,  const Standard_ShortReal ,  const Standard_Real ,  const Standard_ShortReal ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&HLRAlgo_EdgeStatus::Hide),
             R"#(Hides the interval <Start>, <End> with the tolerances <TolStart>, <TolEnd>. This interval is subtracted from the visible parts. If the hidden part is on ( or under ) the face the flag <OnFace> is True ( or False ). If the hidden part is on ( or inside ) the boundary of the face the flag <OnBoundary> is True ( or False ).)#"  , py::arg("Start"),  py::arg("TolStart"),  py::arg("End"),  py::arg("TolEnd"),  py::arg("OnFace"),  py::arg("OnBoundary"))
        .def("HideAll",
             (void (HLRAlgo_EdgeStatus::*)() ) static_cast<void (HLRAlgo_EdgeStatus::*)() >(&HLRAlgo_EdgeStatus::HideAll),
             R"#(Hide the whole Edge.)#" )
        .def("ShowAll",
             (void (HLRAlgo_EdgeStatus::*)() ) static_cast<void (HLRAlgo_EdgeStatus::*)() >(&HLRAlgo_EdgeStatus::ShowAll),
             R"#(Show the whole Edge.)#" )
        .def("AllHidden",
             (Standard_Boolean (HLRAlgo_EdgeStatus::*)() const) static_cast<Standard_Boolean (HLRAlgo_EdgeStatus::*)() const>(&HLRAlgo_EdgeStatus::AllHidden),
             R"#(None)#" )
        .def("AllHidden",
             (void (HLRAlgo_EdgeStatus::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_EdgeStatus::*)( const Standard_Boolean  ) >(&HLRAlgo_EdgeStatus::AllHidden),
             R"#(None)#"  , py::arg("B"))
        .def("AllVisible",
             (Standard_Boolean (HLRAlgo_EdgeStatus::*)() const) static_cast<Standard_Boolean (HLRAlgo_EdgeStatus::*)() const>(&HLRAlgo_EdgeStatus::AllVisible),
             R"#(None)#" )
        .def("AllVisible",
             (void (HLRAlgo_EdgeStatus::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_EdgeStatus::*)( const Standard_Boolean  ) >(&HLRAlgo_EdgeStatus::AllVisible),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( HLRAlgo_EdgeStatus &self , Standard_ShortReal & theTolStart,Standard_ShortReal & theTolEnd ){ Standard_Real  theStart; Standard_Real  theEnd; self.Bounds(theStart,theTolStart,theEnd,theTolEnd); return std::make_tuple(theStart,theEnd); },
             R"#(None)#"  , py::arg("theTolStart"),  py::arg("theTolEnd"))
        .def("VisiblePart",
             []( HLRAlgo_EdgeStatus &self , const Standard_Integer Index,Standard_ShortReal & TolStart,Standard_ShortReal & TolEnd ){ Standard_Real  Start; Standard_Real  End; self.VisiblePart(Index,Start,TolStart,End,TolEnd); return std::make_tuple(Start,End); },
             R"#(None)#"  , py::arg("Index"),  py::arg("TolStart"),  py::arg("TolEnd"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_EdgesBlock ,opencascade::handle<HLRAlgo_EdgesBlock>  , Standard_Transient >>(m.attr("HLRAlgo_EdgesBlock"))
        .def(py::init< const Standard_Integer >()  , py::arg("NbEdges") )
    // methods
        .def("NbEdges",
             (Standard_Integer (HLRAlgo_EdgesBlock::*)() const) static_cast<Standard_Integer (HLRAlgo_EdgesBlock::*)() const>(&HLRAlgo_EdgesBlock::NbEdges),
             R"#(None)#" )
        .def("Edge",
             (void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Integer  ) >(&HLRAlgo_EdgesBlock::Edge),
             R"#(None)#"  , py::arg("I"),  py::arg("EI"))
        .def("Edge",
             (Standard_Integer (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const>(&HLRAlgo_EdgesBlock::Edge),
             R"#(None)#"  , py::arg("I"))
        .def("Orientation",
             (void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const TopAbs_Orientation  ) ) static_cast<void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const TopAbs_Orientation  ) >(&HLRAlgo_EdgesBlock::Orientation),
             R"#(None)#"  , py::arg("I"),  py::arg("Or"))
        .def("Orientation",
             (TopAbs_Orientation (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const) static_cast<TopAbs_Orientation (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const>(&HLRAlgo_EdgesBlock::Orientation),
             R"#(None)#"  , py::arg("I"))
        .def("OutLine",
             (Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const>(&HLRAlgo_EdgesBlock::OutLine),
             R"#(None)#"  , py::arg("I"))
        .def("OutLine",
             (void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&HLRAlgo_EdgesBlock::OutLine),
             R"#(None)#"  , py::arg("I"),  py::arg("B"))
        .def("Internal",
             (Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const>(&HLRAlgo_EdgesBlock::Internal),
             R"#(None)#"  , py::arg("I"))
        .def("Internal",
             (void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&HLRAlgo_EdgesBlock::Internal),
             R"#(None)#"  , py::arg("I"),  py::arg("B"))
        .def("Double",
             (Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const>(&HLRAlgo_EdgesBlock::Double),
             R"#(None)#"  , py::arg("I"))
        .def("Double",
             (void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&HLRAlgo_EdgesBlock::Double),
             R"#(None)#"  , py::arg("I"),  py::arg("B"))
        .def("IsoLine",
             (Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (HLRAlgo_EdgesBlock::*)( const Standard_Integer  ) const>(&HLRAlgo_EdgesBlock::IsoLine),
             R"#(None)#"  , py::arg("I"))
        .def("IsoLine",
             (void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (HLRAlgo_EdgesBlock::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&HLRAlgo_EdgesBlock::IsoLine),
             R"#(None)#"  , py::arg("I"),  py::arg("B"))
        .def("UpdateMinMax",
             (void (HLRAlgo_EdgesBlock::*)( const HLRAlgo_EdgesBlock::MinMaxIndices &  ) ) static_cast<void (HLRAlgo_EdgesBlock::*)( const HLRAlgo_EdgesBlock::MinMaxIndices &  ) >(&HLRAlgo_EdgesBlock::UpdateMinMax),
             R"#(None)#"  , py::arg("TotMinMax"))
        .def("MinMax",
             (HLRAlgo_EdgesBlock::MinMaxIndices & (HLRAlgo_EdgesBlock::*)() ) static_cast<HLRAlgo_EdgesBlock::MinMaxIndices & (HLRAlgo_EdgesBlock::*)() >(&HLRAlgo_EdgesBlock::MinMax),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_EdgesBlock::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_EdgesBlock::*)() const>(&HLRAlgo_EdgesBlock::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_EdgesBlock::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_EdgesBlock::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_HArray1OfPHDat ,opencascade::handle<HLRAlgo_HArray1OfPHDat>  , HLRAlgo_Array1OfPHDat , Standard_Transient >>(m.attr("HLRAlgo_HArray1OfPHDat"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const HLRAlgo_PolyHidingData & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<HLRAlgo_PolyHidingData> & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const HLRAlgo_Array1OfPHDat & (HLRAlgo_HArray1OfPHDat::*)() const) static_cast<const HLRAlgo_Array1OfPHDat & (HLRAlgo_HArray1OfPHDat::*)() const>(&HLRAlgo_HArray1OfPHDat::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (HLRAlgo_Array1OfPHDat & (HLRAlgo_HArray1OfPHDat::*)() ) static_cast<HLRAlgo_Array1OfPHDat & (HLRAlgo_HArray1OfPHDat::*)() >(&HLRAlgo_HArray1OfPHDat::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfPHDat::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfPHDat::*)() const>(&HLRAlgo_HArray1OfPHDat::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_HArray1OfPHDat::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_HArray1OfPHDat::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_HArray1OfPINod ,opencascade::handle<HLRAlgo_HArray1OfPINod>  , HLRAlgo_Array1OfPINod , Standard_Transient >>(m.attr("HLRAlgo_HArray1OfPINod"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<HLRAlgo_PolyInternalNode> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<HLRAlgo_PolyInternalNode> > & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const HLRAlgo_Array1OfPINod & (HLRAlgo_HArray1OfPINod::*)() const) static_cast<const HLRAlgo_Array1OfPINod & (HLRAlgo_HArray1OfPINod::*)() const>(&HLRAlgo_HArray1OfPINod::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (HLRAlgo_Array1OfPINod & (HLRAlgo_HArray1OfPINod::*)() ) static_cast<HLRAlgo_Array1OfPINod & (HLRAlgo_HArray1OfPINod::*)() >(&HLRAlgo_HArray1OfPINod::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfPINod::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfPINod::*)() const>(&HLRAlgo_HArray1OfPINod::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_HArray1OfPINod::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_HArray1OfPINod::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_HArray1OfPISeg ,opencascade::handle<HLRAlgo_HArray1OfPISeg>  , HLRAlgo_Array1OfPISeg , Standard_Transient >>(m.attr("HLRAlgo_HArray1OfPISeg"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const HLRAlgo_Array1OfPISeg::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<HLRAlgo_PolyInternalSegment> & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const HLRAlgo_Array1OfPISeg & (HLRAlgo_HArray1OfPISeg::*)() const) static_cast<const HLRAlgo_Array1OfPISeg & (HLRAlgo_HArray1OfPISeg::*)() const>(&HLRAlgo_HArray1OfPISeg::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (HLRAlgo_Array1OfPISeg & (HLRAlgo_HArray1OfPISeg::*)() ) static_cast<HLRAlgo_Array1OfPISeg & (HLRAlgo_HArray1OfPISeg::*)() >(&HLRAlgo_HArray1OfPISeg::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfPISeg::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfPISeg::*)() const>(&HLRAlgo_HArray1OfPISeg::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_HArray1OfPISeg::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_HArray1OfPISeg::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_HArray1OfTData ,opencascade::handle<HLRAlgo_HArray1OfTData>  , HLRAlgo_Array1OfTData , Standard_Transient >>(m.attr("HLRAlgo_HArray1OfTData"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const HLRAlgo_Array1OfTData::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<HLRAlgo_TriangleData> & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const HLRAlgo_Array1OfTData & (HLRAlgo_HArray1OfTData::*)() const) static_cast<const HLRAlgo_Array1OfTData & (HLRAlgo_HArray1OfTData::*)() const>(&HLRAlgo_HArray1OfTData::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (HLRAlgo_Array1OfTData & (HLRAlgo_HArray1OfTData::*)() ) static_cast<HLRAlgo_Array1OfTData & (HLRAlgo_HArray1OfTData::*)() >(&HLRAlgo_HArray1OfTData::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfTData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_HArray1OfTData::*)() const>(&HLRAlgo_HArray1OfTData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_HArray1OfTData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_HArray1OfTData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_Interference , shared_ptr<HLRAlgo_Interference>  >>(m.attr("HLRAlgo_Interference"))
        .def(py::init<  >()  )
        .def(py::init< const HLRAlgo_Intersection &,const HLRAlgo_Coincidence &,const TopAbs_Orientation,const TopAbs_Orientation,const TopAbs_Orientation >()  , py::arg("Inters"),  py::arg("Bound"),  py::arg("Orient"),  py::arg("Trans"),  py::arg("BTrans") )
    // methods
        .def("Intersection",
             (void (HLRAlgo_Interference::*)( const HLRAlgo_Intersection &  ) ) static_cast<void (HLRAlgo_Interference::*)( const HLRAlgo_Intersection &  ) >(&HLRAlgo_Interference::Intersection),
             R"#(None)#"  , py::arg("I"))
        .def("Boundary",
             (void (HLRAlgo_Interference::*)( const HLRAlgo_Coincidence &  ) ) static_cast<void (HLRAlgo_Interference::*)( const HLRAlgo_Coincidence &  ) >(&HLRAlgo_Interference::Boundary),
             R"#(None)#"  , py::arg("B"))
        .def("Orientation",
             (void (HLRAlgo_Interference::*)( const TopAbs_Orientation  ) ) static_cast<void (HLRAlgo_Interference::*)( const TopAbs_Orientation  ) >(&HLRAlgo_Interference::Orientation),
             R"#(None)#"  , py::arg("O"))
        .def("Transition",
             (void (HLRAlgo_Interference::*)( const TopAbs_Orientation  ) ) static_cast<void (HLRAlgo_Interference::*)( const TopAbs_Orientation  ) >(&HLRAlgo_Interference::Transition),
             R"#(None)#"  , py::arg("Tr"))
        .def("BoundaryTransition",
             (void (HLRAlgo_Interference::*)( const TopAbs_Orientation  ) ) static_cast<void (HLRAlgo_Interference::*)( const TopAbs_Orientation  ) >(&HLRAlgo_Interference::BoundaryTransition),
             R"#(None)#"  , py::arg("BTr"))
        .def("Intersection",
             (const HLRAlgo_Intersection & (HLRAlgo_Interference::*)() const) static_cast<const HLRAlgo_Intersection & (HLRAlgo_Interference::*)() const>(&HLRAlgo_Interference::Intersection),
             R"#(None)#" )
        .def("ChangeIntersection",
             (HLRAlgo_Intersection & (HLRAlgo_Interference::*)() ) static_cast<HLRAlgo_Intersection & (HLRAlgo_Interference::*)() >(&HLRAlgo_Interference::ChangeIntersection),
             R"#(None)#" )
        .def("Boundary",
             (const HLRAlgo_Coincidence & (HLRAlgo_Interference::*)() const) static_cast<const HLRAlgo_Coincidence & (HLRAlgo_Interference::*)() const>(&HLRAlgo_Interference::Boundary),
             R"#(None)#" )
        .def("ChangeBoundary",
             (HLRAlgo_Coincidence & (HLRAlgo_Interference::*)() ) static_cast<HLRAlgo_Coincidence & (HLRAlgo_Interference::*)() >(&HLRAlgo_Interference::ChangeBoundary),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (HLRAlgo_Interference::*)() const) static_cast<TopAbs_Orientation (HLRAlgo_Interference::*)() const>(&HLRAlgo_Interference::Orientation),
             R"#(None)#" )
        .def("Transition",
             (TopAbs_Orientation (HLRAlgo_Interference::*)() const) static_cast<TopAbs_Orientation (HLRAlgo_Interference::*)() const>(&HLRAlgo_Interference::Transition),
             R"#(None)#" )
        .def("BoundaryTransition",
             (TopAbs_Orientation (HLRAlgo_Interference::*)() const) static_cast<TopAbs_Orientation (HLRAlgo_Interference::*)() const>(&HLRAlgo_Interference::BoundaryTransition),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_Intersection , shared_ptr<HLRAlgo_Intersection>  >>(m.attr("HLRAlgo_Intersection"))
        .def(py::init<  >()  )
        .def(py::init< const TopAbs_Orientation,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_ShortReal,const TopAbs_State >()  , py::arg("Ori"),  py::arg("Lev"),  py::arg("SegInd"),  py::arg("Ind"),  py::arg("P"),  py::arg("Tol"),  py::arg("S") )
    // methods
        .def("Orientation",
             (void (HLRAlgo_Intersection::*)( const TopAbs_Orientation  ) ) static_cast<void (HLRAlgo_Intersection::*)( const TopAbs_Orientation  ) >(&HLRAlgo_Intersection::Orientation),
             R"#(None)#"  , py::arg("Ori"))
        .def("Orientation",
             (TopAbs_Orientation (HLRAlgo_Intersection::*)() const) static_cast<TopAbs_Orientation (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Orientation),
             R"#(None)#" )
        .def("Level",
             (void (HLRAlgo_Intersection::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Integer  ) >(&HLRAlgo_Intersection::Level),
             R"#(None)#"  , py::arg("Lev"))
        .def("Level",
             (Standard_Integer (HLRAlgo_Intersection::*)() const) static_cast<Standard_Integer (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Level),
             R"#(None)#" )
        .def("SegIndex",
             (void (HLRAlgo_Intersection::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Integer  ) >(&HLRAlgo_Intersection::SegIndex),
             R"#(None)#"  , py::arg("SegInd"))
        .def("SegIndex",
             (Standard_Integer (HLRAlgo_Intersection::*)() const) static_cast<Standard_Integer (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::SegIndex),
             R"#(None)#" )
        .def("Index",
             (void (HLRAlgo_Intersection::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Integer  ) >(&HLRAlgo_Intersection::Index),
             R"#(None)#"  , py::arg("Ind"))
        .def("Index",
             (Standard_Integer (HLRAlgo_Intersection::*)() const) static_cast<Standard_Integer (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Index),
             R"#(None)#" )
        .def("Parameter",
             (void (HLRAlgo_Intersection::*)( const Standard_Real  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Real  ) >(&HLRAlgo_Intersection::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("Parameter",
             (Standard_Real (HLRAlgo_Intersection::*)() const) static_cast<Standard_Real (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Parameter),
             R"#(None)#" )
        .def("Tolerance",
             (void (HLRAlgo_Intersection::*)( const Standard_ShortReal  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_ShortReal  ) >(&HLRAlgo_Intersection::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("Tolerance",
             (Standard_ShortReal (HLRAlgo_Intersection::*)() const) static_cast<Standard_ShortReal (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Tolerance),
             R"#(None)#" )
        .def("State",
             (void (HLRAlgo_Intersection::*)( const TopAbs_State  ) ) static_cast<void (HLRAlgo_Intersection::*)( const TopAbs_State  ) >(&HLRAlgo_Intersection::State),
             R"#(None)#"  , py::arg("S"))
        .def("State",
             (TopAbs_State (HLRAlgo_Intersection::*)() const) static_cast<TopAbs_State (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::State),
             R"#(None)#" )
        .def("Orientation",
             (void (HLRAlgo_Intersection::*)( const TopAbs_Orientation  ) ) static_cast<void (HLRAlgo_Intersection::*)( const TopAbs_Orientation  ) >(&HLRAlgo_Intersection::Orientation),
             R"#(None)#"  , py::arg("Ori"))
        .def("Orientation",
             (TopAbs_Orientation (HLRAlgo_Intersection::*)() const) static_cast<TopAbs_Orientation (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Orientation),
             R"#(None)#" )
        .def("Level",
             (void (HLRAlgo_Intersection::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Integer  ) >(&HLRAlgo_Intersection::Level),
             R"#(None)#"  , py::arg("Lev"))
        .def("Level",
             (Standard_Integer (HLRAlgo_Intersection::*)() const) static_cast<Standard_Integer (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Level),
             R"#(None)#" )
        .def("SegIndex",
             (void (HLRAlgo_Intersection::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Integer  ) >(&HLRAlgo_Intersection::SegIndex),
             R"#(None)#"  , py::arg("SegInd"))
        .def("SegIndex",
             (Standard_Integer (HLRAlgo_Intersection::*)() const) static_cast<Standard_Integer (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::SegIndex),
             R"#(None)#" )
        .def("Index",
             (void (HLRAlgo_Intersection::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Integer  ) >(&HLRAlgo_Intersection::Index),
             R"#(None)#"  , py::arg("Ind"))
        .def("Index",
             (Standard_Integer (HLRAlgo_Intersection::*)() const) static_cast<Standard_Integer (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Index),
             R"#(None)#" )
        .def("Parameter",
             (void (HLRAlgo_Intersection::*)( const Standard_Real  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_Real  ) >(&HLRAlgo_Intersection::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("Parameter",
             (Standard_Real (HLRAlgo_Intersection::*)() const) static_cast<Standard_Real (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Parameter),
             R"#(None)#" )
        .def("Tolerance",
             (void (HLRAlgo_Intersection::*)( const Standard_ShortReal  ) ) static_cast<void (HLRAlgo_Intersection::*)( const Standard_ShortReal  ) >(&HLRAlgo_Intersection::Tolerance),
             R"#(None)#"  , py::arg("T"))
        .def("Tolerance",
             (Standard_ShortReal (HLRAlgo_Intersection::*)() const) static_cast<Standard_ShortReal (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::Tolerance),
             R"#(None)#" )
        .def("State",
             (void (HLRAlgo_Intersection::*)( const TopAbs_State  ) ) static_cast<void (HLRAlgo_Intersection::*)( const TopAbs_State  ) >(&HLRAlgo_Intersection::State),
             R"#(None)#"  , py::arg("St"))
        .def("State",
             (TopAbs_State (HLRAlgo_Intersection::*)() const) static_cast<TopAbs_State (HLRAlgo_Intersection::*)() const>(&HLRAlgo_Intersection::State),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_PolyAlgo ,opencascade::handle<HLRAlgo_PolyAlgo>  , Standard_Transient >>(m.attr("HLRAlgo_PolyAlgo"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (HLRAlgo_PolyAlgo::*)( const opencascade::handle<TColStd_HArray1OfTransient> &  ) ) static_cast<void (HLRAlgo_PolyAlgo::*)( const opencascade::handle<TColStd_HArray1OfTransient> &  ) >(&HLRAlgo_PolyAlgo::Init),
             R"#(None)#"  , py::arg("HShell"))
        .def("PolyShell",
             (TColStd_Array1OfTransient & (HLRAlgo_PolyAlgo::*)() const) static_cast<TColStd_Array1OfTransient & (HLRAlgo_PolyAlgo::*)() const>(&HLRAlgo_PolyAlgo::PolyShell),
             R"#(None)#" )
        .def("Clear",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::Clear),
             R"#(None)#" )
        .def("Update",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::Update),
             R"#(Prepare all the data to process the algo.)#" )
        .def("InitHide",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::InitHide),
             R"#(None)#" )
        .def("MoreHide",
             (Standard_Boolean (HLRAlgo_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyAlgo::*)() const>(&HLRAlgo_PolyAlgo::MoreHide),
             R"#(None)#" )
        .def("NextHide",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::NextHide),
             R"#(None)#" )
        .def("Hide",
             (HLRAlgo_BiPoint::PointsT & (HLRAlgo_PolyAlgo::*)( HLRAlgo_EdgeStatus & ,  Standard_Integer & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<HLRAlgo_BiPoint::PointsT & (HLRAlgo_PolyAlgo::*)( HLRAlgo_EdgeStatus & ,  Standard_Integer & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&HLRAlgo_PolyAlgo::Hide),
             R"#(process hiding between <Pt1> and <Pt2>.)#"  , py::arg("status"),  py::arg("Index"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl"))
        .def("InitShow",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::InitShow),
             R"#(None)#" )
        .def("MoreShow",
             (Standard_Boolean (HLRAlgo_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyAlgo::*)() const>(&HLRAlgo_PolyAlgo::MoreShow),
             R"#(None)#" )
        .def("NextShow",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::NextShow),
             R"#(None)#" )
        .def("Show",
             (HLRAlgo_BiPoint::PointsT & (HLRAlgo_PolyAlgo::*)( Standard_Integer & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<HLRAlgo_BiPoint::PointsT & (HLRAlgo_PolyAlgo::*)( Standard_Integer & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&HLRAlgo_PolyAlgo::Show),
             R"#(process hiding between <Pt1> and <Pt2>.)#"  , py::arg("Index"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_PolyAlgo::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_PolyAlgo::*)() const>(&HLRAlgo_PolyAlgo::DynamicType),
             R"#(None)#" )
        .def("PolyShell",
             (TColStd_Array1OfTransient & (HLRAlgo_PolyAlgo::*)() const) static_cast<TColStd_Array1OfTransient & (HLRAlgo_PolyAlgo::*)() const>(&HLRAlgo_PolyAlgo::PolyShell),
             R"#(None)#" )
        .def("InitHide",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::InitHide),
             R"#(None)#" )
        .def("MoreHide",
             (Standard_Boolean (HLRAlgo_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyAlgo::*)() const>(&HLRAlgo_PolyAlgo::MoreHide),
             R"#(None)#" )
        .def("InitShow",
             (void (HLRAlgo_PolyAlgo::*)() ) static_cast<void (HLRAlgo_PolyAlgo::*)() >(&HLRAlgo_PolyAlgo::InitShow),
             R"#(None)#" )
        .def("MoreShow",
             (Standard_Boolean (HLRAlgo_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyAlgo::*)() const>(&HLRAlgo_PolyAlgo::MoreShow),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_PolyAlgo::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_PolyAlgo::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_PolyData ,opencascade::handle<HLRAlgo_PolyData>  , Standard_Transient >>(m.attr("HLRAlgo_PolyData"))
        .def(py::init<  >()  )
    // methods
        .def("HNodes",
             (void (HLRAlgo_PolyData::*)( const opencascade::handle<TColgp_HArray1OfXYZ> &  ) ) static_cast<void (HLRAlgo_PolyData::*)( const opencascade::handle<TColgp_HArray1OfXYZ> &  ) >(&HLRAlgo_PolyData::HNodes),
             R"#(None)#"  , py::arg("HNodes"))
        .def("HTData",
             (void (HLRAlgo_PolyData::*)( const opencascade::handle<HLRAlgo_HArray1OfTData> &  ) ) static_cast<void (HLRAlgo_PolyData::*)( const opencascade::handle<HLRAlgo_HArray1OfTData> &  ) >(&HLRAlgo_PolyData::HTData),
             R"#(None)#"  , py::arg("HTData"))
        .def("HPHDat",
             (void (HLRAlgo_PolyData::*)( const opencascade::handle<HLRAlgo_HArray1OfPHDat> &  ) ) static_cast<void (HLRAlgo_PolyData::*)( const opencascade::handle<HLRAlgo_HArray1OfPHDat> &  ) >(&HLRAlgo_PolyData::HPHDat),
             R"#(None)#"  , py::arg("HPHDat"))
        .def("FaceIndex",
             (void (HLRAlgo_PolyData::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_PolyData::*)( const Standard_Integer  ) >(&HLRAlgo_PolyData::FaceIndex),
             R"#(None)#"  , py::arg("I"))
        .def("FaceIndex",
             (Standard_Integer (HLRAlgo_PolyData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::FaceIndex),
             R"#(None)#" )
        .def("Nodes",
             (TColgp_Array1OfXYZ & (HLRAlgo_PolyData::*)() const) static_cast<TColgp_Array1OfXYZ & (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::Nodes),
             R"#(None)#" )
        .def("TData",
             (HLRAlgo_Array1OfTData & (HLRAlgo_PolyData::*)() const) static_cast<HLRAlgo_Array1OfTData & (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::TData),
             R"#(None)#" )
        .def("PHDat",
             (HLRAlgo_Array1OfPHDat & (HLRAlgo_PolyData::*)() const) static_cast<HLRAlgo_Array1OfPHDat & (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::PHDat),
             R"#(None)#" )
        .def("UpdateGlobalMinMax",
             (void (HLRAlgo_PolyData::*)( HLRAlgo_PolyData::Box &  ) ) static_cast<void (HLRAlgo_PolyData::*)( HLRAlgo_PolyData::Box &  ) >(&HLRAlgo_PolyData::UpdateGlobalMinMax),
             R"#(None)#"  , py::arg("theBox"))
        .def("Hiding",
             (Standard_Boolean (HLRAlgo_PolyData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::Hiding),
             R"#(None)#" )
        .def("HideByPolyData",
             (void (HLRAlgo_PolyData::*)( const HLRAlgo_BiPoint::PointsT & ,  HLRAlgo_PolyData::Triangle & ,  HLRAlgo_BiPoint::IndicesT & ,  const Standard_Boolean ,  HLRAlgo_EdgeStatus &  ) ) static_cast<void (HLRAlgo_PolyData::*)( const HLRAlgo_BiPoint::PointsT & ,  HLRAlgo_PolyData::Triangle & ,  HLRAlgo_BiPoint::IndicesT & ,  const Standard_Boolean ,  HLRAlgo_EdgeStatus &  ) >(&HLRAlgo_PolyData::HideByPolyData),
             R"#(process hiding between <Pt1> and <Pt2>.)#"  , py::arg("thePoints"),  py::arg("theTriangle"),  py::arg("theIndices"),  py::arg("HidingShell"),  py::arg("status"))
        .def("Indices",
             (HLRAlgo_PolyData::FaceIndices & (HLRAlgo_PolyData::*)() ) static_cast<HLRAlgo_PolyData::FaceIndices & (HLRAlgo_PolyData::*)() >(&HLRAlgo_PolyData::Indices),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_PolyData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::DynamicType),
             R"#(None)#" )
        .def("FaceIndex",
             (void (HLRAlgo_PolyData::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_PolyData::*)( const Standard_Integer  ) >(&HLRAlgo_PolyData::FaceIndex),
             R"#(None)#"  , py::arg("I"))
        .def("FaceIndex",
             (Standard_Integer (HLRAlgo_PolyData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::FaceIndex),
             R"#(None)#" )
        .def("Nodes",
             (TColgp_Array1OfXYZ & (HLRAlgo_PolyData::*)() const) static_cast<TColgp_Array1OfXYZ & (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::Nodes),
             R"#(None)#" )
        .def("TData",
             (HLRAlgo_Array1OfTData & (HLRAlgo_PolyData::*)() const) static_cast<HLRAlgo_Array1OfTData & (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::TData),
             R"#(None)#" )
        .def("PHDat",
             (HLRAlgo_Array1OfPHDat & (HLRAlgo_PolyData::*)() const) static_cast<HLRAlgo_Array1OfPHDat & (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::PHDat),
             R"#(None)#" )
        .def("Hiding",
             (Standard_Boolean (HLRAlgo_PolyData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyData::*)() const>(&HLRAlgo_PolyData::Hiding),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_PolyData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_PolyData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_PolyHidingData , shared_ptr<HLRAlgo_PolyHidingData>  >>(m.attr("HLRAlgo_PolyHidingData"))
        .def(py::init<  >()  )
    // methods
        .def("Set",
             (void (HLRAlgo_PolyHidingData::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (HLRAlgo_PolyHidingData::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&HLRAlgo_PolyHidingData::Set),
             R"#(None)#"  , py::arg("Index"),  py::arg("Minim"),  py::arg("Maxim"),  py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"))
        .def("Indices",
             (HLRAlgo_PolyHidingData::TriangleIndices & (HLRAlgo_PolyHidingData::*)() ) static_cast<HLRAlgo_PolyHidingData::TriangleIndices & (HLRAlgo_PolyHidingData::*)() >(&HLRAlgo_PolyHidingData::Indices),
             R"#(None)#" )
        .def("Plane",
             (HLRAlgo_PolyHidingData::PlaneT & (HLRAlgo_PolyHidingData::*)() ) static_cast<HLRAlgo_PolyHidingData::PlaneT & (HLRAlgo_PolyHidingData::*)() >(&HLRAlgo_PolyHidingData::Plane),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_PolyInternalData ,opencascade::handle<HLRAlgo_PolyInternalData>  , Standard_Transient >>(m.attr("HLRAlgo_PolyInternalData"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("nbNod"),  py::arg("nbTri") )
    // methods
        .def("Dump",
             (void (HLRAlgo_PolyInternalData::*)() const) static_cast<void (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::Dump),
             R"#(None)#" )
        .def("DecTData",
             (void (HLRAlgo_PolyInternalData::*)() ) static_cast<void (HLRAlgo_PolyInternalData::*)() >(&HLRAlgo_PolyInternalData::DecTData),
             R"#(None)#" )
        .def("DecPISeg",
             (void (HLRAlgo_PolyInternalData::*)() ) static_cast<void (HLRAlgo_PolyInternalData::*)() >(&HLRAlgo_PolyInternalData::DecPISeg),
             R"#(None)#" )
        .def("DecPINod",
             (void (HLRAlgo_PolyInternalData::*)() ) static_cast<void (HLRAlgo_PolyInternalData::*)() >(&HLRAlgo_PolyInternalData::DecPINod),
             R"#(None)#" )
        .def("NbTData",
             (Standard_Integer (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::NbTData),
             R"#(None)#" )
        .def("NbPISeg",
             (Standard_Integer (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::NbPISeg),
             R"#(None)#" )
        .def("NbPINod",
             (Standard_Integer (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::NbPINod),
             R"#(None)#" )
        .def("Planar",
             (Standard_Boolean (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::Planar),
             R"#(None)#" )
        .def("Planar",
             (void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) >(&HLRAlgo_PolyInternalData::Planar),
             R"#(None)#"  , py::arg("B"))
        .def("IntOutL",
             (Standard_Boolean (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::IntOutL),
             R"#(None)#" )
        .def("IntOutL",
             (void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) >(&HLRAlgo_PolyInternalData::IntOutL),
             R"#(None)#"  , py::arg("B"))
        .def("TData",
             (HLRAlgo_Array1OfTData & (HLRAlgo_PolyInternalData::*)() const) static_cast<HLRAlgo_Array1OfTData & (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::TData),
             R"#(None)#" )
        .def("PISeg",
             (HLRAlgo_Array1OfPISeg & (HLRAlgo_PolyInternalData::*)() const) static_cast<HLRAlgo_Array1OfPISeg & (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::PISeg),
             R"#(None)#" )
        .def("PINod",
             (HLRAlgo_Array1OfPINod & (HLRAlgo_PolyInternalData::*)() const) static_cast<HLRAlgo_Array1OfPINod & (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::PINod),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_PolyInternalData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::DynamicType),
             R"#(None)#" )
        .def("DecTData",
             (void (HLRAlgo_PolyInternalData::*)() ) static_cast<void (HLRAlgo_PolyInternalData::*)() >(&HLRAlgo_PolyInternalData::DecTData),
             R"#(None)#" )
        .def("DecPISeg",
             (void (HLRAlgo_PolyInternalData::*)() ) static_cast<void (HLRAlgo_PolyInternalData::*)() >(&HLRAlgo_PolyInternalData::DecPISeg),
             R"#(None)#" )
        .def("DecPINod",
             (void (HLRAlgo_PolyInternalData::*)() ) static_cast<void (HLRAlgo_PolyInternalData::*)() >(&HLRAlgo_PolyInternalData::DecPINod),
             R"#(None)#" )
        .def("NbTData",
             (Standard_Integer (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::NbTData),
             R"#(None)#" )
        .def("NbPISeg",
             (Standard_Integer (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::NbPISeg),
             R"#(None)#" )
        .def("NbPINod",
             (Standard_Integer (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Integer (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::NbPINod),
             R"#(None)#" )
        .def("Planar",
             (Standard_Boolean (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::Planar),
             R"#(None)#" )
        .def("Planar",
             (void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) >(&HLRAlgo_PolyInternalData::Planar),
             R"#(None)#"  , py::arg("B"))
        .def("IntOutL",
             (Standard_Boolean (HLRAlgo_PolyInternalData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::IntOutL),
             R"#(None)#" )
        .def("IntOutL",
             (void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_PolyInternalData::*)( const Standard_Boolean  ) >(&HLRAlgo_PolyInternalData::IntOutL),
             R"#(None)#"  , py::arg("B"))
        .def("TData",
             (HLRAlgo_Array1OfTData & (HLRAlgo_PolyInternalData::*)() const) static_cast<HLRAlgo_Array1OfTData & (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::TData),
             R"#(None)#" )
        .def("PINod",
             (HLRAlgo_Array1OfPINod & (HLRAlgo_PolyInternalData::*)() const) static_cast<HLRAlgo_Array1OfPINod & (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::PINod),
             R"#(None)#" )
        .def("PISeg",
             (HLRAlgo_Array1OfPISeg & (HLRAlgo_PolyInternalData::*)() const) static_cast<HLRAlgo_Array1OfPISeg & (HLRAlgo_PolyInternalData::*)() const>(&HLRAlgo_PolyInternalData::PISeg),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_PolyInternalData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_PolyInternalData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_PolyInternalNode ,opencascade::handle<HLRAlgo_PolyInternalNode>  , Standard_Transient >>(m.attr("HLRAlgo_PolyInternalNode"))
        .def(py::init<  >()  )
    // methods
        .def("Indices",
             (HLRAlgo_PolyInternalNode::NodeIndices & (HLRAlgo_PolyInternalNode::*)() ) static_cast<HLRAlgo_PolyInternalNode::NodeIndices & (HLRAlgo_PolyInternalNode::*)() >(&HLRAlgo_PolyInternalNode::Indices),
             R"#(None)#" )
        .def("Data",
             (HLRAlgo_PolyInternalNode::NodeData & (HLRAlgo_PolyInternalNode::*)() ) static_cast<HLRAlgo_PolyInternalNode::NodeData & (HLRAlgo_PolyInternalNode::*)() >(&HLRAlgo_PolyInternalNode::Data),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_PolyInternalNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_PolyInternalNode::*)() const>(&HLRAlgo_PolyInternalNode::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_PolyInternalNode::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_PolyInternalNode::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_PolyShellData ,opencascade::handle<HLRAlgo_PolyShellData>  , Standard_Transient >>(m.attr("HLRAlgo_PolyShellData"))
        .def(py::init< const Standard_Integer >()  , py::arg("nbFace") )
    // methods
        .def("UpdateHiding",
             (void (HLRAlgo_PolyShellData::*)( const Standard_Integer  ) ) static_cast<void (HLRAlgo_PolyShellData::*)( const Standard_Integer  ) >(&HLRAlgo_PolyShellData::UpdateHiding),
             R"#(None)#"  , py::arg("nbHiding"))
        .def("Hiding",
             (Standard_Boolean (HLRAlgo_PolyShellData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyShellData::*)() const>(&HLRAlgo_PolyShellData::Hiding),
             R"#(None)#" )
        .def("PolyData",
             (TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() ) static_cast<TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() >(&HLRAlgo_PolyShellData::PolyData),
             R"#(None)#" )
        .def("HidingPolyData",
             (TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() ) static_cast<TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() >(&HLRAlgo_PolyShellData::HidingPolyData),
             R"#(None)#" )
        .def("Edges",
             (HLRAlgo_ListOfBPoint & (HLRAlgo_PolyShellData::*)() ) static_cast<HLRAlgo_ListOfBPoint & (HLRAlgo_PolyShellData::*)() >(&HLRAlgo_PolyShellData::Edges),
             R"#(None)#" )
        .def("Indices",
             (HLRAlgo_PolyShellData::ShellIndices & (HLRAlgo_PolyShellData::*)() ) static_cast<HLRAlgo_PolyShellData::ShellIndices & (HLRAlgo_PolyShellData::*)() >(&HLRAlgo_PolyShellData::Indices),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_PolyShellData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_PolyShellData::*)() const>(&HLRAlgo_PolyShellData::DynamicType),
             R"#(None)#" )
        .def("Hiding",
             (Standard_Boolean (HLRAlgo_PolyShellData::*)() const) static_cast<Standard_Boolean (HLRAlgo_PolyShellData::*)() const>(&HLRAlgo_PolyShellData::Hiding),
             R"#(None)#" )
        .def("PolyData",
             (TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() ) static_cast<TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() >(&HLRAlgo_PolyShellData::PolyData),
             R"#(None)#" )
        .def("HidingPolyData",
             (TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() ) static_cast<TColStd_Array1OfTransient & (HLRAlgo_PolyShellData::*)() >(&HLRAlgo_PolyShellData::HidingPolyData),
             R"#(None)#" )
        .def("Edges",
             (HLRAlgo_ListOfBPoint & (HLRAlgo_PolyShellData::*)() ) static_cast<HLRAlgo_ListOfBPoint & (HLRAlgo_PolyShellData::*)() >(&HLRAlgo_PolyShellData::Edges),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_PolyShellData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_PolyShellData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_Projector , shared_ptr<HLRAlgo_Projector>  >>(m.attr("HLRAlgo_Projector"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 & >()  , py::arg("CS") )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("CS"),  py::arg("Focus") )
        .def(py::init< const gp_Trsf &,const Standard_Boolean,const Standard_Real >()  , py::arg("T"),  py::arg("Persp"),  py::arg("Focus") )
        .def(py::init< const gp_Trsf &,const Standard_Boolean,const Standard_Real,const gp_Vec2d &,const gp_Vec2d &,const gp_Vec2d & >()  , py::arg("T"),  py::arg("Persp"),  py::arg("Focus"),  py::arg("v1"),  py::arg("v2"),  py::arg("v3") )
    // methods
        .def("Set",
             (void (HLRAlgo_Projector::*)( const gp_Trsf & ,  const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (HLRAlgo_Projector::*)( const gp_Trsf & ,  const Standard_Boolean ,  const Standard_Real  ) >(&HLRAlgo_Projector::Set),
             R"#(None)#"  , py::arg("T"),  py::arg("Persp"),  py::arg("Focus"))
        .def("Directions",
             (void (HLRAlgo_Projector::*)( gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (HLRAlgo_Projector::*)( gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&HLRAlgo_Projector::Directions),
             R"#(None)#"  , py::arg("D1"),  py::arg("D2"),  py::arg("D3"))
        .def("Scaled",
             (void (HLRAlgo_Projector::*)( const Standard_Boolean  ) ) static_cast<void (HLRAlgo_Projector::*)( const Standard_Boolean  ) >(&HLRAlgo_Projector::Scaled),
             R"#(to compute with the given scale and translation.)#"  , py::arg("On")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perspective",
             (Standard_Boolean (HLRAlgo_Projector::*)() const) static_cast<Standard_Boolean (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::Perspective),
             R"#(Returns True if there is a perspective transformation.)#" )
        .def("Transformation",
             (const gp_Trsf & (HLRAlgo_Projector::*)() const) static_cast<const gp_Trsf & (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::Transformation),
             R"#(Returns the active transformation.)#" )
        .def("InvertedTransformation",
             (const gp_Trsf & (HLRAlgo_Projector::*)() const) static_cast<const gp_Trsf & (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::InvertedTransformation),
             R"#(Returns the active inverted transformation.)#" )
        .def("FullTransformation",
             (const gp_Trsf & (HLRAlgo_Projector::*)() const) static_cast<const gp_Trsf & (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::FullTransformation),
             R"#(Returns the original transformation.)#" )
        .def("Focus",
             (Standard_Real (HLRAlgo_Projector::*)() const) static_cast<Standard_Real (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::Focus),
             R"#(Returns the focal length.)#" )
        .def("Transform",
             (void (HLRAlgo_Projector::*)( gp_Vec &  ) const) static_cast<void (HLRAlgo_Projector::*)( gp_Vec &  ) const>(&HLRAlgo_Projector::Transform),
             R"#(None)#"  , py::arg("D"))
        .def("Transform",
             (void (HLRAlgo_Projector::*)( gp_Pnt &  ) const) static_cast<void (HLRAlgo_Projector::*)( gp_Pnt &  ) const>(&HLRAlgo_Projector::Transform),
             R"#(None)#"  , py::arg("Pnt"))
        .def("Project",
             (void (HLRAlgo_Projector::*)( const gp_Pnt & ,  gp_Pnt2d &  ) const) static_cast<void (HLRAlgo_Projector::*)( const gp_Pnt & ,  gp_Pnt2d &  ) const>(&HLRAlgo_Projector::Project),
             R"#(Transform and apply perspective if needed.)#"  , py::arg("P"),  py::arg("Pout"))
        .def("Project",
             (void (HLRAlgo_Projector::*)( const gp_Pnt & ,  const gp_Vec & ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (HLRAlgo_Projector::*)( const gp_Pnt & ,  const gp_Vec & ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&HLRAlgo_Projector::Project),
             R"#(Transform and apply perspective if needed.)#"  , py::arg("P"),  py::arg("D1"),  py::arg("Pout"),  py::arg("D1out"))
        .def("Shoot",
             (gp_Lin (HLRAlgo_Projector::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Lin (HLRAlgo_Projector::*)( const Standard_Real ,  const Standard_Real  ) const>(&HLRAlgo_Projector::Shoot),
             R"#(return a line going through the eye towards the 2d point <X,Y>.)#"  , py::arg("X"),  py::arg("Y"))
        .def("Directions",
             (void (HLRAlgo_Projector::*)( gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (HLRAlgo_Projector::*)( gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&HLRAlgo_Projector::Directions),
             R"#(None)#"  , py::arg("D1"),  py::arg("D2"),  py::arg("D3"))
        .def("Perspective",
             (Standard_Boolean (HLRAlgo_Projector::*)() const) static_cast<Standard_Boolean (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::Perspective),
             R"#(Returns True if there is a perspective transformation.)#" )
        .def("InvertedTransformation",
             (const gp_Trsf & (HLRAlgo_Projector::*)() const) static_cast<const gp_Trsf & (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::InvertedTransformation),
             R"#(Returns the active inverted transformation.)#" )
        .def("FullTransformation",
             (const gp_Trsf & (HLRAlgo_Projector::*)() const) static_cast<const gp_Trsf & (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::FullTransformation),
             R"#(Returns the original transformation.)#" )
        .def("Focus",
             (Standard_Real (HLRAlgo_Projector::*)() const) static_cast<Standard_Real (HLRAlgo_Projector::*)() const>(&HLRAlgo_Projector::Focus),
             R"#(Returns the focal length.)#" )
        .def("Transform",
             (void (HLRAlgo_Projector::*)( gp_Vec &  ) const) static_cast<void (HLRAlgo_Projector::*)( gp_Vec &  ) const>(&HLRAlgo_Projector::Transform),
             R"#(None)#"  , py::arg("D"))
        .def("Transform",
             (void (HLRAlgo_Projector::*)( gp_Pnt &  ) const) static_cast<void (HLRAlgo_Projector::*)( gp_Pnt &  ) const>(&HLRAlgo_Projector::Transform),
             R"#(None)#"  , py::arg("Pnt"))
    // methods using call by reference i.s.o. return
        .def("Project",
             []( HLRAlgo_Projector &self , const gp_Pnt & P ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Project(P,X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Transform and apply perspective if needed.)#"  , py::arg("P"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<HLRAlgo_WiresBlock ,opencascade::handle<HLRAlgo_WiresBlock>  , Standard_Transient >>(m.attr("HLRAlgo_WiresBlock"))
        .def(py::init< const Standard_Integer >()  , py::arg("NbWires") )
    // methods
        .def("NbWires",
             (Standard_Integer (HLRAlgo_WiresBlock::*)() const) static_cast<Standard_Integer (HLRAlgo_WiresBlock::*)() const>(&HLRAlgo_WiresBlock::NbWires),
             R"#(None)#" )
        .def("Set",
             (void (HLRAlgo_WiresBlock::*)( const Standard_Integer ,  const opencascade::handle<HLRAlgo_EdgesBlock> &  ) ) static_cast<void (HLRAlgo_WiresBlock::*)( const Standard_Integer ,  const opencascade::handle<HLRAlgo_EdgesBlock> &  ) >(&HLRAlgo_WiresBlock::Set),
             R"#(None)#"  , py::arg("I"),  py::arg("W"))
        .def("Wire",
             (opencascade::handle<HLRAlgo_EdgesBlock> & (HLRAlgo_WiresBlock::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<HLRAlgo_EdgesBlock> & (HLRAlgo_WiresBlock::*)( const Standard_Integer  ) >(&HLRAlgo_WiresBlock::Wire),
             R"#(None)#"  , py::arg("I"))
        .def("UpdateMinMax",
             (void (HLRAlgo_WiresBlock::*)( const HLRAlgo_EdgesBlock::MinMaxIndices &  ) ) static_cast<void (HLRAlgo_WiresBlock::*)( const HLRAlgo_EdgesBlock::MinMaxIndices &  ) >(&HLRAlgo_WiresBlock::UpdateMinMax),
             R"#(None)#"  , py::arg("theMinMaxes"))
        .def("MinMax",
             (HLRAlgo_EdgesBlock::MinMaxIndices & (HLRAlgo_WiresBlock::*)() ) static_cast<HLRAlgo_EdgesBlock::MinMaxIndices & (HLRAlgo_WiresBlock::*)() >(&HLRAlgo_WiresBlock::MinMax),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRAlgo_WiresBlock::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRAlgo_WiresBlock::*)() const>(&HLRAlgo_WiresBlock::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRAlgo_WiresBlock::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&HLRAlgo_WiresBlock::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/HLRAlgo_PolyAlgo.hxx
// ./opencascade/HLRAlgo_WiresBlock.hxx
// ./opencascade/HLRAlgo_PolyMask.hxx
// ./opencascade/HLRAlgo_EdgeIterator.hxx
// ./opencascade/HLRAlgo_InterferenceList.hxx
// ./opencascade/HLRAlgo_HArray1OfPISeg.hxx
// ./opencascade/HLRAlgo_PolyInternalSegment.hxx
// ./opencascade/HLRAlgo.hxx
// ./opencascade/HLRAlgo_BiPoint.hxx
// ./opencascade/HLRAlgo_Coincidence.hxx
// ./opencascade/HLRAlgo_HArray1OfTData.hxx
// ./opencascade/HLRAlgo_ListIteratorOfInterferenceList.hxx
// ./opencascade/HLRAlgo_Projector.hxx
// ./opencascade/HLRAlgo_PolyInternalData.hxx
// ./opencascade/HLRAlgo_PolyData.hxx
// ./opencascade/HLRAlgo_Intersection.hxx
// ./opencascade/HLRAlgo_Array1OfPISeg.hxx
// ./opencascade/HLRAlgo_Array1OfPINod.hxx
// ./opencascade/HLRAlgo_PolyShellData.hxx
// ./opencascade/HLRAlgo_Interference.hxx
// ./opencascade/HLRAlgo_HArray1OfPHDat.hxx
// ./opencascade/HLRAlgo_PolyHidingData.hxx
// ./opencascade/HLRAlgo_ListOfBPoint.hxx
// ./opencascade/HLRAlgo_Array1OfTData.hxx
// ./opencascade/HLRAlgo_ListIteratorOfListOfBPoint.hxx
// ./opencascade/HLRAlgo_EdgesBlock.hxx
// ./opencascade/HLRAlgo_TriangleData.hxx
// ./opencascade/HLRAlgo_Array1OfPHDat.hxx
// ./opencascade/HLRAlgo_PolyInternalNode.hxx
// ./opencascade/HLRAlgo_EdgeStatus.hxx
// ./opencascade/HLRAlgo_HArray1OfPINod.hxx

// operators

// register typdefs
    register_template_NCollection_List<HLRAlgo_Interference>(m,"HLRAlgo_InterferenceList");  
    register_template_NCollection_Array1<HLRAlgo_PolyInternalSegment>(m,"HLRAlgo_Array1OfPISeg");  
    register_template_NCollection_Array1<opencascade::handle<HLRAlgo_PolyInternalNode> >(m,"HLRAlgo_Array1OfPINod");  
    register_template_NCollection_List<HLRAlgo_BiPoint>(m,"HLRAlgo_ListOfBPoint");  
    register_template_NCollection_Array1<HLRAlgo_TriangleData>(m,"HLRAlgo_Array1OfTData");  
    register_template_NCollection_Array1<HLRAlgo_PolyHidingData>(m,"HLRAlgo_Array1OfPHDat");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
