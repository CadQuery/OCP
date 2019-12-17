
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>

// module includes
#include <BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx>
#include <BRepTopAdaptor_FClass2d.hxx>
#include <BRepTopAdaptor_HVertex.hxx>
#include <BRepTopAdaptor_MapOfShapeTool.hxx>
#include <BRepTopAdaptor_SeqOfPtr.hxx>
#include <BRepTopAdaptor_Tool.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>

// template related includes
// ./opencascade/BRepTopAdaptor_MapOfShapeTool.hxx
#include "NCollection.hxx"
// ./opencascade/BRepTopAdaptor_MapOfShapeTool.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepTopAdaptor(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepTopAdaptor"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepTopAdaptor_Tool ,std::unique_ptr<BRepTopAdaptor_Tool>  >>(m.attr("BRepTopAdaptor_Tool"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const Standard_Real >()  , py::arg("F"),  py::arg("Tol2d") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("Surface"),  py::arg("Tol2d") )
        .def("Init",
             (void (BRepTopAdaptor_Tool::*)( const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<void (BRepTopAdaptor_Tool::*)( const TopoDS_Face & ,  const Standard_Real  ) >(&BRepTopAdaptor_Tool::Init),
             R"#(None)#"  , py::arg("F"),  py::arg("Tol2d"))
        .def("Init",
             (void (BRepTopAdaptor_Tool::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real  ) ) static_cast<void (BRepTopAdaptor_Tool::*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real  ) >(&BRepTopAdaptor_Tool::Init),
             R"#(None)#"  , py::arg("Surface"),  py::arg("Tol2d"))
        .def("GetTopolTool",
             (opencascade::handle<BRepTopAdaptor_TopolTool> (BRepTopAdaptor_Tool::*)() ) static_cast<opencascade::handle<BRepTopAdaptor_TopolTool> (BRepTopAdaptor_Tool::*)() >(&BRepTopAdaptor_Tool::GetTopolTool),
             R"#(None)#" )
        .def("SetTopolTool",
             (void (BRepTopAdaptor_Tool::*)( const opencascade::handle<BRepTopAdaptor_TopolTool> &  ) ) static_cast<void (BRepTopAdaptor_Tool::*)( const opencascade::handle<BRepTopAdaptor_TopolTool> &  ) >(&BRepTopAdaptor_Tool::SetTopolTool),
             R"#(None)#"  , py::arg("TT"))
        .def("GetSurface",
             (opencascade::handle<Adaptor3d_HSurface> (BRepTopAdaptor_Tool::*)() ) static_cast<opencascade::handle<Adaptor3d_HSurface> (BRepTopAdaptor_Tool::*)() >(&BRepTopAdaptor_Tool::GetSurface),
             R"#(None)#" )
        .def("Destroy",
             (void (BRepTopAdaptor_Tool::*)() ) static_cast<void (BRepTopAdaptor_Tool::*)() >(&BRepTopAdaptor_Tool::Destroy),
             R"#(None)#" )
;


    static_cast<py::class_<BRepTopAdaptor_TopolTool ,opencascade::handle<BRepTopAdaptor_TopolTool>  , Adaptor3d_TopolTool >>(m.attr("BRepTopAdaptor_TopolTool"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("Surface") )
        .def("Initialize",
             (void (BRepTopAdaptor_TopolTool::*)() ) static_cast<void (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::Initialize),
             R"#(None)#" )
        .def("Initialize",
             (void (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&BRepTopAdaptor_TopolTool::Initialize),
             R"#(None)#"  , py::arg("S"))
        .def("Initialize",
             (void (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BRepTopAdaptor_TopolTool::Initialize),
             R"#(None)#"  , py::arg("Curve"))
        .def("Init",
             (void (BRepTopAdaptor_TopolTool::*)() ) static_cast<void (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (BRepTopAdaptor_TopolTool::*)() ) static_cast<Standard_Boolean (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::More),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<Adaptor2d_HCurve2d> (BRepTopAdaptor_TopolTool::*)() ) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::Value),
             R"#(None)#" )
        .def("Next",
             (void (BRepTopAdaptor_TopolTool::*)() ) static_cast<void (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::Next),
             R"#(None)#" )
        .def("Edge",
             (Standard_Address (BRepTopAdaptor_TopolTool::*)() const) static_cast<Standard_Address (BRepTopAdaptor_TopolTool::*)() const>(&BRepTopAdaptor_TopolTool::Edge),
             R"#(None)#" )
        .def("InitVertexIterator",
             (void (BRepTopAdaptor_TopolTool::*)() ) static_cast<void (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::InitVertexIterator),
             R"#(None)#" )
        .def("MoreVertex",
             (Standard_Boolean (BRepTopAdaptor_TopolTool::*)() ) static_cast<Standard_Boolean (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::MoreVertex),
             R"#(None)#" )
        .def("Vertex",
             (opencascade::handle<Adaptor3d_HVertex> (BRepTopAdaptor_TopolTool::*)() ) static_cast<opencascade::handle<Adaptor3d_HVertex> (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::Vertex),
             R"#(None)#" )
        .def("NextVertex",
             (void (BRepTopAdaptor_TopolTool::*)() ) static_cast<void (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::NextVertex),
             R"#(None)#" )
        .def("Classify",
             (TopAbs_State (BRepTopAdaptor_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<TopAbs_State (BRepTopAdaptor_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) >(&BRepTopAdaptor_TopolTool::Classify),
             R"#(None)#"  , py::arg("P2d"),  py::arg("Tol"),  py::arg("RecadreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsThePointOn",
             (Standard_Boolean (BRepTopAdaptor_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (BRepTopAdaptor_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) >(&BRepTopAdaptor_TopolTool::IsThePointOn),
             R"#(see the code for specifications))#"  , py::arg("P2d"),  py::arg("Tol"),  py::arg("RecadreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Orientation",
             (TopAbs_Orientation (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<TopAbs_Orientation (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BRepTopAdaptor_TopolTool::Orientation),
             R"#(If the function returns the orientation of the arc. If the orientation is FORWARD or REVERSED, the arc is a "real" limit of the surface. If the orientation is INTERNAL or EXTERNAL, the arc is considered as an arc on the surface.)#"  , py::arg("C"))
        .def("Orientation",
             (TopAbs_Orientation (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) ) static_cast<TopAbs_Orientation (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) >(&BRepTopAdaptor_TopolTool::Orientation),
             R"#(If the function returns the orientation of the arc. If the orientation is FORWARD or REVERSED, the arc is a "real" limit of the surface. If the orientation is INTERNAL or EXTERNAL, the arc is considered as an arc on the surface.)#"  , py::arg("C"))
        .def("Destroy",
             (void (BRepTopAdaptor_TopolTool::*)() ) static_cast<void (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::Destroy),
             R"#(None)#" )
        .def("Has3d",
             (Standard_Boolean (BRepTopAdaptor_TopolTool::*)() const) static_cast<Standard_Boolean (BRepTopAdaptor_TopolTool::*)() const>(&BRepTopAdaptor_TopolTool::Has3d),
             R"#(answers if arcs and vertices may have 3d representations, so that we could use Tol3d and Pnt methods.)#" )
        .def("Tol3d",
             (Standard_Real (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) const) static_cast<Standard_Real (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) const>(&BRepTopAdaptor_TopolTool::Tol3d),
             R"#(returns 3d tolerance of the arc C)#"  , py::arg("C"))
        .def("Tol3d",
             (Standard_Real (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const) static_cast<Standard_Real (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const>(&BRepTopAdaptor_TopolTool::Tol3d),
             R"#(returns 3d tolerance of the vertex V)#"  , py::arg("V"))
        .def("Pnt",
             (gp_Pnt (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const) static_cast<gp_Pnt (BRepTopAdaptor_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const>(&BRepTopAdaptor_TopolTool::Pnt),
             R"#(returns 3d point of the vertex V)#"  , py::arg("V"))
        .def("ComputeSamplePoints",
             (void (BRepTopAdaptor_TopolTool::*)() ) static_cast<void (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::ComputeSamplePoints),
             R"#(None)#" )
        .def("NbSamplesU",
             (Standard_Integer (BRepTopAdaptor_TopolTool::*)() ) static_cast<Standard_Integer (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::NbSamplesU),
             R"#(compute the sample-points for the intersections algorithms)#" )
        .def("NbSamplesV",
             (Standard_Integer (BRepTopAdaptor_TopolTool::*)() ) static_cast<Standard_Integer (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::NbSamplesV),
             R"#(compute the sample-points for the intersections algorithms)#" )
        .def("NbSamples",
             (Standard_Integer (BRepTopAdaptor_TopolTool::*)() ) static_cast<Standard_Integer (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::NbSamples),
             R"#(compute the sample-points for the intersections algorithms)#" )
        .def("SamplePoint",
             (void (BRepTopAdaptor_TopolTool::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt &  ) ) static_cast<void (BRepTopAdaptor_TopolTool::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt &  ) >(&BRepTopAdaptor_TopolTool::SamplePoint),
             R"#(None)#"  , py::arg("Index"),  py::arg("P2d"),  py::arg("P3d"))
        .def("DomainIsInfinite",
             (Standard_Boolean (BRepTopAdaptor_TopolTool::*)() ) static_cast<Standard_Boolean (BRepTopAdaptor_TopolTool::*)() >(&BRepTopAdaptor_TopolTool::DomainIsInfinite),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTopAdaptor_TopolTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTopAdaptor_TopolTool::*)() const>(&BRepTopAdaptor_TopolTool::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTopAdaptor_TopolTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTopAdaptor_TopolTool::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepTopAdaptor_FClass2d ,std::unique_ptr<BRepTopAdaptor_FClass2d>  >>(m.attr("BRepTopAdaptor_FClass2d"))
        .def(py::init< const TopoDS_Face &,const Standard_Real >()  , py::arg("F"),  py::arg("Tol") )
        .def("PerformInfinitePoint",
             (TopAbs_State (BRepTopAdaptor_FClass2d::*)() const) static_cast<TopAbs_State (BRepTopAdaptor_FClass2d::*)() const>(&BRepTopAdaptor_FClass2d::PerformInfinitePoint),
             R"#(None)#" )
        .def("Perform",
             (TopAbs_State (BRepTopAdaptor_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Boolean  ) const) static_cast<TopAbs_State (BRepTopAdaptor_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Boolean  ) const>(&BRepTopAdaptor_FClass2d::Perform),
             R"#(None)#"  , py::arg("Puv"),  py::arg("RecadreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Destroy",
             (void (BRepTopAdaptor_FClass2d::*)() ) static_cast<void (BRepTopAdaptor_FClass2d::*)() >(&BRepTopAdaptor_FClass2d::Destroy),
             R"#(None)#" )
        .def("Copy",
             (const BRepTopAdaptor_FClass2d & (BRepTopAdaptor_FClass2d::*)( const BRepTopAdaptor_FClass2d &  ) const) static_cast<const BRepTopAdaptor_FClass2d & (BRepTopAdaptor_FClass2d::*)( const BRepTopAdaptor_FClass2d &  ) const>(&BRepTopAdaptor_FClass2d::Copy),
             R"#(None)#"  , py::arg("Other"))
        .def("TestOnRestriction",
             (TopAbs_State (BRepTopAdaptor_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) const) static_cast<TopAbs_State (BRepTopAdaptor_FClass2d::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) const>(&BRepTopAdaptor_FClass2d::TestOnRestriction),
             R"#(Test a point with +- an offset (Tol) and returns On if some points are OUT an some are IN (Caution: Internal use . see the code for more details))#"  , py::arg("Puv"),  py::arg("Tol"),  py::arg("RecadreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
;


    static_cast<py::class_<BRepTopAdaptor_HVertex ,opencascade::handle<BRepTopAdaptor_HVertex>  , Adaptor3d_HVertex >>(m.attr("BRepTopAdaptor_HVertex"))
        .def(py::init< const TopoDS_Vertex &,const opencascade::handle<BRepAdaptor_HCurve2d> & >()  , py::arg("Vtx"),  py::arg("Curve") )
        .def("Vertex",
             (const TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() const) static_cast<const TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() const>(&BRepTopAdaptor_HVertex::Vertex),
             R"#(None)#" )
        .def("ChangeVertex",
             (TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() ) static_cast<TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() >(&BRepTopAdaptor_HVertex::ChangeVertex),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (BRepTopAdaptor_HVertex::*)() ) static_cast<gp_Pnt2d (BRepTopAdaptor_HVertex::*)() >(&BRepTopAdaptor_HVertex::Value),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (BRepTopAdaptor_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (BRepTopAdaptor_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BRepTopAdaptor_HVertex::Parameter),
             R"#(None)#"  , py::arg("C"))
        .def("Resolution",
             (Standard_Real (BRepTopAdaptor_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (BRepTopAdaptor_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&BRepTopAdaptor_HVertex::Resolution),
             R"#(Parametric resolution (2d).)#"  , py::arg("C"))
        .def("Orientation",
             (TopAbs_Orientation (BRepTopAdaptor_HVertex::*)() ) static_cast<TopAbs_Orientation (BRepTopAdaptor_HVertex::*)() >(&BRepTopAdaptor_HVertex::Orientation),
             R"#(None)#" )
        .def("IsSame",
             (Standard_Boolean (BRepTopAdaptor_HVertex::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) ) static_cast<Standard_Boolean (BRepTopAdaptor_HVertex::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) >(&BRepTopAdaptor_HVertex::IsSame),
             R"#(None)#"  , py::arg("Other"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTopAdaptor_HVertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTopAdaptor_HVertex::*)() const>(&BRepTopAdaptor_HVertex::DynamicType),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() const) static_cast<const TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() const>(&BRepTopAdaptor_HVertex::Vertex),
             R"#(None)#" )
        .def("ChangeVertex",
             (TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() ) static_cast<TopoDS_Vertex & (BRepTopAdaptor_HVertex::*)() >(&BRepTopAdaptor_HVertex::ChangeVertex),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTopAdaptor_HVertex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepTopAdaptor_HVertex::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/BRepTopAdaptor_Tool.hxx
// ./opencascade/BRepTopAdaptor_SeqOfPtr.hxx
// ./opencascade/BRepTopAdaptor_FClass2d.hxx
// ./opencascade/BRepTopAdaptor_TopolTool.hxx
// ./opencascade/BRepTopAdaptor_HVertex.hxx
// ./opencascade/BRepTopAdaptor_MapOfShapeTool.hxx
// ./opencascade/BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx

// operators

// register typdefs
// ./opencascade/BRepTopAdaptor_Tool.hxx
// ./opencascade/BRepTopAdaptor_SeqOfPtr.hxx
// ./opencascade/BRepTopAdaptor_FClass2d.hxx
// ./opencascade/BRepTopAdaptor_TopolTool.hxx
// ./opencascade/BRepTopAdaptor_HVertex.hxx
// ./opencascade/BRepTopAdaptor_MapOfShapeTool.hxx
    register_template_NCollection_DataMap<TopoDS_Shape, BRepTopAdaptor_Tool, TopTools_ShapeMapHasher>(m,"BRepTopAdaptor_MapOfShapeTool");  
// ./opencascade/BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
