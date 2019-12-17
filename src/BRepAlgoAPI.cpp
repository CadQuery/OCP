
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_ProgressIndicator.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>

// module includes
#include <BRepAlgoAPI_Algo.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <BRepAlgoAPI_BuilderAlgo.hxx>
#include <BRepAlgoAPI_Check.hxx>
#include <BRepAlgoAPI_Common.hxx>
#include <BRepAlgoAPI_Cut.hxx>
#include <BRepAlgoAPI_Defeaturing.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <BRepAlgoAPI_Section.hxx>
#include <BRepAlgoAPI_Splitter.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <BOPAlgo_Builder.hxx>

// Module definiiton
void register_BRepAlgoAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepAlgoAPI"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepAlgoAPI_Check ,std::unique_ptr<BRepAlgoAPI_Check>  , BOPAlgo_Options >>(m.attr("BRepAlgoAPI_Check"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theS"),  py::arg("bTestSE")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("bTestSI")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const BOPAlgo_Operation,const Standard_Boolean,const Standard_Boolean >()  , py::arg("theS1"),  py::arg("theS2"),  py::arg("theOp")=static_cast<const BOPAlgo_Operation>(BOPAlgo_UNKNOWN),  py::arg("bTestSE")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("bTestSI")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("SetData",
             (void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepAlgoAPI_Check::SetData),
             R"#(Initializes the algorithm with single shape.)#"  , py::arg("theS"),  py::arg("bTestSE")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("bTestSI")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetData",
             (void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const BOPAlgo_Operation ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const BOPAlgo_Operation ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepAlgoAPI_Check::SetData),
             R"#(Initializes the algorithm with couple of shapes. Additionally to the validity checks of each given shape, the types of the given shapes will be checked on validity for Boolean operation of given type.)#"  , py::arg("theS1"),  py::arg("theS2"),  py::arg("theOp")=static_cast<const BOPAlgo_Operation>(BOPAlgo_UNKNOWN),  py::arg("bTestSE")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("bTestSI")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (BRepAlgoAPI_Check::*)() ) static_cast<void (BRepAlgoAPI_Check::*)() >(&BRepAlgoAPI_Check::Perform),
             R"#(Performs the check.)#" )
        .def("IsValid",
             (Standard_Boolean (BRepAlgoAPI_Check::*)() ) static_cast<Standard_Boolean (BRepAlgoAPI_Check::*)() >(&BRepAlgoAPI_Check::IsValid),
             R"#(Shows whether shape(s) valid or not.)#" )
        .def("Result",
             (const BOPAlgo_ListOfCheckResult & (BRepAlgoAPI_Check::*)() ) static_cast<const BOPAlgo_ListOfCheckResult & (BRepAlgoAPI_Check::*)() >(&BRepAlgoAPI_Check::Result),
             R"#(Returns faulty shapes.)#" )
;


    static_cast<py::class_<BRepAlgoAPI_Algo ,std::unique_ptr<BRepAlgoAPI_Algo, py::nodelete>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepAlgoAPI_Algo"))
        .def("Shape",
             (const TopoDS_Shape & (BRepAlgoAPI_Algo::*)() ) static_cast<const TopoDS_Shape & (BRepAlgoAPI_Algo::*)() >(&BRepAlgoAPI_Algo::Shape),
             R"#(None)#" )
