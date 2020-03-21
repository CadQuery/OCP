
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <BRep_Builder.hxx>
#include <BRepTools_WireExplorer.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <BRepTools_TrsfModification.hxx>
#include <BRepTools_NurbsConvertModification.hxx>
#include <BRepTools_GTrsfModification.hxx>
#include <BRepTools_Substitution.hxx>
#include <BRepTools_Quilt.hxx>
#include <BRepTools_ShapeSet.hxx>
#include <BRepTools_ReShape.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NullObject.hxx>
#include <BRepTools_Modification.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Wire.hxx>

// module includes
#include <BRepTools.hxx>
#include <BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx>
#include <BRepTools_GTrsfModification.hxx>
#include <BRepTools_History.hxx>
#include <BRepTools_MapOfVertexPnt2d.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <BRepTools_NurbsConvertModification.hxx>
#include <BRepTools_Quilt.hxx>
#include <BRepTools_ReShape.hxx>
#include <BRepTools_ShapeSet.hxx>
#include <BRepTools_Substitution.hxx>
#include <BRepTools_TrsfModification.hxx>
#include <BRepTools_WireExplorer.hxx>

// template related includes
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepTools"));


//Python trampoline classes
    class Py_BRepTools_Modification : public BRepTools_Modification{
    public:
        using BRepTools_Modification::BRepTools_Modification;


        // public pure virtual
        Standard_Boolean NewSurface(const TopoDS_Face & F,opencascade::handle<Geom_Surface> & S,TopLoc_Location & L,Standard_Real & Tol,Standard_Boolean & RevWires,Standard_Boolean & RevFace) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewSurface,F,S,L,Tol,RevWires,RevFace) };
        Standard_Boolean NewCurve(const TopoDS_Edge & E,opencascade::handle<Geom_Curve> & C,TopLoc_Location & L,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewCurve,E,C,L,Tol) };
        Standard_Boolean NewPoint(const TopoDS_Vertex & V,gp_Pnt & P,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewPoint,V,P,Tol) };
        Standard_Boolean NewCurve2d(const TopoDS_Edge & E,const TopoDS_Face & F,const TopoDS_Edge & NewE,const TopoDS_Face & NewF,opencascade::handle<Geom2d_Curve> & C,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewCurve2d,E,F,NewE,NewF,C,Tol) };
        Standard_Boolean NewParameter(const TopoDS_Vertex & V,const TopoDS_Edge & E,Standard_Real & P,Standard_Real & Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepTools_Modification,NewParameter,V,E,P,Tol) };
        GeomAbs_Shape Continuity(const TopoDS_Edge & E,const TopoDS_Face & F1,const TopoDS_Face & F2,const TopoDS_Edge & NewE,const TopoDS_Face & NewF1,const TopoDS_Face & NewF2) override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,BRepTools_Modification,Continuity,E,F1,F2,NewE,NewF1,NewF2) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<BRepTools , shared_ptr<BRepTools>>(m,"BRepTools");

    static_cast<py::class_<BRepTools , shared_ptr<BRepTools> >>(m.attr("BRepTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_History ,opencascade::handle<BRepTools_History> , Standard_Transient>>(m.attr("BRepTools_History"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepTools_History::*)() ) static_cast<void (BRepTools_History::*)() >(&BRepTools_History::Clear),
             R"#(Clears the history.)#" )
        .def("HasGenerated",
             (Standard_Boolean (BRepTools_History::*)() const) static_cast<Standard_Boolean (BRepTools_History::*)() const>(&BRepTools_History::HasGenerated),
             R"#(Returns 'true' if there any shapes with Generated elements present)#" )
        .def("HasModified",
             (Standard_Boolean (BRepTools_History::*)() const) static_cast<Standard_Boolean (BRepTools_History::*)() const>(&BRepTools_History::HasModified),
             R"#(Returns 'true' if there any Modified shapes present)#" )
        .def("HasRemoved",
             (Standard_Boolean (BRepTools_History::*)() const) static_cast<Standard_Boolean (BRepTools_History::*)() const>(&BRepTools_History::HasRemoved),
             R"#(Returns 'true' if there any removed shapes present)#" )
        .def("Dump",
             (void (BRepTools_History::*)( std::ostream & ) ) static_cast<void (BRepTools_History::*)( std::ostream & ) >(&BRepTools_History::Dump),
             R"#(Prints the brief description of the history into a stream)#"  , py::arg("theS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_History::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_History::*)() const>(&BRepTools_History::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsSupportedType_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ) >(&BRepTools_History::IsSupportedType),
                    R"#(Returns 'true' if the type of the shape is supported by the history.)#"  , py::arg("theShape"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_History::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Modification ,opencascade::handle<BRepTools_Modification>,Py_BRepTools_Modification , Standard_Transient>>(m.attr("BRepTools_Modification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&BRepTools_Modification::NewSurface),
             R"#(Returns true if the face, F, has been modified. If the face has been modified: - S is the new geometry of the face, - L is its new location, and - Tol is the new tolerance. The flag, RevWires, is set to true when the modification reverses the normal of the surface, (i.e. the wires have to be reversed). The flag, RevFace, is set to true if the orientation of the modified face changes in the shells which contain it. If the face has not been modified this function returns false, and the values of S, L, Tol, RevWires and RevFace are not significant.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewTriangulation",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & , opencascade::handle<Poly_Triangulation> & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Face & , opencascade::handle<Poly_Triangulation> & ) >(&BRepTools_Modification::NewTriangulation),
             R"#(Returns true if the face has been modified according to changed triangulation. If the face has been modified: - T is a new triangulation on the face)#"  , py::arg("F"),  py::arg("T"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&BRepTools_Modification::NewCurve),
             R"#(Returns true if the edge, E, has been modified. If the edge has been modified: - C is the new geometry associated with the edge, - L is its new location, and - Tol is the new tolerance. If the edge has not been modified, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPolygon",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , opencascade::handle<Poly_Polygon3D> & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , opencascade::handle<Poly_Polygon3D> & ) >(&BRepTools_Modification::NewPolygon),
             R"#(Returns true if the edge has been modified according to changed polygon. If the edge has been modified: - P is a new polygon)#"  , py::arg("E"),  py::arg("P"))
        .def("NewPolygonOnTriangulation",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Poly_PolygonOnTriangulation> & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Poly_PolygonOnTriangulation> & ) >(&BRepTools_Modification::NewPolygonOnTriangulation),
             R"#(Returns true if the edge has been modified according to changed polygon on triangulation. If the edge has been modified: - P is a new polygon on triangulation)#"  , py::arg("E"),  py::arg("F"),  py::arg("P"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&BRepTools_Modification::NewPoint),
             R"#(Returns true if the vertex V has been modified. If V has been modified: - P is the new geometry of the vertex, and - Tol is the new tolerance. If the vertex has not been modified this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&BRepTools_Modification::NewCurve2d),
             R"#(Returns true if the edge, E, has a new curve on surface on the face, F. If a new curve exists: - C is the new geometry of the edge, - L is the new location, and - Tol is the new tolerance. NewE is the new edge created from E, and NewF is the new face created from F. If there is no new curve on the face, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_Modification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRepTools_Modification::NewParameter),
             R"#(Returns true if the vertex V has a new parameter on the edge E. If a new parameter exists: - P is the parameter, and - Tol is the new tolerance. If there is no new parameter this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (BRepTools_Modification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRepTools_Modification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>. <NewE> is the new edge created from <E>. <NewF1> (resp. <NewF2>) is the new face created from <F1> (resp. <F2>).)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_Modification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_Modification::*)() const>(&BRepTools_Modification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_Modification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Modifier , shared_ptr<BRepTools_Modifier> >>(m.attr("BRepTools_Modifier"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepTools_Modifier::*)() const) static_cast<Standard_Boolean (BRepTools_Modifier::*)() const>(&BRepTools_Modifier::IsDone),
             R"#(Returns Standard_True if the modification has been computed successfully.)#" )
        .def("ModifiedShape",
             (const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape & ) const>(&BRepTools_Modifier::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Shape & (BRepTools_Modifier::*)( const TopoDS_Shape & ) const>(&BRepTools_Modifier::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (BRepTools_Modifier::*)() const) static_cast<Standard_Boolean (BRepTools_Modifier::*)() const>(&BRepTools_Modifier::IsDone),
             R"#(Returns Standard_True if the modification has been computed successfully.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Quilt , shared_ptr<BRepTools_Quilt> >>(m.attr("BRepTools_Quilt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_ReShape ,opencascade::handle<BRepTools_ReShape> , Standard_Transient>>(m.attr("BRepTools_ReShape"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepTools_ReShape::*)() ) static_cast<void (BRepTools_ReShape::*)() >(&BRepTools_ReShape::Clear),
             R"#(Clears all substitutions requests)#" )
        .def("Remove",
             (void (BRepTools_ReShape::*)( const TopoDS_Shape & ) ) static_cast<void (BRepTools_ReShape::*)( const TopoDS_Shape & ) >(&BRepTools_ReShape::Remove),
             R"#(Sets a request to Remove a Shape whatever the orientation)#"  , py::arg("shape"))
        .def("Replace",
             (void (BRepTools_ReShape::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepTools_ReShape::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepTools_ReShape::Replace),
             R"#(Sets a request to Replace a Shape by a new one.)#"  , py::arg("shape"),  py::arg("newshape"))
        .def("IsRecorded",
             (Standard_Boolean (BRepTools_ReShape::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepTools_ReShape::*)( const TopoDS_Shape & ) const>(&BRepTools_ReShape::IsRecorded),
             R"#(Tells if a shape is recorded for Replace/Remove)#"  , py::arg("shape"))
        .def("Value",
             (TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape & ) const>(&BRepTools_ReShape::Value),
             R"#(Returns the new value for an individual shape If not recorded, returns the original shape itself If to be Removed, returns a Null Shape Else, returns the replacing item)#"  , py::arg("shape"))
        .def("Status",
             (Standard_Integer (BRepTools_ReShape::*)( const TopoDS_Shape & , TopoDS_Shape & , const Standard_Boolean ) ) static_cast<Standard_Integer (BRepTools_ReShape::*)( const TopoDS_Shape & , TopoDS_Shape & , const Standard_Boolean ) >(&BRepTools_ReShape::Status),
             R"#(Returns a complete substitution status for a shape 0 : not recorded, <newsh> = original <shape> < 0: to be removed, <newsh> is NULL > 0: to be replaced, <newsh> is a new item If <last> is False, returns status and new shape recorded in the map directly for the shape, if True and status > 0 then recursively searches for the last status and new shape.)#"  , py::arg("shape"),  py::arg("newsh"),  py::arg("last")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Apply",
             (TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<TopoDS_Shape (BRepTools_ReShape::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&BRepTools_ReShape::Apply),
             R"#(Applies the substitutions requests to a shape.)#"  , py::arg("shape"),  py::arg("until")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("ModeConsiderLocation",
             (Standard_Boolean & (BRepTools_ReShape::*)() ) static_cast<Standard_Boolean & (BRepTools_ReShape::*)() >(&BRepTools_ReShape::ModeConsiderLocation),
             R"#(Returns (modifiable) the flag which defines whether Location of shape take into account during replacing shapes.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_ReShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_ReShape::*)() const>(&BRepTools_ReShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_ReShape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_ShapeSet , shared_ptr<BRepTools_ShapeSet> , TopTools_ShapeSet>>(m.attr("BRepTools_ShapeSet"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepTools_ShapeSet::*)() ) static_cast<void (BRepTools_ShapeSet::*)() >(&BRepTools_ShapeSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("AddGeometry",
             (void (BRepTools_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<void (BRepTools_ShapeSet::*)( const TopoDS_Shape & ) >(&BRepTools_ShapeSet::AddGeometry),
             R"#(Stores the goemetry of <S>.)#"  , py::arg("S"))
        .def("DumpGeometry",
             (void (BRepTools_ShapeSet::*)( std::ostream & ) const) static_cast<void (BRepTools_ShapeSet::*)( std::ostream & ) const>(&BRepTools_ShapeSet::DumpGeometry),
             R"#(Dumps the geometry of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("WriteGeometry",
             (void (BRepTools_ShapeSet::*)( std::ostream & ) ) static_cast<void (BRepTools_ShapeSet::*)( std::ostream & ) >(&BRepTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("ReadGeometry",
             (void (BRepTools_ShapeSet::*)( std::istream & ) ) static_cast<void (BRepTools_ShapeSet::*)( std::istream & ) >(&BRepTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("DumpGeometry",
             (void (BRepTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (BRepTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&BRepTools_ShapeSet::DumpGeometry),
             R"#(Dumps the geometry of <S> on the stream <OS>.)#"  , py::arg("S"),  py::arg("OS"))
        .def("WriteGeometry",
             (void (BRepTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (BRepTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&BRepTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of <S> on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("S"),  py::arg("OS"))
        .def("ReadGeometry",
             (void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum , std::istream & , TopoDS_Shape & ) ) static_cast<void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum , std::istream & , TopoDS_Shape & ) >(&BRepTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of a shape of type <T> from the stream <IS> and returns it in <S>.)#"  , py::arg("T"),  py::arg("IS"),  py::arg("S"))
        .def("AddShapes",
             (void (BRepTools_ShapeSet::*)( TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (BRepTools_ShapeSet::*)( TopoDS_Shape & , const TopoDS_Shape & ) >(&BRepTools_ShapeSet::AddShapes),
             R"#(Inserts the shape <S2> in the shape <S1>. This method must be redefined to use the correct builder.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Check",
             (void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum , TopoDS_Shape & ) ) static_cast<void (BRepTools_ShapeSet::*)( const TopAbs_ShapeEnum , TopoDS_Shape & ) >(&BRepTools_ShapeSet::Check),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_Substitution , shared_ptr<BRepTools_Substitution> >>(m.attr("BRepTools_Substitution"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_WireExplorer , shared_ptr<BRepTools_WireExplorer> >>(m.attr("BRepTools_WireExplorer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_GTrsfModification ,opencascade::handle<BRepTools_GTrsfModification> , BRepTools_Modification>>(m.attr("BRepTools_GTrsfModification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&BRepTools_GTrsfModification::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it. -- Here, <RevFace> will return Standard_True if the -- gp_Trsf is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&BRepTools_GTrsfModification::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&BRepTools_GTrsfModification::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&BRepTools_GTrsfModification::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_GTrsfModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRepTools_GTrsfModification::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_GTrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (BRepTools_GTrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRepTools_GTrsfModification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_GTrsfModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_GTrsfModification::*)() const>(&BRepTools_GTrsfModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_GTrsfModification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_NurbsConvertModification ,opencascade::handle<BRepTools_NurbsConvertModification> , BRepTools_Modification>>(m.attr("BRepTools_NurbsConvertModification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&BRepTools_NurbsConvertModification::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it. -- Here, <RevFace> will return Standard_True if the -- gp_Trsf is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&BRepTools_NurbsConvertModification::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&BRepTools_NurbsConvertModification::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&BRepTools_NurbsConvertModification::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_NurbsConvertModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRepTools_NurbsConvertModification::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (BRepTools_NurbsConvertModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRepTools_NurbsConvertModification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_NurbsConvertModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_NurbsConvertModification::*)() const>(&BRepTools_NurbsConvertModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_NurbsConvertModification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepTools_TrsfModification ,opencascade::handle<BRepTools_TrsfModification> , BRepTools_Modification>>(m.attr("BRepTools_TrsfModification"))
    // constructors
    // custom constructors
    // methods
        .def("NewSurface",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&BRepTools_TrsfModification::NewSurface),
             R"#(Returns true if the face F has been modified. If the face has been modified: - S is the new geometry of the face, - L is its new location, and - Tol is the new tolerance. RevWires is set to true when the modification reverses the normal of the surface (the wires have to be reversed). RevFace is set to true if the orientation of the modified face changes in the shells which contain it. For this class, RevFace returns true if the gp_Trsf associated with this modification is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&BRepTools_TrsfModification::NewCurve),
             R"#(Returns true if the edge E has been modified. If the edge has been modified: - C is the new geometric support of the edge, - L is the new location, and - Tol is the new tolerance. If the edge has not been modified, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&BRepTools_TrsfModification::NewPoint),
             R"#(Returns true if the vertex V has been modified. If the vertex has been modified: - P is the new geometry of the vertex, and - Tol is the new tolerance. If the vertex has not been modified this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&BRepTools_TrsfModification::NewCurve2d),
             R"#(Returns true if the edge E has a new curve on surface on the face F. If a new curve exists: - C is the new geometric support of the edge, - L is the new location, and - Tol the new tolerance. If no new curve exists, this function returns false, and the values of C, L and Tol are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepTools_TrsfModification::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRepTools_TrsfModification::NewParameter),
             R"#(Returns true if the Vertex V has a new parameter on the edge E. If a new parameter exists: - P is the parameter, and - Tol is the new tolerance. If no new parameter exists, this function returns false, and the values of P and Tol are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepTools_TrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (BRepTools_TrsfModification::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRepTools_TrsfModification::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepTools_TrsfModification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepTools_TrsfModification::*)() const>(&BRepTools_TrsfModification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepTools_TrsfModification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepTools_NurbsConvertModification.hxx
// ./opencascade/BRepTools_ReShape.hxx
// ./opencascade/BRepTools_GTrsfModification.hxx
// ./opencascade/BRepTools_ShapeSet.hxx
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
// ./opencascade/BRepTools.hxx
// ./opencascade/BRepTools_Modifier.hxx
// ./opencascade/BRepTools_History.hxx
// ./opencascade/BRepTools_Substitution.hxx
// ./opencascade/BRepTools_Quilt.hxx
// ./opencascade/BRepTools_TrsfModification.hxx
// ./opencascade/BRepTools_Modification.hxx
// ./opencascade/BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx
// ./opencascade/BRepTools_WireExplorer.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, TColgp_SequenceOfPnt2d, TopTools_ShapeMapHasher>(m,"BRepTools_MapOfVertexPnt2d");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
