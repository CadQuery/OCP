
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESGeom_Point.hxx>
#include <Geom_Point.hxx>
#include <Geom_CartesianPoint.hxx>
#include <IGESGeom_Direction.hxx>
#include <Geom_Vector.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <Geom_Direction.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_OffsetSurface.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom_Curve.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Conic.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_OffsetCurve.hxx>
#include <IGESData_IGESModel.hxx>

// module includes
#include <GeomToIGES_GeomCurve.hxx>
#include <GeomToIGES_GeomEntity.hxx>
#include <GeomToIGES_GeomPoint.hxx>
#include <GeomToIGES_GeomSurface.hxx>
#include <GeomToIGES_GeomVector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomToIGES(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomToIGES"));


//Python trampoline classes

// classes


    static_cast<py::class_<GeomToIGES_GeomEntity ,std::unique_ptr<GeomToIGES_GeomEntity>  >>(m.attr("GeomToIGES_GeomEntity"))
        .def(py::init<  >()  )
        .def(py::init< const GeomToIGES_GeomEntity & >()  , py::arg("GE") )
        .def("SetModel",
             (void (GeomToIGES_GeomEntity::*)( const opencascade::handle<IGESData_IGESModel> &  ) ) static_cast<void (GeomToIGES_GeomEntity::*)( const opencascade::handle<IGESData_IGESModel> &  ) >(&GeomToIGES_GeomEntity::SetModel),
             R"#(Set the value of "TheModel")#"  , py::arg("model"))
        .def("GetModel",
             (opencascade::handle<IGESData_IGESModel> (GeomToIGES_GeomEntity::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (GeomToIGES_GeomEntity::*)() const>(&GeomToIGES_GeomEntity::GetModel),
             R"#(Returns the value of "TheModel")#" )
        .def("SetUnit",
             (void (GeomToIGES_GeomEntity::*)( const Standard_Real  ) ) static_cast<void (GeomToIGES_GeomEntity::*)( const Standard_Real  ) >(&GeomToIGES_GeomEntity::SetUnit),
             R"#(Sets the value of the UnitFlag)#"  , py::arg("unit"))
        .def("GetUnit",
             (Standard_Real (GeomToIGES_GeomEntity::*)() const) static_cast<Standard_Real (GeomToIGES_GeomEntity::*)() const>(&GeomToIGES_GeomEntity::GetUnit),
             R"#(Returns the value of the UnitFlag of the header of the model in meters.)#" )
;


    static_cast<py::class_<GeomToIGES_GeomPoint ,std::unique_ptr<GeomToIGES_GeomPoint>  , GeomToIGES_GeomEntity >>(m.attr("GeomToIGES_GeomPoint"))
        .def(py::init<  >()  )
        .def(py::init< const GeomToIGES_GeomEntity & >()  , py::arg("GE") )
        .def("TransferPoint",
             (opencascade::handle<IGESGeom_Point> (GeomToIGES_GeomPoint::*)( const opencascade::handle<Geom_Point> &  ) ) static_cast<opencascade::handle<IGESGeom_Point> (GeomToIGES_GeomPoint::*)( const opencascade::handle<Geom_Point> &  ) >(&GeomToIGES_GeomPoint::TransferPoint),
             R"#(Transfert a Point from Geom to IGES. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferPoint",
             (opencascade::handle<IGESGeom_Point> (GeomToIGES_GeomPoint::*)( const opencascade::handle<Geom_CartesianPoint> &  ) ) static_cast<opencascade::handle<IGESGeom_Point> (GeomToIGES_GeomPoint::*)( const opencascade::handle<Geom_CartesianPoint> &  ) >(&GeomToIGES_GeomPoint::TransferPoint),
             R"#(Transfert a CartesianPoint from Geom to IGES. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
;


    static_cast<py::class_<GeomToIGES_GeomSurface ,std::unique_ptr<GeomToIGES_GeomSurface>  , GeomToIGES_GeomEntity >>(m.attr("GeomToIGES_GeomSurface"))
        .def(py::init<  >()  )
        .def(py::init< const GeomToIGES_GeomEntity & >()  , py::arg("GE") )
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(Transfert a GeometryEntity which answer True to the member : BRepToIGES::IsGeomSurface(Geometry). If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_BoundedSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_BoundedSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_BezierSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_BezierSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_RectangularTrimmedSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_RectangularTrimmedSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ElementarySurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ElementarySurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_Plane> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_Plane> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_CylindricalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_CylindricalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ConicalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ConicalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SphericalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SphericalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ToroidalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ToroidalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SweptSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SweptSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SurfaceOfLinearExtrusion> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SurfaceOfLinearExtrusion> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SurfaceOfRevolution> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SurfaceOfRevolution> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_OffsetSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_OffsetSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferPlaneSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_Plane> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_Plane> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferPlaneSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferCylindricalSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_CylindricalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_CylindricalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferCylindricalSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferConicalSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ConicalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ConicalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferConicalSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferSphericalSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SphericalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_SphericalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferSphericalSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("TransferToroidalSurface",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ToroidalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomSurface::*)( const opencascade::handle<Geom_ToroidalSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomSurface::TransferToroidalSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"),  py::arg("Vdeb"),  py::arg("Vfin"))
        .def("Length",
             (Standard_Real (GeomToIGES_GeomSurface::*)() const) static_cast<Standard_Real (GeomToIGES_GeomSurface::*)() const>(&GeomToIGES_GeomSurface::Length),
             R"#(Returns the value of "TheLength")#" )
        .def("GetBRepMode",
             (Standard_Boolean (GeomToIGES_GeomSurface::*)() const) static_cast<Standard_Boolean (GeomToIGES_GeomSurface::*)() const>(&GeomToIGES_GeomSurface::GetBRepMode),
             R"#(Returns Brep mode flag.)#" )
        .def("SetBRepMode",
             (void (GeomToIGES_GeomSurface::*)( const Standard_Boolean  ) ) static_cast<void (GeomToIGES_GeomSurface::*)( const Standard_Boolean  ) >(&GeomToIGES_GeomSurface::SetBRepMode),
             R"#(Sets BRep mode flag.)#"  , py::arg("flag"))
        .def("GetAnalyticMode",
             (Standard_Boolean (GeomToIGES_GeomSurface::*)() const) static_cast<Standard_Boolean (GeomToIGES_GeomSurface::*)() const>(&GeomToIGES_GeomSurface::GetAnalyticMode),
             R"#(Returns flag for writing elementary surfaces)#" )
        .def("SetAnalyticMode",
             (void (GeomToIGES_GeomSurface::*)( const Standard_Boolean  ) ) static_cast<void (GeomToIGES_GeomSurface::*)( const Standard_Boolean  ) >(&GeomToIGES_GeomSurface::SetAnalyticMode),
             R"#(Setst flag for writing elementary surfaces)#"  , py::arg("flag"))
;


    static_cast<py::class_<GeomToIGES_GeomVector ,std::unique_ptr<GeomToIGES_GeomVector>  , GeomToIGES_GeomEntity >>(m.attr("GeomToIGES_GeomVector"))
        .def(py::init<  >()  )
        .def(py::init< const GeomToIGES_GeomEntity & >()  , py::arg("GE") )
        .def("TransferVector",
             (opencascade::handle<IGESGeom_Direction> (GeomToIGES_GeomVector::*)( const opencascade::handle<Geom_Vector> &  ) ) static_cast<opencascade::handle<IGESGeom_Direction> (GeomToIGES_GeomVector::*)( const opencascade::handle<Geom_Vector> &  ) >(&GeomToIGES_GeomVector::TransferVector),
             R"#(Transfert a GeometryEntity which answer True to the member : BRepToIGES::IsGeomVector(Geometry). If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferVector",
             (opencascade::handle<IGESGeom_Direction> (GeomToIGES_GeomVector::*)( const opencascade::handle<Geom_VectorWithMagnitude> &  ) ) static_cast<opencascade::handle<IGESGeom_Direction> (GeomToIGES_GeomVector::*)( const opencascade::handle<Geom_VectorWithMagnitude> &  ) >(&GeomToIGES_GeomVector::TransferVector),
             R"#(None)#"  , py::arg("start"))
        .def("TransferVector",
             (opencascade::handle<IGESGeom_Direction> (GeomToIGES_GeomVector::*)( const opencascade::handle<Geom_Direction> &  ) ) static_cast<opencascade::handle<IGESGeom_Direction> (GeomToIGES_GeomVector::*)( const opencascade::handle<Geom_Direction> &  ) >(&GeomToIGES_GeomVector::TransferVector),
             R"#(None)#"  , py::arg("start"))
;


    static_cast<py::class_<GeomToIGES_GeomCurve ,std::unique_ptr<GeomToIGES_GeomCurve>  , GeomToIGES_GeomEntity >>(m.attr("GeomToIGES_GeomCurve"))
        .def(py::init<  >()  )
        .def(py::init< const GeomToIGES_GeomEntity & >()  , py::arg("GE") )
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(Transfert a GeometryEntity which answer True to the member : BRepToIGES::IsGeomCurve(Geometry). If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_BoundedCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_BoundedCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_BezierCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_BezierCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_TrimmedCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_TrimmedCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Conic> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Conic> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Circle> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Circle> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Ellipse> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Ellipse> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Hyperbola> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Hyperbola> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Line> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Line> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Parabola> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_Parabola> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
        .def("TransferCurve",
             (opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_OffsetCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (GeomToIGES_GeomCurve::*)( const opencascade::handle<Geom_OffsetCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomToIGES_GeomCurve::TransferCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("Udeb"),  py::arg("Ufin"))
;

// functions
// ./opencascade/GeomToIGES_GeomPoint.hxx
// ./opencascade/GeomToIGES_GeomVector.hxx
// ./opencascade/GeomToIGES_GeomSurface.hxx
// ./opencascade/GeomToIGES_GeomCurve.hxx
// ./opencascade/GeomToIGES_GeomEntity.hxx

// operators

// register typdefs
// ./opencascade/GeomToIGES_GeomPoint.hxx
// ./opencascade/GeomToIGES_GeomVector.hxx
// ./opencascade/GeomToIGES_GeomSurface.hxx
// ./opencascade/GeomToIGES_GeomCurve.hxx
// ./opencascade/GeomToIGES_GeomEntity.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
