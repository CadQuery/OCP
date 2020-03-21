#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_Triangle.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_Triangle.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_Triangle.hxx>
#include <Adaptor3d_HSurface.hxx>

// module includes
#include <IntPolyh_Triangle.hxx>
#include <IntPolyh_SeqOfStartPoints.hxx>
#include <IntPolyh_SectionLine.hxx>
#include <IntPolyh_ArrayOfTriangles.hxx>
#include <IntPolyh_Edge.hxx>
#include <IntPolyh_ArrayOfEdges.hxx>
#include <IntPolyh_ArrayOfSectionLines.hxx>
#include <IntPolyh_ArrayOfTangentZones.hxx>
#include <IntPolyh_PMaillageAffinage.hxx>
#include <IntPolyh_CoupleMapHasher.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_ArrayOfPointNormal.hxx>
#include <IntPolyh_Point.hxx>
#include <IntPolyh_ArrayOfPoints.hxx>
#include <IntPolyh_ListOfCouples.hxx>
#include <IntPolyh_Array.hxx>
#include <IntPolyh_Tools.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_Couple.hxx>
#include <IntPolyh_Intersection.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IntPolyh_Triangle.hxx
// ./opencascade/IntPolyh_SeqOfStartPoints.hxx
// ./opencascade/IntPolyh_SectionLine.hxx
// ./opencascade/IntPolyh_ArrayOfTriangles.hxx
// ./opencascade/IntPolyh_Edge.hxx
// ./opencascade/IntPolyh_ArrayOfEdges.hxx
// ./opencascade/IntPolyh_ArrayOfSectionLines.hxx
// ./opencascade/IntPolyh_ArrayOfTangentZones.hxx
// ./opencascade/IntPolyh_PMaillageAffinage.hxx
// ./opencascade/IntPolyh_CoupleMapHasher.hxx
// ./opencascade/IntPolyh_StartPoint.hxx
// ./opencascade/IntPolyh_ArrayOfPointNormal.hxx
// ./opencascade/IntPolyh_Point.hxx
// ./opencascade/IntPolyh_ArrayOfPoints.hxx
// ./opencascade/IntPolyh_ListOfCouples.hxx
// ./opencascade/IntPolyh_Array.hxx

template <typename Type>
void preregister_template_IntPolyh_Array(py::object &m, const char *name){
    py::class_<IntPolyh_Array<Type> , shared_ptr<IntPolyh_Array<Type>> >(m,name,R"#(Class IntPolyh_Array (dynamic array of objects))#");
}

template <typename Type>
void register_template_IntPolyh_Array(py::object &m, const char *name){
    static_cast<py::class_<IntPolyh_Array<Type> , shared_ptr<IntPolyh_Array<Type>> >>(m.attr(name))
        .def(py::init< const Standard_Integer >()  , py::arg("aIncrement")=static_cast<const Standard_Integer>(256) )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("aN"),  py::arg("aIncrement")=static_cast<const Standard_Integer>(256) )
        .def("Copy",
             (IntPolyh_Array<Type> & (IntPolyh_Array<Type>::*)( const IntPolyh_Array<Type> & ) ) &IntPolyh_Array<Type>::Copy,
             R"#(Copy)#"  , py::arg("aOther"))
        .def("Init",
             (void (IntPolyh_Array<Type>::*)( const Standard_Integer ) ) &IntPolyh_Array<Type>::Init,
             R"#(Init - allocate memory for <aN> items)#"  , py::arg("aN"))
        .def("IncrementNbItems",
             (void (IntPolyh_Array<Type>::*)() ) &IntPolyh_Array<Type>::IncrementNbItems,
             R"#(IncrementNbItems - increment the number of stored items)#" )
        .def("GetN",
             (Standard_Integer (IntPolyh_Array<Type>::*)() const) &IntPolyh_Array<Type>::GetN,
             R"#(GetN - returns the number of 'allocated' items)#" )
        .def("NbItems",
             (Standard_Integer (IntPolyh_Array<Type>::*)() const) &IntPolyh_Array<Type>::NbItems,
             R"#(NbItems - returns the number of stored items)#" )
        .def("SetNbItems",
             (void (IntPolyh_Array<Type>::*)( const Standard_Integer ) ) &IntPolyh_Array<Type>::SetNbItems,
             R"#(set the number of stored items)#"  , py::arg("aNb"))
        .def("Value",
             (const Type & (IntPolyh_Array<Type>::*)( const Standard_Integer ) const) &IntPolyh_Array<Type>::Value,
             R"#(query the const value)#"  , py::arg("aIndex"))
        .def("ChangeValue",
             (Type & (IntPolyh_Array<Type>::*)( const Standard_Integer ) ) &IntPolyh_Array<Type>::ChangeValue,
             R"#(query the value)#"  , py::arg("aIndex"))
        .def("Dump",
             (void (IntPolyh_Array<Type>::*)() const) &IntPolyh_Array<Type>::Dump,
             R"#(dump the contents)#" )
    ;
};
// ./opencascade/IntPolyh_Tools.hxx
// ./opencascade/IntPolyh_MaillageAffinage.hxx
// ./opencascade/IntPolyh_Couple.hxx
// ./opencascade/IntPolyh_Intersection.hxx

// user-defined post
