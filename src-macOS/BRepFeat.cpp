
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <BRepTopAdaptor_FClass2d.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepFeat_Builder.hxx>
#include <BRepFeat_MakeCylindricalHole.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <BRepFeat_Form.hxx>
#include <BRepFeat_RibSlot.hxx>
#include <BRepFeat_MakePrism.hxx>
#include <BRepFeat_MakeRevol.hxx>
#include <BRepFeat_MakePipe.hxx>
#include <BRepFeat_Gluer.hxx>
#include <BRepFeat_MakeDPrism.hxx>
#include <BRepFeat_MakeLinearForm.hxx>
#include <BRepFeat_MakeRevolutionForm.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <BRepFeat.hxx>
#include <BRepFeat_Builder.hxx>
#include <BRepFeat_Form.hxx>
#include <BRepFeat_Gluer.hxx>
#include <BRepFeat_MakeCylindricalHole.hxx>
#include <BRepFeat_MakeDPrism.hxx>
#include <BRepFeat_MakeLinearForm.hxx>
#include <BRepFeat_MakePipe.hxx>
#include <BRepFeat_MakePrism.hxx>
#include <BRepFeat_MakeRevol.hxx>
#include <BRepFeat_MakeRevolutionForm.hxx>
#include <BRepFeat_PerfSelection.hxx>
#include <BRepFeat_RibSlot.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <BRepFeat_Status.hxx>
#include <BRepFeat_StatusError.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepFeat(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepFeat"));


