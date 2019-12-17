
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IntPolyh_Triangle.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_Triangle.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_Triangle.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <Adaptor3d_HSurface.hxx>

// module includes
#include <IntPolyh_Array.hxx>
#include <IntPolyh_ArrayOfEdges.hxx>
#include <IntPolyh_ArrayOfPointNormal.hxx>
#include <IntPolyh_ArrayOfPoints.hxx>
#include <IntPolyh_ArrayOfSectionLines.hxx>
#include <IntPolyh_ArrayOfTangentZones.hxx>
#include <IntPolyh_ArrayOfTriangles.hxx>
#include <IntPolyh_Couple.hxx>
#include <IntPolyh_CoupleMapHasher.hxx>
#include <IntPolyh_Edge.hxx>
#include <IntPolyh_Intersection.hxx>
#include <IntPolyh_ListOfCouples.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_PMaillageAffinage.hxx>
#include <IntPolyh_Point.hxx>
#include <IntPolyh_SectionLine.hxx>
#include <IntPolyh_SeqOfStartPoints.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_Tools.hxx>
#include <IntPolyh_Triangle.hxx>

// template related includes
// ./opencascade/IntPolyh_ListOfCouples.hxx
#include "NCollection.hxx"
// ./opencascade/IntPolyh_SeqOfStartPoints.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntPolyh(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntPolyh"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntPolyh_MaillageAffinage ,std::unique_ptr<IntPolyh_MaillageAffinage>  >>(m.attr("IntPolyh_MaillageAffinage"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer,const Standard_Integer,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("S1"),  py::arg("NbSU1"),  py::arg("NbSV1"),  py::arg("S2"),  py::arg("NbSU2"),  py::arg("NbSV2"),  py::arg("PRINT") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer >()  , py::arg("S1"),  py::arg("S2"),  py::arg("PRINT") )
        .def("MakeSampling",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&IntPolyh_MaillageAffinage::MakeSampling),
             R"#(Makes the sampling of the surface - Fills the arrays with the parametric values of the sampling points (triangulation nodes).)#"  , py::arg("SurfID"),  py::arg("theUPars"),  py::arg("theVPars"))
        .def("FillArrayOfPnt",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) >(&IntPolyh_MaillageAffinage::FillArrayOfPnt),
             R"#(Computes points on one surface and fills an array of points; standard (default) method)#"  , py::arg("SurfID"))
        .def("FillArrayOfPnt",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&IntPolyh_MaillageAffinage::FillArrayOfPnt),
             R"#(isShiftFwd flag is added. The purpose is to define shift of points along normal to the surface in this point. The shift length represents maximal deflection of triangulation. The direction (forward or reversed regarding to normal direction) is defined by isShiftFwd flag. Compute points on one surface and fill an array of points; advanced method)#"  , py::arg("SurfID"),  py::arg("isShiftFwd"))
        .def("FillArrayOfPnt",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real *  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real *  ) >(&IntPolyh_MaillageAffinage::FillArrayOfPnt),
             R"#(Compute points on one surface and fill an array of points; If given, <theDeflTol> is the deflection tolerance of the given sampling. standard (default) method)#"  , py::arg("SurfID"),  py::arg("Upars"),  py::arg("Vpars"),  py::arg("theDeflTol")=static_cast<const Standard_Real *>(NULL))
        .def("FillArrayOfPnt",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Boolean ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real *  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Boolean ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real *  ) >(&IntPolyh_MaillageAffinage::FillArrayOfPnt),
             R"#(isShiftFwd flag is added. The purpose is to define shift of points along normal to the surface in this point. The shift length represents maximal deflection of triangulation. The direction (forward or reversed regarding to normal direction) is defined by isShiftFwd flag. Compute points on one surface and fill an array of points; If given, <theDeflTol> is the deflection tolerance of the given sampling. advanced method)#"  , py::arg("SurfID"),  py::arg("isShiftFwd"),  py::arg("Upars"),  py::arg("Vpars"),  py::arg("theDeflTol")=static_cast<const Standard_Real *>(NULL))
        .def("FillArrayOfPnt",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Boolean ,   const IntPolyh_Array<IntPolyh_PointNormal> & ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Boolean ,   const IntPolyh_Array<IntPolyh_PointNormal> & ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real  ) >(&IntPolyh_MaillageAffinage::FillArrayOfPnt),
             R"#(Fills the array of points for the surface taking into account the shift)#"  , py::arg("SurfID"),  py::arg("isShiftFwd"),  py::arg("thePoints"),  py::arg("theUPars"),  py::arg("theVPars"),  py::arg("theDeflTol"))
        .def("CommonBox",
             (void (IntPolyh_MaillageAffinage::*)() ) static_cast<void (IntPolyh_MaillageAffinage::*)() >(&IntPolyh_MaillageAffinage::CommonBox),
             R"#(Looks for the common box of the surfaces and marks the points of the surfaces inside that common box for possible intersection)#" )
        .def("CommonBox",
             (void (IntPolyh_MaillageAffinage::*)( const Bnd_Box & ,  const Bnd_Box & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Bnd_Box & ,  const Bnd_Box & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&IntPolyh_MaillageAffinage::CommonBox),
             R"#(Compute the common box witch is the intersection of the two bounding boxes, and mark the points of the two surfaces that are inside.)#"  , py::arg("B1"),  py::arg("B2"),  py::arg("xMin"),  py::arg("yMin"),  py::arg("zMin"),  py::arg("xMax"),  py::arg("yMax"),  py::arg("zMax"))
        .def("FillArrayOfEdges",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) >(&IntPolyh_MaillageAffinage::FillArrayOfEdges),
             R"#(Compute edges from the array of points)#"  , py::arg("SurfID"))
        .def("FillArrayOfTriangles",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) >(&IntPolyh_MaillageAffinage::FillArrayOfTriangles),
             R"#(Compute triangles from the array of points, and -- mark the triangles that use marked points by the CommonBox function.)#"  , py::arg("SurfID"))
        .def("CommonPartRefinement",
             (void (IntPolyh_MaillageAffinage::*)() ) static_cast<void (IntPolyh_MaillageAffinage::*)() >(&IntPolyh_MaillageAffinage::CommonPartRefinement),
             R"#(Refine systematicaly all marked triangles of both surfaces)#" )
        .def("LocalSurfaceRefinement",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) >(&IntPolyh_MaillageAffinage::LocalSurfaceRefinement),
             R"#(Refine systematicaly all marked triangles of ONE surface)#"  , py::arg("SurfId"))
        .def("ComputeDeflections",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) >(&IntPolyh_MaillageAffinage::ComputeDeflections),
             R"#(Compute deflection for all triangles of one surface,and sort min and max of deflections)#"  , py::arg("SurfID"))
        .def("TrianglesDeflectionsRefinementBSB",
             (void (IntPolyh_MaillageAffinage::*)() ) static_cast<void (IntPolyh_MaillageAffinage::*)() >(&IntPolyh_MaillageAffinage::TrianglesDeflectionsRefinementBSB),
             R"#(Refine both surfaces using BoundSortBox as -- rejection. The criterions used to refine a -- triangle are: The deflection The size of the -- bounding boxes (one surface may be very small compared to the other))#" )
        .def("TriContact",
             (Standard_Integer (IntPolyh_MaillageAffinage::*)( const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  Standard_Real &  ) const) static_cast<Standard_Integer (IntPolyh_MaillageAffinage::*)( const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  Standard_Real &  ) const>(&IntPolyh_MaillageAffinage::TriContact),
             R"#(This fonction Check if two triangles are in contact or no, return 1 if yes, return 0 if no.)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("Q1"),  py::arg("Q2"),  py::arg("Q3"),  py::arg("Angle"))
        .def("TriangleEdgeContact",
             (Standard_Integer (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Integer ,  const IntPolyh_Triangle & ,  const IntPolyh_Triangle & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  IntPolyh_StartPoint & ,  IntPolyh_StartPoint &  ) const) static_cast<Standard_Integer (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Integer ,  const IntPolyh_Triangle & ,  const IntPolyh_Triangle & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  const IntPolyh_Point & ,  IntPolyh_StartPoint & ,  IntPolyh_StartPoint &  ) const>(&IntPolyh_MaillageAffinage::TriangleEdgeContact),
             R"#(None)#"  , py::arg("TriSurfID"),  py::arg("EdgeIndice"),  py::arg("Tri1"),  py::arg("Tri2"),  py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("C1"),  py::arg("C2"),  py::arg("C3"),  py::arg("Pe1"),  py::arg("Pe2"),  py::arg("E"),  py::arg("N"),  py::arg("SP1"),  py::arg("SP2"))
        .def("StartingPointsResearch",
             (Standard_Integer (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Integer ,  IntPolyh_StartPoint & ,  IntPolyh_StartPoint &  ) const) static_cast<Standard_Integer (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Integer ,  IntPolyh_StartPoint & ,  IntPolyh_StartPoint &  ) const>(&IntPolyh_MaillageAffinage::StartingPointsResearch),
             R"#(From two triangles compute intersection points. If I found more than two intersection points that's mean that those triangle are coplanar)#"  , py::arg("T1"),  py::arg("T2"),  py::arg("SP1"),  py::arg("SP2"))
        .def("NextStartingPointsResearch",
             (Standard_Integer (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Integer ,  const IntPolyh_StartPoint & ,  IntPolyh_StartPoint &  ) const) static_cast<Standard_Integer (IntPolyh_MaillageAffinage::*)( const Standard_Integer ,  const Standard_Integer ,  const IntPolyh_StartPoint & ,  IntPolyh_StartPoint &  ) const>(&IntPolyh_MaillageAffinage::NextStartingPointsResearch),
             R"#(from two triangles and an intersection point I seach the other point (if it exist). This function is used by StartPointChain)#"  , py::arg("T1"),  py::arg("T2"),  py::arg("SPInit"),  py::arg("SPNext"))
        .def("TriangleCompare",
             (Standard_Integer (IntPolyh_MaillageAffinage::*)() ) static_cast<Standard_Integer (IntPolyh_MaillageAffinage::*)() >(&IntPolyh_MaillageAffinage::TriangleCompare),
             R"#(Analyse each couple of triangles from the two -- array of triangles, to see if they are in contact, and compute the incidence. Then put couples in contact in the array of couples)#" )
        .def("StartPointsChain",
             (Standard_Integer (IntPolyh_MaillageAffinage::*)( IntPolyh_Array<IntPolyh_SectionLine> & ,  IntPolyh_Array<IntPolyh_StartPoint> &  ) ) static_cast<Standard_Integer (IntPolyh_MaillageAffinage::*)( IntPolyh_Array<IntPolyh_SectionLine> & ,  IntPolyh_Array<IntPolyh_StartPoint> &  ) >(&IntPolyh_MaillageAffinage::StartPointsChain),
             R"#(Loop on the array of couples. Compute StartPoints. Try to chain the StartPoints into SectionLines or put the point in the ArrayOfTangentZones if chaining it, is not possible.)#"  , py::arg("TSectionLines"),  py::arg("TTangentZones"))
        .def("GetNextChainStartPoint",
             (Standard_Integer (IntPolyh_MaillageAffinage::*)( const IntPolyh_StartPoint & ,  IntPolyh_StartPoint & ,  IntPolyh_SectionLine & ,  IntPolyh_Array<IntPolyh_StartPoint> & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (IntPolyh_MaillageAffinage::*)( const IntPolyh_StartPoint & ,  IntPolyh_StartPoint & ,  IntPolyh_SectionLine & ,  IntPolyh_Array<IntPolyh_StartPoint> & ,  const Standard_Boolean  ) >(&IntPolyh_MaillageAffinage::GetNextChainStartPoint),
             R"#(Mainly used by StartPointsChain(), this function try to compute the next StartPoint.)#"  , py::arg("SPInit"),  py::arg("SPNext"),  py::arg("MySectionLine"),  py::arg("TTangentZones"),  py::arg("Prepend")=static_cast<const Standard_Boolean>(Standard_False))
        .def("GetArrayOfPoints",
             (const IntPolyh_ArrayOfPoints & (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const) static_cast<const IntPolyh_ArrayOfPoints & (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const>(&IntPolyh_MaillageAffinage::GetArrayOfPoints),
             R"#(None)#"  , py::arg("SurfID"))
        .def("GetArrayOfEdges",
             (const IntPolyh_ArrayOfEdges & (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const) static_cast<const IntPolyh_ArrayOfEdges & (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const>(&IntPolyh_MaillageAffinage::GetArrayOfEdges),
             R"#(None)#"  , py::arg("SurfID"))
        .def("GetArrayOfTriangles",
             (const IntPolyh_ArrayOfTriangles & (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const) static_cast<const IntPolyh_ArrayOfTriangles & (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const>(&IntPolyh_MaillageAffinage::GetArrayOfTriangles),
             R"#(None)#"  , py::arg("SurfID"))
        .def("GetBox",
             (Bnd_Box (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const) static_cast<Bnd_Box (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const>(&IntPolyh_MaillageAffinage::GetBox),
             R"#(None)#"  , py::arg("SurfID"))
        .def("GetCouples",
             (IntPolyh_ListOfCouples & (IntPolyh_MaillageAffinage::*)() ) static_cast<IntPolyh_ListOfCouples & (IntPolyh_MaillageAffinage::*)() >(&IntPolyh_MaillageAffinage::GetCouples),
             R"#(This method returns list of couples of contact triangles.)#" )
        .def("SetEnlargeZone",
             (void (IntPolyh_MaillageAffinage::*)( const Standard_Boolean  ) ) static_cast<void (IntPolyh_MaillageAffinage::*)( const Standard_Boolean  ) >(&IntPolyh_MaillageAffinage::SetEnlargeZone),
             R"#(None)#"  , py::arg("EnlargeZone"))
        .def("GetEnlargeZone",
             (Standard_Boolean (IntPolyh_MaillageAffinage::*)() const) static_cast<Standard_Boolean (IntPolyh_MaillageAffinage::*)() const>(&IntPolyh_MaillageAffinage::GetEnlargeZone),
             R"#(None)#" )
        .def("GetMinDeflection",
             (Standard_Real (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const>(&IntPolyh_MaillageAffinage::GetMinDeflection),
             R"#(returns FlecheMin)#"  , py::arg("SurfID"))
        .def("GetMaxDeflection",
             (Standard_Real (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IntPolyh_MaillageAffinage::*)( const Standard_Integer  ) const>(&IntPolyh_MaillageAffinage::GetMaxDeflection),
             R"#(returns FlecheMax)#"  , py::arg("SurfID"))
;


    static_cast<py::class_<IntPolyh_StartPoint ,std::unique_ptr<IntPolyh_StartPoint>  >>(m.attr("IntPolyh_StartPoint"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Integer >()  , py::arg("xx"),  py::arg("yy"),  py::arg("zz"),  py::arg("uu1"),  py::arg("vv1"),  py::arg("uu2"),  py::arg("vv2"),  py::arg("T1"),  py::arg("E1"),  py::arg("LAM1"),  py::arg("T2"),  py::arg("E2"),  py::arg("LAM2"),  py::arg("List") )
        .def("X",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::X),
             R"#(None)#" )
        .def("Y",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::Y),
             R"#(None)#" )
        .def("Z",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::Z),
             R"#(None)#" )
        .def("U1",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::U1),
             R"#(None)#" )
        .def("V1",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::V1),
             R"#(None)#" )
        .def("U2",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::U2),
             R"#(None)#" )
        .def("V2",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::V2),
             R"#(None)#" )
        .def("T1",
             (Standard_Integer (IntPolyh_StartPoint::*)() const) static_cast<Standard_Integer (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::T1),
             R"#(None)#" )
        .def("E1",
             (Standard_Integer (IntPolyh_StartPoint::*)() const) static_cast<Standard_Integer (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::E1),
             R"#(None)#" )
        .def("Lambda1",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::Lambda1),
             R"#(None)#" )
        .def("T2",
             (Standard_Integer (IntPolyh_StartPoint::*)() const) static_cast<Standard_Integer (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::T2),
             R"#(None)#" )
        .def("E2",
             (Standard_Integer (IntPolyh_StartPoint::*)() const) static_cast<Standard_Integer (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::E2),
             R"#(None)#" )
        .def("Lambda2",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::Lambda2),
             R"#(None)#" )
        .def("GetAngle",
             (Standard_Real (IntPolyh_StartPoint::*)() const) static_cast<Standard_Real (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::GetAngle),
             R"#(None)#" )
        .def("ChainList",
             (Standard_Integer (IntPolyh_StartPoint::*)() const) static_cast<Standard_Integer (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::ChainList),
             R"#(None)#" )
        .def("GetEdgePoints",
             (Standard_Integer (IntPolyh_StartPoint::*)( const IntPolyh_Triangle & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<Standard_Integer (IntPolyh_StartPoint::*)( const IntPolyh_Triangle & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&IntPolyh_StartPoint::GetEdgePoints),
             R"#(None)#"  , py::arg("Triangle"),  py::arg("FirstEdgePoint"),  py::arg("SecondEdgePoint"),  py::arg("LastPoint"))
        .def("SetXYZ",
             (void (IntPolyh_StartPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntPolyh_StartPoint::SetXYZ),
             R"#(None)#"  , py::arg("XX"),  py::arg("YY"),  py::arg("ZZ"))
        .def("SetUV1",
             (void (IntPolyh_StartPoint::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Real ,  const Standard_Real  ) >(&IntPolyh_StartPoint::SetUV1),
             R"#(None)#"  , py::arg("UU1"),  py::arg("VV1"))
        .def("SetUV2",
             (void (IntPolyh_StartPoint::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Real ,  const Standard_Real  ) >(&IntPolyh_StartPoint::SetUV2),
             R"#(None)#"  , py::arg("UU2"),  py::arg("VV2"))
        .def("SetEdge1",
             (void (IntPolyh_StartPoint::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Integer  ) >(&IntPolyh_StartPoint::SetEdge1),
             R"#(None)#"  , py::arg("IE1"))
        .def("SetLambda1",
             (void (IntPolyh_StartPoint::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Real  ) >(&IntPolyh_StartPoint::SetLambda1),
             R"#(None)#"  , py::arg("LAM1"))
        .def("SetEdge2",
             (void (IntPolyh_StartPoint::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Integer  ) >(&IntPolyh_StartPoint::SetEdge2),
             R"#(None)#"  , py::arg("IE2"))
        .def("SetLambda2",
             (void (IntPolyh_StartPoint::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Real  ) >(&IntPolyh_StartPoint::SetLambda2),
             R"#(None)#"  , py::arg("LAM2"))
        .def("SetCoupleValue",
             (void (IntPolyh_StartPoint::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_StartPoint::SetCoupleValue),
             R"#(None)#"  , py::arg("IT1"),  py::arg("IT2"))
        .def("SetAngle",
             (void (IntPolyh_StartPoint::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Real  ) >(&IntPolyh_StartPoint::SetAngle),
             R"#(None)#"  , py::arg("ang"))
        .def("SetChainList",
             (void (IntPolyh_StartPoint::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Integer  ) >(&IntPolyh_StartPoint::SetChainList),
             R"#(None)#"  , py::arg("ChList"))
        .def("CheckSameSP",
             (Standard_Integer (IntPolyh_StartPoint::*)( const IntPolyh_StartPoint &  ) const) static_cast<Standard_Integer (IntPolyh_StartPoint::*)( const IntPolyh_StartPoint &  ) const>(&IntPolyh_StartPoint::CheckSameSP),
             R"#(None)#"  , py::arg("SP"))
        .def("Dump",
             (void (IntPolyh_StartPoint::*)() const) static_cast<void (IntPolyh_StartPoint::*)() const>(&IntPolyh_StartPoint::Dump),
             R"#(None)#" )
        .def("Dump",
             (void (IntPolyh_StartPoint::*)( const Standard_Integer  ) const) static_cast<void (IntPolyh_StartPoint::*)( const Standard_Integer  ) const>(&IntPolyh_StartPoint::Dump),
             R"#(None)#"  , py::arg("i"))
;


    static_cast<py::class_<IntPolyh_Intersection ,std::unique_ptr<IntPolyh_Intersection>  >>(m.attr("IntPolyh_Intersection"))
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("theS1"),  py::arg("theS2") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer,const Standard_Integer,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Integer,const Standard_Integer >()  , py::arg("theS1"),  py::arg("theNbSU1"),  py::arg("theNbSV1"),  py::arg("theS2"),  py::arg("theNbSU2"),  py::arg("theNbSV2") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &,const opencascade::handle<Adaptor3d_HSurface> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("theS1"),  py::arg("theUPars1"),  py::arg("theVPars1"),  py::arg("theS2"),  py::arg("theUPars2"),  py::arg("theVPars2") )
        .def("IsDone",
             (Standard_Boolean (IntPolyh_Intersection::*)() const) static_cast<Standard_Boolean (IntPolyh_Intersection::*)() const>(&IntPolyh_Intersection::IsDone),
             R"#(Returns state of the operation)#" )
        .def("NbSectionLines",
             (Standard_Integer (IntPolyh_Intersection::*)() const) static_cast<Standard_Integer (IntPolyh_Intersection::*)() const>(&IntPolyh_Intersection::NbSectionLines),
             R"#(Returns the number of section lines)#" )
        .def("NbPointsInLine",
             (Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer  ) const>(&IntPolyh_Intersection::NbPointsInLine),
             R"#(Returns the number of points in the given line)#"  , py::arg("IndexLine"))
        .def("NbTangentZones",
             (Standard_Integer (IntPolyh_Intersection::*)() const) static_cast<Standard_Integer (IntPolyh_Intersection::*)() const>(&IntPolyh_Intersection::NbTangentZones),
             R"#(None)#" )
        .def("NbPointsInTangentZone",
             (Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPolyh_Intersection::*)( const Standard_Integer  ) const>(&IntPolyh_Intersection::NbPointsInTangentZone),
             R"#(Returns number of points in tangent zone)#"  , py::arg(""))
        .def("GetLinePoint",
             (void (IntPolyh_Intersection::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPolyh_Intersection::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntPolyh_Intersection::GetLinePoint),
             R"#(Gets the parameters of the point in section line)#"  , py::arg("IndexLine"),  py::arg("IndexPoint"),  py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("incidence"))
        .def("GetTangentZonePoint",
             (void (IntPolyh_Intersection::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntPolyh_Intersection::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntPolyh_Intersection::GetTangentZonePoint),
             R"#(Gets the parameters of the point in tangent zone)#"  , py::arg("IndexLine"),  py::arg("IndexPoint"),  py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"))
;


    static_cast<py::class_<IntPolyh_Point ,std::unique_ptr<IntPolyh_Point>  >>(m.attr("IntPolyh_Point"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("u"),  py::arg("v") )
        .def("X",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::X),
             R"#(Returns X coordinate of the 3D point)#" )
        .def("Y",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::Y),
             R"#(Returns Y coordinate of the 3D point)#" )
        .def("Z",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::Z),
             R"#(Returns the Z coordinate of the 3D point)#" )
        .def("U",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::U),
             R"#(Returns the U coordinate of the 2D point)#" )
        .def("V",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::V),
             R"#(Returns the V coordinate of the 2D point)#" )
        .def("PartOfCommon",
             (Standard_Integer (IntPolyh_Point::*)() const) static_cast<Standard_Integer (IntPolyh_Point::*)() const>(&IntPolyh_Point::PartOfCommon),
             R"#(Returns 0 if the point is not common with the other surface)#" )
        .def("Equal",
             (void (IntPolyh_Point::*)( const IntPolyh_Point &  ) ) static_cast<void (IntPolyh_Point::*)( const IntPolyh_Point &  ) >(&IntPolyh_Point::Equal),
             R"#(Assignment operator)#"  , py::arg("Pt"))
        .def("Set",
             (void (IntPolyh_Point::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&IntPolyh_Point::Set),
             R"#(Sets the point)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("u"),  py::arg("v"),  py::arg("II")=static_cast<const Standard_Integer>(1))
        .def("SetX",
             (void (IntPolyh_Point::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real  ) >(&IntPolyh_Point::SetX),
             R"#(Sets the X coordinate for the 3D point)#"  , py::arg("x"))
        .def("SetY",
             (void (IntPolyh_Point::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real  ) >(&IntPolyh_Point::SetY),
             R"#(Sets the Y coordinate for the 3D point)#"  , py::arg("y"))
        .def("SetZ",
             (void (IntPolyh_Point::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real  ) >(&IntPolyh_Point::SetZ),
             R"#(Sets the Z coordinate for the 3D point)#"  , py::arg("z"))
        .def("SetU",
             (void (IntPolyh_Point::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real  ) >(&IntPolyh_Point::SetU),
             R"#(Sets the U coordinate for the 2D point)#"  , py::arg("u"))
        .def("SetV",
             (void (IntPolyh_Point::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Real  ) >(&IntPolyh_Point::SetV),
             R"#(Sets the V coordinate for the 2D point)#"  , py::arg("v"))
        .def("SetPartOfCommon",
             (void (IntPolyh_Point::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Integer  ) >(&IntPolyh_Point::SetPartOfCommon),
             R"#(Sets the part of common)#"  , py::arg("ii"))
        .def("Middle",
             (void (IntPolyh_Point::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPolyh_Point & ,  const IntPolyh_Point &  ) ) static_cast<void (IntPolyh_Point::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const IntPolyh_Point & ,  const IntPolyh_Point &  ) >(&IntPolyh_Point::Middle),
             R"#(Creates middle point from P1 and P2 and stores it to this)#"  , py::arg("MySurface"),  py::arg("P1"),  py::arg("P2"))
        .def("Add",
             (IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const>(&IntPolyh_Point::Add),
             R"#(Addition)#"  , py::arg("P1"))
        .def("Sub",
             (IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const>(&IntPolyh_Point::Sub),
             R"#(Subtraction)#"  , py::arg("P1"))
        .def("Divide",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const>(&IntPolyh_Point::Divide),
             R"#(Division)#"  , py::arg("rr"))
        .def("Multiplication",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const>(&IntPolyh_Point::Multiplication),
             R"#(Multiplication)#"  , py::arg("rr"))
        .def("SquareModulus",
             (Standard_Real (IntPolyh_Point::*)() const) static_cast<Standard_Real (IntPolyh_Point::*)() const>(&IntPolyh_Point::SquareModulus),
             R"#(Square modulus)#" )
        .def("SquareDistance",
             (Standard_Real (IntPolyh_Point::*)( const IntPolyh_Point &  ) const) static_cast<Standard_Real (IntPolyh_Point::*)( const IntPolyh_Point &  ) const>(&IntPolyh_Point::SquareDistance),
             R"#(Square distance to the other point)#"  , py::arg("P2"))
        .def("Dot",
             (Standard_Real (IntPolyh_Point::*)( const IntPolyh_Point &  ) const) static_cast<Standard_Real (IntPolyh_Point::*)( const IntPolyh_Point &  ) const>(&IntPolyh_Point::Dot),
             R"#(Dot)#"  , py::arg("P2"))
        .def("Cross",
             (void (IntPolyh_Point::*)( const IntPolyh_Point & ,  const IntPolyh_Point &  ) ) static_cast<void (IntPolyh_Point::*)( const IntPolyh_Point & ,  const IntPolyh_Point &  ) >(&IntPolyh_Point::Cross),
             R"#(Cross)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Dump",
             (void (IntPolyh_Point::*)() const) static_cast<void (IntPolyh_Point::*)() const>(&IntPolyh_Point::Dump),
             R"#(Dump)#" )
        .def("Dump",
             (void (IntPolyh_Point::*)( const Standard_Integer  ) const) static_cast<void (IntPolyh_Point::*)( const Standard_Integer  ) const>(&IntPolyh_Point::Dump),
             R"#(Dump)#"  , py::arg("i"))
        .def("SetDegenerated",
             (void (IntPolyh_Point::*)( const Standard_Boolean  ) ) static_cast<void (IntPolyh_Point::*)( const Standard_Boolean  ) >(&IntPolyh_Point::SetDegenerated),
             R"#(Sets the degenerated flag)#"  , py::arg("theFlag"))
        .def("Degenerated",
             (Standard_Boolean (IntPolyh_Point::*)() const) static_cast<Standard_Boolean (IntPolyh_Point::*)() const>(&IntPolyh_Point::Degenerated),
             R"#(Returns the degenerated flag)#" )
        .def("__add__",
             (IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const>(&IntPolyh_Point::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("P1"))
        .def("__sub__",
             (IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const IntPolyh_Point &  ) const>(&IntPolyh_Point::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("P1"))
        .def("__truediv__",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const>(&IntPolyh_Point::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("rr"))
        .def("__mul__",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const>(&IntPolyh_Point::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("rr"))
        .def("__rmul__",
             (IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const) static_cast<IntPolyh_Point (IntPolyh_Point::*)( const Standard_Real  ) const>(&IntPolyh_Point::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("rr"))
;


    static_cast<py::class_<IntPolyh_SectionLine ,std::unique_ptr<IntPolyh_SectionLine>  >>(m.attr("IntPolyh_SectionLine"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("nn") )
        .def("Init",
             (void (IntPolyh_SectionLine::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_SectionLine::*)( const Standard_Integer  ) >(&IntPolyh_SectionLine::Init),
             R"#(None)#"  , py::arg("nn"))
        .def("Value",
             (const IntPolyh_StartPoint & (IntPolyh_SectionLine::*)( const Standard_Integer  ) const) static_cast<const IntPolyh_StartPoint & (IntPolyh_SectionLine::*)( const Standard_Integer  ) const>(&IntPolyh_SectionLine::Value),
             R"#(None)#"  , py::arg("nn"))
        .def("ChangeValue",
             (IntPolyh_StartPoint & (IntPolyh_SectionLine::*)( const Standard_Integer  ) ) static_cast<IntPolyh_StartPoint & (IntPolyh_SectionLine::*)( const Standard_Integer  ) >(&IntPolyh_SectionLine::ChangeValue),
             R"#(None)#"  , py::arg("nn"))
        .def("Copy",
             (IntPolyh_SectionLine & (IntPolyh_SectionLine::*)( const IntPolyh_SectionLine &  ) ) static_cast<IntPolyh_SectionLine & (IntPolyh_SectionLine::*)( const IntPolyh_SectionLine &  ) >(&IntPolyh_SectionLine::Copy),
             R"#(None)#"  , py::arg("Other"))
        .def("GetN",
             (Standard_Integer (IntPolyh_SectionLine::*)() const) static_cast<Standard_Integer (IntPolyh_SectionLine::*)() const>(&IntPolyh_SectionLine::GetN),
             R"#(None)#" )
        .def("NbStartPoints",
             (Standard_Integer (IntPolyh_SectionLine::*)() const) static_cast<Standard_Integer (IntPolyh_SectionLine::*)() const>(&IntPolyh_SectionLine::NbStartPoints),
             R"#(None)#" )
        .def("IncrementNbStartPoints",
             (void (IntPolyh_SectionLine::*)() ) static_cast<void (IntPolyh_SectionLine::*)() >(&IntPolyh_SectionLine::IncrementNbStartPoints),
             R"#(None)#" )
        .def("Destroy",
             (void (IntPolyh_SectionLine::*)() ) static_cast<void (IntPolyh_SectionLine::*)() >(&IntPolyh_SectionLine::Destroy),
             R"#(None)#" )
        .def("Dump",
             (void (IntPolyh_SectionLine::*)() const) static_cast<void (IntPolyh_SectionLine::*)() const>(&IntPolyh_SectionLine::Dump),
             R"#(None)#" )
        .def("Prepend",
             (void (IntPolyh_SectionLine::*)( const IntPolyh_StartPoint &  ) ) static_cast<void (IntPolyh_SectionLine::*)( const IntPolyh_StartPoint &  ) >(&IntPolyh_SectionLine::Prepend),
             R"#(None)#"  , py::arg("SP"))
;


    static_cast<py::class_<IntPolyh_Couple ,std::unique_ptr<IntPolyh_Couple>  >>(m.attr("IntPolyh_Couple"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real >()  , py::arg("theTriangle1"),  py::arg("theTriangle2"),  py::arg("theAngle")=static_cast<const Standard_Real>(- 2.0) )
        .def("FirstValue",
             (Standard_Integer (IntPolyh_Couple::*)() const) static_cast<Standard_Integer (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::FirstValue),
             R"#(Returns the first index)#" )
        .def("SecondValue",
             (Standard_Integer (IntPolyh_Couple::*)() const) static_cast<Standard_Integer (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::SecondValue),
             R"#(Returns the second index)#" )
        .def("IsAnalyzed",
             (Standard_Boolean (IntPolyh_Couple::*)() const) static_cast<Standard_Boolean (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::IsAnalyzed),
             R"#(Returns TRUE if the couple has been analyzed)#" )
        .def("Angle",
             (Standard_Real (IntPolyh_Couple::*)() const) static_cast<Standard_Real (IntPolyh_Couple::*)() const>(&IntPolyh_Couple::Angle),
             R"#(Returns the angle)#" )
        .def("SetCoupleValue",
             (void (IntPolyh_Couple::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Couple::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_Couple::SetCoupleValue),
             R"#(Sets the triangles)#"  , py::arg("theInd1"),  py::arg("theInd2"))
        .def("SetAnalyzed",
             (void (IntPolyh_Couple::*)( const Standard_Boolean  ) ) static_cast<void (IntPolyh_Couple::*)( const Standard_Boolean  ) >(&IntPolyh_Couple::SetAnalyzed),
             R"#(Sets the analyzed flag)#"  , py::arg("theAnalyzed"))
        .def("SetAngle",
             (void (IntPolyh_Couple::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_Couple::*)( const Standard_Real  ) >(&IntPolyh_Couple::SetAngle),
             R"#(Sets the angle)#"  , py::arg("theAngle"))
        .def("IsEqual",
             (Standard_Boolean (IntPolyh_Couple::*)( const IntPolyh_Couple &  ) const) static_cast<Standard_Boolean (IntPolyh_Couple::*)( const IntPolyh_Couple &  ) const>(&IntPolyh_Couple::IsEqual),
             R"#(Returns true if the Couple is equal to <theOther>)#"  , py::arg("theOther"))
        .def("HashCode",
             (Standard_Integer (IntPolyh_Couple::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPolyh_Couple::*)( const Standard_Integer  ) const>(&IntPolyh_Couple::HashCode),
             R"#(Returns hash code)#"  , py::arg("theUpper"))
        .def("Dump",
             (void (IntPolyh_Couple::*)( const Standard_Integer  ) const) static_cast<void (IntPolyh_Couple::*)( const Standard_Integer  ) const>(&IntPolyh_Couple::Dump),
             R"#(None)#"  , py::arg("v"))
;


    static_cast<py::class_<IntPolyh_Edge ,std::unique_ptr<IntPolyh_Edge>  >>(m.attr("IntPolyh_Edge"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("theTriangle1"),  py::arg("theTriangle2") )
        .def("FirstPoint",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::FirstPoint),
             R"#(Returns the first point)#" )
        .def("SecondPoint",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::SecondPoint),
             R"#(Returns the second point)#" )
        .def("FirstTriangle",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::FirstTriangle),
             R"#(Returns the first triangle)#" )
        .def("SecondTriangle",
             (Standard_Integer (IntPolyh_Edge::*)() const) static_cast<Standard_Integer (IntPolyh_Edge::*)() const>(&IntPolyh_Edge::SecondTriangle),
             R"#(Returns the second triangle)#" )
        .def("SetFirstPoint",
             (void (IntPolyh_Edge::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer  ) >(&IntPolyh_Edge::SetFirstPoint),
             R"#(Sets the first point)#"  , py::arg("thePoint"))
        .def("SetSecondPoint",
             (void (IntPolyh_Edge::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer  ) >(&IntPolyh_Edge::SetSecondPoint),
             R"#(Sets the second point)#"  , py::arg("thePoint"))
        .def("SetFirstTriangle",
             (void (IntPolyh_Edge::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer  ) >(&IntPolyh_Edge::SetFirstTriangle),
             R"#(Sets the first triangle)#"  , py::arg("theTriangle"))
        .def("SetSecondTriangle",
             (void (IntPolyh_Edge::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer  ) >(&IntPolyh_Edge::SetSecondTriangle),
             R"#(Sets the second triangle)#"  , py::arg("theTriangle"))
        .def("Dump",
             (void (IntPolyh_Edge::*)( const Standard_Integer  ) const) static_cast<void (IntPolyh_Edge::*)( const Standard_Integer  ) const>(&IntPolyh_Edge::Dump),
             R"#(None)#"  , py::arg("v"))
;


    static_cast<py::class_<IntPolyh_Triangle ,std::unique_ptr<IntPolyh_Triangle>  >>(m.attr("IntPolyh_Triangle"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("thePoint3") )
        .def("FirstPoint",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::FirstPoint),
             R"#(Returns the first point)#" )
        .def("SecondPoint",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::SecondPoint),
             R"#(Returns the second point)#" )
        .def("ThirdPoint",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::ThirdPoint),
             R"#(Returns the third point)#" )
        .def("FirstEdge",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::FirstEdge),
             R"#(Returns the first edge)#" )
        .def("FirstEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::FirstEdgeOrientation),
             R"#(Returns the orientation of the first edge)#" )
        .def("SecondEdge",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::SecondEdge),
             R"#(Returns the second edge)#" )
        .def("SecondEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::SecondEdgeOrientation),
             R"#(Returns the orientation of the second edge)#" )
        .def("ThirdEdge",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::ThirdEdge),
             R"#(Returns the third edge)#" )
        .def("ThirdEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)() const) static_cast<Standard_Integer (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::ThirdEdgeOrientation),
             R"#(Returns the orientation of the third edge)#" )
        .def("Deflection",
             (Standard_Real (IntPolyh_Triangle::*)() const) static_cast<Standard_Real (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::Deflection),
             R"#(Returns the deflection of the triangle)#" )
        .def("IsIntersectionPossible",
             (Standard_Boolean (IntPolyh_Triangle::*)() const) static_cast<Standard_Boolean (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::IsIntersectionPossible),
             R"#(Returns possibility of the intersection)#" )
        .def("HasIntersection",
             (Standard_Boolean (IntPolyh_Triangle::*)() const) static_cast<Standard_Boolean (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::HasIntersection),
             R"#(Returns true if the triangle has interfered the other triangle)#" )
        .def("IsDegenerated",
             (Standard_Boolean (IntPolyh_Triangle::*)() const) static_cast<Standard_Boolean (IntPolyh_Triangle::*)() const>(&IntPolyh_Triangle::IsDegenerated),
             R"#(Returns the Degenerated flag)#" )
        .def("SetFirstPoint",
             (void (IntPolyh_Triangle::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer  ) >(&IntPolyh_Triangle::SetFirstPoint),
             R"#(Sets the first point)#"  , py::arg("thePoint"))
        .def("SetSecondPoint",
             (void (IntPolyh_Triangle::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer  ) >(&IntPolyh_Triangle::SetSecondPoint),
             R"#(Sets the second point)#"  , py::arg("thePoint"))
        .def("SetThirdPoint",
             (void (IntPolyh_Triangle::*)( const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer  ) >(&IntPolyh_Triangle::SetThirdPoint),
             R"#(Sets the third point)#"  , py::arg("thePoint"))
        .def("SetFirstEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_Triangle::SetFirstEdge),
             R"#(Sets the first edge)#"  , py::arg("theEdge"),  py::arg("theEdgeOrientation"))
        .def("SetSecondEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_Triangle::SetSecondEdge),
             R"#(Sets the second edge)#"  , py::arg("theEdge"),  py::arg("theEdgeOrientation"))
        .def("SetThirdEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_Triangle::SetThirdEdge),
             R"#(Sets the third edge)#"  , py::arg("theEdge"),  py::arg("theEdgeOrientation"))
        .def("SetDeflection",
             (void (IntPolyh_Triangle::*)( const Standard_Real  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Real  ) >(&IntPolyh_Triangle::SetDeflection),
             R"#(Sets the deflection)#"  , py::arg("theDeflection"))
        .def("SetIntersectionPossible",
             (void (IntPolyh_Triangle::*)( const Standard_Boolean  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Boolean  ) >(&IntPolyh_Triangle::SetIntersectionPossible),
             R"#(Sets the flag of possibility of intersection)#"  , py::arg("theIP"))
        .def("SetIntersection",
             (void (IntPolyh_Triangle::*)( const Standard_Boolean  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Boolean  ) >(&IntPolyh_Triangle::SetIntersection),
             R"#(Sets the flag of intersection)#"  , py::arg("theInt"))
        .def("SetDegenerated",
             (void (IntPolyh_Triangle::*)( const Standard_Boolean  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Boolean  ) >(&IntPolyh_Triangle::SetDegenerated),
             R"#(Sets the degenerated flag)#"  , py::arg("theDegFlag"))
        .def("GetEdgeNumber",
             (Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer  ) const>(&IntPolyh_Triangle::GetEdgeNumber),
             R"#(Gets the edge number by the index)#"  , py::arg("theEdgeIndex"))
        .def("SetEdge",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_Triangle::SetEdge),
             R"#(Sets the edge by the index)#"  , py::arg("theEdgeIndex"),  py::arg("theEdgeNumber"))
        .def("GetEdgeOrientation",
             (Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer  ) const>(&IntPolyh_Triangle::GetEdgeOrientation),
             R"#(Gets the edges orientation by the index)#"  , py::arg("theEdgeIndex"))
        .def("SetEdgeOrientation",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_Triangle::SetEdgeOrientation),
             R"#(Sets the edges orientation by the index)#"  , py::arg("theEdgeIndex"),  py::arg("theEdgeOrientation"))
        .def("ComputeDeflection",
             (Standard_Real (IntPolyh_Triangle::*)( const opencascade::handle<Adaptor3d_HSurface> & ,   const IntPolyh_Array<IntPolyh_Point> &  ) ) static_cast<Standard_Real (IntPolyh_Triangle::*)( const opencascade::handle<Adaptor3d_HSurface> & ,   const IntPolyh_Array<IntPolyh_Point> &  ) >(&IntPolyh_Triangle::ComputeDeflection),
             R"#(Computes the deflection for the triangle)#"  , py::arg("theSurface"),  py::arg("thePoints"))
        .def("GetNextTriangle",
             (Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer ,   const IntPolyh_Array<IntPolyh_Edge> &  ) const) static_cast<Standard_Integer (IntPolyh_Triangle::*)( const Standard_Integer ,  const Standard_Integer ,   const IntPolyh_Array<IntPolyh_Edge> &  ) const>(&IntPolyh_Triangle::GetNextTriangle),
             R"#(Gets the adjacent triangle)#"  , py::arg("theTriangle"),  py::arg("theEdgeNum"),  py::arg("TEdges"))
        .def("MiddleRefinement",
             (void (IntPolyh_Triangle::*)( const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  IntPolyh_Array<IntPolyh_Point> & ,  IntPolyh_Array<IntPolyh_Triangle> & ,  IntPolyh_Array<IntPolyh_Edge> &  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  IntPolyh_Array<IntPolyh_Point> & ,  IntPolyh_Array<IntPolyh_Triangle> & ,  IntPolyh_Array<IntPolyh_Edge> &  ) >(&IntPolyh_Triangle::MiddleRefinement),
             R"#(Splits the triangle on two to decrease its deflection)#"  , py::arg("theTriangleNumber"),  py::arg("theSurface"),  py::arg("TPoints"),  py::arg("TTriangles"),  py::arg("TEdges"))
        .def("MultipleMiddleRefinement",
             (void (IntPolyh_Triangle::*)( const Standard_Real ,  const Bnd_Box & ,  const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  IntPolyh_Array<IntPolyh_Point> & ,  IntPolyh_Array<IntPolyh_Triangle> & ,  IntPolyh_Array<IntPolyh_Edge> &  ) ) static_cast<void (IntPolyh_Triangle::*)( const Standard_Real ,  const Bnd_Box & ,  const Standard_Integer ,  const opencascade::handle<Adaptor3d_HSurface> & ,  IntPolyh_Array<IntPolyh_Point> & ,  IntPolyh_Array<IntPolyh_Triangle> & ,  IntPolyh_Array<IntPolyh_Edge> &  ) >(&IntPolyh_Triangle::MultipleMiddleRefinement),
             R"#(Splits the current triangle and new triangles until the refinement criterion is not achieved)#"  , py::arg("theRefineCriterion"),  py::arg("theBox"),  py::arg("theTriangleNumber"),  py::arg("theSurface"),  py::arg("TPoints"),  py::arg("TTriangles"),  py::arg("TEdges"))
        .def("LinkEdges2Triangle",
             (void (IntPolyh_Triangle::*)(  const IntPolyh_Array<IntPolyh_Edge> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)(  const IntPolyh_Array<IntPolyh_Edge> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&IntPolyh_Triangle::LinkEdges2Triangle),
             R"#(Links edges to triangle)#"  , py::arg("TEdges"),  py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("theEdge3"))
        .def("SetEdgeAndOrientation",
             (void (IntPolyh_Triangle::*)( const IntPolyh_Edge & ,  const Standard_Integer  ) ) static_cast<void (IntPolyh_Triangle::*)( const IntPolyh_Edge & ,  const Standard_Integer  ) >(&IntPolyh_Triangle::SetEdgeAndOrientation),
             R"#(Sets the appropriate edge and orientation for the triangle.)#"  , py::arg("theEdge"),  py::arg("theEdgeIndex"))
        .def("BoundingBox",
             (const Bnd_Box & (IntPolyh_Triangle::*)(  const IntPolyh_Array<IntPolyh_Point> &  ) ) static_cast<const Bnd_Box & (IntPolyh_Triangle::*)(  const IntPolyh_Array<IntPolyh_Point> &  ) >(&IntPolyh_Triangle::BoundingBox),
             R"#(Returns the bounding box of the triangle.)#"  , py::arg("thePoints"))
        .def("Dump",
             (void (IntPolyh_Triangle::*)( const Standard_Integer  ) const) static_cast<void (IntPolyh_Triangle::*)( const Standard_Integer  ) const>(&IntPolyh_Triangle::Dump),
             R"#(Dumps the contents of the triangle.)#"  , py::arg("v"))
;

// functions
// ./opencascade/IntPolyh_ArrayOfTangentZones.hxx
// ./opencascade/IntPolyh_ArrayOfPointNormal.hxx
// ./opencascade/IntPolyh_ArrayOfTriangles.hxx
// ./opencascade/IntPolyh_MaillageAffinage.hxx
// ./opencascade/IntPolyh_Couple.hxx
// ./opencascade/IntPolyh_ArrayOfSectionLines.hxx
// ./opencascade/IntPolyh_ListOfCouples.hxx
// ./opencascade/IntPolyh_PMaillageAffinage.hxx
// ./opencascade/IntPolyh_StartPoint.hxx
// ./opencascade/IntPolyh_CoupleMapHasher.hxx
// ./opencascade/IntPolyh_SeqOfStartPoints.hxx
// ./opencascade/IntPolyh_Intersection.hxx
// ./opencascade/IntPolyh_Edge.hxx
// ./opencascade/IntPolyh_Point.hxx
// ./opencascade/IntPolyh_Triangle.hxx
// ./opencascade/IntPolyh_Array.hxx
// ./opencascade/IntPolyh_SectionLine.hxx
// ./opencascade/IntPolyh_Tools.hxx
// ./opencascade/IntPolyh_ArrayOfEdges.hxx
// ./opencascade/IntPolyh_ArrayOfPoints.hxx

// operators

// register typdefs
// ./opencascade/IntPolyh_ArrayOfTangentZones.hxx
// ./opencascade/IntPolyh_ArrayOfPointNormal.hxx
// ./opencascade/IntPolyh_ArrayOfTriangles.hxx
// ./opencascade/IntPolyh_MaillageAffinage.hxx
// ./opencascade/IntPolyh_Couple.hxx
// ./opencascade/IntPolyh_ArrayOfSectionLines.hxx
// ./opencascade/IntPolyh_ListOfCouples.hxx
    register_template_NCollection_List<IntPolyh_Couple>(m,"IntPolyh_ListOfCouples");  
// ./opencascade/IntPolyh_PMaillageAffinage.hxx
// ./opencascade/IntPolyh_StartPoint.hxx
// ./opencascade/IntPolyh_CoupleMapHasher.hxx
// ./opencascade/IntPolyh_SeqOfStartPoints.hxx
    register_template_NCollection_Sequence<IntPolyh_StartPoint>(m,"IntPolyh_SeqOfStartPoints");  
// ./opencascade/IntPolyh_Intersection.hxx
// ./opencascade/IntPolyh_Edge.hxx
// ./opencascade/IntPolyh_Point.hxx
// ./opencascade/IntPolyh_Triangle.hxx
// ./opencascade/IntPolyh_Array.hxx
// ./opencascade/IntPolyh_SectionLine.hxx
// ./opencascade/IntPolyh_Tools.hxx
// ./opencascade/IntPolyh_ArrayOfEdges.hxx
// ./opencascade/IntPolyh_ArrayOfPoints.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
