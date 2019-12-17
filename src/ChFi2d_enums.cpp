
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ChFi2d_Builder.hxx>

// module includes
#include <ChFi2d.hxx>
#include <ChFi2d_AnaFilletAlgo.hxx>
#include <ChFi2d_Builder.hxx>
#include <ChFi2d_ChamferAPI.hxx>
#include <ChFi2d_ConstructionError.hxx>
#include <ChFi2d_FilletAlgo.hxx>
#include <ChFi2d_FilletAPI.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ChFi2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ChFi2d", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<ChFi2d_ConstructionError>(m, "ChFi2d_ConstructionError",R"#(error that can occur during the fillet construction on planar wire//! the face is not planar//! the face is null//! the two faces used for the initialisation are uncompatible.//! the parameters as distances or angle for chamfer are less or equal to zero.//! the initialization has been succesfull.//! the algorithm could not find a solution.//! the vertex given to locate the fillet or the chamfer is not connected to 2 edges.//! the two edges connected to the vertex are tangent.//! the first edge is degenerated.//! the last edge is degenerated.//! the two edges are degenerated.//! One or the two edges connected to the vertex is a fillet or a chamfer One or the two edges connected to the vertex is not a line or a circle)#")
        .value("ChFi2d_NotPlanar",ChFi2d_ConstructionError::ChFi2d_NotPlanar)
        .value("ChFi2d_NoFace",ChFi2d_ConstructionError::ChFi2d_NoFace)
        .value("ChFi2d_InitialisationError",ChFi2d_ConstructionError::ChFi2d_InitialisationError)
        .value("ChFi2d_ParametersError",ChFi2d_ConstructionError::ChFi2d_ParametersError)
        .value("ChFi2d_Ready",ChFi2d_ConstructionError::ChFi2d_Ready)
        .value("ChFi2d_IsDone",ChFi2d_ConstructionError::ChFi2d_IsDone)
        .value("ChFi2d_ComputationError",ChFi2d_ConstructionError::ChFi2d_ComputationError)
        .value("ChFi2d_ConnexionError",ChFi2d_ConstructionError::ChFi2d_ConnexionError)
        .value("ChFi2d_TangencyError",ChFi2d_ConstructionError::ChFi2d_TangencyError)
        .value("ChFi2d_FirstEdgeDegenerated",ChFi2d_ConstructionError::ChFi2d_FirstEdgeDegenerated)
        .value("ChFi2d_LastEdgeDegenerated",ChFi2d_ConstructionError::ChFi2d_LastEdgeDegenerated)
        .value("ChFi2d_BothEdgesDegenerated",ChFi2d_ConstructionError::ChFi2d_BothEdgesDegenerated)
        .value("ChFi2d_NotAuthorized",ChFi2d_ConstructionError::ChFi2d_NotAuthorized).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<ChFi2d ,std::unique_ptr<ChFi2d>  >(m,"ChFi2d",R"#(This package contains the algorithms used to build fillets or chamfers on planar wire.)#");
    py::class_<FilletPoint ,std::unique_ptr<FilletPoint>  >(m,"FilletPoint",R"#(Private class. Corresponds to the point on the first curve, computed fillet function and derivative on it.Private class. Corresponds to the point on the first curve, computed fillet function and derivative on it.)#");
    py::class_<ChFi2d_FilletAPI ,std::unique_ptr<ChFi2d_FilletAPI>  >(m,"ChFi2d_FilletAPI",R"#(An interface class for 2D fillets. Open CASCADE provides two algorithms for 2D fillets: ChFi2d_Builder - it constructs a fillet or chamfer for linear and circular edges of a face. ChFi2d_FilletAPI - it encapsulates two algorithms: ChFi2d_AnaFilletAlgo - analytical constructor of the fillet. It works only for linear and circular edges, having a common point. ChFi2d_FilletAlgo - iteration recursive method constructing the fillet edge for any type of edges including ellipses and b-splines. The edges may even have no common point.)#");
    py::class_<ChFi2d_AnaFilletAlgo ,std::unique_ptr<ChFi2d_AnaFilletAlgo>  >(m,"ChFi2d_AnaFilletAlgo",R"#(An analytical algorithm for calculation of the fillets. It is implemented for segments and arcs of circle only.)#");
    py::class_<ChFi2d_ChamferAPI ,std::unique_ptr<ChFi2d_ChamferAPI>  >(m,"ChFi2d_ChamferAPI",R"#(A class making a chamfer between two linear edges.)#");
    py::class_<ChFi2d_Builder ,std::unique_ptr<ChFi2d_Builder>  >(m,"ChFi2d_Builder",R"#(This class contains the algorithm used to build fillet on planar wire.)#");
    py::class_<ChFi2d_FilletAlgo ,std::unique_ptr<ChFi2d_FilletAlgo>  >(m,"ChFi2d_FilletAlgo",R"#(Algorithm that creates fillet edge: arc tangent to two edges in the start and in the end vertices. Initial edges must be located on the plane and must be connected by the end or start points (shared vertices are not obligatory). Created fillet arc is created with the given radius, that is useful in sketcher applications.)#");

// pre-register typdefs
// ./opencascade/ChFi2d.hxx
// ./opencascade/ChFi2d_ChamferAPI.hxx
// ./opencascade/ChFi2d_FilletAlgo.hxx
// ./opencascade/ChFi2d_FilletAPI.hxx
// ./opencascade/ChFi2d_ConstructionError.hxx
// ./opencascade/ChFi2d_Builder.hxx
// ./opencascade/ChFi2d_AnaFilletAlgo.hxx

};

// user-defined post-inclusion per module

// user-defined post
