
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <CSLib_Class2d.hxx>
#include <CSLib_NormalPolyDef.hxx>

// module includes
#include <CSLib.hxx>
#include <CSLib_Class2d.hxx>
#include <CSLib_DerivativeStatus.hxx>
#include <CSLib_NormalPolyDef.hxx>
#include <CSLib_NormalStatus.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_CSLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("CSLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<CSLib , shared_ptr<CSLib>>(m,"CSLib");

    static_cast<py::class_<CSLib , shared_ptr<CSLib>  >>(m.attr("CSLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Normal_s",
                    (void (*)( const gp_Vec & ,  const gp_Vec & ,  const Standard_Real ,  CSLib_DerivativeStatus & ,  gp_Dir &  ) ) static_cast<void (*)( const gp_Vec & ,  const gp_Vec & ,  const Standard_Real ,  CSLib_DerivativeStatus & ,  gp_Dir &  ) >(&CSLib::Normal),
                    R"#(The following functions computes the normal to a surface inherits FunctionWithDerivative from math)#"  , py::arg("D1U"),  py::arg("D1V"),  py::arg("SinTol"),  py::arg("theStatus"),  py::arg("Normal"))
        .def_static("Normal_s",
                    (void (*)( const gp_Vec & ,  const gp_Vec & ,  const Standard_Real ,  CSLib_NormalStatus & ,  gp_Dir &  ) ) static_cast<void (*)( const gp_Vec & ,  const gp_Vec & ,  const Standard_Real ,  CSLib_NormalStatus & ,  gp_Dir &  ) >(&CSLib::Normal),
                    R"#(Computes the normal direction of a surface as the cross product between D1U and D1V.)#"  , py::arg("D1U"),  py::arg("D1V"),  py::arg("MagTol"),  py::arg("theStatus"),  py::arg("Normal"))
        .def_static("DNNUV_s",
                    (gp_Vec (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<gp_Vec> &  ) ) static_cast<gp_Vec (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<gp_Vec> &  ) >(&CSLib::DNNUV),
                    R"#(-- Computes the derivative of order Nu in the -- direction U and Nv in the direction V of the not -- normalized normal vector at the point P(U,V) The array DerSurf contain the derivative (i,j) of the surface for i=0,Nu+1 ; j=0,Nv+1)#"  , py::arg("Nu"),  py::arg("Nv"),  py::arg("DerSurf"))
        .def_static("DNNUV_s",
                    (gp_Vec (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<gp_Vec> & ,   const NCollection_Array2<gp_Vec> &  ) ) static_cast<gp_Vec (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<gp_Vec> & ,   const NCollection_Array2<gp_Vec> &  ) >(&CSLib::DNNUV),
                    R"#(Computes the derivatives of order Nu in the direction Nu and Nv in the direction Nv of the not normalized vector N(u,v) = dS1/du * dS2/dv (cases where we use an osculating surface) DerSurf1 are the derivatives of S1)#"  , py::arg("Nu"),  py::arg("Nv"),  py::arg("DerSurf1"),  py::arg("DerSurf2"))
        .def_static("DNNormal_s",
                    (gp_Vec (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<gp_Vec> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<gp_Vec> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&CSLib::DNNormal),
                    R"#(-- Computes the derivative of order Nu in the -- direction U and Nv in the direction V of the normalized normal vector at the point P(U,V) array DerNUV contain the derivative (i+Iduref,j+Idvref) of D1U ^ D1V for i=0,Nu ; j=0,Nv Iduref and Idvref correspond to a derivative of D1U ^ D1V which can be used to compute the normalized normal vector. In the regular cases , Iduref=Idvref=0.)#"  , py::arg("Nu"),  py::arg("Nv"),  py::arg("DerNUV"),  py::arg("Iduref")=static_cast<const Standard_Integer>(0),  py::arg("Idvref")=static_cast<const Standard_Integer>(0))
    // static methods using call by reference i.s.o. return
        .def_static("Normal_s",
                    []( const gp_Vec & D1U,const gp_Vec & D1V,const gp_Vec & D2U,const gp_Vec & D2V,const gp_Vec & D2UV,const Standard_Real SinTol,CSLib_NormalStatus & theStatus,gp_Dir & Normal ){ Standard_Boolean  Done; CSLib::Normal(D1U,D1V,D2U,D2V,D2UV,SinTol,Done,theStatus,Normal); return std::make_tuple(Done); },
                    R"#(If there is a singularity on the surface the previous method cannot compute the local normal. This method computes an approched normal direction of a surface. It does a limited development and needs the second derivatives on the surface as input data. It computes the normal as follow : N(u, v) = D1U ^ D1V N(u0+du,v0+dv) = N0 + DN/du(u0,v0) * du + DN/dv(u0,v0) * dv + Eps with Eps->0 so we can have the equivalence N ~ dN/du + dN/dv. DNu = ||DN/du|| and DNv = ||DN/dv||)#"  , py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("SinTol"),  py::arg("theStatus"),  py::arg("Normal"))
        .def_static("Normal_s",
                    []( const Standard_Integer MaxOrder, const NCollection_Array2<gp_Vec> & DerNUV,const Standard_Real MagTol,const Standard_Real U,const Standard_Real V,const Standard_Real Umin,const Standard_Real Umax,const Standard_Real Vmin,const Standard_Real Vmax,CSLib_NormalStatus & theStatus,gp_Dir & Normal ){ Standard_Integer  OrderU; Standard_Integer  OrderV; CSLib::Normal(MaxOrder,DerNUV,MagTol,U,V,Umin,Umax,Vmin,Vmax,theStatus,Normal,OrderU,OrderV); return std::make_tuple(OrderU,OrderV); },
                    R"#(find the first order k0 of deriviative of NUV where: foreach order < k0 all the derivatives of NUV are null all the derivatives of NUV corresponding to the order k0 are collinear and have the same sens. In this case, normal at U,V is unique.)#"  , py::arg("MaxOrder"),  py::arg("DerNUV"),  py::arg("MagTol"),  py::arg("U"),  py::arg("V"),  py::arg("Umin"),  py::arg("Umax"),  py::arg("Vmin"),  py::arg("Vmax"),  py::arg("theStatus"),  py::arg("Normal"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CSLib_Class2d , shared_ptr<CSLib_Class2d>  >>(m.attr("CSLib_Class2d"))
    // constructors
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("thePnts2d"),  py::arg("theTolU"),  py::arg("theTolV"),  py::arg("theUMin"),  py::arg("theVMin"),  py::arg("theUMax"),  py::arg("theVMax") )
        .def(py::init<  const NCollection_Sequence<gp_Pnt2d> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("thePnts2d"),  py::arg("theTolU"),  py::arg("theTolV"),  py::arg("theUMin"),  py::arg("theVMin"),  py::arg("theUMax"),  py::arg("theVMax") )
    // custom constructors
    // methods
        .def("SiDans",
             (Standard_Integer (CSLib_Class2d::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Integer (CSLib_Class2d::*)( const gp_Pnt2d &  ) const>(&CSLib_Class2d::SiDans),
             R"#(None)#"  , py::arg("P"))
        .def("SiDans_OnMode",
             (Standard_Integer (CSLib_Class2d::*)( const gp_Pnt2d & ,  const Standard_Real  ) const) static_cast<Standard_Integer (CSLib_Class2d::*)( const gp_Pnt2d & ,  const Standard_Real  ) const>(&CSLib_Class2d::SiDans_OnMode),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"))
        .def("InternalSiDans",
             (Standard_Integer (CSLib_Class2d::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Integer (CSLib_Class2d::*)( const Standard_Real ,  const Standard_Real  ) const>(&CSLib_Class2d::InternalSiDans),
             R"#(None)#"  , py::arg("X"),  py::arg("Y"))
        .def("InternalSiDansOuOn",
             (Standard_Integer (CSLib_Class2d::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Integer (CSLib_Class2d::*)( const Standard_Real ,  const Standard_Real  ) const>(&CSLib_Class2d::InternalSiDansOuOn),
             R"#(None)#"  , py::arg("X"),  py::arg("Y"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CSLib_NormalPolyDef , shared_ptr<CSLib_NormalPolyDef>  , math_FunctionWithDerivative >>(m.attr("CSLib_NormalPolyDef"))
    // constructors
        .def(py::init< const Standard_Integer, const NCollection_Array1<Standard_Real> & >()  , py::arg("k0"),  py::arg("li") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real ,  Standard_Real &  ) >(&CSLib_NormalPolyDef::Value),
             R"#(computes the value <F>of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real ,  Standard_Real &  ) >(&CSLib_NormalPolyDef::Derivative),
             R"#(computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&CSLib_NormalPolyDef::Values),
             R"#(computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/CSLib_NormalStatus.hxx
// ./opencascade/CSLib.hxx
// ./opencascade/CSLib_Class2d.hxx
// ./opencascade/CSLib_NormalPolyDef.hxx
// ./opencascade/CSLib_DerivativeStatus.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
