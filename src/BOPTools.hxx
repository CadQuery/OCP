#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Vec.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <IntTools_Context.hxx>
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
#include <gp_Dir.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <IntTools_Context.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <BOPTools_Set.hxx>

// module includes
#include <BOPTools_BoxSelector.hxx>
#include <BOPTools_AlgoTools2D.hxx>
#include <BOPTools_MapOfSet.hxx>
#include <BOPTools_BoxBndTree.hxx>
#include <BOPTools_Set.hxx>
#include <BOPTools_AlgoTools.hxx>
#include <BOPTools_AlgoTools3D.hxx>
#include <BOPTools_Parallel.hxx>
#include <BOPTools_ListOfCoupleOfShape.hxx>
#include <BOPTools_SetMapHasher.hxx>
#include <BOPTools_ConnexityBlock.hxx>
#include <BOPTools_IndexedDataMapOfSetShape.hxx>
#include <BOPTools_CoupleOfShape.hxx>
#include <BOPTools_ListOfConnexityBlock.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BOPTools_BoxSelector.hxx

template <typename BoxType>
void preregister_template_BOPTools_BoxSelector(py::object &m, const char *name){
    py::class_<BOPTools_BoxSelector<BoxType> , shared_ptr<BOPTools_BoxSelector<BoxType>> >(m,name,R"#(Template Selector for the unbalanced binary tree of overlapped bounding boxes.)#");
}

template <typename BoxType>
void register_template_BOPTools_BoxSelector(py::object &m, const char *name){
    static_cast<py::class_<BOPTools_BoxSelector<BoxType> , shared_ptr<BOPTools_BoxSelector<BoxType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Reject",
             (Standard_Boolean (BOPTools_BoxSelector<BoxType>::*)( const BoxType &  ) const) &BOPTools_BoxSelector<BoxType>::Reject,
             R"#(Checks if the box should be rejected)#"  , py::arg("theOther"))
        .def("Accept",
             (Standard_Boolean (BOPTools_BoxSelector<BoxType>::*)( const Standard_Integer &  ) ) &BOPTools_BoxSelector<BoxType>::Accept,
             R"#(Accepts the index)#"  , py::arg("theIndex"))
        .def("Clear",
             (void (BOPTools_BoxSelector<BoxType>::*)() ) &BOPTools_BoxSelector<BoxType>::Clear,
             R"#(Clears the indices)#" )
        .def("SetBox",
             (void (BOPTools_BoxSelector<BoxType>::*)( const BoxType &  ) ) &BOPTools_BoxSelector<BoxType>::SetBox,
             R"#(Sets the box)#"  , py::arg("theBox"))
        .def("Indices",
             (const TColStd_ListOfInteger & (BOPTools_BoxSelector<BoxType>::*)() const) &BOPTools_BoxSelector<BoxType>::Indices,
             R"#(Returns the list of accepted indices)#" )
    ;
};
// ./opencascade/BOPTools_AlgoTools2D.hxx
// ./opencascade/BOPTools_MapOfSet.hxx
// ./opencascade/BOPTools_BoxBndTree.hxx
// ./opencascade/BOPTools_Set.hxx
// ./opencascade/BOPTools_AlgoTools.hxx
// ./opencascade/BOPTools_AlgoTools3D.hxx
// ./opencascade/BOPTools_Parallel.hxx

template <typename TypeSolver,typename TypeSolverVector>
void preregister_template_BOPTools_Functor(py::object &m, const char *name){
    py::class_<BOPTools_Functor<TypeSolver,TypeSolverVector> , shared_ptr<BOPTools_Functor<TypeSolver,TypeSolverVector>> >(m,name,R"#(None)#");
}

template <typename TypeSolver,typename TypeSolverVector>
void register_template_BOPTools_Functor(py::object &m, const char *name){
    static_cast<py::class_<BOPTools_Functor<TypeSolver,TypeSolverVector> , shared_ptr<BOPTools_Functor<TypeSolver,TypeSolverVector>> >>(m.attr(name))
        .def(py::init< TypeSolverVector & >()  , py::arg("theSolverVec") )
    ;
};

template <typename TypeFunctor,typename TypeSolverVector>
void preregister_template_BOPTools_Cnt(py::object &m, const char *name){
    py::class_<BOPTools_Cnt<TypeFunctor,TypeSolverVector> , shared_ptr<BOPTools_Cnt<TypeFunctor,TypeSolverVector>> >(m,name,R"#(None)#");
}

template <typename TypeFunctor,typename TypeSolverVector>
void register_template_BOPTools_Cnt(py::object &m, const char *name){
    static_cast<py::class_<BOPTools_Cnt<TypeFunctor,TypeSolverVector> , shared_ptr<BOPTools_Cnt<TypeFunctor,TypeSolverVector>> >>(m.attr(name))
        .def_static("Perform_s",
                    (void (*)( const Standard_Boolean ,  TypeSolverVector &  ) ) &BOPTools_Cnt<TypeFunctor,TypeSolverVector>::Perform,
                    R"#(None)#"  , py::arg("isRunParallel"),  py::arg("theSolverVector"))
    ;
};

template <typename TypeSolver,typename TypeSolverVector,typename TypeContext,typename TN>
void preregister_template_BOPTools_ContextFunctor(py::object &m, const char *name){
    py::class_<BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN> , shared_ptr<BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN>> >(m,name,R"#(None)#");
}

template <typename TypeSolver,typename TypeSolverVector,typename TypeContext,typename TN>
void register_template_BOPTools_ContextFunctor(py::object &m, const char *name){
    static_cast<py::class_<BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN> , shared_ptr<BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN>> >>(m.attr(name))
        .def(py::init< TypeSolverVector & >()  , py::arg("theVector") )
        .def("SetContext",
             (void (BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN>::*)( TypeContext &  ) ) &BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN>::SetContext,
             R"#(Binds main thread context)#"  , py::arg("theContext"))
        .def("GetThreadContext",
             (TypeContext & (BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN>::*)() const) &BOPTools_ContextFunctor<TypeSolver,TypeSolverVector,TypeContext,TN>::GetThreadContext,
             R"#(Returns current thread context)#" )
    ;
};

template <typename TypeFunctor,typename TypeSolverVector,typename TypeContext>
void preregister_template_BOPTools_ContextCnt(py::object &m, const char *name){
    py::class_<BOPTools_ContextCnt<TypeFunctor,TypeSolverVector,TypeContext> , shared_ptr<BOPTools_ContextCnt<TypeFunctor,TypeSolverVector,TypeContext>> >(m,name,R"#(None)#");
}

template <typename TypeFunctor,typename TypeSolverVector,typename TypeContext>
void register_template_BOPTools_ContextCnt(py::object &m, const char *name){
    static_cast<py::class_<BOPTools_ContextCnt<TypeFunctor,TypeSolverVector,TypeContext> , shared_ptr<BOPTools_ContextCnt<TypeFunctor,TypeSolverVector,TypeContext>> >>(m.attr(name))
        .def_static("Perform_s",
                    (void (*)( const Standard_Boolean ,  TypeSolverVector & ,  TypeContext &  ) ) &BOPTools_ContextCnt<TypeFunctor,TypeSolverVector,TypeContext>::Perform,
                    R"#(None)#"  , py::arg("isRunParallel"),  py::arg("theSolverVector"),  py::arg("theContext"))
    ;
};
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
// ./opencascade/BOPTools_SetMapHasher.hxx
// ./opencascade/BOPTools_ConnexityBlock.hxx
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
// ./opencascade/BOPTools_CoupleOfShape.hxx
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx

// user-defined post
