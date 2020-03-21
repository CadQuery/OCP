
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <HLRAlgo_Projector.hxx>
#include <Contap_Contour.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <Contap_Point.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Line.hxx>

// module includes
#include <HLRTopoBRep_Data.hxx>
#include <HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx>
#include <HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData.hxx>
#include <HLRTopoBRep_DataMapOfShapeFaceData.hxx>
#include <HLRTopoBRep_DSFiller.hxx>
#include <HLRTopoBRep_FaceData.hxx>
#include <HLRTopoBRep_FaceIsoLiner.hxx>
#include <HLRTopoBRep_ListIteratorOfListOfVData.hxx>
#include <HLRTopoBRep_ListOfVData.hxx>
#include <HLRTopoBRep_MapOfShapeListOfVData.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRTopoBRep_VData.hxx>

// template related includes
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRTopoBRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("HLRTopoBRep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_FaceData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_DataMapOfShapeFaceData");
    preregister_template_NCollection_List<HLRTopoBRep_VData>(m,"HLRTopoBRep_ListOfVData");
    preregister_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_ListOfVData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_MapOfShapeListOfVData");

// classes forward declarations only
    py::class_<HLRTopoBRep_DSFiller , shared_ptr<HLRTopoBRep_DSFiller> >(m,"HLRTopoBRep_DSFiller",R"#(Provides methods to fill a HLRTopoBRep_Data.)#");
    py::class_<HLRTopoBRep_Data , shared_ptr<HLRTopoBRep_Data> >(m,"HLRTopoBRep_Data",R"#(Stores the results of the OutLine and IsoLine processes.)#");
    py::class_<HLRTopoBRep_FaceData , shared_ptr<HLRTopoBRep_FaceData> >(m,"HLRTopoBRep_FaceData",R"#(Contains the 3 ListOfShape of a Face ( Internal OutLines, OutLines on restriction and IsoLines ).)#");
    py::class_<HLRTopoBRep_FaceIsoLiner , shared_ptr<HLRTopoBRep_FaceIsoLiner> >(m,"HLRTopoBRep_FaceIsoLiner",R"#(None)#");
    py::class_<HLRTopoBRep_OutLiner ,opencascade::handle<HLRTopoBRep_OutLiner> , Standard_Transient>(m,"HLRTopoBRep_OutLiner",R"#()#");
    py::class_<HLRTopoBRep_VData , shared_ptr<HLRTopoBRep_VData> >(m,"HLRTopoBRep_VData",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
