
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <MAT2d_MiniPath.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT2d_Tool2d.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT_Bisector.hxx>
#include <Geom2d_Geometry.hxx>
#include <Geom2d_TrimmedCurve.hxx>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_Array2OfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_SequenceOfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfGeometry.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MAT2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("MAT2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<Standard_Integer, Bisector_Bisec, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerBisec");
    preregister_template_NCollection_Array2<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_Array2OfConnexion");
    preregister_template_NCollection_DataMap<MAT2d_BiInt, TColStd_SequenceOfInteger, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntSequenceOfInteger");
    preregister_template_NCollection_DataMap<Standard_Integer, gp_Vec2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerVec2d");
    preregister_template_NCollection_DataMap<MAT2d_BiInt, Standard_Integer, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntInteger");
    preregister_template_NCollection_DataMap<Standard_Integer, MAT2d_SequenceOfConnexion, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerSequenceOfConnexion");
    preregister_template_NCollection_Sequence<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_SequenceOfConnexion");
    preregister_template_NCollection_Sequence<TColGeom2d_SequenceOfCurve>(m,"MAT2d_SequenceOfSequenceOfCurve");
    preregister_template_NCollection_Sequence<TColGeom2d_SequenceOfGeometry>(m,"MAT2d_SequenceOfSequenceOfGeometry");
    preregister_template_NCollection_DataMap<Standard_Integer, gp_Pnt2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerPnt2d");

// classes forward declarations only
    py::class_<MAT2d_BiInt , shared_ptr<MAT2d_BiInt> >(m,"MAT2d_BiInt",R"#(BiInt is a set of two integers.)#");
    py::class_<MAT2d_Circuit ,opencascade::handle<MAT2d_Circuit> , Standard_Transient>(m,"MAT2d_Circuit",R"#(Constructs a circuit on a set of lines. EquiCircuit gives a Circuit passing by all the lines in a set and all the connexions of the minipath associated.Constructs a circuit on a set of lines. EquiCircuit gives a Circuit passing by all the lines in a set and all the connexions of the minipath associated.Constructs a circuit on a set of lines. EquiCircuit gives a Circuit passing by all the lines in a set and all the connexions of the minipath associated.)#");
    py::class_<MAT2d_Connexion ,opencascade::handle<MAT2d_Connexion> , Standard_Transient>(m,"MAT2d_Connexion",R"#(A Connexion links two lines of items in a set of lines. It s contains two points and their paramatric definitions on the lines. The items can be points or curves.A Connexion links two lines of items in a set of lines. It s contains two points and their paramatric definitions on the lines. The items can be points or curves.A Connexion links two lines of items in a set of lines. It s contains two points and their paramatric definitions on the lines. The items can be points or curves.)#");
    py::class_<MAT2d_CutCurve , shared_ptr<MAT2d_CutCurve> >(m,"MAT2d_CutCurve",R"#(Cuts a curve at the extremas of curvature and at the inflections. Constructs a trimmed Curve for each interval.)#");
    py::class_<MAT2d_MapBiIntHasher , shared_ptr<MAT2d_MapBiIntHasher> >(m,"MAT2d_MapBiIntHasher",R"#(None)#");
    py::class_<MAT2d_Mat2d , shared_ptr<MAT2d_Mat2d> >(m,"MAT2d_Mat2d",R"#(this class contains the generic algoritm of computation of the bisecting locus.)#");
    py::class_<MAT2d_MiniPath , shared_ptr<MAT2d_MiniPath> >(m,"MAT2d_MiniPath",R"#(MiniPath computes a path to link all the lines in a set of lines. The path is described as a set of connexions.)#");
    py::class_<MAT2d_Tool2d , shared_ptr<MAT2d_Tool2d> >(m,"MAT2d_Tool2d",R"#(Set of the methods useful for the MAT's computation. Tool2d contains the geometry of the bisecting locus.)#");

};

// user-defined post-inclusion per module

// user-defined post
