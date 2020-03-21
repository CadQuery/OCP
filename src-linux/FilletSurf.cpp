
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>

// module includes
#include <FilletSurf_Builder.hxx>
#include <FilletSurf_ErrorTypeStatus.hxx>
#include <FilletSurf_InternalBuilder.hxx>
#include <FilletSurf_StatusDone.hxx>
#include <FilletSurf_StatusType.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FilletSurf(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("FilletSurf"));


//Python trampoline classes

// classes


    static_cast<py::class_<FilletSurf_Builder , shared_ptr<FilletSurf_Builder> >>(m.attr("FilletSurf_Builder"))
    // constructors
        .def(py::init< const TopoDS_Shape &, const NCollection_List<TopoDS_Shape> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("E"),  py::arg("R"),  py::arg("Ta")=static_cast<const Standard_Real>(1.0e-2),  py::arg("Tapp3d")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Tapp2d")=static_cast<const Standard_Real>(1.0e-5) )
    // custom constructors
    // methods
        .def("Perform",
             (void (FilletSurf_Builder::*)() ) static_cast<void (FilletSurf_Builder::*)() >(&FilletSurf_Builder::Perform),
             R"#(---Purpose computation of the fillet (list of NUBS))#" )
        .def("Simulate",
             (void (FilletSurf_Builder::*)() ) static_cast<void (FilletSurf_Builder::*)() >(&FilletSurf_Builder::Simulate),
             R"#(None)#" )
        .def("IsDone",
             (FilletSurf_StatusDone (FilletSurf_Builder::*)() const) static_cast<FilletSurf_StatusDone (FilletSurf_Builder::*)() const>(&FilletSurf_Builder::IsDone),
             R"#(gives the status about the computation of the fillet returns: IsOK :no problem during the computation IsNotOk: no result is produced IsPartial: the result is partial)#" )
        .def("StatusError",
             (FilletSurf_ErrorTypeStatus (FilletSurf_Builder::*)() const) static_cast<FilletSurf_ErrorTypeStatus (FilletSurf_Builder::*)() const>(&FilletSurf_Builder::StatusError),
             R"#(gives informations about error status if IsDone=IsNotOk returns EdgeNotG1: the edges are not G1 FacesNotG1 : two connected faces on a same support are not G1 EdgeNotOnShape: the edge is not on shape NotSharpEdge: the edge is not sharp PbFilletCompute: problem during the computation of the fillet)#" )
        .def("NbSurface",
             (Standard_Integer (FilletSurf_Builder::*)() const) static_cast<Standard_Integer (FilletSurf_Builder::*)() const>(&FilletSurf_Builder::NbSurface),
             R"#(gives the number of NUBS surfaces of the Fillet.)#" )
        .def("SurfaceFillet",
             (const opencascade::handle<Geom_Surface> & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Surface> & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::SurfaceFillet),
             R"#(gives the NUBS surface of index Index.)#"  , py::arg("Index"))
        .def("TolApp3d",
             (Standard_Real (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<Standard_Real (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::TolApp3d),
             R"#(gives the 3d tolerance reached during approximation of surface of index Index)#"  , py::arg("Index"))
        .def("SupportFace1",
             (const TopoDS_Face & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::SupportFace1),
             R"#(gives the first support face relative to SurfaceFillet(Index);)#"  , py::arg("Index"))
        .def("SupportFace2",
             (const TopoDS_Face & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::SupportFace2),
             R"#(gives the second support face relative to SurfaceFillet(Index);)#"  , py::arg("Index"))
        .def("CurveOnFace1",
             (const opencascade::handle<Geom_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::CurveOnFace1),
             R"#(gives the 3d curve of SurfaceFillet(Index) on SupportFace1(Index))#"  , py::arg("Index"))
        .def("CurveOnFace2",
             (const opencascade::handle<Geom_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::CurveOnFace2),
             R"#(gives the 3d curve of SurfaceFillet(Index) on SupportFace2(Index))#"  , py::arg("Index"))
        .def("PCurveOnFace1",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::PCurveOnFace1),
             R"#(gives the PCurve associated to CurvOnSup1(Index) on the support face)#"  , py::arg("Index"))
        .def("PCurve1OnFillet",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::PCurve1OnFillet),
             R"#(gives the PCurve associated to CurveOnFace1(Index) on the Fillet)#"  , py::arg("Index"))
        .def("PCurveOnFace2",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::PCurveOnFace2),
             R"#(gives the PCurve associated to CurveOnSup2(Index) on the support face)#"  , py::arg("Index"))
        .def("PCurve2OnFillet",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::PCurve2OnFillet),
             R"#(gives the PCurve associated to CurveOnSup2(Index) on the fillet)#"  , py::arg("Index"))
        .def("FirstParameter",
             (Standard_Real (FilletSurf_Builder::*)() const) static_cast<Standard_Real (FilletSurf_Builder::*)() const>(&FilletSurf_Builder::FirstParameter),
             R"#(gives the parameter of the fillet on the first edge.)#" )
        .def("LastParameter",
             (Standard_Real (FilletSurf_Builder::*)() const) static_cast<Standard_Real (FilletSurf_Builder::*)() const>(&FilletSurf_Builder::LastParameter),
             R"#(gives the parameter of the fillet on the last edge)#" )
        .def("StartSectionStatus",
             (FilletSurf_StatusType (FilletSurf_Builder::*)() const) static_cast<FilletSurf_StatusType (FilletSurf_Builder::*)() const>(&FilletSurf_Builder::StartSectionStatus),
             R"#(None)#" )
        .def("EndSectionStatus",
             (FilletSurf_StatusType (FilletSurf_Builder::*)() const) static_cast<FilletSurf_StatusType (FilletSurf_Builder::*)() const>(&FilletSurf_Builder::EndSectionStatus),
             R"#(None)#" )
        .def("NbSection",
             (Standard_Integer (FilletSurf_Builder::*)( const Standard_Integer ) const) static_cast<Standard_Integer (FilletSurf_Builder::*)( const Standard_Integer ) const>(&FilletSurf_Builder::NbSection),
             R"#(None)#"  , py::arg("IndexSurf"))
        .def("Section",
             (void (FilletSurf_Builder::*)( const Standard_Integer , const Standard_Integer , opencascade::handle<Geom_TrimmedCurve> & ) const) static_cast<void (FilletSurf_Builder::*)( const Standard_Integer , const Standard_Integer , opencascade::handle<Geom_TrimmedCurve> & ) const>(&FilletSurf_Builder::Section),
             R"#(None)#"  , py::arg("IndexSurf"),  py::arg("IndexSec"),  py::arg("Circ"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FilletSurf_InternalBuilder , shared_ptr<FilletSurf_InternalBuilder> , ChFi3d_FilBuilder>>(m.attr("FilletSurf_InternalBuilder"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const ChFi3d_FilletShape,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("FShape")=static_cast<const ChFi3d_FilletShape>(ChFi3d_Polynomial),  py::arg("Ta")=static_cast<const Standard_Real>(1.0e-2),  py::arg("Tapp3d")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Tapp2d")=static_cast<const Standard_Real>(1.0e-5) )
    // custom constructors
    // methods
        .def("Add",
             (Standard_Integer (FilletSurf_InternalBuilder::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Real ) ) static_cast<Standard_Integer (FilletSurf_InternalBuilder::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Real ) >(&FilletSurf_InternalBuilder::Add),
             R"#(Initializes the contour with a list of Edges 0 : no problem 1 : empty list 2 : the edges are not G1 3 : two connected faces on a same support are not G1 4 : the edge is not on shape 5 : NotSharpEdge: the edge is not sharp)#"  , py::arg("E"),  py::arg("R"))
        .def("Perform",
             (void (FilletSurf_InternalBuilder::*)() ) static_cast<void (FilletSurf_InternalBuilder::*)() >(&FilletSurf_InternalBuilder::Perform),
             R"#(None)#" )
        .def("Done",
             (Standard_Boolean (FilletSurf_InternalBuilder::*)() const) static_cast<Standard_Boolean (FilletSurf_InternalBuilder::*)() const>(&FilletSurf_InternalBuilder::Done),
             R"#(None)#" )
        .def("NbSurface",
             (Standard_Integer (FilletSurf_InternalBuilder::*)() const) static_cast<Standard_Integer (FilletSurf_InternalBuilder::*)() const>(&FilletSurf_InternalBuilder::NbSurface),
             R"#(gives the number of NUBS surfaces of the Fillet.)#" )
        .def("SurfaceFillet",
             (const opencascade::handle<Geom_Surface> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Surface> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::SurfaceFillet),
             R"#(gives the NUBS surface of index Index.)#"  , py::arg("Index"))
        .def("TolApp3d",
             (Standard_Real (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<Standard_Real (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::TolApp3d),
             R"#(gives the 3d tolerance reached during approximation of the surface of index Index)#"  , py::arg("Index"))
        .def("SupportFace1",
             (const TopoDS_Face & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::SupportFace1),
             R"#(gives the first support face relative to SurfaceFillet(Index);)#"  , py::arg("Index"))
        .def("SupportFace2",
             (const TopoDS_Face & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::SupportFace2),
             R"#(gives the second support face relative to SurfaceFillet(Index);)#"  , py::arg("Index"))
        .def("CurveOnFace1",
             (const opencascade::handle<Geom_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::CurveOnFace1),
             R"#(gives the 3d curve of SurfaceFillet(Index) on SupportFace1(Index))#"  , py::arg("Index"))
        .def("CurveOnFace2",
             (const opencascade::handle<Geom_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::CurveOnFace2),
             R"#(gives the 3d curve of SurfaceFillet(Index) on SupportFace2(Index))#"  , py::arg("Index"))
        .def("PCurveOnFace1",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::PCurveOnFace1),
             R"#(gives the PCurve associated to CurvOnSup1(Index) on the support face)#"  , py::arg("Index"))
        .def("PCurve1OnFillet",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::PCurve1OnFillet),
             R"#(gives the PCurve associated to CurveOnFace1(Index) on the Fillet)#"  , py::arg("Index"))
        .def("PCurveOnFace2",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::PCurveOnFace2),
             R"#(gives the PCurve associated to CurveOnSup2(Index) on the support face)#"  , py::arg("Index"))
        .def("PCurve2OnFillet",
             (const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::PCurve2OnFillet),
             R"#(gives the PCurve associated to CurveOnSup2(Index) on the fillet)#"  , py::arg("Index"))
        .def("FirstParameter",
             (Standard_Real (FilletSurf_InternalBuilder::*)() const) static_cast<Standard_Real (FilletSurf_InternalBuilder::*)() const>(&FilletSurf_InternalBuilder::FirstParameter),
             R"#(gives the parameter of the fillet on the first edge.)#" )
        .def("LastParameter",
             (Standard_Real (FilletSurf_InternalBuilder::*)() const) static_cast<Standard_Real (FilletSurf_InternalBuilder::*)() const>(&FilletSurf_InternalBuilder::LastParameter),
             R"#(gives the parameter of the fillet on the last edge)#" )
        .def("StartSectionStatus",
             (FilletSurf_StatusType (FilletSurf_InternalBuilder::*)() const) static_cast<FilletSurf_StatusType (FilletSurf_InternalBuilder::*)() const>(&FilletSurf_InternalBuilder::StartSectionStatus),
             R"#(None)#" )
        .def("EndSectionStatus",
             (FilletSurf_StatusType (FilletSurf_InternalBuilder::*)() const) static_cast<FilletSurf_StatusType (FilletSurf_InternalBuilder::*)() const>(&FilletSurf_InternalBuilder::EndSectionStatus),
             R"#(None)#" )
        .def("Simulate",
             (void (FilletSurf_InternalBuilder::*)() ) static_cast<void (FilletSurf_InternalBuilder::*)() >(&FilletSurf_InternalBuilder::Simulate),
             R"#(None)#" )
        .def("NbSection",
             (Standard_Integer (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const) static_cast<Standard_Integer (FilletSurf_InternalBuilder::*)( const Standard_Integer ) const>(&FilletSurf_InternalBuilder::NbSection),
             R"#(None)#"  , py::arg("IndexSurf"))
        .def("Section",
             (void (FilletSurf_InternalBuilder::*)( const Standard_Integer , const Standard_Integer , opencascade::handle<Geom_TrimmedCurve> & ) const) static_cast<void (FilletSurf_InternalBuilder::*)( const Standard_Integer , const Standard_Integer , opencascade::handle<Geom_TrimmedCurve> & ) const>(&FilletSurf_InternalBuilder::Section),
             R"#(None)#"  , py::arg("IndexSurf"),  py::arg("IndexSec"),  py::arg("Circ"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/FilletSurf_InternalBuilder.hxx
// ./opencascade/FilletSurf_ErrorTypeStatus.hxx
// ./opencascade/FilletSurf_StatusDone.hxx
// ./opencascade/FilletSurf_Builder.hxx
// ./opencascade/FilletSurf_StatusType.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