//Python trampoline classes
    class Py_BRepFeat_Form : public BRepFeat_Form{
    public:
        using BRepFeat_Form::BRepFeat_Form;


        // public pure virtual
        void Curves(NCollection_Sequence<opencascade::handle<Geom_Curve> > & S) override { PYBIND11_OVERLOAD_PURE(void,BRepFeat_Form,Curves,S) };
        opencascade::handle<Geom_Curve> BarycCurve() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,BRepFeat_Form,BarycCurve,) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<BRepFeat , shared_ptr<BRepFeat>>(m,"BRepFeat");

    static_cast<py::class_<BRepFeat , shared_ptr<BRepFeat> >>(m.attr("BRepFeat"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_Builder , shared_ptr<BRepFeat_Builder> , BOPAlgo_BOP>>(m.attr("BRepFeat_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepFeat_Builder::*)() ) static_cast<void (BRepFeat_Builder::*)() >(&BRepFeat_Builder::Clear),
             R"#(Clears internal fields and arguments.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_Form , shared_ptr<BRepFeat_Form>,Py_BRepFeat_Form , BRepBuilderAPI_MakeShape>>(m.attr("BRepFeat_Form"))
    // constructors
    // custom constructors
    // methods
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape & ) >(&BRepFeat_Form::Modified),
             R"#(returns the list of generated Faces.)#"  , py::arg("F"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape & ) >(&BRepFeat_Form::Generated),
             R"#(returns a list of the created faces from the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepFeat_Form::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepFeat_Form::*)( const TopoDS_Shape & ) >(&BRepFeat_Form::IsDeleted),
             R"#(None)#"  , py::arg("S"))
        .def("BasisShapeValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::BasisShapeValid),
             R"#(Initializes the topological construction if the basis shape is present.)#" )
        .def("GeneratedShapeValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::GeneratedShapeValid),
             R"#(Initializes the topological construction if the generated shape S is present.)#" )
        .def("ShapeFromValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::ShapeFromValid),
             R"#(Initializes the topological construction if the shape is present from the specified integer on.)#" )
        .def("ShapeUntilValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::ShapeUntilValid),
             R"#(Initializes the topological construction if the shape is present until the specified integer.)#" )
        .def("GluedFacesValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::GluedFacesValid),
             R"#(Initializes the topological construction if the glued face is present.)#" )
        .def("SketchFaceValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::SketchFaceValid),
             R"#(Initializes the topological construction if the sketch face is present. If the sketch face is inside the basis shape, local operations such as glueing can be performed.)#" )
        .def("PerfSelectionValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::PerfSelectionValid),
             R"#(Initializes the topological construction if the selected face is present.)#" )
        .def("Curves",
             (void (BRepFeat_Form::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) ) static_cast<void (BRepFeat_Form::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) >(&BRepFeat_Form::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_Form::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_Form::*)() >(&BRepFeat_Form::BarycCurve),
             R"#(None)#" )
        .def("BasisShapeValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::BasisShapeValid),
             R"#(Initializes the topological construction if the basis shape is present.)#" )
        .def("PerfSelectionValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::PerfSelectionValid),
             R"#(Initializes the topological construction if the selected face is present.)#" )
        .def("GeneratedShapeValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::GeneratedShapeValid),
             R"#(Initializes the topological construction if the generated shape S is present.)#" )
        .def("ShapeFromValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::ShapeFromValid),
             R"#(Initializes the topological construction if the shape is present from the specified integer on.)#" )
        .def("ShapeUntilValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::ShapeUntilValid),
             R"#(Initializes the topological construction if the shape is present until the specified integer.)#" )
        .def("GluedFacesValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::GluedFacesValid),
             R"#(Initializes the topological construction if the glued face is present.)#" )
        .def("SketchFaceValid",
             (void (BRepFeat_Form::*)() ) static_cast<void (BRepFeat_Form::*)() >(&BRepFeat_Form::SketchFaceValid),
             R"#(Initializes the topological construction if the sketch face is present. If the sketch face is inside the basis shape, local operations such as glueing can be performed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_Gluer , shared_ptr<BRepFeat_Gluer> , BRepBuilderAPI_MakeShape>>(m.attr("BRepFeat_Gluer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("Snew"),  py::arg("Sbase") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepFeat_Gluer::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepFeat_Gluer::Init),
             R"#(Initializes the new shape Snew and the basis shape Sbase for the local glueing operation.)#"  , py::arg("Snew"),  py::arg("Sbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&BRepFeat_Gluer::Bind),
             R"#(Defines a contact between Fnew on the new shape Snew and Fbase on the basis shape Sbase. Informs other methods that Fnew in the new shape Snew is connected to the face Fbase in the basis shape Sbase. The contact faces of the glued shape must not have parts outside the contact faces of the basis shape. This indicates that glueing is possible.)#"  , py::arg("Fnew"),  py::arg("Fbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&BRepFeat_Gluer::Bind),
             R"#(nforms other methods that the edge Enew in the new shape is the same as the edge Ebase in the basis shape and is therefore attached to the basis shape. This indicates that glueing is possible.)#"  , py::arg("Enew"),  py::arg("Ebase"))
        .def("OpeType",
             (LocOpe_Operation (BRepFeat_Gluer::*)() const) static_cast<LocOpe_Operation (BRepFeat_Gluer::*)() const>(&BRepFeat_Gluer::OpeType),
             R"#(Determine which operation type to use glueing or sliding.)#" )
        .def("BasisShape",
             (const TopoDS_Shape & (BRepFeat_Gluer::*)() const) static_cast<const TopoDS_Shape & (BRepFeat_Gluer::*)() const>(&BRepFeat_Gluer::BasisShape),
             R"#(Returns the basis shape of the compound shape.)#" )
        .def("GluedShape",
             (const TopoDS_Shape & (BRepFeat_Gluer::*)() const) static_cast<const TopoDS_Shape & (BRepFeat_Gluer::*)() const>(&BRepFeat_Gluer::GluedShape),
             R"#(Returns the resulting compound shape.)#" )
        .def("Build",
             (void (BRepFeat_Gluer::*)() ) static_cast<void (BRepFeat_Gluer::*)() >(&BRepFeat_Gluer::Build),
             R"#(This is called by Shape(). It does nothing but may be redefined.)#" )
        .def("IsDeleted",
             (Standard_Boolean (BRepFeat_Gluer::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepFeat_Gluer::*)( const TopoDS_Shape & ) >(&BRepFeat_Gluer::IsDeleted),
             R"#(returns the status of the Face after the shape creation.)#"  , py::arg("F"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_Gluer::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_Gluer::*)( const TopoDS_Shape & ) >(&BRepFeat_Gluer::Modified),
             R"#(returns the list of generated Faces.)#"  , py::arg("F"))
        .def("Init",
             (void (BRepFeat_Gluer::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepFeat_Gluer::Init),
             R"#(Initializes the new shape Snew and the basis shape Sbase for the local glueing operation.)#"  , py::arg("Snew"),  py::arg("Sbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&BRepFeat_Gluer::Bind),
             R"#(Defines a contact between Fnew on the new shape Snew and Fbase on the basis shape Sbase. Informs other methods that Fnew in the new shape Snew is connected to the face Fbase in the basis shape Sbase. The contact faces of the glued shape must not have parts outside the contact faces of the basis shape. This indicates that glueing is possible.)#"  , py::arg("Fnew"),  py::arg("Fbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&BRepFeat_Gluer::Bind),
             R"#(nforms other methods that the edge Enew in the new shape is the same as the edge Ebase in the basis shape and is therefore attached to the basis shape. This indicates that glueing is possible.)#"  , py::arg("Enew"),  py::arg("Ebase"))
        .def("OpeType",
             (LocOpe_Operation (BRepFeat_Gluer::*)() const) static_cast<LocOpe_Operation (BRepFeat_Gluer::*)() const>(&BRepFeat_Gluer::OpeType),
             R"#(Determine which operation type to use glueing or sliding.)#" )
        .def("BasisShape",
             (const TopoDS_Shape & (BRepFeat_Gluer::*)() const) static_cast<const TopoDS_Shape & (BRepFeat_Gluer::*)() const>(&BRepFeat_Gluer::BasisShape),
             R"#(Returns the basis shape of the compound shape.)#" )
        .def("GluedShape",
             (const TopoDS_Shape & (BRepFeat_Gluer::*)() const) static_cast<const TopoDS_Shape & (BRepFeat_Gluer::*)() const>(&BRepFeat_Gluer::GluedShape),
             R"#(Returns the resulting compound shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_RibSlot , shared_ptr<BRepFeat_RibSlot> , BRepBuilderAPI_MakeShape>>(m.attr("BRepFeat_RibSlot"))
    // constructors
    // custom constructors
    // methods
        .def("IsDeleted",
             (Standard_Boolean (BRepFeat_RibSlot::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepFeat_RibSlot::*)( const TopoDS_Shape & ) >(&BRepFeat_RibSlot::IsDeleted),
             R"#(Returns true if F a TopoDS_Shape of type edge or face has been deleted.)#"  , py::arg("F"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape & ) >(&BRepFeat_RibSlot::Modified),
             R"#(Returns the list of generated Faces F. This list may be empty.)#"  , py::arg("F"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape & ) >(&BRepFeat_RibSlot::Generated),
             R"#(Returns a list TopTools_ListOfShape of the faces S created in the shape.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_SplitShape , shared_ptr<BRepFeat_SplitShape> , BRepBuilderAPI_MakeShape>>(m.attr("BRepFeat_SplitShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Add",
             (Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> & ) >(&BRepFeat_SplitShape::Add),
             R"#(Add splitting edges or wires for whole initial shape withot additional specification edge->face, edge->edge This method puts edge on the corresponding faces from initial shape)#"  , py::arg("theEdges"))
        .def("Init",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) >(&BRepFeat_SplitShape::Init),
             R"#(Initializes the process on the shape <S>.)#"  , py::arg("S"))
        .def("SetCheckInterior",
             (void (BRepFeat_SplitShape::*)( const Standard_Boolean ) ) static_cast<void (BRepFeat_SplitShape::*)( const Standard_Boolean ) >(&BRepFeat_SplitShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the wire <W> on the face <F>. Raises NoSuchObject if <F> does not belong to the original shape.)#"  , py::arg("W"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the face <F>.)#"  , py::arg("E"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Compound & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Compound & , const TopoDS_Face & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the compound <Comp> on the face <F>. The compound <Comp> must consist of edges lying on the face <F>. If edges are geometrically connected, they must be connected topologically, i.e. they must share common vertices.)#"  , py::arg("Comp"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the existing edge <EOn>.)#"  , py::arg("E"),  py::arg("EOn"))
        .def("Build",
             (void (BRepFeat_SplitShape::*)() ) static_cast<void (BRepFeat_SplitShape::*)() >(&BRepFeat_SplitShape::Build),
             R"#(Builds the cut and the resulting faces and edges as well.)#" )
        .def("IsDeleted",
             (Standard_Boolean (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) >(&BRepFeat_SplitShape::IsDeleted),
             R"#(Returns true if the shape has been deleted.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) >(&BRepFeat_SplitShape::Modified),
             R"#(Returns the list of generated Faces.)#"  , py::arg("F"))
        .def("Add",
             (Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> & ) >(&BRepFeat_SplitShape::Add),
             R"#(Add splitting edges or wires for whole initial shape withot additional specification edge->face, edge->edge This method puts edge on the corresponding faces from initial shape)#"  , py::arg("theEdges"))
        .def("Init",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Shape & ) >(&BRepFeat_SplitShape::Init),
             R"#(Initializes the process on the shape <S>.)#"  , py::arg("S"))
        .def("SetCheckInterior",
             (void (BRepFeat_SplitShape::*)( const Standard_Boolean ) ) static_cast<void (BRepFeat_SplitShape::*)( const Standard_Boolean ) >(&BRepFeat_SplitShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Wire & , const TopoDS_Face & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the wire <W> on the face <F>. Raises NoSuchObject if <F> does not belong to the original shape.)#"  , py::arg("W"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the face <F>.)#"  , py::arg("E"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Compound & , const TopoDS_Face & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Compound & , const TopoDS_Face & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the compound <Comp> on the face <F>. The compound <Comp> must consist of edges lying on the face <F>. If edges are geometrically connected, they must be connected topologically, i.e. they must share common vertices.)#"  , py::arg("Comp"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the existing edge <EOn>.)#"  , py::arg("E"),  py::arg("EOn"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_MakeCylindricalHole , shared_ptr<BRepFeat_MakeCylindricalHole> , BRepFeat_Builder>>(m.attr("BRepFeat_MakeCylindricalHole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 & ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 & ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the axis of the hole(s).)#"  , py::arg("Axis"))
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & , const gp_Ax1 & ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & , const gp_Ax1 & ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the shape and axis on which hole(s) will be performed.)#"  , py::arg("S"),  py::arg("Axis"))
        .def("Status",
             (BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const) static_cast<BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const>(&BRepFeat_MakeCylindricalHole::Status),
             R"#(Returns the status after a hole is performed.)#" )
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 & ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 & ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the axis of the hole(s).)#"  , py::arg("Axis"))
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & , const gp_Ax1 & ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & , const gp_Ax1 & ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the shape and axis on which hole(s) will be performed.)#"  , py::arg("S"),  py::arg("Axis"))
        .def("Status",
             (BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const) static_cast<BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const>(&BRepFeat_MakeCylindricalHole::Status),
             R"#(Returns the status after a hole is performed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_MakeDPrism , shared_ptr<BRepFeat_MakeDPrism> , BRepFeat_Form>>(m.attr("BRepFeat_MakeDPrism"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Face &,const TopoDS_Face &,const Standard_Real,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Angle"),  py::arg("Fuse"),  py::arg("Modify") )
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Curves",
             (void (BRepFeat_MakeDPrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) ) static_cast<void (BRepFeat_MakeDPrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) >(&BRepFeat_MakeDPrism::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakeDPrism::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakeDPrism::*)() >(&BRepFeat_MakeDPrism::BarycCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_MakeLinearForm , shared_ptr<BRepFeat_MakeLinearForm> , BRepFeat_RibSlot>>(m.attr("BRepFeat_MakeLinearForm"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Wire &,const opencascade::handle<Geom_Plane> &,const gp_Vec &,const gp_Vec &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("W"),  py::arg("P"),  py::arg("Direction"),  py::arg("Direction1"),  py::arg("Fuse"),  py::arg("Modify") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_MakePipe , shared_ptr<BRepFeat_MakePipe> , BRepFeat_Form>>(m.attr("BRepFeat_MakePipe"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Face &,const TopoDS_Wire &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Spine"),  py::arg("Fuse"),  py::arg("Modify") )
    // custom constructors
    // methods
        .def("Curves",
             (void (BRepFeat_MakePipe::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) ) static_cast<void (BRepFeat_MakePipe::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) >(&BRepFeat_MakePipe::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakePipe::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakePipe::*)() >(&BRepFeat_MakePipe::BarycCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_MakePrism , shared_ptr<BRepFeat_MakePrism> , BRepFeat_Form>>(m.attr("BRepFeat_MakePrism"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Face &,const gp_Dir &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Direction"),  py::arg("Fuse"),  py::arg("Modify") )
    // custom constructors
    // methods
        .def("Curves",
             (void (BRepFeat_MakePrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) ) static_cast<void (BRepFeat_MakePrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) >(&BRepFeat_MakePrism::Curves),
             R"#(Returns the list of curves S parallel to the axis of the prism.)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakePrism::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakePrism::*)() >(&BRepFeat_MakePrism::BarycCurve),
             R"#(Generates a curve along the center of mass of the primitive.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_MakeRevol , shared_ptr<BRepFeat_MakeRevol> , BRepFeat_Form>>(m.attr("BRepFeat_MakeRevol"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Face &,const gp_Ax1 &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Axis"),  py::arg("Fuse"),  py::arg("Modify") )
    // custom constructors
    // methods
        .def("Curves",
             (void (BRepFeat_MakeRevol::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) ) static_cast<void (BRepFeat_MakeRevol::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > & ) >(&BRepFeat_MakeRevol::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakeRevol::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakeRevol::*)() >(&BRepFeat_MakeRevol::BarycCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFeat_MakeRevolutionForm , shared_ptr<BRepFeat_MakeRevolutionForm> , BRepFeat_RibSlot>>(m.attr("BRepFeat_MakeRevolutionForm"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Wire &,const opencascade::handle<Geom_Plane> &,const gp_Ax1 &,const Standard_Real,const Standard_Real,const Standard_Integer,Standard_Boolean & >()  , py::arg("Sbase"),  py::arg("W"),  py::arg("Plane"),  py::arg("Axis"),  py::arg("Height1"),  py::arg("Height2"),  py::arg("Fuse"),  py::arg("Sliding") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepFeat_Status.hxx
// ./opencascade/BRepFeat_RibSlot.hxx
// ./opencascade/BRepFeat_MakePrism.hxx
// ./opencascade/BRepFeat_SplitShape.hxx
// ./opencascade/BRepFeat_MakeDPrism.hxx
// ./opencascade/BRepFeat_MakeCylindricalHole.hxx
// ./opencascade/BRepFeat_MakeRevolutionForm.hxx
// ./opencascade/BRepFeat_StatusError.hxx
// ./opencascade/BRepFeat.hxx
// ./opencascade/BRepFeat_Gluer.hxx
// ./opencascade/BRepFeat_PerfSelection.hxx
// ./opencascade/BRepFeat_MakeRevol.hxx
// ./opencascade/BRepFeat_Form.hxx
// ./opencascade/BRepFeat_MakePipe.hxx
// ./opencascade/BRepFeat_MakeLinearForm.hxx
// ./opencascade/BRepFeat_Builder.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
