
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <Geom_Surface.hxx>
#include <GeomPlate_Surface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Message_ProgressIndicator.hxx>
#include <GeomPlate_Surface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <Geom_Surface.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Line.hxx>

// module includes
#include <GeomPlate_Aij.hxx>
#include <GeomPlate_Array1OfHCurve.hxx>
#include <GeomPlate_Array1OfSequenceOfReal.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <GeomPlate_BuildPlateSurface.hxx>
#include <GeomPlate_CurveConstraint.hxx>
#include <GeomPlate_HArray1OfHCurve.hxx>
#include <GeomPlate_HArray1OfSequenceOfReal.hxx>
#include <GeomPlate_HSequenceOfCurveConstraint.hxx>
#include <GeomPlate_HSequenceOfPointConstraint.hxx>
#include <GeomPlate_MakeApprox.hxx>
#include <GeomPlate_PlateG0Criterion.hxx>
#include <GeomPlate_PlateG1Criterion.hxx>
#include <GeomPlate_PointConstraint.hxx>
#include <GeomPlate_SequenceOfAij.hxx>
#include <GeomPlate_SequenceOfCurveConstraint.hxx>
#include <GeomPlate_SequenceOfPointConstraint.hxx>
#include <GeomPlate_Surface.hxx>

// template related includes
// ./opencascade/GeomPlate_Array1OfSequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_SequenceOfAij.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_SequenceOfPointConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_SequenceOfCurveConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomPlate_Array1OfHCurve.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomPlate(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomPlate"));


//Python trampoline classes

