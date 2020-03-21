
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Lin.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_Real.hxx>
#include <Standard_GUID.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
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
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Integer.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Pnt.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Pln.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
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
// ./opencascade\TDataXtd_Array1OfTrsf.hxx
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
        .def_static("IDList_s",
                    (void (*)( NCollection_List<Standard_GUID> & ) ) static_cast<void (*)( NCollection_List<Standard_GUID> & ) >(&TDataXtd::IDList),
                    R"#(Appends to <anIDList> the list of the attributes IDs of this package. CAUTION: <anIDList> is NOT cleared before use. Print of TDataExt enumeration =============================)#"  , py::arg("anIDList"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TDataXtd_GeometryEnum , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TDataXtd_GeometryEnum , std::ostream & ) >(&TDataXtd::Print),
                    R"#(Prints the name of the geometry dimension <GEO> as a String on the Stream <S> and returns <S>.)#"  , py::arg("GEO"),  py::arg("S"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TDataXtd_ConstraintEnum , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TDataXtd_ConstraintEnum , std::ostream & ) >(&TDataXtd::Print),
                    R"#(Prints the name of the constraint <CTR> as a String on the Stream <S> and returns <S>.)#"  , py::arg("CTR"),  py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Axis ,opencascade::handle<TDataXtd_Axis> , TDF_Attribute>>(m.attr("TDataXtd_Axis"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Axis::GetID),
                    R"#(class methods ============= Returns the GUID for an axis.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Axis> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Axis> (*)( const TDF_Label & ) >(&TDataXtd_Axis::Set),
                    R"#(Finds or creates an axis attribute defined by the label. In the case of a creation of an axis, a compatible named shape should already be associated with label. Exceptions Standard_NullObject if no compatible named shape is associated with the label.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Axis> (*)( const TDF_Label & , const gp_Lin & ) ) static_cast<opencascade::handle<TDataXtd_Axis> (*)( const TDF_Label & , const gp_Lin & ) >(&TDataXtd_Axis::Set),
                    R"#(Find, or create, an Axis attribute and set <P> as generated in the associated NamedShape. Axis methods ============)#"  , py::arg("label"),  py::arg("L"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Axis::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Axis::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Constraint ,opencascade::handle<TDataXtd_Constraint> , TDF_Attribute>>(m.attr("TDataXtd_Constraint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_Constraint::Set),
             R"#(Finds or creates the constraint attribute defined by the topological attribute G1 and the constraint type type.)#"  , py::arg("type"),  py::arg("G1"))
        .def("Set",
             (void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_Constraint::Set),
             R"#(Finds or creates the constraint attribute defined by the topological attributes G1 and G2, and by the constraint type type.)#"  , py::arg("type"),  py::arg("G1"),  py::arg("G2"))
        .def("Set",
             (void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_Constraint::Set),
             R"#(Finds or creates the constraint attribute defined by the topological attributes G1, G2 and G3, and by the constraint type type.)#"  , py::arg("type"),  py::arg("G1"),  py::arg("G2"),  py::arg("G3"))
        .def("Set",
             (void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & , const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_Constraint::Set),
             R"#(Finds or creates the constraint attribute defined by the topological attributes G1, G2, G3 and G4, and by the constraint type type. methods to read constraint fields =================================)#"  , py::arg("type"),  py::arg("G1"),  py::arg("G2"),  py::arg("G3"),  py::arg("G4"))
        .def("Verified",
             (Standard_Boolean (TDataXtd_Constraint::*)() const) static_cast<Standard_Boolean (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::Verified),
             R"#(Returns true if this constraint attribute is valid. By default, true is returned. When the value of a dimension is changed or when a geometry is moved, false is returned until the solver sets it back to true.)#" )
        .def("GetType",
             (TDataXtd_ConstraintEnum (TDataXtd_Constraint::*)() const) static_cast<TDataXtd_ConstraintEnum (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::GetType),
             R"#(Returns the type of constraint. This will be an element of the TDataXtd_ConstraintEnum enumeration.)#" )
        .def("IsPlanar",
             (Standard_Boolean (TDataXtd_Constraint::*)() const) static_cast<Standard_Boolean (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::IsPlanar),
             R"#(Returns true if this constraint attribute is two-dimensional.)#" )
        .def("GetPlane",
             (const opencascade::handle<TNaming_NamedShape> & (TDataXtd_Constraint::*)() const) static_cast<const opencascade::handle<TNaming_NamedShape> & (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::GetPlane),
             R"#(Returns the topological attribute of the plane used for planar - i.e., 2D - constraints. This plane is attached to another label. If the constraint is not planar, in other words, 3D, this function will return a null handle.)#" )
        .def("IsDimension",
             (Standard_Boolean (TDataXtd_Constraint::*)() const) static_cast<Standard_Boolean (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::IsDimension),
             R"#(Returns true if this constraint attribute is a dimension, and therefore has a value.)#" )
        .def("GetValue",
             (const opencascade::handle<TDataStd_Real> & (TDataXtd_Constraint::*)() const) static_cast<const opencascade::handle<TDataStd_Real> & (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::GetValue),
             R"#(Returns the value of a dimension. This value is a reference to a TDataStd_Real attribute. If the attribute is not a dimension, this value will be 0. Use IsDimension to test this condition.)#" )
        .def("NbGeometries",
             (Standard_Integer (TDataXtd_Constraint::*)() const) static_cast<Standard_Integer (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::NbGeometries),
             R"#(Returns the number of geometry attributes in this constraint attribute. This number will be between 1 and 4.)#" )
        .def("GetGeometry",
             (opencascade::handle<TNaming_NamedShape> (TDataXtd_Constraint::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TNaming_NamedShape> (TDataXtd_Constraint::*)( const Standard_Integer ) const>(&TDataXtd_Constraint::GetGeometry),
             R"#(Returns the integer index Index used to access the array of the constraint or stored geometries of a dimension Index has a value between 1 and 4. methods to write constraint fields (use builder) ==================================)#"  , py::arg("Index"))
        .def("ClearGeometries",
             (void (TDataXtd_Constraint::*)() ) static_cast<void (TDataXtd_Constraint::*)() >(&TDataXtd_Constraint::ClearGeometries),
             R"#(Removes the geometries involved in the constraint or dimension from the array of topological attributes where they are stored.)#" )
        .def("SetType",
             (void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum ) ) static_cast<void (TDataXtd_Constraint::*)( const TDataXtd_ConstraintEnum ) >(&TDataXtd_Constraint::SetType),
             R"#(Finds or creates the type of constraint CTR.)#"  , py::arg("CTR"))
        .def("SetPlane",
             (void (TDataXtd_Constraint::*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_Constraint::*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_Constraint::SetPlane),
             R"#(Finds or creates the plane of the 2D constraint attribute, defined by the planar topological attribute plane.)#"  , py::arg("plane"))
        .def("SetValue",
             (void (TDataXtd_Constraint::*)( const opencascade::handle<TDataStd_Real> & ) ) static_cast<void (TDataXtd_Constraint::*)( const opencascade::handle<TDataStd_Real> & ) >(&TDataXtd_Constraint::SetValue),
             R"#(Finds or creates the real number value V of the dimension constraint attribute.)#"  , py::arg("V"))
        .def("SetGeometry",
             (void (TDataXtd_Constraint::*)( const Standard_Integer , const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_Constraint::*)( const Standard_Integer , const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_Constraint::SetGeometry),
             R"#(Finds or creates the underlying geometry of the constraint defined by the topological attribute G and the integer index Index.)#"  , py::arg("Index"),  py::arg("G"))
        .def("Verified",
             (void (TDataXtd_Constraint::*)( const Standard_Boolean ) ) static_cast<void (TDataXtd_Constraint::*)( const Standard_Boolean ) >(&TDataXtd_Constraint::Verified),
             R"#(Returns true if this constraint attribute defined by status is valid. By default, true is returned. When the value of a dimension is changed or when a geometry is moved, false is returned until the solver sets it back to true. If status is false, Verified is set to false.)#"  , py::arg("status"))
        .def("Inverted",
             (void (TDataXtd_Constraint::*)( const Standard_Boolean ) ) static_cast<void (TDataXtd_Constraint::*)( const Standard_Boolean ) >(&TDataXtd_Constraint::Inverted),
             R"#(None)#"  , py::arg("status"))
        .def("Inverted",
             (Standard_Boolean (TDataXtd_Constraint::*)() const) static_cast<Standard_Boolean (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::Inverted),
             R"#(None)#" )
        .def("Reversed",
             (void (TDataXtd_Constraint::*)( const Standard_Boolean ) ) static_cast<void (TDataXtd_Constraint::*)( const Standard_Boolean ) >(&TDataXtd_Constraint::Reversed),
             R"#(None)#"  , py::arg("status"))
        .def("Reversed",
             (Standard_Boolean (TDataXtd_Constraint::*)() const) static_cast<Standard_Boolean (TDataXtd_Constraint::*)() const>(&TDataXtd_Constraint::Reversed),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Constraint::GetID),
                    R"#(Returns the GUID for constraints.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Constraint> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Constraint> (*)( const TDF_Label & ) >(&TDataXtd_Constraint::Set),
                    R"#(Finds or creates the 2D constraint attribute defined by the planar topological attribute plane and the label label. Constraint methods ==================)#"  , py::arg("label"))
        .def_static("CollectChildConstraints_s",
                    (void (*)( const TDF_Label & , NCollection_List<TDF_Label> & ) ) static_cast<void (*)( const TDF_Label & , NCollection_List<TDF_Label> & ) >(&TDataXtd_Constraint::CollectChildConstraints),
                    R"#(collects constraints on Childs for label <aLabel>)#"  , py::arg("aLabel"),  py::arg("TheList"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Constraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Constraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Geometry ,opencascade::handle<TDataXtd_Geometry> , TDF_Attribute>>(m.attr("TDataXtd_Geometry"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetType",
             (void (TDataXtd_Geometry::*)( const TDataXtd_GeometryEnum ) ) static_cast<void (TDataXtd_Geometry::*)( const TDataXtd_GeometryEnum ) >(&TDataXtd_Geometry::SetType),
             R"#(Returns the type of geometric construction T of this attribute. T will be a value of the enumeration TDataXtd_GeometryEnum.)#"  , py::arg("T"))
        .def("GetType",
             (TDataXtd_GeometryEnum (TDataXtd_Geometry::*)() const) static_cast<TDataXtd_GeometryEnum (TDataXtd_Geometry::*)() const>(&TDataXtd_Geometry::GetType),
             R"#(Returns the type of geometric construction.)#" )
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
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Geometry> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Geometry> (*)( const TDF_Label & ) >(&TDataXtd_Geometry::Set),
                    R"#(API class methods ================= Finds, or creates, a Geometry attribute defined by the label label. The default type of geometry is the value ANY_GEOM of the enumeration TDataXtd_GeometryEnum. To specify another value of this enumeration, use the function SetType.)#"  , py::arg("label"))
        .def_static("Type_s",
                    (TDataXtd_GeometryEnum (*)( const TDF_Label & ) ) static_cast<TDataXtd_GeometryEnum (*)( const TDF_Label & ) >(&TDataXtd_Geometry::Type),
                    R"#(Returns the label L used to define the type of geometric construction for the geometry attribute.)#"  , py::arg("L"))
        .def_static("Type_s",
                    (TDataXtd_GeometryEnum (*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<TDataXtd_GeometryEnum (*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_Geometry::Type),
                    R"#(Returns the topological attribute S used to define the type of geometric construction for the geometry attribute.)#"  , py::arg("S"))
        .def_static("Point_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Pnt & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Pnt & ) >(&TDataXtd_Geometry::Point),
                    R"#(Returns the point attribute defined by the label L and the point G.)#"  , py::arg("L"),  py::arg("G"))
        .def_static("Point_s",
                    (Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Pnt & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Pnt & ) >(&TDataXtd_Geometry::Point),
                    R"#(Returns the point attribute defined by the topological attribute S and the point G.)#"  , py::arg("S"),  py::arg("G"))
        .def_static("Axis_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Ax1 & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Ax1 & ) >(&TDataXtd_Geometry::Axis),
                    R"#(Returns the axis attribute defined by the label L and the axis G.)#"  , py::arg("L"),  py::arg("G"))
        .def_static("Axis_s",
                    (Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Ax1 & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Ax1 & ) >(&TDataXtd_Geometry::Axis),
                    R"#(Returns the axis attribute defined by the topological attribute S and the axis G.)#"  , py::arg("S"),  py::arg("G"))
        .def_static("Line_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Lin & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Lin & ) >(&TDataXtd_Geometry::Line),
                    R"#(Returns the line attribute defined by the label L and the line G.)#"  , py::arg("L"),  py::arg("G"))
        .def_static("Line_s",
                    (Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Lin & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Lin & ) >(&TDataXtd_Geometry::Line),
                    R"#(Returns the line attribute defined by the topological attribute S and the line G.)#"  , py::arg("S"),  py::arg("G"))
        .def_static("Circle_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Circ & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Circ & ) >(&TDataXtd_Geometry::Circle),
                    R"#(Returns the circle attribute defined by the label L and the circle G.)#"  , py::arg("L"),  py::arg("G"))
        .def_static("Circle_s",
                    (Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Circ & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Circ & ) >(&TDataXtd_Geometry::Circle),
                    R"#(Returns the circle attribute defined by the topological attribute S and the circle G.)#"  , py::arg("S"),  py::arg("G"))
        .def_static("Ellipse_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Elips & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Elips & ) >(&TDataXtd_Geometry::Ellipse),
                    R"#(Returns the ellipse attribute defined by the label L and the ellipse G.)#"  , py::arg("L"),  py::arg("G"))
        .def_static("Ellipse_s",
                    (Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Elips & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Elips & ) >(&TDataXtd_Geometry::Ellipse),
                    R"#(Returns the ellipse attribute defined by the topological attribute S and the ellipse G.)#"  , py::arg("S"),  py::arg("G"))
        .def_static("Plane_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Pln & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Pln & ) >(&TDataXtd_Geometry::Plane),
                    R"#(Returns the plane attribute defined by the label L and the plane G.)#"  , py::arg("L"),  py::arg("G"))
        .def_static("Plane_s",
                    (Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Pln & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Pln & ) >(&TDataXtd_Geometry::Plane),
                    R"#(Returns the plane attribute defined by the topological attribute S and the plane G.)#"  , py::arg("S"),  py::arg("G"))
        .def_static("Cylinder_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Cylinder & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Cylinder & ) >(&TDataXtd_Geometry::Cylinder),
                    R"#(Returns the cylinder attribute defined by the label L and the cylinder G.)#"  , py::arg("L"),  py::arg("G"))
        .def_static("Cylinder_s",
                    (Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Cylinder & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TNaming_NamedShape> & , gp_Cylinder & ) >(&TDataXtd_Geometry::Cylinder),
                    R"#(Returns the cylinder attribute defined by the topological attribute S and the cylinder G.)#"  , py::arg("S"),  py::arg("G"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Geometry::GetID),
                    R"#(Returns the GUID for geometry attributes.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Geometry::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Geometry::get_type_descriptor),
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Pattern::GetID),
                    R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Pattern::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Pattern::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Placement ,opencascade::handle<TDataXtd_Placement> , TDF_Attribute>>(m.attr("TDataXtd_Placement"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Placement::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Placement> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Placement> (*)( const TDF_Label & ) >(&TDataXtd_Placement::Set),
                    R"#(Find, or create, an Placement attribute. the Placement attribute is returned. Placement methods =================)#"  , py::arg("label"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Placement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Placement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Plane ,opencascade::handle<TDataXtd_Plane> , TDF_Attribute>>(m.attr("TDataXtd_Plane"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Plane::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Plane> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Plane> (*)( const TDF_Label & ) >(&TDataXtd_Plane::Set),
                    R"#(Finds or creates the plane attribute defined by the label label. Warning If you are creating the attribute with this syntax, a planar face should already be associated with label.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Plane> (*)( const TDF_Label & , const gp_Pln & ) ) static_cast<opencascade::handle<TDataXtd_Plane> (*)( const TDF_Label & , const gp_Pln & ) >(&TDataXtd_Plane::Set),
                    R"#(Finds, or creates, a Plane attribute and sets <P> as generated the associated NamedShape. Plane methods =============)#"  , py::arg("label"),  py::arg("P"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Plane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Plane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Point ,opencascade::handle<TDataXtd_Point> , TDF_Attribute>>(m.attr("TDataXtd_Point"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Point::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Point> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Point> (*)( const TDF_Label & ) >(&TDataXtd_Point::Set),
                    R"#(Sets the label Label as a point attribute. If no object is found, a point attribute is created.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Point> (*)( const TDF_Label & , const gp_Pnt & ) ) static_cast<opencascade::handle<TDataXtd_Point> (*)( const TDF_Label & , const gp_Pnt & ) >(&TDataXtd_Point::Set),
                    R"#(Sets the label Label as a point attribute containing the point P. If no object is found, a point attribute is created. Point methods =============)#"  , py::arg("label"),  py::arg("P"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Point::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Point::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Position ,opencascade::handle<TDataXtd_Position> , TDF_Attribute>>(m.attr("TDataXtd_Position"))
    // constructors
        .def(py::init<  >()  )
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
        .def("GetPosition",
             (const gp_Pnt & (TDataXtd_Position::*)() const) static_cast<const gp_Pnt & (TDataXtd_Position::*)() const>(&TDataXtd_Position::GetPosition),
             R"#(None)#" )
        .def("SetPosition",
             (void (TDataXtd_Position::*)( const gp_Pnt & ) ) static_cast<void (TDataXtd_Position::*)( const gp_Pnt & ) >(&TDataXtd_Position::SetPosition),
             R"#(None)#"  , py::arg("aPos"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataXtd_Position::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataXtd_Position::*)() const>(&TDataXtd_Position::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Set_s",
                    (void (*)( const TDF_Label & , const gp_Pnt & ) ) static_cast<void (*)( const TDF_Label & , const gp_Pnt & ) >(&TDataXtd_Position::Set),
                    R"#(Create if not found the TDataXtd_Position attribute set its position to <aPos>)#"  , py::arg("aLabel"),  py::arg("aPos"))
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Position> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Position> (*)( const TDF_Label & ) >(&TDataXtd_Position::Set),
                    R"#(Find an existing, or create an empty, Position. the Position attribute is returned.)#"  , py::arg("aLabel"))
        .def_static("Get_s",
                    (Standard_Boolean (*)( const TDF_Label & , gp_Pnt & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , gp_Pnt & ) >(&TDataXtd_Position::Get),
                    R"#(Search label <aLabel) for the TDataXtd_Position attribute and get its position if found returns True)#"  , py::arg("aLabel"),  py::arg("aPos"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Position::GetID),
                    R"#(Returns the ID of the attribute.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Position::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Position::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Presentation ,opencascade::handle<TDataXtd_Presentation> , TDF_Attribute>>(m.attr("TDataXtd_Presentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def("GetDriverGUID",
             (Standard_GUID (TDataXtd_Presentation::*)() const) static_cast<Standard_GUID (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::GetDriverGUID),
             R"#(Returns the GUID of the driver managing display of associated AIS object)#" )
        .def("SetDriverGUID",
             (void (TDataXtd_Presentation::*)( const Standard_GUID & ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_GUID & ) >(&TDataXtd_Presentation::SetDriverGUID),
             R"#(Sets the GUID of the driver managing display of associated AIS object)#"  , py::arg("theGUID"))
        .def("IsDisplayed",
             (Standard_Boolean (TDataXtd_Presentation::*)() const) static_cast<Standard_Boolean (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::IsDisplayed),
             R"#(None)#" )
        .def("HasOwnMaterial",
             (Standard_Boolean (TDataXtd_Presentation::*)() const) static_cast<Standard_Boolean (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::HasOwnMaterial),
             R"#(None)#" )
        .def("HasOwnTransparency",
             (Standard_Boolean (TDataXtd_Presentation::*)() const) static_cast<Standard_Boolean (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::HasOwnTransparency),
             R"#(None)#" )
        .def("HasOwnColor",
             (Standard_Boolean (TDataXtd_Presentation::*)() const) static_cast<Standard_Boolean (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::HasOwnColor),
             R"#(None)#" )
        .def("HasOwnWidth",
             (Standard_Boolean (TDataXtd_Presentation::*)() const) static_cast<Standard_Boolean (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::HasOwnWidth),
             R"#(None)#" )
        .def("HasOwnMode",
             (Standard_Boolean (TDataXtd_Presentation::*)() const) static_cast<Standard_Boolean (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::HasOwnMode),
             R"#(None)#" )
        .def("HasOwnSelectionMode",
             (Standard_Boolean (TDataXtd_Presentation::*)() const) static_cast<Standard_Boolean (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::HasOwnSelectionMode),
             R"#(None)#" )
        .def("SetDisplayed",
             (void (TDataXtd_Presentation::*)( const Standard_Boolean ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_Boolean ) >(&TDataXtd_Presentation::SetDisplayed),
             R"#(None)#"  , py::arg("theIsDisplayed"))
        .def("SetMaterialIndex",
             (void (TDataXtd_Presentation::*)( const Standard_Integer ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_Integer ) >(&TDataXtd_Presentation::SetMaterialIndex),
             R"#(None)#"  , py::arg("theMaterialIndex"))
        .def("SetTransparency",
             (void (TDataXtd_Presentation::*)( const Standard_Real ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_Real ) >(&TDataXtd_Presentation::SetTransparency),
             R"#(None)#"  , py::arg("theValue"))
        .def("SetColor",
             (void (TDataXtd_Presentation::*)( const Quantity_NameOfColor ) ) static_cast<void (TDataXtd_Presentation::*)( const Quantity_NameOfColor ) >(&TDataXtd_Presentation::SetColor),
             R"#(None)#"  , py::arg("theColor"))
        .def("SetWidth",
             (void (TDataXtd_Presentation::*)( const Standard_Real ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_Real ) >(&TDataXtd_Presentation::SetWidth),
             R"#(None)#"  , py::arg("theWidth"))
        .def("SetMode",
             (void (TDataXtd_Presentation::*)( const Standard_Integer ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_Integer ) >(&TDataXtd_Presentation::SetMode),
             R"#(None)#"  , py::arg("theMode"))
        .def("GetNbSelectionModes",
             (Standard_Integer (TDataXtd_Presentation::*)() const) static_cast<Standard_Integer (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::GetNbSelectionModes),
             R"#(Returns the number of selection modes of the attribute. It starts with 1 .. GetNbSelectionModes().)#" )
        .def("SetSelectionMode",
             (void (TDataXtd_Presentation::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_Integer , const Standard_Boolean ) >(&TDataXtd_Presentation::SetSelectionMode),
             R"#(Sets selection mode. If "theTransaction" flag is OFF, modification of the attribute doesn't influence the transaction mechanism (the attribute doesn't participate in undo/redo because of this modification). Certainly, if any other data of the attribute is modified (display mode, color, ...), the attribute will be included into undo/redo.)#"  , py::arg("theSelectionMode"),  py::arg("theTransaction")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddSelectionMode",
             (void (TDataXtd_Presentation::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TDataXtd_Presentation::*)( const Standard_Integer , const Standard_Boolean ) >(&TDataXtd_Presentation::AddSelectionMode),
             R"#(None)#"  , py::arg("theSelectionMode"),  py::arg("theTransaction")=static_cast<const Standard_Boolean>(Standard_True))
        .def("MaterialIndex",
             (Standard_Integer (TDataXtd_Presentation::*)() const) static_cast<Standard_Integer (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::MaterialIndex),
             R"#(None)#" )
        .def("Transparency",
             (Standard_Real (TDataXtd_Presentation::*)() const) static_cast<Standard_Real (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::Transparency),
             R"#(None)#" )
        .def("Color",
             (Quantity_NameOfColor (TDataXtd_Presentation::*)() const) static_cast<Quantity_NameOfColor (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::Color),
             R"#(None)#" )
        .def("Width",
             (Standard_Real (TDataXtd_Presentation::*)() const) static_cast<Standard_Real (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::Width),
             R"#(None)#" )
        .def("Mode",
             (Standard_Integer (TDataXtd_Presentation::*)() const) static_cast<Standard_Integer (TDataXtd_Presentation::*)() const>(&TDataXtd_Presentation::Mode),
             R"#(None)#" )
        .def("SelectionMode",
             (Standard_Integer (TDataXtd_Presentation::*)( const int ) const) static_cast<Standard_Integer (TDataXtd_Presentation::*)( const int ) const>(&TDataXtd_Presentation::SelectionMode),
             R"#(None)#"  , py::arg("index")=static_cast<const int>(1))
        .def("UnsetMaterial",
             (void (TDataXtd_Presentation::*)() ) static_cast<void (TDataXtd_Presentation::*)() >(&TDataXtd_Presentation::UnsetMaterial),
             R"#(None)#" )
        .def("UnsetTransparency",
             (void (TDataXtd_Presentation::*)() ) static_cast<void (TDataXtd_Presentation::*)() >(&TDataXtd_Presentation::UnsetTransparency),
             R"#(None)#" )
        .def("UnsetColor",
             (void (TDataXtd_Presentation::*)() ) static_cast<void (TDataXtd_Presentation::*)() >(&TDataXtd_Presentation::UnsetColor),
             R"#(None)#" )
        .def("UnsetWidth",
             (void (TDataXtd_Presentation::*)() ) static_cast<void (TDataXtd_Presentation::*)() >(&TDataXtd_Presentation::UnsetWidth),
             R"#(None)#" )
        .def("UnsetMode",
             (void (TDataXtd_Presentation::*)() ) static_cast<void (TDataXtd_Presentation::*)() >(&TDataXtd_Presentation::UnsetMode),
             R"#(None)#" )
        .def("UnsetSelectionMode",
             (void (TDataXtd_Presentation::*)() ) static_cast<void (TDataXtd_Presentation::*)() >(&TDataXtd_Presentation::UnsetSelectionMode),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Presentation> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataXtd_Presentation> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataXtd_Presentation::Set),
                    R"#(Create if not found the TDataXtd_Presentation attribute and set its driver GUID)#"  , py::arg("theLabel"),  py::arg("theDriverId"))
        .def_static("Unset_s",
                    (void (*)( const TDF_Label & ) ) static_cast<void (*)( const TDF_Label & ) >(&TDataXtd_Presentation::Unset),
                    R"#(Remove attribute of this type from the label)#"  , py::arg("theLabel"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Presentation::GetID),
                    R"#(Returns the ID of the attribute.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Presentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Presentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Shape ,opencascade::handle<TDataXtd_Shape> , TDF_Attribute>>(m.attr("TDataXtd_Shape"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("Find_s",
                    (Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataXtd_Shape> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataXtd_Shape> & ) >(&TDataXtd_Shape::Find),
                    R"#(class methods ============= try to retrieve a Shape attribute at <current> label or in fathers label of <current>. Returns True if found and set <S>.)#"  , py::arg("current"),  py::arg("S"))
        .def_static("New_s",
                    (opencascade::handle<TDataXtd_Shape> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Shape> (*)( const TDF_Label & ) >(&TDataXtd_Shape::New),
                    R"#(Find, or create, a Shape attribute. the Shape attribute is returned. Raises if <label> has attribute.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Shape> (*)( const TDF_Label & , const TopoDS_Shape & ) ) static_cast<opencascade::handle<TDataXtd_Shape> (*)( const TDF_Label & , const TopoDS_Shape & ) >(&TDataXtd_Shape::Set),
                    R"#(Create or update associated NamedShape attribute. the Shape attribute is returned.)#"  , py::arg("label"),  py::arg("shape"))
        .def_static("Get_s",
                    (TopoDS_Shape (*)( const TDF_Label & ) ) static_cast<TopoDS_Shape (*)( const TDF_Label & ) >(&TDataXtd_Shape::Get),
                    R"#(the Shape from associated NamedShape attribute is returned.)#"  , py::arg("label"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Shape::GetID),
                    R"#(Shape methods ============)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_Shape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_Shape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataXtd_Triangulation ,opencascade::handle<TDataXtd_Triangulation> , TDF_Attribute>>(m.attr("TDataXtd_Triangulation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TDataXtd_Triangulation::*)( const opencascade::handle<Poly_Triangulation> & ) ) static_cast<void (TDataXtd_Triangulation::*)( const opencascade::handle<Poly_Triangulation> & ) >(&TDataXtd_Triangulation::Set),
             R"#(Sets the triangulation.)#"  , py::arg("theTriangulation"))
        .def("Get",
             (const opencascade::handle<Poly_Triangulation> & (TDataXtd_Triangulation::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::Get),
             R"#(Returns the underlying triangulation.)#" )
        .def("Deflection",
             (Standard_Real (TDataXtd_Triangulation::*)() const) static_cast<Standard_Real (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::Deflection),
             R"#(Returns the deflection of this triangulation.)#" )
        .def("Deflection",
             (void (TDataXtd_Triangulation::*)( const Standard_Real ) ) static_cast<void (TDataXtd_Triangulation::*)( const Standard_Real ) >(&TDataXtd_Triangulation::Deflection),
             R"#(Sets the deflection of this triangulation to theDeflection. See more on deflection in Polygon2D)#"  , py::arg("theDeflection"))
        .def("RemoveUVNodes",
             (void (TDataXtd_Triangulation::*)() ) static_cast<void (TDataXtd_Triangulation::*)() >(&TDataXtd_Triangulation::RemoveUVNodes),
             R"#(Deallocates the UV nodes.)#" )
        .def("NbNodes",
             (Standard_Integer (TDataXtd_Triangulation::*)() const) static_cast<Standard_Integer (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::NbNodes),
             R"#(Returns the number of nodes for this triangulation.)#" )
        .def("NbTriangles",
             (Standard_Integer (TDataXtd_Triangulation::*)() const) static_cast<Standard_Integer (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::NbTriangles),
             R"#(Returns the number of triangles for this triangulation.)#" )
        .def("HasUVNodes",
             (Standard_Boolean (TDataXtd_Triangulation::*)() const) static_cast<Standard_Boolean (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::HasUVNodes),
             R"#(Returns Standard_True if 2D nodes are associated with 3D nodes for this triangulation.)#" )
        .def("Node",
             (const gp_Pnt & (TDataXtd_Triangulation::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (TDataXtd_Triangulation::*)( const Standard_Integer ) const>(&TDataXtd_Triangulation::Node),
             R"#(Returns node at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"))
        .def("SetNode",
             (void (TDataXtd_Triangulation::*)( const Standard_Integer , const gp_Pnt & ) ) static_cast<void (TDataXtd_Triangulation::*)( const Standard_Integer , const gp_Pnt & ) >(&TDataXtd_Triangulation::SetNode),
             R"#(The method differs from Poly_Triangulation! Sets a node at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"),  py::arg("theNode"))
        .def("UVNode",
             (const gp_Pnt2d & (TDataXtd_Triangulation::*)( const Standard_Integer ) const) static_cast<const gp_Pnt2d & (TDataXtd_Triangulation::*)( const Standard_Integer ) const>(&TDataXtd_Triangulation::UVNode),
             R"#(Returns UVNode at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"))
        .def("SetUVNode",
             (void (TDataXtd_Triangulation::*)( const Standard_Integer , const gp_Pnt2d & ) ) static_cast<void (TDataXtd_Triangulation::*)( const Standard_Integer , const gp_Pnt2d & ) >(&TDataXtd_Triangulation::SetUVNode),
             R"#(The method differs from Poly_Triangulation! Sets a UVNode at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbNodes.)#"  , py::arg("theIndex"),  py::arg("theUVNode"))
        .def("Triangle",
             (const Poly_Triangle & (TDataXtd_Triangulation::*)( const Standard_Integer ) const) static_cast<const Poly_Triangle & (TDataXtd_Triangulation::*)( const Standard_Integer ) const>(&TDataXtd_Triangulation::Triangle),
             R"#(Returns triangle at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbTriangles.)#"  , py::arg("theIndex"))
        .def("SetTriangle",
             (void (TDataXtd_Triangulation::*)( const Standard_Integer , const Poly_Triangle & ) ) static_cast<void (TDataXtd_Triangulation::*)( const Standard_Integer , const Poly_Triangle & ) >(&TDataXtd_Triangulation::SetTriangle),
             R"#(The method differs from Poly_Triangulation! Sets a triangle at the given index. Raises Standard_OutOfRange exception if theIndex is less than 1 or greater than NbTriangles.)#"  , py::arg("theIndex"),  py::arg("theTriangle"))
        .def("SetNormals",
             (void (TDataXtd_Triangulation::*)( const opencascade::handle<TShort_HArray1OfShortReal> & ) ) static_cast<void (TDataXtd_Triangulation::*)( const opencascade::handle<TShort_HArray1OfShortReal> & ) >(&TDataXtd_Triangulation::SetNormals),
             R"#(Sets the table of node normals. Raises exception if length of theNormals != 3 * NbNodes)#"  , py::arg("theNormals"))
        .def("SetNormal",
             (void (TDataXtd_Triangulation::*)( const Standard_Integer , const gp_Dir & ) ) static_cast<void (TDataXtd_Triangulation::*)( const Standard_Integer , const gp_Dir & ) >(&TDataXtd_Triangulation::SetNormal),
             R"#(Changes normal at the given index. Raises Standard_OutOfRange exception.)#"  , py::arg("theIndex"),  py::arg("theNormal"))
        .def("HasNormals",
             (Standard_Boolean (TDataXtd_Triangulation::*)() const) static_cast<Standard_Boolean (TDataXtd_Triangulation::*)() const>(&TDataXtd_Triangulation::HasNormals),
             R"#(Returns Standard_True if nodal normals are defined.)#" )
        .def("Normal",
             (const gp_Dir (TDataXtd_Triangulation::*)( const Standard_Integer ) const) static_cast<const gp_Dir (TDataXtd_Triangulation::*)( const Standard_Integer ) const>(&TDataXtd_Triangulation::Normal),
             R"#(Returns normal at the given index. Raises Standard_OutOfRange exception.)#"  , py::arg("theIndex"))
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_Triangulation::GetID),
                    R"#(Returns the ID of the triangulation attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Triangulation> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_Triangulation> (*)( const TDF_Label & ) >(&TDataXtd_Triangulation::Set),
                    R"#(Finds or creates a triangulation attribute.)#"  , py::arg("theLabel"))
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_Triangulation> (*)( const TDF_Label & , const opencascade::handle<Poly_Triangulation> & ) ) static_cast<opencascade::handle<TDataXtd_Triangulation> (*)( const TDF_Label & , const opencascade::handle<Poly_Triangulation> & ) >(&TDataXtd_Triangulation::Set),
                    R"#(Finds or creates a triangulation attribute. Initializes the attribute by a Poly_Triangulation object.)#"  , py::arg("theLabel"),  py::arg("theTriangulation"))
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Signature",
             (void (TDataXtd_PatternStd::*)( const Standard_Integer ) ) static_cast<void (TDataXtd_PatternStd::*)( const Standard_Integer ) >(&TDataXtd_PatternStd::Signature),
             R"#(None)#"  , py::arg("signature"))
        .def("Axis1",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_PatternStd::Axis1),
             R"#(None)#"  , py::arg("Axis1"))
        .def("Axis2",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_PatternStd::Axis2),
             R"#(None)#"  , py::arg("Axis2"))
        .def("Axis1Reversed",
             (void (TDataXtd_PatternStd::*)( const Standard_Boolean ) ) static_cast<void (TDataXtd_PatternStd::*)( const Standard_Boolean ) >(&TDataXtd_PatternStd::Axis1Reversed),
             R"#(None)#"  , py::arg("Axis1Reversed"))
        .def("Axis2Reversed",
             (void (TDataXtd_PatternStd::*)( const Standard_Boolean ) ) static_cast<void (TDataXtd_PatternStd::*)( const Standard_Boolean ) >(&TDataXtd_PatternStd::Axis2Reversed),
             R"#(None)#"  , py::arg("Axis2Reversed"))
        .def("Value1",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Real> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Real> & ) >(&TDataXtd_PatternStd::Value1),
             R"#(None)#"  , py::arg("value"))
        .def("Value2",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Real> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Real> & ) >(&TDataXtd_PatternStd::Value2),
             R"#(None)#"  , py::arg("value"))
        .def("NbInstances1",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Integer> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Integer> & ) >(&TDataXtd_PatternStd::NbInstances1),
             R"#(None)#"  , py::arg("NbInstances1"))
        .def("NbInstances2",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Integer> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TDataStd_Integer> & ) >(&TDataXtd_PatternStd::NbInstances2),
             R"#(None)#"  , py::arg("NbInstances2"))
        .def("Mirror",
             (void (TDataXtd_PatternStd::*)( const opencascade::handle<TNaming_NamedShape> & ) ) static_cast<void (TDataXtd_PatternStd::*)( const opencascade::handle<TNaming_NamedShape> & ) >(&TDataXtd_PatternStd::Mirror),
             R"#(None)#"  , py::arg("plane"))
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
        .def_static("GetPatternID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataXtd_PatternStd::GetPatternID),
                    R"#(None)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataXtd_PatternStd> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataXtd_PatternStd> (*)( const TDF_Label & ) >(&TDataXtd_PatternStd::Set),
                    R"#(Find, or create, a PatternStd attribute)#"  , py::arg("label"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataXtd_PatternStd::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataXtd_PatternStd::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\TDataXtd_Triangulation.hxx
// ./opencascade\TDataXtd_Placement.hxx
// ./opencascade\TDataXtd_Axis.hxx
// ./opencascade\TDataXtd_Constraint.hxx
// ./opencascade\TDataXtd_Geometry.hxx
// ./opencascade\TDataXtd_GeometryEnum.hxx
// ./opencascade\TDataXtd_ConstraintEnum.hxx
// ./opencascade\TDataXtd_Presentation.hxx
// ./opencascade\TDataXtd_Shape.hxx
// ./opencascade\TDataXtd_PatternStd.hxx
// ./opencascade\TDataXtd_Array1OfTrsf.hxx
// ./opencascade\TDataXtd_Point.hxx
// ./opencascade\TDataXtd_Position.hxx
// ./opencascade\TDataXtd_Plane.hxx
// ./opencascade\TDataXtd_Pattern.hxx
// ./opencascade\TDataXtd.hxx
// ./opencascade\TDataXtd_HArray1OfTrsf.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<gp_Trsf>(m,"TDataXtd_Array1OfTrsf");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
