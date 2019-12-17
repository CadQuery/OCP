
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_OBB.hxx>

// module includes
#include <BRepBndLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepBndLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepBndLib"));


//Python trampoline classes

// classes

    register_default_constructor<BRepBndLib ,std::unique_ptr<BRepBndLib>>(m,"BRepBndLib");

    static_cast<py::class_<BRepBndLib ,std::unique_ptr<BRepBndLib>  >>(m.attr("BRepBndLib"))
        .def_static("Add_s",
                    (void (*)( const TopoDS_Shape & ,  Bnd_Box & ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,  Bnd_Box & ,  const Standard_Boolean  ) >(&BRepBndLib::Add),
                    R"#(Adds the shape S to the bounding box B. More precisely are successively added to B: - each face of S; the triangulation of the face is used if it exists, - then each edge of S which does not belong to a face, the polygon of the edge is used if it exists - and last each vertex of S which does not belong to an edge. After each elementary operation, the bounding box B is enlarged by the tolerance value of the relative sub-shape. When working with the triangulation of a face this value of enlargement is the sum of the triangulation deflection and the face tolerance. When working with the polygon of an edge this value of enlargement is the sum of the polygon deflection and the edge tolerance. Warning - This algorithm is time consuming if triangulation has not been inserted inside the data structure of the shape S. - The resulting bounding box may be somewhat larger than the object.)#"  , py::arg("S"),  py::arg("B"),  py::arg("useTriangulation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("AddClose_s",
                    (void (*)( const TopoDS_Shape & ,  Bnd_Box &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  Bnd_Box &  ) >(&BRepBndLib::AddClose),
                    R"#(Adds the shape S to the bounding box B. This is a quick algorithm but only works if the shape S is composed of polygonal planar faces, as is the case if S is an approached polyhedral representation of an exact shape. Pay particular attention to this because this condition is not checked and, if it not respected, an error may occur in the algorithm for which the bounding box is built. Note that the resulting bounding box is not enlarged by the tolerance value of the sub-shapes as is the case with the Add function. So the added part of the resulting bounding box is closer to the shape S.)#"  , py::arg("S"),  py::arg("B"))
        .def_static("AddOptimal_s",
                    (void (*)( const TopoDS_Shape & ,  Bnd_Box & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,  Bnd_Box & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepBndLib::AddOptimal),
                    R"#(Adds the shape S to the bounding box B. This algorith builds precise bounding box, which differs from exact geometry boundaries of shape only on shape entities tolerances Algorithm is the same as for method Add(..), but uses more precise methods for building boxes for geometry objects. If useShapeTolerance = True, bounding box is enlardged by shape tolerances and these tolerances are used for numerical methods of bounding box size calculations, otherwise bounding box is built according to sizes of uderlined geometrical entities, numerical calculation use tolerance Precision::Confusion().)#"  , py::arg("S"),  py::arg("B"),  py::arg("useTriangulation")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("useShapeTolerance")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("AddOBB_s",
                    (void (*)( const TopoDS_Shape & ,  Bnd_OBB & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,  Bnd_OBB & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepBndLib::AddOBB),
                    R"#(Computes the Oriented Bounding box for the shape <theS>. Two independent methods of computation are implemented: first method based on set of points (so, it demands the triangulated shape or shape with planar faces and linear edges). The second method is based on use of inertia axes and is called if use of the first method is impossible. If theIsTriangulationUsed == FALSE then the triangulation will be ignored at all. If theIsShapeToleranceUsed == TRUE then resulting box will be extended on the tolerance of the shape. theIsOptimal flag defines the algorithm for construction of initial Bnd_Box for the second method (if theIsOptimal == TRUE then this box will be created by AddOptimal(...) method).)#"  , py::arg("theS"),  py::arg("theOBB"),  py::arg("theIsTriangulationUsed")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theIsOptimal")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theIsShapeToleranceUsed")=static_cast<const Standard_Boolean>(Standard_True))
;

// functions
// ./opencascade/BRepBndLib.hxx

// operators

// register typdefs
// ./opencascade/BRepBndLib.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
