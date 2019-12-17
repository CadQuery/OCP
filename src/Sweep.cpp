
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_OutOfRange.hxx>

// module includes
#include <Sweep_NumShape.hxx>
#include <Sweep_NumShapeIterator.hxx>
#include <Sweep_NumShapeTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Sweep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Sweep"));


//Python trampoline classes

// classes


    static_cast<py::class_<Sweep_NumShape ,std::unique_ptr<Sweep_NumShape>  >>(m.attr("Sweep_NumShape"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const TopAbs_ShapeEnum,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Index"),  py::arg("Type"),  py::arg("Closed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("BegInf")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("EndInf")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("Init",
             (void (Sweep_NumShape::*)( const Standard_Integer ,  const TopAbs_ShapeEnum ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (Sweep_NumShape::*)( const Standard_Integer ,  const TopAbs_ShapeEnum ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Sweep_NumShape::Init),
             R"#(Reinitialize a simple indexed edge.)#"  , py::arg("Index"),  py::arg("Type"),  py::arg("Closed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("BegInf")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("EndInf")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Index",
             (Standard_Integer (Sweep_NumShape::*)() const) static_cast<Standard_Integer (Sweep_NumShape::*)() const>(&Sweep_NumShape::Index),
             R"#(None)#" )
        .def("Type",
             (TopAbs_ShapeEnum (Sweep_NumShape::*)() const) static_cast<TopAbs_ShapeEnum (Sweep_NumShape::*)() const>(&Sweep_NumShape::Type),
             R"#(None)#" )
        .def("Closed",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::Closed),
             R"#(None)#" )
        .def("BegInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::BegInfinite),
             R"#(None)#" )
        .def("EndInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::EndInfinite),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (Sweep_NumShape::*)() const) static_cast<TopAbs_Orientation (Sweep_NumShape::*)() const>(&Sweep_NumShape::Orientation),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (Sweep_NumShape::*)() const) static_cast<Standard_Integer (Sweep_NumShape::*)() const>(&Sweep_NumShape::Index),
             R"#(None)#" )
        .def("Type",
             (TopAbs_ShapeEnum (Sweep_NumShape::*)() const) static_cast<TopAbs_ShapeEnum (Sweep_NumShape::*)() const>(&Sweep_NumShape::Type),
             R"#(None)#" )
        .def("Closed",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::Closed),
             R"#(None)#" )
        .def("BegInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::BegInfinite),
             R"#(None)#" )
        .def("EndInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::EndInfinite),
             R"#(None)#" )
;


    static_cast<py::class_<Sweep_NumShapeTool ,std::unique_ptr<Sweep_NumShapeTool>  >>(m.attr("Sweep_NumShapeTool"))
        .def(py::init< const Sweep_NumShape & >()  , py::arg("aShape") )
        .def("NbShapes",
             (Standard_Integer (Sweep_NumShapeTool::*)() const) static_cast<Standard_Integer (Sweep_NumShapeTool::*)() const>(&Sweep_NumShapeTool::NbShapes),
             R"#(Returns the number of subshapes in the shape.)#" )
        .def("Index",
             (Standard_Integer (Sweep_NumShapeTool::*)( const Sweep_NumShape &  ) const) static_cast<Standard_Integer (Sweep_NumShapeTool::*)( const Sweep_NumShape &  ) const>(&Sweep_NumShapeTool::Index),
             R"#(Returns the index of <aShape>.)#"  , py::arg("aShape"))
        .def("Shape",
             (Sweep_NumShape (Sweep_NumShapeTool::*)( const Standard_Integer  ) const) static_cast<Sweep_NumShape (Sweep_NumShapeTool::*)( const Standard_Integer  ) const>(&Sweep_NumShapeTool::Shape),
             R"#(Returns the Shape at index anIndex)#"  , py::arg("anIndex"))
        .def("Type",
             (TopAbs_ShapeEnum (Sweep_NumShapeTool::*)( const Sweep_NumShape &  ) const) static_cast<TopAbs_ShapeEnum (Sweep_NumShapeTool::*)( const Sweep_NumShape &  ) const>(&Sweep_NumShapeTool::Type),
             R"#(Returns the type of <aShape>.)#"  , py::arg("aShape"))
        .def("Orientation",
             (TopAbs_Orientation (Sweep_NumShapeTool::*)( const Sweep_NumShape &  ) const) static_cast<TopAbs_Orientation (Sweep_NumShapeTool::*)( const Sweep_NumShape &  ) const>(&Sweep_NumShapeTool::Orientation),
             R"#(Returns the orientation of <aShape>.)#"  , py::arg("aShape"))
        .def("HasFirstVertex",
             (Standard_Boolean (Sweep_NumShapeTool::*)() const) static_cast<Standard_Boolean (Sweep_NumShapeTool::*)() const>(&Sweep_NumShapeTool::HasFirstVertex),
             R"#(Returns true if there is a First Vertex in the Shape.)#" )
        .def("HasLastVertex",
             (Standard_Boolean (Sweep_NumShapeTool::*)() const) static_cast<Standard_Boolean (Sweep_NumShapeTool::*)() const>(&Sweep_NumShapeTool::HasLastVertex),
             R"#(Returns true if there is a Last Vertex in the Shape.)#" )
        .def("FirstVertex",
             (Sweep_NumShape (Sweep_NumShapeTool::*)() const) static_cast<Sweep_NumShape (Sweep_NumShapeTool::*)() const>(&Sweep_NumShapeTool::FirstVertex),
             R"#(Returns the first vertex.)#" )
        .def("LastVertex",
             (Sweep_NumShape (Sweep_NumShapeTool::*)() const) static_cast<Sweep_NumShape (Sweep_NumShapeTool::*)() const>(&Sweep_NumShapeTool::LastVertex),
             R"#(Returns the last vertex.)#" )
;


    static_cast<py::class_<Sweep_NumShapeIterator ,std::unique_ptr<Sweep_NumShapeIterator>  >>(m.attr("Sweep_NumShapeIterator"))
        .def(py::init<  >()  )
        .def("Init",
             (void (Sweep_NumShapeIterator::*)( const Sweep_NumShape &  ) ) static_cast<void (Sweep_NumShapeIterator::*)( const Sweep_NumShape &  ) >(&Sweep_NumShapeIterator::Init),
             R"#(Resest the NumShapeIterator on sub-shapes of <aShape>.)#"  , py::arg("aShape"))
        .def("More",
             (Standard_Boolean (Sweep_NumShapeIterator::*)() const) static_cast<Standard_Boolean (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::More),
             R"#(Returns True if there is a current sub-shape.)#" )
        .def("Next",
             (void (Sweep_NumShapeIterator::*)() ) static_cast<void (Sweep_NumShapeIterator::*)() >(&Sweep_NumShapeIterator::Next),
             R"#(Moves to the next sub-shape.)#" )
        .def("Value",
             (const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const) static_cast<const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Value),
             R"#(Returns the current sub-shape.)#" )
        .def("Orientation",
             (TopAbs_Orientation (Sweep_NumShapeIterator::*)() const) static_cast<TopAbs_Orientation (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Orientation),
             R"#(Returns the orientation of the current sub-shape.)#" )
        .def("More",
             (Standard_Boolean (Sweep_NumShapeIterator::*)() const) static_cast<Standard_Boolean (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::More),
             R"#(Returns True if there is a current sub-shape.)#" )
        .def("Value",
             (const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const) static_cast<const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Value),
             R"#(Returns the current sub-shape.)#" )
        .def("Orientation",
             (TopAbs_Orientation (Sweep_NumShapeIterator::*)() const) static_cast<TopAbs_Orientation (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Orientation),
             R"#(Returns the orientation of the current sub-shape.)#" )
;

// functions
// ./opencascade/Sweep_NumShape.hxx
// ./opencascade/Sweep_NumShapeIterator.hxx
// ./opencascade/Sweep_NumShapeTool.hxx

// operators

// register typdefs
// ./opencascade/Sweep_NumShape.hxx
// ./opencascade/Sweep_NumShapeIterator.hxx
// ./opencascade/Sweep_NumShapeTool.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
