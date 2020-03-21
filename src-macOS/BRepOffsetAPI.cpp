
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Pln.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <Law_Function.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepOffsetAPI_DraftAngle.hxx>
#include <BRepOffsetAPI_FindContigousEdges.hxx>
#include <BRepOffsetAPI_MakeDraft.hxx>
#include <BRepOffsetAPI_MakeEvolved.hxx>
#include <BRepOffsetAPI_MakeFilling.hxx>
#include <BRepOffsetAPI_MakeOffset.hxx>
#include <BRepOffsetAPI_MakeOffsetShape.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <BRepOffsetAPI_MakePipeShell.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_MiddlePath.hxx>
#include <BRepOffsetAPI_NormalProjection.hxx>
#include <BRepOffsetAPI_SequenceOfSequenceOfReal.hxx>
#include <BRepOffsetAPI_SequenceOfSequenceOfShape.hxx>
#include <BRepOffsetAPI_Sewing.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>

// template related includes
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfShape.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepOffsetAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepOffsetAPI"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepOffsetAPI_DraftAngle , shared_ptr<BRepOffsetAPI_DraftAngle> , BRepBuilderAPI_ModifyShape>>(m.attr("BRepOffsetAPI_DraftAngle"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_DraftAngle::*)() ) static_cast<void (BRepOffsetAPI_DraftAngle::*)() >(&BRepOffsetAPI_DraftAngle::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_DraftAngle::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_DraftAngle::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepOffsetAPI_DraftAngle::*)( const TopoDS_Shape & ) const>(&BRepOffsetAPI_DraftAngle::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>. S can correspond to the entire initial shape or to its subshape. Raises exceptions Standard_NoSuchObject if S is not the initial shape or a subshape of the initial shape to which the transformation has been applied.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_FindContigousEdges , shared_ptr<BRepOffsetAPI_FindContigousEdges> >>(m.attr("BRepOffsetAPI_FindContigousEdges"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakeDraft , shared_ptr<BRepOffsetAPI_MakeDraft> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_MakeDraft"))
    // constructors
    // custom constructors
    // methods
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeDraft::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeDraft::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_MakeDraft::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakeEvolved , shared_ptr<BRepOffsetAPI_MakeEvolved> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_MakeEvolved"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_MakeEvolved::*)() ) static_cast<void (BRepOffsetAPI_MakeEvolved::*)() >(&BRepOffsetAPI_MakeEvolved::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakeFilling , shared_ptr<BRepOffsetAPI_MakeFilling> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_MakeFilling"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_MakeFilling::*)() ) static_cast<void (BRepOffsetAPI_MakeFilling::*)() >(&BRepOffsetAPI_MakeFilling::Build),
             R"#(Builds the resulting faces)#" )
        .def("IsDone",
             (Standard_Boolean (BRepOffsetAPI_MakeFilling::*)() const) static_cast<Standard_Boolean (BRepOffsetAPI_MakeFilling::*)() const>(&BRepOffsetAPI_MakeFilling::IsDone),
             R"#(Tests whether computation of the filling plate has been completed.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeFilling::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_MakeFilling::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakeOffset , shared_ptr<BRepOffsetAPI_MakeOffset> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_MakeOffset"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_MakeOffset::*)() ) static_cast<void (BRepOffsetAPI_MakeOffset::*)() >(&BRepOffsetAPI_MakeOffset::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffset::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_MakeOffset::Generated),
             R"#(returns a list of the created shapes from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakeOffsetShape , shared_ptr<BRepOffsetAPI_MakeOffsetShape> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_MakeOffsetShape"))
    // constructors
    // custom constructors
    // methods
        .def("MakeOffset",
             (const BRepOffset_MakeOffset & (BRepOffsetAPI_MakeOffsetShape::*)() const) static_cast<const BRepOffset_MakeOffset & (BRepOffsetAPI_MakeOffsetShape::*)() const>(&BRepOffsetAPI_MakeOffsetShape::MakeOffset),
             R"#(Returns instance of the unrelying intersection / arc algorithm.)#" )
        .def("Build",
             (void (BRepOffsetAPI_MakeOffsetShape::*)() ) static_cast<void (BRepOffsetAPI_MakeOffsetShape::*)() >(&BRepOffsetAPI_MakeOffsetShape::Build),
             R"#(Does nothing.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeOffsetShape::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_MakeOffsetShape::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakePipe , shared_ptr<BRepOffsetAPI_MakePipe> , BRepPrimAPI_MakeSweep>>(m.attr("BRepOffsetAPI_MakePipe"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_MakePipe::*)() ) static_cast<void (BRepOffsetAPI_MakePipe::*)() >(&BRepOffsetAPI_MakePipe::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("FirstShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() >(&BRepOffsetAPI_MakePipe::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the prism.)#" )
        .def("LastShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipe::*)() >(&BRepOffsetAPI_MakePipe::LastShape),
             R"#(Returns the TopoDS Shape of the top of the prism.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakePipe::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakePipe::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_MakePipe::Generated),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakePipeShell , shared_ptr<BRepOffsetAPI_MakePipeShell> , BRepPrimAPI_MakeSweep>>(m.attr("BRepOffsetAPI_MakePipeShell"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("FirstShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the sweep.)#" )
        .def("LastShape",
             (TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<TopoDS_Shape (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::LastShape),
             R"#(Returns the TopoDS Shape of the top of the sweep.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakePipeShell::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_MakePipeShell::Generated),
             R"#(Returns a list of new shapes generated from the shape S by the shell-generating algorithm. This function is redefined from BRepOffsetAPI_MakeShape::Generated. S can be an edge or a vertex of a given Profile (see methods Add).)#"  , py::arg("S"))
        .def("Profiles",
             (void (BRepOffsetAPI_MakePipeShell::*)( NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepOffsetAPI_MakePipeShell::*)( NCollection_List<TopoDS_Shape> & ) >(&BRepOffsetAPI_MakePipeShell::Profiles),
             R"#(Returns the list of original profiles)#"  , py::arg("theProfiles"))
        .def("Spine",
             (const TopoDS_Wire & (BRepOffsetAPI_MakePipeShell::*)() ) static_cast<const TopoDS_Wire & (BRepOffsetAPI_MakePipeShell::*)() >(&BRepOffsetAPI_MakePipeShell::Spine),
             R"#(Returns the spine)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MiddlePath , shared_ptr<BRepOffsetAPI_MiddlePath> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_MiddlePath"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_MiddlePath::*)() ) static_cast<void (BRepOffsetAPI_MiddlePath::*)() >(&BRepOffsetAPI_MiddlePath::Build),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_NormalProjection , shared_ptr<BRepOffsetAPI_NormalProjection> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_NormalProjection"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_NormalProjection::*)() ) static_cast<void (BRepOffsetAPI_NormalProjection::*)() >(&BRepOffsetAPI_NormalProjection::Build),
             R"#(Builds the result of the projection as a compound of wires. Tries to build oriented wires.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepOffsetAPI_NormalProjection::*)() const) static_cast<Standard_Boolean (BRepOffsetAPI_NormalProjection::*)() const>(&BRepOffsetAPI_NormalProjection::IsDone),
             R"#(Returns true if the object was correctly built by the shape construction algorithm. If at the construction time of the shape, the algorithm cannot be completed, or the original data is corrupted, IsDone returns false and therefore protects the use of functions to access the result of the construction (typically the Shape function).)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_NormalProjection::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_NormalProjection::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_ThruSections , shared_ptr<BRepOffsetAPI_ThruSections> , BRepBuilderAPI_MakeShape>>(m.attr("BRepOffsetAPI_ThruSections"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_ThruSections::*)() ) static_cast<void (BRepOffsetAPI_ThruSections::*)() >(&BRepOffsetAPI_ThruSections::Build),
             R"#(None)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_ThruSections::Generated),
             R"#(Returns a list of new shapes generated from the shape S by the shell-generating algorithm. This function is redefined from BRepBuilderAPI_MakeShape::Generated. S can be an edge or a vertex of a given Profile (see methods AddWire and AddVertex).)#"  , py::arg("S"))
        .def("Wires",
             (const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)() const) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_ThruSections::*)() const>(&BRepOffsetAPI_ThruSections::Wires),
             R"#(Returns the list of original wires)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffsetAPI_MakeThickSolid , shared_ptr<BRepOffsetAPI_MakeThickSolid> , BRepOffsetAPI_MakeOffsetShape>>(m.attr("BRepOffsetAPI_MakeThickSolid"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffsetAPI_MakeThickSolid::*)() ) static_cast<void (BRepOffsetAPI_MakeThickSolid::*)() >(&BRepOffsetAPI_MakeThickSolid::Build),
             R"#(None)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepOffsetAPI_MakeThickSolid::*)( const TopoDS_Shape & ) >(&BRepOffsetAPI_MakeThickSolid::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepOffsetAPI_MakeOffset.hxx
// ./opencascade/BRepOffsetAPI_DraftAngle.hxx
// ./opencascade/BRepOffsetAPI_MakeThickSolid.hxx
// ./opencascade/BRepOffsetAPI_MakeEvolved.hxx
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx
// ./opencascade/BRepOffsetAPI_Sewing.hxx
// ./opencascade/BRepOffsetAPI_MakePipe.hxx
// ./opencascade/BRepOffsetAPI_MakeDraft.hxx
// ./opencascade/BRepOffsetAPI_ThruSections.hxx
// ./opencascade/BRepOffsetAPI_NormalProjection.hxx
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfShape.hxx
// ./opencascade/BRepOffsetAPI_MakePipeShell.hxx
// ./opencascade/BRepOffsetAPI_MiddlePath.hxx
// ./opencascade/BRepOffsetAPI_MakeFilling.hxx
// ./opencascade/BRepOffsetAPI_FindContigousEdges.hxx
// ./opencascade/BRepOffsetAPI_MakeOffsetShape.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<TColStd_SequenceOfReal>(m,"BRepOffsetAPI_SequenceOfSequenceOfReal");
    register_template_NCollection_Sequence<TopTools_SequenceOfShape>(m,"BRepOffsetAPI_SequenceOfSequenceOfShape");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
