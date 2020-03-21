
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomInt_LineConstructor.hxx>
#include <IntTools_Context.hxx>
#include <Adaptor3d_TopolTool.hxx>
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
#include <IntTools_Context.hxx>
#include <IntTools_Context.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_OutOfMemory.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <IntTools_Context.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntTools_Context.hxx>
#include <Bnd_Box.hxx>
#include <IntTools_CurveRangeLocalizeData.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_Range.hxx>
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
#include <IntTools_CurveRangeSample.hxx>
#include <Bnd_Box.hxx>
#include <IntTools_Range.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_OutOfMemory.hxx>
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
#include <Adaptor3d_HSurface.hxx>
#include <IntTools_Range.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>

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
// ./opencascade/IntTools_ListOfBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_ListOfBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_SequenceOfRoots.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_Array1OfRoots.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_SequenceOfCurves.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_SequenceOfRanges.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_Array1OfRange.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_SequenceOfPntOn2Faces.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_MapOfCurveSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_MapOfCurveSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntTools_SequenceOfCommonPrts.hxx
#include "NCollection_tmpl.hxx"


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

    static_cast<py::class_<IntTools , shared_ptr<IntTools> >>(m.attr("IntTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_BaseRangeSample , shared_ptr<IntTools_BaseRangeSample> >>(m.attr("IntTools_BaseRangeSample"))
    // constructors
    // custom constructors
    // methods
        .def("SetDepth",
             (void (IntTools_BaseRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_BaseRangeSample::*)( const Standard_Integer ) >(&IntTools_BaseRangeSample::SetDepth),
             R"#(None)#"  , py::arg("theDepth"))
        .def("GetDepth",
             (Standard_Integer (IntTools_BaseRangeSample::*)() const) static_cast<Standard_Integer (IntTools_BaseRangeSample::*)() const>(&IntTools_BaseRangeSample::GetDepth),
             R"#(None)#" )
        .def("SetDepth",
             (void (IntTools_BaseRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_BaseRangeSample::*)( const Standard_Integer ) >(&IntTools_BaseRangeSample::SetDepth),
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


    static_cast<py::class_<IntTools_BeanFaceIntersector , shared_ptr<IntTools_BeanFaceIntersector> >>(m.attr("IntTools_BeanFaceIntersector"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntTools_BeanFaceIntersector::*)() const) static_cast<Standard_Boolean (IntTools_BeanFaceIntersector::*)() const>(&IntTools_BeanFaceIntersector::IsDone),
             R"#(Returns Done/NotDone state of the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CArray1OfInteger , shared_ptr<IntTools_CArray1OfInteger> >>(m.attr("IntTools_CArray1OfInteger"))
    // constructors
    // custom constructors
    // methods
        .def("Length",
             (Standard_Integer (IntTools_CArray1OfInteger::*)() const) static_cast<Standard_Integer (IntTools_CArray1OfInteger::*)() const>(&IntTools_CArray1OfInteger::Length),
             R"#(Returns the number of elements of <me>.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CArray1OfReal , shared_ptr<IntTools_CArray1OfReal> >>(m.attr("IntTools_CArray1OfReal"))
    // constructors
    // custom constructors
    // methods
        .def("Length",
             (Standard_Integer (IntTools_CArray1OfReal::*)() const) static_cast<Standard_Integer (IntTools_CArray1OfReal::*)() const>(&IntTools_CArray1OfReal::Length),
             R"#(Returns the number of elements of <me>.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CommonPrt , shared_ptr<IntTools_CommonPrt> >>(m.attr("IntTools_CommonPrt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Context ,opencascade::handle<IntTools_Context> , Standard_Transient>>(m.attr("IntTools_Context"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntTools_Context::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntTools_Context::*)() const>(&IntTools_Context::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntTools_Context::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Curve , shared_ptr<IntTools_Curve> >>(m.attr("IntTools_Curve"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurves",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & ) >(&IntTools_Curve::SetCurves),
             R"#(Sets the curves)#"  , py::arg("the3dCurve"),  py::arg("the2dCurve1"),  py::arg("the2dCurve2"))
        .def("SetCurve",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom_Curve> & ) >(&IntTools_Curve::SetCurve),
             R"#(Sets the 3d curve)#"  , py::arg("the3dCurve"))
        .def("SetFirstCurve2d",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) >(&IntTools_Curve::SetFirstCurve2d),
             R"#(Sets the first 2d curve)#"  , py::arg("the2dCurve1"))
        .def("SetSecondCurve2d",
             (void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (IntTools_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) >(&IntTools_Curve::SetSecondCurve2d),
             R"#(Sets the second 2d curve)#"  , py::arg("the2dCurve2"))
        .def("SetTolerance",
             (void (IntTools_Curve::*)( const Standard_Real ) ) static_cast<void (IntTools_Curve::*)( const Standard_Real ) >(&IntTools_Curve::SetTolerance),
             R"#(Sets the tolerance for the curve)#"  , py::arg("theTolerance"))
        .def("SetTangentialTolerance",
             (void (IntTools_Curve::*)( const Standard_Real ) ) static_cast<void (IntTools_Curve::*)( const Standard_Real ) >(&IntTools_Curve::SetTangentialTolerance),
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CurveRangeLocalizeData , shared_ptr<IntTools_CurveRangeLocalizeData> >>(m.attr("IntTools_CurveRangeLocalizeData"))
    // constructors
    // custom constructors
    // methods
        .def("GetNbSample",
             (Standard_Integer (IntTools_CurveRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_CurveRangeLocalizeData::*)() const>(&IntTools_CurveRangeLocalizeData::GetNbSample),
             R"#(None)#" )
        .def("GetMinRange",
             (Standard_Real (IntTools_CurveRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_CurveRangeLocalizeData::*)() const>(&IntTools_CurveRangeLocalizeData::GetMinRange),
             R"#(None)#" )
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

    static_cast<py::class_<IntTools_CurveRangeSampleMapHasher , shared_ptr<IntTools_CurveRangeSampleMapHasher> >>(m.attr("IntTools_CurveRangeSampleMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const IntTools_CurveRangeSample & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const IntTools_CurveRangeSample & , const Standard_Integer ) >(&IntTools_CurveRangeSampleMapHasher::HashCode),
                    R"#(Computes a hash code for the given key, in the range [1, theUpperBound])#"  , py::arg("theKey"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const IntTools_CurveRangeSample & , const IntTools_CurveRangeSample & ) ) static_cast<Standard_Boolean (*)( const IntTools_CurveRangeSample & , const IntTools_CurveRangeSample & ) >(&IntTools_CurveRangeSampleMapHasher::IsEqual),
                    R"#(Returns True when the two keys are the same. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("S1"),  py::arg("S2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_EdgeEdge , shared_ptr<IntTools_EdgeEdge> >>(m.attr("IntTools_EdgeEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("theEdge1"),  py::arg("theEdge2") )
        .def(py::init< const TopoDS_Edge &,const Standard_Real,const Standard_Real,const TopoDS_Edge &,const Standard_Real,const Standard_Real >()  , py::arg("theEdge1"),  py::arg("aT11"),  py::arg("aT12"),  py::arg("theEdge2"),  py::arg("aT21"),  py::arg("aT22") )
    // custom constructors
    // methods
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge)#"  , py::arg("theEdge"))
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range & ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range & ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("theRange1"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the second edge)#"  , py::arg("theEdge"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range & ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range & ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("theRange"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetFuzzyValue",
             (void (IntTools_EdgeEdge::*)( const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real ) >(&IntTools_EdgeEdge::SetFuzzyValue),
             R"#(Sets the Fuzzy value)#"  , py::arg("theFuzz"))
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
             (void (IntTools_EdgeEdge::*)( const Standard_Boolean ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Boolean ) >(&IntTools_EdgeEdge::UseQuickCoincidenceCheck),
             R"#(Sets the flag myQuickCoincidenceCheck)#"  , py::arg("bFlag"))
        .def("IsCoincidenceCheckedQuickly",
             (Standard_Boolean (IntTools_EdgeEdge::*)() ) static_cast<Standard_Boolean (IntTools_EdgeEdge::*)() >(&IntTools_EdgeEdge::IsCoincidenceCheckedQuickly),
             R"#(Returns the flag myQuickCoincidenceCheck)#" )
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge)#"  , py::arg("theEdge"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range & ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range & ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("theRange"))
        .def("SetRange1",
             (void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetRange1),
             R"#(Sets the range for the first edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge1",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetEdge1),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the second edge)#"  , py::arg("theEdge"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const IntTools_Range & ) ) static_cast<void (IntTools_EdgeEdge::*)( const IntTools_Range & ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("theRange"))
        .def("SetRange2",
             (void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetRange2),
             R"#(Sets the range for the second edge)#"  , py::arg("aT1"),  py::arg("aT2"))
        .def("SetEdge2",
             (void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) >(&IntTools_EdgeEdge::SetEdge2),
             R"#(Sets the first edge and its range)#"  , py::arg("theEdge"),  py::arg("aT1"),  py::arg("aT2"))
        .def("SetFuzzyValue",
             (void (IntTools_EdgeEdge::*)( const Standard_Real ) ) static_cast<void (IntTools_EdgeEdge::*)( const Standard_Real ) >(&IntTools_EdgeEdge::SetFuzzyValue),
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


    static_cast<py::class_<IntTools_EdgeFace , shared_ptr<IntTools_EdgeFace> >>(m.attr("IntTools_EdgeFace"))
    // constructors
    // custom constructors
    // methods
        .def("SetEdge",
             (void (IntTools_EdgeFace::*)( const TopoDS_Edge & ) ) static_cast<void (IntTools_EdgeFace::*)( const TopoDS_Edge & ) >(&IntTools_EdgeFace::SetEdge),
             R"#(Sets the edge for intersection)#"  , py::arg("theEdge"))
        .def("Edge",
             (const TopoDS_Edge & (IntTools_EdgeFace::*)() const) static_cast<const TopoDS_Edge & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Edge),
             R"#(Returns the edge)#" )
        .def("SetFace",
             (void (IntTools_EdgeFace::*)( const TopoDS_Face & ) ) static_cast<void (IntTools_EdgeFace::*)( const TopoDS_Face & ) >(&IntTools_EdgeFace::SetFace),
             R"#(Sets the face for intersection)#"  , py::arg("theFace"))
        .def("Face",
             (const TopoDS_Face & (IntTools_EdgeFace::*)() const) static_cast<const TopoDS_Face & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Face),
             R"#(Returns the face)#" )
        .def("SetRange",
             (void (IntTools_EdgeFace::*)( const IntTools_Range & ) ) static_cast<void (IntTools_EdgeFace::*)( const IntTools_Range & ) >(&IntTools_EdgeFace::SetRange),
             R"#(Sets the boundaries for the edge. The algorithm processes edge inside these boundaries.)#"  , py::arg("theRange"))
        .def("SetRange",
             (void (IntTools_EdgeFace::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntTools_EdgeFace::*)( const Standard_Real , const Standard_Real ) >(&IntTools_EdgeFace::SetRange),
             R"#(Sets the boundaries for the edge. The algorithm processes edge inside these boundaries.)#"  , py::arg("theFirst"),  py::arg("theLast"))
        .def("Range",
             (const IntTools_Range & (IntTools_EdgeFace::*)() const) static_cast<const IntTools_Range & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Range),
             R"#(Returns intersection range of the edge)#" )
        .def("SetContext",
             (void (IntTools_EdgeFace::*)( const opencascade::handle<IntTools_Context> & ) ) static_cast<void (IntTools_EdgeFace::*)( const opencascade::handle<IntTools_Context> & ) >(&IntTools_EdgeFace::SetContext),
             R"#(Sets the intersection context)#"  , py::arg("theContext"))
        .def("Context",
             (const opencascade::handle<IntTools_Context> & (IntTools_EdgeFace::*)() const) static_cast<const opencascade::handle<IntTools_Context> & (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::Context),
             R"#(Returns the intersection context)#" )
        .def("SetFuzzyValue",
             (void (IntTools_EdgeFace::*)( const Standard_Real ) ) static_cast<void (IntTools_EdgeFace::*)( const Standard_Real ) >(&IntTools_EdgeFace::SetFuzzyValue),
             R"#(Sets the Fuzzy value)#"  , py::arg("theFuzz"))
        .def("FuzzyValue",
             (Standard_Real (IntTools_EdgeFace::*)() const) static_cast<Standard_Real (IntTools_EdgeFace::*)() const>(&IntTools_EdgeFace::FuzzyValue),
             R"#(Returns the Fuzzy value)#" )
        .def("UseQuickCoincidenceCheck",
             (void (IntTools_EdgeFace::*)( const Standard_Boolean ) ) static_cast<void (IntTools_EdgeFace::*)( const Standard_Boolean ) >(&IntTools_EdgeFace::UseQuickCoincidenceCheck),
             R"#(Sets the flag for quick coincidence check. It is safe to use the quick check for coincidence only if both of the following conditions are met: - The vertices of edge are lying on the face; - The edge does not intersect the boundaries of the face on the given range.)#"  , py::arg("theFlag"))
        .def("IsCoincidenceCheckedQuickly",
             (Standard_Boolean (IntTools_EdgeFace::*)() ) static_cast<Standard_Boolean (IntTools_EdgeFace::*)() >(&IntTools_EdgeFace::IsCoincidenceCheckedQuickly),
             R"#(Returns the flag myQuickCoincidenceCheck)#" )
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


    static_cast<py::class_<IntTools_FClass2d , shared_ptr<IntTools_FClass2d> >>(m.attr("IntTools_FClass2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_FaceFace , shared_ptr<IntTools_FaceFace> >>(m.attr("IntTools_FaceFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_MarkedRangeSet , shared_ptr<IntTools_MarkedRangeSet> >>(m.attr("IntTools_MarkedRangeSet"))
    // constructors
    // custom constructors
    // methods
        .def("Length",
             (Standard_Integer (IntTools_MarkedRangeSet::*)() const) static_cast<Standard_Integer (IntTools_MarkedRangeSet::*)() const>(&IntTools_MarkedRangeSet::Length),
             R"#(Returns number of ranges)#" )
        .def("Length",
             (Standard_Integer (IntTools_MarkedRangeSet::*)() const) static_cast<Standard_Integer (IntTools_MarkedRangeSet::*)() const>(&IntTools_MarkedRangeSet::Length),
             R"#(Returns number of ranges)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_PntOn2Faces , shared_ptr<IntTools_PntOn2Faces> >>(m.attr("IntTools_PntOn2Faces"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_PntOnFace , shared_ptr<IntTools_PntOnFace> >>(m.attr("IntTools_PntOnFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Range , shared_ptr<IntTools_Range> >>(m.attr("IntTools_Range"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_Root , shared_ptr<IntTools_Root> >>(m.attr("IntTools_Root"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_ShrunkRange , shared_ptr<IntTools_ShrunkRange> >>(m.attr("IntTools_ShrunkRange"))
    // constructors
    // custom constructors
    // methods
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
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_SurfaceRangeLocalizeData , shared_ptr<IntTools_SurfaceRangeLocalizeData> >>(m.attr("IntTools_SurfaceRangeLocalizeData"))
    // constructors
    // custom constructors
    // methods
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
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real ) >(&IntTools_SurfaceRangeLocalizeData::SetGridDeflection),
             R"#(Set the grid deflection.)#"  , py::arg("theDeflection"))
        .def("GetGridDeflection",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetGridDeflection),
             R"#(Query the grid deflection.)#" )
        .def("GetRangeUGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeUGrid),
             R"#(Query the range U of the grid of points.)#" )
        .def("SetUParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) >(&IntTools_SurfaceRangeLocalizeData::SetUParam),
             R"#(Set the U parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theUParam"))
        .def("GetUParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeLocalizeData::GetUParam),
             R"#(Query the U parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("GetRangeVGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeVGrid),
             R"#(Query the range V of the grid of points.)#" )
        .def("SetVParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) >(&IntTools_SurfaceRangeLocalizeData::SetVParam),
             R"#(Set the V parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theVParam"))
        .def("GetVParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeLocalizeData::GetVParam),
             R"#(Query the V parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("SetGridPoint",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer , const gp_Pnt & ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer , const gp_Pnt & ) >(&IntTools_SurfaceRangeLocalizeData::SetGridPoint),
             R"#(Set the grid point.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"),  py::arg("thePoint"))
        .def("GetGridPoint",
             (const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer ) const>(&IntTools_SurfaceRangeLocalizeData::GetGridPoint),
             R"#(Set the grid point.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"))
        .def("GetNBUPointsInFrame",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNBUPointsInFrame),
             R"#(Returns the number of grid points on U direction in frame.)#" )
        .def("GetNBVPointsInFrame",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetNBVPointsInFrame),
             R"#(Returns the number of grid points on V direction in frame.)#" )
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
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Real ) >(&IntTools_SurfaceRangeLocalizeData::SetGridDeflection),
             R"#(Set the grid deflection.)#"  , py::arg("theDeflection"))
        .def("GetGridDeflection",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetGridDeflection),
             R"#(Query the grid deflection.)#" )
        .def("GetRangeUGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeUGrid),
             R"#(Query the range U of the grid of points.)#" )
        .def("SetUParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) >(&IntTools_SurfaceRangeLocalizeData::SetUParam),
             R"#(Set the U parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theUParam"))
        .def("GetUParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeLocalizeData::GetUParam),
             R"#(Query the U parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("GetRangeVGrid",
             (Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeLocalizeData::*)() const>(&IntTools_SurfaceRangeLocalizeData::GetRangeVGrid),
             R"#(Query the range V of the grid of points.)#" )
        .def("SetVParam",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Real ) >(&IntTools_SurfaceRangeLocalizeData::SetVParam),
             R"#(Set the V parameter of the grid points at that index.)#"  , py::arg("theIndex"),  py::arg("theVParam"))
        .def("GetVParam",
             (Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeLocalizeData::GetVParam),
             R"#(Query the V parameter of the grid points at that index.)#"  , py::arg("theIndex"))
        .def("SetGridPoint",
             (void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer , const gp_Pnt & ) ) static_cast<void (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer , const gp_Pnt & ) >(&IntTools_SurfaceRangeLocalizeData::SetGridPoint),
             R"#(Set the grid point.)#"  , py::arg("theUIndex"),  py::arg("theVIndex"),  py::arg("thePoint"))
        .def("GetGridPoint",
             (const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const gp_Pnt & (IntTools_SurfaceRangeLocalizeData::*)( const Standard_Integer , const Standard_Integer ) const>(&IntTools_SurfaceRangeLocalizeData::GetGridPoint),
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


    static_cast<py::class_<IntTools_SurfaceRangeSample , shared_ptr<IntTools_SurfaceRangeSample> >>(m.attr("IntTools_SurfaceRangeSample"))
    // constructors
    // custom constructors
    // methods
        .def("SetRanges",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & , const IntTools_CurveRangeSample & ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & , const IntTools_CurveRangeSample & ) >(&IntTools_SurfaceRangeSample::SetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("GetRanges",
             (void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & , IntTools_CurveRangeSample & ) const) static_cast<void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & , IntTools_CurveRangeSample & ) const>(&IntTools_SurfaceRangeSample::GetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("SetIndexes",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer , const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetIndexes),
             R"#(None)#"  , py::arg("theIndexU"),  py::arg("theIndexV"))
        .def("SetSampleRangeU",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) >(&IntTools_SurfaceRangeSample::SetSampleRangeU),
             R"#(None)#"  , py::arg("theRangeSampleU"))
        .def("GetSampleRangeU",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeU),
             R"#(None)#" )
        .def("SetSampleRangeV",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) >(&IntTools_SurfaceRangeSample::SetSampleRangeV),
             R"#(None)#"  , py::arg("theRangeSampleV"))
        .def("GetSampleRangeV",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeV),
             R"#(None)#" )
        .def("SetIndexU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetIndexU),
             R"#(None)#"  , py::arg("theIndexU"))
        .def("GetIndexU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexU),
             R"#(None)#" )
        .def("SetIndexV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetIndexV),
             R"#(None)#"  , py::arg("theIndexV"))
        .def("GetIndexV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexV),
             R"#(None)#" )
        .def("SetDepthU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetDepthU),
             R"#(None)#"  , py::arg("theDepthU"))
        .def("GetDepthU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthU),
             R"#(None)#" )
        .def("SetDepthV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetDepthV),
             R"#(None)#"  , py::arg("theDepthV"))
        .def("GetDepthV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthV),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample & ) const) static_cast<Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample & ) const>(&IntTools_SurfaceRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRangeIndexUDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexUDeeper),
             R"#(None)#"  , py::arg("theNbSampleU"))
        .def("GetRangeIndexVDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexVDeeper),
             R"#(None)#"  , py::arg("theNbSampleV"))
        .def("SetRanges",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & , const IntTools_CurveRangeSample & ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & , const IntTools_CurveRangeSample & ) >(&IntTools_SurfaceRangeSample::SetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("GetRanges",
             (void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & , IntTools_CurveRangeSample & ) const) static_cast<void (IntTools_SurfaceRangeSample::*)( IntTools_CurveRangeSample & , IntTools_CurveRangeSample & ) const>(&IntTools_SurfaceRangeSample::GetRanges),
             R"#(None)#"  , py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("SetIndexes",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer , const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetIndexes),
             R"#(None)#"  , py::arg("theIndexU"),  py::arg("theIndexV"))
        .def("SetSampleRangeU",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) >(&IntTools_SurfaceRangeSample::SetSampleRangeU),
             R"#(None)#"  , py::arg("theRangeSampleU"))
        .def("GetSampleRangeU",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeU),
             R"#(None)#" )
        .def("SetSampleRangeV",
             (void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const IntTools_CurveRangeSample & ) >(&IntTools_SurfaceRangeSample::SetSampleRangeV),
             R"#(None)#"  , py::arg("theRangeSampleV"))
        .def("GetSampleRangeV",
             (const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const) static_cast<const IntTools_CurveRangeSample & (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetSampleRangeV),
             R"#(None)#" )
        .def("SetIndexU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetIndexU),
             R"#(None)#"  , py::arg("theIndexU"))
        .def("GetIndexU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexU),
             R"#(None)#" )
        .def("SetIndexV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetIndexV),
             R"#(None)#"  , py::arg("theIndexV"))
        .def("GetIndexV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetIndexV),
             R"#(None)#" )
        .def("SetDepthU",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetDepthU),
             R"#(None)#"  , py::arg("theDepthU"))
        .def("GetDepthU",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthU),
             R"#(None)#" )
        .def("SetDepthV",
             (void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) >(&IntTools_SurfaceRangeSample::SetDepthV),
             R"#(None)#"  , py::arg("theDepthV"))
        .def("GetDepthV",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)() const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)() const>(&IntTools_SurfaceRangeSample::GetDepthV),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample & ) const) static_cast<Standard_Boolean (IntTools_SurfaceRangeSample::*)( const IntTools_SurfaceRangeSample & ) const>(&IntTools_SurfaceRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRangeIndexUDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexUDeeper),
             R"#(None)#"  , py::arg("theNbSampleU"))
        .def("GetRangeIndexVDeeper",
             (Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntTools_SurfaceRangeSample::*)( const Standard_Integer ) const>(&IntTools_SurfaceRangeSample::GetRangeIndexVDeeper),
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

    static_cast<py::class_<IntTools_SurfaceRangeSampleMapHasher , shared_ptr<IntTools_SurfaceRangeSampleMapHasher> >>(m.attr("IntTools_SurfaceRangeSampleMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const IntTools_SurfaceRangeSample & , Standard_Integer ) ) static_cast<Standard_Integer (*)( const IntTools_SurfaceRangeSample & , Standard_Integer ) >(&IntTools_SurfaceRangeSampleMapHasher::HashCode),
                    R"#(Computes a hash code for the given key, in the range [1, theUpperBound])#"  , py::arg("theKey"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const IntTools_SurfaceRangeSample & , const IntTools_SurfaceRangeSample & ) ) static_cast<Standard_Boolean (*)( const IntTools_SurfaceRangeSample & , const IntTools_SurfaceRangeSample & ) >(&IntTools_SurfaceRangeSampleMapHasher::IsEqual),
                    R"#(Returns True when the two keys are the same. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("S1"),  py::arg("S2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntTools_Tools , shared_ptr<IntTools_Tools>>(m,"IntTools_Tools");

    static_cast<py::class_<IntTools_Tools , shared_ptr<IntTools_Tools> >>(m.attr("IntTools_Tools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_TopolTool ,opencascade::handle<IntTools_TopolTool> , Adaptor3d_TopolTool>>(m.attr("IntTools_TopolTool"))
    // constructors
    // custom constructors
    // methods
        .def("Initialize",
             (void (IntTools_TopolTool::*)() ) static_cast<void (IntTools_TopolTool::*)() >(&IntTools_TopolTool::Initialize),
             R"#(Redefined empty initializer)#" )
        .def("Initialize",
             (void (IntTools_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<void (IntTools_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntTools_TopolTool::Initialize),
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
             (void (IntTools_TopolTool::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt & ) ) static_cast<void (IntTools_TopolTool::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt & ) >(&IntTools_TopolTool::SamplePoint),
             R"#(Returns a 2d point from surface myS and a corresponded 3d point for given index. The index should be from 1 to NbSamples())#"  , py::arg("Index"),  py::arg("P2d"),  py::arg("P3d"))
        .def("SamplePnts",
             (void (IntTools_TopolTool::*)( const Standard_Real , const Standard_Integer , const Standard_Integer ) ) static_cast<void (IntTools_TopolTool::*)( const Standard_Real , const Standard_Integer , const Standard_Integer ) >(&IntTools_TopolTool::SamplePnts),
             R"#(compute the sample-points for the intersections algorithms by adaptive algorithm for BSpline surfaces. For other surfaces algorithm is the same as in method ComputeSamplePoints(), but only fill arrays of U and V sample parameters; theDefl is a requred deflection theNUmin, theNVmin are minimal nb points for U and V.)#"  , py::arg("theDefl"),  py::arg("theNUmin"),  py::arg("theNVmin"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntTools_TopolTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntTools_TopolTool::*)() const>(&IntTools_TopolTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntTools_TopolTool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntTools_WLineTool , shared_ptr<IntTools_WLineTool>>(m,"IntTools_WLineTool");

    static_cast<py::class_<IntTools_WLineTool , shared_ptr<IntTools_WLineTool> >>(m.attr("IntTools_WLineTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntTools_CurveRangeSample , shared_ptr<IntTools_CurveRangeSample> , IntTools_BaseRangeSample>>(m.attr("IntTools_CurveRangeSample"))
    // constructors
    // custom constructors
    // methods
        .def("SetRangeIndex",
             (void (IntTools_CurveRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_CurveRangeSample::*)( const Standard_Integer ) >(&IntTools_CurveRangeSample::SetRangeIndex),
             R"#(None)#"  , py::arg("theIndex"))
        .def("GetRangeIndex",
             (Standard_Integer (IntTools_CurveRangeSample::*)() const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)() const>(&IntTools_CurveRangeSample::GetRangeIndex),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample & ) const) static_cast<Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample & ) const>(&IntTools_CurveRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRangeIndexDeeper",
             (Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer ) const>(&IntTools_CurveRangeSample::GetRangeIndexDeeper),
             R"#(None)#"  , py::arg("theNbSample"))
        .def("SetRangeIndex",
             (void (IntTools_CurveRangeSample::*)( const Standard_Integer ) ) static_cast<void (IntTools_CurveRangeSample::*)( const Standard_Integer ) >(&IntTools_CurveRangeSample::SetRangeIndex),
             R"#(None)#"  , py::arg("theIndex"))
        .def("GetRangeIndex",
             (Standard_Integer (IntTools_CurveRangeSample::*)() const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)() const>(&IntTools_CurveRangeSample::GetRangeIndex),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample & ) const) static_cast<Standard_Boolean (IntTools_CurveRangeSample::*)( const IntTools_CurveRangeSample & ) const>(&IntTools_CurveRangeSample::IsEqual),
             R"#(None)#"  , py::arg("Other"))
        .def("GetRangeIndexDeeper",
             (Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntTools_CurveRangeSample::*)( const Standard_Integer ) const>(&IntTools_CurveRangeSample::GetRangeIndexDeeper),
             R"#(None)#"  , py::arg("theNbSample"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntTools_Root.hxx
// ./opencascade/IntTools_ListIteratorOfListOfCurveRangeSample.hxx
// ./opencascade/IntTools_WLineTool.hxx
// ./opencascade/IntTools_ListOfBox.hxx
// ./opencascade/IntTools_SequenceOfRoots.hxx
// ./opencascade/IntTools_ListIteratorOfListOfBox.hxx
// ./opencascade/IntTools_Array1OfRoots.hxx
// ./opencascade/IntTools_SequenceOfCurves.hxx
// ./opencascade/IntTools_ListIteratorOfListOfSurfaceRangeSample.hxx
// ./opencascade/IntTools_SequenceOfRanges.hxx
// ./opencascade/IntTools_Context.hxx
// ./opencascade/IntTools_MapIteratorOfMapOfSurfaceSample.hxx
// ./opencascade/IntTools_CommonPrt.hxx
// ./opencascade/IntTools_ShrunkRange.hxx
// ./opencascade/IntTools_EdgeFace.hxx
// ./opencascade/IntTools_CArray1OfReal.hxx
// ./opencascade/IntTools_Array1OfRange.hxx
// ./opencascade/IntTools_FaceFace.hxx
// ./opencascade/IntTools_PntOn2Faces.hxx
// ./opencascade/IntTools_FClass2d.hxx
// ./opencascade/IntTools_BeanFaceIntersector.hxx
// ./opencascade/IntTools_SurfaceRangeLocalizeData.hxx
// ./opencascade/IntTools_PntOnFace.hxx
// ./opencascade/IntTools_MarkedRangeSet.hxx
// ./opencascade/IntTools_SequenceOfPntOn2Faces.hxx
// ./opencascade/IntTools.hxx
// ./opencascade/IntTools_CurveRangeLocalizeData.hxx
// ./opencascade/IntTools_SurfaceRangeSampleMapHasher.hxx
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
// ./opencascade/IntTools_MapIteratorOfMapOfCurveSample.hxx
// ./opencascade/IntTools_BaseRangeSample.hxx
// ./opencascade/IntTools_CurveRangeSampleMapHasher.hxx
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
// ./opencascade/IntTools_EdgeEdge.hxx
// ./opencascade/IntTools_DataMapIteratorOfDataMapOfCurveSampleBox.hxx
// ./opencascade/IntTools_CurveRangeSample.hxx
// ./opencascade/IntTools_MapOfCurveSample.hxx
// ./opencascade/IntTools_CArray1OfInteger.hxx
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
// ./opencascade/IntTools_Tools.hxx
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
// ./opencascade/IntTools_TopolTool.hxx
// ./opencascade/IntTools_Range.hxx
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
// ./opencascade/IntTools_SurfaceRangeSample.hxx
// ./opencascade/IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox.hxx
// ./opencascade/IntTools_Curve.hxx
// ./opencascade/IntTools_SequenceOfCommonPrts.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<Bnd_Box>(m,"IntTools_ListOfBox");
    register_template_NCollection_Sequence<IntTools_Root>(m,"IntTools_SequenceOfRoots");
    register_template_NCollection_Array1<IntTools_Root>(m,"IntTools_Array1OfRoots");
    register_template_NCollection_Sequence<IntTools_Curve>(m,"IntTools_SequenceOfCurves");
    register_template_NCollection_Sequence<IntTools_Range>(m,"IntTools_SequenceOfRanges");
    register_template_NCollection_Array1<IntTools_Range>(m,"IntTools_Array1OfRange");
    register_template_NCollection_Sequence<IntTools_PntOn2Faces>(m,"IntTools_SequenceOfPntOn2Faces");
    register_template_NCollection_DataMap<IntTools_SurfaceRangeSample, Bnd_Box, IntTools_SurfaceRangeSampleMapHasher>(m,"IntTools_DataMapOfSurfaceSampleBox");
    register_template_NCollection_List<IntTools_CurveRangeSample>(m,"IntTools_ListOfCurveRangeSample");
    register_template_NCollection_Map<IntTools_CurveRangeSample, IntTools_CurveRangeSampleMapHasher>(m,"IntTools_MapOfCurveSample");
    register_template_NCollection_DataMap<IntTools_CurveRangeSample, Bnd_Box, IntTools_CurveRangeSampleMapHasher>(m,"IntTools_DataMapOfCurveSampleBox");
    register_template_NCollection_Map<IntTools_SurfaceRangeSample, IntTools_SurfaceRangeSampleMapHasher>(m,"IntTools_MapOfSurfaceSample");
    register_template_NCollection_List<IntTools_SurfaceRangeSample>(m,"IntTools_ListOfSurfaceRangeSample");
    register_template_NCollection_Sequence<IntTools_CommonPrt>(m,"IntTools_SequenceOfCommonPrts");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
