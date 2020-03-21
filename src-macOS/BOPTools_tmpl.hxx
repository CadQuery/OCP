#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BOPTools_Set.hxx>
#include <TopoDS_Vertex.hxx>
#include <IntTools_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Solid.hxx>
#include <IntTools_Range.hxx>
#include <TopoDS_Shell.hxx>
#include <Message_Report.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Vec.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <IntTools_Context.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <BOPTools_Set.hxx>
#include <BOPTools_MapOfSet.hxx>
#include <BOPTools_ListOfCoupleOfShape.hxx>
#include <BOPTools_SetMapHasher.hxx>
#include <BOPTools_ListOfConnexityBlock.hxx>
#include <BOPTools_BoxSelector.hxx>
#include <BOPTools_Parallel.hxx>
#include <BOPTools_IndexedDataMapOfSetShape.hxx>
#include <BOPTools_CoupleOfShape.hxx>
#include <BOPTools_ConnexityBlock.hxx>
#include <BOPTools_AlgoTools.hxx>
#include <BOPTools_AlgoTools2D.hxx>
#include <BOPTools_AlgoTools3D.hxx>
#include <BOPTools_BoxTree.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BOPTools_Set.hxx
// ./opencascade/BOPTools_MapOfSet.hxx
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
// ./opencascade/BOPTools_SetMapHasher.hxx
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
// ./opencascade/BOPTools_BoxSelector.hxx

template <int Dimension>
void preregister_template_BOPTools_BoxSelector(py::object &m, const char *name){
    py::class_<BOPTools_BoxSelector<Dimension> , shared_ptr<BOPTools_BoxSelector<Dimension>> >(m,name,R"#(Template Selector for elements selection from BVH tree.)#");
}

template <int Dimension>
void register_template_BOPTools_BoxSelector(py::object &m, const char *name){
    static_cast<py::class_<BOPTools_BoxSelector<Dimension> , shared_ptr<BOPTools_BoxSelector<Dimension>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BOPTools_BoxSelector<Dimension>::*)() ) &BOPTools_BoxSelector<Dimension>::Clear,
             R"#(Clears the indices)#" )
        .def("SetBox",
             (void (BOPTools_BoxSelector<Dimension>::*)( const BVH_Box<Standard_Real, Dimension> & ) ) &BOPTools_BoxSelector<Dimension>::SetBox,
             R"#(Sets the box)#"  , py::arg("theBox"))
        .def("Indices",
             (const TColStd_ListOfInteger & (BOPTools_BoxSelector<Dimension>::*)() const) &BOPTools_BoxSelector<Dimension>::Indices,
             R"#(Returns the list of accepted indices)#" )
        .def("RejectNode",
             (Standard_Boolean (BOPTools_BoxSelector<Dimension>::*)(  const typename BVH::VectorType<Standard_Real, Dimension>::Type & ,  const typename BVH::VectorType<Standard_Real, Dimension>::Type & , Standard_Boolean & ) const) &BOPTools_BoxSelector<Dimension>::RejectNode,
             R"#(Checks if the box should be rejected)#"  , py::arg("theCMin"),  py::arg("theCMax"),  py::arg("theIsInside"))
        .def("RejectElement",
             (Standard_Boolean (BOPTools_BoxSelector<Dimension>::*)( const Standard_Integer ) ) &BOPTools_BoxSelector<Dimension>::RejectElement,
             R"#(Checks if the element should be rejected)#"  , py::arg("theIndex"))
        .def("AcceptMetric",
             (Standard_Boolean (BOPTools_BoxSelector<Dimension>::*)( const Standard_Boolean & ) const) &BOPTools_BoxSelector<Dimension>::AcceptMetric,
             R"#(Checks if the metric of the node may be accepted)#"  , py::arg("theIsInside"))
        .def("Accept",
             (Standard_Boolean (BOPTools_BoxSelector<Dimension>::*)( const Standard_Integer , const Standard_Boolean & ) ) &BOPTools_BoxSelector<Dimension>::Accept,
             R"#(Accepts the element with the index <theIndex> in BVH tree)#"  , py::arg("theIndex"),  py::arg("theIsInside"))
    ;
};
// ./opencascade/BOPTools_Parallel.hxx
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
// ./opencascade/BOPTools_CoupleOfShape.hxx
// ./opencascade/BOPTools_ConnexityBlock.hxx
// ./opencascade/BOPTools_AlgoTools.hxx
// ./opencascade/BOPTools_AlgoTools2D.hxx
// ./opencascade/BOPTools_AlgoTools3D.hxx
// ./opencascade/BOPTools_BoxTree.hxx

template <typename NumType,int Dimension,typename DataType>
void preregister_template_BOPTools_BoxSet(py::object &m, const char *name){
    py::class_<BOPTools_BoxSet<NumType,Dimension,DataType> , shared_ptr<BOPTools_BoxSet<NumType,Dimension,DataType>> >(m,name,R"#(Redefines BoxSet to use the Linear builder by default)#");
}

template <typename NumType,int Dimension,typename DataType>
void register_template_BOPTools_BoxSet(py::object &m, const char *name){
    static_cast<py::class_<BOPTools_BoxSet<NumType,Dimension,DataType> , shared_ptr<BOPTools_BoxSet<NumType,Dimension,DataType>> >>(m.attr(name))
        .def(py::init< const opencascade::handle<BVH_Builder<NumType, Dimension> > & >()  , py::arg("theBuilder")=static_cast<const opencascade::handle<BVH_Builder<NumType, Dimension> > &>(NULL) )
    ;
};

// user-defined post
