
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopExp_Explorer.hxx>
#include <TopoDS_Iterator.hxx>

// module includes
#include <TopExp.hxx>
#include <TopExp_Explorer.hxx>
#include <TopExp_Stack.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopExp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopExp"));


//Python trampoline classes

// classes

    register_default_constructor<TopExp , shared_ptr<TopExp>>(m,"TopExp");

    static_cast<py::class_<TopExp , shared_ptr<TopExp>  >>(m.attr("TopExp"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MapShapes_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopExp::MapShapes),
                    R"#(Tool to explore a topological data structure. Stores in the map <M> all the sub-shapes of <S> of type <T>.)#"  , py::arg("S"),  py::arg("T"),  py::arg("M"))
        .def_static("MapShapes_s",
                    (void (*)( const TopoDS_Shape & ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopExp::MapShapes),
                    R"#(Stores in the map <M> all the sub-shapes of <S>.)#"  , py::arg("S"),  py::arg("M"))
        .def_static("MapShapes_s",
                    (void (*)( const TopoDS_Shape & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopExp::MapShapes),
                    R"#(Stores in the map <M> all the sub-shapes of <S>.)#"  , py::arg("S"),  py::arg("M"))
        .def_static("MapShapesAndAncestors_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> &  ) >(&TopExp::MapShapesAndAncestors),
                    R"#(Stores in the map <M> all the subshape of <S> of type <TS> for each one append to the list all the ancestors of type <TA>. For example map all the edges and bind the list of faces. Warning: The map is not cleared at first.)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA"),  py::arg("M"))
        .def_static("MapShapesAndUniqueAncestors_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  const Standard_Boolean  ) >(&TopExp::MapShapesAndUniqueAncestors),
                    R"#(Stores in the map <M> all the subshape of <S> of type <TS> for each one append to the list all unique ancestors of type <TA>. For example map all the edges and bind the list of faces. useOrientation = True : taking account the ancestor orientation Warning: The map is not cleared at first.)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA"),  py::arg("M"),  py::arg("useOrientation")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("FirstVertex_s",
                    (TopoDS_Vertex (*)( const TopoDS_Edge & ,  const Standard_Boolean  ) ) static_cast<TopoDS_Vertex (*)( const TopoDS_Edge & ,  const Standard_Boolean  ) >(&TopExp::FirstVertex),
                    R"#(Returns the Vertex of orientation FORWARD in E. If there is none returns a Null Shape. CumOri = True : taking account the edge orientation)#"  , py::arg("E"),  py::arg("CumOri")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("LastVertex_s",
                    (TopoDS_Vertex (*)( const TopoDS_Edge & ,  const Standard_Boolean  ) ) static_cast<TopoDS_Vertex (*)( const TopoDS_Edge & ,  const Standard_Boolean  ) >(&TopExp::LastVertex),
                    R"#(Returns the Vertex of orientation REVERSED in E. If there is none returns a Null Shape. CumOri = True : taking account the edge orientation)#"  , py::arg("E"),  py::arg("CumOri")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Vertices_s",
                    (void (*)( const TopoDS_Edge & ,  TopoDS_Vertex & ,  TopoDS_Vertex & ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Edge & ,  TopoDS_Vertex & ,  TopoDS_Vertex & ,  const Standard_Boolean  ) >(&TopExp::Vertices),
                    R"#(Returns in Vfirst, Vlast the FORWARD and REVERSED vertices of the edge <E>. May be null shapes. CumOri = True : taking account the edge orientation)#"  , py::arg("E"),  py::arg("Vfirst"),  py::arg("Vlast"),  py::arg("CumOri")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Vertices_s",
                    (void (*)( const TopoDS_Wire & ,  TopoDS_Vertex & ,  TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Wire & ,  TopoDS_Vertex & ,  TopoDS_Vertex &  ) >(&TopExp::Vertices),
                    R"#(Returns in Vfirst, Vlast the first and last vertices of the open wire <W>. May be null shapes. if <W> is closed Vfirst and Vlast are a same vertex on <W>. if <W> is no manifold. VFirst and VLast are null shapes.)#"  , py::arg("W"),  py::arg("Vfirst"),  py::arg("Vlast"))
        .def_static("CommonVertex_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  TopoDS_Vertex &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  TopoDS_Vertex &  ) >(&TopExp::CommonVertex),
                    R"#(Finds the vertex <V> common to the two edges <E1,E2>, returns True if this vertex exists.)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("V"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopExp_Explorer , shared_ptr<TopExp_Explorer>  >>(m.attr("TopExp_Explorer"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopAbs_ShapeEnum,const TopAbs_ShapeEnum >()  , py::arg("S"),  py::arg("ToFind"),  py::arg("ToAvoid")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE) )
    // methods
        .def("Init",
             (void (TopExp_Explorer::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<void (TopExp_Explorer::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopExp_Explorer::Init),
             R"#(Resets this explorer on the shape S. It is initialized to search the shape S, for shapes of type ToFind, that are not part of a shape ToAvoid. If the shape ToAvoid is equal to TopAbs_SHAPE, or if it is the same as, or less complex than, the shape ToFind it has no effect on the search.)#"  , py::arg("S"),  py::arg("ToFind"),  py::arg("ToAvoid")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("More",
             (Standard_Boolean (TopExp_Explorer::*)() const) static_cast<Standard_Boolean (TopExp_Explorer::*)() const>(&TopExp_Explorer::More),
             R"#(Returns True if there are more shapes in the exploration.)#" )
        .def("Next",
             (void (TopExp_Explorer::*)() ) static_cast<void (TopExp_Explorer::*)() >(&TopExp_Explorer::Next),
             R"#(Moves to the next Shape in the exploration. Exceptions Standard_NoMoreObject if there are no more shapes to explore.)#" )
        .def("Current",
             (const TopoDS_Shape & (TopExp_Explorer::*)() const) static_cast<const TopoDS_Shape & (TopExp_Explorer::*)() const>(&TopExp_Explorer::Current),
             R"#(Returns the current shape in the exploration. Exceptions Standard_NoSuchObject if this explorer has no more shapes to explore.)#" )
        .def("ReInit",
             (void (TopExp_Explorer::*)() ) static_cast<void (TopExp_Explorer::*)() >(&TopExp_Explorer::ReInit),
             R"#(Reinitialize the exploration with the original arguments.)#" )
        .def("Depth",
             (Standard_Integer (TopExp_Explorer::*)() const) static_cast<Standard_Integer (TopExp_Explorer::*)() const>(&TopExp_Explorer::Depth),
             R"#(Returns the current depth of the exploration. 0 is the shape to explore itself.)#" )
        .def("Clear",
             (void (TopExp_Explorer::*)() ) static_cast<void (TopExp_Explorer::*)() >(&TopExp_Explorer::Clear),
             R"#(Clears the content of the explorer. It will return False on More().)#" )
        .def("Destroy",
             (void (TopExp_Explorer::*)() ) static_cast<void (TopExp_Explorer::*)() >(&TopExp_Explorer::Destroy),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TopExp_Explorer::*)() const) static_cast<Standard_Boolean (TopExp_Explorer::*)() const>(&TopExp_Explorer::More),
             R"#(Returns True if there are more shapes in the exploration.)#" )
        .def("Depth",
             (Standard_Integer (TopExp_Explorer::*)() const) static_cast<Standard_Integer (TopExp_Explorer::*)() const>(&TopExp_Explorer::Depth),
             R"#(Returns the current depth of the exploration. 0 is the shape to explore itself.)#" )
        .def("Clear",
             (void (TopExp_Explorer::*)() ) static_cast<void (TopExp_Explorer::*)() >(&TopExp_Explorer::Clear),
             R"#(Clears the content of the explorer. It will return False on More().)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/TopExp_Explorer.hxx
// ./opencascade/TopExp.hxx
// ./opencascade/TopExp_Stack.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
