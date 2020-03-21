
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>

// module includes
#include <GCPnts_AbscissaPoint.hxx>
#include <GCPnts_AbscissaType.hxx>
#include <GCPnts_DeflectionType.hxx>
#include <GCPnts_DistFunction.hxx>
#include <GCPnts_DistFunction2d.hxx>
#include <GCPnts_QuasiUniformAbscissa.hxx>
#include <GCPnts_QuasiUniformDeflection.hxx>
#include <GCPnts_TangentialDeflection.hxx>
#include <GCPnts_UniformAbscissa.hxx>
#include <GCPnts_UniformDeflection.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GCPnts(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GCPnts"));


//Python trampoline classes

// classes


    static_cast<py::class_<GCPnts_AbscissaPoint , shared_ptr<GCPnts_AbscissaPoint> >>(m.attr("GCPnts_AbscissaPoint"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GCPnts_AbscissaPoint::*)() const) static_cast<Standard_Boolean (GCPnts_AbscissaPoint::*)() const>(&GCPnts_AbscissaPoint::IsDone),
             R"#(True if the computation was successful, False otherwise. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_AbscissaPoint::*)() const) static_cast<Standard_Real (GCPnts_AbscissaPoint::*)() const>(&GCPnts_AbscissaPoint::Parameter),
             R"#(Returns the parameter on the curve of the point solution of this algorithm. Exceptions StdFail_NotDone if the computation was not successful, or was not done.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunction , shared_ptr<GCPnts_DistFunction> , math_Function>>(m.attr("GCPnts_DistFunction"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunction::*)( const Standard_Real , Standard_Real & ) >(&GCPnts_DistFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunction2d , shared_ptr<GCPnts_DistFunction2d> , math_Function>>(m.attr("GCPnts_DistFunction2d"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunction2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunction2d::*)( const Standard_Real , Standard_Real & ) >(&GCPnts_DistFunction2d::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunction2dMV , shared_ptr<GCPnts_DistFunction2dMV> , math_MultipleVarFunction>>(m.attr("GCPnts_DistFunction2dMV"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunction2dMV::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunction2dMV::*)( const math_Vector & , Standard_Real & ) >(&GCPnts_DistFunction2dMV::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("NbVariables",
             (Standard_Integer (GCPnts_DistFunction2dMV::*)() const) static_cast<Standard_Integer (GCPnts_DistFunction2dMV::*)() const>(&GCPnts_DistFunction2dMV::NbVariables),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunctionMV , shared_ptr<GCPnts_DistFunctionMV> , math_MultipleVarFunction>>(m.attr("GCPnts_DistFunctionMV"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunctionMV::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunctionMV::*)( const math_Vector & , Standard_Real & ) >(&GCPnts_DistFunctionMV::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("NbVariables",
             (Standard_Integer (GCPnts_DistFunctionMV::*)() const) static_cast<Standard_Integer (GCPnts_DistFunctionMV::*)() const>(&GCPnts_DistFunctionMV::NbVariables),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_QuasiUniformAbscissa , shared_ptr<GCPnts_QuasiUniformAbscissa> >>(m.attr("GCPnts_QuasiUniformAbscissa"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GCPnts_QuasiUniformAbscissa::*)() const) static_cast<Standard_Boolean (GCPnts_QuasiUniformAbscissa::*)() const>(&GCPnts_QuasiUniformAbscissa::IsDone),
             R"#(Returns true if the computation was successful. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_QuasiUniformAbscissa::*)() const) static_cast<Standard_Integer (GCPnts_QuasiUniformAbscissa::*)() const>(&GCPnts_QuasiUniformAbscissa::NbPoints),
             R"#(Returns the number of points of the distribution computed by this algorithm. This value is either: - the one imposed on the algorithm at the time of construction (or initialization), or - the one computed by the algorithm when the curvilinear distance between two consecutive points of the distribution is imposed on the algorithm at the time of construction (or initialization). Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_QuasiUniformAbscissa::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_QuasiUniformAbscissa::*)( const Standard_Integer ) const>(&GCPnts_QuasiUniformAbscissa::Parameter),
             R"#(Returns the parameter of the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_QuasiUniformDeflection , shared_ptr<GCPnts_QuasiUniformDeflection> >>(m.attr("GCPnts_QuasiUniformDeflection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GCPnts_QuasiUniformDeflection::*)() const) static_cast<Standard_Boolean (GCPnts_QuasiUniformDeflection::*)() const>(&GCPnts_QuasiUniformDeflection::IsDone),
             R"#(Returns true if the computation was successful. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_QuasiUniformDeflection::*)() const) static_cast<Standard_Integer (GCPnts_QuasiUniformDeflection::*)() const>(&GCPnts_QuasiUniformDeflection::NbPoints),
             R"#(Returns the number of points of the distribution computed by this algorithm. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_QuasiUniformDeflection::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_QuasiUniformDeflection::*)( const Standard_Integer ) const>(&GCPnts_QuasiUniformDeflection::Parameter),
             R"#(Returns the parameter of the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
        .def("Deflection",
             (Standard_Real (GCPnts_QuasiUniformDeflection::*)() const) static_cast<Standard_Real (GCPnts_QuasiUniformDeflection::*)() const>(&GCPnts_QuasiUniformDeflection::Deflection),
             R"#(Returns the deflection between the curve and the polygon resulting from the points of the distribution computed by this algorithm. This is the value given to the algorithm at the time of construction (or initialization). Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_TangentialDeflection , shared_ptr<GCPnts_TangentialDeflection> >>(m.attr("GCPnts_TangentialDeflection"))
    // constructors
    // custom constructors
    // methods
        .def("NbPoints",
             (Standard_Integer (GCPnts_TangentialDeflection::*)() const) static_cast<Standard_Integer (GCPnts_TangentialDeflection::*)() const>(&GCPnts_TangentialDeflection::NbPoints),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const>(&GCPnts_TangentialDeflection::Parameter),
             R"#(None)#"  , py::arg("I"))
        .def("Value",
             (gp_Pnt (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const) static_cast<gp_Pnt (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const>(&GCPnts_TangentialDeflection::Value),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_UniformAbscissa , shared_ptr<GCPnts_UniformAbscissa> >>(m.attr("GCPnts_UniformAbscissa"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GCPnts_UniformAbscissa::*)() const) static_cast<Standard_Boolean (GCPnts_UniformAbscissa::*)() const>(&GCPnts_UniformAbscissa::IsDone),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_UniformAbscissa::*)() const) static_cast<Standard_Integer (GCPnts_UniformAbscissa::*)() const>(&GCPnts_UniformAbscissa::NbPoints),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_UniformAbscissa::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_UniformAbscissa::*)( const Standard_Integer ) const>(&GCPnts_UniformAbscissa::Parameter),
             R"#(returns the computed Parameter of index <Index>.)#"  , py::arg("Index"))
        .def("Abscissa",
             (Standard_Real (GCPnts_UniformAbscissa::*)() const) static_cast<Standard_Real (GCPnts_UniformAbscissa::*)() const>(&GCPnts_UniformAbscissa::Abscissa),
             R"#(returne the current abscissa ie the distance between two consecutive points)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_UniformDeflection , shared_ptr<GCPnts_UniformDeflection> >>(m.attr("GCPnts_UniformDeflection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GCPnts_UniformDeflection::*)() const) static_cast<Standard_Boolean (GCPnts_UniformDeflection::*)() const>(&GCPnts_UniformDeflection::IsDone),
             R"#(Returns true if the computation was successful. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_UniformDeflection::*)() const) static_cast<Standard_Integer (GCPnts_UniformDeflection::*)() const>(&GCPnts_UniformDeflection::NbPoints),
             R"#(Returns the number of points of the distribution computed by this algorithm. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_UniformDeflection::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_UniformDeflection::*)( const Standard_Integer ) const>(&GCPnts_UniformDeflection::Parameter),
             R"#(Returns the parameter of the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
        .def("Deflection",
             (Standard_Real (GCPnts_UniformDeflection::*)() const) static_cast<Standard_Real (GCPnts_UniformDeflection::*)() const>(&GCPnts_UniformDeflection::Deflection),
             R"#(Returns the deflection between the curve and the polygon resulting from the points of the distribution computed by this algorithm. This value is the one given to the algorithm at the time of construction (or initialization). Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GCPnts_UniformDeflection.hxx
// ./opencascade/GCPnts_TangentialDeflection.hxx
// ./opencascade/GCPnts_UniformAbscissa.hxx
// ./opencascade/GCPnts_QuasiUniformAbscissa.hxx
// ./opencascade/GCPnts_DistFunction.hxx
// ./opencascade/GCPnts_AbscissaType.hxx
// ./opencascade/GCPnts_DeflectionType.hxx
// ./opencascade/GCPnts_AbscissaPoint.hxx
// ./opencascade/GCPnts_QuasiUniformDeflection.hxx
// ./opencascade/GCPnts_DistFunction2d.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
