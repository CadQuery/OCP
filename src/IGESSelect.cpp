
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
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
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_Protocol.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_IGESWriter.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
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
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_PacketList.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IGESData_Protocol.hxx>
#include <Message_Messenger.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IFSelect_ContextWrite.hxx>

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
void register_IGESSelect(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESSelect"));


//Python trampoline classes
    class Py_IGESSelect_FileModifier : public IGESSelect_FileModifier{
    public:
        using IGESSelect_FileModifier::IGESSelect_FileModifier;
        
        // public pure virtual
        void Perform(IFSelect_ContextWrite & ctx,IGESData_IGESWriter & writer) const  override { PYBIND11_OVERLOAD_PURE(void,IGESSelect_FileModifier,Perform,ctx,writer) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_IGESSelect_ModelModifier : public IGESSelect_ModelModifier{
    public:
        using IGESSelect_ModelModifier::IGESSelect_ModelModifier;
        
        // public pure virtual
        void Performing(IFSelect_ContextModif & ctx,const opencascade::handle<IGESData_IGESModel> & target,Interface_CopyTool & TC) const  override { PYBIND11_OVERLOAD_PURE(void,IGESSelect_ModelModifier,Performing,ctx,target,TC) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

    register_default_constructor<IGESSelect , shared_ptr<IGESSelect>>(m,"IGESSelect");

    static_cast<py::class_<IGESSelect , shared_ptr<IGESSelect>  >>(m.attr("IGESSelect"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Run_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESSelect::Run),
                    R"#(Simply gives a prompt for a conversational action on standard input/output. Returns the status of a)#" )
        .def_static("WhatIges_s",
                    (Standard_Integer (*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_Graph & ,  opencascade::handle<IGESData_IGESEntity> & ,  Standard_Integer &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_Graph & ,  opencascade::handle<IGESData_IGESEntity> & ,  Standard_Integer &  ) >(&IGESSelect::WhatIges),
                    R"#(Gives a quick analysis of an IGES Entity in the context of a model (i.e. a File) described by a Graph. Returned values are : : the most meaningfull super entity, if any (else Null) <index> : meaningfull index relating to super entity, if any <returned> : a status which helps exploitation of , by giving a case (normally, types of <ent> and should suffice to known the case))#"  , py::arg("ent"),  py::arg("G"),  py::arg("sup"),  py::arg("index"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_Activator ,opencascade::handle<IGESSelect_Activator>  , IFSelect_Activator >>(m.attr("IGESSelect_Activator"))
        .def(py::init<  >()  )
    // methods
        .def("Do",
             (IFSelect_ReturnStatus (IGESSelect_Activator::*)( const Standard_Integer ,  const opencascade::handle<IFSelect_SessionPilot> &  ) ) static_cast<IFSelect_ReturnStatus (IGESSelect_Activator::*)( const Standard_Integer ,  const opencascade::handle<IFSelect_SessionPilot> &  ) >(&IGESSelect_Activator::Do),
             R"#(Executes a Command Line for IGESSelect)#"  , py::arg("number"),  py::arg("pilot"))
        .def("Help",
             (Standard_CString (IGESSelect_Activator::*)( const Standard_Integer  ) const) static_cast<Standard_CString (IGESSelect_Activator::*)( const Standard_Integer  ) const>(&IGESSelect_Activator::Help),
             R"#(Sends a short help message for IGESSelect commands)#"  , py::arg("number"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_Activator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_Activator::*)() const>(&IGESSelect_Activator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_Activator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_Activator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_CounterOfLevelNumber ,opencascade::handle<IGESSelect_CounterOfLevelNumber>  , IFSelect_SignCounter >>(m.attr("IGESSelect_CounterOfLevelNumber"))
        .def(py::init< const Standard_Boolean,const Standard_Boolean >()  , py::arg("withmap")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("withlist")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("Clear",
             (void (IGESSelect_CounterOfLevelNumber::*)() ) static_cast<void (IGESSelect_CounterOfLevelNumber::*)() >(&IGESSelect_CounterOfLevelNumber::Clear),
             R"#(Resets already memorized informations : also numeric data)#" )
        .def("AddSign",
             (void (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) >(&IGESSelect_CounterOfLevelNumber::AddSign),
             R"#(Adds an entity by considering its lrvrl number(s) A level is added both in numeric and alphanumeric form, i.e. LevelList gives "LEVEL LIST", others (no level or positive level) displays level number on 7 digits (C : %7d) Remark : an entity attached to a Level List is added for " LEVEL LIST", and for each of its constituant levels)#"  , py::arg("ent"),  py::arg("model"))
        .def("AddLevel",
             (void (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) ) static_cast<void (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer  ) >(&IGESSelect_CounterOfLevelNumber::AddLevel),
             R"#(The internal action to record a new level number, positive, null (no level) or negative (level list))#"  , py::arg("ent"),  py::arg("level"))
        .def("HighestLevel",
             (Standard_Integer (IGESSelect_CounterOfLevelNumber::*)() const) static_cast<Standard_Integer (IGESSelect_CounterOfLevelNumber::*)() const>(&IGESSelect_CounterOfLevelNumber::HighestLevel),
             R"#(Returns the highest value found for a level number)#" )
        .def("NbTimesLevel",
             (Standard_Integer (IGESSelect_CounterOfLevelNumber::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSelect_CounterOfLevelNumber::*)( const Standard_Integer  ) const>(&IGESSelect_CounterOfLevelNumber::NbTimesLevel),
             R"#(Returns the number of times a level is used, 0 if it has not been recorded at all <level> = 0 counts entities attached to no level <level> < 0 counts entities attached to a LevelList)#"  , py::arg("level"))
        .def("Levels",
             (opencascade::handle<TColStd_HSequenceOfInteger> (IGESSelect_CounterOfLevelNumber::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfInteger> (IGESSelect_CounterOfLevelNumber::*)() const>(&IGESSelect_CounterOfLevelNumber::Levels),
             R"#(Returns the ordered list of used positive Level numbers)#" )
        .def("Sign",
             (opencascade::handle<TCollection_HAsciiString> (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_CounterOfLevelNumber::Sign),
             R"#(Determines and returns the value of the signature for an entity as an HAsciiString. Redefined, gives the same result as AddSign, see this method ("LEVEL LIST" or "nnnnnnn"))#"  , py::arg("ent"),  py::arg("model"))
        .def("PrintCount",
             (void (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (IGESSelect_CounterOfLevelNumber::*)( const opencascade::handle<Message_Messenger> &  ) const>(&IGESSelect_CounterOfLevelNumber::PrintCount),
             R"#(Prints the counts of items (not the list) then the Highest Level Number recorded)#"  , py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_CounterOfLevelNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_CounterOfLevelNumber::*)() const>(&IGESSelect_CounterOfLevelNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_CounterOfLevelNumber::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_CounterOfLevelNumber::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_DispPerDrawing ,opencascade::handle<IGESSelect_DispPerDrawing>  , IFSelect_Dispatch >>(m.attr("IGESSelect_DispPerDrawing"))
        .def(py::init<  >()  )
    // methods
        .def("Label",
             (TCollection_AsciiString (IGESSelect_DispPerDrawing::*)() const) static_cast<TCollection_AsciiString (IGESSelect_DispPerDrawing::*)() const>(&IGESSelect_DispPerDrawing::Label),
             R"#(Returns as Label, "One File per Drawing")#" )
        .def("Packets",
             (void (IGESSelect_DispPerDrawing::*)( const Interface_Graph & ,  IFGraph_SubPartsIterator &  ) const) static_cast<void (IGESSelect_DispPerDrawing::*)( const Interface_Graph & ,  IFGraph_SubPartsIterator &  ) const>(&IGESSelect_DispPerDrawing::Packets),
             R"#(Computes the list of produced Packets. Packets are computed by a ViewSorter (SortDrawings with also frames).)#"  , py::arg("G"),  py::arg("packs"))
        .def("CanHaveRemainder",
             (Standard_Boolean (IGESSelect_DispPerDrawing::*)() const) static_cast<Standard_Boolean (IGESSelect_DispPerDrawing::*)() const>(&IGESSelect_DispPerDrawing::CanHaveRemainder),
             R"#(Returns True, because of entities attached to no view.)#" )
        .def("Remainder",
             (Interface_EntityIterator (IGESSelect_DispPerDrawing::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (IGESSelect_DispPerDrawing::*)( const Interface_Graph &  ) const>(&IGESSelect_DispPerDrawing::Remainder),
             R"#(Returns Remainder which is a set of Entities. It is supposed to be called once Packets has been called.)#"  , py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_DispPerDrawing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_DispPerDrawing::*)() const>(&IGESSelect_DispPerDrawing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_DispPerDrawing::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_DispPerDrawing::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_DispPerSingleView ,opencascade::handle<IGESSelect_DispPerSingleView>  , IFSelect_Dispatch >>(m.attr("IGESSelect_DispPerSingleView"))
        .def(py::init<  >()  )
    // methods
        .def("Label",
             (TCollection_AsciiString (IGESSelect_DispPerSingleView::*)() const) static_cast<TCollection_AsciiString (IGESSelect_DispPerSingleView::*)() const>(&IGESSelect_DispPerSingleView::Label),
             R"#(Returns as Label, "One File per single View or Drawing Frame")#" )
        .def("Packets",
             (void (IGESSelect_DispPerSingleView::*)( const Interface_Graph & ,  IFGraph_SubPartsIterator &  ) const) static_cast<void (IGESSelect_DispPerSingleView::*)( const Interface_Graph & ,  IFGraph_SubPartsIterator &  ) const>(&IGESSelect_DispPerSingleView::Packets),
             R"#(Computes the list of produced Packets. Packets are computed by a ViewSorter (SortSingleViews with also frames).)#"  , py::arg("G"),  py::arg("packs"))
        .def("CanHaveRemainder",
             (Standard_Boolean (IGESSelect_DispPerSingleView::*)() const) static_cast<Standard_Boolean (IGESSelect_DispPerSingleView::*)() const>(&IGESSelect_DispPerSingleView::CanHaveRemainder),
             R"#(Returns True, because of entities attached to no view.)#" )
        .def("Remainder",
             (Interface_EntityIterator (IGESSelect_DispPerSingleView::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (IGESSelect_DispPerSingleView::*)( const Interface_Graph &  ) const>(&IGESSelect_DispPerSingleView::Remainder),
             R"#(Returns Remainder which is a set of Entities. It is supposed to be called once Packets has been called.)#"  , py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_DispPerSingleView::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_DispPerSingleView::*)() const>(&IGESSelect_DispPerSingleView::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_DispPerSingleView::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_DispPerSingleView::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_Dumper ,opencascade::handle<IGESSelect_Dumper>  , IFSelect_SessionDumper >>(m.attr("IGESSelect_Dumper"))
        .def(py::init<  >()  )
    // methods
        .def("WriteOwn",
             (Standard_Boolean (IGESSelect_Dumper::*)( IFSelect_SessionFile & ,  const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESSelect_Dumper::*)( IFSelect_SessionFile & ,  const opencascade::handle<Standard_Transient> &  ) const>(&IGESSelect_Dumper::WriteOwn),
             R"#(Write the Own Parameters of Types defined in package IGESSelect Returns True if <item> has been processed, False else)#"  , py::arg("file"),  py::arg("item"))
        .def("ReadOwn",
             (Standard_Boolean (IGESSelect_Dumper::*)( IFSelect_SessionFile & ,  const TCollection_AsciiString & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESSelect_Dumper::*)( IFSelect_SessionFile & ,  const TCollection_AsciiString & ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESSelect_Dumper::ReadOwn),
             R"#(Recognizes and Read Own Parameters for Types of package IGESSelect. Returns True if done and <item> created, False else)#"  , py::arg("file"),  py::arg("type"),  py::arg("item"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_Dumper::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_Dumper::*)() const>(&IGESSelect_Dumper::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_Dumper::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_Dumper::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_EditDirPart ,opencascade::handle<IGESSelect_EditDirPart>  , IFSelect_Editor >>(m.attr("IGESSelect_EditDirPart"))
        .def(py::init<  >()  )
    // methods
        .def("Label",
             (TCollection_AsciiString (IGESSelect_EditDirPart::*)() const) static_cast<TCollection_AsciiString (IGESSelect_EditDirPart::*)() const>(&IGESSelect_EditDirPart::Label),
             R"#(None)#" )
        .def("Recognize",
             (Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> &  ) const) static_cast<Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> &  ) const>(&IGESSelect_EditDirPart::Recognize),
             R"#(None)#"  , py::arg("form"))
        .def("StringValue",
             (opencascade::handle<TCollection_HAsciiString> (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer  ) const>(&IGESSelect_EditDirPart::StringValue),
             R"#(None)#"  , py::arg("form"),  py::arg("num"))
        .def("Load",
             (Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_EditDirPart::Load),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("Update",
             (Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) const>(&IGESSelect_EditDirPart::Update),
             R"#(None)#"  , py::arg("form"),  py::arg("num"),  py::arg("newval"),  py::arg("enforce"))
        .def("Apply",
             (Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_EditDirPart::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_EditDirPart::Apply),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_EditDirPart::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_EditDirPart::*)() const>(&IGESSelect_EditDirPart::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_EditDirPart::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_EditDirPart::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_EditHeader ,opencascade::handle<IGESSelect_EditHeader>  , IFSelect_Editor >>(m.attr("IGESSelect_EditHeader"))
        .def(py::init<  >()  )
    // methods
        .def("Label",
             (TCollection_AsciiString (IGESSelect_EditHeader::*)() const) static_cast<TCollection_AsciiString (IGESSelect_EditHeader::*)() const>(&IGESSelect_EditHeader::Label),
             R"#(None)#" )
        .def("Recognize",
             (Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> &  ) const) static_cast<Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> &  ) const>(&IGESSelect_EditHeader::Recognize),
             R"#(None)#"  , py::arg("form"))
        .def("StringValue",
             (opencascade::handle<TCollection_HAsciiString> (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer  ) const>(&IGESSelect_EditHeader::StringValue),
             R"#(None)#"  , py::arg("form"),  py::arg("num"))
        .def("Load",
             (Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_EditHeader::Load),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("Update",
             (Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) const>(&IGESSelect_EditHeader::Update),
             R"#(None)#"  , py::arg("form"),  py::arg("num"),  py::arg("newval"),  py::arg("enforce"))
        .def("Apply",
             (Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_EditHeader::*)( const opencascade::handle<IFSelect_EditForm> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_EditHeader::Apply),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_EditHeader::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_EditHeader::*)() const>(&IGESSelect_EditHeader::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_EditHeader::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_EditHeader::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_FileModifier ,opencascade::handle<IGESSelect_FileModifier> ,Py_IGESSelect_FileModifier , IFSelect_GeneralModifier >>(m.attr("IGESSelect_FileModifier"))
    // methods
        .def("Perform",
             (void (IGESSelect_FileModifier::*)( IFSelect_ContextWrite & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSelect_FileModifier::*)( IFSelect_ContextWrite & ,  IGESData_IGESWriter &  ) const>(&IGESSelect_FileModifier::Perform),
             R"#(Perform the action specific to each class of File Modifier <ctx> is the ContextWrite, which brings : the model, the protocol, the file name, plus the object AppliedModifiers (not used here) and the CheckList Remark that the model has to be casted for specific access)#"  , py::arg("ctx"),  py::arg("writer"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_FileModifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_FileModifier::*)() const>(&IGESSelect_FileModifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_FileModifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_FileModifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_IGESName ,opencascade::handle<IGESSelect_IGESName>  , IFSelect_Signature >>(m.attr("IGESSelect_IGESName"))
        .def(py::init<  >()  )
    // methods
        .def("Value",
             (Standard_CString (IGESSelect_IGESName::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_CString (IGESSelect_IGESName::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_IGESName::Value),
             R"#(Returns the ShortLabel as being the Name of an IGESEntity If <ent> has no name, it returns empty string "")#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_IGESName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_IGESName::*)() const>(&IGESSelect_IGESName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_IGESName::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_IGESName::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_IGESTypeForm ,opencascade::handle<IGESSelect_IGESTypeForm>  , IFSelect_Signature >>(m.attr("IGESSelect_IGESTypeForm"))
        .def(py::init< const Standard_Boolean >()  , py::arg("withform")=static_cast<const Standard_Boolean>(Standard_True) )
    // methods
        .def("SetForm",
             (void (IGESSelect_IGESTypeForm::*)( const Standard_Boolean  ) ) static_cast<void (IGESSelect_IGESTypeForm::*)( const Standard_Boolean  ) >(&IGESSelect_IGESTypeForm::SetForm),
             R"#(Changes the mode for giving the Form Number)#"  , py::arg("withform"))
        .def("Value",
             (Standard_CString (IGESSelect_IGESTypeForm::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_CString (IGESSelect_IGESTypeForm::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_IGESTypeForm::Value),
             R"#(Returns the signature for IGES, "mmm nnn" or "mmm" according creation choice (Type & Form or Type only))#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_IGESTypeForm::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_IGESTypeForm::*)() const>(&IGESSelect_IGESTypeForm::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_IGESTypeForm::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_IGESTypeForm::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_ModelModifier ,opencascade::handle<IGESSelect_ModelModifier> ,Py_IGESSelect_ModelModifier , IFSelect_Modifier >>(m.attr("IGESSelect_ModelModifier"))
    // methods
        .def("Perform",
             (void (IGESSelect_ModelModifier::*)( IFSelect_ContextModif & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_ModelModifier::*)( IFSelect_ContextModif & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  Interface_CopyTool &  ) const>(&IGESSelect_ModelModifier::Perform),
             R"#(The inherited Perform does the required cast (and refuses to go further if cast has failed) then calls the instantiated Performing)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("protocol"),  py::arg("TC"))
        .def("PerformProtocol",
             (void (IGESSelect_ModelModifier::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_ModelModifier::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> & ,  Interface_CopyTool &  ) const>(&IGESSelect_ModelModifier::PerformProtocol),
             R"#(Specific Perform with Protocol. It is defined to let the Protocol unused and to call Performing without Protocol (most current case). It can be redefined if specific action requires Protocol.)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("proto"),  py::arg("TC"))
        .def("Performing",
             (void (IGESSelect_ModelModifier::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_ModelModifier::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_ModelModifier::Performing),
             R"#(Specific Perform, without Protocol. If Performing with Protocol is redefined, Performing without Protocol must though be defined to do nothing (not called, but demanded by the linker))#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_ModelModifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_ModelModifier::*)() const>(&IGESSelect_ModelModifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_ModelModifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_ModelModifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectBasicGeom ,opencascade::handle<IGESSelect_SelectBasicGeom>  , IFSelect_SelectExplore >>(m.attr("IGESSelect_SelectBasicGeom"))
        .def(py::init< const Standard_Integer >()  , py::arg("mode") )
    // methods
        .def("Explore",
             (Standard_Boolean (IGESSelect_SelectBasicGeom::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectBasicGeom::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&IGESSelect_SelectBasicGeom::Explore),
             R"#(Explores an entity, to take its contained Curves 3d Works recursively)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (IGESSelect_SelectBasicGeom::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectBasicGeom::*)() const>(&IGESSelect_SelectBasicGeom::ExploreLabel),
             R"#(Returns a text defining the criterium : "Curves 3d" or "Basic Geometry")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectBasicGeom::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectBasicGeom::*)() const>(&IGESSelect_SelectBasicGeom::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SubCurves_s",
                    (Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) >(&IGESSelect_SelectBasicGeom::SubCurves),
                    R"#(This method can be called from everywhere to get the curves as sub-elements of a given curve : CompositeCurve : explored lists its subs + returns True Any Curve : explored is not filled but returned is True Other : returned is False)#"  , py::arg("ent"),  py::arg("explored"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectBasicGeom::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectBasicGeom::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectBypassGroup ,opencascade::handle<IGESSelect_SelectBypassGroup>  , IFSelect_SelectExplore >>(m.attr("IGESSelect_SelectBypassGroup"))
        .def(py::init< const Standard_Integer >()  , py::arg("level")=static_cast<const Standard_Integer>(0) )
    // methods
        .def("Explore",
             (Standard_Boolean (IGESSelect_SelectBypassGroup::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectBypassGroup::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&IGESSelect_SelectBypassGroup::Explore),
             R"#(Explores an entity : for a Group, gives its elements Else, takes the entity itself)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (IGESSelect_SelectBypassGroup::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectBypassGroup::*)() const>(&IGESSelect_SelectBypassGroup::ExploreLabel),
             R"#(Returns a text defining the criterium : "Content of Group")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectBypassGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectBypassGroup::*)() const>(&IGESSelect_SelectBypassGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectBypassGroup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectBypassGroup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectBypassSubfigure ,opencascade::handle<IGESSelect_SelectBypassSubfigure>  , IFSelect_SelectExplore >>(m.attr("IGESSelect_SelectBypassSubfigure"))
        .def(py::init< const Standard_Integer >()  , py::arg("level")=static_cast<const Standard_Integer>(0) )
    // methods
        .def("Explore",
             (Standard_Boolean (IGESSelect_SelectBypassSubfigure::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectBypassSubfigure::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&IGESSelect_SelectBypassSubfigure::Explore),
             R"#(Explores an entity : for a Subfigure, gives its elements Else, takes the entity itself)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (IGESSelect_SelectBypassSubfigure::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectBypassSubfigure::*)() const>(&IGESSelect_SelectBypassSubfigure::ExploreLabel),
             R"#(Returns a text defining the criterium : "Content of Subfigure")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectBypassSubfigure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectBypassSubfigure::*)() const>(&IGESSelect_SelectBypassSubfigure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectBypassSubfigure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectBypassSubfigure::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectDrawingFrom ,opencascade::handle<IGESSelect_SelectDrawingFrom>  , IFSelect_SelectDeduct >>(m.attr("IGESSelect_SelectDrawingFrom"))
        .def(py::init<  >()  )
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IGESSelect_SelectDrawingFrom::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (IGESSelect_SelectDrawingFrom::*)( const Interface_Graph &  ) const>(&IGESSelect_SelectDrawingFrom::RootResult),
             R"#(Selects the Drawings attached (through Single Views in Directory Part) to input entities)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SelectDrawingFrom::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectDrawingFrom::*)() const>(&IGESSelect_SelectDrawingFrom::Label),
             R"#(Returns the label, with is "Drawings attached")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectDrawingFrom::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectDrawingFrom::*)() const>(&IGESSelect_SelectDrawingFrom::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectDrawingFrom::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectDrawingFrom::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectFaces ,opencascade::handle<IGESSelect_SelectFaces>  , IFSelect_SelectExplore >>(m.attr("IGESSelect_SelectFaces"))
        .def(py::init<  >()  )
    // methods
        .def("Explore",
             (Standard_Boolean (IGESSelect_SelectFaces::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectFaces::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&IGESSelect_SelectFaces::Explore),
             R"#(Explores an entity, to take its faces Works recursively)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (IGESSelect_SelectFaces::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectFaces::*)() const>(&IGESSelect_SelectFaces::ExploreLabel),
             R"#(Returns a text defining the criterium : "Faces")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectFaces::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectFaces::*)() const>(&IGESSelect_SelectFaces::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectFaces::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectFaces::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectFromDrawing ,opencascade::handle<IGESSelect_SelectFromDrawing>  , IFSelect_SelectDeduct >>(m.attr("IGESSelect_SelectFromDrawing"))
        .def(py::init<  >()  )
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IGESSelect_SelectFromDrawing::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (IGESSelect_SelectFromDrawing::*)( const Interface_Graph &  ) const>(&IGESSelect_SelectFromDrawing::RootResult),
             R"#(Selects the Entities which are attached to the Drawing(s) present in the Input)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SelectFromDrawing::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectFromDrawing::*)() const>(&IGESSelect_SelectFromDrawing::Label),
             R"#(Returns the label, with is "Entities attached to Drawing")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectFromDrawing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectFromDrawing::*)() const>(&IGESSelect_SelectFromDrawing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectFromDrawing::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectFromDrawing::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectFromSingleView ,opencascade::handle<IGESSelect_SelectFromSingleView>  , IFSelect_SelectDeduct >>(m.attr("IGESSelect_SelectFromSingleView"))
        .def(py::init<  >()  )
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IGESSelect_SelectFromSingleView::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (IGESSelect_SelectFromSingleView::*)( const Interface_Graph &  ) const>(&IGESSelect_SelectFromSingleView::RootResult),
             R"#(Selects the Entities which are attached to the Single View(s) present in the Input)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SelectFromSingleView::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectFromSingleView::*)() const>(&IGESSelect_SelectFromSingleView::Label),
             R"#(Returns the label, with is "Entities attached to single View")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectFromSingleView::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectFromSingleView::*)() const>(&IGESSelect_SelectFromSingleView::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectFromSingleView::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectFromSingleView::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectLevelNumber ,opencascade::handle<IGESSelect_SelectLevelNumber>  , IFSelect_SelectExtract >>(m.attr("IGESSelect_SelectLevelNumber"))
        .def(py::init<  >()  )
    // methods
        .def("SetLevelNumber",
             (void (IGESSelect_SelectLevelNumber::*)( const opencascade::handle<IFSelect_IntParam> &  ) ) static_cast<void (IGESSelect_SelectLevelNumber::*)( const opencascade::handle<IFSelect_IntParam> &  ) >(&IGESSelect_SelectLevelNumber::SetLevelNumber),
             R"#(Sets a Parameter as Level criterium)#"  , py::arg("levnum"))
        .def("LevelNumber",
             (opencascade::handle<IFSelect_IntParam> (IGESSelect_SelectLevelNumber::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IGESSelect_SelectLevelNumber::*)() const>(&IGESSelect_SelectLevelNumber::LevelNumber),
             R"#(Returns the Level criterium. NullHandle if not yet set (interpreted as Level = 0 : no level number attached))#" )
        .def("Sort",
             (Standard_Boolean (IGESSelect_SelectLevelNumber::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectLevelNumber::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_SelectLevelNumber::Sort),
             R"#(Returns True if <ent> is an IGES Entity with Level Number admits the criterium (= value if single level, or one of the attached level numbers = value if level list))#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IGESSelect_SelectLevelNumber::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectLevelNumber::*)() const>(&IGESSelect_SelectLevelNumber::ExtractLabel),
             R"#(Returns the Selection criterium : "IGES Entity, Level Number admits <nn>" (if nn > 0) or "IGES Entity attached to no Level" (if nn = 0))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectLevelNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectLevelNumber::*)() const>(&IGESSelect_SelectLevelNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectLevelNumber::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectLevelNumber::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectName ,opencascade::handle<IGESSelect_SelectName>  , IFSelect_SelectExtract >>(m.attr("IGESSelect_SelectName"))
        .def(py::init<  >()  )
    // methods
        .def("Sort",
             (Standard_Boolean (IGESSelect_SelectName::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectName::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_SelectName::Sort),
             R"#(Returns True if Name of Entity complies with Name Filter)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("SetName",
             (void (IGESSelect_SelectName::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESSelect_SelectName::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESSelect_SelectName::SetName),
             R"#(Sets a Name as a criterium : IGES Entities which have this name are kept (without regular expression, there should be at most one). <name> can be regarded as a Text Parameter)#"  , py::arg("name"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESSelect_SelectName::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESSelect_SelectName::*)() const>(&IGESSelect_SelectName::Name),
             R"#(Returns the Name used as Filter)#" )
        .def("ExtractLabel",
             (TCollection_AsciiString (IGESSelect_SelectName::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectName::*)() const>(&IGESSelect_SelectName::ExtractLabel),
             R"#(Returns the Selection criterium : "IGES Entity, Name : <name>")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectName::*)() const>(&IGESSelect_SelectName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectName::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectName::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectPCurves ,opencascade::handle<IGESSelect_SelectPCurves>  , IFSelect_SelectExplore >>(m.attr("IGESSelect_SelectPCurves"))
        .def(py::init< const Standard_Boolean >()  , py::arg("basic") )
    // methods
        .def("Explore",
             (Standard_Boolean (IGESSelect_SelectPCurves::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectPCurves::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_Graph & ,  Interface_EntityIterator &  ) const>(&IGESSelect_SelectPCurves::Explore),
             R"#(Explores an entity, to take its contained PCurves An independant curve is IGNORED : only faces are explored)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (IGESSelect_SelectPCurves::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectPCurves::*)() const>(&IGESSelect_SelectPCurves::ExploreLabel),
             R"#(Returns a text defining the criterium : "Basic PCurves" or "Global PCurves")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectPCurves::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectPCurves::*)() const>(&IGESSelect_SelectPCurves::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectPCurves::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectPCurves::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectSingleViewFrom ,opencascade::handle<IGESSelect_SelectSingleViewFrom>  , IFSelect_SelectDeduct >>(m.attr("IGESSelect_SelectSingleViewFrom"))
        .def(py::init<  >()  )
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IGESSelect_SelectSingleViewFrom::*)( const Interface_Graph &  ) const) static_cast<Interface_EntityIterator (IGESSelect_SelectSingleViewFrom::*)( const Interface_Graph &  ) const>(&IGESSelect_SelectSingleViewFrom::RootResult),
             R"#(Selects the Single Views attached (in Directory Part) to input entities)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SelectSingleViewFrom::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectSingleViewFrom::*)() const>(&IGESSelect_SelectSingleViewFrom::Label),
             R"#(Returns the label, with is "Single Views attached")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectSingleViewFrom::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectSingleViewFrom::*)() const>(&IGESSelect_SelectSingleViewFrom::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectSingleViewFrom::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectSingleViewFrom::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectSubordinate ,opencascade::handle<IGESSelect_SelectSubordinate>  , IFSelect_SelectExtract >>(m.attr("IGESSelect_SelectSubordinate"))
        .def(py::init< const Standard_Integer >()  , py::arg("status") )
    // methods
        .def("Status",
             (Standard_Integer (IGESSelect_SelectSubordinate::*)() const) static_cast<Standard_Integer (IGESSelect_SelectSubordinate::*)() const>(&IGESSelect_SelectSubordinate::Status),
             R"#(Returns the status used for sorting)#" )
        .def("Sort",
             (Standard_Boolean (IGESSelect_SelectSubordinate::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectSubordinate::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_SelectSubordinate::Sort),
             R"#(Returns True if <ent> is an IGES Entity with Subordinate Status matching the criterium)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IGESSelect_SelectSubordinate::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectSubordinate::*)() const>(&IGESSelect_SelectSubordinate::ExtractLabel),
             R"#(Returns the Selection criterium : "IGES Entity, Independant" etc...)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectSubordinate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectSubordinate::*)() const>(&IGESSelect_SelectSubordinate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectSubordinate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectSubordinate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SelectVisibleStatus ,opencascade::handle<IGESSelect_SelectVisibleStatus>  , IFSelect_SelectExtract >>(m.attr("IGESSelect_SelectVisibleStatus"))
        .def(py::init<  >()  )
    // methods
        .def("Sort",
             (Standard_Boolean (IGESSelect_SelectVisibleStatus::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_Boolean (IGESSelect_SelectVisibleStatus::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_SelectVisibleStatus::Sort),
             R"#(Returns True if <ent> is an IGES Entity with Blank Status = 0)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IGESSelect_SelectVisibleStatus::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SelectVisibleStatus::*)() const>(&IGESSelect_SelectVisibleStatus::ExtractLabel),
             R"#(Returns the Selection criterium : "IGES Entity, Status Visible")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SelectVisibleStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SelectVisibleStatus::*)() const>(&IGESSelect_SelectVisibleStatus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SelectVisibleStatus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SelectVisibleStatus::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SignColor ,opencascade::handle<IGESSelect_SignColor>  , IFSelect_Signature >>(m.attr("IGESSelect_SignColor"))
        .def(py::init< const Standard_Integer >()  , py::arg("mode") )
    // methods
        .def("Value",
             (Standard_CString (IGESSelect_SignColor::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_CString (IGESSelect_SignColor::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_SignColor::Value),
             R"#(Returns the value (see above))#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SignColor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SignColor::*)() const>(&IGESSelect_SignColor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SignColor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SignColor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SignLevelNumber ,opencascade::handle<IGESSelect_SignLevelNumber>  , IFSelect_Signature >>(m.attr("IGESSelect_SignLevelNumber"))
        .def(py::init< const Standard_Boolean >()  , py::arg("countmode") )
    // methods
        .def("Value",
             (Standard_CString (IGESSelect_SignLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_CString (IGESSelect_SignLevelNumber::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_SignLevelNumber::Value),
             R"#(Returns the value (see above))#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SignLevelNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SignLevelNumber::*)() const>(&IGESSelect_SignLevelNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SignLevelNumber::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SignLevelNumber::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SignStatus ,opencascade::handle<IGESSelect_SignStatus>  , IFSelect_Signature >>(m.attr("IGESSelect_SignStatus"))
        .def(py::init<  >()  )
    // methods
        .def("Value",
             (Standard_CString (IGESSelect_SignStatus::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<Standard_CString (IGESSelect_SignStatus::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&IGESSelect_SignStatus::Value),
             R"#(Returns the value (see above))#"  , py::arg("ent"),  py::arg("model"))
        .def("Matches",
             (Standard_Boolean (IGESSelect_SignStatus::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (IGESSelect_SignStatus::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) const>(&IGESSelect_SignStatus::Matches),
             R"#(Performs the match rule (see above))#"  , py::arg("ent"),  py::arg("model"),  py::arg("text"),  py::arg("exact"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SignStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SignStatus::*)() const>(&IGESSelect_SignStatus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SignStatus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SignStatus::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SplineToBSpline ,opencascade::handle<IGESSelect_SplineToBSpline>  , IFSelect_Transformer >>(m.attr("IGESSelect_SplineToBSpline"))
        .def(py::init< const Standard_Boolean >()  , py::arg("tryC2") )
    // methods
        .def("OptionTryC2",
             (Standard_Boolean (IGESSelect_SplineToBSpline::*)() const) static_cast<Standard_Boolean (IGESSelect_SplineToBSpline::*)() const>(&IGESSelect_SplineToBSpline::OptionTryC2),
             R"#(Returns the option TryC2 given at creation time)#" )
        .def("Perform",
             (Standard_Boolean (IGESSelect_SplineToBSpline::*)( const Interface_Graph & ,  const opencascade::handle<Interface_Protocol> & ,  Interface_CheckIterator & ,  opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<Standard_Boolean (IGESSelect_SplineToBSpline::*)( const Interface_Graph & ,  const opencascade::handle<Interface_Protocol> & ,  Interface_CheckIterator & ,  opencascade::handle<Interface_InterfaceModel> &  ) >(&IGESSelect_SplineToBSpline::Perform),
             R"#(Performs the transformation, if there is at least one Spline Curve (112) or Surface (126). Does nothing if there is none.)#"  , py::arg("G"),  py::arg("protocol"),  py::arg("checks"),  py::arg("newmod"))
        .def("Updated",
             (Standard_Boolean (IGESSelect_SplineToBSpline::*)( const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESSelect_SplineToBSpline::*)( const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESSelect_SplineToBSpline::Updated),
             R"#(Returns the transformed entities. If original data contained no Spline Curve or Surface, the result is identity : <entto> = <entfrom> Else, the copied counterpart is returned : for a Spline Curve or Surface, it is a converted BSpline Curve or Surface. Else, it is the result of general service Copy (rebuilt as necessary by BSPlines replacing Splines).)#"  , py::arg("entfrom"),  py::arg("entto"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SplineToBSpline::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SplineToBSpline::*)() const>(&IGESSelect_SplineToBSpline::Label),
             R"#(Returns a text which defines the way a Transformer works : "Conversion Spline to BSpline" and as opted, " trying to upgrade continuity")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SplineToBSpline::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SplineToBSpline::*)() const>(&IGESSelect_SplineToBSpline::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SplineToBSpline::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SplineToBSpline::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_ViewSorter ,opencascade::handle<IGESSelect_ViewSorter>  , Standard_Transient >>(m.attr("IGESSelect_ViewSorter"))
        .def(py::init<  >()  )
    // methods
        .def("SetModel",
             (void (IGESSelect_ViewSorter::*)( const opencascade::handle<IGESData_IGESModel> &  ) ) static_cast<void (IGESSelect_ViewSorter::*)( const opencascade::handle<IGESData_IGESModel> &  ) >(&IGESSelect_ViewSorter::SetModel),
             R"#(Sets the Model (for PacketList))#"  , py::arg("model"))
        .def("Clear",
             (void (IGESSelect_ViewSorter::*)() ) static_cast<void (IGESSelect_ViewSorter::*)() >(&IGESSelect_ViewSorter::Clear),
             R"#(Clears recorded data)#" )
        .def("Add",
             (Standard_Boolean (IGESSelect_ViewSorter::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (IGESSelect_ViewSorter::*)( const opencascade::handle<Standard_Transient> &  ) >(&IGESSelect_ViewSorter::Add),
             R"#(Adds an item according its type : AddEntity,AddList,AddModel)#"  , py::arg("ent"))
        .def("AddEntity",
             (Standard_Boolean (IGESSelect_ViewSorter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<Standard_Boolean (IGESSelect_ViewSorter::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESSelect_ViewSorter::AddEntity),
             R"#(Adds an IGES entity. Records the view it is attached to. Records directly <ent> if it is a ViewKindEntity or a Drawing Returns True if added, False if already in the map)#"  , py::arg("igesent"))
        .def("AddList",
             (void (IGESSelect_ViewSorter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> &  ) ) static_cast<void (IGESSelect_ViewSorter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> &  ) >(&IGESSelect_ViewSorter::AddList),
             R"#(Adds a list of entities by adding each of the items)#"  , py::arg("list"))
        .def("AddModel",
             (void (IGESSelect_ViewSorter::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (IGESSelect_ViewSorter::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&IGESSelect_ViewSorter::AddModel),
             R"#(Adds all the entities contained in a Model)#"  , py::arg("model"))
        .def("NbEntities",
             (Standard_Integer (IGESSelect_ViewSorter::*)() const) static_cast<Standard_Integer (IGESSelect_ViewSorter::*)() const>(&IGESSelect_ViewSorter::NbEntities),
             R"#(Returns the count of already recorded)#" )
        .def("SortSingleViews",
             (void (IGESSelect_ViewSorter::*)( const Standard_Boolean  ) ) static_cast<void (IGESSelect_ViewSorter::*)( const Standard_Boolean  ) >(&IGESSelect_ViewSorter::SortSingleViews),
             R"#(Prepares the result to keep only sets attached to Single Views If <alsoframes> is given True, it keeps also the Drawings as specific sets, in order to get their frames. Entities attached to no single view are put in Remaining List.)#"  , py::arg("alsoframes"))
        .def("SortDrawings",
             (void (IGESSelect_ViewSorter::*)( const Interface_Graph &  ) ) static_cast<void (IGESSelect_ViewSorter::*)( const Interface_Graph &  ) >(&IGESSelect_ViewSorter::SortDrawings),
             R"#(Prepares the result to the sets attached to Drawings : All the single views referenced by a Drawing become bound to the set for this Drawing)#"  , py::arg("G"))
        .def("NbSets",
             (Standard_Integer (IGESSelect_ViewSorter::*)( const Standard_Boolean  ) const) static_cast<Standard_Integer (IGESSelect_ViewSorter::*)( const Standard_Boolean  ) const>(&IGESSelect_ViewSorter::NbSets),
             R"#(Returns the count of sets recorded, one per distinct item. The Remaining List is not counted. If <final> is False, the sets are attached to distinct views determined by the method Add. If <final> is True, they are the sets determined by the last call to, either SortSingleViews, or SortDrawings.)#"  , py::arg("final"))
        .def("SetItem",
             (opencascade::handle<IGESData_IGESEntity> (IGESSelect_ViewSorter::*)( const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSelect_ViewSorter::*)( const Standard_Integer ,  const Standard_Boolean  ) const>(&IGESSelect_ViewSorter::SetItem),
             R"#(Returns the Item which is attached to a set of entities For <final> and definition of sets, see method NbSets. This item can be a kind of View or a Drawing)#"  , py::arg("num"),  py::arg("final"))
        .def("Sets",
             (opencascade::handle<IFSelect_PacketList> (IGESSelect_ViewSorter::*)( const Standard_Boolean  ) const) static_cast<opencascade::handle<IFSelect_PacketList> (IGESSelect_ViewSorter::*)( const Standard_Boolean  ) const>(&IGESSelect_ViewSorter::Sets),
             R"#(Returns the complete content of the determined Sets, which include Duplicated and Remaining (duplication 0) lists For <final> and definition of sets, see method NbSets.)#"  , py::arg("final"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_ViewSorter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_ViewSorter::*)() const>(&IGESSelect_ViewSorter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_ViewSorter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_ViewSorter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_WorkLibrary ,opencascade::handle<IGESSelect_WorkLibrary>  , IFSelect_WorkLibrary >>(m.attr("IGESSelect_WorkLibrary"))
        .def(py::init< const Standard_Boolean >()  , py::arg("modefnes")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("ReadFile",
             (Standard_Integer (IGESSelect_WorkLibrary::*)( const Standard_CString ,  opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> &  ) const) static_cast<Standard_Integer (IGESSelect_WorkLibrary::*)( const Standard_CString ,  opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> &  ) const>(&IGESSelect_WorkLibrary::ReadFile),
             R"#(Reads a IGES File and returns a IGES Model (into <mod>), or lets <mod> "Null" in case of Error Returns 0 if OK, 1 if Read Error, -1 if File not opened)#"  , py::arg("name"),  py::arg("model"),  py::arg("protocol"))
        .def("WriteFile",
             (Standard_Boolean (IGESSelect_WorkLibrary::*)( IFSelect_ContextWrite &  ) const) static_cast<Standard_Boolean (IGESSelect_WorkLibrary::*)( IFSelect_ContextWrite &  ) const>(&IGESSelect_WorkLibrary::WriteFile),
             R"#(Writes a File from a IGES Model (brought by <ctx>) Returns False (and writes no file) if <ctx> is not for IGES)#"  , py::arg("ctx"))
        .def("DumpEntity",
             (void (IGESSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSelect_WorkLibrary::DumpEntity),
             R"#(Dumps an IGES Entity with an IGES Dumper. <level> is the one used by IGESDumper.)#"  , py::arg("model"),  py::arg("protocol"),  py::arg("entity"),  py::arg("S"),  py::arg("level"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_WorkLibrary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_WorkLibrary::*)() const>(&IGESSelect_WorkLibrary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("DefineProtocol_s",
                    (opencascade::handle<IGESData_Protocol> (*)() ) static_cast<opencascade::handle<IGESData_Protocol> (*)() >(&IGESSelect_WorkLibrary::DefineProtocol),
                    R"#(Defines a protocol to be adequate for IGES (encompasses ALL the IGES norm including IGESSolid, IGESAppli))#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_WorkLibrary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_WorkLibrary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_AddFileComment ,opencascade::handle<IGESSelect_AddFileComment>  , IGESSelect_FileModifier >>(m.attr("IGESSelect_AddFileComment"))
        .def(py::init<  >()  )
    // methods
        .def("Clear",
             (void (IGESSelect_AddFileComment::*)() ) static_cast<void (IGESSelect_AddFileComment::*)() >(&IGESSelect_AddFileComment::Clear),
             R"#(Clears the list of file comment lines already stored)#" )
        .def("AddLine",
             (void (IGESSelect_AddFileComment::*)( const Standard_CString  ) ) static_cast<void (IGESSelect_AddFileComment::*)( const Standard_CString  ) >(&IGESSelect_AddFileComment::AddLine),
             R"#(Adds a line for file comment Remark : Lines are limited to 72 useful char.s . A line of more than 72 char.s will be splited into several ones of 72 max each.)#"  , py::arg("line"))
        .def("AddLines",
             (void (IGESSelect_AddFileComment::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> &  ) ) static_cast<void (IGESSelect_AddFileComment::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> &  ) >(&IGESSelect_AddFileComment::AddLines),
             R"#(Adds a list of lines for file comment Each of them must comply with demand of AddLine)#"  , py::arg("lines"))
        .def("NbLines",
             (Standard_Integer (IGESSelect_AddFileComment::*)() const) static_cast<Standard_Integer (IGESSelect_AddFileComment::*)() const>(&IGESSelect_AddFileComment::NbLines),
             R"#(Returns the count of stored lines)#" )
        .def("Line",
             (Standard_CString (IGESSelect_AddFileComment::*)( const Standard_Integer  ) const) static_cast<Standard_CString (IGESSelect_AddFileComment::*)( const Standard_Integer  ) const>(&IGESSelect_AddFileComment::Line),
             R"#(Returns a stored line given its rank)#"  , py::arg("num"))
        .def("Lines",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESSelect_AddFileComment::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IGESSelect_AddFileComment::*)() const>(&IGESSelect_AddFileComment::Lines),
             R"#(Returns the complete list of lines in once)#" )
        .def("Perform",
             (void (IGESSelect_AddFileComment::*)( IFSelect_ContextWrite & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSelect_AddFileComment::*)( IFSelect_ContextWrite & ,  IGESData_IGESWriter &  ) const>(&IGESSelect_AddFileComment::Perform),
             R"#(Sends the comment lines to the file (Start Section))#"  , py::arg("ctx"),  py::arg("writer"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_AddFileComment::*)() const) static_cast<TCollection_AsciiString (IGESSelect_AddFileComment::*)() const>(&IGESSelect_AddFileComment::Label),
             R"#(Returns specific Label, which is "Add <nn> Comment Lines (Start Section)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_AddFileComment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_AddFileComment::*)() const>(&IGESSelect_AddFileComment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_AddFileComment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_AddFileComment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_AddGroup ,opencascade::handle<IGESSelect_AddGroup>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_AddGroup"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_AddGroup::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_AddGroup::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_AddGroup::Performing),
             R"#(Specific action : Adds a new group)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_AddGroup::*)() const) static_cast<TCollection_AsciiString (IGESSelect_AddGroup::*)() const>(&IGESSelect_AddGroup::Label),
             R"#(Returns a text which is "Add Group")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_AddGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_AddGroup::*)() const>(&IGESSelect_AddGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_AddGroup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_AddGroup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_AutoCorrect ,opencascade::handle<IGESSelect_AutoCorrect>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_AutoCorrect"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_AutoCorrect::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_AutoCorrect::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_AutoCorrect::Performing),
             R"#(Specific action : corrects entities when it is absolutely obvious, i.e. non equivoque (by DirChecker and specific service OwnCorrect) : works with a protocol.)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_AutoCorrect::*)() const) static_cast<TCollection_AsciiString (IGESSelect_AutoCorrect::*)() const>(&IGESSelect_AutoCorrect::Label),
             R"#(Returns a text which is "Auto-correction of IGES Entities")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_AutoCorrect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_AutoCorrect::*)() const>(&IGESSelect_AutoCorrect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_AutoCorrect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_AutoCorrect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_ChangeLevelList ,opencascade::handle<IGESSelect_ChangeLevelList>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_ChangeLevelList"))
        .def(py::init<  >()  )
    // methods
        .def("HasOldNumber",
             (Standard_Boolean (IGESSelect_ChangeLevelList::*)() const) static_cast<Standard_Boolean (IGESSelect_ChangeLevelList::*)() const>(&IGESSelect_ChangeLevelList::HasOldNumber),
             R"#(Returns True if OldNumber is defined : then, only entities which have a LevelList which contains the value are processed. Else, all entities attached to a LevelList are.)#" )
        .def("OldNumber",
             (opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelList::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelList::*)() const>(&IGESSelect_ChangeLevelList::OldNumber),
             R"#(Returns the parameter for OldNumber. If not defined (Null Handle), it will be interpreted as "all level lists")#" )
        .def("SetOldNumber",
             (void (IGESSelect_ChangeLevelList::*)( const opencascade::handle<IFSelect_IntParam> &  ) ) static_cast<void (IGESSelect_ChangeLevelList::*)( const opencascade::handle<IFSelect_IntParam> &  ) >(&IGESSelect_ChangeLevelList::SetOldNumber),
             R"#(Sets a parameter for OldNumber)#"  , py::arg("param"))
        .def("HasNewNumber",
             (Standard_Boolean (IGESSelect_ChangeLevelList::*)() const) static_cast<Standard_Boolean (IGESSelect_ChangeLevelList::*)() const>(&IGESSelect_ChangeLevelList::HasNewNumber),
             R"#(Returns True if NewNumber is defined : then, it gives the new value for Level Number. Else, the first value of the LevelList is used as new Level Number.)#" )
        .def("NewNumber",
             (opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelList::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelList::*)() const>(&IGESSelect_ChangeLevelList::NewNumber),
             R"#(Returns the parameter for NewNumber. If not defined (Null Handle), it will be interpreted as "new value 0")#" )
        .def("SetNewNumber",
             (void (IGESSelect_ChangeLevelList::*)( const opencascade::handle<IFSelect_IntParam> &  ) ) static_cast<void (IGESSelect_ChangeLevelList::*)( const opencascade::handle<IFSelect_IntParam> &  ) >(&IGESSelect_ChangeLevelList::SetNewNumber),
             R"#(Sets a parameter for NewNumber)#"  , py::arg("param"))
        .def("Performing",
             (void (IGESSelect_ChangeLevelList::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_ChangeLevelList::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_ChangeLevelList::Performing),
             R"#(Specific action : considers selected target entities : If OldNumber is not defined, all entities attached to a Level List If OldNumber is defined (value not negative), entities with a Level List which contains this value Attaches all these entities to value given by NewNumber, or the first value of the Level List)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_ChangeLevelList::*)() const) static_cast<TCollection_AsciiString (IGESSelect_ChangeLevelList::*)() const>(&IGESSelect_ChangeLevelList::Label),
             R"#(Returns a text which begins by "Changes Level Lists containing <old>", or "Changes all Level Lists in D.E.", and ends by " to Number <new>" or " to Number = first value in List")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_ChangeLevelList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_ChangeLevelList::*)() const>(&IGESSelect_ChangeLevelList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_ChangeLevelList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_ChangeLevelList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_ChangeLevelNumber ,opencascade::handle<IGESSelect_ChangeLevelNumber>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_ChangeLevelNumber"))
        .def(py::init<  >()  )
    // methods
        .def("HasOldNumber",
             (Standard_Boolean (IGESSelect_ChangeLevelNumber::*)() const) static_cast<Standard_Boolean (IGESSelect_ChangeLevelNumber::*)() const>(&IGESSelect_ChangeLevelNumber::HasOldNumber),
             R"#(Returns True if OldNumber is defined : then, only entities attached to the value of OldNumber will be considered. Else, all entities but those attached to a Level List will be.)#" )
        .def("OldNumber",
             (opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelNumber::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelNumber::*)() const>(&IGESSelect_ChangeLevelNumber::OldNumber),
             R"#(Returns the parameter for OldNumber. If not defined (Null Handle), it will be interpreted as "all level numbers")#" )
        .def("SetOldNumber",
             (void (IGESSelect_ChangeLevelNumber::*)( const opencascade::handle<IFSelect_IntParam> &  ) ) static_cast<void (IGESSelect_ChangeLevelNumber::*)( const opencascade::handle<IFSelect_IntParam> &  ) >(&IGESSelect_ChangeLevelNumber::SetOldNumber),
             R"#(Sets a parameter for OldNumber)#"  , py::arg("param"))
        .def("NewNumber",
             (opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelNumber::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IGESSelect_ChangeLevelNumber::*)() const>(&IGESSelect_ChangeLevelNumber::NewNumber),
             R"#(Returns the parameter for NewNumber. If not defined (Null Handle), it will be interpreted as "new value 0")#" )
        .def("SetNewNumber",
             (void (IGESSelect_ChangeLevelNumber::*)( const opencascade::handle<IFSelect_IntParam> &  ) ) static_cast<void (IGESSelect_ChangeLevelNumber::*)( const opencascade::handle<IFSelect_IntParam> &  ) >(&IGESSelect_ChangeLevelNumber::SetNewNumber),
             R"#(Sets a parameter for NewNumber)#"  , py::arg("param"))
        .def("Performing",
             (void (IGESSelect_ChangeLevelNumber::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_ChangeLevelNumber::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_ChangeLevelNumber::Performing),
             R"#(Specific action : considers selected target entities : If OldNumber is not defined, all entities but those attached to a Level List If OldNumber is defined (value not negative), entities with a defined Level Number (can be zero) Attaches all these entities to value given by NewNumber, or zero if not defined)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_ChangeLevelNumber::*)() const) static_cast<TCollection_AsciiString (IGESSelect_ChangeLevelNumber::*)() const>(&IGESSelect_ChangeLevelNumber::Label),
             R"#(Returns a text which is "Changes Level Number <old> to <new>" , or "Changes all Levels Numbers positive and zero to <new>")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_ChangeLevelNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_ChangeLevelNumber::*)() const>(&IGESSelect_ChangeLevelNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_ChangeLevelNumber::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_ChangeLevelNumber::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_ComputeStatus ,opencascade::handle<IGESSelect_ComputeStatus>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_ComputeStatus"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_ComputeStatus::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_ComputeStatus::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_ComputeStatus::Performing),
             R"#(Specific action : it first evaluates the required values for Subordinate Status and Use Flag (in Directory Part of each IGES Entity). Then it corrects them, for the whole target. Works with a Protocol. Implementation uses BasicEditor)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_ComputeStatus::*)() const) static_cast<TCollection_AsciiString (IGESSelect_ComputeStatus::*)() const>(&IGESSelect_ComputeStatus::Label),
             R"#(Returns a text which is "Compute Subordinate Status and Use Flag")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_ComputeStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_ComputeStatus::*)() const>(&IGESSelect_ComputeStatus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_ComputeStatus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_ComputeStatus::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_FloatFormat ,opencascade::handle<IGESSelect_FloatFormat>  , IGESSelect_FileModifier >>(m.attr("IGESSelect_FloatFormat"))
        .def(py::init<  >()  )
    // methods
        .def("SetDefault",
             (void (IGESSelect_FloatFormat::*)( const Standard_Integer  ) ) static_cast<void (IGESSelect_FloatFormat::*)( const Standard_Integer  ) >(&IGESSelect_FloatFormat::SetDefault),
             R"#(Sets FloatFormat to default value (see Create) but if <digits> is given positive, it commands Formats (main and range) to ensure <digits> significant digits to be displayed)#"  , py::arg("digits")=static_cast<const Standard_Integer>(0))
        .def("SetZeroSuppress",
             (void (IGESSelect_FloatFormat::*)( const Standard_Boolean  ) ) static_cast<void (IGESSelect_FloatFormat::*)( const Standard_Boolean  ) >(&IGESSelect_FloatFormat::SetZeroSuppress),
             R"#(Sets ZeroSuppress mode to a new value)#"  , py::arg("mode"))
        .def("SetFormat",
             (void (IGESSelect_FloatFormat::*)( const Standard_CString  ) ) static_cast<void (IGESSelect_FloatFormat::*)( const Standard_CString  ) >(&IGESSelect_FloatFormat::SetFormat),
             R"#(Sets Main Format to a new value Remark : SetFormat, SetZeroSuppress and SetFormatForRange are independant)#"  , py::arg("format")=static_cast<const Standard_CString>("%E"))
        .def("SetFormatForRange",
             (void (IGESSelect_FloatFormat::*)( const Standard_CString ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IGESSelect_FloatFormat::*)( const Standard_CString ,  const Standard_Real ,  const Standard_Real  ) >(&IGESSelect_FloatFormat::SetFormatForRange),
             R"#(Sets Format for Range to a new value with its range of application. To cancel it, give format as "" (empty string) Remark that if the condition (0. < Rmin < Rmax) is not verified, this secondary format will be ignored. Moreover, this secondary format is intended to be used in a range around 1.)#"  , py::arg("format")=static_cast<const Standard_CString>("%f"),  py::arg("Rmin")=static_cast<const Standard_Real>(0.1),  py::arg("Rmax")=static_cast<const Standard_Real>(1000.0))
        .def("Perform",
             (void (IGESSelect_FloatFormat::*)( IFSelect_ContextWrite & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSelect_FloatFormat::*)( IFSelect_ContextWrite & ,  IGESData_IGESWriter &  ) const>(&IGESSelect_FloatFormat::Perform),
             R"#(Sets the Floatting Formats of IGESWriter to the recorded parameters)#"  , py::arg("ctx"),  py::arg("writer"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_FloatFormat::*)() const) static_cast<TCollection_AsciiString (IGESSelect_FloatFormat::*)() const>(&IGESSelect_FloatFormat::Label),
             R"#(Returns specific Label : for instance, "Float Format [ZeroSuppress] %E [, in range R1-R2 %f]")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_FloatFormat::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_FloatFormat::*)() const>(&IGESSelect_FloatFormat::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Format",
             []( IGESSelect_FloatFormat &self , TCollection_AsciiString & mainform,TCollection_AsciiString & forminrange ){ Standard_Boolean  zerosup; Standard_Boolean  hasrange; Standard_Real  rangemin; Standard_Real  rangemax; self.Format(zerosup,mainform,hasrange,forminrange,rangemin,rangemax); return std::make_tuple(zerosup,hasrange,rangemin,rangemax); },
             R"#(Returns all recorded parameters : zerosup : ZeroSuppress status mainform : Main Format (which applies out of the range, or for every real if no range is set) hasrange : True if a FormatInRange is set, False else (following parameters do not apply if it is False) forminrange : Secondary Format (it applies inside the range) rangemin, rangemax : the range in which the secondary format applies)#"  , py::arg("mainform"),  py::arg("forminrange"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_FloatFormat::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_FloatFormat::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_RebuildDrawings ,opencascade::handle<IGESSelect_RebuildDrawings>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_RebuildDrawings"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_RebuildDrawings::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_RebuildDrawings::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_RebuildDrawings::Performing),
             R"#(Specific action : Rebuilds the original Drawings)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_RebuildDrawings::*)() const) static_cast<TCollection_AsciiString (IGESSelect_RebuildDrawings::*)() const>(&IGESSelect_RebuildDrawings::Label),
             R"#(Returns a text which is "Rebuild Drawings")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_RebuildDrawings::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_RebuildDrawings::*)() const>(&IGESSelect_RebuildDrawings::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_RebuildDrawings::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_RebuildDrawings::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_RebuildGroups ,opencascade::handle<IGESSelect_RebuildGroups>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_RebuildGroups"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_RebuildGroups::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_RebuildGroups::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_RebuildGroups::Performing),
             R"#(Specific action : Rebuilds the original groups)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_RebuildGroups::*)() const) static_cast<TCollection_AsciiString (IGESSelect_RebuildGroups::*)() const>(&IGESSelect_RebuildGroups::Label),
             R"#(Returns a text which is "Rebuild Groups")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_RebuildGroups::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_RebuildGroups::*)() const>(&IGESSelect_RebuildGroups::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_RebuildGroups::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_RebuildGroups::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_RemoveCurves ,opencascade::handle<IGESSelect_RemoveCurves>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_RemoveCurves"))
        .def(py::init< const Standard_Boolean >()  , py::arg("UV") )
    // methods
        .def("Performing",
             (void (IGESSelect_RemoveCurves::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_RemoveCurves::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_RemoveCurves::Performing),
             R"#(Specific action : Removes the Curves)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_RemoveCurves::*)() const) static_cast<TCollection_AsciiString (IGESSelect_RemoveCurves::*)() const>(&IGESSelect_RemoveCurves::Label),
             R"#(Returns a text which is "Remove Curves UV on Face" or "Remove Curves 3D on Face")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_RemoveCurves::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_RemoveCurves::*)() const>(&IGESSelect_RemoveCurves::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_RemoveCurves::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_RemoveCurves::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SetGlobalParameter ,opencascade::handle<IGESSelect_SetGlobalParameter>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_SetGlobalParameter"))
        .def(py::init< const Standard_Integer >()  , py::arg("numpar") )
    // methods
        .def("GlobalNumber",
             (Standard_Integer (IGESSelect_SetGlobalParameter::*)() const) static_cast<Standard_Integer (IGESSelect_SetGlobalParameter::*)() const>(&IGESSelect_SetGlobalParameter::GlobalNumber),
             R"#(Returns the global parameter number to which this modifiers applies)#" )
        .def("SetValue",
             (void (IGESSelect_SetGlobalParameter::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESSelect_SetGlobalParameter::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESSelect_SetGlobalParameter::SetValue),
             R"#(Sets a Text Parameter for the new value)#"  , py::arg("text"))
        .def("Value",
             (opencascade::handle<TCollection_HAsciiString> (IGESSelect_SetGlobalParameter::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESSelect_SetGlobalParameter::*)() const>(&IGESSelect_SetGlobalParameter::Value),
             R"#(Returns the value to set to the global parameter (Text Param))#" )
        .def("Performing",
             (void (IGESSelect_SetGlobalParameter::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_SetGlobalParameter::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_SetGlobalParameter::Performing),
             R"#(Specific action : only <target> is used : the form of the new value is checked regarding the parameter number (given at creation time).)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SetGlobalParameter::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SetGlobalParameter::*)() const>(&IGESSelect_SetGlobalParameter::Label),
             R"#(Returns a text which is "Sets Global Parameter <numpar> to <new value>")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SetGlobalParameter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SetGlobalParameter::*)() const>(&IGESSelect_SetGlobalParameter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SetGlobalParameter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SetGlobalParameter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SetLabel ,opencascade::handle<IGESSelect_SetLabel>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_SetLabel"))
        .def(py::init< const Standard_Integer,const Standard_Boolean >()  , py::arg("mode"),  py::arg("enforce") )
    // methods
        .def("Performing",
             (void (IGESSelect_SetLabel::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_SetLabel::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_SetLabel::Performing),
             R"#(Specific action : Sets or Clears the Label)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SetLabel::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SetLabel::*)() const>(&IGESSelect_SetLabel::Label),
             R"#(Returns a text which is "Clear Short Label" or "Set Label to DE" With possible additional information " (enforced)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SetLabel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SetLabel::*)() const>(&IGESSelect_SetLabel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SetLabel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SetLabel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_SetVersion5 ,opencascade::handle<IGESSelect_SetVersion5>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_SetVersion5"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_SetVersion5::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_SetVersion5::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_SetVersion5::Performing),
             R"#(Specific action : only <target> is used : IGES Version (coded) is upgraded to 5.1 if it is older, and it this case the new global parameter 25 (LastChangeDate) is set to current time)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_SetVersion5::*)() const) static_cast<TCollection_AsciiString (IGESSelect_SetVersion5::*)() const>(&IGESSelect_SetVersion5::Label),
             R"#(Returns a text which is "Update IGES Version to 5.1")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_SetVersion5::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_SetVersion5::*)() const>(&IGESSelect_SetVersion5::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_SetVersion5::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_SetVersion5::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_UpdateCreationDate ,opencascade::handle<IGESSelect_UpdateCreationDate>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_UpdateCreationDate"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_UpdateCreationDate::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_UpdateCreationDate::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_UpdateCreationDate::Performing),
             R"#(Specific action : only <target> is used : the system Date is set to Global Section Item n0 18.)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_UpdateCreationDate::*)() const) static_cast<TCollection_AsciiString (IGESSelect_UpdateCreationDate::*)() const>(&IGESSelect_UpdateCreationDate::Label),
             R"#(Returns a text which is "Update IGES Header Creation Date")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_UpdateCreationDate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_UpdateCreationDate::*)() const>(&IGESSelect_UpdateCreationDate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_UpdateCreationDate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_UpdateCreationDate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_UpdateFileName ,opencascade::handle<IGESSelect_UpdateFileName>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_UpdateFileName"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_UpdateFileName::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_UpdateFileName::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_UpdateFileName::Performing),
             R"#(Specific action : only <target> is used : the system Date is set to Global Section Item n0 18.)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_UpdateFileName::*)() const) static_cast<TCollection_AsciiString (IGESSelect_UpdateFileName::*)() const>(&IGESSelect_UpdateFileName::Label),
             R"#(Returns a text which is "Updates IGES File Name to new current one")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_UpdateFileName::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_UpdateFileName::*)() const>(&IGESSelect_UpdateFileName::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_UpdateFileName::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_UpdateFileName::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESSelect_UpdateLastChange ,opencascade::handle<IGESSelect_UpdateLastChange>  , IGESSelect_ModelModifier >>(m.attr("IGESSelect_UpdateLastChange"))
        .def(py::init<  >()  )
    // methods
        .def("Performing",
             (void (IGESSelect_UpdateLastChange::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSelect_UpdateLastChange::*)( IFSelect_ContextModif & ,  const opencascade::handle<IGESData_IGESModel> & ,  Interface_CopyTool &  ) const>(&IGESSelect_UpdateLastChange::Performing),
             R"#(Specific action : only <target> is used : the system Date is set to Global Section Item n0 25. Also sets IGES Version (Item n0 23) to IGES5 if it was older.)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IGESSelect_UpdateLastChange::*)() const) static_cast<TCollection_AsciiString (IGESSelect_UpdateLastChange::*)() const>(&IGESSelect_UpdateLastChange::Label),
             R"#(Returns a text which is "Update IGES Header Last Change Date")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSelect_UpdateLastChange::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSelect_UpdateLastChange::*)() const>(&IGESSelect_UpdateLastChange::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSelect_UpdateLastChange::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSelect_UpdateLastChange::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/IGESSelect_RemoveCurves.hxx
// ./opencascade/IGESSelect_ChangeLevelList.hxx
// ./opencascade/IGESSelect_SignColor.hxx
// ./opencascade/IGESSelect_UpdateFileName.hxx
// ./opencascade/IGESSelect_SignLevelNumber.hxx
// ./opencascade/IGESSelect.hxx
// ./opencascade/IGESSelect_SelectVisibleStatus.hxx
// ./opencascade/IGESSelect_UpdateCreationDate.hxx
// ./opencascade/IGESSelect_IGESTypeForm.hxx
// ./opencascade/IGESSelect_EditHeader.hxx
// ./opencascade/IGESSelect_SignStatus.hxx
// ./opencascade/IGESSelect_SelectFromSingleView.hxx
// ./opencascade/IGESSelect_IGESName.hxx
// ./opencascade/IGESSelect_SelectBypassGroup.hxx
// ./opencascade/IGESSelect_SplineToBSpline.hxx
// ./opencascade/IGESSelect_RebuildGroups.hxx
// ./opencascade/IGESSelect_SelectLevelNumber.hxx
// ./opencascade/IGESSelect_SelectSingleViewFrom.hxx
// ./opencascade/IGESSelect_SelectBypassSubfigure.hxx
// ./opencascade/IGESSelect_ModelModifier.hxx
// ./opencascade/IGESSelect_AddFileComment.hxx
// ./opencascade/IGESSelect_SetGlobalParameter.hxx
// ./opencascade/IGESSelect_ChangeLevelNumber.hxx
// ./opencascade/IGESSelect_UpdateLastChange.hxx
// ./opencascade/IGESSelect_SetVersion5.hxx
// ./opencascade/IGESSelect_DispPerSingleView.hxx
// ./opencascade/IGESSelect_EditDirPart.hxx
// ./opencascade/IGESSelect_CounterOfLevelNumber.hxx
// ./opencascade/IGESSelect_FloatFormat.hxx
// ./opencascade/IGESSelect_SelectSubordinate.hxx
// ./opencascade/IGESSelect_SelectPCurves.hxx
// ./opencascade/IGESSelect_SetLabel.hxx
// ./opencascade/IGESSelect_ViewSorter.hxx
// ./opencascade/IGESSelect_ComputeStatus.hxx
// ./opencascade/IGESSelect_SelectDrawingFrom.hxx
// ./opencascade/IGESSelect_SelectBasicGeom.hxx
// ./opencascade/IGESSelect_SelectName.hxx
// ./opencascade/IGESSelect_SelectFaces.hxx
// ./opencascade/IGESSelect_Dumper.hxx
// ./opencascade/IGESSelect_RebuildDrawings.hxx
// ./opencascade/IGESSelect_WorkLibrary.hxx
// ./opencascade/IGESSelect_DispPerDrawing.hxx
// ./opencascade/IGESSelect_Activator.hxx
// ./opencascade/IGESSelect_AddGroup.hxx
// ./opencascade/IGESSelect_AutoCorrect.hxx
// ./opencascade/IGESSelect_SelectFromDrawing.hxx
// ./opencascade/IGESSelect_FileModifier.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
