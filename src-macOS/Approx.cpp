
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Approx_SweepFunction.hxx>
#include <AdvApprox_Cutting.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>

// module includes
#include <Approx_Array1OfAdHSurface.hxx>
#include <Approx_Array1OfGTrsf2d.hxx>
#include <Approx_Curve2d.hxx>
#include <Approx_Curve3d.hxx>
#include <Approx_CurveOnSurface.hxx>
#include <Approx_CurvilinearParameter.hxx>
#include <Approx_CurvlinFunc.hxx>
#include <Approx_FitAndDivide.hxx>
#include <Approx_FitAndDivide2d.hxx>
#include <Approx_HArray1OfAdHSurface.hxx>
#include <Approx_HArray1OfGTrsf2d.hxx>
#include <Approx_MCurvesToBSpCurve.hxx>
#include <Approx_ParametrizationType.hxx>
#include <Approx_SameParameter.hxx>
#include <Approx_SequenceOfHArray1OfReal.hxx>
#include <Approx_Status.hxx>
#include <Approx_SweepApproximation.hxx>
#include <Approx_SweepFunction.hxx>

// template related includes
// ./opencascade/Approx_Array1OfAdHSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Approx_SequenceOfHArray1OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Approx_Array1OfGTrsf2d.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Approx(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Approx"));


