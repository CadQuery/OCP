
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <TopClass_SolidExplorer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopClass(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopClass"));


//Python trampoline classes
    class Py_TopClass_SolidExplorer : public TopClass_SolidExplorer{
    public:
        using TopClass_SolidExplorer::TopClass_SolidExplorer;
        
        // public pure virtual
        Standard_Boolean Reject(const gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,Reject,P) };
        void Segment(const gp_Pnt & P,gp_Lin & L,Standard_Real & Par) override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,Segment,P,L,Par) };
        void OtherSegment(const gp_Pnt & P,gp_Lin & L,Standard_Real & Par) override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,OtherSegment,P,L,Par) };
        void InitShell() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,InitShell,) };
        Standard_Boolean MoreShells() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,MoreShells,) };
        void NextShell() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,NextShell,) };
        Standard_Boolean RejectShell(const gp_Lin & L,const Standard_Real Par) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,RejectShell,L,Par) };
        void InitFace() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,InitFace,) };
        Standard_Boolean MoreFaces() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,MoreFaces,) };
        void NextFace() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,NextFace,) };
        TopoDS_Face CurrentFace() const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,TopClass_SolidExplorer,CurrentFace,) };
        Standard_Boolean RejectFace(const gp_Lin & L,const Standard_Real Par) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,RejectFace,L,Par) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<TopClass_SolidExplorer ,std::unique_ptr<TopClass_SolidExplorer> ,Py_TopClass_SolidExplorer >>(m.attr("TopClass_SolidExplorer"))
        .def("Reject",
             (Standard_Boolean (TopClass_SolidExplorer::*)( const gp_Pnt &  ) const) static_cast<Standard_Boolean (TopClass_SolidExplorer::*)( const gp_Pnt &  ) const>(&TopClass_SolidExplorer::Reject),
             R"#(Should return True if the point is outside a bounding volume of the shape.)#"  , py::arg("P"))
        .def("Segment",
             (void (TopClass_SolidExplorer::*)( const gp_Pnt & ,  gp_Lin & ,  Standard_Real &  ) ) static_cast<void (TopClass_SolidExplorer::*)( const gp_Pnt & ,  gp_Lin & ,  Standard_Real &  ) >(&TopClass_SolidExplorer::Segment),
             R"#(Returns in <L>, <Par> a segment having at least one intersection with the shape boundary to compute intersections.)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("OtherSegment",
             (void (TopClass_SolidExplorer::*)( const gp_Pnt & ,  gp_Lin & ,  Standard_Real &  ) ) static_cast<void (TopClass_SolidExplorer::*)( const gp_Pnt & ,  gp_Lin & ,  Standard_Real &  ) >(&TopClass_SolidExplorer::OtherSegment),
             R"#(Returns in <L>, <Par> a segment having at least one intersection with the shape boundary to compute intersections.)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("InitShell",
             (void (TopClass_SolidExplorer::*)() ) static_cast<void (TopClass_SolidExplorer::*)() >(&TopClass_SolidExplorer::InitShell),
             R"#(Starts an exploration of the shells.)#" )
        .def("MoreShells",
             (Standard_Boolean (TopClass_SolidExplorer::*)() const) static_cast<Standard_Boolean (TopClass_SolidExplorer::*)() const>(&TopClass_SolidExplorer::MoreShells),
             R"#(Returns True if there is a current shell.)#" )
        .def("NextShell",
             (void (TopClass_SolidExplorer::*)() ) static_cast<void (TopClass_SolidExplorer::*)() >(&TopClass_SolidExplorer::NextShell),
             R"#(Sets the explorer to the next shell and returns False if there are no more wires.)#" )
        .def("RejectShell",
             (Standard_Boolean (TopClass_SolidExplorer::*)( const gp_Lin & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (TopClass_SolidExplorer::*)( const gp_Lin & ,  const Standard_Real  ) const>(&TopClass_SolidExplorer::RejectShell),
             R"#(Returns True if the shell bounding volume does not intersect the segment.)#"  , py::arg("L"),  py::arg("Par"))
        .def("InitFace",
             (void (TopClass_SolidExplorer::*)() ) static_cast<void (TopClass_SolidExplorer::*)() >(&TopClass_SolidExplorer::InitFace),
             R"#(Starts an exploration of the faces.)#" )
        .def("MoreFaces",
             (Standard_Boolean (TopClass_SolidExplorer::*)() const) static_cast<Standard_Boolean (TopClass_SolidExplorer::*)() const>(&TopClass_SolidExplorer::MoreFaces),
             R"#(Returns True if there is a current face.)#" )
        .def("NextFace",
             (void (TopClass_SolidExplorer::*)() ) static_cast<void (TopClass_SolidExplorer::*)() >(&TopClass_SolidExplorer::NextFace),
             R"#(Sets the explorer to the next face and returns False if there are no more wires.)#" )
        .def("CurrentFace",
             (TopoDS_Face (TopClass_SolidExplorer::*)() const) static_cast<TopoDS_Face (TopClass_SolidExplorer::*)() const>(&TopClass_SolidExplorer::CurrentFace),
             R"#(Returns the current face.)#" )
        .def("RejectFace",
             (Standard_Boolean (TopClass_SolidExplorer::*)( const gp_Lin & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (TopClass_SolidExplorer::*)( const gp_Lin & ,  const Standard_Real  ) const>(&TopClass_SolidExplorer::RejectFace),
             R"#(Returns True if the face bounding volume does not intersect the segment.)#"  , py::arg("L"),  py::arg("Par"))
;

// functions
// ./opencascade/TopClass_SolidExplorer.hxx

// operators

// register typdefs
// ./opencascade/TopClass_SolidExplorer.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
