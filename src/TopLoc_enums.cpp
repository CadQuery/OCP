
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopLoc_Datum3D.hxx>
#include <TopLoc_Location.hxx>
#include <TopLoc_SListOfItemLocation.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopLoc_Datum3D.hxx>
#include <TopLoc_SListNodeOfItemLocation.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopLoc_ItemLocation.hxx>

// module includes
#include <TopLoc_Datum3D.hxx>
#include <TopLoc_IndexedMapOfLocation.hxx>
#include <TopLoc_ItemLocation.hxx>
#include <TopLoc_Location.hxx>
#include <TopLoc_MapIteratorOfMapOfLocation.hxx>
#include <TopLoc_MapLocationHasher.hxx>
#include <TopLoc_MapOfLocation.hxx>
#include <TopLoc_SListNodeOfItemLocation.hxx>
#include <TopLoc_SListOfItemLocation.hxx>

// template related includes
// ./opencascade/TopLoc_MapLocationHasher.hxx
#include "NCollection.hxx"
// ./opencascade/TopLoc_MapOfLocation.hxx
#include "NCollection.hxx"
// ./opencascade/TopLoc_MapOfLocation.hxx
#include "NCollection.hxx"
// ./opencascade/TopLoc_IndexedMapOfLocation.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopLoc_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopLoc", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<TopLoc_ItemLocation ,std::unique_ptr<TopLoc_ItemLocation>  >(m,"TopLoc_ItemLocation",R"#(An ItemLocation is an elementary coordinate system in a Location.)#");
    py::class_<TopLoc_Location ,std::unique_ptr<TopLoc_Location>  >(m,"TopLoc_Location",R"#(A Location is a composite transition. It comprises a series of elementary reference coordinates, i.e. objects of type TopLoc_Datum3D, and the powers to which these objects are raised.)#");
    py::class_<TopLoc_SListOfItemLocation ,std::unique_ptr<TopLoc_SListOfItemLocation>  >(m,"TopLoc_SListOfItemLocation",R"#(An SListOfItemLocation is a LISP like list of Items. An SListOfItemLocation is : . Empty. . Or it has a Value and a Tail which is an other SListOfItemLocation.)#");
    py::class_<TopLoc_Datum3D ,opencascade::handle<TopLoc_Datum3D>  , Standard_Transient >(m,"TopLoc_Datum3D",R"#(Describes a coordinate transformation, i.e. a change to an elementary 3D coordinate system, or position in 3D space. A Datum3D is always described relative to the default datum. The default datum is described relative to itself: its origin is (0,0,0), and its axes are (1,0,0) (0,1,0) (0,0,1).Describes a coordinate transformation, i.e. a change to an elementary 3D coordinate system, or position in 3D space. A Datum3D is always described relative to the default datum. The default datum is described relative to itself: its origin is (0,0,0), and its axes are (1,0,0) (0,1,0) (0,0,1).Describes a coordinate transformation, i.e. a change to an elementary 3D coordinate system, or position in 3D space. A Datum3D is always described relative to the default datum. The default datum is described relative to itself: its origin is (0,0,0), and its axes are (1,0,0) (0,1,0) (0,0,1).)#");
    py::class_<TopLoc_SListNodeOfItemLocation ,opencascade::handle<TopLoc_SListNodeOfItemLocation>  , Standard_Transient >(m,"TopLoc_SListNodeOfItemLocation",R"#()#");

// pre-register typdefs
// ./opencascade/TopLoc_ItemLocation.hxx
// ./opencascade/TopLoc_MapLocationHasher.hxx
    preregister_template_NCollection_DefaultHasher<TopLoc_Location>(m,"TopLoc_MapLocationHasher");  
// ./opencascade/TopLoc_Datum3D.hxx
// ./opencascade/TopLoc_MapOfLocation.hxx
    preregister_template_NCollection_Map<TopLoc_Location, TopLoc_MapLocationHasher>(m,"TopLoc_MapOfLocation");  
// ./opencascade/TopLoc_Location.hxx
// ./opencascade/TopLoc_SListNodeOfItemLocation.hxx
// ./opencascade/TopLoc_IndexedMapOfLocation.hxx
    preregister_template_NCollection_IndexedMap<TopLoc_Location, TopLoc_MapLocationHasher>(m,"TopLoc_IndexedMapOfLocation");  
// ./opencascade/TopLoc_SListOfItemLocation.hxx
// ./opencascade/TopLoc_MapIteratorOfMapOfLocation.hxx

};

// user-defined post-inclusion per module

// user-defined post
