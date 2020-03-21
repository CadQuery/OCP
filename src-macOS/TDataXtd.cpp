
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Pnt.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Pln.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TNaming_NamedShape.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax1.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataXtd_Position.hxx>
#include <TDataXtd_Constraint.hxx>
#include <TDataXtd_Placement.hxx>
#include <TDataXtd_Geometry.hxx>
#include <TDataXtd_Point.hxx>
#include <TDataXtd_Axis.hxx>
#include <TDataXtd_Plane.hxx>
#include <TDataXtd_Pattern.hxx>
#include <TDataXtd_PatternStd.hxx>
#include <TDataXtd_Shape.hxx>
#include <TDataXtd_Triangulation.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Integer.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDataStd_Real.hxx>
#include <Standard_GUID.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Lin.hxx>
#include <TDF_RelocationTable.hxx>

// module includes
#include <TDataXtd.hxx>
#include <TDataXtd_Array1OfTrsf.hxx>
#include <TDataXtd_Axis.hxx>
#include <TDataXtd_Constraint.hxx>
#include <TDataXtd_ConstraintEnum.hxx>
#include <TDataXtd_Geometry.hxx>
#include <TDataXtd_GeometryEnum.hxx>
#include <TDataXtd_HArray1OfTrsf.hxx>
#include <TDataXtd_Pattern.hxx>
#include <TDataXtd_PatternStd.hxx>
#include <TDataXtd_Placement.hxx>
#include <TDataXtd_Plane.hxx>
#include <TDataXtd_Point.hxx>
#include <TDataXtd_Position.hxx>
#include <TDataXtd_Presentation.hxx>
#include <TDataXtd_Shape.hxx>
#include <TDataXtd_Triangulation.hxx>

// template related includes
// ./opencascade/TDataXtd_Array1OfTrsf.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TDataXtd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TDataXtd"));


