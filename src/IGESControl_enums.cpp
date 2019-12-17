
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <ShapeExtend_WireData.hxx>
#include <Transfer_FinderProcess.hxx>
#include <IGESData_IGESModel.hxx>
#include <TopoDS_Shape.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <XSControl_WorkSession.hxx>
#include <IGESData_IGESModel.hxx>

// module includes
#include <IGESControl_ActorWrite.hxx>
#include <IGESControl_AlgoContainer.hxx>
#include <IGESControl_Controller.hxx>
#include <IGESControl_IGESBoundary.hxx>
#include <IGESControl_Reader.hxx>
#include <IGESControl_ToolContainer.hxx>
#include <IGESControl_Writer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESControl_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESControl", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<IGESControl_IGESBoundary ,opencascade::handle<IGESControl_IGESBoundary>  , IGESToBRep_IGESBoundary >(m,"IGESControl_IGESBoundary",R"#(Translates IGES boundary entity (types 141, 142 and 508) in Advanced Data Exchange. Redefines translation and treatment methods from inherited open class IGESToBRep_IGESBoundary.Translates IGES boundary entity (types 141, 142 and 508) in Advanced Data Exchange. Redefines translation and treatment methods from inherited open class IGESToBRep_IGESBoundary.Translates IGES boundary entity (types 141, 142 and 508) in Advanced Data Exchange. Redefines translation and treatment methods from inherited open class IGESToBRep_IGESBoundary.)#");
    py::class_<IGESControl_ActorWrite ,opencascade::handle<IGESControl_ActorWrite>  , Transfer_ActorOfFinderProcess >(m,"IGESControl_ActorWrite",R"#(Actor to write Shape to IGESActor to write Shape to IGESActor to write Shape to IGES)#");
    py::class_<IGESControl_Controller ,opencascade::handle<IGESControl_Controller>  , XSControl_Controller >(m,"IGESControl_Controller",R"#(Controller for IGES-5.1Controller for IGES-5.1Controller for IGES-5.1)#");
    py::class_<IGESControl_Reader ,std::unique_ptr<IGESControl_Reader>  , XSControl_Reader >(m,"IGESControl_Reader",R"#(Reads IGES files, checks them and translates their contents into Open CASCADE models. The IGES data can be that of a whole model or that of a specific list of entities in the model. As in XSControl_Reader, you specify the list using a selection. For translation of iges files it is possible to use the following sequence: To change parameters of translation class Interface_Static should be used before the beginning of translation (see IGES Parameters and General Parameters) Creation of reader IGESControl_Reader reader; To load a file in a model use method: reader.ReadFile("filename.igs") To check a loading file use method Check: reader.Check(failsonly); where failsonly is equal to Standard_True or Standard_False; To print the results of load: reader.PrintCheckLoad(failsonly,mode) where mode is equal to the value of enumeration IFSelect_PrintCount To transfer entities from a model the following methods can be used: for the whole model reader.TransferRoots(onlyvisible); where onlyvisible is equal to Standard_True or Standard_False; To transfer a list of entities: reader.TransferList(list); To transfer one entity reader.TransferEntity(ent) or reader.Transfer(num); To obtain a result the following method can be used: reader.IsDone() reader.NbShapes() and reader.Shape(num); or reader.OneShape(); To print the results of transfer use method: reader.PrintTransferInfo(failwarn,mode); where printfail is equal to the value of enumeration IFSelect_PrintFail, mode see above. Gets correspondence between an IGES entity and a result shape obtained therefrom. reader.TransientProcess(); TopoDS_Shape shape = TransferBRep::ShapeResult(reader.TransientProcess(),ent);)#");
    py::class_<IGESControl_Writer ,std::unique_ptr<IGESControl_Writer>  >(m,"IGESControl_Writer",R"#(This class creates and writes IGES files from CAS.CADE models. An IGES file can be written to an existing IGES file or to a new one. The translation can be performed in one or several operations. Each translation operation outputs a distinct root entity in the IGES file. To write an IGES file it is possible to use the following sequence: To modify the IGES file header or to change translation parameters it is necessary to use class Interface_Static (see IGESParameters and GeneralParameters).)#");
    py::class_<IGESControl_ToolContainer ,opencascade::handle<IGESControl_ToolContainer>  , IGESToBRep_ToolContainer >(m,"IGESControl_ToolContainer",R"#()#");
    py::class_<IGESControl_AlgoContainer ,opencascade::handle<IGESControl_AlgoContainer>  , IGESToBRep_AlgoContainer >(m,"IGESControl_AlgoContainer",R"#()#");

// pre-register typdefs
// ./opencascade/IGESControl_IGESBoundary.hxx
// ./opencascade/IGESControl_Writer.hxx
// ./opencascade/IGESControl_ActorWrite.hxx
// ./opencascade/IGESControl_AlgoContainer.hxx
// ./opencascade/IGESControl_Controller.hxx
// ./opencascade/IGESControl_ToolContainer.hxx
// ./opencascade/IGESControl_Reader.hxx

};

// user-defined post-inclusion per module

// user-defined post
