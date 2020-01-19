
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Elips.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <gp_Ax1.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <DsgPrs_RadiusPresentation.hxx>
#include <DsgPrs_DiameterPresentation.hxx>
#include <DsgPrs_FilletRadiusPresentation.hxx>
#include <DsgPrs_AnglePresentation.hxx>
#include <DsgPrs_Chamf2dPresentation.hxx>
#include <DsgPrs_ParalPresentation.hxx>
#include <DsgPrs_PerpenPresentation.hxx>
#include <DsgPrs_SymmetricPresentation.hxx>
#include <DsgPrs_MidPointPresentation.hxx>
#include <DsgPrs_TangentPresentation.hxx>
#include <DsgPrs_ConcentricPresentation.hxx>
#include <DsgPrs_FixPresentation.hxx>
#include <DsgPrs_IdenticPresentation.hxx>
#include <DsgPrs_EqualRadiusPresentation.hxx>
#include <DsgPrs_EqualDistancePresentation.hxx>
#include <DsgPrs_SymbPresentation.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>
#include <DsgPrs_OffsetPresentation.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax2.hxx>
#include <gp_Elips.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Prs3d_Presentation.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Circ.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax1.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_LineAspect.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Plane.hxx>
#include <gp_Dir.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Ax2.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Plane.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>

// module includes
#include <DsgPrs.hxx>
#include <DsgPrs_AnglePresentation.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <DsgPrs_Chamf2dPresentation.hxx>
#include <DsgPrs_ConcentricPresentation.hxx>
#include <DsgPrs_DatumPrs.hxx>
#include <DsgPrs_DiameterPresentation.hxx>
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include <DsgPrs_EqualDistancePresentation.hxx>
#include <DsgPrs_EqualRadiusPresentation.hxx>
#include <DsgPrs_FilletRadiusPresentation.hxx>
#include <DsgPrs_FixPresentation.hxx>
#include <DsgPrs_IdenticPresentation.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <DsgPrs_MidPointPresentation.hxx>
#include <DsgPrs_OffsetPresentation.hxx>
#include <DsgPrs_ParalPresentation.hxx>
#include <DsgPrs_PerpenPresentation.hxx>
#include <DsgPrs_RadiusPresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>
#include <DsgPrs_SymbPresentation.hxx>
#include <DsgPrs_SymmetricPresentation.hxx>
#include <DsgPrs_TangentPresentation.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_DsgPrs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("DsgPrs"));


//Python trampoline classes

