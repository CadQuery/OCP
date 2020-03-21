
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_SurfaceSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <BinTools.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <BinTools_LocationSetPtr.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_SurfaceSet.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinTools"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinTools , shared_ptr<BinTools>>(m,"BinTools");

    static_cast<py::class_<BinTools , shared_ptr<BinTools> >>(m.attr("BinTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinTools_Curve2dSet , shared_ptr<BinTools_Curve2dSet> >>(m.attr("BinTools_Curve2dSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinTools_CurveSet , shared_ptr<BinTools_CurveSet> >>(m.attr("BinTools_CurveSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinTools_LocationSet , shared_ptr<BinTools_LocationSet> >>(m.attr("BinTools_LocationSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinTools_ShapeSet , shared_ptr<BinTools_ShapeSet> >>(m.attr("BinTools_ShapeSet"))
    // constructors
    // custom constructors
    // methods
        .def("IsWithTriangles",
             (Standard_Boolean (BinTools_ShapeSet::*)() const) static_cast<Standard_Boolean (BinTools_ShapeSet::*)() const>(&BinTools_ShapeSet::IsWithTriangles),
             R"#(Return true if shape should be stored with triangles.)#" )
        .def("SetWithTriangles",
             (void (BinTools_ShapeSet::*)( const Standard_Boolean ) ) static_cast<void (BinTools_ShapeSet::*)( const Standard_Boolean ) >(&BinTools_ShapeSet::SetWithTriangles),
             R"#(Define if shape will be stored with triangles. Ignored (always written) if face defines only triangulation (no surface).)#"  , py::arg("isWithTriangles"))
        .def("Clear",
             (void (BinTools_ShapeSet::*)() ) static_cast<void (BinTools_ShapeSet::*)() >(&BinTools_ShapeSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Write",
             (void (BinTools_ShapeSet::*)( std::ostream & ) const) static_cast<void (BinTools_ShapeSet::*)( std::ostream & ) const>(&BinTools_ShapeSet::Write),
             R"#(Writes the content of me on the stream <OS> in binary format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (BinTools_ShapeSet::*)( std::istream & ) ) static_cast<void (BinTools_ShapeSet::*)( std::istream & ) >(&BinTools_ShapeSet::Read),
             R"#(Reads the content of me from the binary stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def("Write",
             (void (BinTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (BinTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&BinTools_ShapeSet::Write),
             R"#(Writes on <OS> the shape <S>. Writes the orientation, the index of the TShape and the index of the Location.)#"  , py::arg("S"),  py::arg("OS"))
        .def("WriteGeometry",
             (void (BinTools_ShapeSet::*)( std::ostream & ) const) static_cast<void (BinTools_ShapeSet::*)( std::ostream & ) const>(&BinTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of me on the stream <OS> in a binary format that can be read back by Read.)#"  , py::arg("OS"))
        .def("ReadGeometry",
             (void (BinTools_ShapeSet::*)( std::istream & ) ) static_cast<void (BinTools_ShapeSet::*)( std::istream & ) >(&BinTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("Read",
             (void (BinTools_ShapeSet::*)( TopoDS_Shape & , std::istream & , const Standard_Integer ) const) static_cast<void (BinTools_ShapeSet::*)( TopoDS_Shape & , std::istream & , const Standard_Integer ) const>(&BinTools_ShapeSet::Read),
             R"#(Reads from <IS> a shape and returns it in S. <NbShapes> is the number of tshapes in the set.)#"  , py::arg("S"),  py::arg("IS"),  py::arg("NbShapes"))
        .def("WriteGeometry",
             (void (BinTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (BinTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&BinTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of <S> on the stream <OS> in a binary format that can be read back by Read.)#"  , py::arg("S"),  py::arg("OS"))
        .def("ReadGeometry",
             (void (BinTools_ShapeSet::*)( const TopAbs_ShapeEnum , std::istream & , TopoDS_Shape & ) ) static_cast<void (BinTools_ShapeSet::*)( const TopAbs_ShapeEnum , std::istream & , TopoDS_Shape & ) >(&BinTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of a shape of type <T> from the stream <IS> and returns it in <S>.)#"  , py::arg("T"),  py::arg("IS"),  py::arg("S"))
        .def("AddGeometry",
             (void (BinTools_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<void (BinTools_ShapeSet::*)( const TopoDS_Shape & ) >(&BinTools_ShapeSet::AddGeometry),
             R"#(Stores the goemetry of <S>.)#"  , py::arg("S"))
        .def("AddShapes",
             (void (BinTools_ShapeSet::*)( TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BinTools_ShapeSet::*)( TopoDS_Shape & , const TopoDS_Shape & ) >(&BinTools_ShapeSet::AddShapes),
             R"#(Inserts the shape <S2> in the shape <S1>.)#"  , py::arg("S1"),  py::arg("S2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinTools_SurfaceSet , shared_ptr<BinTools_SurfaceSet> >>(m.attr("BinTools_SurfaceSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinTools.hxx
// ./opencascade/BinTools_LocationSet.hxx
// ./opencascade/BinTools_LocationSetPtr.hxx
// ./opencascade/BinTools_ShapeSet.hxx
// ./opencascade/BinTools_CurveSet.hxx
// ./opencascade/BinTools_SurfaceSet.hxx
// ./opencascade/BinTools_Curve2dSet.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
