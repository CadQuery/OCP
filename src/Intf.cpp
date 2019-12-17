
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <gp_XYZ.hxx>
#include <Intf_Polygon2d.hxx>
#include <Intf_SectionPoint.hxx>
#include <Intf_SectionLine.hxx>
#include <Intf_TangentZone.hxx>
#include <Intf_Interference.hxx>
#include <Intf_Tool.hxx>
#include <Intf_InterferencePolygon2d.hxx>
#include <Standard_OutOfRange.hxx>
#include <gp_Lin2d.hxx>
#include <Bnd_Box2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Lin.hxx>
#include <Bnd_Box.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Intf_Polygon2d.hxx>

// module includes
#include <Intf.hxx>
#include <Intf_Array1OfLin.hxx>
#include <Intf_Interference.hxx>
#include <Intf_InterferencePolygon2d.hxx>
#include <Intf_PIType.hxx>
#include <Intf_Polygon2d.hxx>
#include <Intf_SectionLine.hxx>
#include <Intf_SectionPoint.hxx>
#include <Intf_SeqOfSectionLine.hxx>
#include <Intf_SeqOfSectionPoint.hxx>
#include <Intf_SeqOfTangentZone.hxx>
#include <Intf_TangentZone.hxx>
#include <Intf_Tool.hxx>

// template related includes
// ./opencascade/Intf_SeqOfSectionLine.hxx
#include "NCollection.hxx"
// ./opencascade/Intf_Array1OfLin.hxx
#include "NCollection.hxx"
// ./opencascade/Intf_SeqOfTangentZone.hxx
#include "NCollection.hxx"
// ./opencascade/Intf_SeqOfSectionPoint.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Intf(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Intf"));


//Python trampoline classes
    class Py_Intf_Polygon2d : public Intf_Polygon2d{
    public:
        using Intf_Polygon2d::Intf_Polygon2d;
        
        // public pure virtual
        Standard_Real DeflectionOverEstimation() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Intf_Polygon2d,DeflectionOverEstimation,) };
        Standard_Integer NbSegments() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Intf_Polygon2d,NbSegments,) };
        void Segment(const Standard_Integer theIndex,gp_Pnt2d & theBegin,gp_Pnt2d & theEnd) const  override { PYBIND11_OVERLOAD_PURE(void,Intf_Polygon2d,Segment,theIndex,theBegin,theEnd) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<Intf_Interference ,std::unique_ptr<Intf_Interference, py::nodelete>  >>(m.attr("Intf_Interference"))
        .def("NbSectionPoints",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionPoints),
             R"#(Gives the number of points of intersection in the interference.)#" )
        .def("PntValue",
             (const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer  ) const) static_cast<const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer  ) const>(&Intf_Interference::PntValue),
             R"#(Gives the point of intersection of address Index in the interference.)#"  , py::arg("Index"))
        .def("NbSectionLines",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionLines),
             R"#(Gives the number of polylines of intersection in the interference.)#" )
        .def("LineValue",
             (const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer  ) const) static_cast<const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer  ) const>(&Intf_Interference::LineValue),
             R"#(Gives the polyline of intersection at address <Index> in the interference.)#"  , py::arg("Index"))
        .def("NbTangentZones",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbTangentZones),
             R"#(Gives the number of zones of tangence in the interference.)#" )
        .def("ZoneValue",
             (const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer  ) const) static_cast<const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer  ) const>(&Intf_Interference::ZoneValue),
             R"#(Gives the zone of tangence at address Index in the interference.)#"  , py::arg("Index"))
        .def("GetTolerance",
             (Standard_Real (Intf_Interference::*)() const) static_cast<Standard_Real (Intf_Interference::*)() const>(&Intf_Interference::GetTolerance),
             R"#(Gives the tolerance used for the calculation.)#" )
        .def("Contains",
             (Standard_Boolean (Intf_Interference::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Boolean (Intf_Interference::*)( const Intf_SectionPoint &  ) const>(&Intf_Interference::Contains),
             R"#(Tests if the polylines of intersection or the zones of tangence contain the point of intersection <ThePnt>.)#"  , py::arg("ThePnt"))
        .def("Insert",
             (Standard_Boolean (Intf_Interference::*)( const Intf_TangentZone &  ) ) static_cast<Standard_Boolean (Intf_Interference::*)( const Intf_TangentZone &  ) >(&Intf_Interference::Insert),
             R"#(Inserts a new zone of tangence in the current list of tangent zones of the interference and returns True when done.)#"  , py::arg("TheZone"))
        .def("Insert",
             (void (Intf_Interference::*)( const Intf_SectionPoint & ,  const Intf_SectionPoint &  ) ) static_cast<void (Intf_Interference::*)( const Intf_SectionPoint & ,  const Intf_SectionPoint &  ) >(&Intf_Interference::Insert),
             R"#(Insert a new segment of intersection in the current list of polylines of intersection of the interference.)#"  , py::arg("pdeb"),  py::arg("pfin"))
        .def("Dump",
             (void (Intf_Interference::*)() const) static_cast<void (Intf_Interference::*)() const>(&Intf_Interference::Dump),
             R"#(None)#" )
        .def("NbSectionPoints",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionPoints),
             R"#(Gives the number of points of intersection in the interference.)#" )
        .def("PntValue",
             (const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer  ) const) static_cast<const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer  ) const>(&Intf_Interference::PntValue),
             R"#(Gives the point of intersection of address Index in the interference.)#"  , py::arg("Index"))
        .def("NbSectionLines",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionLines),
             R"#(Gives the number of polylines of intersection in the interference.)#" )
        .def("LineValue",
             (const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer  ) const) static_cast<const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer  ) const>(&Intf_Interference::LineValue),
             R"#(Gives the polyline of intersection at address <Index> in the interference.)#"  , py::arg("Index"))
        .def("NbTangentZones",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbTangentZones),
             R"#(Gives the number of zones of tangence in the interference.)#" )
        .def("ZoneValue",
             (const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer  ) const) static_cast<const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer  ) const>(&Intf_Interference::ZoneValue),
             R"#(Gives the zone of tangence at address Index in the interference.)#"  , py::arg("Index"))
        .def("GetTolerance",
             (Standard_Real (Intf_Interference::*)() const) static_cast<Standard_Real (Intf_Interference::*)() const>(&Intf_Interference::GetTolerance),
             R"#(Gives the tolerance used for the calculation.)#" )
