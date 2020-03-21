
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Message_ProgressIndicator.hxx>
#include <Message_ProgressIndicator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_Mutex.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopTools_ShapeSet.hxx>

// module includes
#include <TopTools.hxx>
#include <TopTools_Array1OfListOfShape.hxx>
#include <TopTools_Array1OfShape.hxx>
#include <TopTools_Array2OfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfIntegerShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfOrientedShapeInteger.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeInteger.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeReal.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#include <TopTools_DataMapOfIntegerListOfShape.hxx>
#include <TopTools_DataMapOfIntegerShape.hxx>
#include <TopTools_DataMapOfOrientedShapeInteger.hxx>
#include <TopTools_DataMapOfOrientedShapeShape.hxx>
#include <TopTools_DataMapOfShapeBox.hxx>
#include <TopTools_DataMapOfShapeInteger.hxx>
#include <TopTools_DataMapOfShapeListOfInteger.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapOfShapeReal.hxx>
#include <TopTools_DataMapOfShapeSequenceOfShape.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <TopTools_HArray1OfListOfShape.hxx>
#include <TopTools_HArray1OfShape.hxx>
#include <TopTools_HArray2OfShape.hxx>
#include <TopTools_HSequenceOfShape.hxx>
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <TopTools_IndexedDataMapOfShapeReal.hxx>
#include <TopTools_IndexedDataMapOfShapeShape.hxx>
#include <TopTools_IndexedMapOfOrientedShape.hxx>
#include <TopTools_IndexedMapOfShape.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>
#include <TopTools_ListOfListOfShape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopTools_LocationSetPtr.hxx>
#include <TopTools_MapIteratorOfMapOfOrientedShape.hxx>
#include <TopTools_MapIteratorOfMapOfShape.hxx>
#include <TopTools_MapOfOrientedShape.hxx>
#include <TopTools_MapOfShape.hxx>
#include <TopTools_MutexForShapeProvider.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_SequenceOfShape.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopTools_ShapeSet.hxx>

// template related includes
// ./opencascade/TopTools_DataMapOfShapeListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_IndexedMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_IndexedDataMapOfShapeAddress.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_IndexedMapOfOrientedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeSequenceOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeSequenceOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_IndexedDataMapOfShapeReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfOrientedShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfOrientedShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_IndexedDataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_SequenceOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_IndexedDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfIntegerListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfIntegerListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_MapOfOrientedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_MapOfOrientedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_ListOfListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_Array1OfListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_Array1OfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_MapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_MapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_Array2OfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfOrientedShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_DataMapOfOrientedShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopTools_ListOfShape.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopTools_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopTools", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<TopoDS_Shape, TColStd_ListOfInteger, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeListOfInteger");
    preregister_template_NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_IndexedMapOfShape");
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, Standard_Address, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeAddress");
    preregister_template_NCollection_DataMap<TopoDS_Shape, Standard_Real, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeReal");
    preregister_template_NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher>(m,"TopTools_IndexedMapOfOrientedShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopTools_SequenceOfShape, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeSequenceOfShape");
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, Standard_Real, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeReal");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_OrientedShapeMapHasher>(m,"TopTools_DataMapOfOrientedShapeShape");
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeShape");
    preregister_template_NCollection_Sequence<TopoDS_Shape>(m,"TopTools_SequenceOfShape");
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeListOfShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeInteger");
    preregister_template_NCollection_DataMap<Standard_Integer, TopTools_ListOfShape, TColStd_MapIntegerHasher>(m,"TopTools_DataMapOfIntegerListOfShape");
    preregister_template_NCollection_Map<TopoDS_Shape, TopTools_OrientedShapeMapHasher>(m,"TopTools_MapOfOrientedShape");
    preregister_template_NCollection_DataMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher>(m,"TopTools_DataMapOfIntegerShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeShape");
    preregister_template_NCollection_List<TopTools_ListOfShape>(m,"TopTools_ListOfListOfShape");
    preregister_template_NCollection_Array1<TopTools_ListOfShape>(m,"TopTools_Array1OfListOfShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, Bnd_Box, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeBox");
    preregister_template_NCollection_Array1<TopoDS_Shape>(m,"TopTools_Array1OfShape");
    preregister_template_NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_MapOfShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeListOfShape");
    preregister_template_NCollection_Array2<TopoDS_Shape>(m,"TopTools_Array2OfShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher>(m,"TopTools_DataMapOfOrientedShapeInteger");
    preregister_template_NCollection_List<TopoDS_Shape>(m,"TopTools_ListOfShape");

// classes forward declarations only
    py::class_<TopTools , shared_ptr<TopTools> >(m,"TopTools",R"#(The TopTools package provides utilities for the topological data structure.)#");
    py::class_<TopTools_HArray1OfListOfShape ,opencascade::handle<TopTools_HArray1OfListOfShape> , TopTools_Array1OfListOfShape, Standard_Transient>(m,"TopTools_HArray1OfListOfShape",R"#()#");
    py::class_<TopTools_HArray1OfShape ,opencascade::handle<TopTools_HArray1OfShape> , TopTools_Array1OfShape, Standard_Transient>(m,"TopTools_HArray1OfShape",R"#()#");
    py::class_<TopTools_HArray2OfShape ,opencascade::handle<TopTools_HArray2OfShape> , TopTools_Array2OfShape, Standard_Transient>(m,"TopTools_HArray2OfShape",R"#()#");
    py::class_<TopTools_HSequenceOfShape ,opencascade::handle<TopTools_HSequenceOfShape> , TopTools_SequenceOfShape, Standard_Transient>(m,"TopTools_HSequenceOfShape",R"#()#");
    py::class_<TopTools_LocationSet , shared_ptr<TopTools_LocationSet> >(m,"TopTools_LocationSet",R"#(The class LocationSet stores a set of location in a relocatable state.)#");
    py::class_<TopTools_MutexForShapeProvider , shared_ptr<TopTools_MutexForShapeProvider> >(m,"TopTools_MutexForShapeProvider",R"#(Class TopTools_MutexForShapeProvider This class is used to create and store mutexes associated with shapes.)#");
    py::class_<TopTools_OrientedShapeMapHasher , shared_ptr<TopTools_OrientedShapeMapHasher> >(m,"TopTools_OrientedShapeMapHasher",R"#(None)#");
    py::class_<TopTools_ShapeMapHasher , shared_ptr<TopTools_ShapeMapHasher> >(m,"TopTools_ShapeMapHasher",R"#(Hash tool, used for generating maps of shapes in topology.)#");
    py::class_<TopTools_ShapeSet , shared_ptr<TopTools_ShapeSet> >(m,"TopTools_ShapeSet",R"#(A ShapeSets contains a Shape and all its sub-shapes and locations. It can be dump, write and read.)#");

};

// user-defined post-inclusion per module

// user-defined post
