
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>

// module includes
#include <BRepClass_Edge.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <BRepClass_FaceExplorer.hxx>
#include <BRepClass_FacePassiveClassifier.hxx>
#include <BRepClass_FClass2dOfFClassifier.hxx>
#include <BRepClass_FClassifier.hxx>
#include <BRepClass_Intersector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepClass_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepClass", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepClass_Edge , shared_ptr<BRepClass_Edge>  >(m,"BRepClass_Edge",R"#(This class is used to send the description of an Edge to the classifier. It contains an Edge and a Face. So the PCurve of the Edge can be found.)#");
    py::class_<BRepClass_FClass2dOfFClassifier , shared_ptr<BRepClass_FClass2dOfFClassifier>  >(m,"BRepClass_FClass2dOfFClassifier",R"#(None)#");
    py::class_<BRepClass_FClassifier , shared_ptr<BRepClass_FClassifier>  >(m,"BRepClass_FClassifier",R"#(None)#");
    py::class_<BRepClass_FaceExplorer , shared_ptr<BRepClass_FaceExplorer>  >(m,"BRepClass_FaceExplorer",R"#(Provide an exploration of a BRep Face for the classification. Return UV edges.)#");
    py::class_<BRepClass_FacePassiveClassifier , shared_ptr<BRepClass_FacePassiveClassifier>  >(m,"BRepClass_FacePassiveClassifier",R"#(None)#");
    py::class_<BRepClass_Intersector , shared_ptr<BRepClass_Intersector>  , Geom2dInt_IntConicCurveOfGInter >(m,"BRepClass_Intersector",R"#(Intersect an Edge with a segment. Implement the Intersector2d required by the classifier.)#");
    py::class_<BRepClass_FaceClassifier , shared_ptr<BRepClass_FaceClassifier>  , BRepClass_FClassifier >(m,"BRepClass_FaceClassifier",R"#(Provides Constructors with a Face.)#");

};

// user-defined post-inclusion per module

// user-defined post