;


    static_cast<py::class_<Intf_SectionPoint ,std::unique_ptr<Intf_SectionPoint>  >>(m.attr("Intf_SectionPoint"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Intf_PIType,const Standard_Integer,const Standard_Integer,const Standard_Real,const Intf_PIType,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("Where"),  py::arg("DimeO"),  py::arg("AddrO1"),  py::arg("AddrO2"),  py::arg("ParamO"),  py::arg("DimeT"),  py::arg("AddrT1"),  py::arg("AddrT2"),  py::arg("ParamT"),  py::arg("Incid") )
        .def(py::init< const gp_Pnt2d &,const Intf_PIType,const Standard_Integer,const Standard_Real,const Intf_PIType,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("Where"),  py::arg("DimeO"),  py::arg("AddrO1"),  py::arg("ParamO"),  py::arg("DimeT"),  py::arg("AddrT1"),  py::arg("ParamT"),  py::arg("Incid") )
        .def("Pnt",
             (const gp_Pnt & (Intf_SectionPoint::*)() const) static_cast<const gp_Pnt & (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::Pnt),
             R"#(Returns the location of the SectionPoint.)#" )
        .def("ParamOnFirst",
             (Standard_Real (Intf_SectionPoint::*)() const) static_cast<Standard_Real (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::ParamOnFirst),
             R"#(Returns the cumulated Parameter of the SectionPoint on the first element.)#" )
        .def("ParamOnSecond",
             (Standard_Real (Intf_SectionPoint::*)() const) static_cast<Standard_Real (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::ParamOnSecond),
             R"#(Returns the cumulated Parameter of the section point on the second element.)#" )
        .def("TypeOnFirst",
             (Intf_PIType (Intf_SectionPoint::*)() const) static_cast<Intf_PIType (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::TypeOnFirst),
             R"#(Returns the type of the section point on the first element.)#" )
        .def("TypeOnSecond",
             (Intf_PIType (Intf_SectionPoint::*)() const) static_cast<Intf_PIType (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::TypeOnSecond),
             R"#(Returns the type of the section point on the second element.)#" )
        .def("InfoFirst",
             (void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Real &  ) const) static_cast<void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Real &  ) const>(&Intf_SectionPoint::InfoFirst),
             R"#(None)#"  , py::arg("Dim"),  py::arg("Add1"),  py::arg("Add2"),  py::arg("Param"))
        .def("InfoFirst",
             (void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Real &  ) const) static_cast<void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Real &  ) const>(&Intf_SectionPoint::InfoFirst),
             R"#(Gives the datas about the first argument of the Interference.)#"  , py::arg("Dim"),  py::arg("Addr"),  py::arg("Param"))
        .def("InfoSecond",
             (void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Real &  ) const) static_cast<void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Real &  ) const>(&Intf_SectionPoint::InfoSecond),
             R"#(None)#"  , py::arg("Dim"),  py::arg("Add1"),  py::arg("Add2"),  py::arg("Param"))
        .def("InfoSecond",
             (void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Real &  ) const) static_cast<void (Intf_SectionPoint::*)( Intf_PIType & ,  Standard_Integer & ,  Standard_Real &  ) const>(&Intf_SectionPoint::InfoSecond),
             R"#(Gives the datas about the second argument of the Interference.)#"  , py::arg("Dim"),  py::arg("Addr"),  py::arg("Param"))
        .def("Incidence",
             (Standard_Real (Intf_SectionPoint::*)() const) static_cast<Standard_Real (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::Incidence),
             R"#(Gives the incidence at this section point. The incidence between the two triangles is given by the cosine. The best incidence is 0. (PI/2). The worst is 1. (null angle).)#" )
        .def("IsEqual",
             (Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint &  ) const>(&Intf_SectionPoint::IsEqual),
             R"#(Returns True if the two SectionPoint have the same logical informations.)#"  , py::arg("Other"))
        .def("IsOnSameEdge",
             (Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint &  ) const>(&Intf_SectionPoint::IsOnSameEdge),
             R"#(Returns True if the two SectionPoints are on the same edge of the first or the second element.)#"  , py::arg("Other"))
        .def("Merge",
             (void (Intf_SectionPoint::*)( Intf_SectionPoint &  ) ) static_cast<void (Intf_SectionPoint::*)( Intf_SectionPoint &  ) >(&Intf_SectionPoint::Merge),
             R"#(Merges two SectionPoints.)#"  , py::arg("Other"))
        .def("Dump",
             (void (Intf_SectionPoint::*)( const Standard_Integer  ) const) static_cast<void (Intf_SectionPoint::*)( const Standard_Integer  ) const>(&Intf_SectionPoint::Dump),
             R"#(None)#"  , py::arg("Indent"))
        .def("ParamOnFirst",
             (Standard_Real (Intf_SectionPoint::*)() const) static_cast<Standard_Real (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::ParamOnFirst),
             R"#(Returns the cumulated Parameter of the SectionPoint on the first element.)#" )
        .def("ParamOnSecond",
             (Standard_Real (Intf_SectionPoint::*)() const) static_cast<Standard_Real (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::ParamOnSecond),
             R"#(Returns the cumulated Parameter of the section point on the second element.)#" )
        .def("TypeOnFirst",
             (Intf_PIType (Intf_SectionPoint::*)() const) static_cast<Intf_PIType (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::TypeOnFirst),
             R"#(Returns the type of the section point on the first element.)#" )
        .def("TypeOnSecond",
             (Intf_PIType (Intf_SectionPoint::*)() const) static_cast<Intf_PIType (Intf_SectionPoint::*)() const>(&Intf_SectionPoint::TypeOnSecond),
             R"#(Returns the type of the section point on the second element.)#" )
        .def("IsEqual",
             (Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint &  ) const>(&Intf_SectionPoint::IsEqual),
             R"#(Returns True if the two SectionPoint have the same logical informations.)#"  , py::arg("Other"))
