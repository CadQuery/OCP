
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
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_Tool.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepAlgo.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_CheckStatus.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_Tool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepAlgo(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepAlgo"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepAlgo , shared_ptr<BRepAlgo>>(m,"BRepAlgo");

    static_cast<py::class_<BRepAlgo , shared_ptr<BRepAlgo> >>(m.attr("BRepAlgo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ConcatenateWire_s",
                    (TopoDS_Wire (*)( const TopoDS_Wire & , const GeomAbs_Shape , const Standard_Real ) ) static_cast<TopoDS_Wire (*)( const TopoDS_Wire & , const GeomAbs_Shape , const Standard_Real ) >(&BRepAlgo::ConcatenateWire),
                    R"#(this method makes a wire whose edges are C1 from a Wire whose edges could be G1. It removes a vertex between G1 edges. Option can be G1 or C1.)#"  , py::arg("Wire"),  py::arg("Option"),  py::arg("AngularTolerance")=static_cast<const Standard_Real>(1.0e-4))
        .def_static("ConcatenateWireC0_s",
                    (TopoDS_Edge (*)( const TopoDS_Wire & ) ) static_cast<TopoDS_Edge (*)( const TopoDS_Wire & ) >(&BRepAlgo::ConcatenateWireC0),
                    R"#(this method makes an edge from a wire. Junction points between edges of wire may be sharp, resulting curve of the resulting edge may be C0.)#"  , py::arg("Wire"))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ) >(&BRepAlgo::IsValid),
                    R"#(Checks if the shape is "correct". If not, returns <Standard_False>, else returns <Standard_True>.)#"  , py::arg("S"))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) >(&BRepAlgo::IsValid),
                    R"#(Checks if the Generated and Modified Faces from the shapes <arguments> in the shape <result> are "correct". The args may be empty, then all faces will be checked. If <Closed> is True, only closed shape are valid. If <GeomCtrl> is False the geometry of new vertices and edges are not verified and the auto-intersection of new wires are not searched.)#"  , py::arg("theArgs"),  py::arg("theResult"),  py::arg("closedSolid")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("GeomCtrl")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("IsTopologicallyValid_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ) >(&BRepAlgo::IsTopologicallyValid),
                    R"#(Checks if the shape is "correct". If not, returns <Standard_False>, else returns <Standard_True>. This method differs from the previous one in the fact that no geometric contols (intersection of wires, pcurve validity) are performed.)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_AsDes ,opencascade::handle<BRepAlgo_AsDes> , Standard_Transient>>(m.attr("BRepAlgo_AsDes"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepAlgo_AsDes::*)() ) static_cast<void (BRepAlgo_AsDes::*)() >(&BRepAlgo_AsDes::Clear),
             R"#(None)#" )
        .def("Add",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepAlgo_AsDes::Add),
             R"#(Stores <SS> as a futur subshape of <S>.)#"  , py::arg("S"),  py::arg("SS"))
        .def("Add",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgo_AsDes::Add),
             R"#(Stores <SS> as futurs SubShapes of <S>.)#"  , py::arg("S"),  py::arg("SS"))
        .def("HasAscendant",
             (Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const>(&BRepAlgo_AsDes::HasAscendant),
             R"#(None)#"  , py::arg("S"))
        .def("HasDescendant",
             (Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const>(&BRepAlgo_AsDes::HasDescendant),
             R"#(None)#"  , py::arg("S"))
        .def("Ascendant",
             (const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const>(&BRepAlgo_AsDes::Ascendant),
             R"#(Returns the Shape containing <S>.)#"  , py::arg("S"))
        .def("Descendant",
             (const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) const>(&BRepAlgo_AsDes::Descendant),
             R"#(Returns futur subhapes of <S>.)#"  , py::arg("S"))
        .def("ChangeDescendant",
             (TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) ) static_cast<TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) >(&BRepAlgo_AsDes::ChangeDescendant),
             R"#(Returns futur subhapes of <S>.)#"  , py::arg("S"))
        .def("Replace",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepAlgo_AsDes::Replace),
             R"#(Replace <OldS> by <NewS>. <OldS> disapear from <me>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Remove",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ) >(&BRepAlgo_AsDes::Remove),
             R"#(Remove <S> from me.)#"  , py::arg("S"))
        .def("HasCommonDescendant",
             (Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) const>(&BRepAlgo_AsDes::HasCommonDescendant),
             R"#(Returns True if (S1> and <S2> has common Descendants. Stores in <LC> the Commons Descendants.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("LC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAlgo_AsDes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAlgo_AsDes::*)() const>(&BRepAlgo_AsDes::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAlgo_AsDes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAlgo_AsDes::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_BooleanOperation , shared_ptr<BRepAlgo_BooleanOperation> , BRepBuilderAPI_MakeShape>>(m.attr("BRepAlgo_BooleanOperation"))
    // constructors
    // custom constructors
    // methods
        .def("PerformDS",
             (void (BRepAlgo_BooleanOperation::*)() ) static_cast<void (BRepAlgo_BooleanOperation::*)() >(&BRepAlgo_BooleanOperation::PerformDS),
             R"#(None)#" )
        .def("Perform",
             (void (BRepAlgo_BooleanOperation::*)( const TopAbs_State , const TopAbs_State ) ) static_cast<void (BRepAlgo_BooleanOperation::*)( const TopAbs_State , const TopAbs_State ) >(&BRepAlgo_BooleanOperation::Perform),
             R"#(None)#"  , py::arg("St1"),  py::arg("St2"))
        .def("Builder",
             (opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepAlgo_BooleanOperation::*)() const) static_cast<opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepAlgo_BooleanOperation::*)() const>(&BRepAlgo_BooleanOperation::Builder),
             R"#(None)#" )
        .def("Shape1",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const>(&BRepAlgo_BooleanOperation::Shape1),
             R"#(Returns the first shape involved in this Boolean operation.)#" )
        .def("Shape2",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const>(&BRepAlgo_BooleanOperation::Shape2),
             R"#(Returns the second shape involved in this Boolean operation.)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) >(&BRepAlgo_BooleanOperation::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape & ) >(&BRepAlgo_BooleanOperation::IsDeleted),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_FaceRestrictor , shared_ptr<BRepAlgo_FaceRestrictor> >>(m.attr("BRepAlgo_FaceRestrictor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepAlgo_FaceRestrictor::*)( const TopoDS_Face & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepAlgo_FaceRestrictor::*)( const TopoDS_Face & , const Standard_Boolean , const Standard_Boolean ) >(&BRepAlgo_FaceRestrictor::Init),
             R"#(the surface of <F> will be the the surface of each new faces built. <Proj> is used to update pcurves on edges if necessary. See Add().)#"  , py::arg("F"),  py::arg("Proj")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ControlOrientation")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Add",
             (void (BRepAlgo_FaceRestrictor::*)( TopoDS_Wire & ) ) static_cast<void (BRepAlgo_FaceRestrictor::*)( TopoDS_Wire & ) >(&BRepAlgo_FaceRestrictor::Add),
             R"#(Add the wire <W> to the set of wires.)#"  , py::arg("W"))
        .def("Clear",
             (void (BRepAlgo_FaceRestrictor::*)() ) static_cast<void (BRepAlgo_FaceRestrictor::*)() >(&BRepAlgo_FaceRestrictor::Clear),
             R"#(Removes all the Wires)#" )
        .def("Perform",
             (void (BRepAlgo_FaceRestrictor::*)() ) static_cast<void (BRepAlgo_FaceRestrictor::*)() >(&BRepAlgo_FaceRestrictor::Perform),
             R"#(Evaluate all the faces limited by the set of Wires.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const) static_cast<Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const>(&BRepAlgo_FaceRestrictor::IsDone),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const) static_cast<Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const>(&BRepAlgo_FaceRestrictor::More),
             R"#(None)#" )
        .def("Next",
             (void (BRepAlgo_FaceRestrictor::*)() ) static_cast<void (BRepAlgo_FaceRestrictor::*)() >(&BRepAlgo_FaceRestrictor::Next),
             R"#(None)#" )
        .def("Current",
             (TopoDS_Face (BRepAlgo_FaceRestrictor::*)() const) static_cast<TopoDS_Face (BRepAlgo_FaceRestrictor::*)() const>(&BRepAlgo_FaceRestrictor::Current),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Image , shared_ptr<BRepAlgo_Image> >>(m.attr("BRepAlgo_Image"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetRoot",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ) >(&BRepAlgo_Image::SetRoot),
             R"#(None)#"  , py::arg("S"))
        .def("Bind",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepAlgo_Image::Bind),
             R"#(Links <NewS> as image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Bind",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgo_Image::Bind),
             R"#(Links <NewS> as image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Add",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepAlgo_Image::Add),
             R"#(Add <NewS> to the image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Add",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgo_Image::Add),
             R"#(Add <NewS> to the image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Clear",
             (void (BRepAlgo_Image::*)() ) static_cast<void (BRepAlgo_Image::*)() >(&BRepAlgo_Image::Clear),
             R"#(None)#" )
        .def("Remove",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ) >(&BRepAlgo_Image::Remove),
             R"#(Remove <S> to set of images.)#"  , py::arg("S"))
        .def("Roots",
             (const TopTools_ListOfShape & (BRepAlgo_Image::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Image::*)() const>(&BRepAlgo_Image::Roots),
             R"#(None)#" )
        .def("IsImage",
             (Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape & ) const>(&BRepAlgo_Image::IsImage),
             R"#(None)#"  , py::arg("S"))
        .def("ImageFrom",
             (const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape & ) const>(&BRepAlgo_Image::ImageFrom),
             R"#(Returns the generator of <S>)#"  , py::arg("S"))
        .def("Root",
             (const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape & ) const>(&BRepAlgo_Image::Root),
             R"#(Returns the upper generator of <S>)#"  , py::arg("S"))
        .def("HasImage",
             (Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape & ) const>(&BRepAlgo_Image::HasImage),
             R"#(None)#"  , py::arg("S"))
        .def("Image",
             (const TopTools_ListOfShape & (BRepAlgo_Image::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Image::*)( const TopoDS_Shape & ) const>(&BRepAlgo_Image::Image),
             R"#(Returns the Image of <S>. Returns <S> in the list if HasImage(S) is false.)#"  , py::arg("S"))
        .def("LastImage",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) const) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) const>(&BRepAlgo_Image::LastImage),
             R"#(Stores in <L> the images of images of...images of <S>. <L> contains only <S> if HasImage(S) is false.)#"  , py::arg("S"),  py::arg("L"))
        .def("Compact",
             (void (BRepAlgo_Image::*)() ) static_cast<void (BRepAlgo_Image::*)() >(&BRepAlgo_Image::Compact),
             R"#(Keeps only the link between roots and lastimage.)#" )
        .def("Filter",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&BRepAlgo_Image::Filter),
             R"#(Deletes in the images the shape of type <ShapeType> which are not in <S>. Warning: Compact() must be call before.)#"  , py::arg("S"),  py::arg("ShapeType"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Loop , shared_ptr<BRepAlgo_Loop> >>(m.attr("BRepAlgo_Loop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepAlgo_Loop::*)( const TopoDS_Face & ) ) static_cast<void (BRepAlgo_Loop::*)( const TopoDS_Face & ) >(&BRepAlgo_Loop::Init),
             R"#(Init with <F> the set of edges must have pcurves on <F>.)#"  , py::arg("F"))
        .def("AddEdge",
             (void (BRepAlgo_Loop::*)( TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgo_Loop::*)( TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgo_Loop::AddEdge),
             R"#(Add E with <LV>. <E> will be copied and trim by vertices in <LV>.)#"  , py::arg("E"),  py::arg("LV"))
        .def("AddConstEdge",
             (void (BRepAlgo_Loop::*)( const TopoDS_Edge & ) ) static_cast<void (BRepAlgo_Loop::*)( const TopoDS_Edge & ) >(&BRepAlgo_Loop::AddConstEdge),
             R"#(Add <E> as const edge, E can be in the result.)#"  , py::arg("E"))
        .def("AddConstEdges",
             (void (BRepAlgo_Loop::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepAlgo_Loop::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BRepAlgo_Loop::AddConstEdges),
             R"#(Add <LE> as a set of const edges.)#"  , py::arg("LE"))
        .def("Perform",
             (void (BRepAlgo_Loop::*)() ) static_cast<void (BRepAlgo_Loop::*)() >(&BRepAlgo_Loop::Perform),
             R"#(Make loops.)#" )
        .def("CutEdge",
             (void (BRepAlgo_Loop::*)( const TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) const) static_cast<void (BRepAlgo_Loop::*)( const TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) const>(&BRepAlgo_Loop::CutEdge),
             R"#(Cut the edge <E> in several edges <NE> on the vertices<VonE>.)#"  , py::arg("E"),  py::arg("VonE"),  py::arg("NE"))
        .def("NewWires",
             (const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const>(&BRepAlgo_Loop::NewWires),
             R"#(Returns the list of wires performed. can be an empty list.)#" )
        .def("WiresToFaces",
             (void (BRepAlgo_Loop::*)() ) static_cast<void (BRepAlgo_Loop::*)() >(&BRepAlgo_Loop::WiresToFaces),
             R"#(Build faces from the wires result.)#" )
        .def("NewFaces",
             (const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const>(&BRepAlgo_Loop::NewFaces),
             R"#(Returns the list of faces. Warning: The method <WiresToFaces> as to be called before. can be an empty list.)#" )
        .def("NewEdges",
             (const TopTools_ListOfShape & (BRepAlgo_Loop::*)( const TopoDS_Edge & ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Loop::*)( const TopoDS_Edge & ) const>(&BRepAlgo_Loop::NewEdges),
             R"#(Returns the list of new edges built from an edge <E> it can be an empty list.)#"  , py::arg("E"))
        .def("GetVerticesForSubstitute",
             (void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) const) static_cast<void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) const>(&BRepAlgo_Loop::GetVerticesForSubstitute),
             R"#(Returns the datamap of vertices with their substitutes.)#"  , py::arg("VerVerMap"))
        .def("VerticesForSubstitute",
             (void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&BRepAlgo_Loop::VerticesForSubstitute),
             R"#(None)#"  , py::arg("VerVerMap"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_NormalProjection , shared_ptr<BRepAlgo_NormalProjection> >>(m.attr("BRepAlgo_NormalProjection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape & ) >(&BRepAlgo_NormalProjection::Init),
             R"#(None)#"  , py::arg("S"))
        .def("Add",
             (void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape & ) >(&BRepAlgo_NormalProjection::Add),
             R"#(Add an edge or a wire to the list of shape to project)#"  , py::arg("ToProj"))
        .def("SetParams",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Real , const Standard_Real , const GeomAbs_Shape , const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Real , const Standard_Real , const GeomAbs_Shape , const Standard_Integer , const Standard_Integer ) >(&BRepAlgo_NormalProjection::SetParams),
             R"#(Set the parameters used for computation Tol3d is the requiered tolerance between the 3d projected curve and its 2d representation InternalContinuity is the order of constraints used for approximation. MaxDeg and MaxSeg are the maximum degree and the maximum number of segment for BSpline resulting of an approximation.)#"  , py::arg("Tol3D"),  py::arg("Tol2D"),  py::arg("InternalContinuity"),  py::arg("MaxDegree"),  py::arg("MaxSeg"))
        .def("SetDefaultParams",
             (void (BRepAlgo_NormalProjection::*)() ) static_cast<void (BRepAlgo_NormalProjection::*)() >(&BRepAlgo_NormalProjection::SetDefaultParams),
             R"#(Set the parameters used for computation in their default values)#" )
        .def("SetMaxDistance",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Real ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Real ) >(&BRepAlgo_NormalProjection::SetMaxDistance),
             R"#(Sets the maximum distance between target shape and shape to project. If this condition is not satisfied then corresponding part of solution is discarded. if MaxDist < 0 then this method does not affect the algorithm)#"  , py::arg("MaxDist"))
        .def("Compute3d",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Boolean ) >(&BRepAlgo_NormalProjection::Compute3d),
             R"#(if With3d = Standard_False the 3dcurve is not computed the initial 3dcurve is kept to build the resulting edges.)#"  , py::arg("With3d")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetLimit",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Boolean ) >(&BRepAlgo_NormalProjection::SetLimit),
             R"#(Manage limitation of projected edges.)#"  , py::arg("FaceBoundaries")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Build",
             (void (BRepAlgo_NormalProjection::*)() ) static_cast<void (BRepAlgo_NormalProjection::*)() >(&BRepAlgo_NormalProjection::Build),
             R"#(Builds the result as a compound.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepAlgo_NormalProjection::*)() const) static_cast<Standard_Boolean (BRepAlgo_NormalProjection::*)() const>(&BRepAlgo_NormalProjection::IsDone),
             R"#(None)#" )
        .def("Projection",
             (const TopoDS_Shape & (BRepAlgo_NormalProjection::*)() const) static_cast<const TopoDS_Shape & (BRepAlgo_NormalProjection::*)() const>(&BRepAlgo_NormalProjection::Projection),
             R"#(returns the result)#" )
        .def("Ancestor",
             (const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge & ) const) static_cast<const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge & ) const>(&BRepAlgo_NormalProjection::Ancestor),
             R"#(For a resulting edge, returns the corresponding initial edge.)#"  , py::arg("E"))
        .def("Couple",
             (const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge & ) const) static_cast<const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge & ) const>(&BRepAlgo_NormalProjection::Couple),
             R"#(For a projected edge, returns the corresponding initial face.)#"  , py::arg("E"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepAlgo_NormalProjection::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_NormalProjection::*)( const TopoDS_Shape & ) >(&BRepAlgo_NormalProjection::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("IsElementary",
             (Standard_Boolean (BRepAlgo_NormalProjection::*)( const Adaptor3d_Curve & ) const) static_cast<Standard_Boolean (BRepAlgo_NormalProjection::*)( const Adaptor3d_Curve & ) const>(&BRepAlgo_NormalProjection::IsElementary),
             R"#(None)#"  , py::arg("C"))
        .def("BuildWire",
             (Standard_Boolean (BRepAlgo_NormalProjection::*)( NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Boolean (BRepAlgo_NormalProjection::*)( NCollection_List<TopoDS_Shape> & ) const>(&BRepAlgo_NormalProjection::BuildWire),
             R"#(build the result as a list of wire if possible in -- a first returns a wire only if there is only a wire.)#"  , py::arg("Liste"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepAlgo_Tool , shared_ptr<BRepAlgo_Tool>>(m,"BRepAlgo_Tool");

    static_cast<py::class_<BRepAlgo_Tool , shared_ptr<BRepAlgo_Tool> >>(m.attr("BRepAlgo_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Deboucle3D_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & ,  const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & ,  const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&BRepAlgo_Tool::Deboucle3D),
                    R"#(Remove the non valid part of an offsetshape 1 - Remove all the free boundary and the faces connex to such edges. 2 - Remove all the shapes not valid in the result (according to the side of offseting) in this verion only the first point is implemented.)#"  , py::arg("S"),  py::arg("Boundary"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Common , shared_ptr<BRepAlgo_Common> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Common"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Cut , shared_ptr<BRepAlgo_Cut> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Cut"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Fuse , shared_ptr<BRepAlgo_Fuse> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Fuse"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepAlgo_Section , shared_ptr<BRepAlgo_Section> , BRepAlgo_BooleanOperation>>(m.attr("BRepAlgo_Section"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("Sh1"),  py::arg("Sh2"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const gp_Pln &,const Standard_Boolean >()  , py::arg("Sh"),  py::arg("Pl"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("Sh"),  py::arg("Sf"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("Sf"),  py::arg("Sh"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("Sf1"),  py::arg("Sf2"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Init1",
             (void (BRepAlgo_Section::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_Section::*)( const TopoDS_Shape & ) >(&BRepAlgo_Section::Init1),
             R"#(Initializes the first part)#"  , py::arg("S1"))
        .def("Init1",
             (void (BRepAlgo_Section::*)( const gp_Pln & ) ) static_cast<void (BRepAlgo_Section::*)( const gp_Pln & ) >(&BRepAlgo_Section::Init1),
             R"#(Initializes the first part)#"  , py::arg("Pl"))
        .def("Init1",
             (void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> & ) >(&BRepAlgo_Section::Init1),
             R"#(Initializes the first part)#"  , py::arg("Sf"))
        .def("Init2",
             (void (BRepAlgo_Section::*)( const TopoDS_Shape & ) ) static_cast<void (BRepAlgo_Section::*)( const TopoDS_Shape & ) >(&BRepAlgo_Section::Init2),
             R"#(initialize second part)#"  , py::arg("S2"))
        .def("Init2",
             (void (BRepAlgo_Section::*)( const gp_Pln & ) ) static_cast<void (BRepAlgo_Section::*)( const gp_Pln & ) >(&BRepAlgo_Section::Init2),
             R"#(Initializes the second part)#"  , py::arg("Pl"))
        .def("Init2",
             (void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> & ) >(&BRepAlgo_Section::Init2),
             R"#(This and the above algorithms reinitialize the first and the second parts on which this algorithm is going to perform the intersection computation. This is done with either: the surface Sf, the plane Pl or the shape Sh. You use the function Build to construct the result.)#"  , py::arg("Sf"))
        .def("Approximation",
             (void (BRepAlgo_Section::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgo_Section::*)( const Standard_Boolean ) >(&BRepAlgo_Section::Approximation),
             R"#(Defines an option for computation of further intersections. This computation will be performed by the function Build in this framework. By default, the underlying 3D geometry attached to each elementary edge of the result of a computed intersection is: - analytic where possible, provided the corresponding geometry corresponds to a type of analytic curve defined in the Geom package; for example the intersection of a cylindrical shape with a plane gives an ellipse or a circle; - or elsewhere, given as a succession of points grouped together in a BSpline curve of degree 1. If Approx equals true, when further computations are performed in this framework with the function Build, these edges will have an attached 3D geometry which is a BSpline approximation of the computed set of points. Note that as a result, approximations will be computed on edges built only on new intersection lines.)#"  , py::arg("B"))
        .def("ComputePCurveOn1",
             (void (BRepAlgo_Section::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgo_Section::*)( const Standard_Boolean ) >(&BRepAlgo_Section::ComputePCurveOn1),
             R"#(Indicates if the Pcurve must be (or not) performed on first part.)#"  , py::arg("B"))
        .def("ComputePCurveOn2",
             (void (BRepAlgo_Section::*)( const Standard_Boolean ) ) static_cast<void (BRepAlgo_Section::*)( const Standard_Boolean ) >(&BRepAlgo_Section::ComputePCurveOn2),
             R"#(Define options for the computation of further intersections which will be performed by the function Build in this framework. By default, no parametric 2D curve (pcurve) is defined for the elementary edges of the result. If ComputePCurve1 equals true, further computations performed in this framework with the function Build will attach an additional pcurve in the parametric space of the first shape to the constructed edges. If ComputePCurve2 equals true, the additional pcurve will be attached to the constructed edges in the parametric space of the second shape. These two functions may be used together. Note that as a result, pcurves will only be added onto edges built on new intersection lines.)#"  , py::arg("B"))
        .def("Build",
             (void (BRepAlgo_Section::*)() ) static_cast<void (BRepAlgo_Section::*)() >(&BRepAlgo_Section::Build),
             R"#(Performs the computation of the section lines between the two parts defined at the time of construction of this framework or reinitialized with the Init1 and Init2 functions. The constructed shape will be returned by the function Shape. This is a compound object composed of edges. These intersection edges may be built: - on new intersection lines, or - on coincident portions of edges in the two intersected shapes. These intersection edges are independent: they are not chained or grouped into wires. If no intersection edge exists, the result is an empty compound object. The shapes involved in the construction of the section lines can be retrieved with the function Shape1 or Shape2. Note that other objects than TopoDS_Shape shapes given as arguments at the construction time of this framework, or to the Init1 or Init2 function, are converted into faces or shells before performing the computation of the intersection. Parametric 2D curves on intersection edges No parametric 2D curve (pcurve) is defined for the elementary edges of the result. To attach parametric curves like this to the constructed edges you have to use: - the function ComputePCurveOn1 to ask for the additional computation of a pcurve in the parametric space of the first shape, - the function ComputePCurveOn2 to ask for the additional computation of a pcurve in the parametric space of the second shape. This must be done before calling this function. Note that as a result, pcurves are added on edges built on new intersection lines only. Approximation of intersection edges The underlying 3D geometry attached to each elementary edge of the result is: - analytic where possible provided the corresponding geometry corresponds to a type of analytic curve defined in the Geom package; for example, the intersection of a cylindrical shape with a plane gives an ellipse or a circle; or - elsewhere, given as a succession of points grouped together in a BSpline curve of degree 1. If, on computed elementary intersection edges whose underlying geometry is not analytic, you prefer to have an attached 3D geometry which is a BSpline approximation of the computed set of points, you have to use the function Approximation to ask for this computation option before calling this function. You may also have combined these computation options: look at the example given above to illustrate the use of the constructors.)#" )
        .def("HasAncestorFaceOn1",
             (Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & , TopoDS_Shape & ) const>(&BRepAlgo_Section::HasAncestorFaceOn1),
             R"#(Identifies the ancestor faces of the new intersection edge E resulting from the last computation performed in this framework, that is, the faces of the two original shapes on which the edge E lies: - HasAncestorFaceOn1 gives the ancestor face in the first shape, and These functions return: - true if an ancestor face F is found, or - false if not. An ancestor face is identifiable for the edge E if the three following conditions are satisfied: - the first part on which this algorithm performed its last computation is a shape, that is, it was not given as a surface or a plane at the time of construction of this algorithm or at a later time by the Init1 function, - E is one of the elementary edges built by the last computation of this section algorithm, - the edge E is built on an intersection curve. In other words, E is a new edge built on the intersection curve, not on edges belonging to the intersecting shapes. To use these functions properly, you have to test the returned Boolean value before using the ancestor face: F is significant only if the returned Boolean value equals true.)#"  , py::arg("E"),  py::arg("F"))
        .def("HasAncestorFaceOn2",
             (Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & , TopoDS_Shape & ) const>(&BRepAlgo_Section::HasAncestorFaceOn2),
             R"#(Identifies the ancestor faces of the new intersection edge E resulting from the last computation performed in this framework, that is, the faces of the two original shapes on which the edge E lies: - HasAncestorFaceOn2 gives the ancestor face in the second shape. These functions return: - true if an ancestor face F is found, or - false if not. An ancestor face is identifiable for the edge E if the three following conditions are satisfied: - the first part on which this algorithm performed its last computation is a shape, that is, it was not given as a surface or a plane at the time of construction of this algorithm or at a later time by the Init1 function, - E is one of the elementary edges built by the last computation of this section algorithm, - the edge E is built on an intersection curve. In other words, E is a new edge built on the intersection curve, not on edges belonging to the intersecting shapes. To use these functions properly, you have to test the returned Boolean value before using the ancestor face: F is significant only if the returned Boolean value equals true.)#"  , py::arg("E"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BRepAlgo.hxx
// ./opencascade\BRepAlgo_NormalProjection.hxx
// ./opencascade\BRepAlgo_Tool.hxx
// ./opencascade\BRepAlgo_CheckStatus.hxx
// ./opencascade\BRepAlgo_AsDes.hxx
// ./opencascade\BRepAlgo_BooleanOperation.hxx
// ./opencascade\BRepAlgo_Image.hxx
// ./opencascade\BRepAlgo_Section.hxx
// ./opencascade\BRepAlgo_FaceRestrictor.hxx
// ./opencascade\BRepAlgo_Fuse.hxx
// ./opencascade\BRepAlgo_Cut.hxx
// ./opencascade\BRepAlgo_Loop.hxx
// ./opencascade\BRepAlgo_Common.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
