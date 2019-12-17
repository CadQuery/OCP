
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <gp_Ax2.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_GTrsf2d.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_Surface.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_Interpolate.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_Tool.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib_LogSample.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>

// module includes
#include <GeomLib.hxx>
#include <GeomLib_Array1OfMat.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_CheckCurveOnSurface.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_DenominatorMultiplierPtr.hxx>
#include <GeomLib_Interpolate.hxx>
#include <GeomLib_InterpolationErrors.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_LogSample.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib_Tool.hxx>

// template related includes
// ./opencascade/GeomLib_Array1OfMat.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomLib"));


//Python trampoline classes

// classes


    static_cast<py::class_<GeomLib_LogSample ,std::unique_ptr<GeomLib_LogSample>  , math_FunctionSample >>(m.attr("GeomLib_LogSample"))
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("A"),  py::arg("B"),  py::arg("N") )
        .def("GetParameter",
             (Standard_Real (GeomLib_LogSample::*)( const Standard_Integer  ) const) static_cast<Standard_Real (GeomLib_LogSample::*)( const Standard_Integer  ) const>(&GeomLib_LogSample::GetParameter),
             R"#(Returns the value of parameter of the point of range Index : A + ((Index-1)/(NbPoints-1))*B. An exception is raised if Index<=0 or Index>NbPoints.)#"  , py::arg("Index"))
