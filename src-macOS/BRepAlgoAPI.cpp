
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <Message_ProgressIndicator.hxx>

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


    static_cast<py::class_<BRepAlgoAPI_Algo , shared_ptr_nodelete<BRepAlgoAPI_Algo> , BRepBuilderAPI_MakeShape>>(m.attr("BRepAlgoAPI_Algo"))
    // constructors
    // custom constructors
    // methods
        .def("Shape",
             (const TopoDS_Shape & (BRepAlgoAPI_Algo::*)() ) static_cast<const TopoDS_Shape & (BRepAlgoAPI_Algo::*)() >(&BRepAlgoAPI_Algo::Shape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_Check , shared_ptr<BRepAlgoAPI_Check> , BOPAlgo_Options>>(m.attr("BRepAlgoAPI_Check"))
    // constructors
    // custom constructors
    // methods
        .def("SetData",
             (void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) >(&BRepAlgoAPI_Check::SetData),
             R"#(Initializes the algorithm with single shape.)#"  , py::arg("theS"),  py::arg("bTestSE")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("bTestSI")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetData",
             (void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & , const TopoDS_Shape & , const BOPAlgo_Operation , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepAlgoAPI_Check::*)( const TopoDS_Shape & , const TopoDS_Shape & , const BOPAlgo_Operation , const Standard_Boolean , const Standard_Boolean ) >(&BRepAlgoAPI_Check::SetData),
             R"#(Initializes the algorithm with couple of shapes. Additionally to the validity checks of each given shape, the types of the given shapes will be checked on validity for Boolean operation of given type.)#"  , py::arg("theS1"),  py::arg("theS2"),  py::arg("theOp")=static_cast<const BOPAlgo_Operation>(BOPAlgo_UNKNOWN),  py::arg("bTestSE")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("bTestSI")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsValid",
             (Standard_Boolean (BRepAlgoAPI_Check::*)() ) static_cast<Standard_Boolean (BRepAlgoAPI_Check::*)() >(&BRepAlgoAPI_Check::IsValid),
             R"#(Shows whether shape(s) valid or not.)#" )
        .def("Result",
             (const BOPAlgo_ListOfCheckResult & (BRepAlgoAPI_Check::*)() ) static_cast<const BOPAlgo_ListOfCheckResult & (BRepAlgoAPI_Check::*)() >(&BRepAlgoAPI_Check::Result),
             R"#(Returns faulty shapes.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_BuilderAlgo , shared_ptr<BRepAlgoAPI_BuilderAlgo> , BRepAlgoAPI_Algo>>(m.attr("BRepAlgoAPI_BuilderAlgo"))
    // constructors
    // custom constructors
    // methods
        .def("SetArguments",
             (void (BRepAlgoAPI_BuilderAlgo::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgoAPI_BuilderAlgo::SetArguments),
             R"#(Sets the arguments)#"  , py::arg("theLS"))
        .def("Arguments",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::Arguments),
             R"#(Gets the arguments)#" )
        .def("SetNonDestructive",
             (void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean ) >(&BRepAlgoAPI_BuilderAlgo::SetNonDestructive),
             R"#(Sets the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#"  , py::arg("theFlag"))
        .def("NonDestructive",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::NonDestructive),
             R"#(Returns the flag that defines the mode of treatment. In non-destructive mode the argument shapes are not modified. Instead a copy of a sub-shape is created in the result if it is needed to be updated.)#" )
        .def("SetGlue",
             (void (BRepAlgoAPI_BuilderAlgo::*)( const BOPAlgo_GlueEnum ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)( const BOPAlgo_GlueEnum ) >(&BRepAlgoAPI_BuilderAlgo::SetGlue),
             R"#(Sets the glue option for the algorithm, which allows increasing performance of the intersection of the input shapes.)#"  , py::arg("theGlue"))
        .def("Glue",
             (BOPAlgo_GlueEnum (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<BOPAlgo_GlueEnum (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::Glue),
             R"#(Returns the glue option of the algorithm)#" )
        .def("SetCheckInverted",
             (void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean ) >(&BRepAlgoAPI_BuilderAlgo::SetCheckInverted),
             R"#(Enables/Disables the check of the input solids for inverted status)#"  , py::arg("theCheck"))
        .def("CheckInverted",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::CheckInverted),
             R"#(Returns the flag defining whether the check for input solids on inverted status should be performed or not.)#" )
        .def("Build",
             (void (BRepAlgoAPI_BuilderAlgo::*)() ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)() >(&BRepAlgoAPI_BuilderAlgo::Build),
             R"#(Performs the algorithm)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_BuilderAlgo::Modified),
             R"#(Returns the shapes modified from the shape <theS>. If any, the list will contain only those splits of the given shape, contained in the result.)#"  , py::arg("theS"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_BuilderAlgo::Generated),
             R"#(Returns the list of shapes generated from the shape <theS>. In frames of Boolean Operations algorithms only Edges and Faces could have Generated elements, as only they produce new elements during intersection: - Edges can generate new vertices; - Faces can generate new edges and vertices.)#"  , py::arg("theS"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_BuilderAlgo::IsDeleted),
             R"#(Checks if the shape <theS> has been completely removed from the result, i.e. the result does not contain the shape itself and any of its splits. Returns TRUE if the shape has been deleted.)#"  , py::arg("aS"))
        .def("HasModified",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::HasModified),
             R"#(Returns true if any of the input shapes has been modified during operation.)#" )
        .def("HasGenerated",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::HasGenerated),
             R"#(Returns true if any of the input shapes has generated shapes during operation.)#" )
        .def("HasDeleted",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::HasDeleted),
             R"#(Returns true if any of the input shapes has been deleted during operation. Normally, General Fuse operation should not have Deleted elements, but all derived operation can have.)#" )
        .def("SetToFillHistory",
             (void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgoAPI_BuilderAlgo::*)( const Standard_Boolean ) >(&BRepAlgoAPI_BuilderAlgo::SetToFillHistory),
             R"#(Allows disabling the history collection)#"  , py::arg("theHistFlag"))
        .def("HasHistory",
             (Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::HasHistory),
             R"#(Returns flag of history availability)#" )
        .def("DSFiller",
             (const BOPAlgo_PPaveFiller & (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<const BOPAlgo_PPaveFiller & (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::DSFiller),
             R"#(Returns the Intersection tool)#" )
        .def("History",
             (opencascade::handle<BRepTools_History> (BRepAlgoAPI_BuilderAlgo::*)() const) static_cast<opencascade::handle<BRepTools_History> (BRepAlgoAPI_BuilderAlgo::*)() const>(&BRepAlgoAPI_BuilderAlgo::History),
             R"#(History tool)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_Defeaturing , shared_ptr<BRepAlgoAPI_Defeaturing> , BRepAlgoAPI_Algo>>(m.attr("BRepAlgoAPI_Defeaturing"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetShape",
             (void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_Defeaturing::SetShape),
             R"#(Sets the shape for processing.)#"  , py::arg("theShape"))
        .def("InputShape",
             (const TopoDS_Shape & (BRepAlgoAPI_Defeaturing::*)() const) static_cast<const TopoDS_Shape & (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::InputShape),
             R"#(Returns the input shape)#" )
        .def("AddFaceToRemove",
             (void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_Defeaturing::AddFaceToRemove),
             R"#(Adds the features to remove from the input shape.)#"  , py::arg("theFace"))
        .def("AddFacesToRemove",
             (void (BRepAlgoAPI_Defeaturing::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgoAPI_Defeaturing::AddFacesToRemove),
             R"#(Adds the faces to remove from the input shape.)#"  , py::arg("theFaces"))
        .def("FacesToRemove",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::FacesToRemove),
             R"#(Returns the list of faces which have been requested for removal from the input shape.)#" )
        .def("Build",
             (void (BRepAlgoAPI_Defeaturing::*)() ) static_cast<void (BRepAlgoAPI_Defeaturing::*)() >(&BRepAlgoAPI_Defeaturing::Build),
             R"#(Performs the operation)#" )
        .def("SetToFillHistory",
             (void (BRepAlgoAPI_Defeaturing::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgoAPI_Defeaturing::*)( const Standard_Boolean ) >(&BRepAlgoAPI_Defeaturing::SetToFillHistory),
             R"#(Defines whether to track the modification of the shapes or not.)#"  , py::arg("theFlag"))
        .def("HasHistory",
             (Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::HasHistory),
             R"#(Returns whether the history was requested or not.)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_Defeaturing::Modified),
             R"#(Returns the list of shapes modified from the shape <theS> during the operation.)#"  , py::arg("theS"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_Defeaturing::Generated),
             R"#(Returns the list of shapes generated from the shape <theS> during the operation.)#"  , py::arg("theS"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepAlgoAPI_Defeaturing::*)( const TopoDS_Shape & ) >(&BRepAlgoAPI_Defeaturing::IsDeleted),
             R"#(Returns true if the shape <theS> has been deleted during the operation. It means that the shape has no any trace in the result. Otherwise it returns false.)#"  , py::arg("theS"))
        .def("HasModified",
             (Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::HasModified),
             R"#(Returns true if any of the input shapes has been modified during operation.)#" )
        .def("HasGenerated",
             (Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::HasGenerated),
             R"#(Returns true if any of the input shapes has generated shapes during operation.)#" )
        .def("HasDeleted",
             (Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const) static_cast<Standard_Boolean (BRepAlgoAPI_Defeaturing::*)() const>(&BRepAlgoAPI_Defeaturing::HasDeleted),
             R"#(Returns true if any of the input shapes has been deleted during operation.)#" )
        .def("History",
             (opencascade::handle<BRepTools_History> (BRepAlgoAPI_Defeaturing::*)() ) static_cast<opencascade::handle<BRepTools_History> (BRepAlgoAPI_Defeaturing::*)() >(&BRepAlgoAPI_Defeaturing::History),
             R"#(Returns the History of shapes modifications)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_BooleanOperation , shared_ptr<BRepAlgoAPI_BooleanOperation> , BRepAlgoAPI_BuilderAlgo>>(m.attr("BRepAlgoAPI_BooleanOperation"))
    // constructors
    // custom constructors
    // methods
        .def("Shape1",
             (const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Shape1),
             R"#(Returns the first argument involved in this Boolean operation. Obsolete)#" )
        .def("Shape2",
             (const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Shape2),
             R"#(Returns the second argument involved in this Boolean operation. Obsolete)#" )
        .def("SetTools",
             (void (BRepAlgoAPI_BooleanOperation::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgoAPI_BooleanOperation::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgoAPI_BooleanOperation::SetTools),
             R"#(Sets the Tool arguments)#"  , py::arg("theLS"))
        .def("Tools",
             (const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Tools),
             R"#(Returns the Tools arguments)#" )
        .def("SetOperation",
             (void (BRepAlgoAPI_BooleanOperation::*)( const BOPAlgo_Operation ) ) static_cast<void (BRepAlgoAPI_BooleanOperation::*)( const BOPAlgo_Operation ) >(&BRepAlgoAPI_BooleanOperation::SetOperation),
             R"#(Sets the type of Boolean operation)#"  , py::arg("theBOP"))
        .def("Operation",
             (BOPAlgo_Operation (BRepAlgoAPI_BooleanOperation::*)() const) static_cast<BOPAlgo_Operation (BRepAlgoAPI_BooleanOperation::*)() const>(&BRepAlgoAPI_BooleanOperation::Operation),
             R"#(Returns the type of Boolean Operation)#" )
        .def("Build",
             (void (BRepAlgoAPI_BooleanOperation::*)() ) static_cast<void (BRepAlgoAPI_BooleanOperation::*)() >(&BRepAlgoAPI_BooleanOperation::Build),
             R"#(Performs the Boolean operation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_Splitter , shared_ptr<BRepAlgoAPI_Splitter> , BRepAlgoAPI_BuilderAlgo>>(m.attr("BRepAlgoAPI_Splitter"))
    // constructors
    // custom constructors
    // methods
        .def("SetTools",
             (void (BRepAlgoAPI_Splitter::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgoAPI_Splitter::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgoAPI_Splitter::SetTools),
             R"#(Sets the Tool arguments)#"  , py::arg("theLS"))
        .def("Tools",
             (const TopTools_ListOfShape & (BRepAlgoAPI_Splitter::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgoAPI_Splitter::*)() const>(&BRepAlgoAPI_Splitter::Tools),
             R"#(Returns the Tool arguments)#" )
        .def("Build",
             (void (BRepAlgoAPI_Splitter::*)() ) static_cast<void (BRepAlgoAPI_Splitter::*)() >(&BRepAlgoAPI_Splitter::Build),
             R"#(Performs the Split operation. Performs the intersection of the argument shapes (both objects and tools) and splits objects by the tools.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_Common , shared_ptr<BRepAlgoAPI_Common> , BRepAlgoAPI_BooleanOperation>>(m.attr("BRepAlgoAPI_Common"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_Cut , shared_ptr<BRepAlgoAPI_Cut> , BRepAlgoAPI_BooleanOperation>>(m.attr("BRepAlgoAPI_Cut"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_Fuse , shared_ptr<BRepAlgoAPI_Fuse> , BRepAlgoAPI_BooleanOperation>>(m.attr("BRepAlgoAPI_Fuse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgoAPI_Section , shared_ptr<BRepAlgoAPI_Section> , BRepAlgoAPI_BooleanOperation>>(m.attr("BRepAlgoAPI_Section"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepAlgoAPI_Section::*)() ) static_cast<void (BRepAlgoAPI_Section::*)() >(&BRepAlgoAPI_Section::Build),
             R"#(Performs the algorithm Filling interference Data Structure (if it is necessary) Building the result of the operation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepAlgoAPI_BuilderAlgo.hxx
// ./opencascade/BRepAlgoAPI_BooleanOperation.hxx
// ./opencascade/BRepAlgoAPI_Defeaturing.hxx
// ./opencascade/BRepAlgoAPI_Fuse.hxx
// ./opencascade/BRepAlgoAPI_Section.hxx
// ./opencascade/BRepAlgoAPI_Common.hxx
// ./opencascade/BRepAlgoAPI_Cut.hxx
// ./opencascade/BRepAlgoAPI_Splitter.hxx
// ./opencascade/BRepAlgoAPI_Algo.hxx
// ./opencascade/BRepAlgoAPI_Check.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
