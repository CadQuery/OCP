
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_Protocol.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_Graph.hxx>
#include <IGESSelect_EditHeader.hxx>
#include <IGESSelect_EditDirPart.hxx>
#include <IGESSelect_IGESTypeForm.hxx>
#include <IGESSelect_IGESName.hxx>
#include <IGESSelect_SignStatus.hxx>
#include <IGESSelect_SignLevelNumber.hxx>
#include <IGESSelect_SignColor.hxx>
#include <IGESSelect_CounterOfLevelNumber.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <IGESSelect_DispPerSingleView.hxx>
#include <IGESSelect_DispPerDrawing.hxx>
#include <IGESSelect_SelectVisibleStatus.hxx>
#include <IGESSelect_SelectSubordinate.hxx>
#include <IGESSelect_SelectLevelNumber.hxx>
#include <IGESSelect_SelectName.hxx>
#include <IGESSelect_SelectFromSingleView.hxx>
#include <IGESSelect_SelectFromDrawing.hxx>
#include <IGESSelect_SelectSingleViewFrom.hxx>
#include <IGESSelect_SelectDrawingFrom.hxx>
#include <IGESSelect_SelectBypassGroup.hxx>
#include <IGESSelect_SelectBypassSubfigure.hxx>
#include <IGESSelect_SelectBasicGeom.hxx>
#include <IGESSelect_SelectFaces.hxx>
#include <IGESSelect_SelectPCurves.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <IGESSelect_FileModifier.hxx>
#include <IGESSelect_FloatFormat.hxx>
#include <IGESSelect_AddFileComment.hxx>
#include <IGESSelect_UpdateFileName.hxx>
#include <IGESSelect_UpdateCreationDate.hxx>
#include <IGESSelect_UpdateLastChange.hxx>
#include <IGESSelect_SetVersion5.hxx>
#include <IGESSelect_SetGlobalParameter.hxx>
#include <IGESSelect_AutoCorrect.hxx>
#include <IGESSelect_ComputeStatus.hxx>
#include <IGESSelect_RebuildDrawings.hxx>
#include <IGESSelect_RebuildGroups.hxx>
#include <IGESSelect_AddGroup.hxx>
#include <IGESSelect_ChangeLevelNumber.hxx>
#include <IGESSelect_ChangeLevelList.hxx>
#include <IGESSelect_SplineToBSpline.hxx>
#include <IGESSelect_RemoveCurves.hxx>
#include <IGESSelect_SetLabel.hxx>
#include <IGESSelect_WorkLibrary.hxx>
#include <IGESSelect_Activator.hxx>
#include <IGESSelect_Dumper.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_Protocol.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_PacketList.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Message_Messenger.hxx>