;


    static_cast<py::class_<BRepAlgoAPI_Defeaturing ,std::unique_ptr<BRepAlgoAPI_Defeaturing>  , BRepAlgoAPI_Algo >>(m.attr("BRepAlgoAPI_Defeaturing"))
        .def(py::init<  >()  )
        .def("SetShape",
             (void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_Defeaturing::SetShape),
             R"#(Sets the shape for processing.)#"  , py::arg("theShape"))
        .def("InputShape",
             (const TopoDS_Shape & (BRepAlgoAPI_Defeaturing::*)() const) static_cast<const TopoDS_Shape & (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::InputShape),
             R"#(Returns the input shape)#" )
        .def("AddFaceToRemove",
             (void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_Defeaturing::AddFaceToRemove),
             R"#(Adds the features to remove from the input shape.)#"  , py::arg("theFace"))
        .def("AddFacesToRemove",
             (void (BRepAlgoAPI_Defeaturing::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgoAPI_Defeaturing::AddFacesToRemove),
             R"#(Adds the faces to remove from the input shape.)#"  , py::arg("theFaces"))
        .def("FacesToRemove",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::FacesToRemove),
             R"#(Returns the list of faces which have been requested for removal from the input shape.)#" )
        .def("Build",
             (void (BRepAlgoAPI_Defeaturing::*)() ) static_cast<void (BRepAlgoAPI_Defeaturing::*)() >(&BRepAlgoAPI_Defeaturing::Build),
             R"#(Performs the operation)#" )
        .def("TrackHistory",
             (void (BRepAlgoAPI_Defeaturing::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)( const Standard_Boolean  ) >(&BRepAlgoAPI_Defeaturing::TrackHistory),
             R"#(Defines whether to track the modification of the shapes or not.)#"  , py::arg("theFlag"))
        .def("HasHistory",
             (Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::HasHistory),
             R"#(Returns whether the history was requested or not.)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_Defeaturing::Modified),
             R"#(Returns the list of shapes modified from the shape <theS> during the operation.)#"  , py::arg("theS"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_Defeaturing::Generated),
             R"#(Returns the list of shapes generated from the shape <theS> during the operation.)#"  , py::arg("theS"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_Defeaturing::IsDeleted),
             R"#(Returns true if the shape <theS> has been deleted during the operation. It means that the shape has no any trace in the result. Otherwise it returns false.)#"  , py::arg("theS"))
        .def("GetHistory",
             (opencascade::handle<BRepTools_History> (BRepAlgoAPI_Defeaturing::*)() ) static_cast<opencascade::handle<BRepTools_History> (BRepAlgoAPI_Defeaturing::*)() >(&BRepAlgoAPI_Defeaturing::GetHistory),
             R"#(Returns the History of shapes modifications)#" )
;


    static_cast<py::class_<BRepAlgoAPI_BuilderAlgo ,std::unique_ptr<BRepAlgoAPI_BuilderAlgo>  , BRepAlgoAPI_Algo >>(m.attr("BRepAlgoAPI_BuilderAlgo"))
        .def(py::init<  >()  )
        .def(py::init< const BOPAlgo_PaveFiller & >()  , py::arg("thePF") )
        .def("SetNonDestructive",
             (void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean  ) >(&BRepAlgoAPI_BuilderAlgo::SetNonDestructive),
             R"#(Sets the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#"  , py::arg("theFlag"))
        .def("NonDestructive",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::NonDestructive),
             R"#(Returns the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#" )
        .def("SetGlue",
             (void (BRepAlgoAPI_BuilderAlgo::*)( const BOPAlgo_GlueEnum  ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)( const BOPAlgo_GlueEnum  ) >(&BRepAlgoAPI_BuilderAlgo::SetGlue),
             R"#(Sets the glue option for the algorithm)#"  , py::arg("theGlue"))
        .def("Glue",
             (BOPAlgo_GlueEnum (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<BOPAlgo_GlueEnum (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::Glue),
             R"#(Returns the glue option of the algorithm)#" )
        .def("SetCheckInverted",
             (void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean  ) >(&BRepAlgoAPI_BuilderAlgo::SetCheckInverted),
             R"#(Enables/Disables the check of the input solids for inverted status)#"  , py::arg("theCheck"))
        .def("CheckInverted",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::CheckInverted),
             R"#(Returns the flag defining whether the check for input solids on inverted status should be performed or not.)#" )
        .def("SetArguments",
             (void (BRepAlgoAPI_BuilderAlgo::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgoAPI_BuilderAlgo::SetArguments),
             R"#(Sets the arguments)#"  , py::arg("theLS"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::Arguments),
             R"#(Gets the arguments)#" )
        .def("Build",
             (void (BRepAlgoAPI_BuilderAlgo::*)() ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)() >(&BRepAlgoAPI_BuilderAlgo::Build),
             R"#(Performs the algorithm)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_BuilderAlgo::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("aS"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_BuilderAlgo::IsDeleted),
             R"#(Returns true if the shape S has been deleted. The result shape of the operation does not contain the shape S.)#"  , py::arg("aS"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_BuilderAlgo::Generated),
             R"#(Returns the list of shapes generated from the shape <S>. For use in BRepNaming.)#"  , py::arg("S"))
        .def("HasModified",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::HasModified),
             R"#(Returns true if there is at least one modified shape. For use in BRepNaming.)#" )
        .def("HasGenerated",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::HasGenerated),
             R"#(Returns true if there is at least one generated shape. For use in BRepNaming.)#" )
        .def("HasDeleted",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::HasDeleted),
             R"#(Returns true if there is at least one deleted shape. For use in BRepNaming.)#" )
        .def("DSFiller",
             (const BOPAlgo_PPaveFiller & (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<const BOPAlgo_PPaveFiller & (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::DSFiller),
             R"#(Returns the Intersection tool)#" )
;


    static_cast<py::class_<BRepAlgoAPI_BooleanOperation ,std::unique_ptr<BRepAlgoAPI_BooleanOperation>  , BRepAlgoAPI_BuilderAlgo >>(m.attr("BRepAlgoAPI_BooleanOperation"))
        .def("Shape1",
             (const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Shape1),
             R"#(Returns the first argument involved in this Boolean operation. Obsolete)#" )
        .def("Shape2",
             (const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Shape2),
             R"#(Returns the second argument involved in this Boolean operation. Obsolete)#" )
        .def("SetTools",
             (void (BRepAlgoAPI_BooleanOperation::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgoAPI_BooleanOperation::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgoAPI_BooleanOperation::SetTools),
             R"#(Sets the tools)#"  , py::arg("theLS"))
        .def("Tools",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Tools),
             R"#(Gets the tools)#" )
        .def("SetOperation",
             (void (BRepAlgoAPI_BooleanOperation::*)( const BOPAlgo_Operation  ) ) static_cast<void (BRepAlgoAPI_BooleanOperation::*)( const BOPAlgo_Operation  ) >(&BRepAlgoAPI_BooleanOperation::SetOperation),
             R"#(Sets the type of Boolean operation)#"  , py::arg("anOp"))
        .def("Operation",
             (BOPAlgo_Operation (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<BOPAlgo_Operation (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Operation),
             R"#(Returns the type of Boolean Operation)#" )
        .def("Build",
             (void (BRepAlgoAPI_BooleanOperation::*)() ) static_cast<void (BRepAlgoAPI_BooleanOperation::*)() >(&BRepAlgoAPI_BooleanOperation::Build),
             R"#(Performs the algorithm Filling interference Data Structure (if it is necessary) Building the result of the operation.)#" )
        .def("BuilderCanWork",
             (Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::BuilderCanWork),
             R"#(Returns True if there was no errors occured obsolete)#" )
        .def("FuseEdges",
             (Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::FuseEdges),
             R"#(Returns the flag of edge refining)#" )
        .def("RefineEdges",
             (void (BRepAlgoAPI_BooleanOperation::*)() ) static_cast<void (BRepAlgoAPI_BooleanOperation::*)() >(&BRepAlgoAPI_BooleanOperation::RefineEdges),
             R"#(Fuse C1 edges)#" )
        .def("SectionEdges",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)() ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)() >(&BRepAlgoAPI_BooleanOperation::SectionEdges),
             R"#(Returns a list of section edges. The edges represent the result of intersection between arguments of Boolean Operation. They are computed during operation execution.)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_BooleanOperation::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("aS"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_BooleanOperation::IsDeleted),
             R"#(Returns true if the shape S has been deleted. The result shape of the operation does not contain the shape S.)#"  , py::arg("aS"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_BooleanOperation::Generated),
             R"#(Returns the list of shapes generated from the shape <S>. For use in BRepNaming.)#"  , py::arg("S"))
        .def("HasModified",
             (Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::HasModified),
             R"#(Returns true if there is at least one modified shape. For use in BRepNaming.)#" )
        .def("HasGenerated",
             (Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::HasGenerated),
             R"#(Returns true if there is at least one generated shape. For use in BRepNaming.)#" )
        .def("HasDeleted",
             (Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::HasDeleted),
             R"#(Returns true if there is at least one deleted shape. For use in BRepNaming.)#" )
;


    static_cast<py::class_<BRepAlgoAPI_Common ,std::unique_ptr<BRepAlgoAPI_Common>  , BRepAlgoAPI_BooleanOperation >>(m.attr("BRepAlgoAPI_Common"))
        .def(py::init<  >()  )
        .def(py::init< const BOPAlgo_PaveFiller & >()  , py::arg("PF") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const BOPAlgo_PaveFiller & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("PF") )
;


    static_cast<py::class_<BRepAlgoAPI_Fuse ,std::unique_ptr<BRepAlgoAPI_Fuse>  , BRepAlgoAPI_BooleanOperation >>(m.attr("BRepAlgoAPI_Fuse"))
        .def(py::init<  >()  )
        .def(py::init< const BOPAlgo_PaveFiller & >()  , py::arg("PF") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const BOPAlgo_PaveFiller & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("aDSF") )
;


    static_cast<py::class_<BRepAlgoAPI_Section ,std::unique_ptr<BRepAlgoAPI_Section>  , BRepAlgoAPI_BooleanOperation >>(m.attr("BRepAlgoAPI_Section"))
        .def(py::init<  >()  )
        .def(py::init< const BOPAlgo_PaveFiller & >()  , py::arg("PF") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("S1"),  py::arg("S2"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const BOPAlgo_PaveFiller &,const Standard_Boolean >()  , py::arg("S1"),  py::arg("S2"),  py::arg("aDSF"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const gp_Pln &,const Standard_Boolean >()  , py::arg("S1"),  py::arg("Pl"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("S1"),  py::arg("Sf"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("Sf"),  py::arg("S2"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("Sf1"),  py::arg("Sf2"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Init1",
             (void (BRepAlgoAPI_Section::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_Section::Init1),
             R"#(initialize the argument <S1> - argument Obsolete)#"  , py::arg("S1"))
        .def("Init1",
             (void (BRepAlgoAPI_Section::*)( const gp_Pln &  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const gp_Pln &  ) >(&BRepAlgoAPI_Section::Init1),
             R"#(initialize the argument <Pl> - argument Obsolete)#"  , py::arg("Pl"))
        .def("Init1",
             (void (BRepAlgoAPI_Section::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const opencascade::handle<Geom_Surface> &  ) >(&BRepAlgoAPI_Section::Init1),
             R"#(initialize the argument <Sf> - argument Obsolete)#"  , py::arg("Sf"))
        .def("Init2",
             (void (BRepAlgoAPI_Section::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const TopoDS_Shape &  ) >(&BRepAlgoAPI_Section::Init2),
             R"#(initialize the tool <S2> - tool Obsolete)#"  , py::arg("S2"))
        .def("Init2",
             (void (BRepAlgoAPI_Section::*)( const gp_Pln &  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const gp_Pln &  ) >(&BRepAlgoAPI_Section::Init2),
             R"#(initialize the tool <Pl> - tool Obsolete)#"  , py::arg("Pl"))
        .def("Init2",
             (void (BRepAlgoAPI_Section::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const opencascade::handle<Geom_Surface> &  ) >(&BRepAlgoAPI_Section::Init2),
             R"#(initialize the tool <Sf> - tool Obsolete)#"  , py::arg("Sf"))
        .def("Approximation",
             (void (BRepAlgoAPI_Section::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const Standard_Boolean  ) >(&BRepAlgoAPI_Section::Approximation),
             R"#(None)#"  , py::arg("B"))
        .def("ComputePCurveOn1",
             (void (BRepAlgoAPI_Section::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const Standard_Boolean  ) >(&BRepAlgoAPI_Section::ComputePCurveOn1),
             R"#(Indicates whether the P-Curve should be (or not) performed on the argument. By default, no parametric 2D curve (pcurve) is defined for the edges of the result. If ComputePCurve1 equals true, further computations performed to attach an P-Curve in the parametric space of the argument to the constructed edges. Obsolete)#"  , py::arg("B"))
        .def("ComputePCurveOn2",
             (void (BRepAlgoAPI_Section::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgoAPI_Section::*)( const Standard_Boolean  ) >(&BRepAlgoAPI_Section::ComputePCurveOn2),
             R"#(Indicates whether the P-Curve should be (or not) performed on the tool. By default, no parametric 2D curve (pcurve) is defined for the edges of the result. If ComputePCurve1 equals true, further computations performed to attach an P-Curve in the parametric space of the tool to the constructed edges. Obsolete)#"  , py::arg("B"))
        .def("Build",
             (void (BRepAlgoAPI_Section::*)() ) static_cast<void (BRepAlgoAPI_Section::*)() >(&BRepAlgoAPI_Section::Build),
             R"#(Performs the algorithm Filling interference Data Structure (if it is necessary) Building the result of the operation.)#" )
        .def("HasAncestorFaceOn1",
             (Standard_Boolean (BRepAlgoAPI_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgoAPI_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const>(&BRepAlgoAPI_Section::HasAncestorFaceOn1),
             R"#(get the face of the first part giving section edge <E>. Returns True on the 3 following conditions : 1/ <E> is an edge returned by the Shape() metwod. 2/ First part of section performed is a shape. 3/ <E> is built on a intersection curve (i.e <E> is not the result of common edges) When False, F remains untouched. Obsolete)#"  , py::arg("E"),  py::arg("F"))
        .def("HasAncestorFaceOn2",
             (Standard_Boolean (BRepAlgoAPI_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgoAPI_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const>(&BRepAlgoAPI_Section::HasAncestorFaceOn2),
             R"#(Identifies the ancestor faces of the intersection edge E resulting from the last computation performed in this framework, that is, the faces of the two original shapes on which the edge E lies: - HasAncestorFaceOn1 gives the ancestor face in the first shape, and - HasAncestorFaceOn2 gives the ancestor face in the second shape. These functions return true if an ancestor face F is found, or false if not. An ancestor face is identifiable for the edge E if the following conditions are satisfied: - the first part on which this algorithm performed its last computation is a shape, that is, it was not given as a surface or a plane at the time of construction of this algorithm or at a later time by the Init1 function, - E is one of the elementary edges built by the last computation of this section algorithm. To use these functions properly, you have to test the returned Boolean value before using the ancestor face: F is significant only if the returned Boolean value equals true. Obsolete)#"  , py::arg("E"),  py::arg("F"))
;


    static_cast<py::class_<BRepAlgoAPI_Cut ,std::unique_ptr<BRepAlgoAPI_Cut>  , BRepAlgoAPI_BooleanOperation >>(m.attr("BRepAlgoAPI_Cut"))
        .def(py::init<  >()  )
        .def(py::init< const BOPAlgo_PaveFiller & >()  , py::arg("PF") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const BOPAlgo_PaveFiller &,const Standard_Boolean >()  , py::arg("S1"),  py::arg("S2"),  py::arg("aDSF"),  py::arg("bFWD")=static_cast<const Standard_Boolean>(Standard_True) )
;


    static_cast<py::class_<BRepAlgoAPI_Splitter ,std::unique_ptr<BRepAlgoAPI_Splitter>  , BRepAlgoAPI_BuilderAlgo >>(m.attr("BRepAlgoAPI_Splitter"))
        .def(py::init<  >()  )
        .def(py::init< const BOPAlgo_PaveFiller & >()  , py::arg("thePF") )
        .def("Build",
             (void (BRepAlgoAPI_Splitter::*)() ) static_cast<void (BRepAlgoAPI_Splitter::*)() >(&BRepAlgoAPI_Splitter::Build),
             R"#(Performs the algorithm. Performs the intersection of the objects with tools and build the result of the operation.)#" )
        .def("SetTools",
             (void (BRepAlgoAPI_Splitter::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgoAPI_Splitter::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgoAPI_Splitter::SetTools),
             R"#(Sets the tools)#"  , py::arg("theLS"))
        .def("Tools",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Splitter::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Splitter::*)() const>(&BRepAlgoAPI_Splitter::Tools),
             R"#(Gets the tools)#" )
;

// functions
// ./opencascade/BRepAlgoAPI_Check.hxx
// ./opencascade/BRepAlgoAPI_Algo.hxx
// ./opencascade/BRepAlgoAPI_Fuse.hxx
// ./opencascade/BRepAlgoAPI_Cut.hxx
// ./opencascade/BRepAlgoAPI_Defeaturing.hxx
// ./opencascade/BRepAlgoAPI_Section.hxx
// ./opencascade/BRepAlgoAPI_BooleanOperation.hxx
// ./opencascade/BRepAlgoAPI_Splitter.hxx
// ./opencascade/BRepAlgoAPI_BuilderAlgo.hxx
// ./opencascade/BRepAlgoAPI_Common.hxx

// operators

// register typdefs
// ./opencascade/BRepAlgoAPI_Check.hxx
// ./opencascade/BRepAlgoAPI_Algo.hxx
// ./opencascade/BRepAlgoAPI_Fuse.hxx
// ./opencascade/BRepAlgoAPI_Cut.hxx
// ./opencascade/BRepAlgoAPI_Defeaturing.hxx
// ./opencascade/BRepAlgoAPI_Section.hxx
// ./opencascade/BRepAlgoAPI_BooleanOperation.hxx
// ./opencascade/BRepAlgoAPI_Splitter.hxx
// ./opencascade/BRepAlgoAPI_BuilderAlgo.hxx
// ./opencascade/BRepAlgoAPI_Common.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