;


    static_cast<py::class_<Intf_Tool ,std::unique_ptr<Intf_Tool>  >>(m.attr("Intf_Tool"))
        .def(py::init<  >()  )
        .def("Lin2dBox",
             (void (Intf_Tool::*)( const gp_Lin2d & ,  const Bnd_Box2d & ,  Bnd_Box2d &  ) ) static_cast<void (Intf_Tool::*)( const gp_Lin2d & ,  const Bnd_Box2d & ,  Bnd_Box2d &  ) >(&Intf_Tool::Lin2dBox),
             R"#(None)#"  , py::arg("theLin2d"),  py::arg("bounding"),  py::arg("boxLin"))
        .def("Hypr2dBox",
             (void (Intf_Tool::*)( const gp_Hypr2d & ,  const Bnd_Box2d & ,  Bnd_Box2d &  ) ) static_cast<void (Intf_Tool::*)( const gp_Hypr2d & ,  const Bnd_Box2d & ,  Bnd_Box2d &  ) >(&Intf_Tool::Hypr2dBox),
             R"#(None)#"  , py::arg("theHypr2d"),  py::arg("bounding"),  py::arg("boxHypr"))
        .def("Parab2dBox",
             (void (Intf_Tool::*)( const gp_Parab2d & ,  const Bnd_Box2d & ,  Bnd_Box2d &  ) ) static_cast<void (Intf_Tool::*)( const gp_Parab2d & ,  const Bnd_Box2d & ,  Bnd_Box2d &  ) >(&Intf_Tool::Parab2dBox),
             R"#(None)#"  , py::arg("theParab2d"),  py::arg("bounding"),  py::arg("boxHypr"))
        .def("LinBox",
             (void (Intf_Tool::*)( const gp_Lin & ,  const Bnd_Box & ,  Bnd_Box &  ) ) static_cast<void (Intf_Tool::*)( const gp_Lin & ,  const Bnd_Box & ,  Bnd_Box &  ) >(&Intf_Tool::LinBox),
             R"#(None)#"  , py::arg("theLin"),  py::arg("bounding"),  py::arg("boxLin"))
        .def("HyprBox",
             (void (Intf_Tool::*)( const gp_Hypr & ,  const Bnd_Box & ,  Bnd_Box &  ) ) static_cast<void (Intf_Tool::*)( const gp_Hypr & ,  const Bnd_Box & ,  Bnd_Box &  ) >(&Intf_Tool::HyprBox),
             R"#(None)#"  , py::arg("theHypr"),  py::arg("bounding"),  py::arg("boxHypr"))
        .def("ParabBox",
             (void (Intf_Tool::*)( const gp_Parab & ,  const Bnd_Box & ,  Bnd_Box &  ) ) static_cast<void (Intf_Tool::*)( const gp_Parab & ,  const Bnd_Box & ,  Bnd_Box &  ) >(&Intf_Tool::ParabBox),
             R"#(None)#"  , py::arg("theParab"),  py::arg("bounding"),  py::arg("boxHypr"))
        .def("NbSegments",
             (Standard_Integer (Intf_Tool::*)() const) static_cast<Standard_Integer (Intf_Tool::*)() const>(&Intf_Tool::NbSegments),
             R"#(None)#" )
        .def("BeginParam",
             (Standard_Real (Intf_Tool::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Intf_Tool::*)( const Standard_Integer  ) const>(&Intf_Tool::BeginParam),
             R"#(None)#"  , py::arg("SegmentNum"))
        .def("EndParam",
             (Standard_Real (Intf_Tool::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Intf_Tool::*)( const Standard_Integer  ) const>(&Intf_Tool::EndParam),
             R"#(None)#"  , py::arg("SegmentNum"))
;


    static_cast<py::class_<Intf_Polygon2d ,std::unique_ptr<Intf_Polygon2d> ,Py_Intf_Polygon2d >>(m.attr("Intf_Polygon2d"))
        .def("Bounding",
             (const Bnd_Box2d & (Intf_Polygon2d::*)() const) static_cast<const Bnd_Box2d & (Intf_Polygon2d::*)() const>(&Intf_Polygon2d::Bounding),
             R"#(Returns the bounding box of the polygon.)#" )
        .def("Closed",
             (Standard_Boolean (Intf_Polygon2d::*)() const) static_cast<Standard_Boolean (Intf_Polygon2d::*)() const>(&Intf_Polygon2d::Closed),
             R"#(Returns True if the polyline is closed.)#" )
        .def("DeflectionOverEstimation",
             (Standard_Real (Intf_Polygon2d::*)() const) static_cast<Standard_Real (Intf_Polygon2d::*)() const>(&Intf_Polygon2d::DeflectionOverEstimation),
             R"#(Returns the tolerance of the polygon.)#" )
        .def("NbSegments",
             (Standard_Integer (Intf_Polygon2d::*)() const) static_cast<Standard_Integer (Intf_Polygon2d::*)() const>(&Intf_Polygon2d::NbSegments),
             R"#(Returns the number of Segments in the polyline.)#" )
        .def("Segment",
             (void (Intf_Polygon2d::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<void (Intf_Polygon2d::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&Intf_Polygon2d::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
        .def("Bounding",
             (const Bnd_Box2d & (Intf_Polygon2d::*)() const) static_cast<const Bnd_Box2d & (Intf_Polygon2d::*)() const>(&Intf_Polygon2d::Bounding),
             R"#(Returns the bounding box of the polygon.)#" )
;


    static_cast<py::class_<Intf_TangentZone ,std::unique_ptr<Intf_TangentZone>  >>(m.attr("Intf_TangentZone"))
        .def(py::init<  >()  )
        .def(py::init< const Intf_TangentZone & >()  , py::arg("Other") )
        .def("NumberOfPoints",
             (Standard_Integer (Intf_TangentZone::*)() const) static_cast<Standard_Integer (Intf_TangentZone::*)() const>(&Intf_TangentZone::NumberOfPoints),
             R"#(Returns number of SectionPoint in this TangentZone.)#" )
        .def("GetPoint",
             (const Intf_SectionPoint & (Intf_TangentZone::*)( const Standard_Integer  ) const) static_cast<const Intf_SectionPoint & (Intf_TangentZone::*)( const Standard_Integer  ) const>(&Intf_TangentZone::GetPoint),
             R"#(Gives the SectionPoint of address <Index> in the TangentZone.)#"  , py::arg("Index"))
        .def("IsEqual",
             (Standard_Boolean (Intf_TangentZone::*)( const Intf_TangentZone &  ) const) static_cast<Standard_Boolean (Intf_TangentZone::*)( const Intf_TangentZone &  ) const>(&Intf_TangentZone::IsEqual),
             R"#(Compares two TangentZones.)#"  , py::arg("Other"))
        .def("Contains",
             (Standard_Boolean (Intf_TangentZone::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Boolean (Intf_TangentZone::*)( const Intf_SectionPoint &  ) const>(&Intf_TangentZone::Contains),
             R"#(Checks if <ThePI> is in TangentZone.)#"  , py::arg("ThePI"))
        .def("ParamOnFirst",
             (void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const>(&Intf_TangentZone::ParamOnFirst),
             R"#(Gives the parameter range of the TangentZone on the first argument of the Interference. (Usable only for polygon))#"  , py::arg("paraMin"),  py::arg("paraMax"))
        .def("ParamOnSecond",
             (void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const>(&Intf_TangentZone::ParamOnSecond),
             R"#(Gives the parameter range of the TangentZone on the second argument of the Interference. (Usable only for polygon))#"  , py::arg("paraMin"),  py::arg("paraMax"))
        .def("InfoFirst",
             (void (Intf_TangentZone::*)( Standard_Integer & ,  Standard_Real & ,  Standard_Integer & ,  Standard_Real &  ) const) static_cast<void (Intf_TangentZone::*)( Standard_Integer & ,  Standard_Real & ,  Standard_Integer & ,  Standard_Real &  ) const>(&Intf_TangentZone::InfoFirst),
             R"#(Gives information about the first argument of the Interference. (Usable only for polygon))#"  , py::arg("segMin"),  py::arg("paraMin"),  py::arg("segMax"),  py::arg("paraMax"))
        .def("InfoSecond",
             (void (Intf_TangentZone::*)( Standard_Integer & ,  Standard_Real & ,  Standard_Integer & ,  Standard_Real &  ) const) static_cast<void (Intf_TangentZone::*)( Standard_Integer & ,  Standard_Real & ,  Standard_Integer & ,  Standard_Real &  ) const>(&Intf_TangentZone::InfoSecond),
             R"#(Gives informations about the second argument of the Interference. (Usable only for polygon))#"  , py::arg("segMin"),  py::arg("paraMin"),  py::arg("segMax"),  py::arg("paraMax"))
        .def("RangeContains",
             (Standard_Boolean (Intf_TangentZone::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Boolean (Intf_TangentZone::*)( const Intf_SectionPoint &  ) const>(&Intf_TangentZone::RangeContains),
             R"#(Returns True if <ThePI> is in the parameter range of the TangentZone.)#"  , py::arg("ThePI"))
        .def("HasCommonRange",
             (Standard_Boolean (Intf_TangentZone::*)( const Intf_TangentZone &  ) const) static_cast<Standard_Boolean (Intf_TangentZone::*)( const Intf_TangentZone &  ) const>(&Intf_TangentZone::HasCommonRange),
             R"#(Returns True if the TangentZone <Other> has a common part with <me>.)#"  , py::arg("Other"))
        .def("Append",
             (void (Intf_TangentZone::*)( const Intf_SectionPoint &  ) ) static_cast<void (Intf_TangentZone::*)( const Intf_SectionPoint &  ) >(&Intf_TangentZone::Append),
             R"#(Adds a SectionPoint to the TangentZone.)#"  , py::arg("Pi"))
        .def("Append",
             (void (Intf_TangentZone::*)( const Intf_TangentZone &  ) ) static_cast<void (Intf_TangentZone::*)( const Intf_TangentZone &  ) >(&Intf_TangentZone::Append),
             R"#(Adds the TangentZone <Tzi> to <me>.)#"  , py::arg("Tzi"))
        .def("Insert",
             (Standard_Boolean (Intf_TangentZone::*)( const Intf_SectionPoint &  ) ) static_cast<Standard_Boolean (Intf_TangentZone::*)( const Intf_SectionPoint &  ) >(&Intf_TangentZone::Insert),
             R"#(Inserts a SectionPoint in the TangentZone.)#"  , py::arg("Pi"))
        .def("PolygonInsert",
             (void (Intf_TangentZone::*)( const Intf_SectionPoint &  ) ) static_cast<void (Intf_TangentZone::*)( const Intf_SectionPoint &  ) >(&Intf_TangentZone::PolygonInsert),
             R"#(Inserts a point in the polygonal TangentZone.)#"  , py::arg("Pi"))
        .def("InsertBefore",
             (void (Intf_TangentZone::*)( const Standard_Integer ,  const Intf_SectionPoint &  ) ) static_cast<void (Intf_TangentZone::*)( const Standard_Integer ,  const Intf_SectionPoint &  ) >(&Intf_TangentZone::InsertBefore),
             R"#(Inserts a SectionPoint before <Index> in the TangentZone.)#"  , py::arg("Index"),  py::arg("Pi"))
        .def("InsertAfter",
             (void (Intf_TangentZone::*)( const Standard_Integer ,  const Intf_SectionPoint &  ) ) static_cast<void (Intf_TangentZone::*)( const Standard_Integer ,  const Intf_SectionPoint &  ) >(&Intf_TangentZone::InsertAfter),
             R"#(Inserts a SectionPoint after <Index> in the TangentZone.)#"  , py::arg("Index"),  py::arg("Pi"))
        .def("Dump",
             (void (Intf_TangentZone::*)( const Standard_Integer  ) const) static_cast<void (Intf_TangentZone::*)( const Standard_Integer  ) const>(&Intf_TangentZone::Dump),
             R"#(None)#"  , py::arg("Indent"))
        .def("NumberOfPoints",
             (Standard_Integer (Intf_TangentZone::*)() const) static_cast<Standard_Integer (Intf_TangentZone::*)() const>(&Intf_TangentZone::NumberOfPoints),
             R"#(Returns number of SectionPoint in this TangentZone.)#" )
        .def("ParamOnFirst",
             (void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const>(&Intf_TangentZone::ParamOnFirst),
             R"#(Gives the parameter range of the TangentZone on the first argument of the Interference. (Usable only for polygon))#"  , py::arg("paraMin"),  py::arg("paraMax"))
        .def("ParamOnSecond",
             (void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Intf_TangentZone::*)( Standard_Real & ,  Standard_Real &  ) const>(&Intf_TangentZone::ParamOnSecond),
             R"#(Gives the parameter range of the TangentZone on the second argument of the Interference. (Usable only for polygon))#"  , py::arg("paraMin"),  py::arg("paraMax"))
;

    register_default_constructor<Intf ,std::unique_ptr<Intf>>(m,"Intf");

    static_cast<py::class_<Intf ,std::unique_ptr<Intf>  >>(m.attr("Intf"))
        .def_static("PlaneEquation_s",
                    (void (*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  gp_XYZ & ,  Standard_Real &  ) ) static_cast<void (*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  gp_XYZ & ,  Standard_Real &  ) >(&Intf::PlaneEquation),
                    R"#(Computes the interference between two polygons in 2d. Result : points of intersections and zones of tangence. Computes the interference between a polygon or a straight line and a polyhedron. Points of intersection and zones of tangence. Give the plane equation of the triangle <P1> <P2> <P3>.)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("NormalVector"),  py::arg("PolarDistance"))
        .def_static("Contain_s",
                    (Standard_Boolean (*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<Standard_Boolean (*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&Intf::Contain),
                    R"#(Compute if the triangle <P1> <P2> <P3> contain <ThePnt>.)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("ThePnt"))
;


    static_cast<py::class_<Intf_InterferencePolygon2d ,std::unique_ptr<Intf_InterferencePolygon2d>  , Intf_Interference >>(m.attr("Intf_InterferencePolygon2d"))
        .def(py::init<  >()  )
        .def(py::init< const Intf_Polygon2d &,const Intf_Polygon2d & >()  , py::arg("Obje1"),  py::arg("Obje2") )
        .def(py::init< const Intf_Polygon2d & >()  , py::arg("Obje") )
        .def("Perform",
             (void (Intf_InterferencePolygon2d::*)( const Intf_Polygon2d & ,  const Intf_Polygon2d &  ) ) static_cast<void (Intf_InterferencePolygon2d::*)( const Intf_Polygon2d & ,  const Intf_Polygon2d &  ) >(&Intf_InterferencePolygon2d::Perform),
             R"#(Computes an interference between two Polygons.)#"  , py::arg("Obje1"),  py::arg("Obje2"))
        .def("Perform",
             (void (Intf_InterferencePolygon2d::*)( const Intf_Polygon2d &  ) ) static_cast<void (Intf_InterferencePolygon2d::*)( const Intf_Polygon2d &  ) >(&Intf_InterferencePolygon2d::Perform),
             R"#(Computes the self interference of a Polygon.)#"  , py::arg("Obje"))
        .def("Pnt2dValue",
             (gp_Pnt2d (Intf_InterferencePolygon2d::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (Intf_InterferencePolygon2d::*)( const Standard_Integer  ) const>(&Intf_InterferencePolygon2d::Pnt2dValue),
             R"#(Gives the geometrical 2d point of the intersection point at address <Index> in the interference.)#"  , py::arg("Index"))
;


    static_cast<py::class_<Intf_SectionLine ,std::unique_ptr<Intf_SectionLine>  >>(m.attr("Intf_SectionLine"))
        .def(py::init<  >()  )
        .def(py::init< const Intf_SectionLine & >()  , py::arg("Other") )
        .def("NumberOfPoints",
             (Standard_Integer (Intf_SectionLine::*)() const) static_cast<Standard_Integer (Intf_SectionLine::*)() const>(&Intf_SectionLine::NumberOfPoints),
             R"#(Returns number of points in this SectionLine.)#" )
        .def("GetPoint",
             (const Intf_SectionPoint & (Intf_SectionLine::*)( const Standard_Integer  ) const) static_cast<const Intf_SectionPoint & (Intf_SectionLine::*)( const Standard_Integer  ) const>(&Intf_SectionLine::GetPoint),
             R"#(Gives the point of intersection of address <Index> in the SectionLine.)#"  , py::arg("Index"))
        .def("IsClosed",
             (Standard_Boolean (Intf_SectionLine::*)() const) static_cast<Standard_Boolean (Intf_SectionLine::*)() const>(&Intf_SectionLine::IsClosed),
             R"#(Returns True if the SectionLine is closed.)#" )
        .def("Contains",
             (Standard_Boolean (Intf_SectionLine::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Boolean (Intf_SectionLine::*)( const Intf_SectionPoint &  ) const>(&Intf_SectionLine::Contains),
             R"#(Returns True if ThePI is in the SectionLine <me>.)#"  , py::arg("ThePI"))
        .def("IsEnd",
             (Standard_Integer (Intf_SectionLine::*)( const Intf_SectionPoint &  ) const) static_cast<Standard_Integer (Intf_SectionLine::*)( const Intf_SectionPoint &  ) const>(&Intf_SectionLine::IsEnd),
             R"#(Checks if <ThePI> is an end of the SectionLine. Returns 1 for the beginning, 2 for the end, otherwise 0.)#"  , py::arg("ThePI"))
        .def("IsEqual",
             (Standard_Boolean (Intf_SectionLine::*)( const Intf_SectionLine &  ) const) static_cast<Standard_Boolean (Intf_SectionLine::*)( const Intf_SectionLine &  ) const>(&Intf_SectionLine::IsEqual),
             R"#(Compares two SectionLines.)#"  , py::arg("Other"))
        .def("Append",
             (void (Intf_SectionLine::*)( const Intf_SectionPoint &  ) ) static_cast<void (Intf_SectionLine::*)( const Intf_SectionPoint &  ) >(&Intf_SectionLine::Append),
             R"#(Adds a point at the end of the SectionLine.)#"  , py::arg("Pi"))
        .def("Append",
             (void (Intf_SectionLine::*)( Intf_SectionLine &  ) ) static_cast<void (Intf_SectionLine::*)( Intf_SectionLine &  ) >(&Intf_SectionLine::Append),
             R"#(Concatenates the SectionLine <LS> at the end of the SectionLine <me>.)#"  , py::arg("LS"))
        .def("Prepend",
             (void (Intf_SectionLine::*)( const Intf_SectionPoint &  ) ) static_cast<void (Intf_SectionLine::*)( const Intf_SectionPoint &  ) >(&Intf_SectionLine::Prepend),
             R"#(Adds a point to the beginning of the SectionLine <me>.)#"  , py::arg("Pi"))
        .def("Prepend",
             (void (Intf_SectionLine::*)( Intf_SectionLine &  ) ) static_cast<void (Intf_SectionLine::*)( Intf_SectionLine &  ) >(&Intf_SectionLine::Prepend),
             R"#(Concatenates a SectionLine <LS> at the beginning of the SectionLine <me>.)#"  , py::arg("LS"))
        .def("Reverse",
             (void (Intf_SectionLine::*)() ) static_cast<void (Intf_SectionLine::*)() >(&Intf_SectionLine::Reverse),
             R"#(Reverses the order of the elements of the SectionLine.)#" )
        .def("Close",
             (void (Intf_SectionLine::*)() ) static_cast<void (Intf_SectionLine::*)() >(&Intf_SectionLine::Close),
             R"#(Closes the SectionLine.)#" )
        .def("Dump",
             (void (Intf_SectionLine::*)( const Standard_Integer  ) const) static_cast<void (Intf_SectionLine::*)( const Standard_Integer  ) const>(&Intf_SectionLine::Dump),
             R"#(None)#"  , py::arg("Indent"))
        .def("NumberOfPoints",
             (Standard_Integer (Intf_SectionLine::*)() const) static_cast<Standard_Integer (Intf_SectionLine::*)() const>(&Intf_SectionLine::NumberOfPoints),
             R"#(Returns number of points in this SectionLine.)#" )
;

// functions
// ./opencascade/Intf_SeqOfSectionLine.hxx
// ./opencascade/Intf_SectionPoint.hxx
// ./opencascade/Intf.hxx
// ./opencascade/Intf_Array1OfLin.hxx
// ./opencascade/Intf_SeqOfTangentZone.hxx
// ./opencascade/Intf_PIType.hxx
// ./opencascade/Intf_Tool.hxx
// ./opencascade/Intf_SectionLine.hxx
// ./opencascade/Intf_Polygon2d.hxx
// ./opencascade/Intf_InterferencePolygon2d.hxx
// ./opencascade/Intf_SeqOfSectionPoint.hxx
// ./opencascade/Intf_Interference.hxx
// ./opencascade/Intf_TangentZone.hxx

// operators

// register typdefs
// ./opencascade/Intf_SeqOfSectionLine.hxx
    register_template_NCollection_Sequence<Intf_SectionLine>(m,"Intf_SeqOfSectionLine");  
// ./opencascade/Intf_SectionPoint.hxx
// ./opencascade/Intf.hxx
// ./opencascade/Intf_Array1OfLin.hxx
    register_template_NCollection_Array1<gp_Lin>(m,"Intf_Array1OfLin");  
// ./opencascade/Intf_SeqOfTangentZone.hxx
    register_template_NCollection_Sequence<Intf_TangentZone>(m,"Intf_SeqOfTangentZone");  
// ./opencascade/Intf_PIType.hxx
// ./opencascade/Intf_Tool.hxx
// ./opencascade/Intf_SectionLine.hxx
// ./opencascade/Intf_Polygon2d.hxx
// ./opencascade/Intf_InterferencePolygon2d.hxx
// ./opencascade/Intf_SeqOfSectionPoint.hxx
    register_template_NCollection_Sequence<Intf_SectionPoint>(m,"Intf_SeqOfSectionPoint");  
// ./opencascade/Intf_Interference.hxx
// ./opencascade/Intf_TangentZone.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
