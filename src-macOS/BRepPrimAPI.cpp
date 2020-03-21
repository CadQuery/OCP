
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
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
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
    // custom constructors
    // methods
        .def("Build",
             (void (BRepPrimAPI_MakeBox::*)() ) static_cast<void (BRepPrimAPI_MakeBox::*)() >(&BRepPrimAPI_MakeBox::Build),
             R"#(Stores the solid in myShape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeHalfSpace , shared_ptr<BRepPrimAPI_MakeHalfSpace> , BRepBuilderAPI_MakeShape>>(m.attr("BRepPrimAPI_MakeHalfSpace"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
        .def("Build",
             (void (BRepPrimAPI_MakeWedge::*)() ) static_cast<void (BRepPrimAPI_MakeWedge::*)() >(&BRepPrimAPI_MakeWedge::Build),
             R"#(Stores the solid in myShape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeCone , shared_ptr<BRepPrimAPI_MakeCone> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeCone"))
    // constructors
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeCone::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeCone::*)() >(&BRepPrimAPI_MakeCone::OneAxis),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeCylinder , shared_ptr<BRepPrimAPI_MakeCylinder> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeCylinder"))
    // constructors
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeCylinder::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeCylinder::*)() >(&BRepPrimAPI_MakeCylinder::OneAxis),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakePrism , shared_ptr<BRepPrimAPI_MakePrism> , BRepPrimAPI_MakeSweep>>(m.attr("BRepPrimAPI_MakePrism"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeRevol , shared_ptr<BRepPrimAPI_MakeRevol> , BRepPrimAPI_MakeSweep>>(m.attr("BRepPrimAPI_MakeRevol"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeRevolution , shared_ptr<BRepPrimAPI_MakeRevolution> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeRevolution"))
    // constructors
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeRevolution::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeRevolution::*)() >(&BRepPrimAPI_MakeRevolution::OneAxis),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeSphere , shared_ptr<BRepPrimAPI_MakeSphere> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeSphere"))
    // constructors
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeSphere::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeSphere::*)() >(&BRepPrimAPI_MakeSphere::OneAxis),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrimAPI_MakeTorus , shared_ptr<BRepPrimAPI_MakeTorus> , BRepPrimAPI_MakeOneAxis>>(m.attr("BRepPrimAPI_MakeTorus"))
    // constructors
    // custom constructors
    // methods
        .def("OneAxis",
             (Standard_Address (BRepPrimAPI_MakeTorus::*)() ) static_cast<Standard_Address (BRepPrimAPI_MakeTorus::*)() >(&BRepPrimAPI_MakeTorus::OneAxis),
             R"#(Returns the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepPrimAPI_MakeSweep.hxx
// ./opencascade/BRepPrimAPI_MakeTorus.hxx
// ./opencascade/BRepPrimAPI_MakePrism.hxx
// ./opencascade/BRepPrimAPI_MakeRevol.hxx
// ./opencascade/BRepPrimAPI_MakeWedge.hxx
// ./opencascade/BRepPrimAPI_MakeBox.hxx
// ./opencascade/BRepPrimAPI_MakeCone.hxx
// ./opencascade/BRepPrimAPI_MakeCylinder.hxx
// ./opencascade/BRepPrimAPI_MakeSphere.hxx
// ./opencascade/BRepPrimAPI_MakeOneAxis.hxx
// ./opencascade/BRepPrimAPI_MakeRevolution.hxx
// ./opencascade/BRepPrimAPI_MakeHalfSpace.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
