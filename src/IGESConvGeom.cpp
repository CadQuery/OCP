
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESGeom_SplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <gp_Ax3.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax1.hxx>
#include <IGESGeom_TransformationMatrix.hxx>

// module includes
#include <IGESConvGeom.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESConvGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESConvGeom"));


//Python trampoline classes

// classes

    register_default_constructor<IGESConvGeom , shared_ptr<IGESConvGeom>>(m,"IGESConvGeom");

    static_cast<py::class_<IGESConvGeom , shared_ptr<IGESConvGeom>  >>(m.attr("IGESConvGeom"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SplineCurveFromIGES_s",
                    (Standard_Integer (*)( const opencascade::handle<IGESGeom_SplineCurve> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom_BSplineCurve> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<IGESGeom_SplineCurve> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom_BSplineCurve> &  ) >(&IGESConvGeom::SplineCurveFromIGES),
                    R"#(basic tool to build curves from IGESGeom (arrays of points, Transformations, evaluation of points in a datum) Converts a SplineCurve from IGES to a BSplineCurve from CasCade <epscoef> gives tolerance to consider coefficient to be nul <epsgeom> gives tolerance to consider poles to be equal The returned value is a status with these possible values : - 0 OK, done - 1 the result is not guaranteed to be C0 (with <epsgeom>) - 2 SplineType not processed (allowed : max 3) (no result produced) - 3 error during creation of control points (no result produced) - 4 polynomial equation is not correct (no result produced) - 5 less than one segment (no result produced))#"  , py::arg("igesent"),  py::arg("epscoef"),  py::arg("epsgeom"),  py::arg("result"))
        .def_static("IncreaseCurveContinuity_s",
                    (Standard_Integer (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Integer  ) >(&IGESConvGeom::IncreaseCurveContinuity),
                    R"#(Tries to increase curve continuity with tolerance <epsgeom> <continuity> is the new desired continuity, can be 1 or 2 (more than 2 is considered as 2). Returns the new maximum continuity obtained on all knots. Remark that, for instance with <continuity> = 2, even if not all the knots can be passed to C2, all knots which can be are.)#"  , py::arg("curve"),  py::arg("epsgeom"),  py::arg("continuity")=static_cast<const Standard_Integer>(2))
        .def_static("IncreaseCurveContinuity_s",
                    (Standard_Integer (*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  const Standard_Real ,  const Standard_Integer  ) >(&IGESConvGeom::IncreaseCurveContinuity),
                    R"#(None)#"  , py::arg("curve"),  py::arg("epsgeom"),  py::arg("continuity")=static_cast<const Standard_Integer>(2))
        .def_static("SplineSurfaceFromIGES_s",
                    (Standard_Integer (*)( const opencascade::handle<IGESGeom_SplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom_BSplineSurface> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<IGESGeom_SplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom_BSplineSurface> &  ) >(&IGESConvGeom::SplineSurfaceFromIGES),
                    R"#(Converts a SplineSurface from IGES to a BSplineSurface from CasCade <epscoef> gives tolerance to consider coefficient to be nul <epsgeom> gives tolerance to consider poles to be equal The returned value is a status with these possible values : - 0 OK, done - 1 the result is not guaranteed to be C0 (with <epsgeom>) - 2 degree is not compatible with code boundary type (warning) but C0 is OK - 3 idem but C0 is not guaranteed (warning) - 4 degree has been determined to be nul, either in U or V (no result produced) - 5 less than one segment in U or V (no result produced))#"  , py::arg("igesent"),  py::arg("epscoef"),  py::arg("epsgeom"),  py::arg("result"))
        .def_static("IncreaseSurfaceContinuity_s",
                    (Standard_Integer (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Integer  ) >(&IGESConvGeom::IncreaseSurfaceContinuity),
                    R"#(Tries to increase Surface continuity with tolerance <epsgeom> <continuity> is the new desired continuity, can be 1 or 2 (more than 2 is considered as 2). Returns the new maximum continuity obtained on all knots. Remark that, for instance with <continuity> = 2, even if not all the knots can be passed to C2, all knots which can be are.)#"  , py::arg("surface"),  py::arg("epsgeom"),  py::arg("continuity")=static_cast<const Standard_Integer>(2))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESConvGeom_GeomBuilder , shared_ptr<IGESConvGeom_GeomBuilder>  >>(m.attr("IGESConvGeom_GeomBuilder"))
        .def(py::init<  >()  )
    // methods
        .def("Clear",
             (void (IGESConvGeom_GeomBuilder::*)() ) static_cast<void (IGESConvGeom_GeomBuilder::*)() >(&IGESConvGeom_GeomBuilder::Clear),
             R"#(Clears list of Points/Vectors and data about Transformation)#" )
        .def("AddXY",
             (void (IGESConvGeom_GeomBuilder::*)( const gp_XY &  ) ) static_cast<void (IGESConvGeom_GeomBuilder::*)( const gp_XY &  ) >(&IGESConvGeom_GeomBuilder::AddXY),
             R"#(Adds a XY (Z=0) to the list of points)#"  , py::arg("val"))
        .def("AddXYZ",
             (void (IGESConvGeom_GeomBuilder::*)( const gp_XYZ &  ) ) static_cast<void (IGESConvGeom_GeomBuilder::*)( const gp_XYZ &  ) >(&IGESConvGeom_GeomBuilder::AddXYZ),
             R"#(Adds a XYZ to the list of points)#"  , py::arg("val"))
        .def("AddVec",
             (void (IGESConvGeom_GeomBuilder::*)( const gp_XYZ &  ) ) static_cast<void (IGESConvGeom_GeomBuilder::*)( const gp_XYZ &  ) >(&IGESConvGeom_GeomBuilder::AddVec),
             R"#(Adds a Vector part to the list of points. It will be used for CopiousData, datatype=3, only. AddXY and AddXYZ consider a null vector part (0,0,0) AddVec adds to the last added XY or XYZ)#"  , py::arg("val"))
        .def("NbPoints",
             (Standard_Integer (IGESConvGeom_GeomBuilder::*)() const) static_cast<Standard_Integer (IGESConvGeom_GeomBuilder::*)() const>(&IGESConvGeom_GeomBuilder::NbPoints),
             R"#(Returns the count of already recorded points)#" )
        .def("Point",
             (gp_XYZ (IGESConvGeom_GeomBuilder::*)( const Standard_Integer  ) const) static_cast<gp_XYZ (IGESConvGeom_GeomBuilder::*)( const Standard_Integer  ) const>(&IGESConvGeom_GeomBuilder::Point),
             R"#(Returns a point given its rank (if added as XY, Z will be 0))#"  , py::arg("num"))
        .def("MakeCopiousData",
             (opencascade::handle<IGESGeom_CopiousData> (IGESConvGeom_GeomBuilder::*)( const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<IGESGeom_CopiousData> (IGESConvGeom_GeomBuilder::*)( const Standard_Integer ,  const Standard_Boolean  ) const>(&IGESConvGeom_GeomBuilder::MakeCopiousData),
             R"#(Makes a CopiousData with the list of recorded Points/Vectors according to <datatype>, which must be 1,2 or 3 If <polyline> is given True, the CopiousData is coded as a Polyline, but <datatype> must not be 3 <datatype> = 1 : Common Z is computed as average of all Z <datatype> = 1 or 2 : Vectors are ignored)#"  , py::arg("datatype"),  py::arg("polyline")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Position",
             (gp_Trsf (IGESConvGeom_GeomBuilder::*)() const) static_cast<gp_Trsf (IGESConvGeom_GeomBuilder::*)() const>(&IGESConvGeom_GeomBuilder::Position),
             R"#(Returns the Position in which the method EvalXYZ will evaluate a XYZ. It can be regarded as defining a local system. It is initially set to Identity)#" )
        .def("SetPosition",
             (void (IGESConvGeom_GeomBuilder::*)( const gp_Trsf &  ) ) static_cast<void (IGESConvGeom_GeomBuilder::*)( const gp_Trsf &  ) >(&IGESConvGeom_GeomBuilder::SetPosition),
             R"#(Sets final position from an already defined Trsf)#"  , py::arg("pos"))
        .def("SetPosition",
             (void (IGESConvGeom_GeomBuilder::*)( const gp_Ax3 &  ) ) static_cast<void (IGESConvGeom_GeomBuilder::*)( const gp_Ax3 &  ) >(&IGESConvGeom_GeomBuilder::SetPosition),
             R"#(Sets final position from an Ax3)#"  , py::arg("pos"))
        .def("SetPosition",
             (void (IGESConvGeom_GeomBuilder::*)( const gp_Ax2 &  ) ) static_cast<void (IGESConvGeom_GeomBuilder::*)( const gp_Ax2 &  ) >(&IGESConvGeom_GeomBuilder::SetPosition),
             R"#(Sets final position from an Ax2)#"  , py::arg("pos"))
        .def("SetPosition",
             (void (IGESConvGeom_GeomBuilder::*)( const gp_Ax1 &  ) ) static_cast<void (IGESConvGeom_GeomBuilder::*)( const gp_Ax1 &  ) >(&IGESConvGeom_GeomBuilder::SetPosition),
             R"#(Sets final position from an Ax1 (this means that origin point and Z-axis are defined, the other axes are defined arbitrarily))#"  , py::arg("pos"))
        .def("IsIdentity",
             (Standard_Boolean (IGESConvGeom_GeomBuilder::*)() const) static_cast<Standard_Boolean (IGESConvGeom_GeomBuilder::*)() const>(&IGESConvGeom_GeomBuilder::IsIdentity),
             R"#(Returns True if the Position is Identity)#" )
        .def("IsTranslation",
             (Standard_Boolean (IGESConvGeom_GeomBuilder::*)() const) static_cast<Standard_Boolean (IGESConvGeom_GeomBuilder::*)() const>(&IGESConvGeom_GeomBuilder::IsTranslation),
             R"#(Returns True if the Position is a Translation only Remark : Identity and ZOnly will answer True)#" )
        .def("IsZOnly",
             (Standard_Boolean (IGESConvGeom_GeomBuilder::*)() const) static_cast<Standard_Boolean (IGESConvGeom_GeomBuilder::*)() const>(&IGESConvGeom_GeomBuilder::IsZOnly),
             R"#(Returns True if the Position corresponds to a Z-Displacement, i.e. is a Translation only, and only on Z Remark : Identity will answer True)#" )
        .def("MakeTransformation",
             (opencascade::handle<IGESGeom_TransformationMatrix> (IGESConvGeom_GeomBuilder::*)( const Standard_Real  ) const) static_cast<opencascade::handle<IGESGeom_TransformationMatrix> (IGESConvGeom_GeomBuilder::*)( const Standard_Real  ) const>(&IGESConvGeom_GeomBuilder::MakeTransformation),
             R"#(Returns the IGES Transformation which corresponds to the Position. Even if it is an Identity : IsIdentity should be tested first. <unit> is the unit value in which the model is created : it is used to convert translation part)#"  , py::arg("unit")=static_cast<const Standard_Real>(1))
    // methods using call by reference i.s.o. return
        .def("EvalXYZ",
             []( IGESConvGeom_GeomBuilder &self , const gp_XYZ & val ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.EvalXYZ(val,X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Evaluates a XYZ value in the Position already defined. Returns the transformed coordinates. For a 2D definition, X,Y will then be used to define a XY and Z will be regarded as a Z Displacement (can be ignored))#"  , py::arg("val"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/IGESConvGeom.hxx
// ./opencascade/IGESConvGeom_GeomBuilder.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
