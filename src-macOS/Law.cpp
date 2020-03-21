
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Law_BSpline.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Law_BSpFunc.hxx>
#include <Law_Linear.hxx>
#include <Law_BSpline.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Law_BSpline.hxx>
#include <Law_Interpolate.hxx>
#include <Law_Function.hxx>
#include <Law_Constant.hxx>
#include <Law_Linear.hxx>
#include <Law_BSpFunc.hxx>
#include <Law_S.hxx>
#include <Law_Interpol.hxx>
#include <Law_Composite.hxx>
#include <Law_BSplineKnotSplitting.hxx>
#include <Law_BSpline.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_ConstructionError.hxx>
#include <Law_BSpline.hxx>

// module includes
#include <Law.hxx>
#include <Law_BSpFunc.hxx>
#include <Law_BSpline.hxx>
#include <Law_BSplineKnotSplitting.hxx>
#include <Law_Composite.hxx>
#include <Law_Constant.hxx>
#include <Law_Function.hxx>
#include <Law_Interpol.hxx>
#include <Law_Interpolate.hxx>
#include <Law_Laws.hxx>
#include <Law_Linear.hxx>
#include <Law_ListIteratorOfLaws.hxx>
#include <Law_S.hxx>

// template related includes
// ./opencascade/Law_Laws.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Law_Laws.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Law(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Law"));


