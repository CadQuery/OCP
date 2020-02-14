
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESGeom_Direction.hxx>
#include <Geom2d_Vector.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>
#include <Geom2d_Direction.hxx>
#include <IGESGeom_Point.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Geom2dToIGES_Geom2dCurve.hxx>
#include <Geom2dToIGES_Geom2dEntity.hxx>
#include <Geom2dToIGES_Geom2dPoint.hxx>
#include <Geom2dToIGES_Geom2dVector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dToIGES(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dToIGES"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dToIGES_Geom2dEntity , shared_ptr<Geom2dToIGES_Geom2dEntity>  >>(m.attr("Geom2dToIGES_Geom2dEntity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dToIGES_Geom2dEntity & >()  , py::arg("GE") )
    // custom constructors
    // methods
        .def("SetModel",
             (void (Geom2dToIGES_Geom2dEntity::*)( const opencascade::handle<IGESData_IGESModel> &  ) ) static_cast<void (Geom2dToIGES_Geom2dEntity::*)( const opencascade::handle<IGESData_IGESModel> &  ) >(&Geom2dToIGES_Geom2dEntity::SetModel),
             R"#(Set the value of "TheModel")#"  , py::arg("model"))
        .def("GetModel",
             (opencascade::handle<IGESData_IGESModel> (Geom2dToIGES_Geom2dEntity::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (Geom2dToIGES_Geom2dEntity::*)() const>(&Geom2dToIGES_Geom2dEntity::GetModel),
             R"#(Returns the value of "TheModel")#" )
        .def("SetUnit",
             (void (Geom2dToIGES_Geom2dEntity::*)( const Standard_Real  ) ) static_cast<void (Geom2dToIGES_Geom2dEntity::*)( const Standard_Real  ) >(&Geom2dToIGES_Geom2dEntity::SetUnit),
             R"#(Sets the value of the UnitFlag)#"  , py::arg("unit"))
        .def("GetUnit",
             (Standard_Real (Geom2dToIGES_Geom2dEntity::*)() const) static_cast<Standard_Real (Geom2dToIGES_Geom2dEntity::*)() const>(&Geom2dToIGES_Geom2dEntity::GetUnit),
             R"#(Returns the value of the UnitFlag of the header of the model in millimeters.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dToIGES_Geom2dCurve , shared_ptr<Geom2dToIGES_Geom2dCurve>  , Geom2dToIGES_Geom2dEntity >>(m.attr("Geom2dToIGES_Geom2dCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dToIGES_Geom2dEntity & >()  , py::arg("G2dE") )
    // custom constructors
    // methods
        .def("Transfer2dCurve",
             (opencascade::handle<IGESData_IGESEntity> (Geom2dToIGES_Geom2dCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (Geom2dToIGES_Geom2dCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&Geom2dToIGES_Geom2dCurve::Transfer2dCurve),
             R"#(Transfert an Entity from Geom2d to IGES. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dToIGES_Geom2dPoint , shared_ptr<Geom2dToIGES_Geom2dPoint>  , Geom2dToIGES_Geom2dEntity >>(m.attr("Geom2dToIGES_Geom2dPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dToIGES_Geom2dEntity & >()  , py::arg("G2dE") )
    // custom constructors
    // methods
        .def("Transfer2dPoint",
             (opencascade::handle<IGESGeom_Point> (Geom2dToIGES_Geom2dPoint::*)( const opencascade::handle<Geom2d_Point> &  ) ) static_cast<opencascade::handle<IGESGeom_Point> (Geom2dToIGES_Geom2dPoint::*)( const opencascade::handle<Geom2d_Point> &  ) >(&Geom2dToIGES_Geom2dPoint::Transfer2dPoint),
             R"#(Transfert a Point from Geom to IGES. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("Transfer2dPoint",
             (opencascade::handle<IGESGeom_Point> (Geom2dToIGES_Geom2dPoint::*)( const opencascade::handle<Geom2d_CartesianPoint> &  ) ) static_cast<opencascade::handle<IGESGeom_Point> (Geom2dToIGES_Geom2dPoint::*)( const opencascade::handle<Geom2d_CartesianPoint> &  ) >(&Geom2dToIGES_Geom2dPoint::Transfer2dPoint),
             R"#(Transfert a CartesianPoint from Geom to IGES. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dToIGES_Geom2dVector , shared_ptr<Geom2dToIGES_Geom2dVector>  , Geom2dToIGES_Geom2dEntity >>(m.attr("Geom2dToIGES_Geom2dVector"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dToIGES_Geom2dEntity & >()  , py::arg("G2dE") )
    // custom constructors
    // methods
        .def("Transfer2dVector",
             (opencascade::handle<IGESGeom_Direction> (Geom2dToIGES_Geom2dVector::*)( const opencascade::handle<Geom2d_Vector> &  ) ) static_cast<opencascade::handle<IGESGeom_Direction> (Geom2dToIGES_Geom2dVector::*)( const opencascade::handle<Geom2d_Vector> &  ) >(&Geom2dToIGES_Geom2dVector::Transfer2dVector),
             R"#(Transfert a GeometryEntity which answer True to the member : BRepToIGES::IsGeomVector(Geometry). If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("Transfer2dVector",
             (opencascade::handle<IGESGeom_Direction> (Geom2dToIGES_Geom2dVector::*)( const opencascade::handle<Geom2d_VectorWithMagnitude> &  ) ) static_cast<opencascade::handle<IGESGeom_Direction> (Geom2dToIGES_Geom2dVector::*)( const opencascade::handle<Geom2d_VectorWithMagnitude> &  ) >(&Geom2dToIGES_Geom2dVector::Transfer2dVector),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dVector",
             (opencascade::handle<IGESGeom_Direction> (Geom2dToIGES_Geom2dVector::*)( const opencascade::handle<Geom2d_Direction> &  ) ) static_cast<opencascade::handle<IGESGeom_Direction> (Geom2dToIGES_Geom2dVector::*)( const opencascade::handle<Geom2d_Direction> &  ) >(&Geom2dToIGES_Geom2dVector::Transfer2dVector),
             R"#(None)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dToIGES_Geom2dVector.hxx
// ./opencascade/Geom2dToIGES_Geom2dPoint.hxx
// ./opencascade/Geom2dToIGES_Geom2dEntity.hxx
// ./opencascade/Geom2dToIGES_Geom2dCurve.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
