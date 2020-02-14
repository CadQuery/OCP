
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <TopAbs.hxx>
#include <TopAbs_Orientation.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <TopAbs_State.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopAbs_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopAbs", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TopAbs_State>(m, "TopAbs_State",R"#(Identifies the position of a vertex or a set of vertices relative to a region of a shape. The figure shown above illustrates the states of vertices found in various parts of the edge relative to the face which it intersects.)#")
        .value("TopAbs_IN",TopAbs_State::TopAbs_IN)
        .value("TopAbs_OUT",TopAbs_State::TopAbs_OUT)
        .value("TopAbs_ON",TopAbs_State::TopAbs_ON)
        .value("TopAbs_UNKNOWN",TopAbs_State::TopAbs_UNKNOWN).export_values();
    py::enum_<TopAbs_Orientation>(m, "TopAbs_Orientation",R"#(Identifies the orientation of a topological shape. Orientation can represent a relation between two entities, or it can apply to a shape in its own right. When used to describe a relation between two shapes, orientation allows you to use the underlying entity in either direction. For example on a curve which is oriented FORWARD (say from left to right) you can have both a FORWARD and a REVERSED edge. The FORWARD edge will be oriented from left to right, and the REVERSED edge from right to left. In this way, you share the underlying entity. In other words, two faces of a cube can share an edge, and can also be used to build compound shapes. For each case in which an element is used as the boundary of a geometric domain of a higher dimension, this element defines two local regions of which one is arbitrarily considered as the default region. A change in orientation implies a switch of default region. This allows you to apply changes of orientation to the shape as a whole.)#")
        .value("TopAbs_FORWARD",TopAbs_Orientation::TopAbs_FORWARD)
        .value("TopAbs_REVERSED",TopAbs_Orientation::TopAbs_REVERSED)
        .value("TopAbs_INTERNAL",TopAbs_Orientation::TopAbs_INTERNAL)
        .value("TopAbs_EXTERNAL",TopAbs_Orientation::TopAbs_EXTERNAL).export_values();
    py::enum_<TopAbs_ShapeEnum>(m, "TopAbs_ShapeEnum",R"#(Identifies various topological shapes. This enumeration allows you to use dynamic typing of shapes. The values are listed in order of complexity, from the most complex to the most simple i.e. COMPOUND > COMPSOLID > SOLID > .... > VERTEX > SHAPE. Any shape can contain simpler shapes in its definition. Abstract topological data structure describes a basic entity, the shape (present in this enumeration as the SHAPE value), which can be divided into the following component topologies: - COMPOUND: A group of any of the shapes below. - COMPSOLID: A set of solids connected by their faces. This expands the notions of WIRE and SHELL to solids. - SOLID: A part of 3D space bounded by shells. - SHELL: A set of faces connected by some of the edges of their wire boundaries. A shell can be open or closed. - FACE: Part of a plane (in 2D geometry) or a surface (in 3D geometry) bounded by a closed wire. Its geometry is constrained (trimmed) by contours. - WIRE: A sequence of edges connected by their vertices. It can be open or closed depending on whether the edges are linked or not. - EDGE: A single dimensional shape corresponding to a curve, and bound by a vertex at each extremity. - VERTEX: A zero-dimensional shape corresponding to a point in geometry.)#")
        .value("TopAbs_COMPOUND",TopAbs_ShapeEnum::TopAbs_COMPOUND)
        .value("TopAbs_COMPSOLID",TopAbs_ShapeEnum::TopAbs_COMPSOLID)
        .value("TopAbs_SOLID",TopAbs_ShapeEnum::TopAbs_SOLID)
        .value("TopAbs_SHELL",TopAbs_ShapeEnum::TopAbs_SHELL)
        .value("TopAbs_FACE",TopAbs_ShapeEnum::TopAbs_FACE)
        .value("TopAbs_WIRE",TopAbs_ShapeEnum::TopAbs_WIRE)
        .value("TopAbs_EDGE",TopAbs_ShapeEnum::TopAbs_EDGE)
        .value("TopAbs_VERTEX",TopAbs_ShapeEnum::TopAbs_VERTEX)
        .value("TopAbs_SHAPE",TopAbs_ShapeEnum::TopAbs_SHAPE).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<TopAbs , shared_ptr<TopAbs>  >(m,"TopAbs",R"#(This package gives resources for Topology oriented applications such as : Topological Data Structure, Topological Algorithms.)#");

};

// user-defined post-inclusion per module

// user-defined post
