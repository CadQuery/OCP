
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Lin.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <math_Matrix.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <gp_Pln.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>

// module includes
#include <Plate_Array1OfPinpointConstraint.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_HArray1OfPinpointConstraint.hxx>
#include <Plate_LinearScalarConstraint.hxx>
#include <Plate_LinearXYZConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_PinpointConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_Plate.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <Plate_SequenceOfLinearScalarConstraint.hxx>
#include <Plate_SequenceOfLinearXYZConstraint.hxx>
#include <Plate_SequenceOfPinpointConstraint.hxx>

// template related includes
// ./opencascade/Plate_SequenceOfLinearScalarConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_SequenceOfPinpointConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_SequenceOfLinearXYZConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_Array1OfPinpointConstraint.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Plate(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Plate"));


//Python trampoline classes

// classes


    static_cast<py::class_<Plate_D1 , shared_ptr<Plate_D1> >>(m.attr("Plate_D1"))
    // constructors
    // custom constructors
    // methods
        .def("DU",
             (const gp_XYZ & (Plate_D1::*)() const) static_cast<const gp_XYZ & (Plate_D1::*)() const>(&Plate_D1::DU),
             R"#(None)#" )
        .def("DV",
             (const gp_XYZ & (Plate_D1::*)() const) static_cast<const gp_XYZ & (Plate_D1::*)() const>(&Plate_D1::DV),
             R"#(None)#" )
        .def("DU",
             (const gp_XYZ & (Plate_D1::*)() const) static_cast<const gp_XYZ & (Plate_D1::*)() const>(&Plate_D1::DU),
             R"#(None)#" )
        .def("DV",
             (const gp_XYZ & (Plate_D1::*)() const) static_cast<const gp_XYZ & (Plate_D1::*)() const>(&Plate_D1::DV),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_D2 , shared_ptr<Plate_D2> >>(m.attr("Plate_D2"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_D3 , shared_ptr<Plate_D3> >>(m.attr("Plate_D3"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_FreeGtoCConstraint , shared_ptr<Plate_FreeGtoCConstraint> >>(m.attr("Plate_FreeGtoCConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("nb_PPC",
             (const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const) static_cast<const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const>(&Plate_FreeGtoCConstraint::nb_PPC),
             R"#(None)#" )
        .def("GetPPC",
             (const Plate_PinpointConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const) static_cast<const Plate_PinpointConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const>(&Plate_FreeGtoCConstraint::GetPPC),
             R"#(None)#"  , py::arg("Index"))
        .def("nb_LSC",
             (const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const) static_cast<const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const>(&Plate_FreeGtoCConstraint::nb_LSC),
             R"#(None)#" )
        .def("LSC",
             (const Plate_LinearScalarConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const) static_cast<const Plate_LinearScalarConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const>(&Plate_FreeGtoCConstraint::LSC),
             R"#(None)#"  , py::arg("Index"))
        .def("nb_PPC",
             (const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const) static_cast<const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const>(&Plate_FreeGtoCConstraint::nb_PPC),
             R"#(None)#" )
        .def("GetPPC",
             (const Plate_PinpointConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const) static_cast<const Plate_PinpointConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const>(&Plate_FreeGtoCConstraint::GetPPC),
             R"#(None)#"  , py::arg("Index"))
        .def("nb_LSC",
             (const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const) static_cast<const Standard_Integer & (Plate_FreeGtoCConstraint::*)() const>(&Plate_FreeGtoCConstraint::nb_LSC),
             R"#(None)#" )
        .def("LSC",
             (const Plate_LinearScalarConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const) static_cast<const Plate_LinearScalarConstraint & (Plate_FreeGtoCConstraint::*)( const Standard_Integer ) const>(&Plate_FreeGtoCConstraint::LSC),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_GlobalTranslationConstraint , shared_ptr<Plate_GlobalTranslationConstraint> >>(m.attr("Plate_GlobalTranslationConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("LXYZC",
             (const Plate_LinearXYZConstraint & (Plate_GlobalTranslationConstraint::*)() const) static_cast<const Plate_LinearXYZConstraint & (Plate_GlobalTranslationConstraint::*)() const>(&Plate_GlobalTranslationConstraint::LXYZC),
             R"#(None)#" )
        .def("LXYZC",
             (const Plate_LinearXYZConstraint & (Plate_GlobalTranslationConstraint::*)() const) static_cast<const Plate_LinearXYZConstraint & (Plate_GlobalTranslationConstraint::*)() const>(&Plate_GlobalTranslationConstraint::LXYZC),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_GtoCConstraint , shared_ptr<Plate_GtoCConstraint> >>(m.attr("Plate_GtoCConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("nb_PPC",
             (const Standard_Integer & (Plate_GtoCConstraint::*)() const) static_cast<const Standard_Integer & (Plate_GtoCConstraint::*)() const>(&Plate_GtoCConstraint::nb_PPC),
             R"#(None)#" )
        .def("GetPPC",
             (const Plate_PinpointConstraint & (Plate_GtoCConstraint::*)( const Standard_Integer ) const) static_cast<const Plate_PinpointConstraint & (Plate_GtoCConstraint::*)( const Standard_Integer ) const>(&Plate_GtoCConstraint::GetPPC),
             R"#(None)#"  , py::arg("Index"))
        .def("D1SurfInit",
             (const Plate_D1 & (Plate_GtoCConstraint::*)() const) static_cast<const Plate_D1 & (Plate_GtoCConstraint::*)() const>(&Plate_GtoCConstraint::D1SurfInit),
             R"#(None)#" )
        .def("nb_PPC",
             (const Standard_Integer & (Plate_GtoCConstraint::*)() const) static_cast<const Standard_Integer & (Plate_GtoCConstraint::*)() const>(&Plate_GtoCConstraint::nb_PPC),
             R"#(None)#" )
        .def("GetPPC",
             (const Plate_PinpointConstraint & (Plate_GtoCConstraint::*)( const Standard_Integer ) const) static_cast<const Plate_PinpointConstraint & (Plate_GtoCConstraint::*)( const Standard_Integer ) const>(&Plate_GtoCConstraint::GetPPC),
             R"#(None)#"  , py::arg("Index"))
        .def("D1SurfInit",
             (const Plate_D1 & (Plate_GtoCConstraint::*)() const) static_cast<const Plate_D1 & (Plate_GtoCConstraint::*)() const>(&Plate_GtoCConstraint::D1SurfInit),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_HArray1OfPinpointConstraint ,opencascade::handle<Plate_HArray1OfPinpointConstraint> , Plate_Array1OfPinpointConstraint, Standard_Transient>>(m.attr("Plate_HArray1OfPinpointConstraint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const Plate_PinpointConstraint & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Plate_PinpointConstraint> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const Plate_Array1OfPinpointConstraint & (Plate_HArray1OfPinpointConstraint::*)() const) static_cast<const Plate_Array1OfPinpointConstraint & (Plate_HArray1OfPinpointConstraint::*)() const>(&Plate_HArray1OfPinpointConstraint::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Plate_Array1OfPinpointConstraint & (Plate_HArray1OfPinpointConstraint::*)() ) static_cast<Plate_Array1OfPinpointConstraint & (Plate_HArray1OfPinpointConstraint::*)() >(&Plate_HArray1OfPinpointConstraint::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Plate_HArray1OfPinpointConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Plate_HArray1OfPinpointConstraint::*)() const>(&Plate_HArray1OfPinpointConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Plate_HArray1OfPinpointConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Plate_HArray1OfPinpointConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_LineConstraint , shared_ptr<Plate_LineConstraint> >>(m.attr("Plate_LineConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("LSC",
             (const Plate_LinearScalarConstraint & (Plate_LineConstraint::*)() const) static_cast<const Plate_LinearScalarConstraint & (Plate_LineConstraint::*)() const>(&Plate_LineConstraint::LSC),
             R"#(None)#" )
        .def("LSC",
             (const Plate_LinearScalarConstraint & (Plate_LineConstraint::*)() const) static_cast<const Plate_LinearScalarConstraint & (Plate_LineConstraint::*)() const>(&Plate_LineConstraint::LSC),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_LinearScalarConstraint , shared_ptr<Plate_LinearScalarConstraint> >>(m.attr("Plate_LinearScalarConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("GetPPC",
             (const Plate_Array1OfPinpointConstraint & (Plate_LinearScalarConstraint::*)() const) static_cast<const Plate_Array1OfPinpointConstraint & (Plate_LinearScalarConstraint::*)() const>(&Plate_LinearScalarConstraint::GetPPC),
             R"#(None)#" )
        .def("Coeff",
             (const TColgp_Array2OfXYZ & (Plate_LinearScalarConstraint::*)() const) static_cast<const TColgp_Array2OfXYZ & (Plate_LinearScalarConstraint::*)() const>(&Plate_LinearScalarConstraint::Coeff),
             R"#(None)#" )
        .def("GetPPC",
             (const Plate_Array1OfPinpointConstraint & (Plate_LinearScalarConstraint::*)() const) static_cast<const Plate_Array1OfPinpointConstraint & (Plate_LinearScalarConstraint::*)() const>(&Plate_LinearScalarConstraint::GetPPC),
             R"#(None)#" )
        .def("Coeff",
             (const TColgp_Array2OfXYZ & (Plate_LinearScalarConstraint::*)() const) static_cast<const TColgp_Array2OfXYZ & (Plate_LinearScalarConstraint::*)() const>(&Plate_LinearScalarConstraint::Coeff),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_LinearXYZConstraint , shared_ptr<Plate_LinearXYZConstraint> >>(m.attr("Plate_LinearXYZConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("GetPPC",
             (const Plate_Array1OfPinpointConstraint & (Plate_LinearXYZConstraint::*)() const) static_cast<const Plate_Array1OfPinpointConstraint & (Plate_LinearXYZConstraint::*)() const>(&Plate_LinearXYZConstraint::GetPPC),
             R"#(None)#" )
        .def("Coeff",
             (const TColStd_Array2OfReal & (Plate_LinearXYZConstraint::*)() const) static_cast<const TColStd_Array2OfReal & (Plate_LinearXYZConstraint::*)() const>(&Plate_LinearXYZConstraint::Coeff),
             R"#(None)#" )
        .def("GetPPC",
             (const Plate_Array1OfPinpointConstraint & (Plate_LinearXYZConstraint::*)() const) static_cast<const Plate_Array1OfPinpointConstraint & (Plate_LinearXYZConstraint::*)() const>(&Plate_LinearXYZConstraint::GetPPC),
             R"#(None)#" )
        .def("Coeff",
             (const TColStd_Array2OfReal & (Plate_LinearXYZConstraint::*)() const) static_cast<const TColStd_Array2OfReal & (Plate_LinearXYZConstraint::*)() const>(&Plate_LinearXYZConstraint::Coeff),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_PinpointConstraint , shared_ptr<Plate_PinpointConstraint> >>(m.attr("Plate_PinpointConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("Pnt2d",
             (const gp_XY & (Plate_PinpointConstraint::*)() const) static_cast<const gp_XY & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Pnt2d),
             R"#(None)#" )
        .def("Idu",
             (const Standard_Integer & (Plate_PinpointConstraint::*)() const) static_cast<const Standard_Integer & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Idu),
             R"#(None)#" )
        .def("Idv",
             (const Standard_Integer & (Plate_PinpointConstraint::*)() const) static_cast<const Standard_Integer & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Idv),
             R"#(None)#" )
        .def("Value",
             (const gp_XYZ & (Plate_PinpointConstraint::*)() const) static_cast<const gp_XYZ & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Value),
             R"#(None)#" )
        .def("Pnt2d",
             (const gp_XY & (Plate_PinpointConstraint::*)() const) static_cast<const gp_XY & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Pnt2d),
             R"#(None)#" )
        .def("Idu",
             (const Standard_Integer & (Plate_PinpointConstraint::*)() const) static_cast<const Standard_Integer & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Idu),
             R"#(None)#" )
        .def("Idv",
             (const Standard_Integer & (Plate_PinpointConstraint::*)() const) static_cast<const Standard_Integer & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Idv),
             R"#(None)#" )
        .def("Value",
             (const gp_XYZ & (Plate_PinpointConstraint::*)() const) static_cast<const gp_XYZ & (Plate_PinpointConstraint::*)() const>(&Plate_PinpointConstraint::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_PlaneConstraint , shared_ptr<Plate_PlaneConstraint> >>(m.attr("Plate_PlaneConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("LSC",
             (const Plate_LinearScalarConstraint & (Plate_PlaneConstraint::*)() const) static_cast<const Plate_LinearScalarConstraint & (Plate_PlaneConstraint::*)() const>(&Plate_PlaneConstraint::LSC),
             R"#(None)#" )
        .def("LSC",
             (const Plate_LinearScalarConstraint & (Plate_PlaneConstraint::*)() const) static_cast<const Plate_LinearScalarConstraint & (Plate_PlaneConstraint::*)() const>(&Plate_PlaneConstraint::LSC),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_Plate , shared_ptr<Plate_Plate> >>(m.attr("Plate_Plate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_SampledCurveConstraint , shared_ptr<Plate_SampledCurveConstraint> >>(m.attr("Plate_SampledCurveConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("LXYZC",
             (const Plate_LinearXYZConstraint & (Plate_SampledCurveConstraint::*)() const) static_cast<const Plate_LinearXYZConstraint & (Plate_SampledCurveConstraint::*)() const>(&Plate_SampledCurveConstraint::LXYZC),
             R"#(None)#" )
        .def("LXYZC",
             (const Plate_LinearXYZConstraint & (Plate_SampledCurveConstraint::*)() const) static_cast<const Plate_LinearXYZConstraint & (Plate_SampledCurveConstraint::*)() const>(&Plate_SampledCurveConstraint::LXYZC),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Plate_LineConstraint.hxx
// ./opencascade/Plate_FreeGtoCConstraint.hxx
// ./opencascade/Plate_LinearXYZConstraint.hxx
// ./opencascade/Plate_GlobalTranslationConstraint.hxx
// ./opencascade/Plate_HArray1OfPinpointConstraint.hxx
// ./opencascade/Plate_D1.hxx
// ./opencascade/Plate_SequenceOfLinearScalarConstraint.hxx
// ./opencascade/Plate_Plate.hxx
// ./opencascade/Plate_SequenceOfPinpointConstraint.hxx
// ./opencascade/Plate_D3.hxx
// ./opencascade/Plate_D2.hxx
// ./opencascade/Plate_PinpointConstraint.hxx
// ./opencascade/Plate_SequenceOfLinearXYZConstraint.hxx
// ./opencascade/Plate_PlaneConstraint.hxx
// ./opencascade/Plate_SampledCurveConstraint.hxx
// ./opencascade/Plate_Array1OfPinpointConstraint.hxx
// ./opencascade/Plate_LinearScalarConstraint.hxx
// ./opencascade/Plate_GtoCConstraint.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Plate_LinearScalarConstraint>(m,"Plate_SequenceOfLinearScalarConstraint");
    register_template_NCollection_Sequence<Plate_PinpointConstraint>(m,"Plate_SequenceOfPinpointConstraint");
    register_template_NCollection_Sequence<Plate_LinearXYZConstraint>(m,"Plate_SequenceOfLinearXYZConstraint");
    register_template_NCollection_Array1<Plate_PinpointConstraint>(m,"Plate_Array1OfPinpointConstraint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