//Python trampoline classes
    class Py_Law_Function : public Law_Function{
    public:
        using Law_Function::Law_Function;


        // public pure virtual
        GeomAbs_Shape Continuity() const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,Law_Function,Continuity,) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Law_Function,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Law_Function,Intervals,T,S) };
        Standard_Real Value(const Standard_Real X) override { PYBIND11_OVERLOAD_PURE(Standard_Real,Law_Function,Value,X) };
        opencascade::handle<Law_Function> Trim(const Standard_Real PFirst,const Standard_Real PLast,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Law_Function>,Law_Function,Trim,PFirst,PLast,Tol) };
        void D1(const Standard_Real X,Standard_Real & F,Standard_Real & D) override { PYBIND11_OVERLOAD_PURE(void,Law_Function,D1,X,F,D) };
        void D2(const Standard_Real X,Standard_Real & F,Standard_Real & D,Standard_Real & D2) override { PYBIND11_OVERLOAD_PURE(void,Law_Function,D2,X,F,D,D2) };
        void Bounds(Standard_Real & PFirst,Standard_Real & PLast) override { PYBIND11_OVERLOAD_PURE(void,Law_Function,Bounds,PFirst,PLast) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<Law , shared_ptr<Law>>(m,"Law");

    static_cast<py::class_<Law , shared_ptr<Law> >>(m.attr("Law"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_BSpline ,opencascade::handle<Law_BSpline> , Standard_Transient>>(m.attr("Law_BSpline"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_BSpline::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_BSpline::*)() const>(&Law_BSpline::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_BSpline::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_BSplineKnotSplitting , shared_ptr<Law_BSplineKnotSplitting> >>(m.attr("Law_BSplineKnotSplitting"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Function ,opencascade::handle<Law_Function>,Py_Law_Function , Standard_Transient>>(m.attr("Law_Function"))
    // constructors
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_Function::*)() const) static_cast<GeomAbs_Shape (Law_Function::*)() const>(&Law_Function::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Function::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Function::*)( const GeomAbs_Shape ) const>(&Law_Function::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Function::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Function::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Function::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Function::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Function::*)( const Standard_Real ) >(&Law_Function::Value),
             R"#(Returns the value of the function at the point of parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Function::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Function::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Function::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Function::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Function::*)() const>(&Law_Function::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Function &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value F and the first derivative D of the function at the point of parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Function &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and seconde derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Function &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Function::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Interpolate , shared_ptr<Law_Interpolate> >>(m.attr("Law_Interpolate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_BSpFunc ,opencascade::handle<Law_BSpFunc> , Law_Function>>(m.attr("Law_BSpFunc"))
    // constructors
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_BSpFunc::*)() const) static_cast<GeomAbs_Shape (Law_BSpFunc::*)() const>(&Law_BSpFunc::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_BSpFunc::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_BSpFunc::*)( const GeomAbs_Shape ) const>(&Law_BSpFunc::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_BSpFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_BSpFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_BSpFunc::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_BSpFunc::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_BSpFunc::*)( const Standard_Real ) >(&Law_BSpFunc::Value),
             R"#(None)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_BSpFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_BSpFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_BSpFunc::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_BSpFunc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_BSpFunc::*)() const>(&Law_BSpFunc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_BSpFunc &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(None)#"  , py::arg("X"))
        .def("D2",
             []( Law_BSpFunc &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(None)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_BSpFunc &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_BSpFunc::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Composite ,opencascade::handle<Law_Composite> , Law_Function>>(m.attr("Law_Composite"))
    // constructors
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_Composite::*)() const) static_cast<GeomAbs_Shape (Law_Composite::*)() const>(&Law_Composite::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Composite::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Composite::*)( const GeomAbs_Shape ) const>(&Law_Composite::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Composite::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Composite::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Composite::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Composite::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Composite::*)( const Standard_Real ) >(&Law_Composite::Value),
             R"#(Returns the value at parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Composite::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Composite::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Composite::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Composite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Composite::*)() const>(&Law_Composite::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Composite &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value and the first derivative at parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Composite &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and second derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Composite &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Composite::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Constant ,opencascade::handle<Law_Constant> , Law_Function>>(m.attr("Law_Constant"))
    // constructors
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_Constant::*)() const) static_cast<GeomAbs_Shape (Law_Constant::*)() const>(&Law_Constant::Continuity),
             R"#(Returns GeomAbs_CN)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Constant::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Constant::*)( const GeomAbs_Shape ) const>(&Law_Constant::NbIntervals),
             R"#(Returns 1)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Constant::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Constant::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Constant::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Constant::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Constant::*)( const Standard_Real ) >(&Law_Constant::Value),
             R"#(Returns the value at parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Constant::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Constant::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Constant::Trim),
             R"#(None)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Constant::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Constant::*)() const>(&Law_Constant::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Constant &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value and the first derivative at parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Constant &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and second derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Constant &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Constant::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Linear ,opencascade::handle<Law_Linear> , Law_Function>>(m.attr("Law_Linear"))
    // constructors
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_Linear::*)() const) static_cast<GeomAbs_Shape (Law_Linear::*)() const>(&Law_Linear::Continuity),
             R"#(Returns GeomAbs_CN)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Linear::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Linear::*)( const GeomAbs_Shape ) const>(&Law_Linear::NbIntervals),
             R"#(Returns 1)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Linear::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Linear::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Linear::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Linear::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Linear::*)( const Standard_Real ) >(&Law_Linear::Value),
             R"#(Returns the value of this function at the point of parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Linear::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Linear::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Linear::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Linear::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Linear::*)() const>(&Law_Linear::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Linear &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value F and the first derivative D of this function at the point of parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Linear &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and second derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Linear &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Linear::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Interpol ,opencascade::handle<Law_Interpol> , Law_BSpFunc>>(m.attr("Law_Interpol"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Interpol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Interpol::*)() const>(&Law_Interpol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Interpol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_S ,opencascade::handle<Law_S> , Law_BSpFunc>>(m.attr("Law_S"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_S::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_S::*)() const>(&Law_S::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_S::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Law_S.hxx
// ./opencascade/Law_BSplineKnotSplitting.hxx
// ./opencascade/Law_BSpline.hxx
// ./opencascade/Law_Laws.hxx
// ./opencascade/Law.hxx
// ./opencascade/Law_Interpol.hxx
// ./opencascade/Law_Interpolate.hxx
// ./opencascade/Law_ListIteratorOfLaws.hxx
// ./opencascade/Law_Constant.hxx
// ./opencascade/Law_BSpFunc.hxx
// ./opencascade/Law_Linear.hxx
// ./opencascade/Law_Function.hxx
// ./opencascade/Law_Composite.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<Law_Function> >(m,"Law_Laws");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
