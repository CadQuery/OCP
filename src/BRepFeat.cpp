
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
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
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>

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


    static_cast<py::class_<BRepFeat_RibSlot ,std::unique_ptr<BRepFeat_RibSlot>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepFeat_RibSlot"))
        .def("IsDeleted",
             (Standard_Boolean (BRepFeat_RibSlot::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepFeat_RibSlot::*)( const TopoDS_Shape &  ) >(&BRepFeat_RibSlot::IsDeleted),
             R"#(Returns true if F a TopoDS_Shape of type edge or face has been deleted.)#"  , py::arg("F"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape &  ) >(&BRepFeat_RibSlot::Modified),
             R"#(Returns the list of generated Faces F. This list may be empty.)#"  , py::arg("F"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)( const TopoDS_Shape &  ) >(&BRepFeat_RibSlot::Generated),
             R"#(Returns a list TopTools_ListOfShape of the faces S created in the shape.)#"  , py::arg("S"))
        .def("FirstShape",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const>(&BRepFeat_RibSlot::FirstShape),
             R"#(Returns the list of shapes created at the bottom of the created form. It may be an empty list.)#" )
        .def("LastShape",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const>(&BRepFeat_RibSlot::LastShape),
             R"#(Returns the list of shapes created at the top of the created form. It may be an empty list.)#" )
        .def("FacesForDraft",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const>(&BRepFeat_RibSlot::FacesForDraft),
             R"#(Returns a list of the limiting and glueing faces generated by the feature. These faces did not originally exist in the basis shape. The list provides the information necessary for subsequent addition of a draft to a face. It may be an empty list. If a face has tangent edges, no draft is possible, and the tangent edges must subsequently be removed if you want to add a draft to the face.)#" )
        .def("NewEdges",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const>(&BRepFeat_RibSlot::NewEdges),
             R"#(Returns a list of the limiting and glueing edges generated by the feature. These edges did not originally exist in the basis shape. The list provides the information necessary for subsequent addition of fillets. It may be an empty list.)#" )
        .def("TgtEdges",
             (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const>(&BRepFeat_RibSlot::TgtEdges),
             R"#(Returns a list of the tangent edges among the limiting and glueing edges generated by the feature. These edges did not originally exist in the basis shape and are tangent to the face against which the feature is built. The list provides the information necessary for subsequent addition of fillets. It may be an empty list. If an edge is tangent, no fillet is possible, and the edge must subsequently be removed if you want to add a fillet.)#" )
        .def("CurrentStatusError",
             (BRepFeat_StatusError (BRepFeat_RibSlot::*)() const) static_cast<BRepFeat_StatusError (BRepFeat_RibSlot::*)() const>(&BRepFeat_RibSlot::CurrentStatusError),
             R"#(None)#" )
        .def_static("IntPar_s",
                    (Standard_Real (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt &  ) >(&BRepFeat_RibSlot::IntPar),
                    R"#(None)#"  , py::arg("C"),  py::arg("P"))
        .def_static("ChoiceOfFaces_s",
                    (TopoDS_Face (*)( NCollection_List<TopoDS_Shape> & ,  const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom_Plane> &  ) ) static_cast<TopoDS_Face (*)( NCollection_List<TopoDS_Shape> & ,  const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom_Plane> &  ) >(&BRepFeat_RibSlot::ChoiceOfFaces),
                    R"#(None)#"  , py::arg("faces"),  py::arg("cc"),  py::arg("par"),  py::arg("bnd"),  py::arg("Pln"))
;


    static_cast<py::class_<BRepFeat_MakeRevolutionForm ,std::unique_ptr<BRepFeat_MakeRevolutionForm>  , BRepFeat_RibSlot >>(m.attr("BRepFeat_MakeRevolutionForm"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Wire &,const opencascade::handle<Geom_Plane> &,const gp_Ax1 &,const Standard_Real,const Standard_Real,const Standard_Integer,Standard_Boolean & >()  , py::arg("Sbase"),  py::arg("W"),  py::arg("Plane"),  py::arg("Axis"),  py::arg("Height1"),  py::arg("Height2"),  py::arg("Fuse"),  py::arg("Sliding") )
        .def("Init",
             (void (BRepFeat_MakeRevolutionForm::*)( const TopoDS_Shape & ,  const TopoDS_Wire & ,  const opencascade::handle<Geom_Plane> & ,  const gp_Ax1 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  Standard_Boolean &  ) ) static_cast<void (BRepFeat_MakeRevolutionForm::*)( const TopoDS_Shape & ,  const TopoDS_Wire & ,  const opencascade::handle<Geom_Plane> & ,  const gp_Ax1 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  Standard_Boolean &  ) >(&BRepFeat_MakeRevolutionForm::Init),
             R"#(Initializes this construction algorithm A contour W, a shape Sbase and a plane P are initialized to serve as the basic elements in the construction of the rib or groove. The axis Axis of the revolved surface in the basis shape defines the feature's axis of revolution. Height1 and Height2 may be used as limits to the construction of the feature. Fuse offers a choice between: - removing matter with a Boolean cut using the setting 0 in case of the groove - adding matter with Boolean fusion using the setting 1 in case of the rib.)#"  , py::arg("Sbase"),  py::arg("W"),  py::arg("Plane"),  py::arg("Axis"),  py::arg("Height1"),  py::arg("Height2"),  py::arg("Fuse"),  py::arg("Sliding"))
        .def("Add",
             (void (BRepFeat_MakeRevolutionForm::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_MakeRevolutionForm::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_MakeRevolutionForm::Add),
             R"#(Indicates that the edge <E> will slide on the face <OnFace>. Raises ConstructionError if the face does not belong to the basis shape, or the edge to the prismed shape.)#"  , py::arg("E"),  py::arg("OnFace"))
        .def("Perform",
             (void (BRepFeat_MakeRevolutionForm::*)() ) static_cast<void (BRepFeat_MakeRevolutionForm::*)() >(&BRepFeat_MakeRevolutionForm::Perform),
             R"#(Performs a prism from the wire to the plane along the basis shape S. Reconstructs the feature topologically.)#" )
        .def("Propagate",
             (Standard_Boolean (BRepFeat_MakeRevolutionForm::*)( NCollection_List<TopoDS_Shape> & ,  const TopoDS_Face & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (BRepFeat_MakeRevolutionForm::*)( NCollection_List<TopoDS_Shape> & ,  const TopoDS_Face & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Boolean &  ) >(&BRepFeat_MakeRevolutionForm::Propagate),
             R"#(None)#"  , py::arg("L"),  py::arg("F"),  py::arg("FPoint"),  py::arg("LPoint"),  py::arg("falseside"))
;


    static_cast<py::class_<BRepFeat_Builder ,std::unique_ptr<BRepFeat_Builder>  , BOPAlgo_BOP >>(m.attr("BRepFeat_Builder"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BRepFeat_Builder::*)() ) static_cast<void (BRepFeat_Builder::*)() >(&BRepFeat_Builder::Clear),
             R"#(Clears internal fields and arguments.)#" )
        .def("Init",
             (void (BRepFeat_Builder::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_Builder::*)( const TopoDS_Shape &  ) >(&BRepFeat_Builder::Init),
             R"#(Initialyzes the object of local boolean operation.)#"  , py::arg("theShape"))
        .def("Init",
             (void (BRepFeat_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepFeat_Builder::Init),
             R"#(Initialyzes the arguments of local boolean operation.)#"  , py::arg("theShape"),  py::arg("theTool"))
        .def("SetOperation",
             (void (BRepFeat_Builder::*)( const Standard_Integer  ) ) static_cast<void (BRepFeat_Builder::*)( const Standard_Integer  ) >(&BRepFeat_Builder::SetOperation),
             R"#(Sets the operation of local boolean operation. If theFuse = 0 than the operation is CUT, otherwise FUSE.)#"  , py::arg("theFuse"))
        .def("SetOperation",
             (void (BRepFeat_Builder::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_Builder::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&BRepFeat_Builder::SetOperation),
             R"#(Sets the operation of local boolean operation. If theFlag = TRUE it means that no selection of parts of the tool is needed, t.e. no second part. In that case if theFuse = 0 than operation is COMMON, otherwise CUT21. If theFlag = FALSE SetOperation(theFuse) function is called.)#"  , py::arg("theFuse"),  py::arg("theFlag"))
        .def("PartsOfTool",
             (void (BRepFeat_Builder::*)( NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepFeat_Builder::*)( NCollection_List<TopoDS_Shape> &  ) >(&BRepFeat_Builder::PartsOfTool),
             R"#(Collects parts of the tool.)#"  , py::arg("theLT"))
        .def("KeepParts",
             (void (BRepFeat_Builder::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepFeat_Builder::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BRepFeat_Builder::KeepParts),
             R"#(Initialyzes parts of the tool for second step of algorithm. Collects shapes and all sub-shapes into myShapes map.)#"  , py::arg("theIm"))
        .def("KeepPart",
             (void (BRepFeat_Builder::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_Builder::*)( const TopoDS_Shape &  ) >(&BRepFeat_Builder::KeepPart),
             R"#(Adds shape theS and all its sub-shapes into myShapes map.)#"  , py::arg("theS"))
        .def("PerformResult",
             (void (BRepFeat_Builder::*)() ) static_cast<void (BRepFeat_Builder::*)() >(&BRepFeat_Builder::PerformResult),
             R"#(Main function to build the result of the local operation required.)#" )
        .def("RebuildFaces",
             (void (BRepFeat_Builder::*)() ) static_cast<void (BRepFeat_Builder::*)() >(&BRepFeat_Builder::RebuildFaces),
             R"#(Rebuilds faces in accordance with the kept parts of the tool.)#" )
        .def("RebuildEdge",
             (void (BRepFeat_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Face & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepFeat_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Face & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_List<TopoDS_Shape> &  ) >(&BRepFeat_Builder::RebuildEdge),
             R"#(Rebuilds edges in accordance with the kept parts of the tool.)#"  , py::arg("theE"),  py::arg("theF"),  py::arg("theME"),  py::arg("aLEIm"))
        .def("CheckSolidImages",
             (void (BRepFeat_Builder::*)() ) static_cast<void (BRepFeat_Builder::*)() >(&BRepFeat_Builder::CheckSolidImages),
             R"#(Collects the images of the object, that contains in the images of the tool.)#" )
        .def("FillRemoved",
             (void (BRepFeat_Builder::*)() ) static_cast<void (BRepFeat_Builder::*)() >(&BRepFeat_Builder::FillRemoved),
             R"#(Collects the removed parts of the tool into myRemoved map.)#" )
        .def("FillRemoved",
             (void (BRepFeat_Builder::*)( const TopoDS_Shape & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (BRepFeat_Builder::*)( const TopoDS_Shape & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&BRepFeat_Builder::FillRemoved),
             R"#(Adds the shape S and its sub-shapes into myRemoved map.)#"  , py::arg("theS"),  py::arg("theM"))
;


    static_cast<py::class_<BRepFeat_Gluer ,std::unique_ptr<BRepFeat_Gluer>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepFeat_Gluer"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("Snew"),  py::arg("Sbase") )
        .def("Init",
             (void (BRepFeat_Gluer::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepFeat_Gluer::Init),
             R"#(Initializes the new shape Snew and the basis shape Sbase for the local glueing operation.)#"  , py::arg("Snew"),  py::arg("Sbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepFeat_Gluer::Bind),
             R"#(Defines a contact between Fnew on the new shape Snew and Fbase on the basis shape Sbase. Informs other methods that Fnew in the new shape Snew is connected to the face Fbase in the basis shape Sbase. The contact faces of the glued shape must not have parts outside the contact faces of the basis shape. This indicates that glueing is possible.)#"  , py::arg("Fnew"),  py::arg("Fbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&BRepFeat_Gluer::Bind),
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
             (Standard_Boolean (BRepFeat_Gluer::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepFeat_Gluer::*)( const TopoDS_Shape &  ) >(&BRepFeat_Gluer::IsDeleted),
             R"#(returns the status of the Face after the shape creation.)#"  , py::arg("F"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_Gluer::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_Gluer::*)( const TopoDS_Shape &  ) >(&BRepFeat_Gluer::Modified),
             R"#(returns the list of generated Faces.)#"  , py::arg("F"))
        .def("Init",
             (void (BRepFeat_Gluer::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepFeat_Gluer::Init),
             R"#(Initializes the new shape Snew and the basis shape Sbase for the local glueing operation.)#"  , py::arg("Snew"),  py::arg("Sbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepFeat_Gluer::Bind),
             R"#(Defines a contact between Fnew on the new shape Snew and Fbase on the basis shape Sbase. Informs other methods that Fnew in the new shape Snew is connected to the face Fbase in the basis shape Sbase. The contact faces of the glued shape must not have parts outside the contact faces of the basis shape. This indicates that glueing is possible.)#"  , py::arg("Fnew"),  py::arg("Fbase"))
        .def("Bind",
             (void (BRepFeat_Gluer::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFeat_Gluer::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&BRepFeat_Gluer::Bind),
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
;


    static_cast<py::class_<BRepFeat_Form ,std::unique_ptr<BRepFeat_Form> ,Py_BRepFeat_Form , BRepBuilderAPI_MakeShape >>(m.attr("BRepFeat_Form"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape &  ) >(&BRepFeat_Form::Modified),
             R"#(returns the list of generated Faces.)#"  , py::arg("F"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)( const TopoDS_Shape &  ) >(&BRepFeat_Form::Generated),
             R"#(returns a list of the created faces from the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepFeat_Form::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepFeat_Form::*)( const TopoDS_Shape &  ) >(&BRepFeat_Form::IsDeleted),
             R"#(None)#"  , py::arg("S"))
        .def("FirstShape",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)() const>(&BRepFeat_Form::FirstShape),
             R"#(Returns the list of shapes created at the bottom of the created form. It may be an empty list.)#" )
        .def("LastShape",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)() const>(&BRepFeat_Form::LastShape),
             R"#(Returns the list of shapes created at the top of the created form. It may be an empty list.)#" )
        .def("NewEdges",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)() const>(&BRepFeat_Form::NewEdges),
             R"#(Returns a list of the limiting and glueing edges generated by the feature. These edges did not originally exist in the basis shape. The list provides the information necessary for subsequent addition of fillets. It may be an empty list.)#" )
        .def("TgtEdges",
             (const TopTools_ListOfShape & (BRepFeat_Form::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_Form::*)() const>(&BRepFeat_Form::TgtEdges),
             R"#(Returns a list of the tangent edges among the limiting and glueing edges generated by the feature. These edges did not originally exist in the basis shape and are tangent to the face against which the feature is built. The list provides the information necessary for subsequent addition of fillets. It may be an empty list. If an edge is tangent, no fillet is possible, and the edge must subsequently be removed if you want to add a fillet.)#" )
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
             (void (BRepFeat_Form::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) ) static_cast<void (BRepFeat_Form::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) >(&BRepFeat_Form::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_Form::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_Form::*)() >(&BRepFeat_Form::BarycCurve),
             R"#(None)#" )
        .def("CurrentStatusError",
             (BRepFeat_StatusError (BRepFeat_Form::*)() const) static_cast<BRepFeat_StatusError (BRepFeat_Form::*)() const>(&BRepFeat_Form::CurrentStatusError),
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
;


    static_cast<py::class_<BRepFeat_MakeCylindricalHole ,std::unique_ptr<BRepFeat_MakeCylindricalHole>  , BRepFeat_Builder >>(m.attr("BRepFeat_MakeCylindricalHole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 &  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 &  ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the axis of the hole(s).)#"  , py::arg("Axis"))
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & ,  const gp_Ax1 &  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & ,  const gp_Ax1 &  ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the shape and axis on which hole(s) will be performed.)#"  , py::arg("S"),  py::arg("Axis"))
        .def("Perform",
             (void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real  ) >(&BRepFeat_MakeCylindricalHole::Perform),
             R"#(Performs every holes of radius <Radius>. This command has the same effect as a cut operation with an infinite cylinder defined by the given axis and <Radius>.)#"  , py::arg("Radius"))
        .def("Perform",
             (void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&BRepFeat_MakeCylindricalHole::Perform),
             R"#(Performs evry hole of radius <Radius> located between PFrom and PTo on the given axis. If <WithControl> is set to Standard_False no control are done on the resulting shape after the operation is performed.)#"  , py::arg("Radius"),  py::arg("PFrom"),  py::arg("PTo"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("PerformThruNext",
             (void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Boolean  ) >(&BRepFeat_MakeCylindricalHole::PerformThruNext),
             R"#(Performs the first hole of radius <Radius>, in the direction of the defined axis. First hole signify first encountered after the origin of the axis. If <WithControl> is set to Standard_False no control are done on the resulting shape after the operation is performed.)#"  , py::arg("Radius"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("PerformUntilEnd",
             (void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Boolean  ) >(&BRepFeat_MakeCylindricalHole::PerformUntilEnd),
             R"#(Performs evry holes of radius <Radius> located after the origin of the given axis. If <WithControl> is set to Standard_False no control are done on the resulting shape after the operation is performed.)#"  , py::arg("Radius"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("PerformBlind",
             (void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&BRepFeat_MakeCylindricalHole::PerformBlind),
             R"#(Performs a blind hole of radius <Radius> and length <Length>. The length is measured from the origin of the given axis. If <WithControl> is set to Standard_False no control are done after the operation is performed.)#"  , py::arg("Radius"),  py::arg("Length"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Status",
             (BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const) static_cast<BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const>(&BRepFeat_MakeCylindricalHole::Status),
             R"#(Returns the status after a hole is performed.)#" )
        .def("Build",
             (void (BRepFeat_MakeCylindricalHole::*)() ) static_cast<void (BRepFeat_MakeCylindricalHole::*)() >(&BRepFeat_MakeCylindricalHole::Build),
             R"#(Builds the resulting shape (redefined from MakeShape). Invalidates the given parts of tools if any, and performs the result of the local operation.)#" )
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 &  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const gp_Ax1 &  ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the axis of the hole(s).)#"  , py::arg("Axis"))
        .def("Init",
             (void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & ,  const gp_Ax1 &  ) ) static_cast<void (BRepFeat_MakeCylindricalHole::*)( const TopoDS_Shape & ,  const gp_Ax1 &  ) >(&BRepFeat_MakeCylindricalHole::Init),
             R"#(Sets the shape and axis on which hole(s) will be performed.)#"  , py::arg("S"),  py::arg("Axis"))
        .def("Status",
             (BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const) static_cast<BRepFeat_Status (BRepFeat_MakeCylindricalHole::*)() const>(&BRepFeat_MakeCylindricalHole::Status),
             R"#(Returns the status after a hole is performed.)#" )
;


    static_cast<py::class_<BRepFeat_SplitShape ,std::unique_ptr<BRepFeat_SplitShape>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepFeat_SplitShape"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def("Add",
             (Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> &  ) ) static_cast<Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Add splitting edges or wires for whole initial shape withot additional specification edge->face, edge->edge This method puts edge on the corresponding faces from initial shape)#"  , py::arg("theEdges"))
        .def("Init",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) >(&BRepFeat_SplitShape::Init),
             R"#(Initializes the process on the shape <S>.)#"  , py::arg("S"))
        .def("SetCheckInterior",
             (void (BRepFeat_SplitShape::*)( const Standard_Boolean  ) ) static_cast<void (BRepFeat_SplitShape::*)( const Standard_Boolean  ) >(&BRepFeat_SplitShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Wire & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Wire & ,  const TopoDS_Face &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the wire <W> on the face <F>. Raises NoSuchObject if <F> does not belong to the original shape.)#"  , py::arg("W"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the face <F>.)#"  , py::arg("E"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Compound & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Compound & ,  const TopoDS_Face &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the compound <Comp> on the face <F>. The compound <Comp> must consist of edges lying on the face <F>. If edges are geometrically connected, they must be connected topologically, i.e. they must share common vertices.)#"  , py::arg("Comp"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the existing edge <EOn>.)#"  , py::arg("E"),  py::arg("EOn"))
        .def("DirectLeft",
             (const TopTools_ListOfShape & (BRepFeat_SplitShape::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_SplitShape::*)() const>(&BRepFeat_SplitShape::DirectLeft),
             R"#(Returns the faces which are the left of the projected wires.)#" )
        .def("Left",
             (const TopTools_ListOfShape & (BRepFeat_SplitShape::*)() const) static_cast<const TopTools_ListOfShape & (BRepFeat_SplitShape::*)() const>(&BRepFeat_SplitShape::Left),
             R"#(Returns the faces of the "left" part on the shape. (It is build from DirectLeft, with the faces connected to this set, and so on...). Raises NotDone if IsDone returns <Standard_False>.)#" )
        .def("Build",
             (void (BRepFeat_SplitShape::*)() ) static_cast<void (BRepFeat_SplitShape::*)() >(&BRepFeat_SplitShape::Build),
             R"#(Builds the cut and the resulting faces and edges as well.)#" )
        .def("IsDeleted",
             (Standard_Boolean (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) >(&BRepFeat_SplitShape::IsDeleted),
             R"#(Returns true if the shape has been deleted.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) >(&BRepFeat_SplitShape::Modified),
             R"#(Returns the list of generated Faces.)#"  , py::arg("F"))
        .def("Add",
             (Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> &  ) ) static_cast<Standard_Boolean (BRepFeat_SplitShape::*)(  const NCollection_Sequence<TopoDS_Shape> &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Add splitting edges or wires for whole initial shape withot additional specification edge->face, edge->edge This method puts edge on the corresponding faces from initial shape)#"  , py::arg("theEdges"))
        .def("Init",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Shape &  ) >(&BRepFeat_SplitShape::Init),
             R"#(Initializes the process on the shape <S>.)#"  , py::arg("S"))
        .def("SetCheckInterior",
             (void (BRepFeat_SplitShape::*)( const Standard_Boolean  ) ) static_cast<void (BRepFeat_SplitShape::*)( const Standard_Boolean  ) >(&BRepFeat_SplitShape::SetCheckInterior),
             R"#(Set the flag of check internal intersections default value is True (to check))#"  , py::arg("ToCheckInterior"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Wire & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Wire & ,  const TopoDS_Face &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the wire <W> on the face <F>. Raises NoSuchObject if <F> does not belong to the original shape.)#"  , py::arg("W"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the face <F>.)#"  , py::arg("E"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Compound & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Compound & ,  const TopoDS_Face &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the compound <Comp> on the face <F>. The compound <Comp> must consist of edges lying on the face <F>. If edges are geometrically connected, they must be connected topologically, i.e. they must share common vertices.)#"  , py::arg("Comp"),  py::arg("F"))
        .def("Add",
             (void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<void (BRepFeat_SplitShape::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&BRepFeat_SplitShape::Add),
             R"#(Adds the edge <E> on the existing edge <EOn>.)#"  , py::arg("E"),  py::arg("EOn"))
;


    static_cast<py::class_<BRepFeat_MakeDPrism ,std::unique_ptr<BRepFeat_MakeDPrism>  , BRepFeat_Form >>(m.attr("BRepFeat_MakeDPrism"))
        .def(py::init< const TopoDS_Shape &,const TopoDS_Face &,const TopoDS_Face &,const Standard_Real,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Angle"),  py::arg("Fuse"),  py::arg("Modify") )
        .def(py::init<  >()  )
        .def("Init",
             (void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean  ) >(&BRepFeat_MakeDPrism::Init),
             R"#(Initializes this algorithm for building draft prisms along surfaces. A face Pbase is selected in the basis shape Sbase to serve as the basis from the draft prism. The draft will be defined by the angle Angle and Fuse offers a choice between: - removing matter with a Boolean cut using the setting 0 - adding matter with Boolean fusion using the setting 1. The sketch face Skface serves to determine the type of operation. If it is inside the basis shape, a local operation such as glueing can be performed.)#"  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Angle"),  py::arg("Fuse"),  py::arg("Modify"))
        .def("Add",
             (void (BRepFeat_MakeDPrism::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_MakeDPrism::Add),
             R"#(Indicates that the edge <E> will slide on the face <OnFace>. Raises ConstructionError if the face does not belong to the basis shape, or the edge to the prismed shape.)#"  , py::arg("E"),  py::arg("OnFace"))
        .def("Perform",
             (void (BRepFeat_MakeDPrism::*)( const Standard_Real  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const Standard_Real  ) >(&BRepFeat_MakeDPrism::Perform),
             R"#(None)#"  , py::arg("Height"))
        .def("Perform",
             (void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape &  ) >(&BRepFeat_MakeDPrism::Perform),
             R"#(None)#"  , py::arg("Until"))
        .def("Perform",
             (void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepFeat_MakeDPrism::Perform),
             R"#(Assigns one of the following semantics - to a height Height - to a face Until - from a face From to a height Until. Reconstructs the feature topologically according to the semantic option chosen.)#"  , py::arg("From"),  py::arg("Until"))
        .def("PerformUntilEnd",
             (void (BRepFeat_MakeDPrism::*)() ) static_cast<void (BRepFeat_MakeDPrism::*)() >(&BRepFeat_MakeDPrism::PerformUntilEnd),
             R"#(Realizes a semi-infinite prism, limited by the position of the prism base.)#" )
        .def("PerformFromEnd",
             (void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape &  ) >(&BRepFeat_MakeDPrism::PerformFromEnd),
             R"#(Realizes a semi-infinite prism, limited by the face Funtil.)#"  , py::arg("FUntil"))
        .def("PerformThruAll",
             (void (BRepFeat_MakeDPrism::*)() ) static_cast<void (BRepFeat_MakeDPrism::*)() >(&BRepFeat_MakeDPrism::PerformThruAll),
             R"#(Builds an infinite prism. The infinite descendants will not be kept in the result.)#" )
        .def("PerformUntilHeight",
             (void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&BRepFeat_MakeDPrism::PerformUntilHeight),
             R"#(Assigns both a limiting shape, Until from TopoDS_Shape, and a height, Height at which to stop generation of the prism feature.)#"  , py::arg("Until"),  py::arg("Height"))
        .def("Curves",
             (void (BRepFeat_MakeDPrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) >(&BRepFeat_MakeDPrism::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakeDPrism::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakeDPrism::*)() >(&BRepFeat_MakeDPrism::BarycCurve),
             R"#(None)#" )
        .def("BossEdges",
             (void (BRepFeat_MakeDPrism::*)( const Standard_Integer  ) ) static_cast<void (BRepFeat_MakeDPrism::*)( const Standard_Integer  ) >(&BRepFeat_MakeDPrism::BossEdges),
             R"#(Determination of TopEdges and LatEdges. sig = 1 -> TopEdges = FirstShape of the DPrism sig = 2 -> TOpEdges = LastShape of the DPrism)#"  , py::arg("sig"))
        .def("TopEdges",
             (const TopTools_ListOfShape & (BRepFeat_MakeDPrism::*)() ) static_cast<const TopTools_ListOfShape & (BRepFeat_MakeDPrism::*)() >(&BRepFeat_MakeDPrism::TopEdges),
             R"#(Returns the list of TopoDS Edges of the top of the boss.)#" )
        .def("LatEdges",
             (const TopTools_ListOfShape & (BRepFeat_MakeDPrism::*)() ) static_cast<const TopTools_ListOfShape & (BRepFeat_MakeDPrism::*)() >(&BRepFeat_MakeDPrism::LatEdges),
             R"#(Returns the list of TopoDS Edges of the bottom of the boss.)#" )
;


    static_cast<py::class_<BRepFeat_MakeRevol ,std::unique_ptr<BRepFeat_MakeRevol>  , BRepFeat_Form >>(m.attr("BRepFeat_MakeRevol"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Face &,const gp_Ax1 &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Axis"),  py::arg("Fuse"),  py::arg("Modify") )
        .def("Init",
             (void (BRepFeat_MakeRevol::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Face & ,  const gp_Ax1 & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakeRevol::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Face & ,  const gp_Ax1 & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&BRepFeat_MakeRevol::Init),
             R"#(None)#"  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Axis"),  py::arg("Fuse"),  py::arg("Modify"))
        .def("Add",
             (void (BRepFeat_MakeRevol::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_MakeRevol::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_MakeRevol::Add),
             R"#(Indicates that the edge <E> will slide on the face <OnFace>. Raises ConstructionError if the face does not belong to the basis shape, or the edge to the prismed shape.)#"  , py::arg("E"),  py::arg("OnFace"))
        .def("Perform",
             (void (BRepFeat_MakeRevol::*)( const Standard_Real  ) ) static_cast<void (BRepFeat_MakeRevol::*)( const Standard_Real  ) >(&BRepFeat_MakeRevol::Perform),
             R"#(None)#"  , py::arg("Angle"))
        .def("Perform",
             (void (BRepFeat_MakeRevol::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakeRevol::*)( const TopoDS_Shape &  ) >(&BRepFeat_MakeRevol::Perform),
             R"#(None)#"  , py::arg("Until"))
        .def("Perform",
             (void (BRepFeat_MakeRevol::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakeRevol::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepFeat_MakeRevol::Perform),
             R"#(Reconstructs the feature topologically.)#"  , py::arg("From"),  py::arg("Until"))
        .def("PerformThruAll",
             (void (BRepFeat_MakeRevol::*)() ) static_cast<void (BRepFeat_MakeRevol::*)() >(&BRepFeat_MakeRevol::PerformThruAll),
             R"#(Builds an infinite shell. The infinite descendants will not be kept in the result.)#" )
        .def("PerformUntilAngle",
             (void (BRepFeat_MakeRevol::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (BRepFeat_MakeRevol::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&BRepFeat_MakeRevol::PerformUntilAngle),
             R"#(Assigns both a limiting shape, Until from TopoDS_Shape, and an angle, Angle at which to stop generation of the revolved shell feature.)#"  , py::arg("Until"),  py::arg("Angle"))
        .def("Curves",
             (void (BRepFeat_MakeRevol::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) ) static_cast<void (BRepFeat_MakeRevol::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) >(&BRepFeat_MakeRevol::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakeRevol::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakeRevol::*)() >(&BRepFeat_MakeRevol::BarycCurve),
             R"#(None)#" )
;


    static_cast<py::class_<BRepFeat_MakeLinearForm ,std::unique_ptr<BRepFeat_MakeLinearForm>  , BRepFeat_RibSlot >>(m.attr("BRepFeat_MakeLinearForm"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Wire &,const opencascade::handle<Geom_Plane> &,const gp_Vec &,const gp_Vec &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("W"),  py::arg("P"),  py::arg("Direction"),  py::arg("Direction1"),  py::arg("Fuse"),  py::arg("Modify") )
        .def("Init",
             (void (BRepFeat_MakeLinearForm::*)( const TopoDS_Shape & ,  const TopoDS_Wire & ,  const opencascade::handle<Geom_Plane> & ,  const gp_Vec & ,  const gp_Vec & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakeLinearForm::*)( const TopoDS_Shape & ,  const TopoDS_Wire & ,  const opencascade::handle<Geom_Plane> & ,  const gp_Vec & ,  const gp_Vec & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&BRepFeat_MakeLinearForm::Init),
             R"#(Initializes this construction algorithm. A contour W, a shape Sbase and a plane P are initialized to serve as the basic elements in the construction of the rib or groove. The vectors for defining the direction(s) in which thickness will be built up are given by Direction and Direction1. Fuse offers a choice between: - removing matter with a Boolean cut using the setting 0 in case of the groove - adding matter with Boolean fusion using the setting 1 in case of the rib.)#"  , py::arg("Sbase"),  py::arg("W"),  py::arg("P"),  py::arg("Direction"),  py::arg("Direction1"),  py::arg("Fuse"),  py::arg("Modify"))
        .def("Add",
             (void (BRepFeat_MakeLinearForm::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_MakeLinearForm::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_MakeLinearForm::Add),
             R"#(Indicates that the edge <E> will slide on the face <OnFace>. Raises ConstructionError if the face does not belong to the basis shape, or the edge to the prismed shape.)#"  , py::arg("E"),  py::arg("OnFace"))
        .def("Perform",
             (void (BRepFeat_MakeLinearForm::*)() ) static_cast<void (BRepFeat_MakeLinearForm::*)() >(&BRepFeat_MakeLinearForm::Perform),
             R"#(Performs a prism from the wire to the plane along the basis shape Sbase. Reconstructs the feature topologically.)#" )
        .def("Propagate",
             (Standard_Boolean (BRepFeat_MakeLinearForm::*)( NCollection_List<TopoDS_Shape> & ,  const TopoDS_Face & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (BRepFeat_MakeLinearForm::*)( NCollection_List<TopoDS_Shape> & ,  const TopoDS_Face & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Boolean &  ) >(&BRepFeat_MakeLinearForm::Propagate),
             R"#(None)#"  , py::arg("L"),  py::arg("F"),  py::arg("FPoint"),  py::arg("LPoint"),  py::arg("falseside"))
;


    static_cast<py::class_<BRepFeat_MakePipe ,std::unique_ptr<BRepFeat_MakePipe>  , BRepFeat_Form >>(m.attr("BRepFeat_MakePipe"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Face &,const TopoDS_Wire &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Spine"),  py::arg("Fuse"),  py::arg("Modify") )
        .def("Init",
             (void (BRepFeat_MakePipe::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Face & ,  const TopoDS_Wire & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakePipe::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Face & ,  const TopoDS_Wire & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&BRepFeat_MakePipe::Init),
             R"#(Initializes this algorithm for adding pipes to shapes. A face Pbase is selected in the shape Sbase to serve as the basis for the pipe. It will be defined by the wire Spine. Fuse offers a choice between: - removing matter with a Boolean cut using the setting 0 - adding matter with Boolean fusion using the setting 1. The sketch face Skface serves to determine the type of operation. If it is inside the basis shape, a local operation such as glueing can be performed.)#"  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Spine"),  py::arg("Fuse"),  py::arg("Modify"))
        .def("Add",
             (void (BRepFeat_MakePipe::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_MakePipe::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_MakePipe::Add),
             R"#(Indicates that the edge <E> will slide on the face <OnFace>. Raises ConstructionError if the face does not belong to the basis shape, or the edge to the prismed shape.)#"  , py::arg("E"),  py::arg("OnFace"))
        .def("Perform",
             (void (BRepFeat_MakePipe::*)() ) static_cast<void (BRepFeat_MakePipe::*)() >(&BRepFeat_MakePipe::Perform),
             R"#(None)#" )
        .def("Perform",
             (void (BRepFeat_MakePipe::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakePipe::*)( const TopoDS_Shape &  ) >(&BRepFeat_MakePipe::Perform),
             R"#(None)#"  , py::arg("Until"))
        .def("Perform",
             (void (BRepFeat_MakePipe::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakePipe::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepFeat_MakePipe::Perform),
             R"#(Assigns one of the following semantics - to a face Until - from a face From to a height Until. Reconstructs the feature topologically according to the semantic option chosen.)#"  , py::arg("From"),  py::arg("Until"))
        .def("Curves",
             (void (BRepFeat_MakePipe::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) ) static_cast<void (BRepFeat_MakePipe::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) >(&BRepFeat_MakePipe::Curves),
             R"#(None)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakePipe::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakePipe::*)() >(&BRepFeat_MakePipe::BarycCurve),
             R"#(None)#" )
;

    register_default_constructor<BRepFeat ,std::unique_ptr<BRepFeat>>(m,"BRepFeat");

    static_cast<py::class_<BRepFeat ,std::unique_ptr<BRepFeat>  >>(m.attr("BRepFeat"))
        .def_static("SampleEdges_s",
                    (void (*)( const TopoDS_Shape & ,  NCollection_Sequence<gp_Pnt> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  NCollection_Sequence<gp_Pnt> &  ) >(&BRepFeat::SampleEdges),
                    R"#(None)#"  , py::arg("S"),  py::arg("Pt"))
        .def_static("Barycenter_s",
                    (void (*)( const TopoDS_Shape & ,  gp_Pnt &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  gp_Pnt &  ) >(&BRepFeat::Barycenter),
                    R"#(None)#"  , py::arg("S"),  py::arg("Pt"))
        .def_static("ParametricBarycenter_s",
                    (Standard_Real (*)( const TopoDS_Shape & ,  const opencascade::handle<Geom_Curve> &  ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & ,  const opencascade::handle<Geom_Curve> &  ) >(&BRepFeat::ParametricBarycenter),
                    R"#(None)#"  , py::arg("S"),  py::arg("C"))
        .def_static("ParametricMinMax_s",
                    (void (*)( const TopoDS_Shape & ,  const opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Boolean & ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Boolean & ,  const Standard_Boolean  ) >(&BRepFeat::ParametricMinMax),
                    R"#(Ori = True taking account the orientation)#"  , py::arg("S"),  py::arg("C"),  py::arg("prmin"),  py::arg("prmax"),  py::arg("prbmin"),  py::arg("prbmax"),  py::arg("flag"),  py::arg("Ori")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("IsInside_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&BRepFeat::IsInside),
                    R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def_static("FaceUntil_s",
                    (void (*)( const TopoDS_Shape & ,  TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  TopoDS_Face &  ) >(&BRepFeat::FaceUntil),
                    R"#(None)#"  , py::arg("S"),  py::arg("F"))
        .def_static("Tool_s",
                    (TopoDS_Solid (*)( const TopoDS_Shape & ,  const TopoDS_Face & ,  const TopAbs_Orientation  ) ) static_cast<TopoDS_Solid (*)( const TopoDS_Shape & ,  const TopoDS_Face & ,  const TopAbs_Orientation  ) >(&BRepFeat::Tool),
                    R"#(None)#"  , py::arg("SRef"),  py::arg("Fac"),  py::arg("Orf"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const BRepFeat_StatusError ,  std::ostream &  ) ) static_cast<Standard_OStream & (*)( const BRepFeat_StatusError ,  std::ostream &  ) >(&BRepFeat::Print),
                    R"#(Prints the Error description of the State <St> as a String on the Stream <S> and returns <S>.)#"  , py::arg("SE"),  py::arg("S"))
;


    static_cast<py::class_<BRepFeat_MakePrism ,std::unique_ptr<BRepFeat_MakePrism>  , BRepFeat_Form >>(m.attr("BRepFeat_MakePrism"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Face &,const gp_Dir &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Direction"),  py::arg("Fuse"),  py::arg("Modify") )
        .def("Init",
             (void (BRepFeat_MakePrism::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Face & ,  const gp_Dir & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (BRepFeat_MakePrism::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Face & ,  const gp_Dir & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&BRepFeat_MakePrism::Init),
             R"#(Initializes this algorithm for building prisms along surfaces. A face Pbase is selected in the shape Sbase to serve as the basis for the prism. The orientation of the prism will be defined by the vector Direction. Fuse offers a choice between: - removing matter with a Boolean cut using the setting 0 - adding matter with Boolean fusion using the setting 1. The sketch face Skface serves to determine the type of operation. If it is inside the basis shape, a local operation such as glueing can be performed.)#"  , py::arg("Sbase"),  py::arg("Pbase"),  py::arg("Skface"),  py::arg("Direction"),  py::arg("Fuse"),  py::arg("Modify"))
        .def("Add",
             (void (BRepFeat_MakePrism::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepFeat_MakePrism::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepFeat_MakePrism::Add),
             R"#(Indicates that the edge <E> will slide on the face <OnFace>. Raises ConstructionError if the face does not belong to the basis shape, or the edge to the prismed shape.)#"  , py::arg("E"),  py::arg("OnFace"))
        .def("Perform",
             (void (BRepFeat_MakePrism::*)( const Standard_Real  ) ) static_cast<void (BRepFeat_MakePrism::*)( const Standard_Real  ) >(&BRepFeat_MakePrism::Perform),
             R"#(None)#"  , py::arg("Length"))
        .def("Perform",
             (void (BRepFeat_MakePrism::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakePrism::*)( const TopoDS_Shape &  ) >(&BRepFeat_MakePrism::Perform),
             R"#(None)#"  , py::arg("Until"))
        .def("Perform",
             (void (BRepFeat_MakePrism::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakePrism::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepFeat_MakePrism::Perform),
             R"#(Assigns one of the following semantics - to a height Length - to a face Until - from a face From to a height Until. Reconstructs the feature topologically according to the semantic option chosen.)#"  , py::arg("From"),  py::arg("Until"))
        .def("PerformUntilEnd",
             (void (BRepFeat_MakePrism::*)() ) static_cast<void (BRepFeat_MakePrism::*)() >(&BRepFeat_MakePrism::PerformUntilEnd),
             R"#(Realizes a semi-infinite prism, limited by the position of the prism base. All other faces extend infinitely.)#" )
        .def("PerformFromEnd",
             (void (BRepFeat_MakePrism::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepFeat_MakePrism::*)( const TopoDS_Shape &  ) >(&BRepFeat_MakePrism::PerformFromEnd),
             R"#(Realizes a semi-infinite prism, limited by the face Funtil.)#"  , py::arg("FUntil"))
        .def("PerformThruAll",
             (void (BRepFeat_MakePrism::*)() ) static_cast<void (BRepFeat_MakePrism::*)() >(&BRepFeat_MakePrism::PerformThruAll),
             R"#(Builds an infinite prism. The infinite descendants will not be kept in the result.)#" )
        .def("PerformUntilHeight",
             (void (BRepFeat_MakePrism::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (BRepFeat_MakePrism::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&BRepFeat_MakePrism::PerformUntilHeight),
             R"#(Assigns both a limiting shape, Until from TopoDS_Shape, and a height, Length at which to stop generation of the prism feature.)#"  , py::arg("Until"),  py::arg("Length"))
        .def("Curves",
             (void (BRepFeat_MakePrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) ) static_cast<void (BRepFeat_MakePrism::*)( NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) >(&BRepFeat_MakePrism::Curves),
             R"#(Returns the list of curves S parallel to the axis of the prism.)#"  , py::arg("S"))
        .def("BarycCurve",
             (opencascade::handle<Geom_Curve> (BRepFeat_MakePrism::*)() ) static_cast<opencascade::handle<Geom_Curve> (BRepFeat_MakePrism::*)() >(&BRepFeat_MakePrism::BarycCurve),
             R"#(Generates a curve along the center of mass of the primitive.)#" )
;

// functions
// ./opencascade/BRepFeat_MakeDPrism.hxx
// ./opencascade/BRepFeat_MakePipe.hxx
// ./opencascade/BRepFeat_MakeRevol.hxx
// ./opencascade/BRepFeat_MakePrism.hxx
// ./opencascade/BRepFeat_Status.hxx
// ./opencascade/BRepFeat_RibSlot.hxx
// ./opencascade/BRepFeat_Form.hxx
// ./opencascade/BRepFeat_MakeRevolutionForm.hxx
// ./opencascade/BRepFeat_PerfSelection.hxx
// ./opencascade/BRepFeat_MakeLinearForm.hxx
// ./opencascade/BRepFeat_StatusError.hxx
// ./opencascade/BRepFeat_MakeCylindricalHole.hxx
// ./opencascade/BRepFeat_Builder.hxx
// ./opencascade/BRepFeat.hxx
// ./opencascade/BRepFeat_Gluer.hxx
// ./opencascade/BRepFeat_SplitShape.hxx

// operators

// register typdefs
// ./opencascade/BRepFeat_MakeDPrism.hxx
// ./opencascade/BRepFeat_MakePipe.hxx
// ./opencascade/BRepFeat_MakeRevol.hxx
// ./opencascade/BRepFeat_MakePrism.hxx
// ./opencascade/BRepFeat_Status.hxx
// ./opencascade/BRepFeat_RibSlot.hxx
// ./opencascade/BRepFeat_Form.hxx
// ./opencascade/BRepFeat_MakeRevolutionForm.hxx
// ./opencascade/BRepFeat_PerfSelection.hxx
// ./opencascade/BRepFeat_MakeLinearForm.hxx
// ./opencascade/BRepFeat_StatusError.hxx
// ./opencascade/BRepFeat_MakeCylindricalHole.hxx
// ./opencascade/BRepFeat_Builder.hxx
// ./opencascade/BRepFeat.hxx
// ./opencascade/BRepFeat_Gluer.hxx
// ./opencascade/BRepFeat_SplitShape.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
