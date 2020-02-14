
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <GeomAdaptor_HSurface.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>

// module includes
#include <GeomEvaluator_Curve.hxx>
#include <GeomEvaluator_OffsetCurve.hxx>
#include <GeomEvaluator_OffsetSurface.hxx>
#include <GeomEvaluator_Surface.hxx>
#include <GeomEvaluator_SurfaceOfExtrusion.hxx>
#include <GeomEvaluator_SurfaceOfRevolution.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomEvaluator(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomEvaluator"));


//Python trampoline classes
    class Py_GeomEvaluator_Curve : public GeomEvaluator_Curve{
    public:
        using GeomEvaluator_Curve::GeomEvaluator_Curve;
        
        
        // public pure virtual
        void D0(const Standard_Real theU,gp_Pnt & theValue) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D0,theU,theValue) };
        void D1(const Standard_Real theU,gp_Pnt & theValue,gp_Vec & theD1) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D1,theU,theValue,theD1) };
        void D2(const Standard_Real theU,gp_Pnt & theValue,gp_Vec & theD1,gp_Vec & theD2) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D2,theU,theValue,theD1,theD2) };
        void D3(const Standard_Real theU,gp_Pnt & theValue,gp_Vec & theD1,gp_Vec & theD2,gp_Vec & theD3) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D3,theU,theValue,theD1,theD2,theD3) };
        gp_Vec DN(const Standard_Real theU,const Standard_Integer theDerU) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,GeomEvaluator_Curve,DN,theU,theDerU) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_GeomEvaluator_Surface : public GeomEvaluator_Surface{
    public:
        using GeomEvaluator_Surface::GeomEvaluator_Surface;
        
        
        // public pure virtual
        void D0(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D0,theU,theV,theValue) };
        void D1(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue,gp_Vec & theD1U,gp_Vec & theD1V) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D1,theU,theV,theValue,theD1U,theD1V) };
        void D2(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue,gp_Vec & theD1U,gp_Vec & theD1V,gp_Vec & theD2U,gp_Vec & theD2V,gp_Vec & theD2UV) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D2,theU,theV,theValue,theD1U,theD1V,theD2U,theD2V,theD2UV) };
        void D3(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue,gp_Vec & theD1U,gp_Vec & theD1V,gp_Vec & theD2U,gp_Vec & theD2V,gp_Vec & theD2UV,gp_Vec & theD3U,gp_Vec & theD3V,gp_Vec & theD3UUV,gp_Vec & theD3UVV) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D3,theU,theV,theValue,theD1U,theD1V,theD2U,theD2V,theD2UV,theD3U,theD3V,theD3UUV,theD3UVV) };
        gp_Vec DN(const Standard_Real theU,const Standard_Real theV,const Standard_Integer theDerU,const Standard_Integer theDerV) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,GeomEvaluator_Surface,DN,theU,theV,theDerU,theDerV) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<GeomEvaluator_Curve ,opencascade::handle<GeomEvaluator_Curve> ,Py_GeomEvaluator_Curve , Standard_Transient >>(m.attr("GeomEvaluator_Curve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("D0",
             (void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&GeomEvaluator_Curve::D0),
             R"#(Value of 3D curve)#"  , py::arg("theU"),  py::arg("theValue"))
        .def("D1",
             (void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&GeomEvaluator_Curve::D1),
             R"#(Value and first derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"))
        .def("D2",
             (void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_Curve::D2),
             R"#(Value, first and second derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"))
        .def("D3",
             (void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_Curve::D3),
             R"#(Value, first, second and third derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"),  py::arg("theD3"))
        .def("DN",
             (gp_Vec (GeomEvaluator_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomEvaluator_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&GeomEvaluator_Curve::DN),
             R"#(Calculates N-th derivatives of curve, where N = theDerU. Raises if N < 1)#"  , py::arg("theU"),  py::arg("theDerU"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomEvaluator_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomEvaluator_Curve::*)() const>(&GeomEvaluator_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomEvaluator_Curve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomEvaluator_Curve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomEvaluator_Surface ,opencascade::handle<GeomEvaluator_Surface> ,Py_GeomEvaluator_Surface , Standard_Transient >>(m.attr("GeomEvaluator_Surface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("D0",
             (void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&GeomEvaluator_Surface::D0),
             R"#(Value of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"))
        .def("D1",
             (void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_Surface::D1),
             R"#(Value and first derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"))
        .def("D2",
             (void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_Surface::D2),
             R"#(Value, first and second derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"))
        .def("D3",
             (void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_Surface::D3),
             R"#(Value, first, second and third derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"),  py::arg("theD3U"),  py::arg("theD3V"),  py::arg("theD3UUV"),  py::arg("theD3UVV"))
        .def("DN",
             (gp_Vec (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomEvaluator_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&GeomEvaluator_Surface::DN),
             R"#(Calculates N-th derivatives of surface, where N = theDerU + theDerV.)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theDerU"),  py::arg("theDerV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomEvaluator_Surface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomEvaluator_Surface::*)() const>(&GeomEvaluator_Surface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomEvaluator_Surface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomEvaluator_Surface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomEvaluator_OffsetCurve ,opencascade::handle<GeomEvaluator_OffsetCurve>  , GeomEvaluator_Curve >>(m.attr("GeomEvaluator_OffsetCurve"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const gp_Dir & >()  , py::arg("theBase"),  py::arg("theOffset"),  py::arg("theDirection") )
        .def(py::init< const opencascade::handle<GeomAdaptor_HCurve> &,const Standard_Real,const gp_Dir & >()  , py::arg("theBase"),  py::arg("theOffset"),  py::arg("theDirection") )
    // custom constructors
    // methods
        .def("SetOffsetValue",
             (void (GeomEvaluator_OffsetCurve::*)( Standard_Real  ) ) static_cast<void (GeomEvaluator_OffsetCurve::*)( Standard_Real  ) >(&GeomEvaluator_OffsetCurve::SetOffsetValue),
             R"#(Change the offset value)#"  , py::arg("theOffset"))
        .def("SetOffsetDirection",
             (void (GeomEvaluator_OffsetCurve::*)( const gp_Dir &  ) ) static_cast<void (GeomEvaluator_OffsetCurve::*)( const gp_Dir &  ) >(&GeomEvaluator_OffsetCurve::SetOffsetDirection),
             R"#(None)#"  , py::arg("theDirection"))
        .def("D0",
             (void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&GeomEvaluator_OffsetCurve::D0),
             R"#(Value of curve)#"  , py::arg("theU"),  py::arg("theValue"))
        .def("D1",
             (void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&GeomEvaluator_OffsetCurve::D1),
             R"#(Value and first derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"))
        .def("D2",
             (void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_OffsetCurve::D2),
             R"#(Value, first and second derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"))
        .def("D3",
             (void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_OffsetCurve::D3),
             R"#(Value, first, second and third derivatives of curve)#"  , py::arg("theU"),  py::arg("theValue"),  py::arg("theD1"),  py::arg("theD2"),  py::arg("theD3"))
        .def("DN",
             (gp_Vec (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomEvaluator_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&GeomEvaluator_OffsetCurve::DN),
             R"#(Calculates N-th derivatives of curve, where N = theDeriv. Raises if N < 1)#"  , py::arg("theU"),  py::arg("theDeriv"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomEvaluator_OffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomEvaluator_OffsetCurve::*)() const>(&GeomEvaluator_OffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomEvaluator_OffsetCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomEvaluator_OffsetCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomEvaluator_OffsetSurface ,opencascade::handle<GeomEvaluator_OffsetSurface>  , GeomEvaluator_Surface >>(m.attr("GeomEvaluator_OffsetSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const opencascade::handle<Geom_OsculatingSurface> & >()  , py::arg("theBase"),  py::arg("theOffset"),  py::arg("theOscSurf")=static_cast<const opencascade::handle<Geom_OsculatingSurface> &>(Handle ( Geom_OsculatingSurface ) ( )) )
        .def(py::init< const opencascade::handle<GeomAdaptor_HSurface> &,const Standard_Real,const opencascade::handle<Geom_OsculatingSurface> & >()  , py::arg("theBase"),  py::arg("theOffset"),  py::arg("theOscSurf")=static_cast<const opencascade::handle<Geom_OsculatingSurface> &>(Handle ( Geom_OsculatingSurface ) ( )) )
    // custom constructors
    // methods
        .def("SetOffsetValue",
             (void (GeomEvaluator_OffsetSurface::*)( Standard_Real  ) ) static_cast<void (GeomEvaluator_OffsetSurface::*)( Standard_Real  ) >(&GeomEvaluator_OffsetSurface::SetOffsetValue),
             R"#(Change the offset value)#"  , py::arg("theOffset"))
        .def("D0",
             (void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&GeomEvaluator_OffsetSurface::D0),
             R"#(Value of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"))
        .def("D1",
             (void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_OffsetSurface::D1),
             R"#(Value and first derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"))
        .def("D2",
             (void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_OffsetSurface::D2),
             R"#(Value, first and second derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"))
        .def("D3",
             (void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_OffsetSurface::D3),
             R"#(Value, first, second and third derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"),  py::arg("theD3U"),  py::arg("theD3V"),  py::arg("theD3UUV"),  py::arg("theD3UVV"))
        .def("DN",
             (gp_Vec (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomEvaluator_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&GeomEvaluator_OffsetSurface::DN),
             R"#(Calculates N-th derivatives of surface, where N = theDerU + theDerV.)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theDerU"),  py::arg("theDerV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomEvaluator_OffsetSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomEvaluator_OffsetSurface::*)() const>(&GeomEvaluator_OffsetSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomEvaluator_OffsetSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomEvaluator_OffsetSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomEvaluator_SurfaceOfExtrusion ,opencascade::handle<GeomEvaluator_SurfaceOfExtrusion>  , GeomEvaluator_Surface >>(m.attr("GeomEvaluator_SurfaceOfExtrusion"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Dir & >()  , py::arg("theBase"),  py::arg("theExtrusionDir") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const gp_Dir & >()  , py::arg("theBase"),  py::arg("theExtrusionDir") )
    // custom constructors
    // methods
        .def("SetDirection",
             (void (GeomEvaluator_SurfaceOfExtrusion::*)( const gp_Dir &  ) ) static_cast<void (GeomEvaluator_SurfaceOfExtrusion::*)( const gp_Dir &  ) >(&GeomEvaluator_SurfaceOfExtrusion::SetDirection),
             R"#(! Changes the direction of extrusion)#"  , py::arg("theDirection"))
        .def("D0",
             (void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&GeomEvaluator_SurfaceOfExtrusion::D0),
             R"#(Value of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"))
        .def("D1",
             (void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_SurfaceOfExtrusion::D1),
             R"#(Value and first derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"))
        .def("D2",
             (void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_SurfaceOfExtrusion::D2),
             R"#(Value, first and second derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"))
        .def("D3",
             (void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_SurfaceOfExtrusion::D3),
             R"#(Value, first, second and third derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"),  py::arg("theD3U"),  py::arg("theD3V"),  py::arg("theD3UUV"),  py::arg("theD3UVV"))
        .def("DN",
             (gp_Vec (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomEvaluator_SurfaceOfExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&GeomEvaluator_SurfaceOfExtrusion::DN),
             R"#(Calculates N-th derivatives of surface, where N = theDerU + theDerV.)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theDerU"),  py::arg("theDerV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomEvaluator_SurfaceOfExtrusion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomEvaluator_SurfaceOfExtrusion::*)() const>(&GeomEvaluator_SurfaceOfExtrusion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomEvaluator_SurfaceOfExtrusion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomEvaluator_SurfaceOfExtrusion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomEvaluator_SurfaceOfRevolution ,opencascade::handle<GeomEvaluator_SurfaceOfRevolution>  , GeomEvaluator_Surface >>(m.attr("GeomEvaluator_SurfaceOfRevolution"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Dir &,const gp_Pnt & >()  , py::arg("theBase"),  py::arg("theRevolDir"),  py::arg("theRevolLoc") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const gp_Dir &,const gp_Pnt & >()  , py::arg("theBase"),  py::arg("theRevolDir"),  py::arg("theRevolLoc") )
    // custom constructors
    // methods
        .def("SetDirection",
             (void (GeomEvaluator_SurfaceOfRevolution::*)( const gp_Dir &  ) ) static_cast<void (GeomEvaluator_SurfaceOfRevolution::*)( const gp_Dir &  ) >(&GeomEvaluator_SurfaceOfRevolution::SetDirection),
             R"#(Change direction of the axis of revolution)#"  , py::arg("theDirection"))
        .def("SetLocation",
             (void (GeomEvaluator_SurfaceOfRevolution::*)( const gp_Pnt &  ) ) static_cast<void (GeomEvaluator_SurfaceOfRevolution::*)( const gp_Pnt &  ) >(&GeomEvaluator_SurfaceOfRevolution::SetLocation),
             R"#(Change location of the axis of revolution)#"  , py::arg("theLocation"))
        .def("SetAxis",
             (void (GeomEvaluator_SurfaceOfRevolution::*)( const gp_Ax1 &  ) ) static_cast<void (GeomEvaluator_SurfaceOfRevolution::*)( const gp_Ax1 &  ) >(&GeomEvaluator_SurfaceOfRevolution::SetAxis),
             R"#(Change the axis of revolution)#"  , py::arg("theAxis"))
        .def("D0",
             (void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&GeomEvaluator_SurfaceOfRevolution::D0),
             R"#(Value of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"))
        .def("D1",
             (void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_SurfaceOfRevolution::D1),
             R"#(Value and first derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"))
        .def("D2",
             (void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_SurfaceOfRevolution::D2),
             R"#(Value, first and second derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"))
        .def("D3",
             (void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomEvaluator_SurfaceOfRevolution::D3),
             R"#(Value, first, second and third derivatives of surface)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theValue"),  py::arg("theD1U"),  py::arg("theD1V"),  py::arg("theD2U"),  py::arg("theD2V"),  py::arg("theD2UV"),  py::arg("theD3U"),  py::arg("theD3V"),  py::arg("theD3UUV"),  py::arg("theD3UVV"))
        .def("DN",
             (gp_Vec (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomEvaluator_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&GeomEvaluator_SurfaceOfRevolution::DN),
             R"#(Calculates N-th derivatives of surface, where N = theDerU + theDerV.)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theDerU"),  py::arg("theDerV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomEvaluator_SurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomEvaluator_SurfaceOfRevolution::*)() const>(&GeomEvaluator_SurfaceOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomEvaluator_SurfaceOfRevolution::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomEvaluator_SurfaceOfRevolution::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomEvaluator_OffsetSurface.hxx
// ./opencascade/GeomEvaluator_OffsetCurve.hxx
// ./opencascade/GeomEvaluator_Curve.hxx
// ./opencascade/GeomEvaluator_Surface.hxx
// ./opencascade/GeomEvaluator_SurfaceOfRevolution.hxx
// ./opencascade/GeomEvaluator_SurfaceOfExtrusion.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