// module includes
#include <IGESSelect.hxx>
#include <IGESSelect_Activator.hxx>
#include <IGESSelect_AddFileComment.hxx>
#include <IGESSelect_AddGroup.hxx>
#include <IGESSelect_AutoCorrect.hxx>
#include <IGESSelect_ChangeLevelList.hxx>
#include <IGESSelect_ChangeLevelNumber.hxx>
#include <IGESSelect_ComputeStatus.hxx>
#include <IGESSelect_CounterOfLevelNumber.hxx>
#include <IGESSelect_DispPerDrawing.hxx>
#include <IGESSelect_DispPerSingleView.hxx>
#include <IGESSelect_Dumper.hxx>
#include <IGESSelect_EditDirPart.hxx>
#include <IGESSelect_EditHeader.hxx>
#include <IGESSelect_FileModifier.hxx>
#include <IGESSelect_FloatFormat.hxx>
#include <IGESSelect_IGESName.hxx>
#include <IGESSelect_IGESTypeForm.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <IGESSelect_RebuildDrawings.hxx>
#include <IGESSelect_RebuildGroups.hxx>
#include <IGESSelect_RemoveCurves.hxx>
#include <IGESSelect_SelectBasicGeom.hxx>
#include <IGESSelect_SelectBypassGroup.hxx>
#include <IGESSelect_SelectBypassSubfigure.hxx>
#include <IGESSelect_SelectDrawingFrom.hxx>
#include <IGESSelect_SelectFaces.hxx>
#include <IGESSelect_SelectFromDrawing.hxx>
#include <IGESSelect_SelectFromSingleView.hxx>
#include <IGESSelect_SelectLevelNumber.hxx>
#include <IGESSelect_SelectName.hxx>
#include <IGESSelect_SelectPCurves.hxx>
#include <IGESSelect_SelectSingleViewFrom.hxx>
#include <IGESSelect_SelectSubordinate.hxx>
#include <IGESSelect_SelectVisibleStatus.hxx>
#include <IGESSelect_SetGlobalParameter.hxx>
#include <IGESSelect_SetLabel.hxx>
#include <IGESSelect_SetVersion5.hxx>
#include <IGESSelect_SignColor.hxx>
#include <IGESSelect_SignLevelNumber.hxx>
#include <IGESSelect_SignStatus.hxx>
#include <IGESSelect_SplineToBSpline.hxx>
#include <IGESSelect_UpdateCreationDate.hxx>
#include <IGESSelect_UpdateFileName.hxx>
#include <IGESSelect_UpdateLastChange.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <IGESSelect_WorkLibrary.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESSelect_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESSelect", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_IGESSelect_FileModifier : public IGESSelect_FileModifier{
    public:
        using IGESSelect_FileModifier::IGESSelect_FileModifier;


        // public pure virtual
        void Perform(IFSelect_ContextWrite & ctx,IGESData_IGESWriter & writer) const  override { PYBIND11_OVERLOAD_PURE(void,IGESSelect_FileModifier,Perform,ctx,writer) };

        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_GeneralModifier,Label,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IGESSelect_ModelModifier : public IGESSelect_ModelModifier{
    public:
        using IGESSelect_ModelModifier::IGESSelect_ModelModifier;


        // public pure virtual
        void Performing(IFSelect_ContextModif & ctx,const opencascade::handle<IGESData_IGESModel> & target,Interface_CopyTool & TC) const  override { PYBIND11_OVERLOAD_PURE(void,IGESSelect_ModelModifier,Performing,ctx,target,TC) };

        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_GeneralModifier,Label,) };

        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<IGESSelect , shared_ptr<IGESSelect> >(m,"IGESSelect",R"#(This package defines the library of the most used tools for IGES Files : Selections & Modifiers specific to the IGES norm, and the most needed converters)#");
    py::class_<IGESSelect_Activator ,opencascade::handle<IGESSelect_Activator> , IFSelect_Activator>(m,"IGESSelect_Activator",R"#(Performs Actions specific to IGESSelect, i.e. creation of IGES Selections and Dispatches, plus dumping specific to IGESPerforms Actions specific to IGESSelect, i.e. creation of IGES Selections and Dispatches, plus dumping specific to IGESPerforms Actions specific to IGESSelect, i.e. creation of IGES Selections and Dispatches, plus dumping specific to IGES)#");
    py::class_<IGESSelect_CounterOfLevelNumber ,opencascade::handle<IGESSelect_CounterOfLevelNumber> , IFSelect_SignCounter>(m,"IGESSelect_CounterOfLevelNumber",R"#(This class gives information about Level Number. It counts entities according level number, considering also the multiple level (see the class LevelList) for which an entity is attached to each of the listed levels.This class gives information about Level Number. It counts entities according level number, considering also the multiple level (see the class LevelList) for which an entity is attached to each of the listed levels.This class gives information about Level Number. It counts entities according level number, considering also the multiple level (see the class LevelList) for which an entity is attached to each of the listed levels.)#");
    py::class_<IGESSelect_DispPerDrawing ,opencascade::handle<IGESSelect_DispPerDrawing> , IFSelect_Dispatch>(m,"IGESSelect_DispPerDrawing",R"#(This type of dispatch defines sets of entities attached to distinct drawings. This information is taken from attached views which appear in the Directory Part. Also Drawing Frames are considered when Drawings are part of input list.This type of dispatch defines sets of entities attached to distinct drawings. This information is taken from attached views which appear in the Directory Part. Also Drawing Frames are considered when Drawings are part of input list.This type of dispatch defines sets of entities attached to distinct drawings. This information is taken from attached views which appear in the Directory Part. Also Drawing Frames are considered when Drawings are part of input list.)#");
    py::class_<IGESSelect_DispPerSingleView ,opencascade::handle<IGESSelect_DispPerSingleView> , IFSelect_Dispatch>(m,"IGESSelect_DispPerSingleView",R"#(This type of dispatch defines sets of entities attached to distinct single views. This information appears in the Directory Part. Drawings are taken into account too, because of their frames (proper lists of annotations)This type of dispatch defines sets of entities attached to distinct single views. This information appears in the Directory Part. Drawings are taken into account too, because of their frames (proper lists of annotations)This type of dispatch defines sets of entities attached to distinct single views. This information appears in the Directory Part. Drawings are taken into account too, because of their frames (proper lists of annotations))#");
    py::class_<IGESSelect_Dumper ,opencascade::handle<IGESSelect_Dumper> , IFSelect_SessionDumper>(m,"IGESSelect_Dumper",R"#(Dumper from IGESSelect takes into account, for SessionFile, the classes defined in the package IGESSelect : Selections, Dispatches, ModifiersDumper from IGESSelect takes into account, for SessionFile, the classes defined in the package IGESSelect : Selections, Dispatches, ModifiersDumper from IGESSelect takes into account, for SessionFile, the classes defined in the package IGESSelect : Selections, Dispatches, Modifiers)#");
    py::class_<IGESSelect_EditDirPart ,opencascade::handle<IGESSelect_EditDirPart> , IFSelect_Editor>(m,"IGESSelect_EditDirPart",R"#(This class is aimed to display and edit the Directory Part of an IGESEntityThis class is aimed to display and edit the Directory Part of an IGESEntityThis class is aimed to display and edit the Directory Part of an IGESEntity)#");
    py::class_<IGESSelect_EditHeader ,opencascade::handle<IGESSelect_EditHeader> , IFSelect_Editor>(m,"IGESSelect_EditHeader",R"#(This class is aimed to display and edit the Header of an IGES Model : Start Section and Global SectionThis class is aimed to display and edit the Header of an IGES Model : Start Section and Global SectionThis class is aimed to display and edit the Header of an IGES Model : Start Section and Global Section)#");
    py::class_<IGESSelect_FileModifier ,opencascade::handle<IGESSelect_FileModifier>,Py_IGESSelect_FileModifier , IFSelect_GeneralModifier>(m,"IGESSelect_FileModifier",R"#()#");
    py::class_<IGESSelect_IGESName ,opencascade::handle<IGESSelect_IGESName> , IFSelect_Signature>(m,"IGESSelect_IGESName",R"#(IGESName is a Signature specific to IGESNorm : it considers the Name of an IGESEntity as being its ShortLabel (some sending systems use name, not to identify entities, but ratjer to classify them)IGESName is a Signature specific to IGESNorm : it considers the Name of an IGESEntity as being its ShortLabel (some sending systems use name, not to identify entities, but ratjer to classify them)IGESName is a Signature specific to IGESNorm : it considers the Name of an IGESEntity as being its ShortLabel (some sending systems use name, not to identify entities, but ratjer to classify them))#");
    py::class_<IGESSelect_IGESTypeForm ,opencascade::handle<IGESSelect_IGESTypeForm> , IFSelect_Signature>(m,"IGESSelect_IGESTypeForm",R"#(IGESTypeForm is a Signature specific to the IGES Norm : it gives the signature under two possible forms : - as "mmm nnn", with "mmm" as IGES Type Number, and "nnn" as IGES From Number (even if = 0) [Default] - as "mmm" alone, which gives only the IGES Type NumberIGESTypeForm is a Signature specific to the IGES Norm : it gives the signature under two possible forms : - as "mmm nnn", with "mmm" as IGES Type Number, and "nnn" as IGES From Number (even if = 0) [Default] - as "mmm" alone, which gives only the IGES Type NumberIGESTypeForm is a Signature specific to the IGES Norm : it gives the signature under two possible forms : - as "mmm nnn", with "mmm" as IGES Type Number, and "nnn" as IGES From Number (even if = 0) [Default] - as "mmm" alone, which gives only the IGES Type Number)#");
    py::class_<IGESSelect_ModelModifier ,opencascade::handle<IGESSelect_ModelModifier>,Py_IGESSelect_ModelModifier , IFSelect_Modifier>(m,"IGESSelect_ModelModifier",R"#()#");
    py::class_<IGESSelect_SelectBasicGeom ,opencascade::handle<IGESSelect_SelectBasicGeom> , IFSelect_SelectExplore>(m,"IGESSelect_SelectBasicGeom",R"#(This selection returns the basic geometric elements contained in an IGES Entity Intended to run a "quick" transfer. I.E. : - for a Group, considers its Elements - for a Trimmed or Bounded Surface or a Face (BREP), considers the 3D curves of each of its loops - for a Plane (108), considers its Bounding Curve - for a Curve itself, takes itThis selection returns the basic geometric elements contained in an IGES Entity Intended to run a "quick" transfer. I.E. : - for a Group, considers its Elements - for a Trimmed or Bounded Surface or a Face (BREP), considers the 3D curves of each of its loops - for a Plane (108), considers its Bounding Curve - for a Curve itself, takes itThis selection returns the basic geometric elements contained in an IGES Entity Intended to run a "quick" transfer. I.E. : - for a Group, considers its Elements - for a Trimmed or Bounded Surface or a Face (BREP), considers the 3D curves of each of its loops - for a Plane (108), considers its Bounding Curve - for a Curve itself, takes it)#");
    py::class_<IGESSelect_SelectBypassGroup ,opencascade::handle<IGESSelect_SelectBypassGroup> , IFSelect_SelectExplore>(m,"IGESSelect_SelectBypassGroup",R"#(Selects a list built as follows : Groups are entities type 402, forms 1,7,14,15 (Group, Ordered or not, "WithoutBackPointer" or not)Selects a list built as follows : Groups are entities type 402, forms 1,7,14,15 (Group, Ordered or not, "WithoutBackPointer" or not)Selects a list built as follows : Groups are entities type 402, forms 1,7,14,15 (Group, Ordered or not, "WithoutBackPointer" or not))#");
    py::class_<IGESSelect_SelectBypassSubfigure ,opencascade::handle<IGESSelect_SelectBypassSubfigure> , IFSelect_SelectExplore>(m,"IGESSelect_SelectBypassSubfigure",R"#(Selects a list built as follows : Subfigures correspond to * Definition (basic : type 308, or Network : type 320) * Instance (Singular : type 408, or Network : 420, or patterns : 412,414)Selects a list built as follows : Subfigures correspond to * Definition (basic : type 308, or Network : type 320) * Instance (Singular : type 408, or Network : 420, or patterns : 412,414)Selects a list built as follows : Subfigures correspond to * Definition (basic : type 308, or Network : type 320) * Instance (Singular : type 408, or Network : 420, or patterns : 412,414))#");
    py::class_<IGESSelect_SelectDrawingFrom ,opencascade::handle<IGESSelect_SelectDrawingFrom> , IFSelect_SelectDeduct>(m,"IGESSelect_SelectDrawingFrom",R"#(This selection gets the Drawings attached to its input IGES entities. They are read through thr Single Views, referenced in Directory Parts of the entitiesThis selection gets the Drawings attached to its input IGES entities. They are read through thr Single Views, referenced in Directory Parts of the entitiesThis selection gets the Drawings attached to its input IGES entities. They are read through thr Single Views, referenced in Directory Parts of the entities)#");
    py::class_<IGESSelect_SelectFaces ,opencascade::handle<IGESSelect_SelectFaces> , IFSelect_SelectExplore>(m,"IGESSelect_SelectFaces",R"#(This selection returns the faces contained in an IGES Entity or itself if it is a Face Face means : - Face (510) of a ManifoldSolidBrep - TrimmedSurface (144) - BoundedSurface (143) - Plane with a Bounding Curve (108, form not 0) - Also, any Surface which is not in a TrimmedSurface, a BoundedSurface, or a Face (FREE Surface) -> i.e. a Face for which Natural Bounds will be consideredThis selection returns the faces contained in an IGES Entity or itself if it is a Face Face means : - Face (510) of a ManifoldSolidBrep - TrimmedSurface (144) - BoundedSurface (143) - Plane with a Bounding Curve (108, form not 0) - Also, any Surface which is not in a TrimmedSurface, a BoundedSurface, or a Face (FREE Surface) -> i.e. a Face for which Natural Bounds will be consideredThis selection returns the faces contained in an IGES Entity or itself if it is a Face Face means : - Face (510) of a ManifoldSolidBrep - TrimmedSurface (144) - BoundedSurface (143) - Plane with a Bounding Curve (108, form not 0) - Also, any Surface which is not in a TrimmedSurface, a BoundedSurface, or a Face (FREE Surface) -> i.e. a Face for which Natural Bounds will be considered)#");
    py::class_<IGESSelect_SelectFromDrawing ,opencascade::handle<IGESSelect_SelectFromDrawing> , IFSelect_SelectDeduct>(m,"IGESSelect_SelectFromDrawing",R"#(This selection gets in all the model, the entities which are attached to the drawing(s) given as input. This includes : - Drawing Frame (Annotations directky referenced by Drawings) - Entities attached to the single Views referenced by DrawingsThis selection gets in all the model, the entities which are attached to the drawing(s) given as input. This includes : - Drawing Frame (Annotations directky referenced by Drawings) - Entities attached to the single Views referenced by DrawingsThis selection gets in all the model, the entities which are attached to the drawing(s) given as input. This includes : - Drawing Frame (Annotations directky referenced by Drawings) - Entities attached to the single Views referenced by Drawings)#");
    py::class_<IGESSelect_SelectFromSingleView ,opencascade::handle<IGESSelect_SelectFromSingleView> , IFSelect_SelectDeduct>(m,"IGESSelect_SelectFromSingleView",R"#(This selection gets in all the model, the entities which are attached to the views given as input. Only Single Views are considered. This information is kept from Directory Part (View Item).This selection gets in all the model, the entities which are attached to the views given as input. Only Single Views are considered. This information is kept from Directory Part (View Item).This selection gets in all the model, the entities which are attached to the views given as input. Only Single Views are considered. This information is kept from Directory Part (View Item).)#");
    py::class_<IGESSelect_SelectLevelNumber ,opencascade::handle<IGESSelect_SelectLevelNumber> , IFSelect_SelectExtract>(m,"IGESSelect_SelectLevelNumber",R"#(This selection looks at Level Number of IGES Entities : it considers items attached, either to a single level with a given value, or to a level list which contains this valueThis selection looks at Level Number of IGES Entities : it considers items attached, either to a single level with a given value, or to a level list which contains this valueThis selection looks at Level Number of IGES Entities : it considers items attached, either to a single level with a given value, or to a level list which contains this value)#");
    py::class_<IGESSelect_SelectName ,opencascade::handle<IGESSelect_SelectName> , IFSelect_SelectExtract>(m,"IGESSelect_SelectName",R"#(Selects Entities which have a given name. Consider Property Name if present, else Short Label, but not the Subscript Number First version : keeps exact name Later : regular expressionSelects Entities which have a given name. Consider Property Name if present, else Short Label, but not the Subscript Number First version : keeps exact name Later : regular expressionSelects Entities which have a given name. Consider Property Name if present, else Short Label, but not the Subscript Number First version : keeps exact name Later : regular expression)#");
    py::class_<IGESSelect_SelectPCurves ,opencascade::handle<IGESSelect_SelectPCurves> , IFSelect_SelectExplore>(m,"IGESSelect_SelectPCurves",R"#(This Selection returns the pcurves which lie on a face In two modes : global (i.e. a CompositeCurve is not explored) or basic (all the basic curves are listed)This Selection returns the pcurves which lie on a face In two modes : global (i.e. a CompositeCurve is not explored) or basic (all the basic curves are listed)This Selection returns the pcurves which lie on a face In two modes : global (i.e. a CompositeCurve is not explored) or basic (all the basic curves are listed))#");
    py::class_<IGESSelect_SelectSingleViewFrom ,opencascade::handle<IGESSelect_SelectSingleViewFrom> , IFSelect_SelectDeduct>(m,"IGESSelect_SelectSingleViewFrom",R"#(This selection gets the Single Views attached to its input IGES entities. Single Views themselves or Drawings as passed as such (Drawings, for their Annotations)This selection gets the Single Views attached to its input IGES entities. Single Views themselves or Drawings as passed as such (Drawings, for their Annotations)This selection gets the Single Views attached to its input IGES entities. Single Views themselves or Drawings as passed as such (Drawings, for their Annotations))#");
    py::class_<IGESSelect_SelectSubordinate ,opencascade::handle<IGESSelect_SelectSubordinate> , IFSelect_SelectExtract>(m,"IGESSelect_SelectSubordinate",R"#(This selections uses Subordinate Status as sort criterium It is an integer number which can be : 0 Independant 1 Physically Dependant 2 Logically Dependant 3 Both (recorded) + to sort : 4 : 1 or 3 -> at least Physically 5 : 2 or 3 -> at least Logically 6 : 1 or 2 or 3 -> any kind of dependance (corresponds to 0 reversed)This selections uses Subordinate Status as sort criterium It is an integer number which can be : 0 Independant 1 Physically Dependant 2 Logically Dependant 3 Both (recorded) + to sort : 4 : 1 or 3 -> at least Physically 5 : 2 or 3 -> at least Logically 6 : 1 or 2 or 3 -> any kind of dependance (corresponds to 0 reversed)This selections uses Subordinate Status as sort criterium It is an integer number which can be : 0 Independant 1 Physically Dependant 2 Logically Dependant 3 Both (recorded) + to sort : 4 : 1 or 3 -> at least Physically 5 : 2 or 3 -> at least Logically 6 : 1 or 2 or 3 -> any kind of dependance (corresponds to 0 reversed))#");
    py::class_<IGESSelect_SelectVisibleStatus ,opencascade::handle<IGESSelect_SelectVisibleStatus> , IFSelect_SelectExtract>(m,"IGESSelect_SelectVisibleStatus",R"#(This selection looks at Blank Status of IGES Entities Direct selection keeps Visible Entities (Blank = 0), Reverse selection keeps Blanked Entities (Blank = 1)This selection looks at Blank Status of IGES Entities Direct selection keeps Visible Entities (Blank = 0), Reverse selection keeps Blanked Entities (Blank = 1)This selection looks at Blank Status of IGES Entities Direct selection keeps Visible Entities (Blank = 0), Reverse selection keeps Blanked Entities (Blank = 1))#");
    py::class_<IGESSelect_SignColor ,opencascade::handle<IGESSelect_SignColor> , IFSelect_Signature>(m,"IGESSelect_SignColor",R"#(Gives Color attached to an entity Several forms are possible, according to <mode> 1 : number : "Dnn" for entity, "Snn" for standard, "(none)" for 0 2 : name : Of standard color, or of the color entity, or "(none)" (if the color entity has no name, its label is taken) 3 : RGB values, form R:nn,G:nn,B:nn 4 : RED value : an integer 5 : GREEN value : an integer 6 : BLUE value : an integer Other computable values can be added if needed : CMY values, Percentages for Hue, Lightness, SaturationGives Color attached to an entity Several forms are possible, according to <mode> 1 : number : "Dnn" for entity, "Snn" for standard, "(none)" for 0 2 : name : Of standard color, or of the color entity, or "(none)" (if the color entity has no name, its label is taken) 3 : RGB values, form R:nn,G:nn,B:nn 4 : RED value : an integer 5 : GREEN value : an integer 6 : BLUE value : an integer Other computable values can be added if needed : CMY values, Percentages for Hue, Lightness, SaturationGives Color attached to an entity Several forms are possible, according to <mode> 1 : number : "Dnn" for entity, "Snn" for standard, "(none)" for 0 2 : name : Of standard color, or of the color entity, or "(none)" (if the color entity has no name, its label is taken) 3 : RGB values, form R:nn,G:nn,B:nn 4 : RED value : an integer 5 : GREEN value : an integer 6 : BLUE value : an integer Other computable values can be added if needed : CMY values, Percentages for Hue, Lightness, Saturation)#");
    py::class_<IGESSelect_SignLevelNumber ,opencascade::handle<IGESSelect_SignLevelNumber> , IFSelect_Signature>(m,"IGESSelect_SignLevelNumber",R"#(Gives D.E. Level Number under two possible forms : * for counter : "LEVEL nnnnnnn", " NO LEVEL", " LEVEL LIST" * for selection : "/nnn/", "/0/", "/1/2/nnn/"Gives D.E. Level Number under two possible forms : * for counter : "LEVEL nnnnnnn", " NO LEVEL", " LEVEL LIST" * for selection : "/nnn/", "/0/", "/1/2/nnn/"Gives D.E. Level Number under two possible forms : * for counter : "LEVEL nnnnnnn", " NO LEVEL", " LEVEL LIST" * for selection : "/nnn/", "/0/", "/1/2/nnn/")#");
    py::class_<IGESSelect_SignStatus ,opencascade::handle<IGESSelect_SignStatus> , IFSelect_Signature>(m,"IGESSelect_SignStatus",R"#(Gives D.E. Status under the form i,j,k,l (4 figures) i for BlankStatus j for SubordinateStatus k for UseFlag l for HierarchyGives D.E. Status under the form i,j,k,l (4 figures) i for BlankStatus j for SubordinateStatus k for UseFlag l for HierarchyGives D.E. Status under the form i,j,k,l (4 figures) i for BlankStatus j for SubordinateStatus k for UseFlag l for Hierarchy)#");
    py::class_<IGESSelect_SplineToBSpline ,opencascade::handle<IGESSelect_SplineToBSpline> , IFSelect_Transformer>(m,"IGESSelect_SplineToBSpline",R"#(This type of Transformer allows to convert Spline Curves (IGES type 112) and Surfaces (IGES Type 126) to BSpline Curves (IGES type 114) and Surfac (IGES Type 128). All other entities are rebuilt as identical but on the basis of this conversion.This type of Transformer allows to convert Spline Curves (IGES type 112) and Surfaces (IGES Type 126) to BSpline Curves (IGES type 114) and Surfac (IGES Type 128). All other entities are rebuilt as identical but on the basis of this conversion.This type of Transformer allows to convert Spline Curves (IGES type 112) and Surfaces (IGES Type 126) to BSpline Curves (IGES type 114) and Surfac (IGES Type 128). All other entities are rebuilt as identical but on the basis of this conversion.)#");
    py::class_<IGESSelect_ViewSorter ,opencascade::handle<IGESSelect_ViewSorter> , Standard_Transient>(m,"IGESSelect_ViewSorter",R"#(Sorts IGES Entities on the views and drawings. In a first step, it splits a set of entities according the different views they are attached to. Then, packets according single views (+ drawing frames), or according drawings (which refer to the views) can be determinedSorts IGES Entities on the views and drawings. In a first step, it splits a set of entities according the different views they are attached to. Then, packets according single views (+ drawing frames), or according drawings (which refer to the views) can be determinedSorts IGES Entities on the views and drawings. In a first step, it splits a set of entities according the different views they are attached to. Then, packets according single views (+ drawing frames), or according drawings (which refer to the views) can be determined)#");
    py::class_<IGESSelect_WorkLibrary ,opencascade::handle<IGESSelect_WorkLibrary> , IFSelect_WorkLibrary>(m,"IGESSelect_WorkLibrary",R"#(Performs Read and Write an IGES File with an IGES ModelPerforms Read and Write an IGES File with an IGES ModelPerforms Read and Write an IGES File with an IGES Model)#");
    py::class_<IGESSelect_AddFileComment ,opencascade::handle<IGESSelect_AddFileComment> , IGESSelect_FileModifier>(m,"IGESSelect_AddFileComment",R"#(This class allows to add comment lines on writing an IGES File These lines are added to Start Section, instead of the only one blank line written by default.This class allows to add comment lines on writing an IGES File These lines are added to Start Section, instead of the only one blank line written by default.This class allows to add comment lines on writing an IGES File These lines are added to Start Section, instead of the only one blank line written by default.)#");
    py::class_<IGESSelect_AddGroup ,opencascade::handle<IGESSelect_AddGroup> , IGESSelect_ModelModifier>(m,"IGESSelect_AddGroup",R"#(Adds a Group to contain the entities designated by the Selection. If no Selection is given, nothing is doneAdds a Group to contain the entities designated by the Selection. If no Selection is given, nothing is doneAdds a Group to contain the entities designated by the Selection. If no Selection is given, nothing is done)#");
    py::class_<IGESSelect_AutoCorrect ,opencascade::handle<IGESSelect_AutoCorrect> , IGESSelect_ModelModifier>(m,"IGESSelect_AutoCorrect",R"#(Does the absolutely effective corrections on IGES Entity. That is to say : regarding the norm in details, some values have mandatory values, or set of values with constraints. When such values/constraints are univoque, they can be forced. Also nullifies items of Directory Part, Associativities, and Properties, which are not (or not longer) in <target> Model.Does the absolutely effective corrections on IGES Entity. That is to say : regarding the norm in details, some values have mandatory values, or set of values with constraints. When such values/constraints are univoque, they can be forced. Also nullifies items of Directory Part, Associativities, and Properties, which are not (or not longer) in <target> Model.Does the absolutely effective corrections on IGES Entity. That is to say : regarding the norm in details, some values have mandatory values, or set of values with constraints. When such values/constraints are univoque, they can be forced. Also nullifies items of Directory Part, Associativities, and Properties, which are not (or not longer) in <target> Model.)#");
    py::class_<IGESSelect_ChangeLevelList ,opencascade::handle<IGESSelect_ChangeLevelList> , IGESSelect_ModelModifier>(m,"IGESSelect_ChangeLevelList",R"#(Changes Level List (in directory part) to a new single value Only entities attached to a LevelListEntity are considered If OldNumber is defined, only entities whose LevelList contains its Value are processed. Else all LevelLists are.Changes Level List (in directory part) to a new single value Only entities attached to a LevelListEntity are considered If OldNumber is defined, only entities whose LevelList contains its Value are processed. Else all LevelLists are.Changes Level List (in directory part) to a new single value Only entities attached to a LevelListEntity are considered If OldNumber is defined, only entities whose LevelList contains its Value are processed. Else all LevelLists are.)#");
    py::class_<IGESSelect_ChangeLevelNumber ,opencascade::handle<IGESSelect_ChangeLevelNumber> , IGESSelect_ModelModifier>(m,"IGESSelect_ChangeLevelNumber",R"#(Changes Level Number (as null or single) to a new single value Entities attached to a LevelListEntity are ignored Entities considered can be, either all Entities but those attached to a LevelListEntity, or Entities attached to a specific Level Number (0 for not defined).Changes Level Number (as null or single) to a new single value Entities attached to a LevelListEntity are ignored Entities considered can be, either all Entities but those attached to a LevelListEntity, or Entities attached to a specific Level Number (0 for not defined).Changes Level Number (as null or single) to a new single value Entities attached to a LevelListEntity are ignored Entities considered can be, either all Entities but those attached to a LevelListEntity, or Entities attached to a specific Level Number (0 for not defined).)#");
    py::class_<IGESSelect_ComputeStatus ,opencascade::handle<IGESSelect_ComputeStatus> , IGESSelect_ModelModifier>(m,"IGESSelect_ComputeStatus",R"#(Computes Status of IGES Entities for a whole IGESModel. This concerns SubordinateStatus and UseFlag, which must have some definite values according the way they are referenced. (see definitions of Logical use, Physical use, etc...)Computes Status of IGES Entities for a whole IGESModel. This concerns SubordinateStatus and UseFlag, which must have some definite values according the way they are referenced. (see definitions of Logical use, Physical use, etc...)Computes Status of IGES Entities for a whole IGESModel. This concerns SubordinateStatus and UseFlag, which must have some definite values according the way they are referenced. (see definitions of Logical use, Physical use, etc...))#");
    py::class_<IGESSelect_FloatFormat ,opencascade::handle<IGESSelect_FloatFormat> , IGESSelect_FileModifier>(m,"IGESSelect_FloatFormat",R"#(This class gives control out format for floatting values : ZeroSuppress or no, Main Format, Format in Range (for values around 1.), as IGESWriter allows to manage it. Formats are given under C-printf formThis class gives control out format for floatting values : ZeroSuppress or no, Main Format, Format in Range (for values around 1.), as IGESWriter allows to manage it. Formats are given under C-printf formThis class gives control out format for floatting values : ZeroSuppress or no, Main Format, Format in Range (for values around 1.), as IGESWriter allows to manage it. Formats are given under C-printf form)#");
    py::class_<IGESSelect_RebuildDrawings ,opencascade::handle<IGESSelect_RebuildDrawings> , IGESSelect_ModelModifier>(m,"IGESSelect_RebuildDrawings",R"#(Rebuilds Drawings which were bypassed to produce new models. If a set of entities, all put into a same IGESModel, were attached to a same Drawing in the starting Model, this Modifier rebuilds the original Drawing, but only with the transferred entities. This includes that all its views are kept too, but empty; and annotations are not kept. Drawing Name is renewed.Rebuilds Drawings which were bypassed to produce new models. If a set of entities, all put into a same IGESModel, were attached to a same Drawing in the starting Model, this Modifier rebuilds the original Drawing, but only with the transferred entities. This includes that all its views are kept too, but empty; and annotations are not kept. Drawing Name is renewed.Rebuilds Drawings which were bypassed to produce new models. If a set of entities, all put into a same IGESModel, were attached to a same Drawing in the starting Model, this Modifier rebuilds the original Drawing, but only with the transferred entities. This includes that all its views are kept too, but empty; and annotations are not kept. Drawing Name is renewed.)#");
    py::class_<IGESSelect_RebuildGroups ,opencascade::handle<IGESSelect_RebuildGroups> , IGESSelect_ModelModifier>(m,"IGESSelect_RebuildGroups",R"#(Rebuilds Groups which were bypassed to produce new models. If a set of entities, all put into a same IGESModel, were part of a same Group in the starting Model, this Modifier rebuilds the original group, but only with the transferred entities. The distinctions (Ordered or not, "WhithoutBackP" or not) are renewed, also the name of the group.Rebuilds Groups which were bypassed to produce new models. If a set of entities, all put into a same IGESModel, were part of a same Group in the starting Model, this Modifier rebuilds the original group, but only with the transferred entities. The distinctions (Ordered or not, "WhithoutBackP" or not) are renewed, also the name of the group.Rebuilds Groups which were bypassed to produce new models. If a set of entities, all put into a same IGESModel, were part of a same Group in the starting Model, this Modifier rebuilds the original group, but only with the transferred entities. The distinctions (Ordered or not, "WhithoutBackP" or not) are renewed, also the name of the group.)#");
    py::class_<IGESSelect_RemoveCurves ,opencascade::handle<IGESSelect_RemoveCurves> , IGESSelect_ModelModifier>(m,"IGESSelect_RemoveCurves",R"#(Removes Curves UV or 3D (not both !) from Faces, those designated by the Selection. No Selection means all the fileRemoves Curves UV or 3D (not both !) from Faces, those designated by the Selection. No Selection means all the fileRemoves Curves UV or 3D (not both !) from Faces, those designated by the Selection. No Selection means all the file)#");
    py::class_<IGESSelect_SetGlobalParameter ,opencascade::handle<IGESSelect_SetGlobalParameter> , IGESSelect_ModelModifier>(m,"IGESSelect_SetGlobalParameter",R"#(Sets a Global (Header) Parameter to a new value, directly given Controls the form of the parameter (Integer, Real, String with such or such form), but not the consistence of the new value regarding the rest of the file.Sets a Global (Header) Parameter to a new value, directly given Controls the form of the parameter (Integer, Real, String with such or such form), but not the consistence of the new value regarding the rest of the file.Sets a Global (Header) Parameter to a new value, directly given Controls the form of the parameter (Integer, Real, String with such or such form), but not the consistence of the new value regarding the rest of the file.)#");
    py::class_<IGESSelect_SetLabel ,opencascade::handle<IGESSelect_SetLabel> , IGESSelect_ModelModifier>(m,"IGESSelect_SetLabel",R"#(Sets/Clears Short Label of Entities, those designated by the Selection. No Selection means all the fileSets/Clears Short Label of Entities, those designated by the Selection. No Selection means all the fileSets/Clears Short Label of Entities, those designated by the Selection. No Selection means all the file)#");
    py::class_<IGESSelect_SetVersion5 ,opencascade::handle<IGESSelect_SetVersion5> , IGESSelect_ModelModifier>(m,"IGESSelect_SetVersion5",R"#(Sets IGES Version (coded in global parameter 23) to be at least IGES 5.1 . If it is older, it is set to IGES 5.1, and LastChangeDate (new Global n0 25) is added (current time) Else, it does nothing (i.e. changes neither IGES Version nor LastChangeDate)Sets IGES Version (coded in global parameter 23) to be at least IGES 5.1 . If it is older, it is set to IGES 5.1, and LastChangeDate (new Global n0 25) is added (current time) Else, it does nothing (i.e. changes neither IGES Version nor LastChangeDate)Sets IGES Version (coded in global parameter 23) to be at least IGES 5.1 . If it is older, it is set to IGES 5.1, and LastChangeDate (new Global n0 25) is added (current time) Else, it does nothing (i.e. changes neither IGES Version nor LastChangeDate))#");
    py::class_<IGESSelect_UpdateCreationDate ,opencascade::handle<IGESSelect_UpdateCreationDate> , IGESSelect_ModelModifier>(m,"IGESSelect_UpdateCreationDate",R"#(Allows to Change the Creation Date indication in the Header (Global Section) of IGES File. It is taken from the operating system (time of application of the Modifier). The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch upAllows to Change the Creation Date indication in the Header (Global Section) of IGES File. It is taken from the operating system (time of application of the Modifier). The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch upAllows to Change the Creation Date indication in the Header (Global Section) of IGES File. It is taken from the operating system (time of application of the Modifier). The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch up)#");
    py::class_<IGESSelect_UpdateFileName ,opencascade::handle<IGESSelect_UpdateFileName> , IGESSelect_ModelModifier>(m,"IGESSelect_UpdateFileName",R"#(Sets the File Name in Header to be the actual name of the file If new file name is unknown, the former one is kept Remark : this works well only when it is Applied and send time If it is run immediately, new file name is unknown and nothing is done The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch upSets the File Name in Header to be the actual name of the file If new file name is unknown, the former one is kept Remark : this works well only when it is Applied and send time If it is run immediately, new file name is unknown and nothing is done The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch upSets the File Name in Header to be the actual name of the file If new file name is unknown, the former one is kept Remark : this works well only when it is Applied and send time If it is run immediately, new file name is unknown and nothing is done The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch up)#");
    py::class_<IGESSelect_UpdateLastChange ,opencascade::handle<IGESSelect_UpdateLastChange> , IGESSelect_ModelModifier>(m,"IGESSelect_UpdateLastChange",R"#(Allows to Change the Last Change Date indication in the Header (Global Section) of IGES File. It is taken from the operating system (time of application of the Modifier). The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch up. Remark : IGES Models noted as version before IGES 5.1 are in addition changed to 5.1Allows to Change the Last Change Date indication in the Header (Global Section) of IGES File. It is taken from the operating system (time of application of the Modifier). The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch up. Remark : IGES Models noted as version before IGES 5.1 are in addition changed to 5.1Allows to Change the Last Change Date indication in the Header (Global Section) of IGES File. It is taken from the operating system (time of application of the Modifier). The Selection of the Modifier is not used : it simply acts as a criterium to select IGES Files to touch up. Remark : IGES Models noted as version before IGES 5.1 are in addition changed to 5.1)#");

};

// user-defined post-inclusion per module

// user-defined post
