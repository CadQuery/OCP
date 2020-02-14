
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <GeomAdaptor_HSurface.hxx>
#include <IntTools_Context.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_OutOfMemory.hxx>
#include <IntTools_CurveRangeSample.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Edge.hxx>
#include <IntTools_CommonPrt.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Geom_Curve.hxx>
#include <Bnd_Box.hxx>
#include <IntTools_Range.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <IntTools_FClass2d.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <TopoDS_Edge.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <TopoDS_Solid.hxx>
#include <Geom2dHatch_Hatcher.hxx>
#include <TopoDS_Vertex.hxx>
#include <IntTools_Curve.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_OBB.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_Context.hxx>
#include <Bnd_Box.hxx>
#include <IntTools_CurveRangeLocalizeData.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <IntTools_Range.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_Range.hxx>
#include <IntTools_Range.hxx>
#include <TopoDS_Face.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomInt_LineConstructor.hxx>
#include <IntTools_Context.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_ShrunkRange.hxx>
#include <IntTools_Range.hxx>
#include <IntTools_CommonPrt.hxx>
#include <IntTools_EdgeEdge.hxx>
#include <IntTools_EdgeFace.hxx>
#include <IntTools_FClass2d.hxx>
#include <IntTools_MarkedRangeSet.hxx>
#include <IntTools_BaseRangeSample.hxx>
#include <IntTools_CurveRangeSample.hxx>
#include <IntTools_SurfaceRangeSample.hxx>
#include <IntTools_CurveRangeLocalizeData.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <IntTools_BeanFaceIntersector.hxx>
#include <IntTools_Curve.hxx>
#include <IntTools_PntOnFace.hxx>
#include <IntTools_PntOn2Faces.hxx>
#include <IntTools_TopolTool.hxx>
#include <IntTools_FaceFace.hxx>
#include <IntTools_Tools.hxx>
#include <IntTools_CArray1OfInteger.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_CurveRangeSampleMapHasher.hxx>
#include <IntTools_SurfaceRangeSampleMapHasher.hxx>
#include <IntTools_SurfaceRangeSample.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_OutOfMemory.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Bnd_Box.hxx>

// module includes
#include <IntTools.hxx>
#include <IntTools_Array1OfRange.hxx>
#include <IntTools_Array1OfRoots.hxx>
#include <IntTools_BaseRangeSample.hxx>
#include <IntTools_BeanFaceIntersector.hxx>
#include <IntTools_CArray1OfInteger.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_CommonPrt.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_Curve.hxx>
#include <IntTools_CurveRangeLocalizeData.hxx>
#include <IntTools_CurveRangeSample.hxx>
#include <IntTools_CurveRangeSampleMapHasher.hxx>
#include <IntTools_DataMapIteratorOfDataMapOfCurveSampleBox.hxx>
#include <IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox.hxx>
#include <IntTools_DataMapOfCurveSampleBox.hxx>
#include <IntTools_DataMapOfSurfaceSampleBox.hxx>
#include <IntTools_EdgeEdge.hxx>
#include <IntTools_EdgeFace.hxx>
#include <IntTools_FaceFace.hxx>
#include <IntTools_FClass2d.hxx>
#include <IntTools_ListIteratorOfListOfBox.hxx>
#include <IntTools_ListIteratorOfListOfCurveRangeSample.hxx>
#include <IntTools_ListIteratorOfListOfSurfaceRangeSample.hxx>
#include <IntTools_ListOfBox.hxx>
#include <IntTools_ListOfCurveRangeSample.hxx>
#include <IntTools_ListOfSurfaceRangeSample.hxx>
#include <IntTools_MapIteratorOfMapOfCurveSample.hxx>
#include <IntTools_MapIteratorOfMapOfSurfaceSample.hxx>
#include <IntTools_MapOfCurveSample.hxx>
#include <IntTools_MapOfSurfaceSample.hxx>
#include <IntTools_MarkedRangeSet.hxx>
#include <IntTools_PntOn2Faces.hxx>
#include <IntTools_PntOnFace.hxx>
#include <IntTools_Range.hxx>
#include <IntTools_Root.hxx>
#include <IntTools_SequenceOfCommonPrts.hxx>
#include <IntTools_SequenceOfCurves.hxx>
#include <IntTools_SequenceOfPntOn2Faces.hxx>
#include <IntTools_SequenceOfRanges.hxx>
#include <IntTools_SequenceOfRoots.hxx>
#include <IntTools_ShrunkRange.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <IntTools_SurfaceRangeSample.hxx>
#include <IntTools_SurfaceRangeSampleMapHasher.hxx>
#include <IntTools_Tools.hxx>
#include <IntTools_TopolTool.hxx>
#include <IntTools_WLineTool.hxx>