;


    static_cast<py::class_<GeomLib_PolyFunc ,std::unique_ptr<GeomLib_PolyFunc>  , math_FunctionWithDerivative >>(m.attr("GeomLib_PolyFunc"))
        .def(py::init< const math_Vector & >()  , py::arg("Coeffs") )
        .def("Value",
             (Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real ,  Standard_Real &  ) >(&GeomLib_PolyFunc::Value),
             R"#(computes the value <F>of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real ,  Standard_Real &  ) >(&GeomLib_PolyFunc::Derivative),
             R"#(computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&GeomLib_PolyFunc::Values),
             R"#(computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
;


    static_cast<py::class_<GeomLib_DenominatorMultiplier ,std::unique_ptr<GeomLib_DenominatorMultiplier>  >>(m.attr("GeomLib_DenominatorMultiplier"))
        .def(py::init< const opencascade::handle<Geom_BSplineSurface> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("Surface"),  py::arg("KnotVector") )
        .def("Value",
             (Standard_Real (GeomLib_DenominatorMultiplier::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Real (GeomLib_DenominatorMultiplier::*)( const Standard_Real ,  const Standard_Real  ) const>(&GeomLib_DenominatorMultiplier::Value),
             R"#(Returns the value of a(UParameter,VParameter)=)#"  , py::arg("UParameter"),  py::arg("VParameter"))
;


    static_cast<py::class_<GeomLib_IsPlanarSurface ,std::unique_ptr<GeomLib_IsPlanarSurface>  >>(m.attr("GeomLib_IsPlanarSurface"))
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("S"),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-7) )
        .def("IsPlanar",
             (Standard_Boolean (GeomLib_IsPlanarSurface::*)() const) static_cast<Standard_Boolean (GeomLib_IsPlanarSurface::*)() const>(&GeomLib_IsPlanarSurface::IsPlanar),
             R"#(Return if the Surface is a plan)#" )
        .def("Plan",
             (const gp_Pln & (GeomLib_IsPlanarSurface::*)() const) static_cast<const gp_Pln & (GeomLib_IsPlanarSurface::*)() const>(&GeomLib_IsPlanarSurface::Plan),
             R"#(Return the plan definition)#" )
;


    static_cast<py::class_<GeomLib_Check2dBSplineCurve ,std::unique_ptr<GeomLib_Check2dBSplineCurve>  >>(m.attr("GeomLib_Check2dBSplineCurve"))
        .def(py::init< const opencascade::handle<Geom2d_BSplineCurve> &,const Standard_Real,const Standard_Real >()  , py::arg("Curve"),  py::arg("Tolerance"),  py::arg("AngularTolerance") )
        .def("IsDone",
             (Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const>(&GeomLib_Check2dBSplineCurve::IsDone),
             R"#(None)#" )
        .def("NeedTangentFix",
             (void (GeomLib_Check2dBSplineCurve::*)( Standard_Boolean & ,  Standard_Boolean &  ) const) static_cast<void (GeomLib_Check2dBSplineCurve::*)( Standard_Boolean & ,  Standard_Boolean &  ) const>(&GeomLib_Check2dBSplineCurve::NeedTangentFix),
             R"#(None)#"  , py::arg("FirstFlag"),  py::arg("SecondFlag"))
        .def("FixTangent",
             (void (GeomLib_Check2dBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (GeomLib_Check2dBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomLib_Check2dBSplineCurve::FixTangent),
             R"#(None)#"  , py::arg("FirstFlag"),  py::arg("LastFlag"))
        .def("FixedTangent",
             (opencascade::handle<Geom2d_BSplineCurve> (GeomLib_Check2dBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (GeomLib_Check2dBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomLib_Check2dBSplineCurve::FixedTangent),
             R"#(modifies the curve by fixing the first or the last tangencies)#"  , py::arg("FirstFlag"),  py::arg("LastFlag"))
        .def("IsDone",
             (Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const>(&GeomLib_Check2dBSplineCurve::IsDone),
             R"#(None)#" )
;


    static_cast<py::class_<GeomLib_CheckCurveOnSurface ,std::unique_ptr<GeomLib_CheckCurveOnSurface>  >>(m.attr("GeomLib_CheckCurveOnSurface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theCurve"),  py::arg("theSurface"),  py::arg("theFirst"),  py::arg("theLast"),  py::arg("theTolRange")=static_cast<const Standard_Real>(Precision :: PConfusion ( )) )
        .def("Init",
             (void (GeomLib_CheckCurveOnSurface::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomLib_CheckCurveOnSurface::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomLib_CheckCurveOnSurface::Init),
             R"#(Sets the data for the algorithm)#"  , py::arg("theCurve"),  py::arg("theSurface"),  py::arg("theFirst"),  py::arg("theLast"),  py::arg("theTolRange")=static_cast<const Standard_Real>(Precision :: PConfusion ( )))
        .def("Init",
             (void (GeomLib_CheckCurveOnSurface::*)() ) static_cast<void (GeomLib_CheckCurveOnSurface::*)() >(&GeomLib_CheckCurveOnSurface::Init),
             R"#(Initializes all members by dafault values)#" )
        .def("Perform",
             (void (GeomLib_CheckCurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Boolean  ) ) static_cast<void (GeomLib_CheckCurveOnSurface::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Boolean  ) >(&GeomLib_CheckCurveOnSurface::Perform),
             R"#(Computes the max distance for the 3d curve <myCurve> and 2d curve <thePCurve> If isTheMultyTheadDisabled == TRUE then computation will be made without any parallelization.)#"  , py::arg("thePCurve"),  py::arg("isTheMultyTheradDisabled")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (GeomLib_CheckCurveOnSurface::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::Curve),
             R"#(Returns my3DCurve)#" )
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomLib_CheckCurveOnSurface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::Surface),
             R"#(Returns mySurface)#" )
        .def("Range",
             (void (GeomLib_CheckCurveOnSurface::*)( Standard_Real & ,  Standard_Real &  ) ) static_cast<void (GeomLib_CheckCurveOnSurface::*)( Standard_Real & ,  Standard_Real &  ) >(&GeomLib_CheckCurveOnSurface::Range),
             R"#(Returns first and last parameter of the curves (2D- and 3D-curves are considered to have same range))#"  , py::arg("theFirst"),  py::arg("theLast"))
        .def("IsDone",
             (Standard_Boolean (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Boolean (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::IsDone),
             R"#(Returns true if the max distance has been found)#" )
        .def("ErrorStatus",
             (Standard_Integer (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Integer (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::ErrorStatus),
             R"#(Returns error status The possible values are: 0 - OK; 1 - null curve or surface or 2d curve; 2 - invalid parametric range; 3 - error in calculations.)#" )
        .def("MaxDistance",
             (Standard_Real (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Real (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::MaxDistance),
             R"#(Returns max distance)#" )
        .def("MaxParameter",
             (Standard_Real (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Real (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::MaxParameter),
             R"#(Returns parameter in which the distance is maximal)#" )
;


    static_cast<py::class_<GeomLib_MakeCurvefromApprox ,std::unique_ptr<GeomLib_MakeCurvefromApprox>  >>(m.attr("GeomLib_MakeCurvefromApprox"))
        .def(py::init< const AdvApprox_ApproxAFunction & >()  , py::arg("Approx") )
        .def("IsDone",
             (Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const) static_cast<Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const>(&GeomLib_MakeCurvefromApprox::IsDone),
             R"#(None)#" )
        .def("Nb1DSpaces",
             (Standard_Integer (GeomLib_MakeCurvefromApprox::*)() const) static_cast<Standard_Integer (GeomLib_MakeCurvefromApprox::*)() const>(&GeomLib_MakeCurvefromApprox::Nb1DSpaces),
             R"#(returns the number of 1D spaces of the Approx)#" )
        .def("Nb2DSpaces",
             (Standard_Integer (GeomLib_MakeCurvefromApprox::*)() const) static_cast<Standard_Integer (GeomLib_MakeCurvefromApprox::*)() const>(&GeomLib_MakeCurvefromApprox::Nb2DSpaces),
             R"#(returns the number of 3D spaces of the Approx)#" )
        .def("Nb3DSpaces",
             (Standard_Integer (GeomLib_MakeCurvefromApprox::*)() const) static_cast<Standard_Integer (GeomLib_MakeCurvefromApprox::*)() const>(&GeomLib_MakeCurvefromApprox::Nb3DSpaces),
             R"#(returns the number of 3D spaces of the Approx)#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer  ) const>(&GeomLib_MakeCurvefromApprox::Curve2d),
             R"#(returns a polynomial curve whose poles correspond to the Index2d 2D space if Index2d not in the Range [1,Nb2dSpaces] if the Approx is not Done)#"  , py::arg("Index2d"))
        .def("Curve2dFromTwo1d",
             (opencascade::handle<Geom2d_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&GeomLib_MakeCurvefromApprox::Curve2dFromTwo1d),
             R"#(returns a 2D curve building it from the 1D curve in x at Index1d and y at Index2d amongst the 1D curves if Index1d not in the Range [1,Nb1dSpaces] if Index2d not in the Range [1,Nb1dSpaces] if the Approx is not Done)#"  , py::arg("Index1d"),  py::arg("Index2d"))
        .def("Curve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&GeomLib_MakeCurvefromApprox::Curve2d),
             R"#(returns a rational curve whose poles correspond to the index2d of the 2D space and whose weights correspond to one dimensional space of index 1d if Index1d not in the Range [1,Nb1dSpaces] if Index2d not in the Range [1,Nb2dSpaces] if the Approx is not Done)#"  , py::arg("Index1d"),  py::arg("Index2d"))
        .def("Curve",
             (opencascade::handle<Geom_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer  ) const>(&GeomLib_MakeCurvefromApprox::Curve),
             R"#(returns a polynomial curve whose poles correspond to the Index3D 3D space if Index3D not in the Range [1,Nb3dSpaces] if the Approx is not Done)#"  , py::arg("Index3d"))
        .def("Curve",
             (opencascade::handle<Geom_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_BSplineCurve> (GeomLib_MakeCurvefromApprox::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&GeomLib_MakeCurvefromApprox::Curve),
             R"#(returns a rational curve whose poles correspond to the index3D of the 3D space and whose weights correspond to the index1d 1D space. if Index1D not in the Range [1,Nb1dSpaces] if Index3D not in the Range [1,Nb3dSpaces] if the Approx is not Done)#"  , py::arg("Index1D"),  py::arg("Index3D"))
        .def("IsDone",
             (Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const) static_cast<Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const>(&GeomLib_MakeCurvefromApprox::IsDone),
             R"#(None)#" )
;


    static_cast<py::class_<GeomLib_Interpolate ,std::unique_ptr<GeomLib_Interpolate>  >>(m.attr("GeomLib_Interpolate"))
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("Degree"),  py::arg("NumPoints"),  py::arg("Points"),  py::arg("Parameters") )
        .def("IsDone",
             (Standard_Boolean (GeomLib_Interpolate::*)() const) static_cast<Standard_Boolean (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::IsDone),
             R"#(returns if everything went OK)#" )
        .def("Error",
             (GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const) static_cast<GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::Error),
             R"#(returns the error type if any)#" )
        .def("Curve",
             (opencascade::handle<Geom_BSplineCurve> (GeomLib_Interpolate::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::Curve),
             R"#(returns the interpolated curve of the requested degree)#" )
        .def("IsDone",
             (Standard_Boolean (GeomLib_Interpolate::*)() const) static_cast<Standard_Boolean (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::IsDone),
             R"#(returns if everything went OK)#" )
        .def("Error",
             (GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const) static_cast<GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::Error),
             R"#(returns the error type if any)#" )
;

    register_default_constructor<GeomLib_Tool ,std::unique_ptr<GeomLib_Tool>>(m,"GeomLib_Tool");

    static_cast<py::class_<GeomLib_Tool ,std::unique_ptr<GeomLib_Tool>  >>(m.attr("GeomLib_Tool"))
        .def_static("Parameter_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  Standard_Real &  ) >(&GeomLib_Tool::Parameter),
                    R"#(Extracts the parameter of a 3D point lying on a 3D curve or at a distance less than the MaxDist value.)#"  , py::arg("Curve"),  py::arg("Point"),  py::arg("MaxDist"),  py::arg("U"))
        .def_static("Parameters_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&GeomLib_Tool::Parameters),
                    R"#(Extracts the parameter of a 3D point lying on a surface or at a distance less than the MaxDist value.)#"  , py::arg("Surface"),  py::arg("Point"),  py::arg("MaxDist"),  py::arg("U"),  py::arg("V"))
        .def_static("Parameter_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const Standard_Real ,  Standard_Real &  ) >(&GeomLib_Tool::Parameter),
                    R"#(Extracts the parameter of a 2D point lying on a 2D curve or at a distance less than the MaxDist value.)#"  , py::arg("Curve"),  py::arg("Point"),  py::arg("MaxDist"),  py::arg("U"))
;


    static_cast<py::class_<GeomLib_CheckBSplineCurve ,std::unique_ptr<GeomLib_CheckBSplineCurve>  >>(m.attr("GeomLib_CheckBSplineCurve"))
        .def(py::init< const opencascade::handle<Geom_BSplineCurve> &,const Standard_Real,const Standard_Real >()  , py::arg("Curve"),  py::arg("Tolerance"),  py::arg("AngularTolerance") )
        .def("IsDone",
             (Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const>(&GeomLib_CheckBSplineCurve::IsDone),
             R"#(None)#" )
        .def("NeedTangentFix",
             (void (GeomLib_CheckBSplineCurve::*)( Standard_Boolean & ,  Standard_Boolean &  ) const) static_cast<void (GeomLib_CheckBSplineCurve::*)( Standard_Boolean & ,  Standard_Boolean &  ) const>(&GeomLib_CheckBSplineCurve::NeedTangentFix),
             R"#(None)#"  , py::arg("FirstFlag"),  py::arg("SecondFlag"))
        .def("FixTangent",
             (void (GeomLib_CheckBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (GeomLib_CheckBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomLib_CheckBSplineCurve::FixTangent),
             R"#(None)#"  , py::arg("FirstFlag"),  py::arg("LastFlag"))
        .def("FixedTangent",
             (opencascade::handle<Geom_BSplineCurve> (GeomLib_CheckBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (GeomLib_CheckBSplineCurve::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomLib_CheckBSplineCurve::FixedTangent),
             R"#(modifies the curve by fixing the first or the last tangencies)#"  , py::arg("FirstFlag"),  py::arg("LastFlag"))
        .def("IsDone",
             (Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const>(&GeomLib_CheckBSplineCurve::IsDone),
             R"#(None)#" )
;

    register_default_constructor<GeomLib ,std::unique_ptr<GeomLib>>(m,"GeomLib");

    static_cast<py::class_<GeomLib ,std::unique_ptr<GeomLib>  >>(m.attr("GeomLib"))
        .def_static("To3d_s",
                    (opencascade::handle<Geom_Curve> (*)( const gp_Ax2 & ,  const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const gp_Ax2 & ,  const opencascade::handle<Geom2d_Curve> &  ) >(&GeomLib::To3d),
                    R"#(Computes the curve 3d from package Geom corresponding to curve 2d from package Geom2d, on the plan defined with the local coordinate system Position.)#"  , py::arg("Position"),  py::arg("Curve2d"))
        .def_static("GTransform_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_GTrsf2d &  ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_GTrsf2d &  ) >(&GeomLib::GTransform),
                    R"#(Computes the curve 3d from package Geom corresponding to the curve 3d from package Geom, transformed with the transformation <GTrsf> WARNING : this method may return a null Handle if it's impossible to compute the transformation of a curve. It's not implemented when : 1) the curve is an infinite parabola or hyperbola 2) the curve is an offsetcurve)#"  , py::arg("Curve"),  py::arg("GTrsf"))
        .def_static("SameRange_s",
                    (void (*)( const Standard_Real ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (*)( const Standard_Real ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom2d_Curve> &  ) >(&GeomLib::SameRange),
                    R"#(Make the curve Curve2dPtr have the imposed range First to List the most economic way, that is if it can change the range without changing the nature of the curve it will try to do that. Otherwise it will produce a Bspline curve that has the required range)#"  , py::arg("Tolerance"),  py::arg("Curve2dPtr"),  py::arg("First"),  py::arg("Last"),  py::arg("RequestedFirst"),  py::arg("RequestedLast"),  py::arg("NewCurve2dPtr"))
        .def_static("BuildCurve3d_s",
                    (void (*)( const Standard_Real ,  Adaptor3d_CurveOnSurface & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (*)( const Standard_Real ,  Adaptor3d_CurveOnSurface & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&GeomLib::BuildCurve3d),
                    R"#(None)#"  , py::arg("Tolerance"),  py::arg("CurvePtr"),  py::arg("FirstParameter"),  py::arg("LastParameter"),  py::arg("NewCurvePtr"),  py::arg("MaxDeviation"),  py::arg("AverageDeviation"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1),  py::arg("MaxDegree")=static_cast<const Standard_Integer>(14),  py::arg("MaxSegment")=static_cast<const Standard_Integer>(30))
        .def_static("AdjustExtremity_s",
                    (void (*)( opencascade::handle<Geom_BoundedCurve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Vec & ,  const gp_Vec &  ) ) static_cast<void (*)( opencascade::handle<Geom_BoundedCurve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Vec & ,  const gp_Vec &  ) >(&GeomLib::AdjustExtremity),
                    R"#(None)#"  , py::arg("Curve"),  py::arg("P1"),  py::arg("P2"),  py::arg("T1"),  py::arg("T2"))
        .def_static("ExtendCurveToPoint_s",
                    (void (*)( opencascade::handle<Geom_BoundedCurve> & ,  const gp_Pnt & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (*)( opencascade::handle<Geom_BoundedCurve> & ,  const gp_Pnt & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&GeomLib::ExtendCurveToPoint),
                    R"#(Extends the bounded curve Curve to the point Point. The extension is built: - at the end of the curve if After equals true, or - at the beginning of the curve if After equals false. The extension is performed according to a degree of continuity equal to Cont, which in its turn must be equal to 1, 2 or 3. This function converts the bounded curve Curve into a BSpline curve. Warning - Nothing is done, and Curve is not modified if Cont is not equal to 1, 2 or 3. - It is recommended that the extension should not be too large with respect to the size of the bounded curve Curve: Point must not be located too far from one of the extremities of Curve.)#"  , py::arg("Curve"),  py::arg("Point"),  py::arg("Cont"),  py::arg("After"))
        .def_static("ExtendSurfByLength_s",
                    (void (*)( opencascade::handle<Geom_BoundedSurface> & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (*)( opencascade::handle<Geom_BoundedSurface> & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomLib::ExtendSurfByLength),
                    R"#(Extends the bounded surface Surf along one of its boundaries. The chord length of the extension is equal to Length. The direction of the extension is given as: - the u parametric direction of Surf, if InU equals true, or - the v parametric direction of Surf, if InU equals false. In this parametric direction, the extension is built on the side of: - the last parameter of Surf, if After equals true, or - the first parameter of Surf, if After equals false. The extension is performed according to a degree of continuity equal to Cont, which in its turn must be equal to 1, 2 or 3. This function converts the bounded surface Surf into a BSpline surface. Warning - Nothing is done, and Surf is not modified if Cont is not equal to 1, 2 or 3. - It is recommended that Length, the size of the extension should not be too large with respect to the size of the bounded surface Surf. - Surf must not be a periodic BSpline surface in the parametric direction corresponding to the direction of extension.)#"  , py::arg("Surf"),  py::arg("Length"),  py::arg("Cont"),  py::arg("InU"),  py::arg("After"))
        .def_static("AxeOfInertia_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_Ax2 & ,  Standard_Boolean & ,  const Standard_Real  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_Ax2 & ,  Standard_Boolean & ,  const Standard_Real  ) >(&GeomLib::AxeOfInertia),
                    R"#(Compute axes of inertia, of some points -- -- -- <Axe>.Location() is the BaryCentre -- -- -- -- -- <Axe>.XDirection is the axe of upper inertia -- -- -- -- <Axe>.Direction is the Normal to the average plane -- -- -- IsSingular is True if points are on line -- Tol is used to determine singular cases.)#"  , py::arg("Points"),  py::arg("Axe"),  py::arg("IsSingular"),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-7))
        .def_static("Inertia_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_Pnt & ,  gp_Dir & ,  gp_Dir & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_Pnt & ,  gp_Dir & ,  gp_Dir & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&GeomLib::Inertia),
                    R"#(Compute principale axes of inertia, and dispertion value of some points.)#"  , py::arg("Points"),  py::arg("Bary"),  py::arg("XDir"),  py::arg("YDir"),  py::arg("Xgap"),  py::arg("YGap"),  py::arg("ZGap"))
        .def_static("RemovePointsFromArray_s",
                    (void (*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  opencascade::handle<TColStd_HArray1OfReal> &  ) >(&GeomLib::RemovePointsFromArray),
                    R"#(Warning! This assume that the InParameter is an increasing sequence of real number and it will not check for that : Unpredictable result can happen if this is not satisfied. It is the caller responsability to check for that property.)#"  , py::arg("NumPoints"),  py::arg("InParameters"),  py::arg("OutParameters"))
        .def_static("DensifyArray1OfReal_s",
                    (void (*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  opencascade::handle<TColStd_HArray1OfReal> &  ) >(&GeomLib::DensifyArray1OfReal),
                    R"#(this makes sure that there is at least MinNumPoints in OutParameters taking into account the parameters in the InParameters array provided those are in order, that is the sequence of real in the InParameter is strictly non decreasing)#"  , py::arg("MinNumPoints"),  py::arg("InParameters"),  py::arg("OutParameters"))
        .def_static("FuseIntervals_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Sequence<Standard_Real> & ,  const Standard_Real  ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Sequence<Standard_Real> & ,  const Standard_Real  ) >(&GeomLib::FuseIntervals),
                    R"#(None)#"  , py::arg("Interval1"),  py::arg("Interval2"),  py::arg("Fusion"),  py::arg("Confusion")=static_cast<const Standard_Real>(1.0e-9))
        .def_static("EvalMaxParametricDistance_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Real ,   const NCollection_Array1<Standard_Real> & ,  Standard_Real &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Real ,   const NCollection_Array1<Standard_Real> & ,  Standard_Real &  ) >(&GeomLib::EvalMaxParametricDistance),
                    R"#(this will compute the maximum distance at the parameters given in the Parameters array by evaluating each parameter the two curves and taking the maximum of the evaluated distance)#"  , py::arg("Curve"),  py::arg("AReferenceCurve"),  py::arg("Tolerance"),  py::arg("Parameters"),  py::arg("MaxDistance"))
        .def_static("EvalMaxDistanceAlongParameter_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Real ,   const NCollection_Array1<Standard_Real> & ,  Standard_Real &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Real ,   const NCollection_Array1<Standard_Real> & ,  Standard_Real &  ) >(&GeomLib::EvalMaxDistanceAlongParameter),
                    R"#(this will compute the maximum distancef at the parameters given in the Parameters array by projecting from the Curve to the reference curve and taking the minimum distance Than the maximum will be taken on those minimas.)#"  , py::arg("Curve"),  py::arg("AReferenceCurve"),  py::arg("Tolerance"),  py::arg("Parameters"),  py::arg("MaxDistance"))
        .def_static("CancelDenominatorDerivative_s",
                    (void (*)( opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (*)( opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomLib::CancelDenominatorDerivative),
                    R"#(Cancel,on the boudaries,the denominator first derivative in the directions wished by the user and set its value to 1.)#"  , py::arg("BSurf"),  py::arg("UDirection"),  py::arg("VDirection"))
        .def_static("NormEstim_s",
                    (Standard_Integer (*)( const opencascade::handle<Geom_Surface> & ,  const gp_Pnt2d & ,  const Standard_Real ,  gp_Dir &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Geom_Surface> & ,  const gp_Pnt2d & ,  const Standard_Real ,  gp_Dir &  ) >(&GeomLib::NormEstim),
                    R"#(None)#"  , py::arg("S"),  py::arg("UV"),  py::arg("Tol"),  py::arg("N"))
        .def_static("IsClosed_s",
                    (void (*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&GeomLib::IsClosed),
                    R"#(This method defines if opposite boundaries of surface coincide with given tolerance)#"  , py::arg("S"),  py::arg("Tol"),  py::arg("isUClosed"),  py::arg("isVClosed"))
        .def_static("IsBSplUClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomLib::IsBSplUClosed),
                    R"#(Returns true if the poles of U1 isoline and the poles of U2 isoline of surface are identical according to tolerance criterion. For rational surfaces Weights(i)*Poles(i) are checked.)#"  , py::arg("S"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
        .def_static("IsBSplVClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomLib::IsBSplVClosed),
                    R"#(Returns true if the poles of V1 isoline and the poles of V2 isoline of surface are identical according to tolerance criterion. For rational surfaces Weights(i)*Poles(i) are checked.)#"  , py::arg("S"),  py::arg("V1"),  py::arg("V2"),  py::arg("Tol"))
        .def_static("IsBzUClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_BezierSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_BezierSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomLib::IsBzUClosed),
                    R"#(Returns true if the poles of U1 isoline and the poles of U2 isoline of surface are identical according to tolerance criterion.)#"  , py::arg("S"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
        .def_static("IsBzVClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_BezierSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_BezierSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomLib::IsBzVClosed),
                    R"#(Returns true if the poles of V1 isoline and the poles of V2 isoline of surface are identical according to tolerance criterion.)#"  , py::arg("S"),  py::arg("V1"),  py::arg("V2"),  py::arg("Tol"))
;

// functions
// ./opencascade/GeomLib_LogSample.hxx
// ./opencascade/GeomLib_InterpolationErrors.hxx
// ./opencascade/GeomLib_MakeCurvefromApprox.hxx
// ./opencascade/GeomLib_PolyFunc.hxx
// ./opencascade/GeomLib_CheckBSplineCurve.hxx
// ./opencascade/GeomLib_DenominatorMultiplier.hxx
// ./opencascade/GeomLib_Interpolate.hxx
// ./opencascade/GeomLib_IsPlanarSurface.hxx
// ./opencascade/GeomLib_Array1OfMat.hxx
// ./opencascade/GeomLib.hxx
// ./opencascade/GeomLib_Check2dBSplineCurve.hxx
// ./opencascade/GeomLib_Tool.hxx
// ./opencascade/GeomLib_CheckCurveOnSurface.hxx
// ./opencascade/GeomLib_DenominatorMultiplierPtr.hxx

// operators

// register typdefs
// ./opencascade/GeomLib_LogSample.hxx
// ./opencascade/GeomLib_InterpolationErrors.hxx
// ./opencascade/GeomLib_MakeCurvefromApprox.hxx
// ./opencascade/GeomLib_PolyFunc.hxx
// ./opencascade/GeomLib_CheckBSplineCurve.hxx
// ./opencascade/GeomLib_DenominatorMultiplier.hxx
// ./opencascade/GeomLib_Interpolate.hxx
// ./opencascade/GeomLib_IsPlanarSurface.hxx
// ./opencascade/GeomLib_Array1OfMat.hxx
    register_template_NCollection_Array1<gp_Mat>(m,"GeomLib_Array1OfMat");  
// ./opencascade/GeomLib.hxx
// ./opencascade/GeomLib_Check2dBSplineCurve.hxx
// ./opencascade/GeomLib_Tool.hxx
// ./opencascade/GeomLib_CheckCurveOnSurface.hxx
// ./opencascade/GeomLib_DenominatorMultiplierPtr.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
