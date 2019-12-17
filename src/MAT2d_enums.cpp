
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <MAT_ListOfEdge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT2d_Tool2d.hxx>
#include <MAT2d_MiniPath.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT_Bisector.hxx>
#include <Geom2d_Geometry.hxx>

// module includes
#include <MAT2d_Array2OfConnexion.hxx>
#include <MAT2d_BiInt.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT2d_Connexion.hxx>
#include <MAT2d_CutCurve.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerConnexion.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx>
#include <MAT2d_DataMapOfBiIntInteger.hxx>
#include <MAT2d_DataMapOfBiIntSequenceOfInteger.hxx>
#include <MAT2d_DataMapOfIntegerBisec.hxx>
#include <MAT2d_DataMapOfIntegerConnexion.hxx>
#include <MAT2d_DataMapOfIntegerPnt2d.hxx>
#include <MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx>
#include <MAT2d_DataMapOfIntegerVec2d.hxx>
#include <MAT2d_MapBiIntHasher.hxx>
#include <MAT2d_Mat2d.hxx>
#include <MAT2d_MiniPath.hxx>
#include <MAT2d_SequenceOfConnexion.hxx>
#include <MAT2d_SequenceOfSequenceOfCurve.hxx>
#include <MAT2d_SequenceOfSequenceOfGeometry.hxx>
#include <MAT2d_Tool2d.hxx>

// template related includes
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_SequenceOfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_Array2OfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfGeometry.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MAT2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("MAT2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<MAT2d_Mat2d ,std::unique_ptr<MAT2d_Mat2d>  >(m,"MAT2d_Mat2d",R"#(this class contains the generic algoritm of computation of the bisecting locus.)#");
    py::class_<MAT2d_Connexion ,opencascade::handle<MAT2d_Connexion>  , Standard_Transient >(m,"MAT2d_Connexion",R"#(A Connexion links two lines of items in a set of lines. It s contains two points and their paramatric definitions on the lines. The items can be points or curves.A Connexion links two lines of items in a set of lines. It s contains two points and their paramatric definitions on the lines. The items can be points or curves.A Connexion links two lines of items in a set of lines. It s contains two points and their paramatric definitions on the lines. The items can be points or curves.)#");
    py::class_<MAT2d_MiniPath ,std::unique_ptr<MAT2d_MiniPath>  >(m,"MAT2d_MiniPath",R"#(MiniPath computes a path to link all the lines in a set of lines. The path is described as a set of connexions.)#");
    py::class_<MAT2d_Tool2d ,std::unique_ptr<MAT2d_Tool2d>  >(m,"MAT2d_Tool2d",R"#(Set of the methods useful for the MAT's computation. Tool2d contains the geometry of the bisecting locus.)#");
    py::class_<MAT2d_Circuit ,opencascade::handle<MAT2d_Circuit>  , Standard_Transient >(m,"MAT2d_Circuit",R"#(Constructs a circuit on a set of lines. EquiCircuit gives a Circuit passing by all the lines in a set and all the connexions of the minipath associated.Constructs a circuit on a set of lines. EquiCircuit gives a Circuit passing by all the lines in a set and all the connexions of the minipath associated.Constructs a circuit on a set of lines. EquiCircuit gives a Circuit passing by all the lines in a set and all the connexions of the minipath associated.)#");
    py::class_<MAT2d_BiInt ,std::unique_ptr<MAT2d_BiInt>  >(m,"MAT2d_BiInt",R"#(BiInt is a set of two integers.)#");
    py::class_<MAT2d_CutCurve ,std::unique_ptr<MAT2d_CutCurve>  >(m,"MAT2d_CutCurve",R"#(Cuts a curve at the extremas of curvature and at the inflections. Constructs a trimmed Curve for each interval.)#");
    py::class_<MAT2d_MapBiIntHasher ,std::unique_ptr<MAT2d_MapBiIntHasher>  >(m,"MAT2d_MapBiIntHasher",R"#(None)#");

// pre-register typdefs
// ./opencascade/MAT2d_Mat2d.hxx
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, Bisector_Bisec, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerBisec");  
// ./opencascade/MAT2d_DataMapOfIntegerConnexion.hxx
// ./opencascade/MAT2d_Circuit.hxx
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, gp_Pnt2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerPnt2d");  
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx
// ./opencascade/MAT2d_SequenceOfConnexion.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_SequenceOfConnexion");  
// ./opencascade/MAT2d_Connexion.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, MAT2d_SequenceOfConnexion, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerSequenceOfConnexion");  
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, gp_Vec2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerVec2d");  
// ./opencascade/MAT2d_Array2OfConnexion.hxx
    preregister_template_NCollection_Array2<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_Array2OfConnexion");  
// ./opencascade/MAT2d_SequenceOfSequenceOfGeometry.hxx
    preregister_template_NCollection_Sequence<TColGeom2d_SequenceOfGeometry>(m,"MAT2d_SequenceOfSequenceOfGeometry");  
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
    preregister_template_NCollection_DataMap<MAT2d_BiInt, TColStd_SequenceOfInteger, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntSequenceOfInteger");  
// ./opencascade/MAT2d_CutCurve.hxx
// ./opencascade/MAT2d_MiniPath.hxx
// ./opencascade/MAT2d_BiInt.hxx
// ./opencascade/MAT2d_Tool2d.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx
// ./opencascade/MAT2d_MapBiIntHasher.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerConnexion.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.hxx
// ./opencascade/MAT2d_SequenceOfSequenceOfCurve.hxx
    preregister_template_NCollection_Sequence<TColGeom2d_SequenceOfCurve>(m,"MAT2d_SequenceOfSequenceOfCurve");  
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
    preregister_template_NCollection_DataMap<MAT2d_BiInt, Standard_Integer, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntInteger");  
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx

};

// user-defined post-inclusion per module

// user-defined post
