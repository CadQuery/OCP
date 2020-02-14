
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_HShape.hxx>
#include <TopoDS_TVertex.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_TEdge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_TWire.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_TFace.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_TShell.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_TSolid.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_TCompSolid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_TCompound.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Builder.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_FrozenShape.hxx>
#include <TopoDS_UnCompatibleShapes.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Builder.hxx>
#include <Standard_NoMoreObject.hxx>

// module includes
#include <TopoDS.hxx>
#include <TopoDS_AlertWithShape.hxx>
#include <TopoDS_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_FrozenShape.hxx>
#include <TopoDS_HShape.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_ListIteratorOfListOfShape.hxx>
#include <TopoDS_ListOfShape.hxx>
#include <TopoDS_LockedShape.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_TCompound.hxx>
#include <TopoDS_TCompSolid.hxx>
#include <TopoDS_TEdge.hxx>
#include <TopoDS_TFace.hxx>
#include <TopoDS_TShape.hxx>
#include <TopoDS_TShell.hxx>
#include <TopoDS_TSolid.hxx>
#include <TopoDS_TVertex.hxx>
#include <TopoDS_TWire.hxx>
#include <TopoDS_UnCompatibleShapes.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>

// template related includes
// ./opencascade/TopoDS_ListOfShape.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopoDS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopoDS"));


