
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2dAdaptor_HCurve.hxx>

// module includes
#include <Geom2dEvaluator_Curve.hxx>
#include <Geom2dEvaluator_OffsetCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dEvaluator(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dEvaluator"));


//Python trampoline classes
    class Py_Geom2dEvaluator_Curve : public Geom2dEvaluator_Curve{
    public:
        using Geom2dEvaluator_Curve::Geom2dEvaluator_Curve;
        
        // public pure virtual
        void D0(const Standard_Real theU,gp_Pnt2d & theValue) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D0,theU,theValue) };
        void D1(const Standard_Real theU,gp_Pnt2d & theValue,gp_Vec2d & theD1) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D1,theU,theValue,theD1) };
        void D2(const Standard_Real theU,gp_Pnt2d & theValue,gp_Vec2d & theD1,gp_Vec2d & theD2) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D2,theU,theValue,theD1,theD2) };
        void D3(const Standard_Real theU,gp_Pnt2d & theValue,gp_Vec2d & theD1,gp_Vec2d & theD2,gp_Vec2d & theD3) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D3,theU,theValue,theD1,theD2,theD3) };
        gp_Vec2d DN(const Standard_Real theU,const Standard_Integer theDerU) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec2d,Geom2dEvaluator_Curve,DN,theU,theDerU) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<Geom2dEvaluator_Curve ,opencascade::handle<Geom2dEvaluator_Curve> ,Py_Geom2dEvaluator_Curve , Standard_Transient >>(m.attr("Geom2dEvaluator_Curve"))
        .def(py::init<  >()  )
    // methods
        .def("D0",
             (void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2dEvaluator_Curve::D0),
             R"#(Value of 2D curve)#"  , py::arg("theU"),  py::arg("theValue"))
        .def("D1",
             (void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2dEvaluator_Curve::D1),
             R"#(Value and first derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"))
        .def("D2",
             (void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2dEvaluator_Curve::D2),
             R"#(Value, first and second derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"))
        .def("D3",
             (void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2dEvaluator_Curve::D3),
             R"#(Value, first, second and third derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"),  py::arg("theD3"))
        .def("DN",
             (gp_Vec2d (Geom2dEvaluator_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2dEvaluator_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2dEvaluator_Curve::DN),
             R"#(Calculates N-th derivatives of curve, where N = theDerU. Raises if N < 1)#"  , py::arg("theU"),  py::arg("theDerU"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2dEvaluator_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2dEvaluator_Curve::*)() const>(&Geom2dEvaluator_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2dEvaluator_Curve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2dEvaluator_Curve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2dEvaluator_OffsetCurve ,opencascade::handle<Geom2dEvaluator_OffsetCurve>  , Geom2dEvaluator_Curve >>(m.attr("Geom2dEvaluator_OffsetCurve"))
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real >()  , py::arg("theBase"),  py::arg("theOffset") )
        .def(py::init< const opencascade::handle<Geom2dAdaptor_HCurve> &,const Standard_Real >()  , py::arg("theBase"),  py::arg("theOffset") )
    // methods
        .def("SetOffsetValue",
             (void (Geom2dEvaluator_OffsetCurve::*)( Standard_Real  ) ) static_cast<void (Geom2dEvaluator_OffsetCurve::*)( Standard_Real  ) >(&Geom2dEvaluator_OffsetCurve::SetOffsetValue),
             R"#(Change the offset value)#"  , py::arg("theOffset"))
        .def("D0",
             (void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2dEvaluator_OffsetCurve::D0),
             R"#(Value of curve)#"  , py::arg("theU"),  py::arg("theValue"))
        .def("D1",
             (void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2dEvaluator_OffsetCurve::D1),
             R"#(Value and first derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"))
        .def("D2",
             (void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2dEvaluator_OffsetCurve::D2),
             R"#(Value, first and second derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"))
        .def("D3",
             (void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2dEvaluator_OffsetCurve::D3),
             R"#(Value, first, second and third derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"),  py::arg("theD3"))
        .def("DN",
             (gp_Vec2d (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2dEvaluator_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2dEvaluator_OffsetCurve::DN),
             R"#(Calculates N-th derivatives of curve, where N = theDeriv. Raises if N < 1)#"  , py::arg("theU"),  py::arg("theDeriv"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2dEvaluator_OffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2dEvaluator_OffsetCurve::*)() const>(&Geom2dEvaluator_OffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2dEvaluator_OffsetCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2dEvaluator_OffsetCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/Geom2dEvaluator_Curve.hxx
// ./opencascade/Geom2dEvaluator_OffsetCurve.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
