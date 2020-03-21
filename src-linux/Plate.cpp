
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <gp_Pln.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <math_Matrix.hxx>
#include <Message_ProgressIndicator.hxx>
#include <gp_Lin.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>

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
// ./opencascade/Plate_SequenceOfPinpointConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_SequenceOfLinearScalarConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_Array1OfPinpointConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_SequenceOfLinearXYZConstraint.hxx
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
        .def(py::init< const gp_XYZ &,const gp_XYZ & >()  , py::arg("du"),  py::arg("dv") )
        .def(py::init< const Plate_D1 & >()  , py::arg("ref") )
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
        .def(py::init< const gp_XYZ &,const gp_XYZ &,const gp_XYZ & >()  , py::arg("duu"),  py::arg("duv"),  py::arg("dvv") )
        .def(py::init< const Plate_D2 & >()  , py::arg("ref") )
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
        .def(py::init< const gp_XYZ &,const gp_XYZ &,const gp_XYZ &,const gp_XYZ & >()  , py::arg("duuu"),  py::arg("duuv"),  py::arg("duvv"),  py::arg("dvvv") )
        .def(py::init< const Plate_D3 & >()  , py::arg("ref") )
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
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const Standard_Real,const Standard_Integer >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("IncrementalLoad")=static_cast<const Standard_Real>(1.0),  py::arg("orientation")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const Plate_D2 &,const Plate_D2 &,const Standard_Real,const Standard_Integer >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("D2S"),  py::arg("D2T"),  py::arg("IncrementalLoad")=static_cast<const Standard_Real>(1.0),  py::arg("orientation")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const Plate_D2 &,const Plate_D2 &,const Plate_D3 &,const Plate_D3 &,const Standard_Real,const Standard_Integer >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("D2S"),  py::arg("D2T"),  py::arg("D3S"),  py::arg("D3T"),  py::arg("IncrementalLoad")=static_cast<const Standard_Real>(1.0),  py::arg("orientation")=static_cast<const Standard_Integer>(0) )
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
        .def(py::init<  const NCollection_Sequence<gp_XY> & >()  , py::arg("SOfXY") )
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
        .def(py::init< const Plate_GtoCConstraint & >()  , py::arg("ref") )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 & >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T") )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const gp_XYZ & >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("nP") )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const Plate_D2 &,const Plate_D2 & >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("D2S"),  py::arg("D2T") )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const Plate_D2 &,const Plate_D2 &,const gp_XYZ & >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("D2S"),  py::arg("D2T"),  py::arg("nP") )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const Plate_D2 &,const Plate_D2 &,const Plate_D3 &,const Plate_D3 & >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("D2S"),  py::arg("D2T"),  py::arg("D3S"),  py::arg("D3T") )
        .def(py::init< const gp_XY &,const Plate_D1 &,const Plate_D1 &,const Plate_D2 &,const Plate_D2 &,const Plate_D3 &,const Plate_D3 &,const gp_XYZ & >()  , py::arg("point2d"),  py::arg("D1S"),  py::arg("D1T"),  py::arg("D2S"),  py::arg("D2T"),  py::arg("D3S"),  py::arg("D3T"),  py::arg("nP") )
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
        .def(py::init< const gp_XY &,const gp_Lin &,const Standard_Integer,const Standard_Integer >()  , py::arg("point2d"),  py::arg("lin"),  py::arg("iu")=static_cast<const Standard_Integer>(0),  py::arg("iv")=static_cast<const Standard_Integer>(0) )
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
        .def(py::init<  >()  )
        .def(py::init< const Plate_PinpointConstraint &,const gp_XYZ & >()  , py::arg("thePPC1"),  py::arg("theCoeff") )
        .def(py::init<  const NCollection_Array1<Plate_PinpointConstraint> &, const NCollection_Array1<gp_XYZ> & >()  , py::arg("thePPC"),  py::arg("theCoeff") )
        .def(py::init<  const NCollection_Array1<Plate_PinpointConstraint> &, const NCollection_Array2<gp_XYZ> & >()  , py::arg("thePPC"),  py::arg("theCoeff") )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("ColLen"),  py::arg("RowLen") )
    // custom constructors
    // methods
        .def("GetPPC",
             (const Plate_Array1OfPinpointConstraint & (Plate_LinearScalarConstraint::*)() const) static_cast<const Plate_Array1OfPinpointConstraint & (Plate_LinearScalarConstraint::*)() const>(&Plate_LinearScalarConstraint::GetPPC),
             R"#(None)#" )
        .def("Coeff",
             (const TColgp_Array2OfXYZ & (Plate_LinearScalarConstraint::*)() const) static_cast<const TColgp_Array2OfXYZ & (Plate_LinearScalarConstraint::*)() const>(&Plate_LinearScalarConstraint::Coeff),
             R"#(None)#" )
        .def("SetPPC",
             (void (Plate_LinearScalarConstraint::*)( const Standard_Integer , const Plate_PinpointConstraint & ) ) static_cast<void (Plate_LinearScalarConstraint::*)( const Standard_Integer , const Plate_PinpointConstraint & ) >(&Plate_LinearScalarConstraint::SetPPC),
             R"#(Sets the PinPointConstraint of index Index to Value raise if Index is greater than the length of PPC or the Row length of coeff or lower than 1)#"  , py::arg("Index"),  py::arg("Value"))
        .def("SetCoeff",
             (void (Plate_LinearScalarConstraint::*)( const Standard_Integer , const Standard_Integer , const gp_XYZ & ) ) static_cast<void (Plate_LinearScalarConstraint::*)( const Standard_Integer , const Standard_Integer , const gp_XYZ & ) >(&Plate_LinearScalarConstraint::SetCoeff),
             R"#(Sets the coeff of index (Row,Col) to Value raise if Row (respectively Col) is greater than the Row (respectively Column) length of coeff)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
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
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Array1<Plate_PinpointConstraint> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("thePPC"),  py::arg("theCoeff") )
        .def(py::init<  const NCollection_Array1<Plate_PinpointConstraint> &, const NCollection_Array2<Standard_Real> & >()  , py::arg("thePPC"),  py::arg("theCoeff") )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("ColLen"),  py::arg("RowLen") )
    // custom constructors
    // methods
        .def("GetPPC",
             (const Plate_Array1OfPinpointConstraint & (Plate_LinearXYZConstraint::*)() const) static_cast<const Plate_Array1OfPinpointConstraint & (Plate_LinearXYZConstraint::*)() const>(&Plate_LinearXYZConstraint::GetPPC),
             R"#(None)#" )
        .def("Coeff",
             (const TColStd_Array2OfReal & (Plate_LinearXYZConstraint::*)() const) static_cast<const TColStd_Array2OfReal & (Plate_LinearXYZConstraint::*)() const>(&Plate_LinearXYZConstraint::Coeff),
             R"#(None)#" )
        .def("SetPPC",
             (void (Plate_LinearXYZConstraint::*)( const Standard_Integer , const Plate_PinpointConstraint & ) ) static_cast<void (Plate_LinearXYZConstraint::*)( const Standard_Integer , const Plate_PinpointConstraint & ) >(&Plate_LinearXYZConstraint::SetPPC),
             R"#(Sets the PinPointConstraint of index Index to Value raise if Index is greater than the length of PPC or the Row length of coeff or lower than 1)#"  , py::arg("Index"),  py::arg("Value"))
        .def("SetCoeff",
             (void (Plate_LinearXYZConstraint::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (Plate_LinearXYZConstraint::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&Plate_LinearXYZConstraint::SetCoeff),
             R"#(Sets the coeff of index (Row,Col) to Value raise if Row (respectively Col) is greater than the Row (respectively Column) length of coeff)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
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
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const gp_XYZ &,const Standard_Integer,const Standard_Integer >()  , py::arg("point2d"),  py::arg("ImposedValue"),  py::arg("iu")=static_cast<const Standard_Integer>(0),  py::arg("iv")=static_cast<const Standard_Integer>(0) )
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
        .def(py::init< const gp_XY &,const gp_Pln &,const Standard_Integer,const Standard_Integer >()  , py::arg("point2d"),  py::arg("pln"),  py::arg("iu")=static_cast<const Standard_Integer>(0),  py::arg("iv")=static_cast<const Standard_Integer>(0) )
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
        .def(py::init<  >()  )
        .def(py::init< const Plate_Plate & >()  , py::arg("Ref") )
    // custom constructors
    // methods
        .def("Copy",
             (Plate_Plate & (Plate_Plate::*)( const Plate_Plate & ) ) static_cast<Plate_Plate & (Plate_Plate::*)( const Plate_Plate & ) >(&Plate_Plate::Copy),
             R"#(None)#"  , py::arg("Ref"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_PinpointConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_PinpointConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("PConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_LinearXYZConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_LinearXYZConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("LXYZConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_LinearScalarConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_LinearScalarConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("LScalarConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_GlobalTranslationConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_GlobalTranslationConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("GTConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_LineConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_LineConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("LConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_PlaneConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_PlaneConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("PConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_SampledCurveConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_SampledCurveConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("SCConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_GtoCConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_GtoCConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("GtoCConst"))
        .def("Load",
             (void (Plate_Plate::*)( const Plate_FreeGtoCConstraint & ) ) static_cast<void (Plate_Plate::*)( const Plate_FreeGtoCConstraint & ) >(&Plate_Plate::Load),
             R"#(None)#"  , py::arg("FGtoCConst"))
        .def("SolveTI",
             (void (Plate_Plate::*)( const Standard_Integer , const Standard_Real , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<void (Plate_Plate::*)( const Standard_Integer , const Standard_Real , const opencascade::handle<Message_ProgressIndicator> & ) >(&Plate_Plate::SolveTI),
             R"#(None)#"  , py::arg("ord")=static_cast<const Standard_Integer>(4),  py::arg("anisotropie")=static_cast<const Standard_Real>(1.0),  py::arg("aProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
        .def("IsDone",
             (Standard_Boolean (Plate_Plate::*)() const) static_cast<Standard_Boolean (Plate_Plate::*)() const>(&Plate_Plate::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("destroy",
             (void (Plate_Plate::*)() ) static_cast<void (Plate_Plate::*)() >(&Plate_Plate::destroy),
             R"#(None)#" )
        .def("Init",
             (void (Plate_Plate::*)() ) static_cast<void (Plate_Plate::*)() >(&Plate_Plate::Init),
             R"#(reset the Plate in the initial state ( same as after Create()))#" )
        .def("Evaluate",
             (gp_XYZ (Plate_Plate::*)( const gp_XY & ) const) static_cast<gp_XYZ (Plate_Plate::*)( const gp_XY & ) const>(&Plate_Plate::Evaluate),
             R"#(None)#"  , py::arg("point2d"))
        .def("EvaluateDerivative",
             (gp_XYZ (Plate_Plate::*)( const gp_XY & , const Standard_Integer , const Standard_Integer ) const) static_cast<gp_XYZ (Plate_Plate::*)( const gp_XY & , const Standard_Integer , const Standard_Integer ) const>(&Plate_Plate::EvaluateDerivative),
             R"#(None)#"  , py::arg("point2d"),  py::arg("iu"),  py::arg("iv"))
        .def("CoefPol",
             (void (Plate_Plate::*)( opencascade::handle<TColgp_HArray2OfXYZ> & ) const) static_cast<void (Plate_Plate::*)( opencascade::handle<TColgp_HArray2OfXYZ> & ) const>(&Plate_Plate::CoefPol),
             R"#(None)#"  , py::arg("Coefs"))
        .def("SetPolynomialPartOnly",
             (void (Plate_Plate::*)( const Standard_Boolean ) ) static_cast<void (Plate_Plate::*)( const Standard_Boolean ) >(&Plate_Plate::SetPolynomialPartOnly),
             R"#(None)#"  , py::arg("PPOnly")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Continuity",
             (Standard_Integer (Plate_Plate::*)() const) static_cast<Standard_Integer (Plate_Plate::*)() const>(&Plate_Plate::Continuity),
             R"#(None)#" )
        .def("UVConstraints",
             (void (Plate_Plate::*)( NCollection_Sequence<gp_XY> & ) const) static_cast<void (Plate_Plate::*)( NCollection_Sequence<gp_XY> & ) const>(&Plate_Plate::UVConstraints),
             R"#(None)#"  , py::arg("Seq"))
    // methods using call by reference i.s.o. return
        .def("UVBox",
             []( Plate_Plate &self   ){ Standard_Real  UMin; Standard_Real  UMax; Standard_Real  VMin; Standard_Real  VMax; self.UVBox(UMin,UMax,VMin,VMax); return std::make_tuple(UMin,UMax,VMin,VMax); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Plate_SampledCurveConstraint , shared_ptr<Plate_SampledCurveConstraint> >>(m.attr("Plate_SampledCurveConstraint"))
    // constructors
        .def(py::init<  const NCollection_Sequence<Plate_PinpointConstraint> &,const Standard_Integer >()  , py::arg("SOPPC"),  py::arg("n") )
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
// ./opencascade/Plate_D2.hxx
// ./opencascade/Plate_LinearXYZConstraint.hxx
// ./opencascade/Plate_LinearScalarConstraint.hxx
// ./opencascade/Plate_FreeGtoCConstraint.hxx
// ./opencascade/Plate_GlobalTranslationConstraint.hxx
// ./opencascade/Plate_D1.hxx
// ./opencascade/Plate_SequenceOfPinpointConstraint.hxx
// ./opencascade/Plate_PlaneConstraint.hxx
// ./opencascade/Plate_SequenceOfLinearScalarConstraint.hxx
// ./opencascade/Plate_Plate.hxx
// ./opencascade/Plate_Array1OfPinpointConstraint.hxx
// ./opencascade/Plate_LineConstraint.hxx
// ./opencascade/Plate_SequenceOfLinearXYZConstraint.hxx
// ./opencascade/Plate_SampledCurveConstraint.hxx
// ./opencascade/Plate_GtoCConstraint.hxx
// ./opencascade/Plate_PinpointConstraint.hxx
// ./opencascade/Plate_HArray1OfPinpointConstraint.hxx
// ./opencascade/Plate_D3.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Plate_PinpointConstraint>(m,"Plate_SequenceOfPinpointConstraint");
    register_template_NCollection_Sequence<Plate_LinearScalarConstraint>(m,"Plate_SequenceOfLinearScalarConstraint");
    register_template_NCollection_Array1<Plate_PinpointConstraint>(m,"Plate_Array1OfPinpointConstraint");
    register_template_NCollection_Sequence<Plate_LinearXYZConstraint>(m,"Plate_SequenceOfLinearXYZConstraint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