//Python trampoline classes
    class Py_TopoDS_TShape : public TopoDS_TShape{
    public:
        using TopoDS_TShape::TopoDS_TShape;
        
        
        // public pure virtual
        TopAbs_ShapeEnum ShapeType() const  override { PYBIND11_OVERLOAD_PURE(TopAbs_ShapeEnum,TopoDS_TShape,ShapeType,) };
        opencascade::handle<TopoDS_TShape> EmptyCopy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TopoDS_TShape>,TopoDS_TShape,EmptyCopy,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_TopoDS_TEdge : public TopoDS_TEdge{
    public:
        using TopoDS_TEdge::TopoDS_TEdge;
        
        
        // public pure virtual
        
        opencascade::handle<TopoDS_TShape> EmptyCopy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TopoDS_TShape>,TopoDS_TShape,EmptyCopy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_TopoDS_TVertex : public TopoDS_TVertex{
    public:
        using TopoDS_TVertex::TopoDS_TVertex;
        
        
        // public pure virtual
        
        opencascade::handle<TopoDS_TShape> EmptyCopy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TopoDS_TShape>,TopoDS_TShape,EmptyCopy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

    // default constructor
    register_default_constructor<TopoDS , shared_ptr<TopoDS>>(m,"TopoDS");

    static_cast<py::class_<TopoDS , shared_ptr<TopoDS>  >>(m.attr("TopoDS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Vertex_s",
                    (const TopoDS_Vertex & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Vertex & (*)( const TopoDS_Shape &  ) >(&TopoDS::Vertex),
                    R"#(Basic tool to access the data structure. Casts shape S to the more specialized return type, Vertex. Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("Vertex_s",
                    (TopoDS_Vertex & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_Vertex & (*)( TopoDS_Shape &  ) >(&TopoDS::Vertex),
                    R"#(None)#"  , py::arg(""))
        .def_static("Edge_s",
                    (const TopoDS_Edge & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Edge & (*)( const TopoDS_Shape &  ) >(&TopoDS::Edge),
                    R"#(Casts shape S to the more specialized return type, Edge Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("Edge_s",
                    (TopoDS_Edge & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_Edge & (*)( TopoDS_Shape &  ) >(&TopoDS::Edge),
                    R"#(None)#"  , py::arg(""))
        .def_static("Wire_s",
                    (const TopoDS_Wire & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Wire & (*)( const TopoDS_Shape &  ) >(&TopoDS::Wire),
                    R"#(Casts shape S to the more specialized return type, Wire. Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("Wire_s",
                    (TopoDS_Wire & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_Wire & (*)( TopoDS_Shape &  ) >(&TopoDS::Wire),
                    R"#(None)#"  , py::arg(""))
        .def_static("Face_s",
                    (const TopoDS_Face & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Face & (*)( const TopoDS_Shape &  ) >(&TopoDS::Face),
                    R"#(Casts shape S to the more specialized return type, Face. Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("Face_s",
                    (TopoDS_Face & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_Face & (*)( TopoDS_Shape &  ) >(&TopoDS::Face),
                    R"#(None)#"  , py::arg(""))
        .def_static("Shell_s",
                    (const TopoDS_Shell & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Shell & (*)( const TopoDS_Shape &  ) >(&TopoDS::Shell),
                    R"#(Casts shape S to the more specialized return type, Shell. Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("Shell_s",
                    (TopoDS_Shell & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_Shell & (*)( TopoDS_Shape &  ) >(&TopoDS::Shell),
                    R"#(None)#"  , py::arg(""))
        .def_static("Solid_s",
                    (const TopoDS_Solid & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Solid & (*)( const TopoDS_Shape &  ) >(&TopoDS::Solid),
                    R"#(Casts shape S to the more specialized return type, Solid. Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("Solid_s",
                    (TopoDS_Solid & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_Solid & (*)( TopoDS_Shape &  ) >(&TopoDS::Solid),
                    R"#(None)#"  , py::arg(""))
        .def_static("CompSolid_s",
                    (const TopoDS_CompSolid & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_CompSolid & (*)( const TopoDS_Shape &  ) >(&TopoDS::CompSolid),
                    R"#(Casts shape S to the more specialized return type, CompSolid. Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("CompSolid_s",
                    (TopoDS_CompSolid & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_CompSolid & (*)( TopoDS_Shape &  ) >(&TopoDS::CompSolid),
                    R"#(None)#"  , py::arg(""))
        .def_static("Compound_s",
                    (const TopoDS_Compound & (*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Compound & (*)( const TopoDS_Shape &  ) >(&TopoDS::Compound),
                    R"#(Casts shape S to the more specialized return type, Compound. Exceptions Standard_TypeMismatch if S cannot be cast to this return type.)#"  , py::arg("S"))
        .def_static("Compound_s",
                    (TopoDS_Compound & (*)( TopoDS_Shape &  ) ) static_cast<TopoDS_Compound & (*)( TopoDS_Shape &  ) >(&TopoDS::Compound),
                    R"#(None)#"  , py::arg(""))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_AlertWithShape ,opencascade::handle<TopoDS_AlertWithShape>  , Message_Alert >>(m.attr("TopoDS_AlertWithShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("GetShape",
             (const TopoDS_Shape & (TopoDS_AlertWithShape::*)() const) static_cast<const TopoDS_Shape & (TopoDS_AlertWithShape::*)() const>(&TopoDS_AlertWithShape::GetShape),
             R"#(Returns contained shape)#" )
        .def("SetShape",
             (void (TopoDS_AlertWithShape::*)( const TopoDS_Shape &  ) ) static_cast<void (TopoDS_AlertWithShape::*)( const TopoDS_Shape &  ) >(&TopoDS_AlertWithShape::SetShape),
             R"#(Sets the shape)#"  , py::arg("theShape"))
        .def("SupportsMerge",
             (Standard_Boolean (TopoDS_AlertWithShape::*)() const) static_cast<Standard_Boolean (TopoDS_AlertWithShape::*)() const>(&TopoDS_AlertWithShape::SupportsMerge),
             R"#(Returns false.)#" )
        .def("Merge",
             (Standard_Boolean (TopoDS_AlertWithShape::*)( const opencascade::handle<Message_Alert> &  ) ) static_cast<Standard_Boolean (TopoDS_AlertWithShape::*)( const opencascade::handle<Message_Alert> &  ) >(&TopoDS_AlertWithShape::Merge),
             R"#(Returns false.)#"  , py::arg("theTarget"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_AlertWithShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_AlertWithShape::*)() const>(&TopoDS_AlertWithShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_AlertWithShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_AlertWithShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopoDS_Builder , shared_ptr<TopoDS_Builder>>(m,"TopoDS_Builder");

    static_cast<py::class_<TopoDS_Builder , shared_ptr<TopoDS_Builder>  >>(m.attr("TopoDS_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("MakeWire",
             (void (TopoDS_Builder::*)( TopoDS_Wire &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Wire &  ) const>(&TopoDS_Builder::MakeWire),
             R"#(Make an empty Wire.)#"  , py::arg("W"))
        .def("MakeShell",
             (void (TopoDS_Builder::*)( TopoDS_Shell &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Shell &  ) const>(&TopoDS_Builder::MakeShell),
             R"#(Make an empty Shell.)#"  , py::arg("S"))
        .def("MakeSolid",
             (void (TopoDS_Builder::*)( TopoDS_Solid &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Solid &  ) const>(&TopoDS_Builder::MakeSolid),
             R"#(Make a Solid covering the whole 3D space.)#"  , py::arg("S"))
        .def("MakeCompSolid",
             (void (TopoDS_Builder::*)( TopoDS_CompSolid &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_CompSolid &  ) const>(&TopoDS_Builder::MakeCompSolid),
             R"#(Make an empty Composite Solid.)#"  , py::arg("C"))
        .def("MakeCompound",
             (void (TopoDS_Builder::*)( TopoDS_Compound &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Compound &  ) const>(&TopoDS_Builder::MakeCompound),
             R"#(Make an empty Compound.)#"  , py::arg("C"))
        .def("Add",
             (void (TopoDS_Builder::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) const>(&TopoDS_Builder::Add),
             R"#(Add the Shape C in the Shape S. Exceptions - TopoDS_FrozenShape if S is not free and cannot be modified. - TopoDS__UnCompatibleShapes if S and C are not compatible.)#"  , py::arg("S"),  py::arg("C"))
        .def("Remove",
             (void (TopoDS_Builder::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) const>(&TopoDS_Builder::Remove),
             R"#(Remove the Shape C from the Shape S. Exceptions TopoDS_FrozenShape if S is frozen and cannot be modified.)#"  , py::arg("S"),  py::arg("C"))
        .def("MakeWire",
             (void (TopoDS_Builder::*)( TopoDS_Wire &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Wire &  ) const>(&TopoDS_Builder::MakeWire),
             R"#(Make an empty Wire.)#"  , py::arg("W"))
        .def("MakeShell",
             (void (TopoDS_Builder::*)( TopoDS_Shell &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Shell &  ) const>(&TopoDS_Builder::MakeShell),
             R"#(Make an empty Shell.)#"  , py::arg("S"))
        .def("MakeSolid",
             (void (TopoDS_Builder::*)( TopoDS_Solid &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Solid &  ) const>(&TopoDS_Builder::MakeSolid),
             R"#(Make a Solid covering the whole 3D space.)#"  , py::arg("S"))
        .def("MakeCompSolid",
             (void (TopoDS_Builder::*)( TopoDS_CompSolid &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_CompSolid &  ) const>(&TopoDS_Builder::MakeCompSolid),
             R"#(Make an empty Composite Solid.)#"  , py::arg("C"))
        .def("MakeCompound",
             (void (TopoDS_Builder::*)( TopoDS_Compound &  ) const) static_cast<void (TopoDS_Builder::*)( TopoDS_Compound &  ) const>(&TopoDS_Builder::MakeCompound),
             R"#(Make an empty Compound.)#"  , py::arg("C"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_HShape ,opencascade::handle<TopoDS_HShape>  , Standard_Transient >>(m.attr("TopoDS_HShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("aShape") )
    // custom constructors
    // methods
        .def("Shape",
             (void (TopoDS_HShape::*)( const TopoDS_Shape &  ) ) static_cast<void (TopoDS_HShape::*)( const TopoDS_Shape &  ) >(&TopoDS_HShape::Shape),
             R"#(Loads this shape with the shape aShape)#"  , py::arg("aShape"))
        .def("Shape",
             (const TopoDS_Shape & (TopoDS_HShape::*)() const) static_cast<const TopoDS_Shape & (TopoDS_HShape::*)() const>(&TopoDS_HShape::Shape),
             R"#(Returns a reference to a constant TopoDS_Shape based on this shape.)#" )
        .def("ChangeShape",
             (TopoDS_Shape & (TopoDS_HShape::*)() ) static_cast<TopoDS_Shape & (TopoDS_HShape::*)() >(&TopoDS_HShape::ChangeShape),
             R"#(Exchanges the TopoDS_Shape object defining this shape for another one referencing the same underlying shape Accesses the list of shapes within the underlying shape referenced by the TopoDS_Shape object. Returns a reference to a TopoDS_Shape based on this shape. The TopoDS_Shape can be modified.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_HShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_HShape::*)() const>(&TopoDS_HShape::DynamicType),
             R"#(None)#" )
        .def("Shape",
             (void (TopoDS_HShape::*)( const TopoDS_Shape &  ) ) static_cast<void (TopoDS_HShape::*)( const TopoDS_Shape &  ) >(&TopoDS_HShape::Shape),
             R"#(Loads this shape with the shape aShape)#"  , py::arg("aShape"))
        .def("Shape",
             (const TopoDS_Shape & (TopoDS_HShape::*)() const) static_cast<const TopoDS_Shape & (TopoDS_HShape::*)() const>(&TopoDS_HShape::Shape),
             R"#(Returns a reference to a constant TopoDS_Shape based on this shape.)#" )
        .def("ChangeShape",
             (TopoDS_Shape & (TopoDS_HShape::*)() ) static_cast<TopoDS_Shape & (TopoDS_HShape::*)() >(&TopoDS_HShape::ChangeShape),
             R"#(Exchanges the TopoDS_Shape object defining this shape for another one referencing the same underlying shape Accesses the list of shapes within the underlying shape referenced by the TopoDS_Shape object. Returns a reference to a TopoDS_Shape based on this shape. The TopoDS_Shape can be modified.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_HShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_HShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Iterator , shared_ptr<TopoDS_Iterator>  >>(m.attr("TopoDS_Iterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("cumOri")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("cumLoc")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (TopoDS_Iterator::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (TopoDS_Iterator::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&TopoDS_Iterator::Initialize),
             R"#(Initializes this iterator with shape S. Note: - If cumOri is true, the function composes all sub-shapes with the orientation of S. - If cumLoc is true, the function multiplies all sub-shapes by the location of S, i.e. it applies to each sub-shape the transformation that is associated with S.)#"  , py::arg("S"),  py::arg("cumOri")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("cumLoc")=static_cast<const Standard_Boolean>(Standard_True))
        .def("More",
             (Standard_Boolean (TopoDS_Iterator::*)() const) static_cast<Standard_Boolean (TopoDS_Iterator::*)() const>(&TopoDS_Iterator::More),
             R"#(Returns true if there is another sub-shape in the shape which this iterator is scanning.)#" )
        .def("Next",
             (void (TopoDS_Iterator::*)() ) static_cast<void (TopoDS_Iterator::*)() >(&TopoDS_Iterator::Next),
             R"#(Moves on to the next sub-shape in the shape which this iterator is scanning. Exceptions Standard_NoMoreObject if there are no more sub-shapes in the shape.)#" )
        .def("Value",
             (const TopoDS_Shape & (TopoDS_Iterator::*)() const) static_cast<const TopoDS_Shape & (TopoDS_Iterator::*)() const>(&TopoDS_Iterator::Value),
             R"#(Returns the current sub-shape in the shape which this iterator is scanning. Exceptions Standard_NoSuchObject if there is no current sub-shape.)#" )
        .def("More",
             (Standard_Boolean (TopoDS_Iterator::*)() const) static_cast<Standard_Boolean (TopoDS_Iterator::*)() const>(&TopoDS_Iterator::More),
             R"#(Returns true if there is another sub-shape in the shape which this iterator is scanning.)#" )
        .def("Value",
             (const TopoDS_Shape & (TopoDS_Iterator::*)() const) static_cast<const TopoDS_Shape & (TopoDS_Iterator::*)() const>(&TopoDS_Iterator::Value),
             R"#(Returns the current sub-shape in the shape which this iterator is scanning. Exceptions Standard_NoSuchObject if there is no current sub-shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Shape , shared_ptr<TopoDS_Shape>  >>(m.attr("TopoDS_Shape"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsNull",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::IsNull),
             R"#(Returns true if this shape is null. In other words, it references no underlying shape with the potential to be given a location and an orientation.)#" )
        .def("Nullify",
             (void (TopoDS_Shape::*)() ) static_cast<void (TopoDS_Shape::*)() >(&TopoDS_Shape::Nullify),
             R"#(Destroys the reference to the underlying shape stored in this shape. As a result, this shape becomes null.)#" )
        .def("Location",
             (const TopLoc_Location & (TopoDS_Shape::*)() const) static_cast<const TopLoc_Location & (TopoDS_Shape::*)() const>(&TopoDS_Shape::Location),
             R"#(Returns the shape local coordinate system.)#" )
        .def("Location",
             (void (TopoDS_Shape::*)( const TopLoc_Location &  ) ) static_cast<void (TopoDS_Shape::*)( const TopLoc_Location &  ) >(&TopoDS_Shape::Location),
             R"#(Sets the shape local coordinate system.)#"  , py::arg("theLoc"))
        .def("Located",
             (TopoDS_Shape (TopoDS_Shape::*)( const TopLoc_Location &  ) const) static_cast<TopoDS_Shape (TopoDS_Shape::*)( const TopLoc_Location &  ) const>(&TopoDS_Shape::Located),
             R"#(Returns a shape similar to <me> with the local coordinate system set to <Loc>.)#"  , py::arg("theLoc"))
        .def("Orientation",
             (TopAbs_Orientation (TopoDS_Shape::*)() const) static_cast<TopAbs_Orientation (TopoDS_Shape::*)() const>(&TopoDS_Shape::Orientation),
             R"#(Returns the shape orientation.)#" )
        .def("Orientation",
             (void (TopoDS_Shape::*)( TopAbs_Orientation  ) ) static_cast<void (TopoDS_Shape::*)( TopAbs_Orientation  ) >(&TopoDS_Shape::Orientation),
             R"#(Sets the shape orientation.)#"  , py::arg("theOrient"))
        .def("Oriented",
             (TopoDS_Shape (TopoDS_Shape::*)( TopAbs_Orientation  ) const) static_cast<TopoDS_Shape (TopoDS_Shape::*)( TopAbs_Orientation  ) const>(&TopoDS_Shape::Oriented),
             R"#(Returns a shape similar to <me> with the orientation set to <Or>.)#"  , py::arg("theOrient"))
        .def("TShape",
             (const opencascade::handle<TopoDS_TShape> & (TopoDS_Shape::*)() const) static_cast<const opencascade::handle<TopoDS_TShape> & (TopoDS_Shape::*)() const>(&TopoDS_Shape::TShape),
             R"#(Returns a handle to the actual shape implementation.)#" )
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_Shape::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_Shape::*)() const>(&TopoDS_Shape::ShapeType),
             R"#(Returns the value of the TopAbs_ShapeEnum enumeration that corresponds to this shape, for example VERTEX, EDGE, and so on. Exceptions Standard_NullObject if this shape is null.)#" )
        .def("Free",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Free),
             R"#(Returns the free flag.)#" )
        .def("Free",
             (void (TopoDS_Shape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( Standard_Boolean  ) >(&TopoDS_Shape::Free),
             R"#(Sets the free flag.)#"  , py::arg("theIsFree"))
        .def("Locked",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Locked),
             R"#(Returns the locked flag.)#" )
        .def("Locked",
             (void (TopoDS_Shape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( Standard_Boolean  ) >(&TopoDS_Shape::Locked),
             R"#(Sets the locked flag.)#"  , py::arg("theIsLocked"))
        .def("Modified",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Modified),
             R"#(Returns the modification flag.)#" )
        .def("Modified",
             (void (TopoDS_Shape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( Standard_Boolean  ) >(&TopoDS_Shape::Modified),
             R"#(Sets the modification flag.)#"  , py::arg("theIsModified"))
        .def("Checked",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Checked),
             R"#(Returns the checked flag.)#" )
        .def("Checked",
             (void (TopoDS_Shape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( Standard_Boolean  ) >(&TopoDS_Shape::Checked),
             R"#(Sets the checked flag.)#"  , py::arg("theIsChecked"))
        .def("Orientable",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Orientable),
             R"#(Returns the orientability flag.)#" )
        .def("Orientable",
             (void (TopoDS_Shape::*)( const Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( const Standard_Boolean  ) >(&TopoDS_Shape::Orientable),
             R"#(Sets the orientability flag.)#"  , py::arg("theIsOrientable"))
        .def("Closed",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Closed),
             R"#(Returns the closedness flag.)#" )
        .def("Closed",
             (void (TopoDS_Shape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( Standard_Boolean  ) >(&TopoDS_Shape::Closed),
             R"#(Sets the closedness flag.)#"  , py::arg("theIsClosed"))
        .def("Infinite",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Infinite),
             R"#(Returns the infinity flag.)#" )
        .def("Infinite",
             (void (TopoDS_Shape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( Standard_Boolean  ) >(&TopoDS_Shape::Infinite),
             R"#(Sets the infinity flag.)#"  , py::arg("theIsInfinite"))
        .def("Convex",
             (Standard_Boolean (TopoDS_Shape::*)() const) static_cast<Standard_Boolean (TopoDS_Shape::*)() const>(&TopoDS_Shape::Convex),
             R"#(Returns the convexness flag.)#" )
        .def("Convex",
             (void (TopoDS_Shape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_Shape::*)( Standard_Boolean  ) >(&TopoDS_Shape::Convex),
             R"#(Sets the convexness flag.)#"  , py::arg("theIsConvex"))
        .def("Move",
             (void (TopoDS_Shape::*)( const TopLoc_Location &  ) ) static_cast<void (TopoDS_Shape::*)( const TopLoc_Location &  ) >(&TopoDS_Shape::Move),
             R"#(Multiplies the Shape location by thePosition.)#"  , py::arg("thePosition"))
        .def("Moved",
             (TopoDS_Shape (TopoDS_Shape::*)( const TopLoc_Location &  ) const) static_cast<TopoDS_Shape (TopoDS_Shape::*)( const TopLoc_Location &  ) const>(&TopoDS_Shape::Moved),
             R"#(Returns a shape similar to <me> with a location multiplied by thePosition.)#"  , py::arg("thePosition"))
        .def("Reverse",
             (void (TopoDS_Shape::*)() ) static_cast<void (TopoDS_Shape::*)() >(&TopoDS_Shape::Reverse),
             R"#(Reverses the orientation, using the Reverse method from the TopAbs package.)#" )
        .def("Reversed",
             (TopoDS_Shape (TopoDS_Shape::*)() const) static_cast<TopoDS_Shape (TopoDS_Shape::*)() const>(&TopoDS_Shape::Reversed),
             R"#(Returns a shape similar to <me> with the orientation reversed, using the Reverse method from the TopAbs package.)#" )
        .def("Complement",
             (void (TopoDS_Shape::*)() ) static_cast<void (TopoDS_Shape::*)() >(&TopoDS_Shape::Complement),
             R"#(Complements the orientation, using the Complement method from the TopAbs package.)#" )
        .def("Complemented",
             (TopoDS_Shape (TopoDS_Shape::*)() const) static_cast<TopoDS_Shape (TopoDS_Shape::*)() const>(&TopoDS_Shape::Complemented),
             R"#(Returns a shape similar to <me> with the orientation complemented, using the Complement method from the TopAbs package.)#" )
        .def("Compose",
             (void (TopoDS_Shape::*)( TopAbs_Orientation  ) ) static_cast<void (TopoDS_Shape::*)( TopAbs_Orientation  ) >(&TopoDS_Shape::Compose),
             R"#(Updates the Shape Orientation by composition with theOrient, using the Compose method from the TopAbs package.)#"  , py::arg("theOrient"))
        .def("Composed",
             (TopoDS_Shape (TopoDS_Shape::*)( TopAbs_Orientation  ) const) static_cast<TopoDS_Shape (TopoDS_Shape::*)( TopAbs_Orientation  ) const>(&TopoDS_Shape::Composed),
             R"#(Returns a shape similar to <me> with the orientation composed with theOrient, using the Compose method from the TopAbs package.)#"  , py::arg("theOrient"))
        .def("NbChildren",
             (Standard_Integer (TopoDS_Shape::*)() const) static_cast<Standard_Integer (TopoDS_Shape::*)() const>(&TopoDS_Shape::NbChildren),
             R"#(Returns the number of direct sub-shapes (children).)#" )
        .def("IsPartner",
             (Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const>(&TopoDS_Shape::IsPartner),
             R"#(Returns True if two shapes are partners, i.e. if they share the same TShape. Locations and Orientations may differ.)#"  , py::arg("theOther"))
        .def("IsSame",
             (Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const>(&TopoDS_Shape::IsSame),
             R"#(Returns True if two shapes are same, i.e. if they share the same TShape with the same Locations. Orientations may differ.)#"  , py::arg("theOther"))
        .def("IsEqual",
             (Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const>(&TopoDS_Shape::IsEqual),
             R"#(Returns True if two shapes are equal, i.e. if they share the same TShape with the same Locations and Orientations.)#"  , py::arg("theOther"))
        .def("IsNotEqual",
             (Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (TopoDS_Shape::*)( const TopoDS_Shape &  ) const>(&TopoDS_Shape::IsNotEqual),
             R"#(Negation of the IsEqual method.)#"  , py::arg("theOther"))
        .def("HashCode",
             (Standard_Integer (TopoDS_Shape::*)( Standard_Integer  ) const) static_cast<Standard_Integer (TopoDS_Shape::*)( Standard_Integer  ) const>(&TopoDS_Shape::HashCode),
             R"#(Returns a hashed value denoting <me>. This value is in the range [1, theUpperBound]. It is computed from the TShape and the Location. The Orientation is not used.)#"  , py::arg("theUpperBound"))
        .def("EmptyCopy",
             (void (TopoDS_Shape::*)() ) static_cast<void (TopoDS_Shape::*)() >(&TopoDS_Shape::EmptyCopy),
             R"#(Replace <me> by a new Shape with the same Orientation and Location and a new TShape with the same geometry and no sub-shapes.)#" )
        .def("EmptyCopied",
             (TopoDS_Shape (TopoDS_Shape::*)() const) static_cast<TopoDS_Shape (TopoDS_Shape::*)() const>(&TopoDS_Shape::EmptyCopied),
             R"#(Returns a new Shape with the same Orientation and Location and a new TShape with the same geometry and no sub-shapes.)#" )
        .def("TShape",
             (void (TopoDS_Shape::*)( const opencascade::handle<TopoDS_TShape> &  ) ) static_cast<void (TopoDS_Shape::*)( const opencascade::handle<TopoDS_TShape> &  ) >(&TopoDS_Shape::TShape),
             R"#(None)#"  , py::arg("theTShape"))
        .def("DumpJson",
             (void (TopoDS_Shape::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (TopoDS_Shape::*)( std::ostream & ,  const Standard_Integer  ) const>(&TopoDS_Shape::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TShape ,opencascade::handle<TopoDS_TShape> ,Py_TopoDS_TShape , Standard_Transient >>(m.attr("TopoDS_TShape"))
    // constructors
    // custom constructors
    // methods
        .def("Free",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Free),
             R"#(Returns the free flag.)#" )
        .def("Free",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Free),
             R"#(Sets the free flag.)#"  , py::arg("theIsFree"))
        .def("Locked",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Locked),
             R"#(Returns the locked flag.)#" )
        .def("Locked",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Locked),
             R"#(Sets the locked flag.)#"  , py::arg("theIsLocked"))
        .def("Modified",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Modified),
             R"#(Returns the modification flag.)#" )
        .def("Modified",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Modified),
             R"#(Sets the modification flag.)#"  , py::arg("theIsModified"))
        .def("Checked",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Checked),
             R"#(Returns the checked flag.)#" )
        .def("Checked",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Checked),
             R"#(Sets the checked flag.)#"  , py::arg("theIsChecked"))
        .def("Orientable",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Orientable),
             R"#(Returns the orientability flag.)#" )
        .def("Orientable",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Orientable),
             R"#(Sets the orientability flag.)#"  , py::arg("theIsOrientable"))
        .def("Closed",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Closed),
             R"#(Returns the closedness flag.)#" )
        .def("Closed",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Closed),
             R"#(Sets the closedness flag.)#"  , py::arg("theIsClosed"))
        .def("Infinite",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Infinite),
             R"#(Returns the infinity flag.)#" )
        .def("Infinite",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Infinite),
             R"#(Sets the infinity flag.)#"  , py::arg("theIsInfinite"))
        .def("Convex",
             (Standard_Boolean (TopoDS_TShape::*)() const) static_cast<Standard_Boolean (TopoDS_TShape::*)() const>(&TopoDS_TShape::Convex),
             R"#(Returns the convexness flag.)#" )
        .def("Convex",
             (void (TopoDS_TShape::*)( Standard_Boolean  ) ) static_cast<void (TopoDS_TShape::*)( Standard_Boolean  ) >(&TopoDS_TShape::Convex),
             R"#(Sets the convexness flag.)#"  , py::arg("theIsConvex"))
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TShape::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TShape::*)() const>(&TopoDS_TShape::ShapeType),
             R"#(Returns the type as a term of the ShapeEnum enum : VERTEX, EDGE, WIRE, FACE, ....)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (TopoDS_TShape::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (TopoDS_TShape::*)() const>(&TopoDS_TShape::EmptyCopy),
             R"#(Returns a copy of the TShape with no sub-shapes.)#" )
        .def("NbChildren",
             (Standard_Integer (TopoDS_TShape::*)() const) static_cast<Standard_Integer (TopoDS_TShape::*)() const>(&TopoDS_TShape::NbChildren),
             R"#(Returns the number of direct sub-shapes (children).)#" )
        .def("DumpJson",
             (void (TopoDS_TShape::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (TopoDS_TShape::*)( std::ostream & ,  const Standard_Integer  ) const>(&TopoDS_TShape::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TShape::*)() const>(&TopoDS_TShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_CompSolid , shared_ptr<TopoDS_CompSolid>  , TopoDS_Shape >>(m.attr("TopoDS_CompSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Compound , shared_ptr<TopoDS_Compound>  , TopoDS_Shape >>(m.attr("TopoDS_Compound"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Edge , shared_ptr<TopoDS_Edge>  , TopoDS_Shape >>(m.attr("TopoDS_Edge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Face , shared_ptr<TopoDS_Face>  , TopoDS_Shape >>(m.attr("TopoDS_Face"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Shell , shared_ptr<TopoDS_Shell>  , TopoDS_Shape >>(m.attr("TopoDS_Shell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Solid , shared_ptr<TopoDS_Solid>  , TopoDS_Shape >>(m.attr("TopoDS_Solid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TCompSolid ,opencascade::handle<TopoDS_TCompSolid>  , TopoDS_TShape >>(m.attr("TopoDS_TCompSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TCompSolid::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TCompSolid::*)() const>(&TopoDS_TCompSolid::ShapeType),
             R"#(returns COMPSOLID)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (TopoDS_TCompSolid::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (TopoDS_TCompSolid::*)() const>(&TopoDS_TCompSolid::EmptyCopy),
             R"#(Returns an empty TCompSolid.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TCompSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TCompSolid::*)() const>(&TopoDS_TCompSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TCompSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TCompSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TCompound ,opencascade::handle<TopoDS_TCompound>  , TopoDS_TShape >>(m.attr("TopoDS_TCompound"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TCompound::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TCompound::*)() const>(&TopoDS_TCompound::ShapeType),
             R"#(Returns COMPOUND.)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (TopoDS_TCompound::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (TopoDS_TCompound::*)() const>(&TopoDS_TCompound::EmptyCopy),
             R"#(Returns an empty TCompound.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TCompound::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TCompound::*)() const>(&TopoDS_TCompound::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TCompound::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TCompound::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TEdge ,opencascade::handle<TopoDS_TEdge> ,Py_TopoDS_TEdge , TopoDS_TShape >>(m.attr("TopoDS_TEdge"))
    // constructors
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TEdge::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TEdge::*)() const>(&TopoDS_TEdge::ShapeType),
             R"#(Returns EDGE.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TEdge::*)() const>(&TopoDS_TEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TFace ,opencascade::handle<TopoDS_TFace>  , TopoDS_TShape >>(m.attr("TopoDS_TFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TFace::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TFace::*)() const>(&TopoDS_TFace::ShapeType),
             R"#(returns FACE.)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (TopoDS_TFace::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (TopoDS_TFace::*)() const>(&TopoDS_TFace::EmptyCopy),
             R"#(Returns an empty TFace.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TFace::*)() const>(&TopoDS_TFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TFace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TShell ,opencascade::handle<TopoDS_TShell>  , TopoDS_TShape >>(m.attr("TopoDS_TShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TShell::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TShell::*)() const>(&TopoDS_TShell::ShapeType),
             R"#(Returns SHELL.)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (TopoDS_TShell::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (TopoDS_TShell::*)() const>(&TopoDS_TShell::EmptyCopy),
             R"#(Returns an empty TShell.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TShell::*)() const>(&TopoDS_TShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TShell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TSolid ,opencascade::handle<TopoDS_TSolid>  , TopoDS_TShape >>(m.attr("TopoDS_TSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TSolid::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TSolid::*)() const>(&TopoDS_TSolid::ShapeType),
             R"#(returns SOLID.)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (TopoDS_TSolid::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (TopoDS_TSolid::*)() const>(&TopoDS_TSolid::EmptyCopy),
             R"#(Returns an empty TSolid.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TSolid::*)() const>(&TopoDS_TSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TVertex ,opencascade::handle<TopoDS_TVertex> ,Py_TopoDS_TVertex , TopoDS_TShape >>(m.attr("TopoDS_TVertex"))
    // constructors
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TVertex::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TVertex::*)() const>(&TopoDS_TVertex::ShapeType),
             R"#(Returns VERTEX.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TVertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TVertex::*)() const>(&TopoDS_TVertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TVertex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TVertex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_TWire ,opencascade::handle<TopoDS_TWire>  , TopoDS_TShape >>(m.attr("TopoDS_TWire"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ShapeType",
             (TopAbs_ShapeEnum (TopoDS_TWire::*)() const) static_cast<TopAbs_ShapeEnum (TopoDS_TWire::*)() const>(&TopoDS_TWire::ShapeType),
             R"#(Returns WIRE.)#" )
        .def("EmptyCopy",
             (opencascade::handle<TopoDS_TShape> (TopoDS_TWire::*)() const) static_cast<opencascade::handle<TopoDS_TShape> (TopoDS_TWire::*)() const>(&TopoDS_TWire::EmptyCopy),
             R"#(Returns an empty TWire.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopoDS_TWire::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopoDS_TWire::*)() const>(&TopoDS_TWire::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopoDS_TWire::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopoDS_TWire::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Vertex , shared_ptr<TopoDS_Vertex>  , TopoDS_Shape >>(m.attr("TopoDS_Vertex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDS_Wire , shared_ptr<TopoDS_Wire>  , TopoDS_Shape >>(m.attr("TopoDS_Wire"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopoDS_Wire.hxx
// ./opencascade/TopoDS_TShell.hxx
// ./opencascade/TopoDS_UnCompatibleShapes.hxx
// ./opencascade/TopoDS.hxx
    m.def("TopoDS_Mismatch", 
          (Standard_Boolean (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  )>(&TopoDS_Mismatch),
          R"#(None)#"  , py::arg("S"),  py::arg("T"));
// ./opencascade/TopoDS_HShape.hxx
// ./opencascade/TopoDS_Vertex.hxx
// ./opencascade/TopoDS_ListOfShape.hxx
// ./opencascade/TopoDS_Shell.hxx
// ./opencascade/TopoDS_TWire.hxx
// ./opencascade/TopoDS_Builder.hxx
// ./opencascade/TopoDS_TCompSolid.hxx
// ./opencascade/TopoDS_ListIteratorOfListOfShape.hxx
// ./opencascade/TopoDS_TEdge.hxx
// ./opencascade/TopoDS_Solid.hxx
// ./opencascade/TopoDS_TCompound.hxx
// ./opencascade/TopoDS_Compound.hxx
// ./opencascade/TopoDS_FrozenShape.hxx
// ./opencascade/TopoDS_TShape.hxx
// ./opencascade/TopoDS_Edge.hxx
// ./opencascade/TopoDS_AlertWithShape.hxx
// ./opencascade/TopoDS_Shape.hxx
    m.def("HashCode", 
          (Standard_Integer (*)( const TopoDS_Shape & ,  const Standard_Integer  ))  static_cast<Standard_Integer (*)( const TopoDS_Shape & ,  const Standard_Integer  )>(&HashCode),
          R"#(Computes a hash code for the given shape, in the range [1, theUpperBound])#"  , py::arg("theShape"),  py::arg("theUpperBound"));
// ./opencascade/TopoDS_Face.hxx
// ./opencascade/TopoDS_LockedShape.hxx
// ./opencascade/TopoDS_TSolid.hxx
// ./opencascade/TopoDS_TFace.hxx
// ./opencascade/TopoDS_TVertex.hxx
// ./opencascade/TopoDS_Iterator.hxx
// ./opencascade/TopoDS_CompSolid.hxx

// operators

// register typdefs


// exceptions
register_occ_exception<TopoDS_FrozenShape>(m, "TopoDS_FrozenShape");
register_occ_exception<TopoDS_LockedShape>(m, "TopoDS_LockedShape");
register_occ_exception<TopoDS_UnCompatibleShapes>(m, "TopoDS_UnCompatibleShapes");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