// classes


    static_cast<py::class_<GeomPlate_Aij , shared_ptr<GeomPlate_Aij> >>(m.attr("GeomPlate_Aij"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const gp_Vec & >()  , py::arg("anInd1"),  py::arg("anInd2"),  py::arg("aVec") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_BuildAveragePlane , shared_ptr<GeomPlate_BuildAveragePlane> >>(m.attr("GeomPlate_BuildAveragePlane"))
    // constructors
        .def(py::init< const opencascade::handle<TColgp_HArray1OfPnt> &,const Standard_Integer,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("Pts"),  py::arg("NbBoundPoints"),  py::arg("Tol"),  py::arg("POption"),  py::arg("NOption") )
        .def(py::init<  const NCollection_Sequence<gp_Vec> &,const opencascade::handle<TColgp_HArray1OfPnt> & >()  , py::arg("Normals"),  py::arg("Pts") )
    // custom constructors
    // methods
        .def("Plane",
             (opencascade::handle<Geom_Plane> (GeomPlate_BuildAveragePlane::*)() const) static_cast<opencascade::handle<Geom_Plane> (GeomPlate_BuildAveragePlane::*)() const>(&GeomPlate_BuildAveragePlane::Plane),
             R"#(Return the average Plane.)#" )
        .def("Line",
             (opencascade::handle<Geom_Line> (GeomPlate_BuildAveragePlane::*)() const) static_cast<opencascade::handle<Geom_Line> (GeomPlate_BuildAveragePlane::*)() const>(&GeomPlate_BuildAveragePlane::Line),
             R"#(Return a Line when 2 eigenvalues are null.)#" )
        .def("IsPlane",
             (Standard_Boolean (GeomPlate_BuildAveragePlane::*)() const) static_cast<Standard_Boolean (GeomPlate_BuildAveragePlane::*)() const>(&GeomPlate_BuildAveragePlane::IsPlane),
             R"#(return OK if is a plane.)#" )
        .def("IsLine",
             (Standard_Boolean (GeomPlate_BuildAveragePlane::*)() const) static_cast<Standard_Boolean (GeomPlate_BuildAveragePlane::*)() const>(&GeomPlate_BuildAveragePlane::IsLine),
             R"#(return OK if is a line.)#" )
    // methods using call by reference i.s.o. return
        .def("MinMaxBox",
             []( GeomPlate_BuildAveragePlane &self   ){ Standard_Real  Umin; Standard_Real  Umax; Standard_Real  Vmin; Standard_Real  Vmax; self.MinMaxBox(Umin,Umax,Vmin,Vmax); return std::make_tuple(Umin,Umax,Vmin,Vmax); },
             R"#(computes the minimal box to include all normal projection points of the initial array on the plane.)#" )
    // static methods
        .def_static("HalfSpace_s",
                    (Standard_Boolean (*)(  const NCollection_Sequence<gp_Vec> & , NCollection_Sequence<gp_Vec> & , NCollection_Sequence<GeomPlate_Aij> & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)(  const NCollection_Sequence<gp_Vec> & , NCollection_Sequence<gp_Vec> & , NCollection_Sequence<GeomPlate_Aij> & , const Standard_Real , const Standard_Real ) >(&GeomPlate_BuildAveragePlane::HalfSpace),
                    R"#(None)#"  , py::arg("NewNormals"),  py::arg("Normals"),  py::arg("Bset"),  py::arg("LinTol"),  py::arg("AngTol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_BuildPlateSurface , shared_ptr<GeomPlate_BuildPlateSurface> >>(m.attr("GeomPlate_BuildPlateSurface"))
    // constructors
        .def(py::init< const opencascade::handle<TColStd_HArray1OfInteger> &,const opencascade::handle<GeomPlate_HArray1OfHCurve> &,const opencascade::handle<TColStd_HArray1OfInteger> &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("NPoints"),  py::arg("TabCurve"),  py::arg("Tang"),  py::arg("Degree"),  py::arg("NbIter")=static_cast<const Standard_Integer>(3),  py::arg("Tol2d")=static_cast<const Standard_Real>(0.00001),  py::arg("Tol3d")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1),  py::arg("Anisotropie")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Surf"),  py::arg("Degree")=static_cast<const Standard_Integer>(3),  py::arg("NbPtsOnCur")=static_cast<const Standard_Integer>(10),  py::arg("NbIter")=static_cast<const Standard_Integer>(3),  py::arg("Tol2d")=static_cast<const Standard_Real>(0.00001),  py::arg("Tol3d")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1),  py::arg("Anisotropie")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Degree")=static_cast<const Standard_Integer>(3),  py::arg("NbPtsOnCur")=static_cast<const Standard_Integer>(10),  py::arg("NbIter")=static_cast<const Standard_Integer>(3),  py::arg("Tol2d")=static_cast<const Standard_Real>(0.00001),  py::arg("Tol3d")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1),  py::arg("Anisotropie")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (GeomPlate_BuildPlateSurface::*)() ) static_cast<void (GeomPlate_BuildPlateSurface::*)() >(&GeomPlate_BuildPlateSurface::Init),
             R"#(Resets all constraints)#" )
        .def("LoadInitSurface",
             (void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<Geom_Surface> & ) >(&GeomPlate_BuildPlateSurface::LoadInitSurface),
             R"#(Loads the initial Surface)#"  , py::arg("Surf"))
        .def("Add",
             (void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<GeomPlate_CurveConstraint> & ) ) static_cast<void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<GeomPlate_CurveConstraint> & ) >(&GeomPlate_BuildPlateSurface::Add),
             R"#(Adds the linear constraint cont.)#"  , py::arg("Cont"))
        .def("SetNbBounds",
             (void (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) ) static_cast<void (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) >(&GeomPlate_BuildPlateSurface::SetNbBounds),
             R"#(None)#"  , py::arg("NbBounds"))
        .def("Add",
             (void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<GeomPlate_PointConstraint> & ) ) static_cast<void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<GeomPlate_PointConstraint> & ) >(&GeomPlate_BuildPlateSurface::Add),
             R"#(Adds the point constraint cont.)#"  , py::arg("Cont"))
        .def("Perform",
             (void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<void (GeomPlate_BuildPlateSurface::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&GeomPlate_BuildPlateSurface::Perform),
             R"#(Calls the algorithm and computes the plate surface using the loaded constraints. If no initial surface is given, the algorithm automatically computes one. Exceptions Standard_RangeError if the value of the constraint is null or if plate is not done.)#"  , py::arg("aProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
        .def("CurveConstraint",
             (opencascade::handle<GeomPlate_CurveConstraint> (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) const) static_cast<opencascade::handle<GeomPlate_CurveConstraint> (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) const>(&GeomPlate_BuildPlateSurface::CurveConstraint),
             R"#(returns the CurveConstraints of order order)#"  , py::arg("order"))
        .def("PointConstraint",
             (opencascade::handle<GeomPlate_PointConstraint> (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) const) static_cast<opencascade::handle<GeomPlate_PointConstraint> (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) const>(&GeomPlate_BuildPlateSurface::PointConstraint),
             R"#(returns the PointConstraint of order order)#"  , py::arg("order"))
        .def("Disc2dContour",
             (void (GeomPlate_BuildPlateSurface::*)( const Standard_Integer , NCollection_Sequence<gp_XY> & ) ) static_cast<void (GeomPlate_BuildPlateSurface::*)( const Standard_Integer , NCollection_Sequence<gp_XY> & ) >(&GeomPlate_BuildPlateSurface::Disc2dContour),
             R"#(None)#"  , py::arg("nbp"),  py::arg("Seq2d"))
        .def("Disc3dContour",
             (void (GeomPlate_BuildPlateSurface::*)( const Standard_Integer , const Standard_Integer , NCollection_Sequence<gp_XYZ> & ) ) static_cast<void (GeomPlate_BuildPlateSurface::*)( const Standard_Integer , const Standard_Integer , NCollection_Sequence<gp_XYZ> & ) >(&GeomPlate_BuildPlateSurface::Disc3dContour),
             R"#(None)#"  , py::arg("nbp"),  py::arg("iordre"),  py::arg("Seq3d"))
        .def("IsDone",
             (Standard_Boolean (GeomPlate_BuildPlateSurface::*)() const) static_cast<Standard_Boolean (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::IsDone),
             R"#(Tests whether computation of the plate has been completed.)#" )
        .def("Surface",
             (opencascade::handle<GeomPlate_Surface> (GeomPlate_BuildPlateSurface::*)() const) static_cast<opencascade::handle<GeomPlate_Surface> (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::Surface),
             R"#(Returns the result of the computation. This surface can then be used by GeomPlate_MakeApprox for converting the resulting surface into a BSpline.)#" )
        .def("SurfInit",
             (opencascade::handle<Geom_Surface> (GeomPlate_BuildPlateSurface::*)() const) static_cast<opencascade::handle<Geom_Surface> (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::SurfInit),
             R"#(Returns the initial surface)#" )
        .def("Sense",
             (opencascade::handle<TColStd_HArray1OfInteger> (GeomPlate_BuildPlateSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::Sense),
             R"#(Allows you to ensure that the array of curves returned by Curves2d has the correct orientation. Returns the orientation of the curves in the the array returned by Curves2d. Computation changes the orientation of these curves. Consequently, this method returns the orientation prior to computation.)#" )
        .def("Curves2d",
             (opencascade::handle<TColGeom2d_HArray1OfCurve> (GeomPlate_BuildPlateSurface::*)() const) static_cast<opencascade::handle<TColGeom2d_HArray1OfCurve> (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::Curves2d),
             R"#(Extracts the array of curves on the plate surface which correspond to the curve constraints set in Add.)#" )
        .def("Order",
             (opencascade::handle<TColStd_HArray1OfInteger> (GeomPlate_BuildPlateSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::Order),
             R"#(Returns the order of the curves in the array returned by Curves2d. Computation changes this order. Consequently, this method returns the order of the curves prior to computation.)#" )
        .def("G0Error",
             (Standard_Real (GeomPlate_BuildPlateSurface::*)() const) static_cast<Standard_Real (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::G0Error),
             R"#(Returns the max distance betwen the result and the constraints)#" )
        .def("G1Error",
             (Standard_Real (GeomPlate_BuildPlateSurface::*)() const) static_cast<Standard_Real (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::G1Error),
             R"#(Returns the max angle betwen the result and the constraints)#" )
        .def("G2Error",
             (Standard_Real (GeomPlate_BuildPlateSurface::*)() const) static_cast<Standard_Real (GeomPlate_BuildPlateSurface::*)() const>(&GeomPlate_BuildPlateSurface::G2Error),
             R"#(Returns the max difference of curvature betwen the result and the constraints)#" )
        .def("G0Error",
             (Standard_Real (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) ) static_cast<Standard_Real (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) >(&GeomPlate_BuildPlateSurface::G0Error),
             R"#(Returns the max distance between the result and the constraint Index)#"  , py::arg("Index"))
        .def("G1Error",
             (Standard_Real (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) ) static_cast<Standard_Real (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) >(&GeomPlate_BuildPlateSurface::G1Error),
             R"#(Returns the max angle between the result and the constraint Index)#"  , py::arg("Index"))
        .def("G2Error",
             (Standard_Real (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) ) static_cast<Standard_Real (GeomPlate_BuildPlateSurface::*)( const Standard_Integer ) >(&GeomPlate_BuildPlateSurface::G2Error),
             R"#(Returns the max difference of curvature between the result and the constraint Index)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_CurveConstraint ,opencascade::handle<GeomPlate_CurveConstraint> , Standard_Transient>>(m.attr("GeomPlate_CurveConstraint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Boundary"),  py::arg("Order"),  py::arg("NPt")=static_cast<const Standard_Integer>(10),  py::arg("TolDist")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1) )
    // custom constructors
    // methods
        .def("SetOrder",
             (void (GeomPlate_CurveConstraint::*)( const Standard_Integer ) ) static_cast<void (GeomPlate_CurveConstraint::*)( const Standard_Integer ) >(&GeomPlate_CurveConstraint::SetOrder),
             R"#(Allows you to set the order of continuity required for the constraints: G0, G1, and G2, controlled respectively by G0Criterion G1Criterion and G2Criterion.)#"  , py::arg("Order"))
        .def("Order",
             (Standard_Integer (GeomPlate_CurveConstraint::*)() const) static_cast<Standard_Integer (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::Order),
             R"#(Returns the order of constraint, one of G0, G1 or G2.)#" )
        .def("NbPoints",
             (Standard_Integer (GeomPlate_CurveConstraint::*)() const) static_cast<Standard_Integer (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::NbPoints),
             R"#(Returns the number of points on the curve used as a constraint. The default setting is 10. This parameter affects computation time, which increases by the cube of the number of points.)#" )
        .def("SetNbPoints",
             (void (GeomPlate_CurveConstraint::*)( const Standard_Integer ) ) static_cast<void (GeomPlate_CurveConstraint::*)( const Standard_Integer ) >(&GeomPlate_CurveConstraint::SetNbPoints),
             R"#(Allows you to set the number of points on the curve constraint. The default setting is 10. This parameter affects computation time, which increases by the cube of the number of points.)#"  , py::arg("NewNb"))
        .def("SetG0Criterion",
             (void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Law_Function> & ) ) static_cast<void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Law_Function> & ) >(&GeomPlate_CurveConstraint::SetG0Criterion),
             R"#(Allows you to set the G0 criterion. This is the law defining the greatest distance allowed between the constraint and the target surface for each point of the constraint. If this criterion is not set, TolDist, the distance tolerance from the constructor, is used.)#"  , py::arg("G0Crit"))
        .def("SetG1Criterion",
             (void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Law_Function> & ) ) static_cast<void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Law_Function> & ) >(&GeomPlate_CurveConstraint::SetG1Criterion),
             R"#(Allows you to set the G1 criterion. This is the law defining the greatest angle allowed between the constraint and the target surface. If this criterion is not set, TolAng, the angular tolerance from the constructor, is used. Raises ConstructionError if the curve is not on a surface)#"  , py::arg("G1Crit"))
        .def("SetG2Criterion",
             (void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Law_Function> & ) ) static_cast<void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Law_Function> & ) >(&GeomPlate_CurveConstraint::SetG2Criterion),
             R"#(None)#"  , py::arg("G2Crit"))
        .def("G0Criterion",
             (Standard_Real (GeomPlate_CurveConstraint::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomPlate_CurveConstraint::*)( const Standard_Real ) const>(&GeomPlate_CurveConstraint::G0Criterion),
             R"#(Returns the G0 criterion at the parametric point U on the curve. This is the greatest distance allowed between the constraint and the target surface at U.)#"  , py::arg("U"))
        .def("G1Criterion",
             (Standard_Real (GeomPlate_CurveConstraint::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomPlate_CurveConstraint::*)( const Standard_Real ) const>(&GeomPlate_CurveConstraint::G1Criterion),
             R"#(Returns the G1 criterion at the parametric point U on the curve. This is the greatest angle allowed between the constraint and the target surface at U. Raises ConstructionError if the curve is not on a surface)#"  , py::arg("U"))
        .def("G2Criterion",
             (Standard_Real (GeomPlate_CurveConstraint::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomPlate_CurveConstraint::*)( const Standard_Real ) const>(&GeomPlate_CurveConstraint::G2Criterion),
             R"#(Returns the G2 criterion at the parametric point U on the curve. This is the greatest difference in curvature allowed between the constraint and the target surface at U. Raises ConstructionError if the curve is not on a surface)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (GeomPlate_CurveConstraint::*)() const) static_cast<Standard_Real (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (GeomPlate_CurveConstraint::*)() const) static_cast<Standard_Real (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::LastParameter),
             R"#(None)#" )
        .def("Length",
             (Standard_Real (GeomPlate_CurveConstraint::*)() const) static_cast<Standard_Real (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::Length),
             R"#(None)#" )
        .def("LPropSurf",
             (GeomLProp_SLProps & (GeomPlate_CurveConstraint::*)( const Standard_Real ) ) static_cast<GeomLProp_SLProps & (GeomPlate_CurveConstraint::*)( const Standard_Real ) >(&GeomPlate_CurveConstraint::LPropSurf),
             R"#(None)#"  , py::arg("U"))
        .def("D0",
             (void (GeomPlate_CurveConstraint::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (GeomPlate_CurveConstraint::*)( const Standard_Real , gp_Pnt & ) const>(&GeomPlate_CurveConstraint::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (GeomPlate_CurveConstraint::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_CurveConstraint::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_CurveConstraint::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D2",
             (void (GeomPlate_CurveConstraint::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_CurveConstraint::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_CurveConstraint::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"),  py::arg("V4"),  py::arg("V5"))
        .def("Curve3d",
             (opencascade::handle<Adaptor3d_HCurve> (GeomPlate_CurveConstraint::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::Curve3d),
             R"#(None)#" )
        .def("SetCurve2dOnSurf",
             (void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Geom2d_Curve> & ) >(&GeomPlate_CurveConstraint::SetCurve2dOnSurf),
             R"#(loads a 2d curve associated the surface resulting of the constraints)#"  , py::arg("Curve2d"))
        .def("Curve2dOnSurf",
             (opencascade::handle<Geom2d_Curve> (GeomPlate_CurveConstraint::*)() const) static_cast<opencascade::handle<Geom2d_Curve> (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::Curve2dOnSurf),
             R"#(Returns a 2d curve associated the surface resulting of the constraints)#" )
        .def("SetProjectedCurve",
             (void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomPlate_CurveConstraint::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Real ) >(&GeomPlate_CurveConstraint::SetProjectedCurve),
             R"#(loads a 2d curve resulting from the normal projection of the curve on the initial surface)#"  , py::arg("Curve2d"),  py::arg("TolU"),  py::arg("TolV"))
        .def("ProjectedCurve",
             (opencascade::handle<Adaptor2d_HCurve2d> (GeomPlate_CurveConstraint::*)() const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::ProjectedCurve),
             R"#(Returns the projected curve resulting from the normal projection of the curve on the initial surface)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_CurveConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_CurveConstraint::*)() const>(&GeomPlate_CurveConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_CurveConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_CurveConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HArray1OfHCurve ,opencascade::handle<GeomPlate_HArray1OfHCurve> , GeomPlate_Array1OfHCurve, Standard_Transient>>(m.attr("GeomPlate_HArray1OfHCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Adaptor3d_HCurve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() const) static_cast<const GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() const>(&GeomPlate_HArray1OfHCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() ) static_cast<GeomPlate_Array1OfHCurve & (GeomPlate_HArray1OfHCurve::*)() >(&GeomPlate_HArray1OfHCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfHCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfHCurve::*)() const>(&GeomPlate_HArray1OfHCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HArray1OfHCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HArray1OfHCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HArray1OfSequenceOfReal ,opencascade::handle<GeomPlate_HArray1OfSequenceOfReal> , GeomPlate_Array1OfSequenceOfReal, Standard_Transient>>(m.attr("GeomPlate_HArray1OfSequenceOfReal"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_Sequence<double> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TColStd_SequenceOfReal> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() const) static_cast<const GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() const>(&GeomPlate_HArray1OfSequenceOfReal::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() ) static_cast<GeomPlate_Array1OfSequenceOfReal & (GeomPlate_HArray1OfSequenceOfReal::*)() >(&GeomPlate_HArray1OfSequenceOfReal::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfSequenceOfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HArray1OfSequenceOfReal::*)() const>(&GeomPlate_HArray1OfSequenceOfReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HArray1OfSequenceOfReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HArray1OfSequenceOfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HSequenceOfCurveConstraint ,opencascade::handle<GeomPlate_HSequenceOfCurveConstraint> , GeomPlate_SequenceOfCurveConstraint, Standard_Transient>>(m.attr("GeomPlate_HSequenceOfCurveConstraint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() const) static_cast<const GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() const>(&GeomPlate_HSequenceOfCurveConstraint::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (GeomPlate_HSequenceOfCurveConstraint::*)(  const opencascade::handle<GeomPlate_CurveConstraint> & ) ) static_cast<void (GeomPlate_HSequenceOfCurveConstraint::*)(  const opencascade::handle<GeomPlate_CurveConstraint> & ) >(&GeomPlate_HSequenceOfCurveConstraint::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (GeomPlate_HSequenceOfCurveConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> > & ) ) static_cast<void (GeomPlate_HSequenceOfCurveConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> > & ) >(&GeomPlate_HSequenceOfCurveConstraint::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() ) static_cast<GeomPlate_SequenceOfCurveConstraint & (GeomPlate_HSequenceOfCurveConstraint::*)() >(&GeomPlate_HSequenceOfCurveConstraint::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfCurveConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfCurveConstraint::*)() const>(&GeomPlate_HSequenceOfCurveConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HSequenceOfCurveConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HSequenceOfCurveConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_HSequenceOfPointConstraint ,opencascade::handle<GeomPlate_HSequenceOfPointConstraint> , GeomPlate_SequenceOfPointConstraint, Standard_Transient>>(m.attr("GeomPlate_HSequenceOfPointConstraint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() const) static_cast<const GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() const>(&GeomPlate_HSequenceOfPointConstraint::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (GeomPlate_HSequenceOfPointConstraint::*)(  const opencascade::handle<GeomPlate_PointConstraint> & ) ) static_cast<void (GeomPlate_HSequenceOfPointConstraint::*)(  const opencascade::handle<GeomPlate_PointConstraint> & ) >(&GeomPlate_HSequenceOfPointConstraint::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (GeomPlate_HSequenceOfPointConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> > & ) ) static_cast<void (GeomPlate_HSequenceOfPointConstraint::*)( NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> > & ) >(&GeomPlate_HSequenceOfPointConstraint::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() ) static_cast<GeomPlate_SequenceOfPointConstraint & (GeomPlate_HSequenceOfPointConstraint::*)() >(&GeomPlate_HSequenceOfPointConstraint::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfPointConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_HSequenceOfPointConstraint::*)() const>(&GeomPlate_HSequenceOfPointConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_HSequenceOfPointConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_HSequenceOfPointConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_MakeApprox , shared_ptr<GeomPlate_MakeApprox> >>(m.attr("GeomPlate_MakeApprox"))
    // constructors
        .def(py::init< const opencascade::handle<GeomPlate_Surface> &,const AdvApp2Var_Criterion &,const Standard_Real,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("SurfPlate"),  py::arg("PlateCrit"),  py::arg("Tol3d"),  py::arg("Nbmax"),  py::arg("dgmax"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1),  py::arg("EnlargeCoeff")=static_cast<const Standard_Real>(1.1) )
        .def(py::init< const opencascade::handle<GeomPlate_Surface> &,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("SurfPlate"),  py::arg("Tol3d"),  py::arg("Nbmax"),  py::arg("dgmax"),  py::arg("dmax"),  py::arg("CritOrder")=static_cast<const Standard_Integer>(0),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1),  py::arg("EnlargeCoeff")=static_cast<const Standard_Real>(1.1) )
    // custom constructors
    // methods
        .def("Surface",
             (opencascade::handle<Geom_BSplineSurface> (GeomPlate_MakeApprox::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomPlate_MakeApprox::*)() const>(&GeomPlate_MakeApprox::Surface),
             R"#(Returns the BSpline surface extracted from the GeomPlate_MakeApprox object.)#" )
        .def("ApproxError",
             (Standard_Real (GeomPlate_MakeApprox::*)() const) static_cast<Standard_Real (GeomPlate_MakeApprox::*)() const>(&GeomPlate_MakeApprox::ApproxError),
             R"#(Returns the error in computation of the approximation surface. This is the distance between the entire target BSpline surface and the entire original surface generated by BuildPlateSurface and converted by GeomPlate_Surface.)#" )
        .def("CriterionError",
             (Standard_Real (GeomPlate_MakeApprox::*)() const) static_cast<Standard_Real (GeomPlate_MakeApprox::*)() const>(&GeomPlate_MakeApprox::CriterionError),
             R"#(Returns the criterion error in computation of the approximation surface. This is estimated relative to the curve and point constraints only.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_PlateG0Criterion , shared_ptr<GeomPlate_PlateG0Criterion> , AdvApp2Var_Criterion>>(m.attr("GeomPlate_PlateG0Criterion"))
    // constructors
        .def(py::init<  const NCollection_Sequence<gp_XY> &, const NCollection_Sequence<gp_XYZ> &,const Standard_Real,const AdvApp2Var_CriterionType,const AdvApp2Var_CriterionRepartition >()  , py::arg("Data"),  py::arg("G0Data"),  py::arg("Maximum"),  py::arg("Type")=static_cast<const AdvApp2Var_CriterionType>(AdvApp2Var_Absolute),  py::arg("Repart")=static_cast<const AdvApp2Var_CriterionRepartition>(AdvApp2Var_Regular) )
    // custom constructors
    // methods
        .def("Value",
             (void (GeomPlate_PlateG0Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const) static_cast<void (GeomPlate_PlateG0Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const>(&GeomPlate_PlateG0Criterion::Value),
             R"#(None)#"  , py::arg("P"),  py::arg("C"))
        .def("IsSatisfied",
             (Standard_Boolean (GeomPlate_PlateG0Criterion::*)( const AdvApp2Var_Patch & ) const) static_cast<Standard_Boolean (GeomPlate_PlateG0Criterion::*)( const AdvApp2Var_Patch & ) const>(&GeomPlate_PlateG0Criterion::IsSatisfied),
             R"#(None)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_PlateG1Criterion , shared_ptr<GeomPlate_PlateG1Criterion> , AdvApp2Var_Criterion>>(m.attr("GeomPlate_PlateG1Criterion"))
    // constructors
        .def(py::init<  const NCollection_Sequence<gp_XY> &, const NCollection_Sequence<gp_XYZ> &,const Standard_Real,const AdvApp2Var_CriterionType,const AdvApp2Var_CriterionRepartition >()  , py::arg("Data"),  py::arg("G1Data"),  py::arg("Maximum"),  py::arg("Type")=static_cast<const AdvApp2Var_CriterionType>(AdvApp2Var_Absolute),  py::arg("Repart")=static_cast<const AdvApp2Var_CriterionRepartition>(AdvApp2Var_Regular) )
    // custom constructors
    // methods
        .def("Value",
             (void (GeomPlate_PlateG1Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const) static_cast<void (GeomPlate_PlateG1Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const>(&GeomPlate_PlateG1Criterion::Value),
             R"#(None)#"  , py::arg("P"),  py::arg("C"))
        .def("IsSatisfied",
             (Standard_Boolean (GeomPlate_PlateG1Criterion::*)( const AdvApp2Var_Patch & ) const) static_cast<Standard_Boolean (GeomPlate_PlateG1Criterion::*)( const AdvApp2Var_Patch & ) const>(&GeomPlate_PlateG1Criterion::IsSatisfied),
             R"#(None)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_PointConstraint ,opencascade::handle<GeomPlate_PointConstraint> , Standard_Transient>>(m.attr("GeomPlate_PointConstraint"))
    // constructors
        .def(py::init< const gp_Pnt &,const Standard_Integer,const Standard_Real >()  , py::arg("Pt"),  py::arg("Order"),  py::arg("TolDist")=static_cast<const Standard_Real>(0.0001) )
        .def(py::init< const Standard_Real,const Standard_Real,const opencascade::handle<Geom_Surface> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("U"),  py::arg("V"),  py::arg("Surf"),  py::arg("Order"),  py::arg("TolDist")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1) )
    // custom constructors
    // methods
        .def("SetOrder",
             (void (GeomPlate_PointConstraint::*)( const Standard_Integer ) ) static_cast<void (GeomPlate_PointConstraint::*)( const Standard_Integer ) >(&GeomPlate_PointConstraint::SetOrder),
             R"#(None)#"  , py::arg("Order"))
        .def("Order",
             (Standard_Integer (GeomPlate_PointConstraint::*)() const) static_cast<Standard_Integer (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::Order),
             R"#(Returns the order of constraint: G0, G1, and G2, controlled respectively by G0Criterion G1Criterion and G2Criterion.)#" )
        .def("SetG0Criterion",
             (void (GeomPlate_PointConstraint::*)( const Standard_Real ) ) static_cast<void (GeomPlate_PointConstraint::*)( const Standard_Real ) >(&GeomPlate_PointConstraint::SetG0Criterion),
             R"#(Allows you to set the G0 criterion. This is the law defining the greatest distance allowed between the constraint and the target surface. If this criterion is not set, {TolDist, the distance tolerance from the constructor, is used)#"  , py::arg("TolDist"))
        .def("SetG1Criterion",
             (void (GeomPlate_PointConstraint::*)( const Standard_Real ) ) static_cast<void (GeomPlate_PointConstraint::*)( const Standard_Real ) >(&GeomPlate_PointConstraint::SetG1Criterion),
             R"#(Allows you to set the G1 criterion. This is the law defining the greatest angle allowed between the constraint and the target surface. If this criterion is not set, TolAng, the angular tolerance from the constructor, is used. Raises ConstructionError if the point is not on the surface)#"  , py::arg("TolAng"))
        .def("SetG2Criterion",
             (void (GeomPlate_PointConstraint::*)( const Standard_Real ) ) static_cast<void (GeomPlate_PointConstraint::*)( const Standard_Real ) >(&GeomPlate_PointConstraint::SetG2Criterion),
             R"#(Allows you to set the G2 criterion. This is the law defining the greatest difference in curvature allowed between the constraint and the target surface. If this criterion is not set, TolCurv, the curvature tolerance from the constructor, is used. Raises ConstructionError if the point is not on the surface)#"  , py::arg("TolCurv"))
        .def("G0Criterion",
             (Standard_Real (GeomPlate_PointConstraint::*)() const) static_cast<Standard_Real (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::G0Criterion),
             R"#(Returns the G0 criterion. This is the greatest distance allowed between the constraint and the target surface.)#" )
        .def("G1Criterion",
             (Standard_Real (GeomPlate_PointConstraint::*)() const) static_cast<Standard_Real (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::G1Criterion),
             R"#(Returns the G1 criterion. This is the greatest angle allowed between the constraint and the target surface. Raises ConstructionError if the point is not on the surface.)#" )
        .def("G2Criterion",
             (Standard_Real (GeomPlate_PointConstraint::*)() const) static_cast<Standard_Real (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::G2Criterion),
             R"#(Returns the G2 criterion. This is the greatest difference in curvature allowed between the constraint and the target surface. Raises ConstructionError if the point is not on the surface)#" )
        .def("D0",
             (void (GeomPlate_PointConstraint::*)( gp_Pnt & ) const) static_cast<void (GeomPlate_PointConstraint::*)( gp_Pnt & ) const>(&GeomPlate_PointConstraint::D0),
             R"#(None)#"  , py::arg("P"))
        .def("D1",
             (void (GeomPlate_PointConstraint::*)( gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_PointConstraint::*)( gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_PointConstraint::D1),
             R"#(None)#"  , py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D2",
             (void (GeomPlate_PointConstraint::*)( gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_PointConstraint::*)( gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_PointConstraint::D2),
             R"#(None)#"  , py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"),  py::arg("V4"),  py::arg("V5"))
        .def("HasPnt2dOnSurf",
             (Standard_Boolean (GeomPlate_PointConstraint::*)() const) static_cast<Standard_Boolean (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::HasPnt2dOnSurf),
             R"#(None)#" )
        .def("SetPnt2dOnSurf",
             (void (GeomPlate_PointConstraint::*)( const gp_Pnt2d & ) ) static_cast<void (GeomPlate_PointConstraint::*)( const gp_Pnt2d & ) >(&GeomPlate_PointConstraint::SetPnt2dOnSurf),
             R"#(None)#"  , py::arg("Pnt"))
        .def("Pnt2dOnSurf",
             (gp_Pnt2d (GeomPlate_PointConstraint::*)() const) static_cast<gp_Pnt2d (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::Pnt2dOnSurf),
             R"#(None)#" )
        .def("LPropSurf",
             (GeomLProp_SLProps & (GeomPlate_PointConstraint::*)() ) static_cast<GeomLProp_SLProps & (GeomPlate_PointConstraint::*)() >(&GeomPlate_PointConstraint::LPropSurf),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_PointConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_PointConstraint::*)() const>(&GeomPlate_PointConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_PointConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_PointConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomPlate_Surface ,opencascade::handle<GeomPlate_Surface> , Geom_Surface>>(m.attr("GeomPlate_Surface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Plate_Plate & >()  , py::arg("Surfinit"),  py::arg("Surfinter") )
    // custom constructors
    // methods
        .def("UReverse",
             (void (GeomPlate_Surface::*)() ) static_cast<void (GeomPlate_Surface::*)() >(&GeomPlate_Surface::UReverse),
             R"#(Reverses the U direction of parametrization of <me>. The bounds of the surface are not modified.)#" )
        .def("UReversedParameter",
             (Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::UReversedParameter),
             R"#(Return the parameter on the Ureversed surface for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("VReverse",
             (void (GeomPlate_Surface::*)() ) static_cast<void (GeomPlate_Surface::*)() >(&GeomPlate_Surface::VReverse),
             R"#(Reverses the V direction of parametrization of <me>. The bounds of the surface are not modified.)#" )
        .def("VReversedParameter",
             (Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::VReversedParameter),
             R"#(Return the parameter on the Vreversed surface for the point of parameter V on <me>.)#"  , py::arg("V"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (GeomPlate_Surface::*)( const gp_Trsf & ) const) static_cast<gp_GTrsf2d (GeomPlate_Surface::*)( const gp_Trsf & ) const>(&GeomPlate_Surface::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("IsUClosed",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsUClosed),
             R"#(Is the surface closed in the parametric direction U ? Returns True if for each parameter V the distance between the point P (UFirst, V) and P (ULast, V) is lower or equal to Resolution from gp. UFirst and ULast are the parametric bounds in the U direction.)#" )
        .def("IsVClosed",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsVClosed),
             R"#(Is the surface closed in the parametric direction V ? Returns True if for each parameter U the distance between the point P (U, VFirst) and P (U, VLast) is lower or equal to Resolution from gp. VFirst and VLast are the parametric bounds in the V direction.)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsUPeriodic),
             R"#(Is the parametrization of a surface periodic in the direction U ? It is possible only if the surface is closed in this parametric direction and if the following relation is satisfied : for each parameter V the distance between the point P (U, V) and the point P (U + T, V) is lower or equal to Resolution from package gp. T is the parametric period and must be a constant.)#" )
        .def("UPeriod",
             (Standard_Real (GeomPlate_Surface::*)() const) static_cast<Standard_Real (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::UPeriod),
             R"#(returns the Uperiod. raises if the surface is not uperiodic.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomPlate_Surface::*)() const) static_cast<Standard_Boolean (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::IsVPeriodic),
             R"#(Is the parametrization of a surface periodic in the direction U ? It is possible only if the surface is closed in this parametric direction and if the following relation is satisfied : for each parameter V the distance between the point P (U, V) and the point P (U + T, V) is lower or equal to Resolution from package gp. T is the parametric period and must be a constant.)#" )
        .def("VPeriod",
             (Standard_Real (GeomPlate_Surface::*)() const) static_cast<Standard_Real (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::VPeriod),
             R"#(returns the Vperiod. raises if the surface is not vperiodic.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::UIso),
             R"#(Computes the U isoparametric curve.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)( const Standard_Real ) const>(&GeomPlate_Surface::VIso),
             R"#(Computes the V isoparametric curve.)#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (GeomPlate_Surface::*)() const) static_cast<GeomAbs_Shape (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::Continuity),
             R"#(Global Continuity of the surface in direction U and V : C0 : only geometric continuity, C1 : continuity of the first derivative all along the surface, C2 : continuity of the second derivative all along the surface, C3 : continuity of the third derivative all along the surface, G1 : tangency continuity all along the surface, G2 : curvature continuity all along the surface, CN : the order of continuity is infinite. Example : If the surface is C1 in the V parametric direction and C2 in the U parametric direction Shape = C1.)#" )
        .def("IsCNu",
             (Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const>(&GeomPlate_Surface::IsCNu),
             R"#(Returns the order of continuity of the surface in the U parametric direction. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (GeomPlate_Surface::*)( const Standard_Integer ) const>(&GeomPlate_Surface::IsCNv),
             R"#(Returns the order of continuity of the surface in the V parametric direction. Raised if N < 0.)#"  , py::arg("N"))
        .def("D0",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const>(&GeomPlate_Surface::D0),
             R"#(Computes the point of parameter U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_Surface::D1),
             R"#(Computes the point P and the first derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_Surface::D2),
             R"#(Computes the point P, the first and the second derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&GeomPlate_Surface::D3),
             R"#(Computes the point P, the first,the second and the third derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Vec (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const>(&GeomPlate_Surface::DN),
             R"#(---Purpose ; Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (GeomPlate_Surface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (GeomPlate_Surface::*)( const gp_Trsf & ) ) static_cast<void (GeomPlate_Surface::*)( const gp_Trsf & ) >(&GeomPlate_Surface::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations. (see class Transformation of the package Geom).)#"  , py::arg("T"))
        .def("CallSurfinit",
             (opencascade::handle<Geom_Surface> (GeomPlate_Surface::*)() const) static_cast<opencascade::handle<Geom_Surface> (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::CallSurfinit),
             R"#(None)#" )
        .def("SetBounds",
             (void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomPlate_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GeomPlate_Surface::SetBounds),
             R"#(None)#"  , py::arg("Umin"),  py::arg("Umax"),  py::arg("Vmin"),  py::arg("Vmax"))
        .def("Constraints",
             (void (GeomPlate_Surface::*)( NCollection_Sequence<gp_XY> & ) const) static_cast<void (GeomPlate_Surface::*)( NCollection_Sequence<gp_XY> & ) const>(&GeomPlate_Surface::Constraints),
             R"#(None)#"  , py::arg("Seq"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomPlate_Surface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomPlate_Surface::*)() const>(&GeomPlate_Surface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("TransformParameters",
             []( GeomPlate_Surface &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
        .def("Bounds",
             []( GeomPlate_Surface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(None)#" )
        .def("RealBounds",
             []( GeomPlate_Surface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.RealBounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomPlate_Surface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomPlate_Surface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomPlate_HSequenceOfPointConstraint.hxx
// ./opencascade/GeomPlate_Surface.hxx
// ./opencascade/GeomPlate_HArray1OfHCurve.hxx
// ./opencascade/GeomPlate_PlateG1Criterion.hxx
// ./opencascade/GeomPlate_BuildPlateSurface.hxx
// ./opencascade/GeomPlate_MakeApprox.hxx
// ./opencascade/GeomPlate_Array1OfSequenceOfReal.hxx
// ./opencascade/GeomPlate_Aij.hxx
// ./opencascade/GeomPlate_PointConstraint.hxx
// ./opencascade/GeomPlate_HSequenceOfCurveConstraint.hxx
// ./opencascade/GeomPlate_SequenceOfAij.hxx
// ./opencascade/GeomPlate_HArray1OfSequenceOfReal.hxx
// ./opencascade/GeomPlate_SequenceOfPointConstraint.hxx
// ./opencascade/GeomPlate_CurveConstraint.hxx
// ./opencascade/GeomPlate_PlateG0Criterion.hxx
// ./opencascade/GeomPlate_SequenceOfCurveConstraint.hxx
// ./opencascade/GeomPlate_Array1OfHCurve.hxx
// ./opencascade/GeomPlate_BuildAveragePlane.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<TColStd_SequenceOfReal>(m,"GeomPlate_Array1OfSequenceOfReal");
    register_template_NCollection_Sequence<GeomPlate_Aij>(m,"GeomPlate_SequenceOfAij");
    register_template_NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> >(m,"GeomPlate_SequenceOfPointConstraint");
    register_template_NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> >(m,"GeomPlate_SequenceOfCurveConstraint");
    register_template_NCollection_Array1<opencascade::handle<Adaptor3d_HCurve> >(m,"GeomPlate_Array1OfHCurve");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
