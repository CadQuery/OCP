
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <TopLoc_Datum3D.hxx>
#include <TopLoc_Datum3D.hxx>
#include <TopLoc_Location.hxx>
#include <TopLoc_SListOfItemLocation.hxx>
#include <TopLoc_SListNodeOfItemLocation.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopLoc_ItemLocation.hxx>

// module includes
#include <TopLoc_Datum3D.hxx>
#include <TopLoc_IndexedMapOfLocation.hxx>
#include <TopLoc_ItemLocation.hxx>
#include <TopLoc_Location.hxx>
#include <TopLoc_MapIteratorOfMapOfLocation.hxx>
#include <TopLoc_MapLocationHasher.hxx>
#include <TopLoc_MapOfLocation.hxx>
#include <TopLoc_SListNodeOfItemLocation.hxx>
#include <TopLoc_SListOfItemLocation.hxx>

// template related includes
// ./opencascade/TopLoc_IndexedMapOfLocation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopLoc_MapLocationHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopLoc_MapOfLocation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopLoc_MapOfLocation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopLoc(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopLoc"));


//Python trampoline classes

// classes


    static_cast<py::class_<TopLoc_Datum3D ,opencascade::handle<TopLoc_Datum3D> , Standard_Transient>>(m.attr("TopLoc_Datum3D"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("Transformation",
             (const gp_Trsf & (TopLoc_Datum3D::*)() const) static_cast<const gp_Trsf & (TopLoc_Datum3D::*)() const>(&TopLoc_Datum3D::Transformation),
             R"#(Returns a gp_Trsf which, when applied to this datum, produces the default datum.)#" )
        .def("DumpJson",
             (void (TopLoc_Datum3D::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (TopLoc_Datum3D::*)( std::ostream & , const Standard_Integer ) const>(&TopLoc_Datum3D::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("ShallowDump",
             (void (TopLoc_Datum3D::*)( std::ostream & ) const) static_cast<void (TopLoc_Datum3D::*)( std::ostream & ) const>(&TopLoc_Datum3D::ShallowDump),
             R"#(Writes the contents of this Datum3D to the stream S.)#"  , py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopLoc_Datum3D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopLoc_Datum3D::*)() const>(&TopLoc_Datum3D::DynamicType),
             R"#(None)#" )
        .def("Transformation",
             (const gp_Trsf & (TopLoc_Datum3D::*)() const) static_cast<const gp_Trsf & (TopLoc_Datum3D::*)() const>(&TopLoc_Datum3D::Transformation),
             R"#(Returns a gp_Trsf which, when applied to this datum, produces the default datum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopLoc_Datum3D::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopLoc_Datum3D::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopLoc_ItemLocation , shared_ptr<TopLoc_ItemLocation> >>(m.attr("TopLoc_ItemLocation"))
    // constructors
        .def(py::init< const opencascade::handle<TopLoc_Datum3D> &,const Standard_Integer >()  , py::arg("D"),  py::arg("P") )
    // custom constructors
    // methods
        .def("DumpJson",
             (void (TopLoc_ItemLocation::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (TopLoc_ItemLocation::*)( std::ostream & , const Standard_Integer ) const>(&TopLoc_ItemLocation::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopLoc_Location , shared_ptr<TopLoc_Location> >>(m.attr("TopLoc_Location"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
        .def(py::init< const opencascade::handle<TopLoc_Datum3D> & >()  , py::arg("D") )
    // custom constructors
    // methods
        .def("IsIdentity",
             (Standard_Boolean (TopLoc_Location::*)() const) static_cast<Standard_Boolean (TopLoc_Location::*)() const>(&TopLoc_Location::IsIdentity),
             R"#(Returns true if this location is equal to the Identity transformation.)#" )
        .def("Identity",
             (void (TopLoc_Location::*)() ) static_cast<void (TopLoc_Location::*)() >(&TopLoc_Location::Identity),
             R"#(Resets this location to the Identity transformation.)#" )
        .def("FirstDatum",
             (const opencascade::handle<TopLoc_Datum3D> & (TopLoc_Location::*)() const) static_cast<const opencascade::handle<TopLoc_Datum3D> & (TopLoc_Location::*)() const>(&TopLoc_Location::FirstDatum),
             R"#(Returns the first elementary datum of the Location. Use the NextLocation function recursively to access the other data comprising this location. Exceptions Standard_NoSuchObject if this location is empty.)#" )
        .def("FirstPower",
             (Standard_Integer (TopLoc_Location::*)() const) static_cast<Standard_Integer (TopLoc_Location::*)() const>(&TopLoc_Location::FirstPower),
             R"#(Returns the power elevation of the first elementary datum. Exceptions Standard_NoSuchObject if this location is empty.)#" )
        .def("NextLocation",
             (const TopLoc_Location & (TopLoc_Location::*)() const) static_cast<const TopLoc_Location & (TopLoc_Location::*)() const>(&TopLoc_Location::NextLocation),
             R"#(Returns a Location representing <me> without the first datum. We have the relation :)#" )
        .def("Transformation",
             (const gp_Trsf & (TopLoc_Location::*)() const) static_cast<const gp_Trsf & (TopLoc_Location::*)() const>(&TopLoc_Location::Transformation),
             R"#(Returns the transformation associated to the coordinate system.)#" )
        .def("Inverted",
             (TopLoc_Location (TopLoc_Location::*)() const) static_cast<TopLoc_Location (TopLoc_Location::*)() const>(&TopLoc_Location::Inverted),
             R"#(Returns the inverse of <me>.)#" )
        .def("Multiplied",
             (TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::Multiplied),
             R"#(Returns <me> * <Other>, the elementary datums are concatenated.)#"  , py::arg("Other"))
        .def("Divided",
             (TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::Divided),
             R"#(Returns <me> / <Other>.)#"  , py::arg("Other"))
        .def("Predivided",
             (TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::Predivided),
             R"#(Returns <Other>.Inverted() * <me>.)#"  , py::arg("Other"))
        .def("Powered",
             (TopLoc_Location (TopLoc_Location::*)( const Standard_Integer ) const) static_cast<TopLoc_Location (TopLoc_Location::*)( const Standard_Integer ) const>(&TopLoc_Location::Powered),
             R"#(Returns me at the power <pwr>. If <pwr> is zero returns Identity. <pwr> can be lower than zero (usual meaning for powers).)#"  , py::arg("pwr"))
        .def("HashCode",
             (Standard_Integer (TopLoc_Location::*)( Standard_Integer ) const) static_cast<Standard_Integer (TopLoc_Location::*)( Standard_Integer ) const>(&TopLoc_Location::HashCode),
             R"#(Returns a hashed value for this local coordinate system. This value is used, with map tables, to store and retrieve the object easily, and is in the range [1, theUpperBound].)#"  , py::arg("theUpperBound"))
        .def("IsEqual",
             (Standard_Boolean (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<Standard_Boolean (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::IsEqual),
             R"#(Returns true if this location and the location Other have the same elementary data, i.e. contain the same series of TopLoc_Datum3D and respective powers. This method is an alias for operator ==.)#"  , py::arg("Other"))
        .def("IsDifferent",
             (Standard_Boolean (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<Standard_Boolean (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::IsDifferent),
             R"#(Returns true if this location and the location Other do not have the same elementary data, i.e. do not contain the same series of TopLoc_Datum3D and respective powers. This method is an alias for operator !=.)#"  , py::arg("Other"))
        .def("DumpJson",
             (void (TopLoc_Location::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (TopLoc_Location::*)( std::ostream & , const Standard_Integer ) const>(&TopLoc_Location::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("ShallowDump",
             (void (TopLoc_Location::*)( std::ostream & ) const) static_cast<void (TopLoc_Location::*)( std::ostream & ) const>(&TopLoc_Location::ShallowDump),
             R"#(Prints the contents of <me> on the stream .)#"  , py::arg("S"))
        .def("IsIdentity",
             (Standard_Boolean (TopLoc_Location::*)() const) static_cast<Standard_Boolean (TopLoc_Location::*)() const>(&TopLoc_Location::IsIdentity),
             R"#(Returns true if this location is equal to the Identity transformation.)#" )
        .def("Identity",
             (void (TopLoc_Location::*)() ) static_cast<void (TopLoc_Location::*)() >(&TopLoc_Location::Identity),
             R"#(Resets this location to the Identity transformation.)#" )
        .def("FirstDatum",
             (const opencascade::handle<TopLoc_Datum3D> & (TopLoc_Location::*)() const) static_cast<const opencascade::handle<TopLoc_Datum3D> & (TopLoc_Location::*)() const>(&TopLoc_Location::FirstDatum),
             R"#(Returns the first elementary datum of the Location. Use the NextLocation function recursively to access the other data comprising this location. Exceptions Standard_NoSuchObject if this location is empty.)#" )
        .def("FirstPower",
             (Standard_Integer (TopLoc_Location::*)() const) static_cast<Standard_Integer (TopLoc_Location::*)() const>(&TopLoc_Location::FirstPower),
             R"#(Returns the power elevation of the first elementary datum. Exceptions Standard_NoSuchObject if this location is empty.)#" )
        .def("NextLocation",
             (const TopLoc_Location & (TopLoc_Location::*)() const) static_cast<const TopLoc_Location & (TopLoc_Location::*)() const>(&TopLoc_Location::NextLocation),
             R"#(Returns a Location representing <me> without the first datum. We have the relation :)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__mul__",
             (TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__truediv__",
             (TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const) static_cast<TopLoc_Location (TopLoc_Location::*)( const TopLoc_Location & ) const>(&TopLoc_Location::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // additional methods and static methods
;


    static_cast<py::class_<TopLoc_SListNodeOfItemLocation ,opencascade::handle<TopLoc_SListNodeOfItemLocation> , Standard_Transient>>(m.attr("TopLoc_SListNodeOfItemLocation"))
    // constructors
        .def(py::init< const TopLoc_ItemLocation &,const TopLoc_SListOfItemLocation & >()  , py::arg("I"),  py::arg("aTail") )
    // custom constructors
    // methods
        .def("Tail",
             (TopLoc_SListOfItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const) static_cast<TopLoc_SListOfItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const>(&TopLoc_SListNodeOfItemLocation::Tail),
             R"#(None)#" )
        .def("Value",
             (TopLoc_ItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const) static_cast<TopLoc_ItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const>(&TopLoc_SListNodeOfItemLocation::Value),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopLoc_SListNodeOfItemLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopLoc_SListNodeOfItemLocation::*)() const>(&TopLoc_SListNodeOfItemLocation::DynamicType),
             R"#(None)#" )
        .def("Tail",
             (TopLoc_SListOfItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const) static_cast<TopLoc_SListOfItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const>(&TopLoc_SListNodeOfItemLocation::Tail),
             R"#(None)#" )
        .def("Value",
             (TopLoc_ItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const) static_cast<TopLoc_ItemLocation & (TopLoc_SListNodeOfItemLocation::*)() const>(&TopLoc_SListNodeOfItemLocation::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopLoc_SListNodeOfItemLocation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopLoc_SListNodeOfItemLocation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopLoc_SListOfItemLocation , shared_ptr<TopLoc_SListOfItemLocation> >>(m.attr("TopLoc_SListOfItemLocation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopLoc_ItemLocation &,const TopLoc_SListOfItemLocation & >()  , py::arg("anItem"),  py::arg("aTail") )
        .def(py::init< const TopLoc_SListOfItemLocation & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Assign",
             (TopLoc_SListOfItemLocation & (TopLoc_SListOfItemLocation::*)( const TopLoc_SListOfItemLocation & ) ) static_cast<TopLoc_SListOfItemLocation & (TopLoc_SListOfItemLocation::*)( const TopLoc_SListOfItemLocation & ) >(&TopLoc_SListOfItemLocation::Assign),
             R"#(Sets a list from an other one. The lists are shared. The list itself is returned.)#"  , py::arg("Other"))
        .def("IsEmpty",
             (Standard_Boolean (TopLoc_SListOfItemLocation::*)() const) static_cast<Standard_Boolean (TopLoc_SListOfItemLocation::*)() const>(&TopLoc_SListOfItemLocation::IsEmpty),
             R"#(Returne true if this list is empty)#" )
        .def("Clear",
             (void (TopLoc_SListOfItemLocation::*)() ) static_cast<void (TopLoc_SListOfItemLocation::*)() >(&TopLoc_SListOfItemLocation::Clear),
             R"#(Sets the list to be empty.)#" )
        .def("Value",
             (const TopLoc_ItemLocation & (TopLoc_SListOfItemLocation::*)() const) static_cast<const TopLoc_ItemLocation & (TopLoc_SListOfItemLocation::*)() const>(&TopLoc_SListOfItemLocation::Value),
             R"#(Returns the current value of the list. An error is raised if the list is empty.)#" )
        .def("Tail",
             (const TopLoc_SListOfItemLocation & (TopLoc_SListOfItemLocation::*)() const) static_cast<const TopLoc_SListOfItemLocation & (TopLoc_SListOfItemLocation::*)() const>(&TopLoc_SListOfItemLocation::Tail),
             R"#(Returns the current tail of the list. On an empty list the tail is the list itself.)#" )
        .def("Construct",
             (void (TopLoc_SListOfItemLocation::*)( const TopLoc_ItemLocation & ) ) static_cast<void (TopLoc_SListOfItemLocation::*)( const TopLoc_ItemLocation & ) >(&TopLoc_SListOfItemLocation::Construct),
             R"#(Replaces the list by a list with <anItem> as Value and the list <me> as tail.)#"  , py::arg("anItem"))
        .def("ToTail",
             (void (TopLoc_SListOfItemLocation::*)() ) static_cast<void (TopLoc_SListOfItemLocation::*)() >(&TopLoc_SListOfItemLocation::ToTail),
             R"#(Replaces the list <me> by its tail.)#" )
        .def("More",
             (Standard_Boolean (TopLoc_SListOfItemLocation::*)() const) static_cast<Standard_Boolean (TopLoc_SListOfItemLocation::*)() const>(&TopLoc_SListOfItemLocation::More),
             R"#(Returns True if the iterator has a current value. This is !IsEmpty())#" )
        .def("Next",
             (void (TopLoc_SListOfItemLocation::*)() ) static_cast<void (TopLoc_SListOfItemLocation::*)() >(&TopLoc_SListOfItemLocation::Next),
             R"#(Moves the iterator to the next object in the list. If the iterator is empty it will stay empty. This is ToTail())#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopLoc_IndexedMapOfLocation.hxx
// ./opencascade/TopLoc_SListNodeOfItemLocation.hxx
// ./opencascade/TopLoc_Location.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const TopLoc_Location & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const TopLoc_Location & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given location, in the range [1, theUpperBound])#"  , py::arg("theLocation"),  py::arg("theUpperBound"));
    m.def("ShallowDump",
          (void (*)( const TopLoc_Location & , std::ostream & ))  static_cast<void (*)( const TopLoc_Location & , std::ostream & )>(&ShallowDump),
          R"#(None)#"  , py::arg("me"),  py::arg("S"));
// ./opencascade/TopLoc_ItemLocation.hxx
// ./opencascade/TopLoc_MapLocationHasher.hxx
// ./opencascade/TopLoc_Datum3D.hxx
    m.def("ShallowDump",
          (void (*)( const opencascade::handle<TopLoc_Datum3D> & , std::ostream & ))  static_cast<void (*)( const opencascade::handle<TopLoc_Datum3D> & , std::ostream & )>(&ShallowDump),
          R"#(None)#"  , py::arg("me"),  py::arg("S"));
// ./opencascade/TopLoc_MapOfLocation.hxx
// ./opencascade/TopLoc_SListOfItemLocation.hxx
// ./opencascade/TopLoc_MapIteratorOfMapOfLocation.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_IndexedMap<TopLoc_Location, TopLoc_MapLocationHasher>(m,"TopLoc_IndexedMapOfLocation");
    register_template_NCollection_DefaultHasher<TopLoc_Location>(m,"TopLoc_MapLocationHasher");
    register_template_NCollection_Map<TopLoc_Location, TopLoc_MapLocationHasher>(m,"TopLoc_MapOfLocation");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