//Python trampoline classes
    class Py_Approx_SweepFunction : public Approx_SweepFunction{
    public:
        using Approx_SweepFunction::Approx_SweepFunction;


        // public pure virtual
        Standard_Boolean D0(const Standard_Real Param,const Standard_Real First,const Standard_Real Last,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Approx_SweepFunction,D0,Param,First,Last,Poles,Poles2d,Weigths) };
        Standard_Integer Nb2dCurves() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Approx_SweepFunction,Nb2dCurves,) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Mults,TMults) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Approx_SweepFunction,IsRational,) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Approx_SweepFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Intervals,T,S) };
        void SetInterval(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SetInterval,First,Last) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,NCollection_Array1<Standard_Real> & Tol3d) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d) };
        void SetTolerance(const Standard_Real Tol3d,const Standard_Real Tol2d) override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SetTolerance,Tol3d,Tol2d) };
        void SectionShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SectionShape,NbPoles,NbKnots,Degree) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<Approx_Curve2d , shared_ptr<Approx_Curve2d> >>(m.attr("Approx_Curve2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_Curve3d , shared_ptr<Approx_Curve3d> >>(m.attr("Approx_Curve3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_CurveOnSurface , shared_ptr<Approx_CurveOnSurface> >>(m.attr("Approx_CurveOnSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_CurvilinearParameter , shared_ptr<Approx_CurvilinearParameter> >>(m.attr("Approx_CurvilinearParameter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_CurvlinFunc ,opencascade::handle<Approx_CurvlinFunc> , Standard_Transient>>(m.attr("Approx_CurvlinFunc"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_CurvlinFunc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_CurvlinFunc::*)() const>(&Approx_CurvlinFunc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_CurvlinFunc::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_FitAndDivide , shared_ptr<Approx_FitAndDivide> >>(m.attr("Approx_FitAndDivide"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_FitAndDivide2d , shared_ptr<Approx_FitAndDivide2d> >>(m.attr("Approx_FitAndDivide2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_HArray1OfAdHSurface ,opencascade::handle<Approx_HArray1OfAdHSurface> , Approx_Array1OfAdHSurface, Standard_Transient>>(m.attr("Approx_HArray1OfAdHSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Adaptor3d_HSurface> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() const) static_cast<const Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() const>(&Approx_HArray1OfAdHSurface::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() ) static_cast<Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() >(&Approx_HArray1OfAdHSurface::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_HArray1OfAdHSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_HArray1OfAdHSurface::*)() const>(&Approx_HArray1OfAdHSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_HArray1OfAdHSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Approx_HArray1OfAdHSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_HArray1OfGTrsf2d ,opencascade::handle<Approx_HArray1OfGTrsf2d> , Approx_Array1OfGTrsf2d, Standard_Transient>>(m.attr("Approx_HArray1OfGTrsf2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_GTrsf2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_GTrsf2d> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() const) static_cast<const Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() const>(&Approx_HArray1OfGTrsf2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() ) static_cast<Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() >(&Approx_HArray1OfGTrsf2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_HArray1OfGTrsf2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_HArray1OfGTrsf2d::*)() const>(&Approx_HArray1OfGTrsf2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_HArray1OfGTrsf2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Approx_HArray1OfGTrsf2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_MCurvesToBSpCurve , shared_ptr<Approx_MCurvesToBSpCurve> >>(m.attr("Approx_MCurvesToBSpCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_SameParameter , shared_ptr<Approx_SameParameter> >>(m.attr("Approx_SameParameter"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsDone),
             R"#(None)#" )
        .def("TolReached",
             (Standard_Real (Approx_SameParameter::*)() const) static_cast<Standard_Real (Approx_SameParameter::*)() const>(&Approx_SameParameter::TolReached),
             R"#(None)#" )
        .def("IsSameParameter",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsSameParameter),
             R"#(Tells whether the original data had already the same parameter up to the tolerance : in that case nothing is done.)#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const>(&Approx_SameParameter::Curve2d),
             R"#(Returns the 2D curve that has the same parameter as the 3D curve once evaluated on the surface up to the specified tolerance)#" )
        .def("IsDone",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsDone),
             R"#(None)#" )
        .def("TolReached",
             (Standard_Real (Approx_SameParameter::*)() const) static_cast<Standard_Real (Approx_SameParameter::*)() const>(&Approx_SameParameter::TolReached),
             R"#(None)#" )
        .def("IsSameParameter",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsSameParameter),
             R"#(Tells whether the original data had already the same parameter up to the tolerance : in that case nothing is done.)#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const>(&Approx_SameParameter::Curve2d),
             R"#(Returns the 2D curve that has the same parameter as the 3D curve once evaluated on the surface up to the specified tolerance)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_SweepApproximation , shared_ptr<Approx_SweepApproximation> >>(m.attr("Approx_SweepApproximation"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Approx_SweepApproximation::*)() const) static_cast<Standard_Boolean (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::IsDone),
             R"#(returns if we have an result)#" )
        .def("UDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const) static_cast<const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVMults),
             R"#(None)#" )
        .def("NbCurves2d",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::NbCurves2d),
             R"#(None)#" )
        .def("Curves2dDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer ) const) static_cast<const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer ) const>(&Approx_SweepApproximation::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dMults),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (Approx_SweepApproximation::*)() const) static_cast<Standard_Boolean (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::IsDone),
             R"#(returns if we have an result)#" )
        .def("UDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const) static_cast<const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVMults),
             R"#(None)#" )
        .def("NbCurves2d",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::NbCurves2d),
             R"#(None)#" )
        .def("Curves2dDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer ) const) static_cast<const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer ) const>(&Approx_SweepApproximation::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dMults),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Approx_SweepFunction ,opencascade::handle<Approx_SweepFunction>,Py_Approx_SweepFunction , Standard_Transient>>(m.attr("Approx_SweepFunction"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&Approx_SweepFunction::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&Approx_SweepFunction::D1),
             R"#(compute the first derivative in v direction of the section for v = param Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&Approx_SweepFunction::D2),
             R"#(compute the second derivative in v direction of the section for v = param Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Nb2dCurves",
             (Standard_Integer (Approx_SweepFunction::*)() const) static_cast<Standard_Integer (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::Nb2dCurves),
             R"#(get the number of 2d curves to approximate.)#" )
        .def("Knots",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const>(&Approx_SweepFunction::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Integer> & ) const>(&Approx_SweepFunction::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (Approx_SweepFunction::*)() const) static_cast<Standard_Boolean (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::IsRational),
             R"#(Returns if the sections are rationnal or not)#" )
        .def("NbIntervals",
             (Standard_Integer (Approx_SweepFunction::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Approx_SweepFunction::*)( const GeomAbs_Shape ) const>(&Approx_SweepFunction::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Approx_SweepFunction::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real ) >(&Approx_SweepFunction::SetInterval),
             R"#(Sets the bounds of the parametric interval on the fonction This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&Approx_SweepFunction::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to satisfy. BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("SetTolerance",
             (void (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Approx_SweepFunction::*)( const Standard_Real , const Standard_Real ) >(&Approx_SweepFunction::SetTolerance),
             R"#(Is usefull, if (me) have to run numerical algorithm to perform D0, D1 or D2)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (Approx_SweepFunction::*)() const) static_cast<gp_Pnt (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditioned rational approximation. Warning: Used only if <me> IsRational)#" )
        .def("MaximalSection",
             (Standard_Real (Approx_SweepFunction::*)() const) static_cast<Standard_Real (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::MaximalSection),
             R"#(Returns the length of the greater section. This information is usefull to G1's control. Warning: With an little value, approximation can be slower.)#" )
        .def("GetMinimalWeight",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const>(&Approx_SweepFunction::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles in all sections. This information is usefull to control error in rational approximation. Warning: Used only if <me> IsRational)#"  , py::arg("Weigths"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_SweepFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( Approx_SweepFunction &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
        .def("Resolution",
             []( Approx_SweepFunction &self , const Standard_Integer Index,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(Index,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(Returns the resolutions in the sub-space 2d <Index> This information is usfull to find an good tolerance in 2d approximation.)#"  , py::arg("Index"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_SweepFunction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Approx_SameParameter.hxx
// ./opencascade/Approx_FitAndDivide2d.hxx
// ./opencascade/Approx_SweepApproximation.hxx
// ./opencascade/Approx_HArray1OfAdHSurface.hxx
// ./opencascade/Approx_Array1OfAdHSurface.hxx
// ./opencascade/Approx_ParametrizationType.hxx
// ./opencascade/Approx_Status.hxx
// ./opencascade/Approx_CurvlinFunc.hxx
// ./opencascade/Approx_CurvilinearParameter.hxx
// ./opencascade/Approx_HArray1OfGTrsf2d.hxx
// ./opencascade/Approx_MCurvesToBSpCurve.hxx
// ./opencascade/Approx_FitAndDivide.hxx
// ./opencascade/Approx_Curve2d.hxx
// ./opencascade/Approx_SequenceOfHArray1OfReal.hxx
// ./opencascade/Approx_SweepFunction.hxx
// ./opencascade/Approx_Curve3d.hxx
// ./opencascade/Approx_Array1OfGTrsf2d.hxx
// ./opencascade/Approx_CurveOnSurface.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<Adaptor3d_HSurface> >(m,"Approx_Array1OfAdHSurface");
    register_template_NCollection_Sequence<opencascade::handle<TColStd_HArray1OfReal> >(m,"Approx_SequenceOfHArray1OfReal");
    register_template_NCollection_Array1<gp_GTrsf2d>(m,"Approx_Array1OfGTrsf2d");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
