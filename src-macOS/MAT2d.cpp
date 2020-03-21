
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <MAT2d_MiniPath.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT2d_Tool2d.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT_Bisector.hxx>
#include <Geom2d_Geometry.hxx>
#include <Geom2d_TrimmedCurve.hxx>

// module includes
#include <MAT2d_Array2OfConnexion.hxx>
#include <MAT2d_BiInt.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT2d_Connexion.hxx>
#include <MAT2d_CutCurve.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerConnexion.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx>
#include <MAT2d_DataMapOfBiIntInteger.hxx>
#include <MAT2d_DataMapOfBiIntSequenceOfInteger.hxx>
#include <MAT2d_DataMapOfIntegerBisec.hxx>
#include <MAT2d_DataMapOfIntegerConnexion.hxx>
#include <MAT2d_DataMapOfIntegerPnt2d.hxx>
#include <MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx>
#include <MAT2d_DataMapOfIntegerVec2d.hxx>
#include <MAT2d_MapBiIntHasher.hxx>
#include <MAT2d_Mat2d.hxx>
#include <MAT2d_MiniPath.hxx>
#include <MAT2d_SequenceOfConnexion.hxx>
#include <MAT2d_SequenceOfSequenceOfCurve.hxx>
#include <MAT2d_SequenceOfSequenceOfGeometry.hxx>
#include <MAT2d_Tool2d.hxx>

// template related includes
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_Array2OfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_SequenceOfConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerConnexion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfGeometry.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MAT2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("MAT2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<MAT2d_BiInt , shared_ptr<MAT2d_BiInt> >>(m.attr("MAT2d_BiInt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Circuit ,opencascade::handle<MAT2d_Circuit> , Standard_Transient>>(m.attr("MAT2d_Circuit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT2d_Circuit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT2d_Circuit::*)() const>(&MAT2d_Circuit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT2d_Circuit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Connexion ,opencascade::handle<MAT2d_Connexion> , Standard_Transient>>(m.attr("MAT2d_Connexion"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT2d_Connexion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT2d_Connexion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_CutCurve , shared_ptr<MAT2d_CutCurve> >>(m.attr("MAT2d_CutCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<MAT2d_MapBiIntHasher , shared_ptr<MAT2d_MapBiIntHasher>>(m,"MAT2d_MapBiIntHasher");

    static_cast<py::class_<MAT2d_MapBiIntHasher , shared_ptr<MAT2d_MapBiIntHasher> >>(m.attr("MAT2d_MapBiIntHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const MAT2d_BiInt & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const MAT2d_BiInt & , const Standard_Integer ) >(&MAT2d_MapBiIntHasher::HashCode),
                    R"#(Computes a hash code for the given key, in the range [1, theUpperBound])#"  , py::arg("theKey"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const MAT2d_BiInt & , const MAT2d_BiInt & ) ) static_cast<Standard_Boolean (*)( const MAT2d_BiInt & , const MAT2d_BiInt & ) >(&MAT2d_MapBiIntHasher::IsEqual),
                    R"#(None)#"  , py::arg("Key1"),  py::arg("Key2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Mat2d , shared_ptr<MAT2d_Mat2d> >>(m.attr("MAT2d_Mat2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_MiniPath , shared_ptr<MAT2d_MiniPath> >>(m.attr("MAT2d_MiniPath"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Tool2d , shared_ptr<MAT2d_Tool2d> >>(m.attr("MAT2d_Tool2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.hxx
// ./opencascade/MAT2d_MiniPath.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
// ./opencascade/MAT2d_Array2OfConnexion.hxx
// ./opencascade/MAT2d_Circuit.hxx
// ./opencascade/MAT2d_BiInt.hxx
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
// ./opencascade/MAT2d_SequenceOfConnexion.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerConnexion.hxx
// ./opencascade/MAT2d_Connexion.hxx
// ./opencascade/MAT2d_Mat2d.hxx
// ./opencascade/MAT2d_MapBiIntHasher.hxx
// ./opencascade/MAT2d_DataMapOfIntegerConnexion.hxx
// ./opencascade/MAT2d_SequenceOfSequenceOfCurve.hxx
// ./opencascade/MAT2d_Tool2d.hxx
// ./opencascade/MAT2d_CutCurve.hxx
// ./opencascade/MAT2d_SequenceOfSequenceOfGeometry.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<Standard_Integer, Bisector_Bisec, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerBisec");
    register_template_NCollection_Array2<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_Array2OfConnexion");
    register_template_NCollection_DataMap<MAT2d_BiInt, TColStd_SequenceOfInteger, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntSequenceOfInteger");
    register_template_NCollection_DataMap<Standard_Integer, gp_Vec2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerVec2d");
    register_template_NCollection_DataMap<MAT2d_BiInt, Standard_Integer, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntInteger");
    register_template_NCollection_DataMap<Standard_Integer, MAT2d_SequenceOfConnexion, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerSequenceOfConnexion");
    register_template_NCollection_Sequence<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_SequenceOfConnexion");
    register_template_NCollection_Sequence<TColGeom2d_SequenceOfCurve>(m,"MAT2d_SequenceOfSequenceOfCurve");
    register_template_NCollection_Sequence<TColGeom2d_SequenceOfGeometry>(m,"MAT2d_SequenceOfSequenceOfGeometry");
    register_template_NCollection_DataMap<Standard_Integer, gp_Pnt2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerPnt2d");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
