
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
#include <MAT2d_Circuit.hxx>
#include <MAT_Bisector.hxx>
#include <Geom2d_Geometry.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT2d_Tool2d.hxx>
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
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_SequenceOfSequenceOfGeometry.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_Array2OfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_SequenceOfConnexion.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MAT2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("MAT2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<MAT2d_BiInt , shared_ptr<MAT2d_BiInt>  >>(m.attr("MAT2d_BiInt"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("I1"),  py::arg("I2") )
    // custom constructors
    // methods
        .def("FirstIndex",
             (Standard_Integer (MAT2d_BiInt::*)() const) static_cast<Standard_Integer (MAT2d_BiInt::*)() const>(&MAT2d_BiInt::FirstIndex),
             R"#(None)#" )
        .def("SecondIndex",
             (Standard_Integer (MAT2d_BiInt::*)() const) static_cast<Standard_Integer (MAT2d_BiInt::*)() const>(&MAT2d_BiInt::SecondIndex),
             R"#(None)#" )
        .def("FirstIndex",
             (void (MAT2d_BiInt::*)( const Standard_Integer  ) ) static_cast<void (MAT2d_BiInt::*)( const Standard_Integer  ) >(&MAT2d_BiInt::FirstIndex),
             R"#(None)#"  , py::arg("I1"))
        .def("SecondIndex",
             (void (MAT2d_BiInt::*)( const Standard_Integer  ) ) static_cast<void (MAT2d_BiInt::*)( const Standard_Integer  ) >(&MAT2d_BiInt::SecondIndex),
             R"#(None)#"  , py::arg("I2"))
        .def("IsEqual",
             (Standard_Boolean (MAT2d_BiInt::*)( const MAT2d_BiInt &  ) const) static_cast<Standard_Boolean (MAT2d_BiInt::*)( const MAT2d_BiInt &  ) const>(&MAT2d_BiInt::IsEqual),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Circuit ,opencascade::handle<MAT2d_Circuit>  , Standard_Transient >>(m.attr("MAT2d_Circuit"))
    // constructors
        .def(py::init< const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("aJoinType")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (MAT2d_Circuit::*)( NCollection_Sequence<TColGeom2d_SequenceOfGeometry> & ,   const NCollection_Sequence<Standard_Boolean> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (MAT2d_Circuit::*)( NCollection_Sequence<TColGeom2d_SequenceOfGeometry> & ,   const NCollection_Sequence<Standard_Boolean> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&MAT2d_Circuit::Perform),
             R"#(None)#"  , py::arg("aFigure"),  py::arg("IsClosed"),  py::arg("IndRefLine"),  py::arg("Trigo"))
        .def("NumberOfItems",
             (Standard_Integer (MAT2d_Circuit::*)() const) static_cast<Standard_Integer (MAT2d_Circuit::*)() const>(&MAT2d_Circuit::NumberOfItems),
             R"#(Returns the Number of Items .)#" )
        .def("Value",
             (opencascade::handle<Geom2d_Geometry> (MAT2d_Circuit::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (MAT2d_Circuit::*)( const Standard_Integer  ) const>(&MAT2d_Circuit::Value),
             R"#(Returns the item at position <Index> in <me>.)#"  , py::arg("Index"))
        .def("LineLength",
             (Standard_Integer (MAT2d_Circuit::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (MAT2d_Circuit::*)( const Standard_Integer  ) const>(&MAT2d_Circuit::LineLength),
             R"#(Returns the number of items on the line <IndexLine>.)#"  , py::arg("IndexLine"))
        .def("RefToEqui",
             (const TColStd_SequenceOfInteger & (MAT2d_Circuit::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const TColStd_SequenceOfInteger & (MAT2d_Circuit::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&MAT2d_Circuit::RefToEqui),
             R"#(Returns the set of index of the items in <me>corresponding to the curve <IndCurve> on the line <IndLine> from the initial figure.)#"  , py::arg("IndLine"),  py::arg("IndCurve"))
        .def("Connexion",
             (opencascade::handle<MAT2d_Connexion> (MAT2d_Circuit::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<MAT2d_Connexion> (MAT2d_Circuit::*)( const Standard_Integer  ) const>(&MAT2d_Circuit::Connexion),
             R"#(Returns the Connexion on the item <Index> in me.)#"  , py::arg("Index"))
        .def("ConnexionOn",
             (Standard_Boolean (MAT2d_Circuit::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (MAT2d_Circuit::*)( const Standard_Integer  ) const>(&MAT2d_Circuit::ConnexionOn),
             R"#(Returns <True> is there is a connexion on the item <Index> in <me>.)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT2d_Circuit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT2d_Circuit::*)() const>(&MAT2d_Circuit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT2d_Circuit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT2d_Circuit::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Connexion ,opencascade::handle<MAT2d_Connexion>  , Standard_Transient >>(m.attr("MAT2d_Connexion"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("LineA"),  py::arg("LineB"),  py::arg("ItemA"),  py::arg("ItemB"),  py::arg("Distance"),  py::arg("ParameterOnA"),  py::arg("ParameterOnB"),  py::arg("PointA"),  py::arg("PointB") )
    // custom constructors
    // methods
        .def("IndexFirstLine",
             (Standard_Integer (MAT2d_Connexion::*)() const) static_cast<Standard_Integer (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::IndexFirstLine),
             R"#(Returns the Index on the first line.)#" )
        .def("IndexSecondLine",
             (Standard_Integer (MAT2d_Connexion::*)() const) static_cast<Standard_Integer (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::IndexSecondLine),
             R"#(Returns the Index on the Second line.)#" )
        .def("IndexItemOnFirst",
             (Standard_Integer (MAT2d_Connexion::*)() const) static_cast<Standard_Integer (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::IndexItemOnFirst),
             R"#(Returns the Index of the item on the first line.)#" )
        .def("IndexItemOnSecond",
             (Standard_Integer (MAT2d_Connexion::*)() const) static_cast<Standard_Integer (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::IndexItemOnSecond),
             R"#(Returns the Index of the item on the second line.)#" )
        .def("ParameterOnFirst",
             (Standard_Real (MAT2d_Connexion::*)() const) static_cast<Standard_Real (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::ParameterOnFirst),
             R"#(Returns the parameter of the point on the firstline.)#" )
        .def("ParameterOnSecond",
             (Standard_Real (MAT2d_Connexion::*)() const) static_cast<Standard_Real (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::ParameterOnSecond),
             R"#(Returns the parameter of the point on the secondline.)#" )
        .def("PointOnFirst",
             (gp_Pnt2d (MAT2d_Connexion::*)() const) static_cast<gp_Pnt2d (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::PointOnFirst),
             R"#(Returns the point on the firstline.)#" )
        .def("PointOnSecond",
             (gp_Pnt2d (MAT2d_Connexion::*)() const) static_cast<gp_Pnt2d (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::PointOnSecond),
             R"#(Returns the point on the secondline.)#" )
        .def("Distance",
             (Standard_Real (MAT2d_Connexion::*)() const) static_cast<Standard_Real (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::Distance),
             R"#(Returns the distance between the two points.)#" )
        .def("IndexFirstLine",
             (void (MAT2d_Connexion::*)( const Standard_Integer  ) ) static_cast<void (MAT2d_Connexion::*)( const Standard_Integer  ) >(&MAT2d_Connexion::IndexFirstLine),
             R"#(None)#"  , py::arg("anIndex"))
        .def("IndexSecondLine",
             (void (MAT2d_Connexion::*)( const Standard_Integer  ) ) static_cast<void (MAT2d_Connexion::*)( const Standard_Integer  ) >(&MAT2d_Connexion::IndexSecondLine),
             R"#(None)#"  , py::arg("anIndex"))
        .def("IndexItemOnFirst",
             (void (MAT2d_Connexion::*)( const Standard_Integer  ) ) static_cast<void (MAT2d_Connexion::*)( const Standard_Integer  ) >(&MAT2d_Connexion::IndexItemOnFirst),
             R"#(None)#"  , py::arg("anIndex"))
        .def("IndexItemOnSecond",
             (void (MAT2d_Connexion::*)( const Standard_Integer  ) ) static_cast<void (MAT2d_Connexion::*)( const Standard_Integer  ) >(&MAT2d_Connexion::IndexItemOnSecond),
             R"#(None)#"  , py::arg("anIndex"))
        .def("ParameterOnFirst",
             (void (MAT2d_Connexion::*)( const Standard_Real  ) ) static_cast<void (MAT2d_Connexion::*)( const Standard_Real  ) >(&MAT2d_Connexion::ParameterOnFirst),
             R"#(None)#"  , py::arg("aParameter"))
        .def("ParameterOnSecond",
             (void (MAT2d_Connexion::*)( const Standard_Real  ) ) static_cast<void (MAT2d_Connexion::*)( const Standard_Real  ) >(&MAT2d_Connexion::ParameterOnSecond),
             R"#(None)#"  , py::arg("aParameter"))
        .def("PointOnFirst",
             (void (MAT2d_Connexion::*)( const gp_Pnt2d &  ) ) static_cast<void (MAT2d_Connexion::*)( const gp_Pnt2d &  ) >(&MAT2d_Connexion::PointOnFirst),
             R"#(None)#"  , py::arg("aPoint"))
        .def("PointOnSecond",
             (void (MAT2d_Connexion::*)( const gp_Pnt2d &  ) ) static_cast<void (MAT2d_Connexion::*)( const gp_Pnt2d &  ) >(&MAT2d_Connexion::PointOnSecond),
             R"#(None)#"  , py::arg("aPoint"))
        .def("Distance",
             (void (MAT2d_Connexion::*)( const Standard_Real  ) ) static_cast<void (MAT2d_Connexion::*)( const Standard_Real  ) >(&MAT2d_Connexion::Distance),
             R"#(None)#"  , py::arg("aDistance"))
        .def("Reverse",
             (opencascade::handle<MAT2d_Connexion> (MAT2d_Connexion::*)() const) static_cast<opencascade::handle<MAT2d_Connexion> (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::Reverse),
             R"#(Returns the reverse connexion of <me>. the firstpoint is the secondpoint. the secondpoint is the firstpoint.)#" )
        .def("IsAfter",
             (Standard_Boolean (MAT2d_Connexion::*)( const opencascade::handle<MAT2d_Connexion> & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (MAT2d_Connexion::*)( const opencascade::handle<MAT2d_Connexion> & ,  const Standard_Real  ) const>(&MAT2d_Connexion::IsAfter),
             R"#(Returns <True> if my firstPoint is on the same line than the firstpoint of <aConnexion> and my firstpoint is after the firstpoint of <aConnexion> on the line. <aSense> = 1 if <aConnexion> is on the Left of its firstline, else <aSense> = -1.)#"  , py::arg("aConnexion"),  py::arg("aSense"))
        .def("Dump",
             (void (MAT2d_Connexion::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (MAT2d_Connexion::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&MAT2d_Connexion::Dump),
             R"#(Print <me>.)#"  , py::arg("Deep")=static_cast<const Standard_Integer>(0),  py::arg("Offset")=static_cast<const Standard_Integer>(0))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT2d_Connexion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT2d_Connexion::*)() const>(&MAT2d_Connexion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT2d_Connexion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT2d_Connexion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_CutCurve , shared_ptr<MAT2d_CutCurve>  >>(m.attr("MAT2d_CutCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom2d_Curve> & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("Perform",
             (void (MAT2d_CutCurve::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (MAT2d_CutCurve::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&MAT2d_CutCurve::Perform),
             R"#(Cuts a curve at the extremas of curvature and at the inflections.)#"  , py::arg("C"))
        .def("UnModified",
             (Standard_Boolean (MAT2d_CutCurve::*)() const) static_cast<Standard_Boolean (MAT2d_CutCurve::*)() const>(&MAT2d_CutCurve::UnModified),
             R"#(Returns True if the curve is not cut.)#" )
        .def("NbCurves",
             (Standard_Integer (MAT2d_CutCurve::*)() const) static_cast<Standard_Integer (MAT2d_CutCurve::*)() const>(&MAT2d_CutCurve::NbCurves),
             R"#(Returns the number of curves. it's allways greatest than 2.)#" )
        .def("Value",
             (opencascade::handle<Geom2d_TrimmedCurve> (MAT2d_CutCurve::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_TrimmedCurve> (MAT2d_CutCurve::*)( const Standard_Integer  ) const>(&MAT2d_CutCurve::Value),
             R"#(Returns the Indexth curve. raises if Index not in the range [1,NbCurves()])#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<MAT2d_MapBiIntHasher , shared_ptr<MAT2d_MapBiIntHasher>>(m,"MAT2d_MapBiIntHasher");

    static_cast<py::class_<MAT2d_MapBiIntHasher , shared_ptr<MAT2d_MapBiIntHasher>  >>(m.attr("MAT2d_MapBiIntHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const MAT2d_BiInt & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const MAT2d_BiInt & ,  const Standard_Integer  ) >(&MAT2d_MapBiIntHasher::HashCode),
                    R"#(Computes a hash code for the given key, in the range [1, theUpperBound])#"  , py::arg("theKey"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const MAT2d_BiInt & ,  const MAT2d_BiInt &  ) ) static_cast<Standard_Boolean (*)( const MAT2d_BiInt & ,  const MAT2d_BiInt &  ) >(&MAT2d_MapBiIntHasher::IsEqual),
                    R"#(None)#"  , py::arg("Key1"),  py::arg("Key2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Mat2d , shared_ptr<MAT2d_Mat2d>  >>(m.attr("MAT2d_Mat2d"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("CreateMat",
             (void (MAT2d_Mat2d::*)( MAT2d_Tool2d &  ) ) static_cast<void (MAT2d_Mat2d::*)( MAT2d_Tool2d &  ) >(&MAT2d_Mat2d::CreateMat),
             R"#(Algoritm of computation of the bisecting locus.)#"  , py::arg("aTool"))
        .def("CreateMatOpen",
             (void (MAT2d_Mat2d::*)( MAT2d_Tool2d &  ) ) static_cast<void (MAT2d_Mat2d::*)( MAT2d_Tool2d &  ) >(&MAT2d_Mat2d::CreateMatOpen),
             R"#(Algoritm of computation of the bisecting locus for open wire.)#"  , py::arg("aTool"))
        .def("IsDone",
             (Standard_Boolean (MAT2d_Mat2d::*)() const) static_cast<Standard_Boolean (MAT2d_Mat2d::*)() const>(&MAT2d_Mat2d::IsDone),
             R"#(Returns <TRUE> if CreateMat has succeeded.)#" )
        .def("Init",
             (void (MAT2d_Mat2d::*)() ) static_cast<void (MAT2d_Mat2d::*)() >(&MAT2d_Mat2d::Init),
             R"#(Initialize an iterator on the set of the roots of the trees of bisectors.)#" )
        .def("More",
             (Standard_Boolean (MAT2d_Mat2d::*)() const) static_cast<Standard_Boolean (MAT2d_Mat2d::*)() const>(&MAT2d_Mat2d::More),
             R"#(Return False if there is no more roots.)#" )
        .def("Next",
             (void (MAT2d_Mat2d::*)() ) static_cast<void (MAT2d_Mat2d::*)() >(&MAT2d_Mat2d::Next),
             R"#(Move to the next root.)#" )
        .def("Bisector",
             (opencascade::handle<MAT_Bisector> (MAT2d_Mat2d::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT2d_Mat2d::*)() const>(&MAT2d_Mat2d::Bisector),
             R"#(Returns the current root.)#" )
        .def("SemiInfinite",
             (Standard_Boolean (MAT2d_Mat2d::*)() const) static_cast<Standard_Boolean (MAT2d_Mat2d::*)() const>(&MAT2d_Mat2d::SemiInfinite),
             R"#(Returns True if there are semi_infinite bisectors. So there is a tree for each semi_infinte bisector.)#" )
        .def("NumberOfBisectors",
             (Standard_Integer (MAT2d_Mat2d::*)() const) static_cast<Standard_Integer (MAT2d_Mat2d::*)() const>(&MAT2d_Mat2d::NumberOfBisectors),
             R"#(Returns the total number of bisectors.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_MiniPath , shared_ptr<MAT2d_MiniPath>  >>(m.attr("MAT2d_MiniPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (MAT2d_MiniPath::*)(  const NCollection_Sequence<TColGeom2d_SequenceOfGeometry> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (MAT2d_MiniPath::*)(  const NCollection_Sequence<TColGeom2d_SequenceOfGeometry> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&MAT2d_MiniPath::Perform),
             R"#(Computes the path to link the lines in <Figure>. the path starts on the line of index <IndStart> <Sense> = True if the Circuit turns in the trigonometric sense.)#"  , py::arg("Figure"),  py::arg("IndStart"),  py::arg("Sense"))
        .def("RunOnConnexions",
             (void (MAT2d_MiniPath::*)() ) static_cast<void (MAT2d_MiniPath::*)() >(&MAT2d_MiniPath::RunOnConnexions),
             R"#(Run on the set of connexions to compute the path. the path is an exploration of the tree which contains the connexions and their reverses. if the tree of connexions is A / | B E / | | C D F)#" )
        .def("Path",
             (const MAT2d_SequenceOfConnexion & (MAT2d_MiniPath::*)() const) static_cast<const MAT2d_SequenceOfConnexion & (MAT2d_MiniPath::*)() const>(&MAT2d_MiniPath::Path),
             R"#(Returns the sequence of connexions corresponding to the path.)#" )
        .def("IsConnexionsFrom",
             (Standard_Boolean (MAT2d_MiniPath::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (MAT2d_MiniPath::*)( const Standard_Integer  ) const>(&MAT2d_MiniPath::IsConnexionsFrom),
             R"#(Returns <True> if there is one Connexion which starts on line designed by <Index>.)#"  , py::arg("Index"))
        .def("ConnexionsFrom",
             (MAT2d_SequenceOfConnexion & (MAT2d_MiniPath::*)( const Standard_Integer  ) ) static_cast<MAT2d_SequenceOfConnexion & (MAT2d_MiniPath::*)( const Standard_Integer  ) >(&MAT2d_MiniPath::ConnexionsFrom),
             R"#(Returns the connexions which start on line designed by <Index>.)#"  , py::arg("Index"))
        .def("IsRoot",
             (Standard_Boolean (MAT2d_MiniPath::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (MAT2d_MiniPath::*)( const Standard_Integer  ) const>(&MAT2d_MiniPath::IsRoot),
             R"#(Returns <True> if the line designed by <Index> is the root.)#"  , py::arg("Index"))
        .def("Father",
             (opencascade::handle<MAT2d_Connexion> (MAT2d_MiniPath::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<MAT2d_Connexion> (MAT2d_MiniPath::*)( const Standard_Integer  ) >(&MAT2d_MiniPath::Father),
             R"#(Returns the connexion which ends on line designed by <Index>.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT2d_Tool2d , shared_ptr<MAT2d_Tool2d>  >>(m.attr("MAT2d_Tool2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Sense",
             (void (MAT2d_Tool2d::*)( const MAT_Side  ) ) static_cast<void (MAT2d_Tool2d::*)( const MAT_Side  ) >(&MAT2d_Tool2d::Sense),
             R"#(<aSide> defines the side of the computation of the map.)#"  , py::arg("aside"))
        .def("SetJoinType",
             (void (MAT2d_Tool2d::*)( const GeomAbs_JoinType  ) ) static_cast<void (MAT2d_Tool2d::*)( const GeomAbs_JoinType  ) >(&MAT2d_Tool2d::SetJoinType),
             R"#(None)#"  , py::arg("aJoinType"))
        .def("InitItems",
             (void (MAT2d_Tool2d::*)( const opencascade::handle<MAT2d_Circuit> &  ) ) static_cast<void (MAT2d_Tool2d::*)( const opencascade::handle<MAT2d_Circuit> &  ) >(&MAT2d_Tool2d::InitItems),
             R"#(InitItems cuts the line in Items. this Items are the geometrics representations of the BasicElts from MAT.)#"  , py::arg("aCircuit"))
        .def("NumberOfItems",
             (Standard_Integer (MAT2d_Tool2d::*)() const) static_cast<Standard_Integer (MAT2d_Tool2d::*)() const>(&MAT2d_Tool2d::NumberOfItems),
             R"#(Returns the Number of Items .)#" )
        .def("ToleranceOfConfusion",
             (Standard_Real (MAT2d_Tool2d::*)() const) static_cast<Standard_Real (MAT2d_Tool2d::*)() const>(&MAT2d_Tool2d::ToleranceOfConfusion),
             R"#(Returns tolerance to test the confusion of two points.)#" )
        .def("FirstPoint",
             (Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer ,  Standard_Real &  ) ) static_cast<Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer ,  Standard_Real &  ) >(&MAT2d_Tool2d::FirstPoint),
             R"#(Creates the point at the origin of the bisector between anitem and the previous item. dist is the distance from the FirstPoint to <anitem>. Returns the index of this point in <theGeomPnts>.)#"  , py::arg("anitem"),  py::arg("dist"))
        .def("TangentBefore",
             (Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&MAT2d_Tool2d::TangentBefore),
             R"#(Creates the Tangent at the end of the Item defined by <anitem>. Returns the index of this vector in <theGeomVecs>)#"  , py::arg("anitem"),  py::arg("IsOpenResult"))
        .def("TangentAfter",
             (Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&MAT2d_Tool2d::TangentAfter),
             R"#(Creates the Reversed Tangent at the origin of the Item defined by <anitem>. Returns the index of this vector in <theGeomVecs>)#"  , py::arg("anitem"),  py::arg("IsOpenResult"))
        .def("Tangent",
             (Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer  ) ) static_cast<Standard_Integer (MAT2d_Tool2d::*)( const Standard_Integer  ) >(&MAT2d_Tool2d::Tangent),
             R"#(Creates the Tangent at the end of the bisector defined by <bisector>. Returns the index of this vector in <theGeomVecs>)#"  , py::arg("bisector"))
        .def("CreateBisector",
             (void (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<void (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT2d_Tool2d::CreateBisector),
             R"#(Creates the geometric bisector defined by <abisector>.)#"  , py::arg("abisector"))
        .def("TrimBisector",
             (Standard_Boolean (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> &  ) ) static_cast<Standard_Boolean (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> &  ) >(&MAT2d_Tool2d::TrimBisector),
             R"#(Trims the geometric bisector by the <firstparameter> of <abisector>. If the parameter is out of the bisector, Return FALSE. else Return True.)#"  , py::arg("abisector"))
        .def("TrimBisector",
             (Standard_Boolean (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> & ,  const Standard_Integer  ) >(&MAT2d_Tool2d::TrimBisector),
             R"#(Trims the geometric bisector by the point of index <apoint> in <theGeomPnts>. If the point is out of the bisector, Return FALSE. else Return True.)#"  , py::arg("abisector"),  py::arg("apoint"))
        .def("IntersectBisector",
             (Standard_Real (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> & ,  const opencascade::handle<MAT_Bisector> & ,  Standard_Integer &  ) ) static_cast<Standard_Real (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> & ,  const opencascade::handle<MAT_Bisector> & ,  Standard_Integer &  ) >(&MAT2d_Tool2d::IntersectBisector),
             R"#(Computes the point of intersection between the bisectors defined by <bisectorone> and <bisectortwo> . If this point exists, <intpnt> is its index in <theGeomPnts> and Return the distance of the point from the bisector else Return <RealLast>.)#"  , py::arg("bisectorone"),  py::arg("bisectortwo"),  py::arg("intpnt"))
        .def("Distance",
             (Standard_Real (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> & ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Real (MAT2d_Tool2d::*)( const opencascade::handle<MAT_Bisector> & ,  const Standard_Real ,  const Standard_Real  ) const>(&MAT2d_Tool2d::Distance),
             R"#(Returns the distance between the two points designed by their parameters on <abisector>.)#"  , py::arg("abisector"),  py::arg("param1"),  py::arg("param2"))
        .def("Dump",
             (void (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&MAT2d_Tool2d::Dump),
             R"#(displays informations about the bisector defined by <bisector>.)#"  , py::arg("bisector"),  py::arg("erease"))
        .def("GeomBis",
             (const Bisector_Bisec & (MAT2d_Tool2d::*)( const Standard_Integer  ) const) static_cast<const Bisector_Bisec & (MAT2d_Tool2d::*)( const Standard_Integer  ) const>(&MAT2d_Tool2d::GeomBis),
             R"#(Returns the <Bisec> of index <Index> in <theGeomBisectors>.)#"  , py::arg("Index"))
        .def("GeomElt",
             (opencascade::handle<Geom2d_Geometry> (MAT2d_Tool2d::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (MAT2d_Tool2d::*)( const Standard_Integer  ) const>(&MAT2d_Tool2d::GeomElt),
             R"#(Returns the Geometry of index <Index> in <theGeomElts>.)#"  , py::arg("Index"))
        .def("GeomPnt",
             (const gp_Pnt2d & (MAT2d_Tool2d::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt2d & (MAT2d_Tool2d::*)( const Standard_Integer  ) const>(&MAT2d_Tool2d::GeomPnt),
             R"#(Returns the point of index <Index> in the <theGeomPnts>.)#"  , py::arg("Index"))
        .def("GeomVec",
             (const gp_Vec2d & (MAT2d_Tool2d::*)( const Standard_Integer  ) const) static_cast<const gp_Vec2d & (MAT2d_Tool2d::*)( const Standard_Integer  ) const>(&MAT2d_Tool2d::GeomVec),
             R"#(Returns the vector of index <Index> in the <theGeomVecs>.)#"  , py::arg("Index"))
        .def("Circuit",
             (opencascade::handle<MAT2d_Circuit> (MAT2d_Tool2d::*)() const) static_cast<opencascade::handle<MAT2d_Circuit> (MAT2d_Tool2d::*)() const>(&MAT2d_Tool2d::Circuit),
             R"#(None)#" )
        .def("BisecFusion",
             (void (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (MAT2d_Tool2d::*)( const Standard_Integer ,  const Standard_Integer  ) >(&MAT2d_Tool2d::BisecFusion),
             R"#(None)#"  , py::arg("Index1"),  py::arg("Index2"))
        .def("ChangeGeomBis",
             (Bisector_Bisec & (MAT2d_Tool2d::*)( const Standard_Integer  ) ) static_cast<Bisector_Bisec & (MAT2d_Tool2d::*)( const Standard_Integer  ) >(&MAT2d_Tool2d::ChangeGeomBis),
             R"#(Returns the <Bisec> of index <Index> in <theGeomBisectors>.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/MAT2d_DataMapOfIntegerPnt2d.hxx
// ./opencascade/MAT2d_DataMapOfIntegerConnexion.hxx
// ./opencascade/MAT2d_SequenceOfSequenceOfCurve.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx
// ./opencascade/MAT2d_Circuit.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.hxx
// ./opencascade/MAT2d_SequenceOfSequenceOfGeometry.hxx
// ./opencascade/MAT2d_Tool2d.hxx
// ./opencascade/MAT2d_Array2OfConnexion.hxx
// ./opencascade/MAT2d_Connexion.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx
// ./opencascade/MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
// ./opencascade/MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
// ./opencascade/MAT2d_DataMapOfIntegerVec2d.hxx
// ./opencascade/MAT2d_MapBiIntHasher.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx
// ./opencascade/MAT2d_Mat2d.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerConnexion.hxx
// ./opencascade/MAT2d_MiniPath.hxx
// ./opencascade/MAT2d_SequenceOfConnexion.hxx
// ./opencascade/MAT2d_DataMapOfIntegerBisec.hxx
// ./opencascade/MAT2d_CutCurve.hxx
// ./opencascade/MAT2d_BiInt.hxx
// ./opencascade/MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx
// ./opencascade/MAT2d_DataMapOfBiIntInteger.hxx

// operators

// register typdefs
    register_template_NCollection_DataMap<Standard_Integer, gp_Pnt2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerPnt2d");  
    register_template_NCollection_Sequence<TColGeom2d_SequenceOfCurve>(m,"MAT2d_SequenceOfSequenceOfCurve");  
    register_template_NCollection_Sequence<TColGeom2d_SequenceOfGeometry>(m,"MAT2d_SequenceOfSequenceOfGeometry");  
    register_template_NCollection_Array2<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_Array2OfConnexion");  
    register_template_NCollection_DataMap<MAT2d_BiInt, TColStd_SequenceOfInteger, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntSequenceOfInteger");  
    register_template_NCollection_DataMap<Standard_Integer, MAT2d_SequenceOfConnexion, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerSequenceOfConnexion");  
    register_template_NCollection_DataMap<Standard_Integer, gp_Vec2d, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerVec2d");  
    register_template_NCollection_Sequence<opencascade::handle<MAT2d_Connexion> >(m,"MAT2d_SequenceOfConnexion");  
    register_template_NCollection_DataMap<Standard_Integer, Bisector_Bisec, TColStd_MapIntegerHasher>(m,"MAT2d_DataMapOfIntegerBisec");  
    register_template_NCollection_DataMap<MAT2d_BiInt, Standard_Integer, MAT2d_MapBiIntHasher>(m,"MAT2d_DataMapOfBiIntInteger");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