// classes

    register_default_constructor<DsgPrs , shared_ptr<DsgPrs>>(m,"DsgPrs");

    static_cast<py::class_<DsgPrs , shared_ptr<DsgPrs>  >>(m.attr("DsgPrs"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ComputeSymbol_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_DimensionAspect> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const DsgPrs_ArrowSide ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_DimensionAspect> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const DsgPrs_ArrowSide ,  const Standard_Boolean  ) >(&DsgPrs::ComputeSymbol),
                    R"#(draws symbols ((one or two) arrows,(one or two)points at thebeginning and at the end of the dimension)#"  , py::arg("aPresentation"),  py::arg("anAspect"),  py::arg("pt1"),  py::arg("pt2"),  py::arg("dir1"),  py::arg("dir2"),  py::arg("ArrowSide"),  py::arg("drawFromCenter")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("ComputePlanarFacesLengthPresentation_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const gp_Pln & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Dir &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const gp_Pln & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Dir &  ) >(&DsgPrs::ComputePlanarFacesLengthPresentation),
                    R"#(None)#"  , py::arg("FirstArrowLength"),  py::arg("SecondArrowLength"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("DirAttach"),  py::arg("OffsetPoint"),  py::arg("PlaneOfFaces"),  py::arg("EndOfArrow1"),  py::arg("EndOfArrow2"),  py::arg("DirOfArrow1"))
        .def_static("ComputeRadiusLine_s",
                    (void (*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  gp_Pnt & ,  gp_Pnt &  ) ) static_cast<void (*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  gp_Pnt & ,  gp_Pnt &  ) >(&DsgPrs::ComputeRadiusLine),
                    R"#(None)#"  , py::arg("aCenter"),  py::arg("anEndOfArrow"),  py::arg("aPosition"),  py::arg("drawFromCenter"),  py::arg("aRadLineOrign"),  py::arg("aRadLineEnd"))
        .def_static("DistanceFromApex_s",
                    (Standard_Real (*)( const gp_Elips & ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const gp_Elips & ,  const gp_Pnt & ,  const Standard_Real  ) >(&DsgPrs::DistanceFromApex),
                    R"#(computes length of ellipse arc in parametric units)#"  , py::arg("elips"),  py::arg("Apex"),  py::arg("par"))
    // static methods using call by reference i.s.o. return
        .def_static("ComputeCurvilinearFacesLengthPresentation_s",
                    []( const Standard_Real FirstArrowLength,const Standard_Real SecondArrowLength,const opencascade::handle<Geom_Surface> & SecondSurf,const gp_Pnt & AttachmentPoint1,const gp_Pnt & AttachmentPoint2,const gp_Dir & DirAttach,gp_Pnt & EndOfArrow2,gp_Dir & DirOfArrow1,opencascade::handle<Geom_Curve> & VCurve,opencascade::handle<Geom_Curve> & UCurve ){ Standard_Real  FirstU; Standard_Real  deltaU; Standard_Real  FirstV; Standard_Real  deltaV; DsgPrs::ComputeCurvilinearFacesLengthPresentation(FirstArrowLength,SecondArrowLength,SecondSurf,AttachmentPoint1,AttachmentPoint2,DirAttach,EndOfArrow2,DirOfArrow1,VCurve,UCurve,FirstU,deltaU,FirstV,deltaV); return std::make_tuple(FirstU,deltaU,FirstV,deltaV); },
                    R"#(None)#"  , py::arg("FirstArrowLength"),  py::arg("SecondArrowLength"),  py::arg("SecondSurf"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("DirAttach"),  py::arg("EndOfArrow2"),  py::arg("DirOfArrow1"),  py::arg("VCurve"),  py::arg("UCurve"))
        .def_static("ComputeFacesAnglePresentation_s",
                    []( const Standard_Real ArrowLength,const Standard_Real Value,const gp_Pnt & CenterPoint,const gp_Pnt & AttachmentPoint1,const gp_Pnt & AttachmentPoint2,const gp_Dir & dir1,const gp_Dir & dir2,const gp_Dir & axisdir,const Standard_Boolean isPlane,const gp_Ax1 & AxisOfSurf,const gp_Pnt & OffsetPoint,gp_Circ & AngleCirc,gp_Pnt & EndOfArrow1,gp_Pnt & EndOfArrow2,gp_Dir & DirOfArrow1,gp_Dir & DirOfArrow2,gp_Pnt & ProjAttachPoint2,gp_Circ & AttachCirc ){ Standard_Real  FirstParAngleCirc; Standard_Real  LastParAngleCirc; Standard_Real  FirstParAttachCirc; Standard_Real  LastParAttachCirc; DsgPrs::ComputeFacesAnglePresentation(ArrowLength,Value,CenterPoint,AttachmentPoint1,AttachmentPoint2,dir1,dir2,axisdir,isPlane,AxisOfSurf,OffsetPoint,AngleCirc,FirstParAngleCirc,LastParAngleCirc,EndOfArrow1,EndOfArrow2,DirOfArrow1,DirOfArrow2,ProjAttachPoint2,AttachCirc,FirstParAttachCirc,LastParAttachCirc); return std::make_tuple(FirstParAngleCirc,LastParAngleCirc,FirstParAttachCirc,LastParAttachCirc); },
                    R"#(None)#"  , py::arg("ArrowLength"),  py::arg("Value"),  py::arg("CenterPoint"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("dir1"),  py::arg("dir2"),  py::arg("axisdir"),  py::arg("isPlane"),  py::arg("AxisOfSurf"),  py::arg("OffsetPoint"),  py::arg("AngleCirc"),  py::arg("EndOfArrow1"),  py::arg("EndOfArrow2"),  py::arg("DirOfArrow1"),  py::arg("DirOfArrow2"),  py::arg("ProjAttachPoint2"),  py::arg("AttachCirc"))
        .def_static("ComputeFilletRadiusPresentation_s",
                    []( const Standard_Real ArrowLength,const Standard_Real Value,const gp_Pnt & Position,const gp_Dir & NormalDir,const gp_Pnt & FirstPoint,const gp_Pnt & SecondPoint,const gp_Pnt & Center,const gp_Pnt & BasePnt,const Standard_Boolean drawRevers,gp_Circ & FilletCirc,gp_Pnt & EndOfArrow,gp_Dir & DirOfArrow,gp_Pnt & DrawPosition ){ Standard_Boolean  SpecCase; Standard_Real  FirstParCirc; Standard_Real  LastParCirc; DsgPrs::ComputeFilletRadiusPresentation(ArrowLength,Value,Position,NormalDir,FirstPoint,SecondPoint,Center,BasePnt,drawRevers,SpecCase,FilletCirc,FirstParCirc,LastParCirc,EndOfArrow,DirOfArrow,DrawPosition); return std::make_tuple(SpecCase,FirstParCirc,LastParCirc); },
                    R"#(computes Geometry for fillet radius presentation; special case flag SpecCase equal Standard_True if radius of fillet circle = 0 or if anngle between Vec1(Center, FirstPoint) and Vec2(Center,SecondPoint) equal 0 or PI)#"  , py::arg("ArrowLength"),  py::arg("Value"),  py::arg("Position"),  py::arg("NormalDir"),  py::arg("FirstPoint"),  py::arg("SecondPoint"),  py::arg("Center"),  py::arg("BasePnt"),  py::arg("drawRevers"),  py::arg("FilletCirc"),  py::arg("EndOfArrow"),  py::arg("DirOfArrow"),  py::arg("DrawPosition"))
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_AnglePresentation , shared_ptr<DsgPrs_AnglePresentation>>(m,"DsgPrs_AnglePresentation");

    static_cast<py::class_<DsgPrs_AnglePresentation , shared_ptr<DsgPrs_AnglePresentation>  >>(m.attr("DsgPrs_AnglePresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Circ & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Circ & ,  const gp_Circ & ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Circ & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Circ & ,  const gp_Circ & ,  const Standard_Real  ) >(&DsgPrs_AnglePresentation::Add),
                    R"#(Draws the presenation of the full angle of a cone. VminCircle - a circle at V parameter = Vmin VmaxCircle - a circle at V parameter = Vmax aCircle - a circle at V parameter from projection of aPosition to axis of the cone)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aVal"),  py::arg("aText"),  py::arg("aCircle"),  py::arg("aPosition"),  py::arg("Apex"),  py::arg("VminCircle"),  py::arg("VmaxCircle"),  py::arg("aArrowSize"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_AnglePresentation::Add),
                    R"#(Draws the representation of the angle defined by dir1 and dir2, centered on CenterPoint, using the offset point OffsetPoint. Lines are drawn to points AttachmentPoint1 and AttachmentPoint2)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("CenterPoint"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("dir1"),  py::arg("dir2"),  py::arg("OffsetPoint"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_AnglePresentation::Add),
                    R"#(Same as above, but <thevalstring> contains conversion in Session units....)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("thevalstring"),  py::arg("CenterPoint"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("dir1"),  py::arg("dir2"),  py::arg("OffsetPoint"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_AnglePresentation::Add),
                    R"#(Same as above, may add one or two Arrows according to <ArrowSide> value)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("thevalstring"),  py::arg("CenterPoint"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("dir1"),  py::arg("dir2"),  py::arg("OffsetPoint"),  py::arg("ArrowSide"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_AnglePresentation::Add),
                    R"#(Same as above, but axisdir contains the axis direction useful for Revol that can be opened with 180 degrees)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("thevalstring"),  py::arg("CenterPoint"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("dir1"),  py::arg("dir2"),  py::arg("axisdir"),  py::arg("OffsetPoint"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Boolean ,  const gp_Ax1 & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Dir & ,  const Standard_Boolean ,  const gp_Ax1 & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_AnglePresentation::Add),
                    R"#(Same as above,may add one or two Arrows according to <ArrowSide> value)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("thevalstring"),  py::arg("CenterPoint"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("dir1"),  py::arg("dir2"),  py::arg("axisdir"),  py::arg("isPlane"),  py::arg("AxisOfSurf"),  py::arg("OffsetPoint"),  py::arg("ArrowSide"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Ax1 & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Ax1 & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_AnglePresentation::Add),
                    R"#(simple representation of a poor lonesome angle dimension Draw a line from <theCenter> to <AttachmentPoint1>, then operates a rotation around the perpmay add one or two Arrows according to <ArrowSide> value. The attributes (color,arrowsize,...) are driven by the Drawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("theCenter"),  py::arg("AttachmentPoint1"),  py::arg("theAxe"),  py::arg("ArrowSide"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_Chamf2dPresentation , shared_ptr<DsgPrs_Chamf2dPresentation>>(m,"DsgPrs_Chamf2dPresentation");

    static_cast<py::class_<DsgPrs_Chamf2dPresentation , shared_ptr<DsgPrs_Chamf2dPresentation>  >>(m.attr("DsgPrs_Chamf2dPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const TCollection_ExtendedString &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const TCollection_ExtendedString &  ) >(&DsgPrs_Chamf2dPresentation::Add),
                    R"#(Defines the display of elements showing 2D chamfers on shapes. These include the text aText, the point of attachment, aPntAttach and the end point aPntEnd. These arguments are added to the presentation object aPresentation. Their display attributes are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aPntAttach"),  py::arg("aPntEnd"),  py::arg("aText"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const TCollection_ExtendedString & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const TCollection_ExtendedString & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_Chamf2dPresentation::Add),
                    R"#(Defines the display of texts, symbols and icons used to present 2D chamfers. These include the text aText, the point of attachment, aPntAttach and the end point aPntEnd. These arguments are added to the presentation object aPresentation. Their display attributes are defined by the attribute manager aDrawer. The arrow at the point of attachment has a display defined by a value of the enumeration DsgPrs_Arrowside.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aPntAttach"),  py::arg("aPntEnd"),  py::arg("aText"),  py::arg("ArrowSide"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_ConcentricPresentation , shared_ptr<DsgPrs_ConcentricPresentation>>(m,"DsgPrs_ConcentricPresentation");

    static_cast<py::class_<DsgPrs_ConcentricPresentation , shared_ptr<DsgPrs_ConcentricPresentation>  >>(m.attr("DsgPrs_ConcentricPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const Standard_Real ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const Standard_Real ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_ConcentricPresentation::Add),
                    R"#(Defines the display of elements showing relations of concentricity between shapes. These include the center aCenter, the radius aRadius, the direction aNorm and the point aPoint. These arguments are added to the presentation object aPresentation. Their display attributes are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aCenter"),  py::arg("aRadius"),  py::arg("aNorm"),  py::arg("aPoint"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_DatumPrs , shared_ptr<DsgPrs_DatumPrs>>(m,"DsgPrs_DatumPrs");

    static_cast<py::class_<DsgPrs_DatumPrs , shared_ptr<DsgPrs_DatumPrs>  , Prs3d_Root >>(m.attr("DsgPrs_DatumPrs"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const gp_Ax2 & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const gp_Ax2 & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&DsgPrs_DatumPrs::Add),
                    R"#(Draw XYZ axes at specified location with attributes defined by the attribute manager theDrawer: - Prs3d_DatumAspect defines arrow, line and lenght trihedron axis parameters, - Prs3d_TextAspect defines displayed text. The thihedron origin and axis directions are defined by theDatum coordinate system. DsgPrs_XYZAxisPresentation framework is used to create graphical primitives for each axis. Axes are marked with "X", "Y", "Z" text.)#"  , py::arg("thePresentation"),  py::arg("theDatum"),  py::arg("theDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_DiameterPresentation , shared_ptr<DsgPrs_DiameterPresentation>>(m,"DsgPrs_DiameterPresentation");

    static_cast<py::class_<DsgPrs_DiameterPresentation , shared_ptr<DsgPrs_DiameterPresentation>  >>(m.attr("DsgPrs_DiameterPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Circ & ,  const DsgPrs_ArrowSide ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Circ & ,  const DsgPrs_ArrowSide ,  const Standard_Boolean  ) >(&DsgPrs_DiameterPresentation::Add),
                    R"#(Draws the diameter of the circle aCircle displayed in the presentation aPresentation and with attributes defined by the attribute manager aDrawer. The point AttachmentPoint defines the point of contact between the circle and the diameter presentation. The value of the enumeration ArrowSide controls whether arrows will be displayed at either or both ends of the length. The text aText labels the diameter.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint"),  py::arg("aCircle"),  py::arg("ArrowSide"),  py::arg("IsDiamSymbol"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const DsgPrs_ArrowSide ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const DsgPrs_ArrowSide ,  const Standard_Boolean  ) >(&DsgPrs_DiameterPresentation::Add),
                    R"#(Draws the diameter of the arc anArc displayed in the presentation aPresentation and with attributes defined by the attribute manager aDrawer. The point AttachmentPoint defines the point of contact between the arc and the diameter presentation. The value of the enumeration ArrowSide controls whether arrows will be displayed at either or both ends of the length. The parameters uFirst and uLast define the first and last points of the arc. The text aText labels the diameter.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint"),  py::arg("aCircle"),  py::arg("uFirst"),  py::arg("uLast"),  py::arg("ArrowSide"),  py::arg("IsDiamSymbol"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_EllipseRadiusPresentation , shared_ptr<DsgPrs_EllipseRadiusPresentation>>(m,"DsgPrs_EllipseRadiusPresentation");

    static_cast<py::class_<DsgPrs_EllipseRadiusPresentation , shared_ptr<DsgPrs_EllipseRadiusPresentation>  >>(m.attr("DsgPrs_EllipseRadiusPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_EllipseRadiusPresentation::Add),
                    R"#(draws a Radius (Major or Minor) representation for whole ellipse case)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("aText"),  py::arg("AttachmentPoint"),  py::arg("anEndOfArrow"),  py::arg("aCenter"),  py::arg("IsMaxRadius"),  py::arg("ArrowSide"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_EllipseRadiusPresentation::Add),
                    R"#(draws a Radius (Major or Minor) representation for arc of an ellipse case)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("aText"),  py::arg("anEllipse"),  py::arg("AttachmentPoint"),  py::arg("anEndOfArrow"),  py::arg("aCenter"),  py::arg("uFirst"),  py::arg("IsInDomain"),  py::arg("IsMaxRadius"),  py::arg("ArrowSide"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const opencascade::handle<Geom_OffsetCurve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TCollection_ExtendedString & ,  const opencascade::handle<Geom_OffsetCurve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_EllipseRadiusPresentation::Add),
                    R"#(draws a Radius (Major or Minor) representation for arc of an offset curve from ellipse)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theval"),  py::arg("aText"),  py::arg("aCurve"),  py::arg("AttachmentPoint"),  py::arg("anEndOfArrow"),  py::arg("aCenter"),  py::arg("uFirst"),  py::arg("IsInDomain"),  py::arg("IsMaxRadius"),  py::arg("ArrowSide"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_EqualDistancePresentation , shared_ptr<DsgPrs_EqualDistancePresentation>>(m,"DsgPrs_EqualDistancePresentation");

    static_cast<py::class_<DsgPrs_EqualDistancePresentation , shared_ptr<DsgPrs_EqualDistancePresentation>  >>(m.attr("DsgPrs_EqualDistancePresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const opencascade::handle<Geom_Plane> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const opencascade::handle<Geom_Plane> &  ) >(&DsgPrs_EqualDistancePresentation::Add),
                    R"#(Adds the points Point1, Point2, Point3 Point4, and the plane Plane to the presentation object aPresentation. The display attributes of these elements is defined by the attribute manager aDrawer. The distance is the length of a projection from the shape to the plane. These distances are used to compare two shapes by this vector alone.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("Point3"),  py::arg("Point4"),  py::arg("Plane"))
        .def_static("AddInterval_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide ,  gp_Pnt & ,  gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide ,  gp_Pnt & ,  gp_Pnt &  ) >(&DsgPrs_EqualDistancePresentation::AddInterval),
                    R"#(is used for presentation of interval between two lines or two points or between a line and a point.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aPoint1"),  py::arg("aPoint2"),  py::arg("aDir"),  py::arg("aPosition"),  py::arg("anArrowSide"),  py::arg("anExtremePnt1"),  py::arg("anExtremePnt2"))
        .def_static("AddIntervalBetweenTwoArcs_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Circ & ,  const gp_Circ & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Circ & ,  const gp_Circ & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_EqualDistancePresentation::AddIntervalBetweenTwoArcs),
                    R"#(is used for presentation of interval between two arcs. One of arcs can have a zero radius.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aCircle1"),  py::arg("aCircle2"),  py::arg("aPoint1"),  py::arg("aPoint2"),  py::arg("aPoint3"),  py::arg("aPoint4"),  py::arg("anArrowSide"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_EqualRadiusPresentation , shared_ptr<DsgPrs_EqualRadiusPresentation>>(m,"DsgPrs_EqualRadiusPresentation");

    static_cast<py::class_<DsgPrs_EqualRadiusPresentation , shared_ptr<DsgPrs_EqualRadiusPresentation>  >>(m.attr("DsgPrs_EqualRadiusPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const opencascade::handle<Geom_Plane> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const opencascade::handle<Geom_Plane> &  ) >(&DsgPrs_EqualRadiusPresentation::Add),
                    R"#(Adds the points FirstCenter, SecondCenter, FirstPoint, SecondPoint, and the plane Plane to the presentation object aPresentation. The display attributes of these elements is defined by the attribute manager aDrawer. FirstCenter and SecondCenter are the centers of the first and second shapes respectively, and FirstPoint and SecondPoint are the attachment points of the radii to arcs.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("FirstCenter"),  py::arg("SecondCenter"),  py::arg("FirstPoint"),  py::arg("SecondPoint"),  py::arg("Plane"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_FilletRadiusPresentation , shared_ptr<DsgPrs_FilletRadiusPresentation>>(m,"DsgPrs_FilletRadiusPresentation");

    static_cast<py::class_<DsgPrs_FilletRadiusPresentation , shared_ptr<DsgPrs_FilletRadiusPresentation>  >>(m.attr("DsgPrs_FilletRadiusPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
        .def_static("Add_s",
                    []( const opencascade::handle<Prs3d_Presentation> & aPresentation,const opencascade::handle<Prs3d_Drawer> & aDrawer,const Standard_Real thevalue,const TCollection_ExtendedString & aText,const gp_Pnt & aPosition,const gp_Dir & aNormalDir,const gp_Pnt & aBasePnt,const gp_Pnt & aFirstPoint,const gp_Pnt & aSecondPoint,const gp_Pnt & aCenter,const DsgPrs_ArrowSide ArrowPrs,const Standard_Boolean drawRevers,gp_Pnt & DrawPosition,gp_Pnt & EndOfArrow,opencascade::handle<Geom_TrimmedCurve> & TrimCurve ){ Standard_Boolean  HasCircle; DsgPrs_FilletRadiusPresentation::Add(aPresentation,aDrawer,thevalue,aText,aPosition,aNormalDir,aBasePnt,aFirstPoint,aSecondPoint,aCenter,ArrowPrs,drawRevers,DrawPosition,EndOfArrow,TrimCurve,HasCircle); return std::make_tuple(HasCircle); },
                    R"#(Adds a display of the radius of a fillet to the presentation aPresentation. The display ttributes defined by the attribute manager aDrawer. the value specifies the length of the radius.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("thevalue"),  py::arg("aText"),  py::arg("aPosition"),  py::arg("aNormalDir"),  py::arg("aBasePnt"),  py::arg("aFirstPoint"),  py::arg("aSecondPoint"),  py::arg("aCenter"),  py::arg("ArrowPrs"),  py::arg("drawRevers"),  py::arg("DrawPosition"),  py::arg("EndOfArrow"),  py::arg("TrimCurve"))
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_FixPresentation , shared_ptr<DsgPrs_FixPresentation>>(m,"DsgPrs_FixPresentation");

    static_cast<py::class_<DsgPrs_FixPresentation , shared_ptr<DsgPrs_FixPresentation>  >>(m.attr("DsgPrs_FixPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const Standard_Real  ) >(&DsgPrs_FixPresentation::Add),
                    R"#(draws the presentation of fixed objects by drawing the 'fix' symbol at position <aPntEnd>. A binding segment is drawn between <aPntAttach> ( which belongs the the fix object) and <aPntEnd>. aSymbSize is the size of the 'fix'symbol)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aPntAttach"),  py::arg("aPntEnd"),  py::arg("aNormPln"),  py::arg("aSymbSize"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_IdenticPresentation , shared_ptr<DsgPrs_IdenticPresentation>>(m,"DsgPrs_IdenticPresentation");

    static_cast<py::class_<DsgPrs_IdenticPresentation , shared_ptr<DsgPrs_IdenticPresentation>  >>(m.attr("DsgPrs_IdenticPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_IdenticPresentation::Add),
                    R"#(draws a line between <aPntAttach> and <aPntOffset>.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("aPntAttach"),  py::arg("aPntOffset"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_IdenticPresentation::Add),
                    R"#(draws the 'identic' presentation by drawing a line between <aFAttach> and <aSAttach> , and a linkimg segment between <aPntOffset> and its projection on the precedent line.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("aFAttach"),  py::arg("aSAttach"),  py::arg("aPntOffset"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_IdenticPresentation::Add),
                    R"#(draws the 'identic' presentation in the case of circles : draws an arc of circle between <aFAttach> and <aSAttach> of center <aCenter> and of radius dist(aCenter, aFAttach), and draws a segment between <aPntOffset> and its projection on the arc.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("aAx2"),  py::arg("aCenter"),  py::arg("aFAttach"),  py::arg("aSAttach"),  py::arg("aPntOffset"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_IdenticPresentation::Add),
                    R"#(draws the 'identic' presentation in the case of circles : draws an arc of circle between <aFAttach> and <aSAttach> of center <aCenter> and of radius dist(aCenter, aFAttach), and draws a segment between <aPntOffset> and <aPntOnCirc>)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("aAx2"),  py::arg("aCenter"),  py::arg("aFAttach"),  py::arg("aSAttach"),  py::arg("aPntOffset"),  py::arg("aPntOnCirc"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_IdenticPresentation::Add),
                    R"#(draws the 'identic' presentation in the case of ellipses: draws an arc of the anEllipse between <aFAttach> and <aSAttach> and draws a segment between <aPntOffset> and <aPntOnElli>)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("anEllipse"),  py::arg("aFAttach"),  py::arg("aSAttach"),  py::arg("aPntOffset"),  py::arg("aPntOnElli"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_LengthPresentation , shared_ptr<DsgPrs_LengthPresentation>>(m,"DsgPrs_LengthPresentation");

    static_cast<py::class_<DsgPrs_LengthPresentation , shared_ptr<DsgPrs_LengthPresentation>  >>(m.attr("DsgPrs_LengthPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_LengthPresentation::Add),
                    R"#(Draws a line segment representing a length in the display aPresentation. This segment joins the points AttachmentPoint1 and AttachmentPoint2, along the direction aDirection. The text aText will be displayed at the offset point OffsetPoint. The line and text attributes are specified by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection"),  py::arg("OffsetPoint"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_LengthPresentation::Add),
                    R"#(Draws a line segment representing a length in the display aPresentation. This segment joins the points AttachmentPoint1 and AttachmentPoint2, along the direction aDirection. The text aText will be displayed at the offset point OffsetPoint. The value of the enumeration ArrowSide controls whether arrows will be displayed at either or both ends of the length. The line, text and arrow attributes are specified by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection"),  py::arg("OffsetPoint"),  py::arg("ArrowSide"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pln & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pln & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_LengthPresentation::Add),
                    R"#(Draws a line segment representing a length in the display aPresentation. This segment joins the points AttachmentPoint1 and AttachmentPoint2, along the direction aDirection. The text aText will be displayed at the offset point OffsetPoint. The value of the enumeration ArrowSide controls whether arrows will be displayed at either or both ends of the length. The plane PlaneOfFaces is used if length is null. The line, text and arrow attributes are specified by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("PlaneOfFaces"),  py::arg("aDirection"),  py::arg("OffsetPoint"),  py::arg("ArrowSide"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_LengthPresentation::Add),
                    R"#(Draws a line segment representing a length in the display aPresentation. This segment joins the points AttachmentPoint1 and AttachmentPoint2, along the direction aDirection. AttachmentPoint2 lies on the curvilinear faces SecondSurf. The text aText will be displayed at the offset point OffsetPoint. The value of the enumeration ArrowSide controls whether arrows will be displayed at either or both ends of the length. The line, text and arrow attributes are specified by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("SecondSurf"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection"),  py::arg("OffsetPoint"),  py::arg("ArrowSide"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_LengthPresentation::Add),
                    R"#(Draws a line segment representing a length in the display aPresentation. This segment joins the points AttachmentPoint1 and AttachmentPoint2, along the direction aDirection. The value of the enumeration ArrowSide controls whether arrows will be displayed at either or both ends of the length. The line and arrow attributes are specified by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("Pt1"),  py::arg("Pt2"),  py::arg("ArrowSide"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_MidPointPresentation , shared_ptr<DsgPrs_MidPointPresentation>>(m,"DsgPrs_MidPointPresentation");

    static_cast<py::class_<DsgPrs_MidPointPresentation , shared_ptr<DsgPrs_MidPointPresentation>  >>(m.attr("DsgPrs_MidPointPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) >(&DsgPrs_MidPointPresentation::Add),
                    R"#(draws the representation of a MidPoint between two vertices.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theAxe"),  py::arg("MidPoint"),  py::arg("Position"),  py::arg("AttachPoint"),  py::arg("first"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Ax2 & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) >(&DsgPrs_MidPointPresentation::Add),
                    R"#(draws the representation of a MidPoint between two lines or linear segments.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("theAxe"),  py::arg("MidPoint"),  py::arg("Position"),  py::arg("AttachPoint"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("first"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Circ & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Circ & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) >(&DsgPrs_MidPointPresentation::Add),
                    R"#(draws the representation of a MidPoint between two entire circles or two circular arcs.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aCircle"),  py::arg("MidPoint"),  py::arg("Position"),  py::arg("AttachPoint"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("first"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean  ) >(&DsgPrs_MidPointPresentation::Add),
                    R"#(draws the representation of a MidPoint between two entire ellipses or two elliptic arcs.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("anElips"),  py::arg("MidPoint"),  py::arg("Position"),  py::arg("AttachPoint"),  py::arg("Point1"),  py::arg("Point2"),  py::arg("first"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_OffsetPresentation , shared_ptr<DsgPrs_OffsetPresentation>>(m,"DsgPrs_OffsetPresentation");

    static_cast<py::class_<DsgPrs_OffsetPresentation , shared_ptr<DsgPrs_OffsetPresentation>  >>(m.attr("DsgPrs_OffsetPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_OffsetPresentation::Add),
                    R"#(Defines the display of elements showing offset shapes. These include the two points of attachment AttachmentPoint1 and AttachmentPoint1, the two directions aDirection and aDirection2, and the offset point OffsetPoint. These arguments are added to the presentation object aPresentation. Their display attributes are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection"),  py::arg("aDirection2"),  py::arg("OffsetPoint"))
        .def_static("AddAxes_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_OffsetPresentation::AddAxes),
                    R"#(draws the representation of axes alignement Constraint between the point AttachmentPoint1 and the point AttachmentPoint2, along direction aDirection, using the offset point OffsetPoint.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection"),  py::arg("aDirection2"),  py::arg("OffsetPoint"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_ParalPresentation , shared_ptr<DsgPrs_ParalPresentation>>(m,"DsgPrs_ParalPresentation");

    static_cast<py::class_<DsgPrs_ParalPresentation , shared_ptr<DsgPrs_ParalPresentation>  >>(m.attr("DsgPrs_ParalPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt &  ) >(&DsgPrs_ParalPresentation::Add),
                    R"#(Defines the display of elements showing relations of parallelism between shapes. These include the two points of attachment AttachmentPoint1 and AttachmentPoint1, the direction aDirection, and the offset point OffsetPoint. These arguments are added to the presentation object aPresentation. Their display attributes are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection"),  py::arg("OffsetPoint"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide  ) >(&DsgPrs_ParalPresentation::Add),
                    R"#(Defines the display of elements showing relations of parallelism between shapes. These include the two points of attachment AttachmentPoint1 and AttachmentPoint1, the direction aDirection, the offset point OffsetPoint and the text aText. These arguments are added to the presentation object aPresentation. Their display attributes are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection"),  py::arg("OffsetPoint"),  py::arg("ArrowSide"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_PerpenPresentation , shared_ptr<DsgPrs_PerpenPresentation>>(m,"DsgPrs_PerpenPresentation");

    static_cast<py::class_<DsgPrs_PerpenPresentation , shared_ptr<DsgPrs_PerpenPresentation>  >>(m.attr("DsgPrs_PerpenPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&DsgPrs_PerpenPresentation::Add),
                    R"#(Defines the display of elements showing perpendicular constraints between shapes. These include the two axis points pAx1 and pAx2, the two points pnt1 and pnt2, the offset point OffsetPoint and the two Booleans intOut1} and intOut2{. These arguments are added to the presentation object aPresentation. Their display attributes are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("pAx1"),  py::arg("pAx2"),  py::arg("pnt1"),  py::arg("pnt2"),  py::arg("OffsetPoint"),  py::arg("intOut1"),  py::arg("intOut2"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_RadiusPresentation , shared_ptr<DsgPrs_RadiusPresentation>>(m,"DsgPrs_RadiusPresentation");

    static_cast<py::class_<DsgPrs_RadiusPresentation , shared_ptr<DsgPrs_RadiusPresentation>  >>(m.attr("DsgPrs_RadiusPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&DsgPrs_RadiusPresentation::Add),
                    R"#(Adds the point AttachmentPoint, the circle aCircle, the text aText, and the parameters firstparam and lastparam to the presentation object aPresentation. The display attributes of these elements is defined by the attribute manager aDrawer. If the Boolean drawFromCenter is false, the arrowhead will point towards the center of aCircle. If the Boolean reverseArrow is true, the arrowhead will point away from the attachment point.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint"),  py::arg("aCircle"),  py::arg("firstparam"),  py::arg("lastparam"),  py::arg("drawFromCenter")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("reverseArrow")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const DsgPrs_ArrowSide ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&DsgPrs_RadiusPresentation::Add),
                    R"#(Adds the circle aCircle, the text aText, the points AttachmentPoint, Center and EndOfArrow to the presentation object aPresentation. The display attributes of these elements is defined by the attribute manager aDrawer. The value of the enumeration Arrowside determines the type of arrow displayed: whether there will be arrowheads at both ends or only one, for example. If the Boolean drawFromCenter is false, the arrowhead will point towards the center of aCircle. If the Boolean reverseArrow is true, the arrowhead will point away from the attachment point.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("AttachmentPoint"),  py::arg("Center"),  py::arg("EndOfArrow"),  py::arg("ArrowSide"),  py::arg("drawFromCenter")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("reverseArrow")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_ShadedPlanePresentation , shared_ptr<DsgPrs_ShadedPlanePresentation>>(m,"DsgPrs_ShadedPlanePresentation");

    static_cast<py::class_<DsgPrs_ShadedPlanePresentation , shared_ptr<DsgPrs_ShadedPlanePresentation>  >>(m.attr("DsgPrs_ShadedPlanePresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_ShadedPlanePresentation::Add),
                    R"#(Adds the points aPt1, aPt2 and aPt3 to the presentation object, aPresentation. The display attributes of the shaded plane are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aPt1"),  py::arg("aPt2"),  py::arg("aPt3"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_ShapeDirPresentation , shared_ptr<DsgPrs_ShapeDirPresentation>>(m,"DsgPrs_ShapeDirPresentation");

    static_cast<py::class_<DsgPrs_ShapeDirPresentation , shared_ptr<DsgPrs_ShapeDirPresentation>  >>(m.attr("DsgPrs_ShapeDirPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TopoDS_Shape & ,  const Standard_Integer  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TopoDS_Shape & ,  const Standard_Integer  ) >(&DsgPrs_ShapeDirPresentation::Add),
                    R"#(Adds the shape shape and the mode mode to the presentation object prs. The display attributes of the normal are defined by the attribute manager aDrawer. mode determines whether the first or the last point of the normal is given to the presentation object. If the first point: 0; if the last point, 1.)#"  , py::arg("prs"),  py::arg("aDrawer"),  py::arg("shape"),  py::arg("mode"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_SymbPresentation , shared_ptr<DsgPrs_SymbPresentation>>(m,"DsgPrs_SymbPresentation");

    static_cast<py::class_<DsgPrs_SymbPresentation , shared_ptr<DsgPrs_SymbPresentation>  >>(m.attr("DsgPrs_SymbPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TCollection_ExtendedString & ,  const gp_Pnt &  ) >(&DsgPrs_SymbPresentation::Add),
                    R"#(Adds the text aText and the point OffsetPoint to the presentation object aPresentation. The display attributes of the shaded plane are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aText"),  py::arg("OffsetPoint"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_SymmetricPresentation , shared_ptr<DsgPrs_SymmetricPresentation>>(m,"DsgPrs_SymmetricPresentation");

    static_cast<py::class_<DsgPrs_SymmetricPresentation , shared_ptr<DsgPrs_SymmetricPresentation>  >>(m.attr("DsgPrs_SymmetricPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Lin & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Dir & ,  const gp_Lin & ,  const gp_Pnt &  ) >(&DsgPrs_SymmetricPresentation::Add),
                    R"#(Adds the points OffsetPoint, AttachmentPoint1, AttachmentPoint2, the direction aDirection1 and the axis anAxis to the presentation object aPresentation. The display attributes of the symmetry are defined by the attribute manager aDrawer. This syntax is used for display of symmetries between two segments.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aDirection1"),  py::arg("aAxis"),  py::arg("OffsetPoint"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Circ & ,  const gp_Lin & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Circ & ,  const gp_Lin & ,  const gp_Pnt &  ) >(&DsgPrs_SymmetricPresentation::Add),
                    R"#(Adds the points OffsetPoint, AttachmentPoint1, AttachmentPoint2, the direction aDirection1 the circle aCircle1 and the axis anAxis to the presentation object aPresentation. The display attributes of the symmetry are defined by the attribute manager aDrawer. This syntax is used for display of symmetries between two arcs.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aCircle1"),  py::arg("aAxis"),  py::arg("OffsetPoint"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Lin & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Lin & ,  const gp_Pnt &  ) >(&DsgPrs_SymmetricPresentation::Add),
                    R"#(Adds the points OffsetPoint, AttachmentPoint1, AttachmentPoint2 and the axis anAxis to the presentation object aPresentation. The display attributes of the symmetry are defined by the attribute manager aDrawer. This syntax is used for display of symmetries between two vertices.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("AttachmentPoint1"),  py::arg("AttachmentPoint2"),  py::arg("aAxis"),  py::arg("OffsetPoint"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_TangentPresentation , shared_ptr<DsgPrs_TangentPresentation>>(m,"DsgPrs_TangentPresentation");

    static_cast<py::class_<DsgPrs_TangentPresentation , shared_ptr<DsgPrs_TangentPresentation>  >>(m.attr("DsgPrs_TangentPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Dir & ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Dir & ,  const Standard_Real  ) >(&DsgPrs_TangentPresentation::Add),
                    R"#(Adds the point OffsetPoint, the direction aDirection and the length aLength to the presentation object aPresentation. The display attributes of the tangent are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("OffsetPoint"),  py::arg("aDirection"),  py::arg("aLength"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_XYZAxisPresentation , shared_ptr<DsgPrs_XYZAxisPresentation>>(m,"DsgPrs_XYZAxisPresentation");

    static_cast<py::class_<DsgPrs_XYZAxisPresentation , shared_ptr<DsgPrs_XYZAxisPresentation>  >>(m.attr("DsgPrs_XYZAxisPresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_LineAspect> & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_CString ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_LineAspect> & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_CString ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_XYZAxisPresentation::Add),
                    R"#(Draws each axis of a trihedron displayed in the presentation aPresentation and with lines shown by the values of aLineAspect. Each axis is defined by: - the first and last points aPfirst and aPlast - the direction aDir and - the value aVal which provides a value for length. The value for length is provided so that the trihedron can vary in length relative to the scale of shape display. Each axis will be identified as X, Y, or Z by the text aText.)#"  , py::arg("aPresentation"),  py::arg("anLineAspect"),  py::arg("aDir"),  py::arg("aVal"),  py::arg("aText"),  py::arg("aPfirst"),  py::arg("aPlast"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_LineAspect> & ,  const opencascade::handle<Prs3d_ArrowAspect> & ,  const opencascade::handle<Prs3d_TextAspect> & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_CString ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_LineAspect> & ,  const opencascade::handle<Prs3d_ArrowAspect> & ,  const opencascade::handle<Prs3d_TextAspect> & ,  const gp_Dir & ,  const Standard_Real ,  const Standard_CString ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_XYZAxisPresentation::Add),
                    R"#(draws the presentation X ,Y ,Z axis)#"  , py::arg("aPresentation"),  py::arg("aLineAspect"),  py::arg("anArrowAspect"),  py::arg("aTextAspect"),  py::arg("aDir"),  py::arg("aVal"),  py::arg("aText"),  py::arg("aPfirst"),  py::arg("aPlast"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<DsgPrs_XYZPlanePresentation , shared_ptr<DsgPrs_XYZPlanePresentation>>(m,"DsgPrs_XYZPlanePresentation");

    static_cast<py::class_<DsgPrs_XYZPlanePresentation , shared_ptr<DsgPrs_XYZPlanePresentation>  >>(m.attr("DsgPrs_XYZPlanePresentation"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&DsgPrs_XYZPlanePresentation::Add),
                    R"#(Draws each plane of a trihedron displayed in the presentation aPresentation and with attributes defined by the attribute manager aDrawer. Each triangular plane is defined by the points aPt1 aPt2 and aPt3.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("aPt1"),  py::arg("aPt2"),  py::arg("aPt3"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/DsgPrs_LengthPresentation.hxx
// ./opencascade/DsgPrs_EllipseRadiusPresentation.hxx
// ./opencascade/DsgPrs_ArrowSide.hxx
// ./opencascade/DsgPrs_OffsetPresentation.hxx
// ./opencascade/DsgPrs.hxx
// ./opencascade/DsgPrs_DiameterPresentation.hxx
// ./opencascade/DsgPrs_IdenticPresentation.hxx
// ./opencascade/DsgPrs_PerpenPresentation.hxx
// ./opencascade/DsgPrs_FilletRadiusPresentation.hxx
// ./opencascade/DsgPrs_ShapeDirPresentation.hxx
// ./opencascade/DsgPrs_RadiusPresentation.hxx
// ./opencascade/DsgPrs_ShadedPlanePresentation.hxx
// ./opencascade/DsgPrs_AnglePresentation.hxx
// ./opencascade/DsgPrs_SymmetricPresentation.hxx
// ./opencascade/DsgPrs_XYZAxisPresentation.hxx
// ./opencascade/DsgPrs_EqualDistancePresentation.hxx
// ./opencascade/DsgPrs_MidPointPresentation.hxx
// ./opencascade/DsgPrs_SymbPresentation.hxx
// ./opencascade/DsgPrs_Chamf2dPresentation.hxx
// ./opencascade/DsgPrs_XYZPlanePresentation.hxx
// ./opencascade/DsgPrs_EqualRadiusPresentation.hxx
// ./opencascade/DsgPrs_TangentPresentation.hxx
// ./opencascade/DsgPrs_ConcentricPresentation.hxx
// ./opencascade/DsgPrs_ParalPresentation.hxx
// ./opencascade/DsgPrs_DatumPrs.hxx
// ./opencascade/DsgPrs_FixPresentation.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
