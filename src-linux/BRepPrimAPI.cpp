
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
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>

// module includes
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCone.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepPrimAPI_MakeHalfSpace.hxx>
#include <BRepPrimAPI_MakeOneAxis.hxx>
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include <BRepPrimAPI_MakeRevolution.hxx>
#include <BRepPrimAPI_MakeSphere.hxx>
#include <BRepPrimAPI_MakeSweep.hxx>
#include <BRepPrimAPI_MakeTorus.hxx>
#include <BRepPrimAPI_MakeWedge.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepPrimAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepPrimAPI"));


//Python trampoline classes
    class Py_BRepPrimAPI_MakeOneAxis : public BRepPrimAPI_MakeOneAxis{
    public:
        using BRepPrimAPI_MakeOneAxis::BRepPrimAPI_MakeOneAxis;


        // public pure virtual
        Standard_Address OneAxis() override { PYBIND11_OVERLOAD_PURE(Standard_Address,BRepPrimAPI_MakeOneAxis,OneAxis,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_BRepPrimAPI_MakeSweep : public BRepPrimAPI_MakeSweep{
    public:
        using BRepPrimAPI_MakeSweep::BRepPrimAPI_MakeSweep;


        // public pure virtual
        TopoDS_Shape FirstShape() override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepPrimAPI_MakeSweep,FirstShape,) };
        TopoDS_Shape LastShape() override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepPrimAPI_MakeSweep,LastShape,) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<BRepPrimAPI_MakeBox , shared_ptr<BRepPrimAPI_MakeBox> , BRepBuilderAPI_MakeShape>>(m.attr("BRepPrimAPI_MakeBox"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("dx"),  py::arg("dy"),  py::arg("dz") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz") )
    // custom constructors
    // methods
        .def("Wedge",
             (BRepPrim_Wedge & (BRepPrimAPI_MakeBox::*)() ) static_cast<BRepPrim_Wedge & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::Wedge),
             R"#(Returns the internal algorithm.)#" )
        .def("Build",
             (void (BRepPrimAPI_MakeBox::*)() ) static_cast<void (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::Build),
             R"#(Stores the solid in myShape.)#" )
        .def("Shell",
             (const TopoDS_Shell & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Shell & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::Shell),
             R"#(Returns the constructed box as a shell.)#" )
        .def("Solid",
             (const TopoDS_Solid & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Solid & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::Solid),
             R"#(Returns the constructed box as a solid.)#" )
        .def("BottomFace",
             (const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::BottomFace),
             R"#(Returns ZMin face)#" )
        .def("BackFace",
             (const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::BackFace),
             R"#(Returns XMin face)#" )
        .def("FrontFace",
             (const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::FrontFace),
             R"#(Returns XMax face)#" )
        .def("LeftFace",
             (const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::LeftFace),
             R"#(Returns YMin face)#" )
        .def("RightFace",
             (const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::RightFace),
             R"#(Returns YMax face)#" )
        .def("TopFace",
             (const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() ) static_cast<const TopoDS_Face & (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::TopFace),
             R"#(Returns ZMax face)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeHalfSpace , shared_ptr<BRepPrimAPI_MakeHalfSpace> , BRepBuilderAPI_MakeShape>>(m.attr("BRepPrimAPI_MakeHalfSpace"))
    // constructors
        .def(py::init< const TopoDS_Face &,const gp_Pnt & >()  , py::arg("Face"),  py::arg("RefPnt") )
        .def(py::init< const TopoDS_Shell &,const gp_Pnt & >()  , py::arg("Shell"),  py::arg("RefPnt") )
    // custom constructors
    // methods
        .def("Solid",
             (const TopoDS_Solid & (BRepPrimAPI_MakeHalfSpace::*)() const) static_cast<const TopoDS_Solid & (BRepPrimAPI_MakeHalfSpace::*)() const>(&BRepPrimAPI_MakeHalfSpace::Solid),
             R"#(Returns the constructed half-space as a solid.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeOneAxis , shared_ptr<BRepPrimAPI_MakeOneAxis>,Py_BRepPrimAPI_MakeOneAxis , BRepBuilderAPI_MakeShape>>(m.attr("BRepPrimAPI_MakeOneAxis"))
    // constructors
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeOneAxis::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeOneAxis::*)() >(&BRepPrimAPI_MakeOneAxis::OneAxis),
             R"#(The inherited commands should provide the algorithm. Returned as a pointer.)#" )
        .def("Build",
             (void (BRepPrimAPI_MakeOneAxis::*)() ) static_cast<void (BRepPrimAPI_MakeOneAxis::*)() >(&BRepPrimAPI_MakeOneAxis::Build),
             R"#(Stores the solid in myShape.)#" )
        .def("Face",
             (const TopoDS_Face & (BRepPrimAPI_MakeOneAxis::*)() ) static_cast<const TopoDS_Face & (BRepPrimAPI_MakeOneAxis::*)() >(&BRepPrimAPI_MakeOneAxis::Face),
             R"#(Returns the lateral face of the rotational primitive.)#" )
        .def("Shell",
             (const TopoDS_Shell & (BRepPrimAPI_MakeOneAxis::*)() ) static_cast<const TopoDS_Shell & (BRepPrimAPI_MakeOneAxis::*)() >(&BRepPrimAPI_MakeOneAxis::Shell),
             R"#(Returns the constructed rotational primitive as a shell.)#" )
        .def("Solid",
             (const TopoDS_Solid & (BRepPrimAPI_MakeOneAxis::*)() ) static_cast<const TopoDS_Solid & (BRepPrimAPI_MakeOneAxis::*)() >(&BRepPrimAPI_MakeOneAxis::Solid),
             R"#(Returns the constructed rotational primitive as a solid.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeSweep , shared_ptr<BRepPrimAPI_MakeSweep>,Py_BRepPrimAPI_MakeSweep , BRepBuilderAPI_MakeShape>>(m.attr("BRepPrimAPI_MakeSweep"))
    // constructors
    // custom constructors
    // methods
        .def("FirstShape",
             (TopoDS_Shape (BRepPrimAPI_MakeSweep::*)() ) static_cast<TopoDS_Shape (BRepPrimAPI_MakeSweep::*)() >(&BRepPrimAPI_MakeSweep::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the sweep.)#" )
        .def("LastShape",
             (TopoDS_Shape (BRepPrimAPI_MakeSweep::*)() ) static_cast<TopoDS_Shape (BRepPrimAPI_MakeSweep::*)() >(&BRepPrimAPI_MakeSweep::LastShape),
             R"#(Returns the TopoDS Shape of the top of the sweep.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeWedge , shared_ptr<BRepPrimAPI_MakeWedge> , BRepBuilderAPI_MakeShape>>(m.attr("BRepPrimAPI_MakeWedge"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("dx"),  py::arg("dy"),  py::arg("dz"),  py::arg("ltx") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz"),  py::arg("ltx") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("dx"),  py::arg("dy"),  py::arg("dz"),  py::arg("xmin"),  py::arg("zmin"),  py::arg("xmax"),  py::arg("zmax") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz"),  py::arg("xmin"),  py::arg("zmin"),  py::arg("xmax"),  py::arg("zmax") )
    // custom constructors
    // methods
        .def("Wedge",
             (BRepPrim_Wedge & (BRepPrimAPI_MakeWedge::*)() ) static_cast<BRepPrim_Wedge & (BRepPrimAPI_MakeWedge::*)() >(&BRepPrimAPI_MakeWedge::Wedge),
             R"#(Returns the internal algorithm.)#" )
        .def("Build",
             (void (BRepPrimAPI_MakeWedge::*)() ) static_cast<void (BRepPrimAPI_MakeWedge::*)() >(&BRepPrimAPI_MakeWedge::Build),
             R"#(Stores the solid in myShape.)#" )
        .def("Shell",
             (const TopoDS_Shell & (BRepPrimAPI_MakeWedge::*)() ) static_cast<const TopoDS_Shell & (BRepPrimAPI_MakeWedge::*)() >(&BRepPrimAPI_MakeWedge::Shell),
             R"#(Returns the constructed box in the form of a shell.)#" )
        .def("Solid",
             (const TopoDS_Solid & (BRepPrimAPI_MakeWedge::*)() ) static_cast<const TopoDS_Solid & (BRepPrimAPI_MakeWedge::*)() >(&BRepPrimAPI_MakeWedge::Solid),
             R"#(Returns the constructed box in the form of a solid.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeCone , shared_ptr<BRepPrimAPI_MakeCone> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeCone"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R1"),  py::arg("R2"),  py::arg("H") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R1"),  py::arg("R2"),  py::arg("H"),  py::arg("angle") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R1"),  py::arg("R2"),  py::arg("H") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R1"),  py::arg("R2"),  py::arg("H"),  py::arg("angle") )
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeCone::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeCone::*)() >(&BRepPrimAPI_MakeCone::OneAxis),
             R"#(Returns the algorithm.)#" )
        .def("Cone",
             (BRepPrim_Cone & (BRepPrimAPI_MakeCone::*)() ) static_cast<BRepPrim_Cone & (BRepPrimAPI_MakeCone::*)() >(&BRepPrimAPI_MakeCone::Cone),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeCylinder , shared_ptr<BRepPrimAPI_MakeCylinder> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeCylinder"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("R"),  py::arg("H") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R"),  py::arg("H"),  py::arg("Angle") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R"),  py::arg("H") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R"),  py::arg("H"),  py::arg("Angle") )
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeCylinder::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeCylinder::*)() >(&BRepPrimAPI_MakeCylinder::OneAxis),
             R"#(Returns the algorithm.)#" )
        .def("Cylinder",
             (BRepPrim_Cylinder & (BRepPrimAPI_MakeCylinder::*)() ) static_cast<BRepPrim_Cylinder & (BRepPrimAPI_MakeCylinder::*)() >(&BRepPrimAPI_MakeCylinder::Cylinder),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakePrism , shared_ptr<BRepPrimAPI_MakePrism> , BRepPrimAPI_MakeSweep>>(m.attr("BRepPrimAPI_MakePrism"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const gp_Vec &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("V"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Canonize")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const gp_Dir &,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("D"),  py::arg("Inf")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Canonize")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Prism",
             (const BRepSweep_Prism & (BRepPrimAPI_MakePrism::*)() const) static_cast<const BRepSweep_Prism & (BRepPrimAPI_MakePrism::*)() const>(&BRepPrimAPI_MakePrism::Prism),
             R"#(Returns the internal sweeping algorithm.)#" )
        .def("Build",
             (void (BRepPrimAPI_MakePrism::*)() ) static_cast<void (BRepPrimAPI_MakePrism::*)() >(&BRepPrimAPI_MakePrism::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("FirstShape",
             (TopoDS_Shape (BRepPrimAPI_MakePrism::*)() ) static_cast<TopoDS_Shape (BRepPrimAPI_MakePrism::*)() >(&BRepPrimAPI_MakePrism::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the prism.)#" )
        .def("LastShape",
             (TopoDS_Shape (BRepPrimAPI_MakePrism::*)() ) static_cast<TopoDS_Shape (BRepPrimAPI_MakePrism::*)() >(&BRepPrimAPI_MakePrism::LastShape),
             R"#(Returns the TopoDS Shape of the top of the prism. In the case of a finite prism, FirstShape returns the basis of the prism, in other words, S if Copy is false; otherwise, the copy of S belonging to the prism. LastShape returns the copy of S translated by V at the time of construction.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakePrism::Generated),
             R"#(Returns ListOfShape from TopTools.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakePrism::IsDeleted),
             R"#(Returns true if the shape S has been deleted.)#"  , py::arg("S"))
        .def("FirstShape",
             (TopoDS_Shape (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakePrism::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the prism. generated with theShape (subShape of the generating shape).)#"  , py::arg("theShape"))
        .def("LastShape",
             (TopoDS_Shape (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (BRepPrimAPI_MakePrism::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakePrism::LastShape),
             R"#(Returns the TopoDS Shape of the top of the prism. generated with theShape (subShape of the generating shape).)#"  , py::arg("theShape"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeRevol , shared_ptr<BRepPrimAPI_MakeRevol> , BRepPrimAPI_MakeSweep>>(m.attr("BRepPrimAPI_MakeRevol"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const gp_Ax1 &,const Standard_Real,const Standard_Boolean >()  , py::arg("S"),  py::arg("A"),  py::arg("D"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Shape &,const gp_Ax1 &,const Standard_Boolean >()  , py::arg("S"),  py::arg("A"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Revol",
             (const BRepSweep_Revol & (BRepPrimAPI_MakeRevol::*)() const) static_cast<const BRepSweep_Revol & (BRepPrimAPI_MakeRevol::*)() const>(&BRepPrimAPI_MakeRevol::Revol),
             R"#(Returns the internal sweeping algorithm.)#" )
        .def("Build",
             (void (BRepPrimAPI_MakeRevol::*)() ) static_cast<void (BRepPrimAPI_MakeRevol::*)() >(&BRepPrimAPI_MakeRevol::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("FirstShape",
             (TopoDS_Shape (BRepPrimAPI_MakeRevol::*)() ) static_cast<TopoDS_Shape (BRepPrimAPI_MakeRevol::*)() >(&BRepPrimAPI_MakeRevol::FirstShape),
             R"#(Returns the first shape of the revol (coinciding with the generating shape).)#" )
        .def("LastShape",
             (TopoDS_Shape (BRepPrimAPI_MakeRevol::*)() ) static_cast<TopoDS_Shape (BRepPrimAPI_MakeRevol::*)() >(&BRepPrimAPI_MakeRevol::LastShape),
             R"#(Returns the TopoDS Shape of the end of the revol.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakeRevol::Generated),
             R"#(Returns list of shape generated from shape S Warning: shape S must be shape of type VERTEX, EDGE, FACE, SOLID. For shapes of other types method always returns empty list)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakeRevol::IsDeleted),
             R"#(Returns true if the shape S has been deleted.)#"  , py::arg("S"))
        .def("FirstShape",
             (TopoDS_Shape (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakeRevol::FirstShape),
             R"#(Returns the TopoDS Shape of the beginning of the revolution, generated with theShape (subShape of the generating shape).)#"  , py::arg("theShape"))
        .def("LastShape",
             (TopoDS_Shape (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (BRepPrimAPI_MakeRevol::*)( const TopoDS_Shape & ) >(&BRepPrimAPI_MakeRevol::LastShape),
             R"#(Returns the TopoDS Shape of the end of the revolution, generated with theShape (subShape of the generating shape).)#"  , py::arg("theShape"))
        .def("HasDegenerated",
             (Standard_Boolean (BRepPrimAPI_MakeRevol::*)() const) static_cast<Standard_Boolean (BRepPrimAPI_MakeRevol::*)() const>(&BRepPrimAPI_MakeRevol::HasDegenerated),
             R"#(Check if there are degenerated edges in the result.)#" )
        .def("Degenerated",
             (const TopTools_ListOfShape & (BRepPrimAPI_MakeRevol::*)() const) static_cast<const TopTools_ListOfShape & (BRepPrimAPI_MakeRevol::*)() const>(&BRepPrimAPI_MakeRevol::Degenerated),
             R"#(Returns the list of degenerated edges)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeRevolution , shared_ptr<BRepPrimAPI_MakeRevolution> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeRevolution"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> & >()  , py::arg("Meridian") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real >()  , py::arg("Meridian"),  py::arg("angle") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("Meridian"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Meridian"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("angle") )
        .def(py::init< const gp_Ax2 &,const opencascade::handle<Geom_Curve> & >()  , py::arg("Axes"),  py::arg("Meridian") )
        .def(py::init< const gp_Ax2 &,const opencascade::handle<Geom_Curve> &,const Standard_Real >()  , py::arg("Axes"),  py::arg("Meridian"),  py::arg("angle") )
        .def(py::init< const gp_Ax2 &,const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("Meridian"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Ax2 &,const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("Meridian"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("angle") )
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeRevolution::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeRevolution::*)() >(&BRepPrimAPI_MakeRevolution::OneAxis),
             R"#(Returns the algorithm.)#" )
        .def("Revolution",
             (BRepPrim_Revolution & (BRepPrimAPI_MakeRevolution::*)() ) static_cast<BRepPrim_Revolution & (BRepPrimAPI_MakeRevolution::*)() >(&BRepPrimAPI_MakeRevolution::Revolution),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeSphere , shared_ptr<BRepPrimAPI_MakeSphere> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeSphere"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("R") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("R"),  py::arg("angle") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R"),  py::arg("angle1"),  py::arg("angle2") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R"),  py::arg("angle1"),  py::arg("angle2"),  py::arg("angle3") )
        .def(py::init< const gp_Pnt &,const Standard_Real >()  , py::arg("Center"),  py::arg("R") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("Center"),  py::arg("R"),  py::arg("angle") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Center"),  py::arg("R"),  py::arg("angle1"),  py::arg("angle2") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Center"),  py::arg("R"),  py::arg("angle1"),  py::arg("angle2"),  py::arg("angle3") )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("Axis"),  py::arg("R") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("Axis"),  py::arg("R"),  py::arg("angle") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axis"),  py::arg("R"),  py::arg("angle1"),  py::arg("angle2") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axis"),  py::arg("R"),  py::arg("angle1"),  py::arg("angle2"),  py::arg("angle3") )
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeSphere::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeSphere::*)() >(&BRepPrimAPI_MakeSphere::OneAxis),
             R"#(Returns the algorithm.)#" )
        .def("Sphere",
             (BRepPrim_Sphere & (BRepPrimAPI_MakeSphere::*)() ) static_cast<BRepPrim_Sphere & (BRepPrimAPI_MakeSphere::*)() >(&BRepPrimAPI_MakeSphere::Sphere),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeTorus , shared_ptr<BRepPrimAPI_MakeTorus> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeTorus"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("R1"),  py::arg("R2") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R1"),  py::arg("R2"),  py::arg("angle") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R1"),  py::arg("R2"),  py::arg("angle1"),  py::arg("angle2") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R1"),  py::arg("R2"),  py::arg("angle1"),  py::arg("angle2"),  py::arg("angle") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R1"),  py::arg("R2") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R1"),  py::arg("R2"),  py::arg("angle") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R1"),  py::arg("R2"),  py::arg("angle1"),  py::arg("angle2") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R1"),  py::arg("R2"),  py::arg("angle1"),  py::arg("angle2"),  py::arg("angle") )
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeTorus::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeTorus::*)() >(&BRepPrimAPI_MakeTorus::OneAxis),
             R"#(Returns the algorithm.)#" )
        .def("Torus",
             (BRepPrim_Torus & (BRepPrimAPI_MakeTorus::*)() ) static_cast<BRepPrim_Torus & (BRepPrimAPI_MakeTorus::*)() >(&BRepPrimAPI_MakeTorus::Torus),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepPrimAPI_MakeSphere.hxx
// ./opencascade/BRepPrimAPI_MakeTorus.hxx
// ./opencascade/BRepPrimAPI_MakeBox.hxx
// ./opencascade/BRepPrimAPI_MakeOneAxis.hxx
// ./opencascade/BRepPrimAPI_MakeRevolution.hxx
// ./opencascade/BRepPrimAPI_MakeWedge.hxx
// ./opencascade/BRepPrimAPI_MakeCylinder.hxx
// ./opencascade/BRepPrimAPI_MakeRevol.hxx
// ./opencascade/BRepPrimAPI_MakeCone.hxx
// ./opencascade/BRepPrimAPI_MakeHalfSpace.hxx
// ./opencascade/BRepPrimAPI_MakePrism.hxx
// ./opencascade/BRepPrimAPI_MakeSweep.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
