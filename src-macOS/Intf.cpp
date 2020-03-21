
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Intf_Polygon2d.hxx>
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
// ./opencascade/Intf_SeqOfTangentZone.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Intf_Array1OfLin.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Intf_SeqOfSectionPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Intf_SeqOfSectionLine.hxx
#include "NCollection_tmpl.hxx"


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

    // default constructor
    register_default_constructor<Intf , shared_ptr<Intf>>(m,"Intf");

    static_cast<py::class_<Intf , shared_ptr<Intf> >>(m.attr("Intf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intf_Interference , shared_ptr_nodelete<Intf_Interference> >>(m.attr("Intf_Interference"))
    // constructors
    // custom constructors
    // methods
        .def("NbSectionPoints",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionPoints),
             R"#(Gives the number of points of intersection in the interference.)#" )
        .def("PntValue",
             (const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer ) const) static_cast<const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer ) const>(&Intf_Interference::PntValue),
             R"#(Gives the point of intersection of address Index in the interference.)#"  , py::arg("Index"))
        .def("NbSectionLines",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionLines),
             R"#(Gives the number of polylines of intersection in the interference.)#" )
        .def("LineValue",
             (const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer ) const) static_cast<const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer ) const>(&Intf_Interference::LineValue),
             R"#(Gives the polyline of intersection at address <Index> in the interference.)#"  , py::arg("Index"))
        .def("NbTangentZones",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbTangentZones),
             R"#(Gives the number of zones of tangence in the interference.)#" )
        .def("ZoneValue",
             (const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer ) const) static_cast<const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer ) const>(&Intf_Interference::ZoneValue),
             R"#(Gives the zone of tangence at address Index in the interference.)#"  , py::arg("Index"))
        .def("GetTolerance",
             (Standard_Real (Intf_Interference::*)() const) static_cast<Standard_Real (Intf_Interference::*)() const>(&Intf_Interference::GetTolerance),
             R"#(Gives the tolerance used for the calculation.)#" )
        .def("NbSectionPoints",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionPoints),
             R"#(Gives the number of points of intersection in the interference.)#" )
        .def("PntValue",
             (const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer ) const) static_cast<const Intf_SectionPoint & (Intf_Interference::*)( const Standard_Integer ) const>(&Intf_Interference::PntValue),
             R"#(Gives the point of intersection of address Index in the interference.)#"  , py::arg("Index"))
        .def("NbSectionLines",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbSectionLines),
             R"#(Gives the number of polylines of intersection in the interference.)#" )
        .def("LineValue",
             (const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer ) const) static_cast<const Intf_SectionLine & (Intf_Interference::*)( const Standard_Integer ) const>(&Intf_Interference::LineValue),
             R"#(Gives the polyline of intersection at address <Index> in the interference.)#"  , py::arg("Index"))
        .def("NbTangentZones",
             (Standard_Integer (Intf_Interference::*)() const) static_cast<Standard_Integer (Intf_Interference::*)() const>(&Intf_Interference::NbTangentZones),
             R"#(Gives the number of zones of tangence in the interference.)#" )
        .def("ZoneValue",
             (const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer ) const) static_cast<const Intf_TangentZone & (Intf_Interference::*)( const Standard_Integer ) const>(&Intf_Interference::ZoneValue),
             R"#(Gives the zone of tangence at address Index in the interference.)#"  , py::arg("Index"))
        .def("GetTolerance",
             (Standard_Real (Intf_Interference::*)() const) static_cast<Standard_Real (Intf_Interference::*)() const>(&Intf_Interference::GetTolerance),
             R"#(Gives the tolerance used for the calculation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intf_Polygon2d , shared_ptr<Intf_Polygon2d>,Py_Intf_Polygon2d >>(m.attr("Intf_Polygon2d"))
    // constructors
    // custom constructors
    // methods
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
             (void (Intf_Polygon2d::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (Intf_Polygon2d::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const>(&Intf_Polygon2d::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
        .def("Bounding",
             (const Bnd_Box2d & (Intf_Polygon2d::*)() const) static_cast<const Bnd_Box2d & (Intf_Polygon2d::*)() const>(&Intf_Polygon2d::Bounding),
             R"#(Returns the bounding box of the polygon.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intf_SectionLine , shared_ptr<Intf_SectionLine> >>(m.attr("Intf_SectionLine"))
    // constructors
    // custom constructors
    // methods
        .def("NumberOfPoints",
             (Standard_Integer (Intf_SectionLine::*)() const) static_cast<Standard_Integer (Intf_SectionLine::*)() const>(&Intf_SectionLine::NumberOfPoints),
             R"#(Returns number of points in this SectionLine.)#" )
        .def("NumberOfPoints",
             (Standard_Integer (Intf_SectionLine::*)() const) static_cast<Standard_Integer (Intf_SectionLine::*)() const>(&Intf_SectionLine::NumberOfPoints),
             R"#(Returns number of points in this SectionLine.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intf_SectionPoint , shared_ptr<Intf_SectionPoint> >>(m.attr("Intf_SectionPoint"))
    // constructors
    // custom constructors
    // methods
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
             (Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint & ) const) static_cast<Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint & ) const>(&Intf_SectionPoint::IsEqual),
             R"#(Returns True if the two SectionPoint have the same logical informations.)#"  , py::arg("Other"))
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
             (Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint & ) const) static_cast<Standard_Boolean (Intf_SectionPoint::*)( const Intf_SectionPoint & ) const>(&Intf_SectionPoint::IsEqual),
             R"#(Returns True if the two SectionPoint have the same logical informations.)#"  , py::arg("Other"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intf_TangentZone , shared_ptr<Intf_TangentZone> >>(m.attr("Intf_TangentZone"))
    // constructors
    // custom constructors
    // methods
        .def("NumberOfPoints",
             (Standard_Integer (Intf_TangentZone::*)() const) static_cast<Standard_Integer (Intf_TangentZone::*)() const>(&Intf_TangentZone::NumberOfPoints),
             R"#(Returns number of SectionPoint in this TangentZone.)#" )
        .def("NumberOfPoints",
             (Standard_Integer (Intf_TangentZone::*)() const) static_cast<Standard_Integer (Intf_TangentZone::*)() const>(&Intf_TangentZone::NumberOfPoints),
             R"#(Returns number of SectionPoint in this TangentZone.)#" )
    // methods using call by reference i.s.o. return
        .def("ParamOnFirst",
             []( Intf_TangentZone &self   ){ Standard_Real  paraMin; Standard_Real  paraMax; self.ParamOnFirst(paraMin,paraMax); return std::make_tuple(paraMin,paraMax); },
             R"#(Gives the parameter range of the TangentZone on the first argument of the Interference. (Usable only for polygon))#" )
        .def("ParamOnSecond",
             []( Intf_TangentZone &self   ){ Standard_Real  paraMin; Standard_Real  paraMax; self.ParamOnSecond(paraMin,paraMax); return std::make_tuple(paraMin,paraMax); },
             R"#(Gives the parameter range of the TangentZone on the second argument of the Interference. (Usable only for polygon))#" )
        .def("ParamOnFirst",
             []( Intf_TangentZone &self   ){ Standard_Real  paraMin; Standard_Real  paraMax; self.ParamOnFirst(paraMin,paraMax); return std::make_tuple(paraMin,paraMax); },
             R"#(Gives the parameter range of the TangentZone on the first argument of the Interference. (Usable only for polygon))#" )
        .def("ParamOnSecond",
             []( Intf_TangentZone &self   ){ Standard_Real  paraMin; Standard_Real  paraMax; self.ParamOnSecond(paraMin,paraMax); return std::make_tuple(paraMin,paraMax); },
             R"#(Gives the parameter range of the TangentZone on the second argument of the Interference. (Usable only for polygon))#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intf_Tool , shared_ptr<Intf_Tool> >>(m.attr("Intf_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intf_InterferencePolygon2d , shared_ptr<Intf_InterferencePolygon2d> , Intf_Interference>>(m.attr("Intf_InterferencePolygon2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Intf_SectionLine.hxx
// ./opencascade/Intf_InterferencePolygon2d.hxx
// ./opencascade/Intf_SeqOfTangentZone.hxx
// ./opencascade/Intf_Polygon2d.hxx
// ./opencascade/Intf_Array1OfLin.hxx
// ./opencascade/Intf.hxx
// ./opencascade/Intf_Tool.hxx
// ./opencascade/Intf_SectionPoint.hxx
// ./opencascade/Intf_PIType.hxx
// ./opencascade/Intf_SeqOfSectionPoint.hxx
// ./opencascade/Intf_TangentZone.hxx
// ./opencascade/Intf_Interference.hxx
// ./opencascade/Intf_SeqOfSectionLine.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Intf_TangentZone>(m,"Intf_SeqOfTangentZone");
    register_template_NCollection_Array1<gp_Lin>(m,"Intf_Array1OfLin");
    register_template_NCollection_Sequence<Intf_SectionPoint>(m,"Intf_SeqOfSectionPoint");
    register_template_NCollection_Sequence<Intf_SectionLine>(m,"Intf_SeqOfSectionLine");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