//Python trampoline classes
    class Py_TDataXtd_Pattern : public TDataXtd_Pattern{
    public:
        using TDataXtd_Pattern::TDataXtd_Pattern;


        // public pure virtual
        const Standard_GUID & PatternID() const  override { PYBIND11_OVERLOAD_PURE(const Standard_GUID &,TDataXtd_Pattern,PatternID,) };
        Standard_Integer NbTrsfs() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,TDataXtd_Pattern,NbTrsfs,) };
        void ComputeTrsfs(NCollection_Array1<gp_Trsf> & Trsfs) const  override { PYBIND11_OVERLOAD_PURE(void,TDataXtd_Pattern,ComputeTrsfs,Trsfs) };

        void Restore(const opencascade::handle<TDF_Attribute> & anAttribute) override { PYBIND11_OVERLOAD_PURE(void,TDF_Attribute,Restore,anAttribute) };
        opencascade::handle<TDF_Attribute> NewEmpty() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TDF_Attribute>,TDF_Attribute,NewEmpty,) };
        void Paste(const opencascade::handle<TDF_Attribute> & intoAttribute,const opencascade::handle<TDF_RelocationTable> & aRelocationTable) const  override { PYBIND11_OVERLOAD_PURE(void,TDF_Attribute,Paste,intoAttribute,aRelocationTable) };

        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<TDataXtd , shared_ptr<TDataXtd>>(m,"TDataXtd");

    static_cast<py::class_<TDataXtd , shared_ptr<TDataXtd> >>(m.attr("TDataXtd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Axis ,opencascade::handle<TDataXtd_Axis> , TDF_Attribute>>(m.attr("TDataXtd_Axis"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Axis::*)() const) static_cast<const Standard_GUID & (TDataXtd_Axis::*)() const>(&TDataXtd_Axis::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_Axis::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Axis::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Axis::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Axis::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Axis::*)() const>(&TDataXtd_Axis::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Axis::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Axis::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Axis::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Axis::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Axis::*)( std::ostream & ) const>(&TDataXtd_Axis::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Axis::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Axis::*)() const>(&TDataXtd_Axis::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Axis::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Constraint ,opencascade::handle<TDataXtd_Constraint> , TDF_Attribute>>(m.attr("TDataXtd_Constraint"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Constraint::*)() const) static_cast<const Standard_GUID & (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_Constraint::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Constraint::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Constraint::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Constraint::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Constraint::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Constraint::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Constraint::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Constraint::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Constraint::*)( std::ostream & ) const>(&TDataXtd_Constraint::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("References",
             (void (TDataXtd_Constraint::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataXtd_Constraint::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataXtd_Constraint::References),
             R"#(None)#"  , py::arg("DS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Constraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Constraint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Geometry ,opencascade::handle<TDataXtd_Geometry> , TDF_Attribute>>(m.attr("TDataXtd_Geometry"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Geometry::*)() const) static_cast<const Standard_GUID & (TDataXtd_Geometry::*)() const>(&TDataXtd_Geometry::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_Geometry::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Geometry::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Geometry::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Geometry::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Geometry::*)() const>(&TDataXtd_Geometry::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Geometry::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Geometry::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Geometry::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Geometry::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Geometry::*)( std::ostream & ) const>(&TDataXtd_Geometry::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Geometry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Geometry::*)() const>(&TDataXtd_Geometry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Geometry::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_HArray1OfTrsf ,opencascade::handle<TDataXtd_HArray1OfTrsf> , TDataXtd_Array1OfTrsf, Standard_Transient>>(m.attr("TDataXtd_HArray1OfTrsf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_Trsf & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_Trsf> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TDataXtd_Array1OfTrsf & (TDataXtd_HArray1OfTrsf::*)() const) static_cast<const TDataXtd_Array1OfTrsf & (TDataXtd_HArray1OfTrsf::*)() const>(&TDataXtd_HArray1OfTrsf::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TDataXtd_Array1OfTrsf & (TDataXtd_HArray1OfTrsf::*)() ) static_cast<TDataXtd_Array1OfTrsf & (TDataXtd_HArray1OfTrsf::*)() >(&TDataXtd_HArray1OfTrsf::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_HArray1OfTrsf::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_HArray1OfTrsf::*)() const>(&TDataXtd_HArray1OfTrsf::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_HArray1OfTrsf::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_HArray1OfTrsf::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Pattern ,opencascade::handle<TDataXtd_Pattern>,Py_TDataXtd_Pattern , TDF_Attribute>>(m.attr("TDataXtd_Pattern"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Pattern::*)() const) static_cast<const Standard_GUID & (TDataXtd_Pattern::*)() const>(&TDataXtd_Pattern::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("PatternID",
             (const Standard_GUID & (TDataXtd_Pattern::*)() const) static_cast<const Standard_GUID & (TDataXtd_Pattern::*)() const>(&TDataXtd_Pattern::PatternID),
             R"#(Returns the ID of the attribute.)#" )
        .def("NbTrsfs",
             (Standard_Integer (TDataXtd_Pattern::*)() const) static_cast<Standard_Integer (TDataXtd_Pattern::*)() const>(&TDataXtd_Pattern::NbTrsfs),
             R"#(Give the number of transformation)#" )
        .def("ComputeTrsfs",
             (void (TDataXtd_Pattern::*)( NCollection_Array1<gp_Trsf> & ) const) static_cast<void (TDataXtd_Pattern::*)( NCollection_Array1<gp_Trsf> & ) const>(&TDataXtd_Pattern::ComputeTrsfs),
             R"#(Give the transformations)#"  , py::arg("Trsfs"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Pattern::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Pattern::*)() const>(&TDataXtd_Pattern::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Pattern::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Placement ,opencascade::handle<TDataXtd_Placement> , TDF_Attribute>>(m.attr("TDataXtd_Placement"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Placement::*)() const) static_cast<const Standard_GUID & (TDataXtd_Placement::*)() const>(&TDataXtd_Placement::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_Placement::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Placement::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Placement::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Placement::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Placement::*)() const>(&TDataXtd_Placement::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Placement::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Placement::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Placement::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Placement::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Placement::*)( std::ostream & ) const>(&TDataXtd_Placement::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Placement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Placement::*)() const>(&TDataXtd_Placement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Placement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Plane ,opencascade::handle<TDataXtd_Plane> , TDF_Attribute>>(m.attr("TDataXtd_Plane"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Plane::*)() const) static_cast<const Standard_GUID & (TDataXtd_Plane::*)() const>(&TDataXtd_Plane::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_Plane::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Plane::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Plane::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Plane::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Plane::*)() const>(&TDataXtd_Plane::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Plane::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Plane::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Plane::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Plane::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Plane::*)( std::ostream & ) const>(&TDataXtd_Plane::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Plane::*)() const>(&TDataXtd_Plane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Plane::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Point ,opencascade::handle<TDataXtd_Point> , TDF_Attribute>>(m.attr("TDataXtd_Point"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Point::*)() const) static_cast<const Standard_GUID & (TDataXtd_Point::*)() const>(&TDataXtd_Point::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_Point::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Point::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Point::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Point::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Point::*)() const>(&TDataXtd_Point::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Point::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Point::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Point::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Point::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Point::*)( std::ostream & ) const>(&TDataXtd_Point::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Point::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Point::*)() const>(&TDataXtd_Point::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Point::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Position ,opencascade::handle<TDataXtd_Position> , TDF_Attribute>>(m.attr("TDataXtd_Position"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Position::*)() const) static_cast<const Standard_GUID & (TDataXtd_Position::*)() const>(&TDataXtd_Position::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("Restore",
             (void (TDataXtd_Position::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Position::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Position::Restore),
             R"#(Restores the contents from <anAttribute> into this one. It is used when aborting a transaction.)#"  , py::arg("anAttribute"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Position::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Position::*)() const>(&TDataXtd_Position::NewEmpty),
             R"#(Returns an new empty attribute from the good end type. It is used by the copy algorithm.)#" )
        .def("Paste",
             (void (TDataXtd_Position::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Position::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Position::Paste),
             R"#(This method is different from the "Copy" one, because it is used when copying an attribute from a source structure into a target structure. This method pastes the current attribute to the label corresponding to the insertor. The pasted attribute may be a brand new one or a new version of the previous one.)#"  , py::arg("intoAttribute"),  py::arg("aRelocTationable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Position::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Position::*)() const>(&TDataXtd_Position::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Position::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Presentation ,opencascade::handle<TDataXtd_Presentation> , TDF_Attribute>>(m.attr("TDataXtd_Presentation"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Presentation::*)() const) static_cast<const Standard_GUID & (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("Restore",
             (void (TDataXtd_Presentation::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Presentation::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Presentation::Restore),
             R"#(Restores the contents from <anAttribute> into this one. It is used when aborting a transaction.)#"  , py::arg("anAttribute"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Presentation::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::NewEmpty),
             R"#(Returns an new empty attribute from the good end type. It is used by the copy algorithm.)#" )
        .def("Paste",
             (void (TDataXtd_Presentation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Presentation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Presentation::Paste),
             R"#(This method is different from the "Copy" one, because it is used when copying an attribute from a source structure into a target structure. This method pastes the current attribute to the label corresponding to the insertor. The pasted attribute may be a brand new one or a new version of the previous one.)#"  , py::arg("intoAttribute"),  py::arg("aRelocTationable"))
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Presentation::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::BackupCopy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Presentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Presentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Shape ,opencascade::handle<TDataXtd_Shape> , TDF_Attribute>>(m.attr("TDataXtd_Shape"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Shape::*)() const) static_cast<const Standard_GUID & (TDataXtd_Shape::*)() const>(&TDataXtd_Shape::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_Shape::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Shape::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Shape::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Shape::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Shape::*)() const>(&TDataXtd_Shape::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Shape::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Shape::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Shape::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("References",
             (void (TDataXtd_Shape::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataXtd_Shape::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataXtd_Shape::References),
             R"#(None)#"  , py::arg("DS"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Shape::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Shape::*)( std::ostream & ) const>(&TDataXtd_Shape::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Shape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Shape::*)() const>(&TDataXtd_Shape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Shape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Triangulation ,opencascade::handle<TDataXtd_Triangulation> , TDF_Attribute>>(m.attr("TDataXtd_Triangulation"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataXtd_Triangulation::*)() const) static_cast<const Standard_GUID & (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::ID),
             R"#(Inherited attribute methods)#" )
        .def("Restore",
             (void (TDataXtd_Triangulation::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_Triangulation::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_Triangulation::Restore),
             R"#(None)#"  , py::arg("theAttribute"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_Triangulation::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_Triangulation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_Triangulation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_Triangulation::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_Triangulation::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_Triangulation::*)( std::ostream & ) const>(&TDataXtd_Triangulation::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Triangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Triangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Triangulation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_PatternStd ,opencascade::handle<TDataXtd_PatternStd> , TDataXtd_Pattern>>(m.attr("TDataXtd_PatternStd"))
    // constructors
    // custom constructors
    // methods
        .def("Signature",
             (Standard_Integer (TDataXtd_PatternStd::*)() const) static_cast<Standard_Integer (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Signature),
             R"#(None)#" )
        .def("Axis1",
             (opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis1),
             R"#(None)#" )
        .def("Axis2",
             (opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis2),
             R"#(None)#" )
        .def("Axis1Reversed",
             (Standard_Boolean (TDataXtd_PatternStd::*)() const) static_cast<Standard_Boolean (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis1Reversed),
             R"#(None)#" )
        .def("Axis2Reversed",
             (Standard_Boolean (TDataXtd_PatternStd::*)() const) static_cast<Standard_Boolean (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis2Reversed),
             R"#(None)#" )
        .def("Value1",
             (opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Value1),
             R"#(None)#" )
        .def("Value2",
             (opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Value2),
             R"#(None)#" )
        .def("NbInstances1",
             (opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::NbInstances1),
             R"#(None)#" )
        .def("NbInstances2",
             (opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::NbInstances2),
             R"#(None)#" )
        .def("Mirror",
             (opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Mirror),
             R"#(None)#" )
        .def("NbTrsfs",
             (Standard_Integer (TDataXtd_PatternStd::*)() const) static_cast<Standard_Integer (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::NbTrsfs),
             R"#(None)#" )
        .def("ComputeTrsfs",
             (void (TDataXtd_PatternStd::*)( NCollection_Array1<gp_Trsf> & ) const) static_cast<void (TDataXtd_PatternStd::*)( NCollection_Array1<gp_Trsf> & ) const>(&TDataXtd_PatternStd::ComputeTrsfs),
             R"#(None)#"  , py::arg("Trsfs"))
        .def("PatternID",
             (const Standard_GUID & (TDataXtd_PatternStd::*)() const) static_cast<const Standard_GUID & (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::PatternID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataXtd_PatternStd::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataXtd_PatternStd::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("References",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataXtd_PatternStd::References),
             R"#(None)#"  , py::arg("aDataSet"))
        .def("Dump",
             (Standard_OStream & (TDataXtd_PatternStd::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataXtd_PatternStd::*)( std::ostream & ) const>(&TDataXtd_PatternStd::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_PatternStd::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::DynamicType),
             R"#(None)#" )
        .def("Signature",
             (Standard_Integer (TDataXtd_PatternStd::*)() const) static_cast<Standard_Integer (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Signature),
             R"#(None)#" )
        .def("Axis1",
             (opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis1),
             R"#(None)#" )
        .def("Axis2",
             (opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis2),
             R"#(None)#" )
        .def("Axis1Reversed",
             (Standard_Boolean (TDataXtd_PatternStd::*)() const) static_cast<Standard_Boolean (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis1Reversed),
             R"#(None)#" )
        .def("Axis2Reversed",
             (Standard_Boolean (TDataXtd_PatternStd::*)() const) static_cast<Standard_Boolean (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Axis2Reversed),
             R"#(None)#" )
        .def("Value1",
             (opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Value1),
             R"#(None)#" )
        .def("Value2",
             (opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Real> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Value2),
             R"#(None)#" )
        .def("NbInstances1",
             (opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::NbInstances1),
             R"#(None)#" )
        .def("NbInstances2",
             (opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TDataStd_Integer> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::NbInstances2),
             R"#(None)#" )
        .def("Mirror",
             (opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const) static_cast<opencascade::handle<TNaming_NamedShape> (TDataXtd_PatternStd::*)() const>(&TDataXtd_PatternStd::Mirror),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_PatternStd::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TDataXtd_Point.hxx
// ./opencascade/TDataXtd_HArray1OfTrsf.hxx
// ./opencascade/TDataXtd_Plane.hxx
// ./opencascade/TDataXtd_Geometry.hxx
// ./opencascade/TDataXtd.hxx
// ./opencascade/TDataXtd_ConstraintEnum.hxx
// ./opencascade/TDataXtd_PatternStd.hxx
// ./opencascade/TDataXtd_Presentation.hxx
// ./opencascade/TDataXtd_Pattern.hxx
// ./opencascade/TDataXtd_GeometryEnum.hxx
// ./opencascade/TDataXtd_Constraint.hxx
// ./opencascade/TDataXtd_Placement.hxx
// ./opencascade/TDataXtd_Shape.hxx
// ./opencascade/TDataXtd_Position.hxx
// ./opencascade/TDataXtd_Triangulation.hxx
// ./opencascade/TDataXtd_Array1OfTrsf.hxx
// ./opencascade/TDataXtd_Axis.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<gp_Trsf>(m,"TDataXtd_Array1OfTrsf");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
