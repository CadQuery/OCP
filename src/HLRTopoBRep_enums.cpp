
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <HLRAlgo_Projector.hxx>
#include <TopoDS_Face.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Line.hxx>
#include <Contap_Contour.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <Contap_Point.hxx>
#include <TopoDS_Edge.hxx>

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
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
#include "NCollection.hxx"
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
#include "NCollection.hxx"
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
#include "NCollection.hxx"
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
#include "NCollection.hxx"
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection.hxx"
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRTopoBRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("HLRTopoBRep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<HLRTopoBRep_OutLiner ,opencascade::handle<HLRTopoBRep_OutLiner>  , Standard_Transient >(m,"HLRTopoBRep_OutLiner",R"#()#");
    py::class_<HLRTopoBRep_Data ,std::unique_ptr<HLRTopoBRep_Data>  >(m,"HLRTopoBRep_Data",R"#(Stores the results of the OutLine and IsoLine processes.)#");
    py::class_<HLRTopoBRep_DSFiller ,std::unique_ptr<HLRTopoBRep_DSFiller>  >(m,"HLRTopoBRep_DSFiller",R"#(Provides methods to fill a HLRTopoBRep_Data.)#");
    py::class_<HLRTopoBRep_FaceData ,std::unique_ptr<HLRTopoBRep_FaceData>  >(m,"HLRTopoBRep_FaceData",R"#(Contains the 3 ListOfShape of a Face ( Internal OutLines, OutLines on restriction and IsoLines ).)#");
    py::class_<HLRTopoBRep_VData ,std::unique_ptr<HLRTopoBRep_VData>  >(m,"HLRTopoBRep_VData",R"#(None)#");
    py::class_<HLRTopoBRep_FaceIsoLiner ,std::unique_ptr<HLRTopoBRep_FaceIsoLiner>  >(m,"HLRTopoBRep_FaceIsoLiner",R"#(None)#");

// pre-register typdefs
// ./opencascade/HLRTopoBRep_OutLiner.hxx
// ./opencascade/HLRTopoBRep_FaceData.hxx
// ./opencascade/HLRTopoBRep_ListOfVData.hxx
    preregister_template_NCollection_List<HLRTopoBRep_VData>(m,"HLRTopoBRep_ListOfVData");  
// ./opencascade/HLRTopoBRep_DataMapOfShapeFaceData.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_FaceData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_DataMapOfShapeFaceData");  
// ./opencascade/HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx
// ./opencascade/HLRTopoBRep_ListIteratorOfListOfVData.hxx
// ./opencascade/HLRTopoBRep_Data.hxx
// ./opencascade/HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData.hxx
// ./opencascade/HLRTopoBRep_MapOfShapeListOfVData.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, HLRTopoBRep_ListOfVData, TopTools_ShapeMapHasher>(m,"HLRTopoBRep_MapOfShapeListOfVData");  
// ./opencascade/HLRTopoBRep_FaceIsoLiner.hxx
// ./opencascade/HLRTopoBRep_DSFiller.hxx
// ./opencascade/HLRTopoBRep_VData.hxx

};

// user-defined post-inclusion per module

// user-defined post