// template related includes
// ./opencascade/IntTools_SequenceOfRanges.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfCurveSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfCurveSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfCurves.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_Array1OfRoots.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfRoots.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfPntOn2Faces.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_Array1OfRange.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfCommonPrts.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntTools"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IntTools , shared_ptr<IntTools>>(m,"IntTools");

    static_cast<py::class_<IntTools , shared_ptr<IntTools>  >>(m.attr("IntTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Real (*)( const TopoDS_Edge &  ) ) static_cast<Standard_Real (*)( const TopoDS_Edge &  ) >(&IntTools::Length),
                    R"#(returns the length of the edge;)#"  , py::arg("E"))
        .def_static("RemoveIdenticalRoots_s",
                    (void (*)( NCollection_Sequence<IntTools_Root> & ,  const Standard_Real  ) ) static_cast<void (*)( NCollection_Sequence<IntTools_Root> & ,  const Standard_Real  ) >(&IntTools::RemoveIdenticalRoots),
                    R"#(Remove from the sequence aSeq the Roots that have values ti and tj such as |ti-tj] < anEpsT.)#"  , py::arg("aSeq"),  py::arg("anEpsT"))
        .def_static("SortRoots_s",
                    (void (*)( NCollection_Sequence<IntTools_Root> & ,  const Standard_Real  ) ) static_cast<void (*)( NCollection_Sequence<IntTools_Root> & ,  const Standard_Real  ) >(&IntTools::SortRoots),
                    R"#(Sort the sequence aSeq of the Roots to arrange the Roons in increasing order)#"  , py::arg("aSeq"),  py::arg("anEpsT"))
        .def_static("FindRootStates_s",
                    (void (*)( NCollection_Sequence<IntTools_Root> & ,  const Standard_Real  ) ) static_cast<void (*)( NCollection_Sequence<IntTools_Root> & ,  const Standard_Real  ) >(&IntTools::FindRootStates),
                    R"#(Find the states (before and after) for each Root from the sequence aSeq)#"  , py::arg("aSeq"),  py::arg("anEpsNull"))
        .def_static("Parameter_s",
                    (Standard_Integer (*)( const gp_Pnt & ,  const opencascade::handle<Geom_Curve> & ,  Standard_Real &  ) ) static_cast<Standard_Integer (*)( const gp_Pnt & ,  const opencascade::handle<Geom_Curve> & ,  Standard_Real &  ) >(&IntTools::Parameter),
                    R"#(None)#"  , py::arg("P"),  py::arg("Curve"),  py::arg("aParm"))
        .def_static("GetRadius_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) >(&IntTools::GetRadius),
                    R"#(None)#"  , py::arg("C"),  py::arg("t1"),  py::arg("t3"),  py::arg("R"))
        .def_static("PrepareArgs_s",
                    (Standard_Integer (*)( BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  IntTools_CArray1OfReal &  ) ) static_cast<Standard_Integer (*)( BRepAdaptor_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  IntTools_CArray1OfReal &  ) >(&IntTools::PrepareArgs),
                    R"#(None)#"  , py::arg("C"),  py::arg("tMax"),  py::arg("tMin"),  py::arg("Discret"),  py::arg("Deflect"),  py::arg("anArgs"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_BaseRangeSample , shared_ptr<IntTools_BaseRangeSample>  >>(m.attr("IntTools_BaseRangeSample"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("theDepth") )
    // custom constructors
    // methods
        .def("SetDepth",
             (void (IntTools_BaseRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_BaseRangeSample::*)( const Standard_Integer  ) >(&IntTools_BaseRangeSample::SetDepth),
             R"#(None)#"  , py::arg("theDepth"))
        .def("GetDepth",
             (Standard_Integer (IntTools_BaseRangeSample::*)() const) static_cast<Standard_Integer (IntTools_BaseRangeSample::*)() const>(&IntTools_BaseRangeSample::GetDepth),
             R"#(None)#" )
        .def("SetDepth",
             (void (IntTools_BaseRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_BaseRangeSample::*)( const Standard_Integer  ) >(&IntTools_BaseRangeSample::SetDepth),
             R"#(None)#"  , py::arg("theDepth"))
        .def("GetDepth",
             (Standard_Integer (IntTools_BaseRangeSample::*)() const) static_cast<Standard_Integer (IntTools_BaseRangeSample::*)() const>(&IntTools_BaseRangeSample::GetDepth),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_BeanFaceIntersector , shared_ptr<IntTools_BeanFaceIntersector>  >>(m.attr("IntTools_BeanFaceIntersector"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face & >()  , py::arg("theEdge"),  py::arg("theFace") )
        .def(py::init< const BRepAdaptor_Curve &,const BRepAdaptor_Surface &,const Standard_Real,const Standard_Real >()  , py::arg("theCurve"),  py::arg("theSurface"),  py::arg("theBeanTolerance"),  py::arg("theFaceTolerance") )
        .def(py::init< const BRepAdaptor_Curve &,const BRepAdaptor_Surface &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theCurve"),  py::arg("theSurface"),  py::arg("theFirstParOnCurve"),  py::arg("theLastParOnCurve"),  py::arg("theUMinParameter"),  py::arg("theUMaxParameter"),  py::arg("theVMinParameter"),  py::arg("theVMaxParameter"),  py::arg("theBeanTolerance"),  py::arg("theFaceTolerance") )
    // custom constructors
    // methods
        .def("Init",
             (void (IntTools_BeanFaceIntersector::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (IntTools_BeanFaceIntersector::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&IntTools_BeanFaceIntersector::Init),
             R"#(Initializes the algorithm)#"  , py::arg("theEdge"),  py::arg("theFace"))
        .def("Init",
             (void (IntTools_BeanFaceIntersector::*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_BeanFaceIntersector::*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_BeanFaceIntersector::Init),
             R"#(Initializes the algorithm)#"  , py::arg("theCurve"),  py::arg("theSurface"),  py::arg("theBeanTolerance"),  py::arg("theFaceTolerance"))
        .def("Init",
             (void (IntTools_BeanFaceIntersector::*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_BeanFaceIntersector::*)( const BRepAdaptor_Curve & ,  const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_BeanFaceIntersector::Init),
             R"#(Initializes the algorithm theUMinParameter, ... are used for optimization purposes)#"  , py::arg("theCurve"),  py::arg("theSurface"),  py::arg("theFirstParOnCurve"),  py::arg("theLastParOnCurve"),  py::arg("theUMinParameter"),  py::arg("theUMaxParameter"),  py::arg("theVMinParameter"),  py::arg("theVMaxParameter"),  py::arg("theBeanTolerance"),  py::arg("theFaceTolerance"))
        .def("SetContext",
             (void (IntTools_BeanFaceIntersector::*)( const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (IntTools_BeanFaceIntersector::*)( const opencascade::handle<IntTools_Context> &  ) >(&IntTools_BeanFaceIntersector::SetContext),
             R"#(Sets the intersecton context)#"  , py::arg("theContext"))
        .def("Context",
             (const opencascade::handle<IntTools_Context> & (IntTools_BeanFaceIntersector::*)() const) static_cast<const opencascade::handle<IntTools_Context> & (IntTools_BeanFaceIntersector::*)() const>(&IntTools_BeanFaceIntersector::Context),
             R"#(Gets the intersecton context)#" )
        .def("SetBeanParameters",
             (void (IntTools_BeanFaceIntersector::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_BeanFaceIntersector::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_BeanFaceIntersector::SetBeanParameters),
             R"#(Set restrictions for curve)#"  , py::arg("theFirstParOnCurve"),  py::arg("theLastParOnCurve"))
        .def("SetSurfaceParameters",
             (void (IntTools_BeanFaceIntersector::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_BeanFaceIntersector::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_BeanFaceIntersector::SetSurfaceParameters),
             R"#(Set restrictions for surface)#"  , py::arg("theUMinParameter"),  py::arg("theUMaxParameter"),  py::arg("theVMinParameter"),  py::arg("theVMaxParameter"))
        .def("Perform",
             (void (IntTools_BeanFaceIntersector::*)() ) static_cast<void (IntTools_BeanFaceIntersector::*)() >(&IntTools_BeanFaceIntersector::Perform),
             R"#(Launches the algorithm)#" )
        .def("IsDone",
             (Standard_Boolean (IntTools_BeanFaceIntersector::*)() const) static_cast<Standard_Boolean (IntTools_BeanFaceIntersector::*)() const>(&IntTools_BeanFaceIntersector::IsDone),
             R"#(Returns Done/NotDone state of the algorithm.)#" )
        .def("Result",
             (const IntTools_SequenceOfRanges & (IntTools_BeanFaceIntersector::*)() const) static_cast<const IntTools_SequenceOfRanges & (IntTools_BeanFaceIntersector::*)() const>(&IntTools_BeanFaceIntersector::Result),
             R"#(None)#" )
        .def("Result",
             (void (IntTools_BeanFaceIntersector::*)( NCollection_Sequence<IntTools_Range> &  ) const) static_cast<void (IntTools_BeanFaceIntersector::*)( NCollection_Sequence<IntTools_Range> &  ) const>(&IntTools_BeanFaceIntersector::Result),
             R"#(None)#"  , py::arg("theResults"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CArray1OfInteger , shared_ptr<IntTools_CArray1OfInteger>  >>(m.attr("IntTools_CArray1OfInteger"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("Length")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const Standard_Integer &,const Standard_Integer >()  , py::arg("Item"),  py::arg("Length") )
    // custom constructors
    // methods
        .def("Init",
             (void (IntTools_CArray1OfInteger::*)( const Standard_Integer &  ) ) static_cast<void (IntTools_CArray1OfInteger::*)( const Standard_Integer &  ) >(&IntTools_CArray1OfInteger::Init),
             R"#(Initializes the array with a given value.)#"  , py::arg("V"))
        .def("Resize",
             (void (IntTools_CArray1OfInteger::*)( const Standard_Integer  ) ) static_cast<void (IntTools_CArray1OfInteger::*)( const Standard_Integer  ) >(&IntTools_CArray1OfInteger::Resize),
             R"#(destroy current content and realloc the new size does nothing if Length() == theLength)#"  , py::arg("theNewLength"))
        .def("Destroy",
             (void (IntTools_CArray1OfInteger::*)() ) static_cast<void (IntTools_CArray1OfInteger::*)() >(&IntTools_CArray1OfInteger::Destroy),
             R"#(Frees the allocated area corresponding to the array.)#" )
        .def("Length",
             (Standard_Integer (IntTools_CArray1OfInteger::*)() const) static_cast<Standard_Integer (IntTools_CArray1OfInteger::*)() const>(&IntTools_CArray1OfInteger::Length),
             R"#(Returns the number of elements of <me>.)#" )
        .def("Append",
             (void (IntTools_CArray1OfInteger::*)( const Standard_Integer &  ) ) static_cast<void (IntTools_CArray1OfInteger::*)( const Standard_Integer &  ) >(&IntTools_CArray1OfInteger::Append),
             R"#(None)#"  , py::arg("Value"))
        .def("SetValue",
             (void (IntTools_CArray1OfInteger::*)( const Standard_Integer ,  const Standard_Integer &  ) ) static_cast<void (IntTools_CArray1OfInteger::*)( const Standard_Integer ,  const Standard_Integer &  ) >(&IntTools_CArray1OfInteger::SetValue),
             R"#(Sets the <Index>th element of the array to <Value>.)#"  , py::arg("Index"),  py::arg("Value"))
        .def("Value",
             (const Standard_Integer & (IntTools_CArray1OfInteger::*)( const Standard_Integer  ) const) static_cast<const Standard_Integer & (IntTools_CArray1OfInteger::*)( const Standard_Integer  ) const>(&IntTools_CArray1OfInteger::Value),
             R"#(Returns the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("ChangeValue",
             (Standard_Integer & (IntTools_CArray1OfInteger::*)( const Standard_Integer  ) ) static_cast<Standard_Integer & (IntTools_CArray1OfInteger::*)( const Standard_Integer  ) >(&IntTools_CArray1OfInteger::ChangeValue),
             R"#(Returns the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("IsEqual",
             (Standard_Boolean (IntTools_CArray1OfInteger::*)( const IntTools_CArray1OfInteger &  ) const) static_cast<Standard_Boolean (IntTools_CArray1OfInteger::*)( const IntTools_CArray1OfInteger &  ) const>(&IntTools_CArray1OfInteger::IsEqual),
             R"#(Applys the == operator on each array item)#"  , py::arg("Other"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CArray1OfReal , shared_ptr<IntTools_CArray1OfReal>  >>(m.attr("IntTools_CArray1OfReal"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("Length")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const Standard_Real &,const Standard_Integer >()  , py::arg("Item"),  py::arg("Length") )
    // custom constructors
    // methods
        .def("Init",
             (void (IntTools_CArray1OfReal::*)( const Standard_Real &  ) ) static_cast<void (IntTools_CArray1OfReal::*)( const Standard_Real &  ) >(&IntTools_CArray1OfReal::Init),
             R"#(Initializes the array with a given value.)#"  , py::arg("V"))
        .def("Resize",
             (void (IntTools_CArray1OfReal::*)( const Standard_Integer  ) ) static_cast<void (IntTools_CArray1OfReal::*)( const Standard_Integer  ) >(&IntTools_CArray1OfReal::Resize),
             R"#(destroy current content and realloc the new size does nothing if Length() == theLength)#"  , py::arg("theNewLength"))
        .def("Destroy",
             (void (IntTools_CArray1OfReal::*)() ) static_cast<void (IntTools_CArray1OfReal::*)() >(&IntTools_CArray1OfReal::Destroy),
             R"#(Frees the allocated area corresponding to the array.)#" )
        .def("Length",
             (Standard_Integer (IntTools_CArray1OfReal::*)() const) static_cast<Standard_Integer (IntTools_CArray1OfReal::*)() const>(&IntTools_CArray1OfReal::Length),
             R"#(Returns the number of elements of <me>.)#" )
        .def("Append",
             (void (IntTools_CArray1OfReal::*)( const Standard_Real &  ) ) static_cast<void (IntTools_CArray1OfReal::*)( const Standard_Real &  ) >(&IntTools_CArray1OfReal::Append),
             R"#(None)#"  , py::arg("Value"))
        .def("SetValue",
             (void (IntTools_CArray1OfReal::*)( const Standard_Integer ,  const Standard_Real &  ) ) static_cast<void (IntTools_CArray1OfReal::*)( const Standard_Integer ,  const Standard_Real &  ) >(&IntTools_CArray1OfReal::SetValue),
             R"#(Sets the <Index>th element of the array to <Value>.)#"  , py::arg("Index"),  py::arg("Value"))
        .def("Value",
             (const Standard_Real & (IntTools_CArray1OfReal::*)( const Standard_Integer  ) const) static_cast<const Standard_Real & (IntTools_CArray1OfReal::*)( const Standard_Integer  ) const>(&IntTools_CArray1OfReal::Value),
             R"#(Returns the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("ChangeValue",
             (Standard_Real & (IntTools_CArray1OfReal::*)( const Standard_Integer  ) ) static_cast<Standard_Real & (IntTools_CArray1OfReal::*)( const Standard_Integer  ) >(&IntTools_CArray1OfReal::ChangeValue),
             R"#(Returns the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("IsEqual",
             (Standard_Boolean (IntTools_CArray1OfReal::*)( const IntTools_CArray1OfReal &  ) const) static_cast<Standard_Boolean (IntTools_CArray1OfReal::*)( const IntTools_CArray1OfReal &  ) const>(&IntTools_CArray1OfReal::IsEqual),
             R"#(Applys the == operator on each array item)#"  , py::arg("Other"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CommonPrt , shared_ptr<IntTools_CommonPrt>  >>(m.attr("IntTools_CommonPrt"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IntTools_CommonPrt & >()  , py::arg("aCPrt") )
    // custom constructors
    // methods
        .def("Assign",
             (IntTools_CommonPrt & (IntTools_CommonPrt::*)( const IntTools_CommonPrt &  ) ) static_cast<IntTools_CommonPrt & (IntTools_CommonPrt::*)( const IntTools_CommonPrt &  ) >(&IntTools_CommonPrt::Assign),
             R"#(None)#"  , py::arg("Other"))
        .def("SetEdge1",
             (void (IntTools_CommonPrt::*)( const TopoDS_Edge &  ) ) static_cast<void (IntTools_CommonPrt::*)( const TopoDS_Edge &  ) >(&IntTools_CommonPrt::SetEdge1),
             R"#(Sets the first edge.)#"  , py::arg("anE"))
        .def("SetEdge2",
             (void (IntTools_CommonPrt::*)( const TopoDS_Edge &  ) ) static_cast<void (IntTools_CommonPrt::*)( const TopoDS_Edge &  ) >(&IntTools_CommonPrt::SetEdge2),
             R"#(Sets the second edge.)#"  , py::arg("anE"))
        .def("SetType",
             (void (IntTools_CommonPrt::*)( const TopAbs_ShapeEnum  ) ) static_cast<void (IntTools_CommonPrt::*)( const TopAbs_ShapeEnum  ) >(&IntTools_CommonPrt::SetType),
             R"#(Sets the type of the common part Vertex or Edge)#"  , py::arg("aType"))
        .def("SetRange1",
             (void (IntTools_CommonPrt::*)( const IntTools_Range &  ) ) static_cast<void (IntTools_CommonPrt::*)( const IntTools_Range &  ) >(&IntTools_CommonPrt::SetRange1),
             R"#(Sets the range of first edge.)#"  , py::arg("aR"))
        .def("SetRange1",
             (void (IntTools_CommonPrt::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_CommonPrt::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_CommonPrt::SetRange1),
             R"#(Sets the range of first edge.)#"  , py::arg("tf"),  py::arg("tl"))
        .def("AppendRange2",
             (void (IntTools_CommonPrt::*)( const IntTools_Range &  ) ) static_cast<void (IntTools_CommonPrt::*)( const IntTools_Range &  ) >(&IntTools_CommonPrt::AppendRange2),
             R"#(Appends the range of second edge.)#"  , py::arg("aR"))
        .def("AppendRange2",
             (void (IntTools_CommonPrt::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_CommonPrt::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_CommonPrt::AppendRange2),
             R"#(Appends the range of second edge.)#"  , py::arg("tf"),  py::arg("tl"))
        .def("SetVertexParameter1",
             (void (IntTools_CommonPrt::*)( const Standard_Real  ) ) static_cast<void (IntTools_CommonPrt::*)( const Standard_Real  ) >(&IntTools_CommonPrt::SetVertexParameter1),
             R"#(Sets a parameter of first vertex)#"  , py::arg("tV"))
        .def("SetVertexParameter2",
             (void (IntTools_CommonPrt::*)( const Standard_Real  ) ) static_cast<void (IntTools_CommonPrt::*)( const Standard_Real  ) >(&IntTools_CommonPrt::SetVertexParameter2),
             R"#(Sets a parameter of second vertex)#"  , py::arg("tV"))
        .def("Edge1",
             (const TopoDS_Edge & (IntTools_CommonPrt::*)() const) static_cast<const TopoDS_Edge & (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::Edge1),
             R"#(Returns the first edge.)#" )
        .def("Edge2",
             (const TopoDS_Edge & (IntTools_CommonPrt::*)() const) static_cast<const TopoDS_Edge & (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::Edge2),
             R"#(Returns the second edge)#" )
        .def("Type",
             (TopAbs_ShapeEnum (IntTools_CommonPrt::*)() const) static_cast<TopAbs_ShapeEnum (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::Type),
             R"#(Returns the type of the common part)#" )
        .def("Range1",
             (const IntTools_Range & (IntTools_CommonPrt::*)() const) static_cast<const IntTools_Range & (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::Range1),
             R"#(Returns the range of first edge)#" )
        .def("Ranges2",
             (const IntTools_SequenceOfRanges & (IntTools_CommonPrt::*)() const) static_cast<const IntTools_SequenceOfRanges & (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::Ranges2),
             R"#(Returns the ranges of second edge.)#" )
        .def("ChangeRanges2",
             (IntTools_SequenceOfRanges & (IntTools_CommonPrt::*)() ) static_cast<IntTools_SequenceOfRanges & (IntTools_CommonPrt::*)() >(&IntTools_CommonPrt::ChangeRanges2),
             R"#(Returns the ranges of second edge.)#" )
        .def("VertexParameter1",
             (Standard_Real (IntTools_CommonPrt::*)() const) static_cast<Standard_Real (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::VertexParameter1),
             R"#(Returns parameter of first vertex)#" )
        .def("VertexParameter2",
             (Standard_Real (IntTools_CommonPrt::*)() const) static_cast<Standard_Real (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::VertexParameter2),
             R"#(Returns parameter of second vertex)#" )
        .def("Copy",
             (void (IntTools_CommonPrt::*)( IntTools_CommonPrt &  ) const) static_cast<void (IntTools_CommonPrt::*)( IntTools_CommonPrt &  ) const>(&IntTools_CommonPrt::Copy),
             R"#(Copies me to anOther)#"  , py::arg("anOther"))
        .def("AllNullFlag",
             (Standard_Boolean (IntTools_CommonPrt::*)() const) static_cast<Standard_Boolean (IntTools_CommonPrt::*)() const>(&IntTools_CommonPrt::AllNullFlag),
             R"#(Modifier)#" )
        .def("SetAllNullFlag",
             (void (IntTools_CommonPrt::*)( const Standard_Boolean  ) ) static_cast<void (IntTools_CommonPrt::*)( const Standard_Boolean  ) >(&IntTools_CommonPrt::SetAllNullFlag),
             R"#(Selector)#"  , py::arg("aFlag"))
        .def("SetBoundingPoints",
             (void (IntTools_CommonPrt::*)( const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (IntTools_CommonPrt::*)( const gp_Pnt & ,  const gp_Pnt &  ) >(&IntTools_CommonPrt::SetBoundingPoints),
             R"#(Modifier)#"  , py::arg("aP1"),  py::arg("aP2"))
        .def("BoundingPoints",
             (void (IntTools_CommonPrt::*)( gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (IntTools_CommonPrt::*)( gp_Pnt & ,  gp_Pnt &  ) const>(&IntTools_CommonPrt::BoundingPoints),
             R"#(Selector)#"  , py::arg("aP1"),  py::arg("aP2"))
    // methods using call by reference i.s.o. return
        .def("Range1",
             []( IntTools_CommonPrt &self   ){ Standard_Real  tf; Standard_Real  tl; self.Range1(tf,tl); return std::make_tuple(tf,tl); },
             R"#(Returns the range of first edge.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Context ,opencascade::handle<IntTools_Context>  , Standard_Transient >>(m.attr("IntTools_Context"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("FClass2d",
             (IntTools_FClass2d & (IntTools_Context::*)( const TopoDS_Face &  ) ) static_cast<IntTools_FClass2d & (IntTools_Context::*)( const TopoDS_Face &  ) >(&IntTools_Context::FClass2d),
             R"#(Returns a reference to point classifier for given face)#"  , py::arg("aF"))
        .def("ProjPS",
             (GeomAPI_ProjectPointOnSurf & (IntTools_Context::*)( const TopoDS_Face &  ) ) static_cast<GeomAPI_ProjectPointOnSurf & (IntTools_Context::*)( const TopoDS_Face &  ) >(&IntTools_Context::ProjPS),
             R"#(Returns a reference to point projector for given face)#"  , py::arg("aF"))
        .def("ProjPC",
             (GeomAPI_ProjectPointOnCurve & (IntTools_Context::*)( const TopoDS_Edge &  ) ) static_cast<GeomAPI_ProjectPointOnCurve & (IntTools_Context::*)( const TopoDS_Edge &  ) >(&IntTools_Context::ProjPC),
             R"#(Returns a reference to point projector for given edge)#"  , py::arg("aE"))
        .def("ProjPT",
             (GeomAPI_ProjectPointOnCurve & (IntTools_Context::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<GeomAPI_ProjectPointOnCurve & (IntTools_Context::*)( const opencascade::handle<Geom_Curve> &  ) >(&IntTools_Context::ProjPT),
             R"#(Returns a reference to point projector for given curve)#"  , py::arg("aC"))
        .def("SurfaceData",
             (IntTools_SurfaceRangeLocalizeData & (IntTools_Context::*)( const TopoDS_Face &  ) ) static_cast<IntTools_SurfaceRangeLocalizeData & (IntTools_Context::*)( const TopoDS_Face &  ) >(&IntTools_Context::SurfaceData),
             R"#(Returns a reference to surface localization data for given face)#"  , py::arg("aF"))
        .def("SolidClassifier",
             (BRepClass3d_SolidClassifier & (IntTools_Context::*)( const TopoDS_Solid &  ) ) static_cast<BRepClass3d_SolidClassifier & (IntTools_Context::*)( const TopoDS_Solid &  ) >(&IntTools_Context::SolidClassifier),
             R"#(Returns a reference to solid classifier for given solid)#"  , py::arg("aSolid"))
        .def("Hatcher",
             (Geom2dHatch_Hatcher & (IntTools_Context::*)( const TopoDS_Face &  ) ) static_cast<Geom2dHatch_Hatcher & (IntTools_Context::*)( const TopoDS_Face &  ) >(&IntTools_Context::Hatcher),
             R"#(Returns a reference to 2D hatcher for given face)#"  , py::arg("aF"))
        .def("SurfaceAdaptor",
             (BRepAdaptor_Surface & (IntTools_Context::*)( const TopoDS_Face &  ) ) static_cast<BRepAdaptor_Surface & (IntTools_Context::*)( const TopoDS_Face &  ) >(&IntTools_Context::SurfaceAdaptor),
             R"#(Returns a reference to surface adaptor for given face)#"  , py::arg("theFace"))
        .def("OBB",
             (Bnd_OBB & (IntTools_Context::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<Bnd_OBB & (IntTools_Context::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&IntTools_Context::OBB),
             R"#(Builds and stores an Oriented Bounding Box for the shape. Returns a reference to OBB.)#"  , py::arg("theShape"),  py::arg("theFuzzyValue")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def("ComputePE",
             (Standard_Integer (IntTools_Context::*)( const gp_Pnt & ,  const Standard_Real ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Integer (IntTools_Context::*)( const gp_Pnt & ,  const Standard_Real ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&IntTools_Context::ComputePE),
             R"#(Computes parameter of the Point theP on the edge aE. Returns zero if the distance between point and edge is less than sum of tolerance value of edge and theTopP, otherwise and for following conditions returns negative value 1. the edge is degenerated (-1) 2. the edge does not contain 3d curve and pcurves (-2) 3. projection algorithm failed (-3))#"  , py::arg("theP"),  py::arg("theTolP"),  py::arg("theE"),  py::arg("theT"),  py::arg("theDist"))
        .def("ComputeVE",
             (Standard_Integer (IntTools_Context::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) ) static_cast<Standard_Integer (IntTools_Context::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) >(&IntTools_Context::ComputeVE),
             R"#(Computes parameter of the vertex aV on the edge aE and correct tolerance value for the vertex on the edge. Returns zero if the distance between vertex and edge is less than sum of tolerances and the fuzzy value, otherwise and for following conditions returns negative value: 1. the edge is degenerated (-1) 2. the edge does not contain 3d curve and pcurves (-2) 3. projection algorithm failed (-3))#"  , py::arg("theV"),  py::arg("theE"),  py::arg("theT"),  py::arg("theTol"),  py::arg("theFuzz")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def("ComputeVF",
             (Standard_Integer (IntTools_Context::*)( const TopoDS_Vertex & ,  const TopoDS_Face & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) ) static_cast<Standard_Integer (IntTools_Context::*)( const TopoDS_Vertex & ,  const TopoDS_Face & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) >(&IntTools_Context::ComputeVF),
             R"#(Computes UV parameters of the vertex aV on face aF and correct tolerance value for the vertex on the face. Returns zero if the distance between vertex and face is less than or equal the sum of tolerances and the fuzzy value and the projection point lays inside boundaries of the face. For following conditions returns negative value 1. projection algorithm failed (-1) 2. distance is more than sum of tolerances (-2) 3. projection point out or on the boundaries of face (-3))#"  , py::arg("theVertex"),  py::arg("theFace"),  py::arg("theU"),  py::arg("theV"),  py::arg("theTol"),  py::arg("theFuzz")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def("StatePointFace",
             (TopAbs_State (IntTools_Context::*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) ) static_cast<TopAbs_State (IntTools_Context::*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) >(&IntTools_Context::StatePointFace),
             R"#(Returns the state of the point aP2D relative to face aF)#"  , py::arg("aF"),  py::arg("aP2D"))
        .def("IsPointInFace",
             (Standard_Boolean (IntTools_Context::*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) >(&IntTools_Context::IsPointInFace),
             R"#(Returns true if the point aP2D is inside the boundaries of the face aF, otherwise returns false)#"  , py::arg("aF"),  py::arg("aP2D"))
        .def("IsPointInFace",
             (Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&IntTools_Context::IsPointInFace),
             R"#(Returns true if the point aP2D is inside the boundaries of the face aF, otherwise returns false)#"  , py::arg("aP3D"),  py::arg("aF"),  py::arg("aTol"))
        .def("IsPointInOnFace",
             (Standard_Boolean (IntTools_Context::*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) >(&IntTools_Context::IsPointInOnFace),
             R"#(Returns true if the point aP2D is inside or on the boundaries of aF)#"  , py::arg("aF"),  py::arg("aP2D"))
        .def("IsValidPointForFace",
             (Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&IntTools_Context::IsValidPointForFace),
             R"#(Returns true if the distance between point aP3D and face aF is less or equal to tolerance aTol and projection point is inside or on the boundaries of the face aF)#"  , py::arg("aP3D"),  py::arg("aF"),  py::arg("aTol"))
        .def("IsValidPointForFaces",
             (Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&IntTools_Context::IsValidPointForFaces),
             R"#(Returns true if IsValidPointForFace returns true for both face aF1 and aF2)#"  , py::arg("aP3D"),  py::arg("aF1"),  py::arg("aF2"),  py::arg("aTol"))
        .def("IsValidBlockForFace",
             (Standard_Boolean (IntTools_Context::*)( const Standard_Real ,  const Standard_Real ,  const IntTools_Curve & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const Standard_Real ,  const Standard_Real ,  const IntTools_Curve & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&IntTools_Context::IsValidBlockForFace),
             R"#(Returns true if IsValidPointForFace returns true for some 3d point that lay on the curve aIC bounded by parameters aT1 and aT2)#"  , py::arg("aT1"),  py::arg("aT2"),  py::arg("aIC"),  py::arg("aF"),  py::arg("aTol"))
        .def("IsValidBlockForFaces",
             (Standard_Boolean (IntTools_Context::*)( const Standard_Real ,  const Standard_Real ,  const IntTools_Curve & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const Standard_Real ,  const Standard_Real ,  const IntTools_Curve & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&IntTools_Context::IsValidBlockForFaces),
             R"#(Returns true if IsValidBlockForFace returns true for both faces aF1 and aF2)#"  , py::arg("aT1"),  py::arg("aT2"),  py::arg("aIC"),  py::arg("aF1"),  py::arg("aF2"),  py::arg("aTol"))
        .def("IsVertexOnLine",
             (Standard_Boolean (IntTools_Context::*)( const TopoDS_Vertex & ,  const IntTools_Curve & ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const TopoDS_Vertex & ,  const IntTools_Curve & ,  const Standard_Real ,  Standard_Real &  ) >(&IntTools_Context::IsVertexOnLine),
             R"#(Computes parameter of the vertex aV on the curve aIC. Returns true if the distance between vertex and curve is less than sum of tolerance of aV and aTolC, otherwise or if projection algorithm failed returns false (in this case aT isn't significant))#"  , py::arg("aV"),  py::arg("aIC"),  py::arg("aTolC"),  py::arg("aT"))
        .def("IsVertexOnLine",
             (Standard_Boolean (IntTools_Context::*)( const TopoDS_Vertex & ,  const Standard_Real ,  const IntTools_Curve & ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const TopoDS_Vertex & ,  const Standard_Real ,  const IntTools_Curve & ,  const Standard_Real ,  Standard_Real &  ) >(&IntTools_Context::IsVertexOnLine),
             R"#(Computes parameter of the vertex aV on the curve aIC. Returns true if the distance between vertex and curve is less than sum of tolerance of aV and aTolC, otherwise or if projection algorithm failed returns false (in this case aT isn't significant))#"  , py::arg("aV"),  py::arg("aTolV"),  py::arg("aIC"),  py::arg("aTolC"),  py::arg("aT"))
        .def("ProjectPointOnEdge",
             (Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Edge & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const gp_Pnt & ,  const TopoDS_Edge & ,  Standard_Real &  ) >(&IntTools_Context::ProjectPointOnEdge),
             R"#(Computes parameter of the point aP on the edge aE. Returns false if projection algorithm failed other wiese returns true.)#"  , py::arg("aP"),  py::arg("aE"),  py::arg("aT"))
        .def("BndBox",
             (Bnd_Box & (IntTools_Context::*)( const TopoDS_Shape &  ) ) static_cast<Bnd_Box & (IntTools_Context::*)( const TopoDS_Shape &  ) >(&IntTools_Context::BndBox),
             R"#(None)#"  , py::arg("theS"))
        .def("IsInfiniteFace",
             (Standard_Boolean (IntTools_Context::*)( const TopoDS_Face &  ) ) static_cast<Standard_Boolean (IntTools_Context::*)( const TopoDS_Face &  ) >(&IntTools_Context::IsInfiniteFace),
             R"#(Returns true if the solid <theFace> has infinite bounds)#"  , py::arg("theFace"))
        .def("SetPOnSProjectionTolerance",
             (void (IntTools_Context::*)( const Standard_Real  ) ) static_cast<void (IntTools_Context::*)( const Standard_Real  ) >(&IntTools_Context::SetPOnSProjectionTolerance),
             R"#(Sets tolerance to be used for projection of point on surface. Clears map of already cached projectors in order to maintain correct value for all projectors)#"  , py::arg("theValue"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntTools_Context::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntTools_Context::*)() const>(&IntTools_Context::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("UVBounds",
             []( IntTools_Context &self , const TopoDS_Face & theFace ){ Standard_Real  UMin; Standard_Real  UMax; Standard_Real  VMin; Standard_Real  VMax; self.UVBounds(theFace,UMin,UMax,VMin,VMax); return std::make_tuple(UMin,UMax,VMin,VMax); },
             R"#(Computes the boundaries of the face using surface adaptor)#"  , py::arg("theFace"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntTools_Context::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntTools_Context::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Curve , shared_ptr<IntTools_Curve>  >>(m.attr("IntTools_Curve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("the3dCurve3d"),  py::arg("the2dCurve1"),  py::arg("the2dCurve2"),  py::arg("theTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("theTangentialTolerance")=static_cast<const Standard_Real>(0.0) )
    // custom constructors
    // methods
        .def("SetCurves",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) >(&IntTools_Curve::SetCurves),
             R"#(Sets the curves)#"  , py::arg("the3dCurve"),  py::arg("the2dCurve1"),  py::arg("the2dCurve2"))
        .def("SetCurve",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> &  ) >(&IntTools_Curve::SetCurve),
             R"#(Sets the 3d curve)#"  , py::arg("the3dCurve"))
        .def("SetFirstCurve2d",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&IntTools_Curve::SetFirstCurve2d),
             R"#(Sets the first 2d curve)#"  , py::arg("the2dCurve1"))
        .def("SetSecondCurve2d",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&IntTools_Curve::SetSecondCurve2d),
             R"#(Sets the second 2d curve)#"  , py::arg("the2dCurve2"))
        .def("SetTolerance",
             (void (IntTools_Curve::*)( const Standard_Real  ) ) static_cast<void (IntTools_Curve::*)( const Standard_Real  ) >(&IntTools_Curve::SetTolerance),
             R"#(Sets the tolerance for the curve)#"  , py::arg("theTolerance"))
        .def("SetTangentialTolerance",
             (void (IntTools_Curve::*)( const Standard_Real  ) ) static_cast<void (IntTools_Curve::*)( const Standard_Real  ) >(&IntTools_Curve::SetTangentialTolerance),
             R"#(Sets the tangential tolerance)#"  , py::arg("theTangentialTolerance"))
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (IntTools_Curve::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (IntTools_Curve::*)() const>(&IntTools_Curve::Curve),
             R"#(Returns 3d curve)#" )
        .def("FirstCurve2d",
             (const opencascade::handle<Geom2d_Curve> & (IntTools_Curve::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (IntTools_Curve::*)() const>(&IntTools_Curve::FirstCurve2d),
             R"#(Returns first 2d curve)#" )
        .def("SecondCurve2d",
             (const opencascade::handle<Geom2d_Curve> & (IntTools_Curve::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (IntTools_Curve::*)() const>(&IntTools_Curve::SecondCurve2d),
             R"#(Returns second 2d curve)#" )
        .def("Tolerance",
             (Standard_Real (IntTools_Curve::*)() const) static_cast<Standard_Real (IntTools_Curve::*)() const>(&IntTools_Curve::Tolerance),
             R"#(Returns the tolerance)#" )
        .def("TangentialTolerance",
             (Standard_Real (IntTools_Curve::*)() const) static_cast<Standard_Real (IntTools_Curve::*)() const>(&IntTools_Curve::TangentialTolerance),
             R"#(Returns the tangential tolerance)#" )
        .def("HasBounds",
             (Standard_Boolean (IntTools_Curve::*)() const) static_cast<Standard_Boolean (IntTools_Curve::*)() const>(&IntTools_Curve::HasBounds),
             R"#(Returns TRUE if 3d curve is BoundedCurve)#" )
        .def("Bounds",
             (Standard_Boolean (IntTools_Curve::*)( Standard_Real & ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt &  ) const) static_cast<Standard_Boolean (IntTools_Curve::*)( Standard_Real & ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt &  ) const>(&IntTools_Curve::Bounds),
             R"#(If the 3d curve is bounded curve the method will return TRUE and modify the output parameters with boundary parameters of the curve and corresponded 3d points. If the curve does not have bounds, the method will return false and the output parameters will stay untouched.)#"  , py::arg("theFirst"),  py::arg("theLast"),  py::arg("theFirstPnt"),  py::arg("theLastPnt"))
        .def("D0",
             (Standard_Boolean (IntTools_Curve::*)( const Standard_Real & ,  gp_Pnt &  ) const) static_cast<Standard_Boolean (IntTools_Curve::*)( const Standard_Real & ,  gp_Pnt &  ) const>(&IntTools_Curve::D0),
             R"#(Computes 3d point corresponded to the given parameter if this parameter is inside the boundaries of the curve. Returns TRUE in this case. Otherwise, the point will not be computed and the method will return FALSE.)#"  , py::arg("thePar"),  py::arg("thePnt"))
        .def("Type",
             (GeomAbs_CurveType (IntTools_Curve::*)() const) static_cast<GeomAbs_CurveType (IntTools_Curve::*)() const>(&IntTools_Curve::Type),
             R"#(Returns the type of the 3d curve)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CurveRangeLocalizeData , shared_ptr<IntTools_CurveRangeLocalizeData>  >>(m.attr("IntTools_CurveRangeLocalizeData"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Real >()  , py::arg("theNbSample"),  py::arg("theMinRange") )
    // custom constructors
    // methods
        .def("GetNbSample",
             (Standard_Integer (IntTools_CurveRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_CurveRangeLocalizeData::*)() const>(&IntTools_CurveRangeLocalizeData::GetNbSample),
             R"#(None)#" )
        .def("GetMinRange",
             (Standard_Real (IntTools_CurveRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_CurveRangeLocalizeData::*)() const>(&IntTools_CurveRangeLocalizeData::GetMinRange),
             R"#(None)#" )
        .def("AddOutRange",
             (void (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample &  ) ) static_cast<void (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample &  ) >(&IntTools_CurveRangeLocalizeData::AddOutRange),
             R"#(None)#"  , py::arg("theRange"))
        .def("AddBox",
             (void (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample & ,  const Bnd_Box &  ) ) static_cast<void (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample & ,  const Bnd_Box &  ) >(&IntTools_CurveRangeLocalizeData::AddBox),
             R"#(None)#"  , py::arg("theRange"),  py::arg("theBox"))
        .def("FindBox",
             (Standard_Boolean (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample & ,  Bnd_Box &  ) const) static_cast<Standard_Boolean (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample & ,  Bnd_Box &  ) const>(&IntTools_CurveRangeLocalizeData::FindBox),
             R"#(None)#"  , py::arg("theRange"),  py::arg("theBox"))
        .def("IsRangeOut",
             (Standard_Boolean (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample &  ) const) static_cast<Standard_Boolean (IntTools_CurveRangeLocalizeData::*)( const IntTools_CurveRangeSample &  ) const>(&IntTools_CurveRangeLocalizeData::IsRangeOut),
             R"#(None)#"  , py::arg("theRange"))
        .def("ListRangeOut",
             (void (IntTools_CurveRangeLocalizeData::*)( NCollection_List<IntTools_CurveRangeSample> &  ) const) static_cast<void (IntTools_CurveRangeLocalizeData::*)( NCollection_List<IntTools_CurveRangeSample> &  ) const>(&IntTools_CurveRangeLocalizeData::ListRangeOut),
             R"#(None)#"  , py::arg("theList"))
        .def("GetNbSample",
             (Standard_Integer (IntTools_CurveRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_CurveRangeLocalizeData::*)() const>(&IntTools_CurveRangeLocalizeData::GetNbSample),
             R"#(None)#" )
        .def("GetMinRange",
             (Standard_Real (IntTools_CurveRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_CurveRangeLocalizeData::*)() const>(&IntTools_CurveRangeLocalizeData::GetMinRange),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntTools_CurveRangeSampleMapHasher , shared_ptr<IntTools_CurveRangeSampleMapHasher>>(m,"IntTools_CurveRangeSampleMapHasher");

    static_cast<py::class_<IntTools_CurveRangeSampleMapHasher , shared_ptr<IntTools_CurveRangeSampleMapHasher>  >>(m.attr("IntTools_CurveRangeSampleMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const IntTools_CurveRangeSample & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const IntTools_CurveRangeSample & ,  const Standard_Integer  ) >(&IntTools_CurveRangeSampleMapHasher::HashCode),
                    R"#(Computes a hash code for the given key, in the range [1, theUpperBound])#"  , py::arg("theKey"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const IntTools_CurveRangeSample & ,  const IntTools_CurveRangeSample &  ) ) static_cast<Standard_Boolean (*)( const IntTools_CurveRangeSample & ,  const IntTools_CurveRangeSample &  ) >(&IntTools_CurveRangeSampleMapHasher::IsEqual),
                    R"#(Returns True when the two keys are the same. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("S1"),  py::arg("S2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_EdgeEdge , shared_ptr<IntTools_EdgeEdge>  >>(m.attr("IntTools_EdgeEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("theEdge1"),  py::arg("theEdge2") )
        .def(py::init< const TopoDS_Edge &,const Standard_Real,const Standard_Real,const TopoDS_Edge &,const Standard_Real,const Standard_Real >()  , py::arg("theEdge1"),  py::arg("aT11"),  py::arg("aT12"),  py::arg("theEdge2"),  py::arg("aT21"),  py::arg("aT22") )
    // custom constructors
    // methods
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge)#"  , py::arg("theEdge"))
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("theRange1"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the second edge)#"  , py::arg("theEdge"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("theRange"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetFuzzyValue",
             (void (IntTools_EdgeEdge::*)( const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real  ) >(&IntTools_EdgeEdge::SetFuzzyValue),
             R"#(Sets the Fuzzy value)#"  , py::arg("theFuzz"))
        .def("Perform",
             (void (IntTools_EdgeEdge::*)() ) static_cast<void (IntTools_EdgeEdge::*)() >(&IntTools_EdgeEdge::Perform),
             R"#(Performs the intersection between edges)#" )
        .def("IsDone",
             (Standard_Boolean (IntTools_EdgeEdge::*)() const) static_cast<Standard_Boolean (IntTools_EdgeEdge::*)() const>(&IntTools_EdgeEdge::IsDone),
             R"#(Returns TRUE if common part(s) is(are) found)#" )
        .def("FuzzyValue",
             (Standard_Real (IntTools_EdgeEdge::*)() const) static_cast<Standard_Real (IntTools_EdgeEdge::*)() const>(&IntTools_EdgeEdge::FuzzyValue),
             R"#(Returns Fuzzy value)#" )
        .def("CommonParts",
             (const IntTools_SequenceOfCommonPrts & (IntTools_EdgeEdge::*)() const) static_cast<const IntTools_SequenceOfCommonPrts & (IntTools_EdgeEdge::*)() const>(&IntTools_EdgeEdge::CommonParts),
             R"#(Returns common parts)#" )
        .def("UseQuickCoincidenceCheck",
             (void (IntTools_EdgeEdge::*)( const Standard_Boolean  ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Boolean  ) >(&IntTools_EdgeEdge::UseQuickCoincidenceCheck),
             R"#(Sets the flag myQuickCoincidenceCheck)#"  , py::arg("bFlag"))
        .def("IsCoincidenceCheckedQuickly",
             (Standard_Boolean (IntTools_EdgeEdge::*)() ) static_cast<Standard_Boolean (IntTools_EdgeEdge::*)() >(&IntTools_EdgeEdge::IsCoincidenceCheckedQuickly),
             R"#(Returns the flag myQuickCoincidenceCheck)#" )
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge)#"  , py::arg("theEdge"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("theRange"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge &  ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the second edge)#"  , py::arg("theEdge"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range &  ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("theRange"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetFuzzyValue",
             (void (IntTools_EdgeEdge::*)( const Standard_Real  ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real  ) >(&IntTools_EdgeEdge::SetFuzzyValue),
             R"#(Sets the Fuzzy value)#"  , py::arg("theFuzz"))
        .def("FuzzyValue",
             (Standard_Real (IntTools_EdgeEdge::*)() const) static_cast<Standard_Real (IntTools_EdgeEdge::*)() const>(&IntTools_EdgeEdge::FuzzyValue),
             R"#(Returns Fuzzy value)#" )
        .def("CommonParts",
             (const IntTools_SequenceOfCommonPrts & (IntTools_EdgeEdge::*)() const) static_cast<const IntTools_SequenceOfCommonPrts & (IntTools_EdgeEdge::*)() const>(&IntTools_EdgeEdge::CommonParts),
             R"#(Returns common parts)#" )
        .def("IsDone",
             (Standard_Boolean (IntTools_EdgeEdge::*)() const) static_cast<Standard_Boolean (IntTools_EdgeEdge::*)() const>(&IntTools_EdgeEdge::IsDone),
             R"#(Returns TRUE if common part(s) is(are) found)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_EdgeFace , shared_ptr<IntTools_EdgeFace>  >>(m.attr("IntTools_EdgeFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetEdge",
             (void (IntTools_EdgeFace::*)( const TopoDS_Edge &  ) ) static_cast<void (IntTools_EdgeFace::*)( const TopoDS_Edge &  ) >(&IntTools_EdgeFace::SetEdge),
             R"#(Sets the edge for intersection)#"  , py::arg("theEdge"))
        .def("Edge",
             (const TopoDS_Edge & (IntTools_EdgeFace::*)() const) static_cast<const TopoDS_Edge & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Edge),
             R"#(Returns the edge)#" )
        .def("SetFace",
             (void (IntTools_EdgeFace::*)( const TopoDS_Face &  ) ) static_cast<void (IntTools_EdgeFace::*)( const TopoDS_Face &  ) >(&IntTools_EdgeFace::SetFace),
             R"#(Sets the face for intersection)#"  , py::arg("theFace"))
        .def("Face",
             (const TopoDS_Face & (IntTools_EdgeFace::*)() const) static_cast<const TopoDS_Face & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Face),
             R"#(Returns the face)#" )
        .def("SetRange",
             (void (IntTools_EdgeFace::*)( const IntTools_Range &  ) ) static_cast<void (IntTools_EdgeFace::*)( const IntTools_Range &  ) >(&IntTools_EdgeFace::SetRange),
             R"#(Sets the boundaries for the edge. The algorithm processes edge inside these boundaries.)#"  , py::arg("theRange"))
        .def("SetRange",
             (void (IntTools_EdgeFace::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_EdgeFace::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_EdgeFace::SetRange),
             R"#(Sets the boundaries for the edge. The algorithm processes edge inside these boundaries.)#"  , py::arg("theFirst"),  py::arg("theLast"))
        .def("Range",
             (const IntTools_Range & (IntTools_EdgeFace::*)() const) static_cast<const IntTools_Range & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Range),
             R"#(Returns intersection range of the edge)#" )
        .def("SetContext",
             (void (IntTools_EdgeFace::*)( const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (IntTools_EdgeFace::*)( const opencascade::handle<IntTools_Context> &  ) >(&IntTools_EdgeFace::SetContext),
             R"#(Sets the intersection context)#"  , py::arg("theContext"))
        .def("Context",
             (const opencascade::handle<IntTools_Context> & (IntTools_EdgeFace::*)() const) static_cast<const opencascade::handle<IntTools_Context> & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Context),
             R"#(Returns the intersection context)#" )
        .def("SetFuzzyValue",
             (void (IntTools_EdgeFace::*)( const Standard_Real  ) ) static_cast<void (IntTools_EdgeFace::*)( const Standard_Real  ) >(&IntTools_EdgeFace::SetFuzzyValue),
             R"#(Sets the Fuzzy value)#"  , py::arg("theFuzz"))
        .def("FuzzyValue",
             (Standard_Real (IntTools_EdgeFace::*)() const) static_cast<Standard_Real (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::FuzzyValue),
             R"#(Returns the Fuzzy value)#" )
        .def("UseQuickCoincidenceCheck",
             (void (IntTools_EdgeFace::*)( const Standard_Boolean  ) ) static_cast<void (IntTools_EdgeFace::*)( const Standard_Boolean  ) >(&IntTools_EdgeFace::UseQuickCoincidenceCheck),
             R"#(Sets the flag for quick coincidence check. It is safe to use the quick check for coincidence only if both of the following conditions are met: - The vertices of edge are lying on the face; - The edge does not intersect the boundaries of the face on the given range.)#"  , py::arg("theFlag"))
        .def("IsCoincidenceCheckedQuickly",
             (Standard_Boolean (IntTools_EdgeFace::*)() ) static_cast<Standard_Boolean (IntTools_EdgeFace::*)() >(&IntTools_EdgeFace::IsCoincidenceCheckedQuickly),
             R"#(Returns the flag myQuickCoincidenceCheck)#" )
        .def("Perform",
             (void (IntTools_EdgeFace::*)() ) static_cast<void (IntTools_EdgeFace::*)() >(&IntTools_EdgeFace::Perform),
             R"#(Launches the process)#" )
        .def("IsDone",
             (Standard_Boolean (IntTools_EdgeFace::*)() const) static_cast<Standard_Boolean (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::IsDone),
             R"#(Returns TRUE if computation was successful. Otherwise returns FALSE.)#" )
        .def("ErrorStatus",
             (Standard_Integer (IntTools_EdgeFace::*)() const) static_cast<Standard_Integer (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::ErrorStatus),
             R"#(Returns the code of completion: 0 - means successful completion; 1 - the process was not started; 2,3 - invalid source data for the algorithm; 4 - projection failed.)#" )
        .def("CommonParts",
             (const IntTools_SequenceOfCommonPrts & (IntTools_EdgeFace::*)() const) static_cast<const IntTools_SequenceOfCommonPrts & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::CommonParts),
             R"#(Returns resulting common parts)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_FClass2d , shared_ptr<IntTools_FClass2d>  >>(m.attr("IntTools_FClass2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const Standard_Real >()  , py::arg("F"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Init",
             (void (IntTools_FClass2d::*)( const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<void (IntTools_FClass2d::*)( const TopoDS_Face & ,  const Standard_Real  ) >(&IntTools_FClass2d::Init),
             R"#(Initializes algorithm by the face F and tolerance Tol)#"  , py::arg("F"),  py::arg("Tol"))
        .def("PerformInfinitePoint",
             (TopAbs_State (IntTools_FClass2d::*)() const) static_cast<TopAbs_State (IntTools_FClass2d::*)() const>(&IntTools_FClass2d::PerformInfinitePoint),
             R"#(Returns state of infinite 2d point relatively to (0, 0))#" )
        .def("Perform",
             (TopAbs_State (IntTools_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Boolean  ) const) static_cast<TopAbs_State (IntTools_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Boolean  ) const>(&IntTools_FClass2d::Perform),
             R"#(Returns state of the 2d point Puv. If RecadreOnPeriodic is true (defalut value), for the periodic surface 2d point, adjusted to period, is classified.)#"  , py::arg("Puv"),  py::arg("RecadreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Destroy",
             (void (IntTools_FClass2d::*)() ) static_cast<void (IntTools_FClass2d::*)() >(&IntTools_FClass2d::Destroy),
             R"#(Destructor)#" )
        .def("TestOnRestriction",
             (TopAbs_State (IntTools_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) const) static_cast<TopAbs_State (IntTools_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) const>(&IntTools_FClass2d::TestOnRestriction),
             R"#(Test a point with +- an offset (Tol) and returns On if some points are OUT an some are IN (Caution: Internal use . see the code for more details))#"  , py::arg("Puv"),  py::arg("Tol"),  py::arg("RecadreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsHole",
             (Standard_Boolean (IntTools_FClass2d::*)() const) static_cast<Standard_Boolean (IntTools_FClass2d::*)() const>(&IntTools_FClass2d::IsHole),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_FaceFace , shared_ptr<IntTools_FaceFace>  >>(m.attr("IntTools_FaceFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetParameters",
             (void (IntTools_FaceFace::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (IntTools_FaceFace::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real  ) >(&IntTools_FaceFace::SetParameters),
             R"#(Modifier)#"  , py::arg("ApproxCurves"),  py::arg("ComputeCurveOnS1"),  py::arg("ComputeCurveOnS2"),  py::arg("ApproximationTolerance"))
        .def("Perform",
             (void (IntTools_FaceFace::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (IntTools_FaceFace::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&IntTools_FaceFace::Perform),
             R"#(Intersects underliing surfaces of F1 and F2 Use sum of tolerance of F1 and F2 as intersection criteria)#"  , py::arg("F1"),  py::arg("F2"))
        .def("IsDone",
             (Standard_Boolean (IntTools_FaceFace::*)() const) static_cast<Standard_Boolean (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::IsDone),
             R"#(Returns True if the intersection was successful)#" )
        .def("Lines",
             (const IntTools_SequenceOfCurves & (IntTools_FaceFace::*)() const) static_cast<const IntTools_SequenceOfCurves & (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::Lines),
             R"#(Returns sequence of 3d curves as result of intersection)#" )
        .def("Points",
             (const IntTools_SequenceOfPntOn2Faces & (IntTools_FaceFace::*)() const) static_cast<const IntTools_SequenceOfPntOn2Faces & (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::Points),
             R"#(Returns sequence of 3d curves as result of intersection)#" )
        .def("Face1",
             (const TopoDS_Face & (IntTools_FaceFace::*)() const) static_cast<const TopoDS_Face & (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::Face1),
             R"#(Returns first of processed faces)#" )
        .def("Face2",
             (const TopoDS_Face & (IntTools_FaceFace::*)() const) static_cast<const TopoDS_Face & (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::Face2),
             R"#(Returns second of processed faces)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntTools_FaceFace::*)() const) static_cast<Standard_Boolean (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::TangentFaces),
             R"#(Returns True if faces are tangent)#" )
        .def("PrepareLines3D",
             (void (IntTools_FaceFace::*)( const Standard_Boolean  ) ) static_cast<void (IntTools_FaceFace::*)( const Standard_Boolean  ) >(&IntTools_FaceFace::PrepareLines3D),
             R"#(Provides post-processing the result lines. <bToSplit> - the flag. In case of <bToSplit> is true the closed 3D-curves will be splitted on parts. In case of <bToSplit> is false the closed 3D-curves remain untouched.)#"  , py::arg("bToSplit")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetList",
             (void (IntTools_FaceFace::*)( NCollection_List<IntSurf_PntOn2S> &  ) ) static_cast<void (IntTools_FaceFace::*)( NCollection_List<IntSurf_PntOn2S> &  ) >(&IntTools_FaceFace::SetList),
             R"#(None)#"  , py::arg("ListOfPnts"))
        .def("SetContext",
             (void (IntTools_FaceFace::*)( const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (IntTools_FaceFace::*)( const opencascade::handle<IntTools_Context> &  ) >(&IntTools_FaceFace::SetContext),
             R"#(Sets the intersecton context)#"  , py::arg("aContext"))
        .def("SetFuzzyValue",
             (void (IntTools_FaceFace::*)( const Standard_Real  ) ) static_cast<void (IntTools_FaceFace::*)( const Standard_Real  ) >(&IntTools_FaceFace::SetFuzzyValue),
             R"#(Sets the Fuzzy value)#"  , py::arg("theFuzz"))
        .def("FuzzyValue",
             (Standard_Real (IntTools_FaceFace::*)() const) static_cast<Standard_Real (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::FuzzyValue),
             R"#(Returns Fuzzy value)#" )
        .def("Context",
             (const opencascade::handle<IntTools_Context> & (IntTools_FaceFace::*)() const) static_cast<const opencascade::handle<IntTools_Context> & (IntTools_FaceFace::*)() const>(&IntTools_FaceFace::Context),
             R"#(Gets the intersecton context)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_MarkedRangeSet , shared_ptr<IntTools_MarkedRangeSet>  >>(m.attr("IntTools_MarkedRangeSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("theFirstBoundary"),  py::arg("theLastBoundary"),  py::arg("theInitFlag") )
        .def(py::init< const IntTools_CArray1OfReal &,const Standard_Integer >()  , py::arg("theSortedArray"),  py::arg("theInitFlag") )
    // custom constructors
    // methods
        .def("SetBoundaries",
             (void (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&IntTools_MarkedRangeSet::SetBoundaries),
             R"#(build set of ranges which consists of one range with boundary values theFirstBoundary and theLastBoundary)#"  , py::arg("theFirstBoundary"),  py::arg("theLastBoundary"),  py::arg("theInitFlag"))
        .def("SetRanges",
             (void (IntTools_MarkedRangeSet::*)( const IntTools_CArray1OfReal & ,  const Standard_Integer  ) ) static_cast<void (IntTools_MarkedRangeSet::*)( const IntTools_CArray1OfReal & ,  const Standard_Integer  ) >(&IntTools_MarkedRangeSet::SetRanges),
             R"#(Build set of ranges based on the array of progressive sorted values)#"  , py::arg("theSortedArray"),  py::arg("theInitFlag"))
        .def("InsertRange",
             (Standard_Boolean (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&IntTools_MarkedRangeSet::InsertRange),
             R"#(Inserts a new range marked with flag theFlag It replace the existing ranges or parts of ranges and their flags. Returns True if the range is inside the initial boundaries, otherwise or in case of some error returns False)#"  , py::arg("theFirstBoundary"),  py::arg("theLastBoundary"),  py::arg("theFlag"))
        .def("InsertRange",
             (Standard_Boolean (IntTools_MarkedRangeSet::*)( const IntTools_Range & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IntTools_MarkedRangeSet::*)( const IntTools_Range & ,  const Standard_Integer  ) >(&IntTools_MarkedRangeSet::InsertRange),
             R"#(Inserts a new range marked with flag theFlag It replace the existing ranges or parts of ranges and their flags. Returns True if the range is inside the initial boundaries, otherwise or in case of some error returns False)#"  , py::arg("theRange"),  py::arg("theFlag"))
        .def("InsertRange",
             (Standard_Boolean (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&IntTools_MarkedRangeSet::InsertRange),
             R"#(Inserts a new range marked with flag theFlag It replace the existing ranges or parts of ranges and their flags. The index theIndex is a position where the range will be inserted. Returns True if the range is inside the initial boundaries, otherwise or in case of some error returns False)#"  , py::arg("theFirstBoundary"),  py::arg("theLastBoundary"),  py::arg("theFlag"),  py::arg("theIndex"))
        .def("InsertRange",
             (Standard_Boolean (IntTools_MarkedRangeSet::*)( const IntTools_Range & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (IntTools_MarkedRangeSet::*)( const IntTools_Range & ,  const Standard_Integer ,  const Standard_Integer  ) >(&IntTools_MarkedRangeSet::InsertRange),
             R"#(Inserts a new range marked with flag theFlag It replace the existing ranges or parts of ranges and their flags. The index theIndex is a position where the range will be inserted. Returns True if the range is inside the initial boundaries, otherwise or in case of some error returns False)#"  , py::arg("theRange"),  py::arg("theFlag"),  py::arg("theIndex"))
        .def("SetFlag",
             (void (IntTools_MarkedRangeSet::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntTools_MarkedRangeSet::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntTools_MarkedRangeSet::SetFlag),
             R"#(Set flag theFlag for range with index theIndex)#"  , py::arg("theIndex"),  py::arg("theFlag"))
        .def("Flag",
             (Standard_Integer (IntTools_MarkedRangeSet::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntTools_MarkedRangeSet::*)( const Standard_Integer  ) const>(&IntTools_MarkedRangeSet::Flag),
             R"#(Returns flag of the range with index theIndex)#"  , py::arg("theIndex"))
        .def("GetIndex",
             (Standard_Integer (IntTools_MarkedRangeSet::*)( const Standard_Real  ) const) static_cast<Standard_Integer (IntTools_MarkedRangeSet::*)( const Standard_Real  ) const>(&IntTools_MarkedRangeSet::GetIndex),
             R"#(Returns index of range which contains theValue. If theValue do not belong any range returns 0.)#"  , py::arg("theValue"))
        .def("GetIndices",
             (const TColStd_SequenceOfInteger & (IntTools_MarkedRangeSet::*)( const Standard_Real  ) ) static_cast<const TColStd_SequenceOfInteger & (IntTools_MarkedRangeSet::*)( const Standard_Real  ) >(&IntTools_MarkedRangeSet::GetIndices),
             R"#(None)#"  , py::arg("theValue"))
        .def("GetIndex",
             (Standard_Integer (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Boolean  ) const) static_cast<Standard_Integer (IntTools_MarkedRangeSet::*)( const Standard_Real ,  const Standard_Boolean  ) const>(&IntTools_MarkedRangeSet::GetIndex),
             R"#(Returns index of range which contains theValue If theValue do not belong any range returns 0. If UseLower is Standard_True then lower boundary of the range can be equal to theValue, otherwise upper boundary of the range can be equal to theValue.)#"  , py::arg("theValue"),  py::arg("UseLower"))
        .def("Length",
             (Standard_Integer (IntTools_MarkedRangeSet::*)() const) static_cast<Standard_Integer (IntTools_MarkedRangeSet::*)() const>(&IntTools_MarkedRangeSet::Length),
             R"#(Returns number of ranges)#" )
        .def("Range",
             (IntTools_Range (IntTools_MarkedRangeSet::*)( const Standard_Integer  ) const) static_cast<IntTools_Range (IntTools_MarkedRangeSet::*)( const Standard_Integer  ) const>(&IntTools_MarkedRangeSet::Range),
             R"#(Returns the range with index theIndex. the Index can be from 1 to Length())#"  , py::arg("theIndex"))
        .def("Length",
             (Standard_Integer (IntTools_MarkedRangeSet::*)() const) static_cast<Standard_Integer (IntTools_MarkedRangeSet::*)() const>(&IntTools_MarkedRangeSet::Length),
             R"#(Returns number of ranges)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_PntOn2Faces , shared_ptr<IntTools_PntOn2Faces>  >>(m.attr("IntTools_PntOn2Faces"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IntTools_PntOnFace &,const IntTools_PntOnFace & >()  , py::arg("aP1"),  py::arg("aP2") )
    // custom constructors
    // methods
        .def("SetP1",
             (void (IntTools_PntOn2Faces::*)( const IntTools_PntOnFace &  ) ) static_cast<void (IntTools_PntOn2Faces::*)( const IntTools_PntOnFace &  ) >(&IntTools_PntOn2Faces::SetP1),
             R"#(Modifier)#"  , py::arg("aP1"))
        .def("SetP2",
             (void (IntTools_PntOn2Faces::*)( const IntTools_PntOnFace &  ) ) static_cast<void (IntTools_PntOn2Faces::*)( const IntTools_PntOnFace &  ) >(&IntTools_PntOn2Faces::SetP2),
             R"#(Modifier)#"  , py::arg("aP2"))
        .def("SetValid",
             (void (IntTools_PntOn2Faces::*)( const Standard_Boolean  ) ) static_cast<void (IntTools_PntOn2Faces::*)( const Standard_Boolean  ) >(&IntTools_PntOn2Faces::SetValid),
             R"#(Modifier)#"  , py::arg("bF"))
        .def("P1",
             (const IntTools_PntOnFace & (IntTools_PntOn2Faces::*)() const) static_cast<const IntTools_PntOnFace & (IntTools_PntOn2Faces::*)() const>(&IntTools_PntOn2Faces::P1),
             R"#(Selector)#" )
        .def("P2",
             (const IntTools_PntOnFace & (IntTools_PntOn2Faces::*)() const) static_cast<const IntTools_PntOnFace & (IntTools_PntOn2Faces::*)() const>(&IntTools_PntOn2Faces::P2),
             R"#(Selector)#" )
        .def("IsValid",
             (Standard_Boolean (IntTools_PntOn2Faces::*)() const) static_cast<Standard_Boolean (IntTools_PntOn2Faces::*)() const>(&IntTools_PntOn2Faces::IsValid),
             R"#(Selector)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_PntOnFace , shared_ptr<IntTools_PntOnFace>  >>(m.attr("IntTools_PntOnFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IntTools_PntOnFace::*)( const TopoDS_Face & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_PntOnFace::*)( const TopoDS_Face & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_PntOnFace::Init),
             R"#(Initializes me by aFace, a 3d point and it's UV parameters on face)#"  , py::arg("aF"),  py::arg("aP"),  py::arg("U"),  py::arg("V"))
        .def("SetFace",
             (void (IntTools_PntOnFace::*)( const TopoDS_Face &  ) ) static_cast<void (IntTools_PntOnFace::*)( const TopoDS_Face &  ) >(&IntTools_PntOnFace::SetFace),
             R"#(Modifier)#"  , py::arg("aF"))
        .def("SetPnt",
             (void (IntTools_PntOnFace::*)( const gp_Pnt &  ) ) static_cast<void (IntTools_PntOnFace::*)( const gp_Pnt &  ) >(&IntTools_PntOnFace::SetPnt),
             R"#(Modifier)#"  , py::arg("aP"))
        .def("SetParameters",
             (void (IntTools_PntOnFace::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_PntOnFace::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_PntOnFace::SetParameters),
             R"#(Modifier)#"  , py::arg("U"),  py::arg("V"))
        .def("SetValid",
             (void (IntTools_PntOnFace::*)( const Standard_Boolean  ) ) static_cast<void (IntTools_PntOnFace::*)( const Standard_Boolean  ) >(&IntTools_PntOnFace::SetValid),
             R"#(Modifier)#"  , py::arg("bF"))
        .def("Valid",
             (Standard_Boolean (IntTools_PntOnFace::*)() const) static_cast<Standard_Boolean (IntTools_PntOnFace::*)() const>(&IntTools_PntOnFace::Valid),
             R"#(Selector)#" )
        .def("Face",
             (const TopoDS_Face & (IntTools_PntOnFace::*)() const) static_cast<const TopoDS_Face & (IntTools_PntOnFace::*)() const>(&IntTools_PntOnFace::Face),
             R"#(Selector)#" )
        .def("Pnt",
             (const gp_Pnt & (IntTools_PntOnFace::*)() const) static_cast<const gp_Pnt & (IntTools_PntOnFace::*)() const>(&IntTools_PntOnFace::Pnt),
             R"#(Selector)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( IntTools_PntOnFace &self   ){ Standard_Real  U; Standard_Real  V; self.Parameters(U,V); return std::make_tuple(U,V); },
             R"#(Selector)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Range , shared_ptr<IntTools_Range>  >>(m.attr("IntTools_Range"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("aFirst"),  py::arg("aLast") )
    // custom constructors
    // methods
        .def("SetFirst",
             (void (IntTools_Range::*)( const Standard_Real  ) ) static_cast<void (IntTools_Range::*)( const Standard_Real  ) >(&IntTools_Range::SetFirst),
             R"#(Modifier)#"  , py::arg("aFirst"))
        .def("SetLast",
             (void (IntTools_Range::*)( const Standard_Real  ) ) static_cast<void (IntTools_Range::*)( const Standard_Real  ) >(&IntTools_Range::SetLast),
             R"#(Modifier)#"  , py::arg("aLast"))
        .def("First",
             (Standard_Real (IntTools_Range::*)() const) static_cast<Standard_Real (IntTools_Range::*)() const>(&IntTools_Range::First),
             R"#(Selector)#" )
        .def("Last",
             (Standard_Real (IntTools_Range::*)() const) static_cast<Standard_Real (IntTools_Range::*)() const>(&IntTools_Range::Last),
             R"#(Selector)#" )
    // methods using call by reference i.s.o. return
        .def("Range",
             []( IntTools_Range &self   ){ Standard_Real  aFirst; Standard_Real  aLast; self.Range(aFirst,aLast); return std::make_tuple(aFirst,aLast); },
             R"#(Selector)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Root , shared_ptr<IntTools_Root>  >>(m.attr("IntTools_Root"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Integer >()  , py::arg("aRoot"),  py::arg("aType") )
    // custom constructors
    // methods
        .def("SetRoot",
             (void (IntTools_Root::*)( const Standard_Real  ) ) static_cast<void (IntTools_Root::*)( const Standard_Real  ) >(&IntTools_Root::SetRoot),
             R"#(Sets the Root's value)#"  , py::arg("aRoot"))
        .def("SetType",
             (void (IntTools_Root::*)( const Standard_Integer  ) ) static_cast<void (IntTools_Root::*)( const Standard_Integer  ) >(&IntTools_Root::SetType),
             R"#(Sets the Root's Type)#"  , py::arg("aType"))
        .def("SetStateBefore",
             (void (IntTools_Root::*)( const TopAbs_State  ) ) static_cast<void (IntTools_Root::*)( const TopAbs_State  ) >(&IntTools_Root::SetStateBefore),
             R"#(Set the value of the state before the root (at t=Root-dt))#"  , py::arg("aState"))
        .def("SetStateAfter",
             (void (IntTools_Root::*)( const TopAbs_State  ) ) static_cast<void (IntTools_Root::*)( const TopAbs_State  ) >(&IntTools_Root::SetStateAfter),
             R"#(Set the value of the state after the root (at t=Root-dt))#"  , py::arg("aState"))
        .def("SetLayerHeight",
             (void (IntTools_Root::*)( const Standard_Real  ) ) static_cast<void (IntTools_Root::*)( const Standard_Real  ) >(&IntTools_Root::SetLayerHeight),
             R"#(Not used in Edge/Edge algorithm)#"  , py::arg("aHeight"))
        .def("SetInterval",
             (void (IntTools_Root::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_Root::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_Root::SetInterval),
             R"#(Sets the interval from which the Root was found [t1,t2] and the corresponding values of the function on the bounds f(t1), f(t2).)#"  , py::arg("t1"),  py::arg("t2"),  py::arg("f1"),  py::arg("f2"))
        .def("Root",
             (Standard_Real (IntTools_Root::*)() const) static_cast<Standard_Real (IntTools_Root::*)() const>(&IntTools_Root::Root),
             R"#(Returns the Root value)#" )
        .def("Type",
             (Standard_Integer (IntTools_Root::*)() const) static_cast<Standard_Integer (IntTools_Root::*)() const>(&IntTools_Root::Type),
             R"#(Returns the type of the root =0 - Simple (was found by bisection method); =2 - Smart when f1=0, f2!=0 or vice versa (was found by Fibbonacci method); =1 - Pure (pure zero for all t [t1,t2] );)#" )
        .def("StateBefore",
             (TopAbs_State (IntTools_Root::*)() const) static_cast<TopAbs_State (IntTools_Root::*)() const>(&IntTools_Root::StateBefore),
             R"#(Returns the state before the root)#" )
        .def("StateAfter",
             (TopAbs_State (IntTools_Root::*)() const) static_cast<TopAbs_State (IntTools_Root::*)() const>(&IntTools_Root::StateAfter),
             R"#(Returns the state after the root)#" )
        .def("LayerHeight",
             (Standard_Real (IntTools_Root::*)() const) static_cast<Standard_Real (IntTools_Root::*)() const>(&IntTools_Root::LayerHeight),
             R"#(Not used in Edge/Edge algorithm)#" )
        .def("IsValid",
             (Standard_Boolean (IntTools_Root::*)() const) static_cast<Standard_Boolean (IntTools_Root::*)() const>(&IntTools_Root::IsValid),
             R"#(Returns the validity flag for the root, True if myStateBefore==TopAbs_OUT && myStateAfter==TopAbs_IN or myStateBefore==TopAbs_OUT && myStateAfter==TopAbs_ON or myStateBefore==TopAbs_ON && myStateAfter==TopAbs_OUT or myStateBefore==TopAbs_IN && myStateAfter==TopAbs_OUT . For other cases it returns False.)#" )
    // methods using call by reference i.s.o. return
        .def("Interval",
             []( IntTools_Root &self   ){ Standard_Real  t1; Standard_Real  t2; Standard_Real  f1; Standard_Real  f2; self.Interval(t1,t2,f1,f2); return std::make_tuple(t1,t2,f1,f2); },
             R"#(Returns the values of interval from which the Root was found [t1,t2] and the corresponding values of the function on the bounds f(t1), f(t2).)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_ShrunkRange , shared_ptr<IntTools_ShrunkRange>  >>(m.attr("IntTools_ShrunkRange"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetData",
             (void (IntTools_ShrunkRange::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<void (IntTools_ShrunkRange::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&IntTools_ShrunkRange::SetData),
             R"#(None)#"  , py::arg("aE"),  py::arg("aT1"),  py::arg("aT2"),  py::arg("aV1"),  py::arg("aV2"))
        .def("SetContext",
             (void (IntTools_ShrunkRange::*)( const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (IntTools_ShrunkRange::*)( const opencascade::handle<IntTools_Context> &  ) >(&IntTools_ShrunkRange::SetContext),
             R"#(None)#"  , py::arg("aCtx"))
        .def("Context",
             (const opencascade::handle<IntTools_Context> & (IntTools_ShrunkRange::*)() const) static_cast<const opencascade::handle<IntTools_Context> & (IntTools_ShrunkRange::*)() const>(&IntTools_ShrunkRange::Context),
             R"#(None)#" )
        .def("SetShrunkRange",
             (void (IntTools_ShrunkRange::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_ShrunkRange::*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_ShrunkRange::SetShrunkRange),
             R"#(None)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("BndBox",
             (const Bnd_Box & (IntTools_ShrunkRange::*)() const) static_cast<const Bnd_Box & (IntTools_ShrunkRange::*)() const>(&IntTools_ShrunkRange::BndBox),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (IntTools_ShrunkRange::*)() const) static_cast<const TopoDS_Edge & (IntTools_ShrunkRange::*)() const>(&IntTools_ShrunkRange::Edge),
             R"#(None)#" )
        .def("Perform",
             (void (IntTools_ShrunkRange::*)() ) static_cast<void (IntTools_ShrunkRange::*)() >(&IntTools_ShrunkRange::Perform),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (IntTools_ShrunkRange::*)() const) static_cast<Standard_Boolean (IntTools_ShrunkRange::*)() const>(&IntTools_ShrunkRange::IsDone),
             R"#(Returns TRUE in case the shrunk range is computed)#" )
        .def("IsSplittable",
             (Standard_Boolean (IntTools_ShrunkRange::*)() const) static_cast<Standard_Boolean (IntTools_ShrunkRange::*)() const>(&IntTools_ShrunkRange::IsSplittable),
             R"#(Returns FALSE in case the shrunk range is too short and the edge cannot be split, otherwise returns TRUE)#" )
        .def("Length",
             (Standard_Real (IntTools_ShrunkRange::*)() const) static_cast<Standard_Real (IntTools_ShrunkRange::*)() const>(&IntTools_ShrunkRange::Length),
             R"#(Returns the length of the edge if computed.)#" )
    // methods using call by reference i.s.o. return
        .def("ShrunkRange",
             []( IntTools_ShrunkRange &self   ){ Standard_Real  aT1; Standard_Real  aT2; self.ShrunkRange(aT1,aT2); return std::make_tuple(aT1,aT2); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_SurfaceRangeLocalizeData , shared_ptr<IntTools_SurfaceRangeLocalizeData>  >>(m.attr("IntTools_SurfaceRangeLocalizeData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("theNbSampleU"),  py::arg("theNbSampleV"),  py::arg("theMinRangeU"),  py::arg("theMinRangeV") )
        .def(py::init< const IntTools_SurfaceRangeLocalizeData & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Assign",
             (IntTools_SurfaceRangeLocalizeData & (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeLocalizeData &  ) ) static_cast<IntTools_SurfaceRangeLocalizeData & (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeLocalizeData &  ) >(&IntTools_SurfaceRangeLocalizeData::Assign),
             R"#(None)#"  , py::arg("Other"))
        .def("GetNbSampleU",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNbSampleU),
             R"#(None)#" )
        .def("GetNbSampleV",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNbSampleV),
             R"#(None)#" )
        .def("GetMinRangeU",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetMinRangeU),
             R"#(None)#" )
        .def("GetMinRangeV",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetMinRangeV),
             R"#(None)#" )
        .def("AddOutRange",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample &  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample &  ) >(&IntTools_SurfaceRangeLocalizeData::AddOutRange),
             R"#(None)#"  , py::arg("theRange"))
        .def("AddBox",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample & ,  const Bnd_Box &  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample & ,  const Bnd_Box &  ) >(&IntTools_SurfaceRangeLocalizeData::AddBox),
             R"#(None)#"  , py::arg("theRange"),  py::arg("theBox"))
        .def("FindBox",
             (Standard_Boolean (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample & ,  Bnd_Box &  ) const) static_cast<Standard_Boolean (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample & ,  Bnd_Box &  ) const>(&IntTools_SurfaceRangeLocalizeData::FindBox),
             R"#(None)#"  , py::arg("theRange"),  py::arg("theBox"))
        .def("IsRangeOut",
             (Standard_Boolean (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample &  ) const) static_cast<Standard_Boolean (IntTools_SurfaceRangeLocalizeData::*)( const IntTools_SurfaceRangeSample &  ) const>(&IntTools_SurfaceRangeLocalizeData::IsRangeOut),
             R"#(None)#"  , py::arg("theRange"))
        .def("ListRangeOut",
             (void (IntTools_SurfaceRangeLocalizeData::*)( NCollection_List<IntTools_SurfaceRangeSample> &  ) const) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( NCollection_List<IntTools_SurfaceRangeSample> &  ) const>(&IntTools_SurfaceRangeLocalizeData::ListRangeOut),
             R"#(None)#"  , py::arg("theList"))
        .def("RemoveRangeOutAll",
             (void (IntTools_SurfaceRangeLocalizeData::*)() ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)() >(&IntTools_SurfaceRangeLocalizeData::RemoveRangeOutAll),
             R"#(None)#" )
        .def("SetGridDeflection",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real  ) >(&IntTools_SurfaceRangeLocalizeData::SetGridDeflection),
             R"#(Set the grid deflection.)#"  , py::arg("theDeflection"))
        .def("GetGridDeflection",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetGridDeflection),
             R"#(Query the grid deflection.)#" )
        .def("SetRangeUGrid",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeLocalizeData::SetRangeUGrid),
             R"#(Set the range U of the grid of points.)#"  , py::arg("theNbUGrid"))
        .def("GetRangeUGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeUGrid),
             R"#(Query the range U of the grid of points.)#" )
        .def("SetUParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) >(&IntTools_SurfaceRangeLocalizeData::SetUParam),
             R"#(Set the U parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theUParam"))
        .def("GetUParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetUParam),
             R"#(Query the U parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("SetRangeVGrid",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeLocalizeData::SetRangeVGrid),
             R"#(Set the range V of the grid of points.)#"  , py::arg("theNbVGrid"))
        .def("GetRangeVGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeVGrid),
             R"#(Query the range V of the grid of points.)#" )
        .def("SetVParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) >(&IntTools_SurfaceRangeLocalizeData::SetVParam),
             R"#(Set the V parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theVParam"))
        .def("GetVParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetVParam),
             R"#(Query the V parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("SetGridPoint",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) >(&IntTools_SurfaceRangeLocalizeData::SetGridPoint),
             R"#(Set the grid point.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"),  py::arg("thePoint"))
        .def("GetGridPoint",
             (const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetGridPoint),
             R"#(Set the grid point.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"))
        .def("SetFrame",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_SurfaceRangeLocalizeData::SetFrame),
             R"#(Sets the frame area. Used to work with grid points.)#"  , py::arg("theUMin"),  py::arg("theUMax"),  py::arg("theVMin"),  py::arg("theVMax"))
        .def("GetNBUPointsInFrame",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNBUPointsInFrame),
             R"#(Returns the number of grid points on U direction in frame.)#" )
        .def("GetNBVPointsInFrame",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNBVPointsInFrame),
             R"#(Returns the number of grid points on V direction in frame.)#" )
        .def("GetPointInFrame",
             (const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetPointInFrame),
             R"#(Returns the grid point in frame.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"))
        .def("GetUParamInFrame",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetUParamInFrame),
             R"#(Query the U parameter of the grid points at that index in frame.)#"  , py::arg("theIndex"))
        .def("GetVParamInFrame",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetVParamInFrame),
             R"#(Query the V parameter of the grid points at that index in frame.)#"  , py::arg("theIndex"))
        .def("ClearGrid",
             (void (IntTools_SurfaceRangeLocalizeData::*)() ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)() >(&IntTools_SurfaceRangeLocalizeData::ClearGrid),
             R"#(Clears the grid of points.)#" )
        .def("GetNbSampleU",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNbSampleU),
             R"#(None)#" )
        .def("GetNbSampleV",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNbSampleV),
             R"#(None)#" )
        .def("GetMinRangeU",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetMinRangeU),
             R"#(None)#" )
        .def("GetMinRangeV",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetMinRangeV),
             R"#(None)#" )
        .def("SetGridDeflection",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real  ) >(&IntTools_SurfaceRangeLocalizeData::SetGridDeflection),
             R"#(Set the grid deflection.)#"  , py::arg("theDeflection"))
        .def("GetGridDeflection",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetGridDeflection),
             R"#(Query the grid deflection.)#" )
        .def("GetRangeUGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeUGrid),
             R"#(Query the range U of the grid of points.)#" )
        .def("SetUParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) >(&IntTools_SurfaceRangeLocalizeData::SetUParam),
             R"#(Set the U parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theUParam"))
        .def("GetUParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetUParam),
             R"#(Query the U parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("GetRangeVGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeVGrid),
             R"#(Query the range V of the grid of points.)#" )
        .def("SetVParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Real  ) >(&IntTools_SurfaceRangeLocalizeData::SetVParam),
             R"#(Set the V parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theVParam"))
        .def("GetVParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetVParam),
             R"#(Query the V parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("SetGridPoint",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) >(&IntTools_SurfaceRangeLocalizeData::SetGridPoint),
             R"#(Set the grid point.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"),  py::arg("thePoint"))
        .def("GetGridPoint",
             (const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IntTools_SurfaceRangeLocalizeData::GetGridPoint),
             R"#(Set the grid point.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"))
        .def("GetNBUPointsInFrame",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNBUPointsInFrame),
             R"#(Returns the number of grid points on U direction in frame.)#" )
        .def("GetNBVPointsInFrame",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNBVPointsInFrame),
             R"#(Returns the number of grid points on V direction in frame.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_SurfaceRangeSample , shared_ptr<IntTools_SurfaceRangeSample>  >>(m.attr("IntTools_SurfaceRangeSample"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theIndexU"),  py::arg("theDepthU"),  py::arg("theIndexV"),  py::arg("theDepthV") )
        .def(py::init< const IntTools_CurveRangeSample &,const IntTools_CurveRangeSample & >()  , py::arg("theRangeU"),  py::arg("theRangeV") )
        .def(py::init< const IntTools_SurfaceRangeSample & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Assign",
             (IntTools_SurfaceRangeSample & (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample &  ) ) static_cast<IntTools_SurfaceRangeSample & (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample &  ) >(&IntTools_SurfaceRangeSample::Assign),
             R"#(None)#"  , py::arg("Other"))
        .def("SetRanges",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ,  const IntTools_CurveRangeSample &  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ,  const IntTools_CurveRangeSample &  ) >(&IntTools_SurfaceRangeSample::SetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("GetRanges",
             (void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & ,  IntTools_CurveRangeSample &  ) const) static_cast<void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & ,  IntTools_CurveRangeSample &  ) const>(&IntTools_SurfaceRangeSample::GetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("SetIndexes",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetIndexes),
             R"#(None)#"  , py::arg("theIndexU"),  py::arg("theIndexV"))
        .def("SetSampleRangeU",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) >(&IntTools_SurfaceRangeSample::SetSampleRangeU),
             R"#(None)#"  , py::arg("theRangeSampleU"))
        .def("GetSampleRangeU",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeU),
             R"#(None)#" )
        .def("SetSampleRangeV",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) >(&IntTools_SurfaceRangeSample::SetSampleRangeV),
             R"#(None)#"  , py::arg("theRangeSampleV"))
        .def("GetSampleRangeV",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeV),
             R"#(None)#" )
        .def("SetIndexU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetIndexU),
             R"#(None)#"  , py::arg("theIndexU"))
        .def("GetIndexU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexU),
             R"#(None)#" )
        .def("SetIndexV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetIndexV),
             R"#(None)#"  , py::arg("theIndexV"))
        .def("GetIndexV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexV),
             R"#(None)#" )
        .def("SetDepthU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetDepthU),
             R"#(None)#"  , py::arg("theDepthU"))
        .def("GetDepthU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthU),
             R"#(None)#" )
        .def("SetDepthV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetDepthV),
             R"#(None)#"  , py::arg("theDepthV"))
        .def("GetDepthV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthV),
             R"#(None)#" )
        .def("GetRangeU",
             (IntTools_Range (IntTools_SurfaceRangeSample::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) const) static_cast<IntTools_Range (IntTools_SurfaceRangeSample::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) const>(&IntTools_SurfaceRangeSample::GetRangeU),
             R"#(None)#"  , py::arg("theFirstU"),  py::arg("theLastU"),  py::arg("theNbSampleU"))
        .def("GetRangeV",
             (IntTools_Range (IntTools_SurfaceRangeSample::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) const) static_cast<IntTools_Range (IntTools_SurfaceRangeSample::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) const>(&IntTools_SurfaceRangeSample::GetRangeV),
             R"#(None)#"  , py::arg("theFirstV"),  py::arg("theLastV"),  py::arg("theNbSampleV"))
        .def("IsEqual",
             (Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample &  ) const) static_cast<Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample &  ) const>(&IntTools_SurfaceRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRangeIndexUDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexUDeeper),
             R"#(None)#"  , py::arg("theNbSampleU"))
        .def("GetRangeIndexVDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexVDeeper),
             R"#(None)#"  , py::arg("theNbSampleV"))
        .def("SetRanges",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ,  const IntTools_CurveRangeSample &  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ,  const IntTools_CurveRangeSample &  ) >(&IntTools_SurfaceRangeSample::SetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("GetRanges",
             (void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & ,  IntTools_CurveRangeSample &  ) const) static_cast<void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & ,  IntTools_CurveRangeSample &  ) const>(&IntTools_SurfaceRangeSample::GetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("SetIndexes",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetIndexes),
             R"#(None)#"  , py::arg("theIndexU"),  py::arg("theIndexV"))
        .def("SetSampleRangeU",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) >(&IntTools_SurfaceRangeSample::SetSampleRangeU),
             R"#(None)#"  , py::arg("theRangeSampleU"))
        .def("GetSampleRangeU",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeU),
             R"#(None)#" )
        .def("SetSampleRangeV",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample &  ) >(&IntTools_SurfaceRangeSample::SetSampleRangeV),
             R"#(None)#"  , py::arg("theRangeSampleV"))
        .def("GetSampleRangeV",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeV),
             R"#(None)#" )
        .def("SetIndexU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetIndexU),
             R"#(None)#"  , py::arg("theIndexU"))
        .def("GetIndexU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexU),
             R"#(None)#" )
        .def("SetIndexV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetIndexV),
             R"#(None)#"  , py::arg("theIndexV"))
        .def("GetIndexV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexV),
             R"#(None)#" )
        .def("SetDepthU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetDepthU),
             R"#(None)#"  , py::arg("theDepthU"))
        .def("GetDepthU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthU),
             R"#(None)#" )
        .def("SetDepthV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) >(&IntTools_SurfaceRangeSample::SetDepthV),
             R"#(None)#"  , py::arg("theDepthV"))
        .def("GetDepthV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthV),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample &  ) const) static_cast<Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample &  ) const>(&IntTools_SurfaceRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRangeIndexUDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexUDeeper),
             R"#(None)#"  , py::arg("theNbSampleU"))
        .def("GetRangeIndexVDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer  ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexVDeeper),
             R"#(None)#"  , py::arg("theNbSampleV"))
    // methods using call by reference i.s.o. return
        .def("GetIndexes",
             []( IntTools_SurfaceRangeSample &self   ){ Standard_Integer  theIndexU; Standard_Integer  theIndexV; self.GetIndexes(theIndexU,theIndexV); return std::make_tuple(theIndexU,theIndexV); },
             R"#(None)#" )
        .def("GetDepths",
             []( IntTools_SurfaceRangeSample &self   ){ Standard_Integer  theDepthU; Standard_Integer  theDepthV; self.GetDepths(theDepthU,theDepthV); return std::make_tuple(theDepthU,theDepthV); },
             R"#(None)#" )
        .def("GetIndexes",
             []( IntTools_SurfaceRangeSample &self   ){ Standard_Integer  theIndexU; Standard_Integer  theIndexV; self.GetIndexes(theIndexU,theIndexV); return std::make_tuple(theIndexU,theIndexV); },
             R"#(None)#" )
        .def("GetDepths",
             []( IntTools_SurfaceRangeSample &self   ){ Standard_Integer  theDepthU; Standard_Integer  theDepthV; self.GetDepths(theDepthU,theDepthV); return std::make_tuple(theDepthU,theDepthV); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntTools_SurfaceRangeSampleMapHasher , shared_ptr<IntTools_SurfaceRangeSampleMapHasher>>(m,"IntTools_SurfaceRangeSampleMapHasher");

    static_cast<py::class_<IntTools_SurfaceRangeSampleMapHasher , shared_ptr<IntTools_SurfaceRangeSampleMapHasher>  >>(m.attr("IntTools_SurfaceRangeSampleMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const IntTools_SurfaceRangeSample & ,  Standard_Integer  ) ) static_cast<Standard_Integer (*)( const IntTools_SurfaceRangeSample & ,  Standard_Integer  ) >(&IntTools_SurfaceRangeSampleMapHasher::HashCode),
                    R"#(Computes a hash code for the given key, in the range [1, theUpperBound])#"  , py::arg("theKey"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const IntTools_SurfaceRangeSample & ,  const IntTools_SurfaceRangeSample &  ) ) static_cast<Standard_Boolean (*)( const IntTools_SurfaceRangeSample & ,  const IntTools_SurfaceRangeSample &  ) >(&IntTools_SurfaceRangeSampleMapHasher::IsEqual),
                    R"#(Returns True when the two keys are the same. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("S1"),  py::arg("S2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntTools_Tools , shared_ptr<IntTools_Tools>>(m,"IntTools_Tools");

    static_cast<py::class_<IntTools_Tools , shared_ptr<IntTools_Tools>  >>(m.attr("IntTools_Tools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ComputeVV_s",
                    (Standard_Integer (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&IntTools_Tools::ComputeVV),
                    R"#(Computes distance between vertex V1 and vertex V2, if the distance is less than sum of vertex tolerances returns zero, otherwise returns negative value)#"  , py::arg("V1"),  py::arg("V2"))
        .def_static("HasInternalEdge_s",
                    (Standard_Boolean (*)( const TopoDS_Wire &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Wire &  ) >(&IntTools_Tools::HasInternalEdge),
                    R"#(Returns True if wire aW contains edges with INTERNAL orientation)#"  , py::arg("aW"))
        .def_static("MakeFaceFromWireAndFace_s",
                    (void (*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  TopoDS_Face &  ) >(&IntTools_Tools::MakeFaceFromWireAndFace),
                    R"#(Build a face based on surface of given face aF and bounded by wire aW)#"  , py::arg("aW"),  py::arg("aF"),  py::arg("aFNew"))
        .def_static("ClassifyPointByFace_s",
                    (TopAbs_State (*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) ) static_cast<TopAbs_State (*)( const TopoDS_Face & ,  const gp_Pnt2d &  ) >(&IntTools_Tools::ClassifyPointByFace),
                    R"#(None)#"  , py::arg("aF"),  py::arg("P"))
        .def_static("IsVertex_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const Standard_Real  ) >(&IntTools_Tools::IsVertex),
                    R"#(Computes square distance between a point on the edge E corresponded to parameter t and vertices of edge E. Returns True if this distance is less than square tolerance of vertex, otherwise returns false.)#"  , py::arg("E"),  py::arg("t"))
        .def_static("IsVertex_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real  ) >(&IntTools_Tools::IsVertex),
                    R"#(Returns True if square distance between vertex V and a point on the edge E corresponded to parameter t is less than square tolerance of V)#"  , py::arg("E"),  py::arg("V"),  py::arg("t"))
        .def_static("IsVertex_s",
                    (Standard_Boolean (*)( const IntTools_CommonPrt &  ) ) static_cast<Standard_Boolean (*)( const IntTools_CommonPrt &  ) >(&IntTools_Tools::IsVertex),
                    R"#(Returns True if IsVertx for middle parameter of fist range and first edge returns True and if IsVertex for middle parameter of second range and second range returns True, otherwise returns False)#"  , py::arg("aCmnPrt"))
        .def_static("IsMiddlePointsEqual_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&IntTools_Tools::IsMiddlePointsEqual),
                    R"#(Gets boundary of parameters of E1 and E2. Computes 3d points on each corresponded to average parameters. Returns True if distance between computed points is less than sum of edge tolerance, otherwise returns False.)#"  , py::arg("E1"),  py::arg("E2"))
        .def_static("IsVertex_s",
                    (Standard_Boolean (*)( const gp_Pnt & ,  const Standard_Real ,  const TopoDS_Vertex &  ) ) static_cast<Standard_Boolean (*)( const gp_Pnt & ,  const Standard_Real ,  const TopoDS_Vertex &  ) >(&IntTools_Tools::IsVertex),
                    R"#(Returns True if the distance between point aP and vertex aV is less or equal to sum of aTolPV and vertex tolerance, otherwise returns False)#"  , py::arg("aP"),  py::arg("aTolPV"),  py::arg("aV"))
        .def_static("IntermediatePoint_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_Real  ) >(&IntTools_Tools::IntermediatePoint),
                    R"#(Returns some value between aFirst and aLast)#"  , py::arg("aFirst"),  py::arg("aLast"))
        .def_static("SplitCurve_s",
                    (Standard_Integer (*)( const IntTools_Curve & ,  NCollection_Sequence<IntTools_Curve> &  ) ) static_cast<Standard_Integer (*)( const IntTools_Curve & ,  NCollection_Sequence<IntTools_Curve> &  ) >(&IntTools_Tools::SplitCurve),
                    R"#(Split aC by average parameter if aC is closed in 3D. Returns positive value if splitting has been done, otherwise returns zero.)#"  , py::arg("aC"),  py::arg("aS"))
        .def_static("RejectLines_s",
                    (void (*)(  const NCollection_Sequence<IntTools_Curve> & ,  NCollection_Sequence<IntTools_Curve> &  ) ) static_cast<void (*)(  const NCollection_Sequence<IntTools_Curve> & ,  NCollection_Sequence<IntTools_Curve> &  ) >(&IntTools_Tools::RejectLines),
                    R"#(Puts curves from aSIn to aSOut except those curves that are coincide with first curve from aSIn.)#"  , py::arg("aSIn"),  py::arg("aSOut"))
        .def_static("IsDirsCoinside_s",
                    (Standard_Boolean (*)( const gp_Dir & ,  const gp_Dir &  ) ) static_cast<Standard_Boolean (*)( const gp_Dir & ,  const gp_Dir &  ) >(&IntTools_Tools::IsDirsCoinside),
                    R"#(Returns True if D1 and D2 coinside)#"  , py::arg("D1"),  py::arg("D2"))
        .def_static("IsDirsCoinside_s",
                    (Standard_Boolean (*)( const gp_Dir & ,  const gp_Dir & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const gp_Dir & ,  const gp_Dir & ,  const Standard_Real  ) >(&IntTools_Tools::IsDirsCoinside),
                    R"#(Returns True if D1 and D2 coinside with given tolerance)#"  , py::arg("D1"),  py::arg("D2"),  py::arg("aTol"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> &  ) >(&IntTools_Tools::IsClosed),
                    R"#(Returns True if aC is BoundedCurve from Geom and the distance between first point of the curve aC and last point is less than 1.e-12)#"  , py::arg("aC"))
        .def_static("CurveTolerance_s",
                    (Standard_Real (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real  ) >(&IntTools_Tools::CurveTolerance),
                    R"#(Returns adaptive tolerance for given aTolBase if aC is trimmed curve and basis curve is parabola, otherwise returns value of aTolBase)#"  , py::arg("aC"),  py::arg("aTolBase"))
        .def_static("CheckCurve_s",
                    (Standard_Boolean (*)( const IntTools_Curve & ,  Bnd_Box &  ) ) static_cast<Standard_Boolean (*)( const IntTools_Curve & ,  Bnd_Box &  ) >(&IntTools_Tools::CheckCurve),
                    R"#(Checks if the curve is not covered by the default tolerance (confusion). Builds bounding box for the curve and stores it into <theBox>.)#"  , py::arg("theCurve"),  py::arg("theBox"))
        .def_static("IsOnPave_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const IntTools_Range & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const IntTools_Range & ,  const Standard_Real  ) >(&IntTools_Tools::IsOnPave),
                    R"#(None)#"  , py::arg("theT"),  py::arg("theRange"),  py::arg("theTol"))
        .def_static("IsOnPave1_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const IntTools_Range & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const IntTools_Range & ,  const Standard_Real  ) >(&IntTools_Tools::IsOnPave1),
                    R"#(None)#"  , py::arg("theT"),  py::arg("theRange"),  py::arg("theTol"))
        .def_static("IsInRange_s",
                    (Standard_Boolean (*)( const IntTools_Range & ,  const IntTools_Range & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const IntTools_Range & ,  const IntTools_Range & ,  const Standard_Real  ) >(&IntTools_Tools::IsInRange),
                    R"#(Checks if the range <theR> interfere with the range <theRRef>)#"  , py::arg("theRRef"),  py::arg("theR"),  py::arg("theTol"))
        .def_static("SegPln_s",
                    (Standard_Integer (*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Integer (*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&IntTools_Tools::SegPln),
                    R"#(None)#"  , py::arg("theLin"),  py::arg("theTLin1"),  py::arg("theTLin2"),  py::arg("theTolLin"),  py::arg("thePln"),  py::arg("theTolPln"),  py::arg("theP"),  py::arg("theT"),  py::arg("theTolP"),  py::arg("theTmin"),  py::arg("theTmax"))
        .def_static("ComputeTolerance_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) >(&IntTools_Tools::ComputeTolerance),
                    R"#(Computes the max distance between points taken from 3D and 2D curves by the same parameter)#"  , py::arg("theCurve3D"),  py::arg("theCurve2D"),  py::arg("theSurf"),  py::arg("theFirst"),  py::arg("theLast"),  py::arg("theMaxDist"),  py::arg("theMaxPar"),  py::arg("theTolRange")=static_cast<const Standard_Real>(Precision :: PConfusion ( )))
        .def_static("ComputeIntRange_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntTools_Tools::ComputeIntRange),
                    R"#(Computes the correct Intersection range for Line/Line, Line/Plane and Plane/Plane intersections)#"  , py::arg("theTol1"),  py::arg("theTol2"),  py::arg("theAngle"))
    // static methods using call by reference i.s.o. return
        .def_static("VertexParameters_s",
                    []( const IntTools_CommonPrt & theCP ){ Standard_Real  theT1; Standard_Real  theT2; IntTools_Tools::VertexParameters(theCP,theT1,theT2); return std::make_tuple(theT1,theT2); },
                    R"#(None)#"  , py::arg("theCP"))
        .def_static("VertexParameter_s",
                    []( const IntTools_CommonPrt & theCP ){ Standard_Real  theT; IntTools_Tools::VertexParameter(theCP,theT); return std::make_tuple(theT); },
                    R"#(None)#"  , py::arg("theCP"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_TopolTool ,opencascade::handle<IntTools_TopolTool>  , Adaptor3d_TopolTool >>(m.attr("IntTools_TopolTool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("theSurface") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (IntTools_TopolTool::*)() ) static_cast<void (IntTools_TopolTool::*)() >(&IntTools_TopolTool::Initialize),
             R"#(Redefined empty initializer)#" )
        .def("Initialize",
             (void (IntTools_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (IntTools_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&IntTools_TopolTool::Initialize),
             R"#(Initializes me by surface)#"  , py::arg("theSurface"))
        .def("ComputeSamplePoints",
             (void (IntTools_TopolTool::*)() ) static_cast<void (IntTools_TopolTool::*)() >(&IntTools_TopolTool::ComputeSamplePoints),
             R"#(None)#" )
        .def("NbSamplesU",
             (Standard_Integer (IntTools_TopolTool::*)() ) static_cast<Standard_Integer (IntTools_TopolTool::*)() >(&IntTools_TopolTool::NbSamplesU),
             R"#(Computes the sample-points for the intersections algorithms)#" )
        .def("NbSamplesV",
             (Standard_Integer (IntTools_TopolTool::*)() ) static_cast<Standard_Integer (IntTools_TopolTool::*)() >(&IntTools_TopolTool::NbSamplesV),
             R"#(Computes the sample-points for the intersections algorithms)#" )
        .def("NbSamples",
             (Standard_Integer (IntTools_TopolTool::*)() ) static_cast<Standard_Integer (IntTools_TopolTool::*)() >(&IntTools_TopolTool::NbSamples),
             R"#(Computes the sample-points for the intersections algorithms)#" )
        .def("SamplePoint",
             (void (IntTools_TopolTool::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt &  ) ) static_cast<void (IntTools_TopolTool::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt &  ) >(&IntTools_TopolTool::SamplePoint),
             R"#(Returns a 2d point from surface myS and a corresponded 3d point for given index. The index should be from 1 to NbSamples())#"  , py::arg("Index"),  py::arg("P2d"),  py::arg("P3d"))
        .def("SamplePnts",
             (void (IntTools_TopolTool::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntTools_TopolTool::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&IntTools_TopolTool::SamplePnts),
             R"#(compute the sample-points for the intersections algorithms by adaptive algorithm for BSpline surfaces. For other surfaces algorithm is the same as in method ComputeSamplePoints(), but only fill arrays of U and V sample parameters; theDefl is a requred deflection theNUmin, theNVmin are minimal nb points for U and V.)#"  , py::arg("theDefl"),  py::arg("theNUmin"),  py::arg("theNVmin"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntTools_TopolTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntTools_TopolTool::*)() const>(&IntTools_TopolTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntTools_TopolTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntTools_TopolTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntTools_WLineTool , shared_ptr<IntTools_WLineTool>>(m,"IntTools_WLineTool");

    static_cast<py::class_<IntTools_WLineTool , shared_ptr<IntTools_WLineTool>  >>(m.attr("IntTools_WLineTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NotUseSurfacesForApprox_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntPatch_WLine> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntPatch_WLine> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&IntTools_WLineTool::NotUseSurfacesForApprox),
                    R"#(None)#"  , py::arg("aF1"),  py::arg("aF2"),  py::arg("WL"),  py::arg("ifprm"),  py::arg("ilprm"))
        .def_static("DecompositionOfWLine_s",
                    (Standard_Boolean (*)( const opencascade::handle<IntPatch_WLine> & ,  const opencascade::handle<GeomAdaptor_HSurface> & ,  const opencascade::handle<GeomAdaptor_HSurface> & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const GeomInt_LineConstructor & ,  const Standard_Boolean ,  const Standard_Real ,  NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  Standard_Real & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IntPatch_WLine> & ,  const opencascade::handle<GeomAdaptor_HSurface> & ,  const opencascade::handle<GeomAdaptor_HSurface> & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const GeomInt_LineConstructor & ,  const Standard_Boolean ,  const Standard_Real ,  NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ,  Standard_Real & ,  const opencascade::handle<IntTools_Context> &  ) >(&IntTools_WLineTool::DecompositionOfWLine),
                    R"#(None)#"  , py::arg("theWLine"),  py::arg("theSurface1"),  py::arg("theSurface2"),  py::arg("theFace1"),  py::arg("theFace2"),  py::arg("theLConstructor"),  py::arg("theAvoidLConstructor"),  py::arg("theTol"),  py::arg("theNewLines"),  py::arg("theReachedTol3d"),  py::arg(""))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CurveRangeSample , shared_ptr<IntTools_CurveRangeSample>  , IntTools_BaseRangeSample >>(m.attr("IntTools_CurveRangeSample"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("theIndex") )
    // custom constructors
    // methods
        .def("SetRangeIndex",
             (void (IntTools_CurveRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_CurveRangeSample::*)( const Standard_Integer  ) >(&IntTools_CurveRangeSample::SetRangeIndex),
             R"#(None)#"  , py::arg("theIndex"))
        .def("GetRangeIndex",
             (Standard_Integer (IntTools_CurveRangeSample::*)() const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)() const>(&IntTools_CurveRangeSample::GetRangeIndex),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample &  ) const) static_cast<Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample &  ) const>(&IntTools_CurveRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRange",
             (IntTools_Range (IntTools_CurveRangeSample::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) const) static_cast<IntTools_Range (IntTools_CurveRangeSample::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) const>(&IntTools_CurveRangeSample::GetRange),
             R"#(None)#"  , py::arg("theFirst"),  py::arg("theLast"),  py::arg("theNbSample"))
        .def("GetRangeIndexDeeper",
             (Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer  ) const>(&IntTools_CurveRangeSample::GetRangeIndexDeeper),
             R"#(None)#"  , py::arg("theNbSample"))
        .def("SetRangeIndex",
             (void (IntTools_CurveRangeSample::*)( const Standard_Integer  ) ) static_cast<void (IntTools_CurveRangeSample::*)( const Standard_Integer  ) >(&IntTools_CurveRangeSample::SetRangeIndex),
             R"#(None)#"  , py::arg("theIndex"))
        .def("GetRangeIndex",
             (Standard_Integer (IntTools_CurveRangeSample::*)() const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)() const>(&IntTools_CurveRangeSample::GetRangeIndex),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample &  ) const) static_cast<Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample &  ) const>(&IntTools_CurveRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRangeIndexDeeper",
             (Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer  ) const>(&IntTools_CurveRangeSample::GetRangeIndexDeeper),
             R"#(None)#"  , py::arg("theNbSample"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntTools_FaceFace.hxx
// ./opencascade/IntTools_SequenceOfRanges.hxx
// ./opencascade/IntTools_CArray1OfInteger.hxx
// ./opencascade/IntTools_CurveRangeSampleMapHasher.hxx
// ./opencascade/IntTools_Tools.hxx
// ./opencascade/IntTools_CommonPrt.hxx
// ./opencascade/IntTools_CurveRangeLocalizeData.hxx
// ./opencascade/IntTools_Root.hxx
// ./opencascade/IntTools_PntOnFace.hxx
// ./opencascade/IntTools_MapIteratorOfMapOfSurfaceSample.hxx
// ./opencascade/IntTools_ListIteratorOfListOfSurfaceRangeSample.hxx
// ./opencascade/IntTools_Context.hxx
// ./opencascade/IntTools_TopolTool.hxx
// ./opencascade/IntTools_EdgeFace.hxx
// ./opencascade/IntTools_MapOfCurveSample.hxx
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
// ./opencascade/IntTools_ListIteratorOfListOfCurveRangeSample.hxx
// ./opencascade/IntTools_ShrunkRange.hxx
// ./opencascade/IntTools_BeanFaceIntersector.hxx
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
// ./opencascade/IntTools_ListIteratorOfListOfBox.hxx
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
// ./opencascade/IntTools_SequenceOfCurves.hxx
// ./opencascade/IntTools_Array1OfRoots.hxx
// ./opencascade/IntTools_CurveRangeSample.hxx
// ./opencascade/IntTools_FClass2d.hxx
// ./opencascade/IntTools_SurfaceRangeLocalizeData.hxx
// ./opencascade/IntTools_Range.hxx
// ./opencascade/IntTools_SequenceOfRoots.hxx
// ./opencascade/IntTools_MarkedRangeSet.hxx
// ./opencascade/IntTools_SurfaceRangeSample.hxx
// ./opencascade/IntTools_WLineTool.hxx
// ./opencascade/IntTools_SequenceOfPntOn2Faces.hxx
// ./opencascade/IntTools.hxx
// ./opencascade/IntTools_ListOfBox.hxx
// ./opencascade/IntTools_DataMapIteratorOfDataMapOfCurveSampleBox.hxx
// ./opencascade/IntTools_SurfaceRangeSampleMapHasher.hxx
// ./opencascade/IntTools_CArray1OfReal.hxx
// ./opencascade/IntTools_PntOn2Faces.hxx
// ./opencascade/IntTools_MapIteratorOfMapOfCurveSample.hxx
// ./opencascade/IntTools_Array1OfRange.hxx
// ./opencascade/IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox.hxx
// ./opencascade/IntTools_BaseRangeSample.hxx
// ./opencascade/IntTools_SequenceOfCommonPrts.hxx
// ./opencascade/IntTools_Curve.hxx
// ./opencascade/IntTools_EdgeEdge.hxx
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<IntTools_Range>(m,"IntTools_SequenceOfRanges");  
    register_template_NCollection_Map<IntTools_CurveRangeSample, IntTools_CurveRangeSampleMapHasher>(m,"IntTools_MapOfCurveSample");  
    register_template_NCollection_DataMap<IntTools_CurveRangeSample, Bnd_Box, IntTools_CurveRangeSampleMapHasher>(m,"IntTools_DataMapOfCurveSampleBox");  
    register_template_NCollection_List<IntTools_SurfaceRangeSample>(m,"IntTools_ListOfSurfaceRangeSample");  
    register_template_NCollection_DataMap<IntTools_SurfaceRangeSample, Bnd_Box, IntTools_SurfaceRangeSampleMapHasher>(m,"IntTools_DataMapOfSurfaceSampleBox");  
    register_template_NCollection_Map<IntTools_SurfaceRangeSample, IntTools_SurfaceRangeSampleMapHasher>(m,"IntTools_MapOfSurfaceSample");  
    register_template_NCollection_Sequence<IntTools_Curve>(m,"IntTools_SequenceOfCurves");  
    register_template_NCollection_Array1<IntTools_Root>(m,"IntTools_Array1OfRoots");  
    register_template_NCollection_Sequence<IntTools_Root>(m,"IntTools_SequenceOfRoots");  
    register_template_NCollection_Sequence<IntTools_PntOn2Faces>(m,"IntTools_SequenceOfPntOn2Faces");  
    register_template_NCollection_List<Bnd_Box>(m,"IntTools_ListOfBox");  
    register_template_NCollection_Array1<IntTools_Range>(m,"IntTools_Array1OfRange");  
    register_template_NCollection_Sequence<IntTools_CommonPrt>(m,"IntTools_SequenceOfCommonPrts");  
    register_template_NCollection_List<IntTools_CurveRangeSample>(m,"IntTools_ListOfCurveRangeSample");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
