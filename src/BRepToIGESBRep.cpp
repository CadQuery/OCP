
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_VertexList.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Face.hxx>
#include <IGESSolid_Loop.hxx>
#include <TopoDS_Wire.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_Shell.hxx>
#include <TopoDS_Shell.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>

// module includes
#include <BRepToIGESBRep_Entity.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepToIGESBRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepToIGESBRep"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepToIGESBRep_Entity , shared_ptr<BRepToIGESBRep_Entity>  , BRepToIGES_BREntity >>(m.attr("BRepToIGESBRep_Entity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepToIGESBRep_Entity::*)() ) static_cast<void (BRepToIGESBRep_Entity::*)() >(&BRepToIGESBRep_Entity::Clear),
             R"#(Clears the contents of the fields)#" )
        .def("TransferVertexList",
             (void (BRepToIGESBRep_Entity::*)() ) static_cast<void (BRepToIGESBRep_Entity::*)() >(&BRepToIGESBRep_Entity::TransferVertexList),
             R"#(Create the VertexList entity)#" )
        .def("IndexVertex",
             (Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Vertex &  ) const) static_cast<Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Vertex &  ) const>(&BRepToIGESBRep_Entity::IndexVertex),
             R"#(Returns the index of <myvertex> in "myVertices")#"  , py::arg("myvertex"))
        .def("AddVertex",
             (Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Vertex &  ) ) static_cast<Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Vertex &  ) >(&BRepToIGESBRep_Entity::AddVertex),
             R"#(Stores <myvertex> in "myVertices" Returns the index of <myvertex>.)#"  , py::arg("myvertex"))
        .def("TransferEdgeList",
             (void (BRepToIGESBRep_Entity::*)() ) static_cast<void (BRepToIGESBRep_Entity::*)() >(&BRepToIGESBRep_Entity::TransferEdgeList),
             R"#(Transfert an Edge entity from TopoDS to IGES)#" )
        .def("IndexEdge",
             (Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Edge &  ) const>(&BRepToIGESBRep_Entity::IndexEdge),
             R"#(Returns the index of <myedge> in "myEdges")#"  , py::arg("myedge"))
        .def("AddEdge",
             (Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Edge & ,  const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<Standard_Integer (BRepToIGESBRep_Entity::*)( const TopoDS_Edge & ,  const opencascade::handle<IGESData_IGESEntity> &  ) >(&BRepToIGESBRep_Entity::AddEdge),
             R"#(Stores <myedge> in "myEdges" and <mycurve3d> in "myCurves". Returns the index of <myedge>.)#"  , py::arg("myedge"),  py::arg("mycurve3d"))
        .def("TransferShape",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Shape &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Shape &  ) >(&BRepToIGESBRep_Entity::TransferShape),
             R"#(Returns the result of the transfert of any Shape If the transfer has failed, this member return a NullEntity.)#"  , py::arg("start"))
        .def("TransferEdge",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Edge &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Edge &  ) >(&BRepToIGESBRep_Entity::TransferEdge),
             R"#(Transfert an Edge entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("myedge"))
        .def("TransferEdge",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&BRepToIGESBRep_Entity::TransferEdge),
             R"#(Transfert an Edge entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("myedge"),  py::arg("myface"),  py::arg("length"))
        .def("TransferWire",
             (opencascade::handle<IGESSolid_Loop> (BRepToIGESBRep_Entity::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESSolid_Loop> (BRepToIGESBRep_Entity::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&BRepToIGESBRep_Entity::TransferWire),
             R"#(Transfert a Wire entity from TopoDS to IGES. Returns the curve associated to mywire in the parametric space of myface. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("mywire"),  py::arg("myface"),  py::arg("length"))
        .def("TransferFace",
             (opencascade::handle<IGESSolid_Face> (BRepToIGESBRep_Entity::*)( const TopoDS_Face &  ) ) static_cast<opencascade::handle<IGESSolid_Face> (BRepToIGESBRep_Entity::*)( const TopoDS_Face &  ) >(&BRepToIGESBRep_Entity::TransferFace),
             R"#(Transfert a Face entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferShell",
             (opencascade::handle<IGESSolid_Shell> (BRepToIGESBRep_Entity::*)( const TopoDS_Shell &  ) ) static_cast<opencascade::handle<IGESSolid_Shell> (BRepToIGESBRep_Entity::*)( const TopoDS_Shell &  ) >(&BRepToIGESBRep_Entity::TransferShell),
             R"#(Transfert an Shell entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferSolid",
             (opencascade::handle<IGESSolid_ManifoldSolid> (BRepToIGESBRep_Entity::*)( const TopoDS_Solid &  ) ) static_cast<opencascade::handle<IGESSolid_ManifoldSolid> (BRepToIGESBRep_Entity::*)( const TopoDS_Solid &  ) >(&BRepToIGESBRep_Entity::TransferSolid),
             R"#(Transfert a Solid entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferCompSolid",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_CompSolid &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_CompSolid &  ) >(&BRepToIGESBRep_Entity::TransferCompSolid),
             R"#(Transfert an CompSolid entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferCompound",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Compound &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Compound &  ) >(&BRepToIGESBRep_Entity::TransferCompound),
             R"#(Transfert a Compound entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepToIGESBRep_Entity.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
