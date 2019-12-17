
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <BinTools_LocationSet.hxx>
#include <TopoDS_Shape.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_SurfaceSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>

// module includes
#include <BinTools.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <BinTools_LocationSetPtr.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_SurfaceSet.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinTools"));


//Python trampoline classes

// classes


    static_cast<py::class_<BinTools_SurfaceSet ,std::unique_ptr<BinTools_SurfaceSet>  >>(m.attr("BinTools_SurfaceSet"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BinTools_SurfaceSet::*)() ) static_cast<void (BinTools_SurfaceSet::*)() >(&BinTools_SurfaceSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (BinTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<Standard_Integer (BinTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) >(&BinTools_SurfaceSet::Add),
             R"#(Incorporate a new Surface in the set and returns its index.)#"  , py::arg("S"))
        .def("Surface",
             (opencascade::handle<Geom_Surface> (BinTools_SurfaceSet::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_Surface> (BinTools_SurfaceSet::*)( const Standard_Integer  ) const>(&BinTools_SurfaceSet::Surface),
             R"#(Returns the Surface of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (BinTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) const) static_cast<Standard_Integer (BinTools_SurfaceSet::*)( const opencascade::handle<Geom_Surface> &  ) const>(&BinTools_SurfaceSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("S"))
        .def("Write",
             (void (BinTools_SurfaceSet::*)( std::ostream &  ) const) static_cast<void (BinTools_SurfaceSet::*)( std::ostream &  ) const>(&BinTools_SurfaceSet::Write),
             R"#(Writes the content of me on the stream <OS> in binary format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (BinTools_SurfaceSet::*)( std::istream &  ) ) static_cast<void (BinTools_SurfaceSet::*)( std::istream &  ) >(&BinTools_SurfaceSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def_static("WriteSurface_s",
                    (void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Surface> & ,  std::ostream &  ) >(&BinTools_SurfaceSet::WriteSurface),
                    R"#(Dumps the surface on the stream in binary format that can be read back.)#"  , py::arg("S"),  py::arg("OS"))
        .def_static("ReadSurface_s",
                    (Standard_IStream & (*)( std::istream & ,  opencascade::handle<Geom_Surface> &  ) ) static_cast<Standard_IStream & (*)( std::istream & ,  opencascade::handle<Geom_Surface> &  ) >(&BinTools_SurfaceSet::ReadSurface),
                    R"#(Reads the surface from the stream. The surface is assumed to have been written with the Write method.)#"  , py::arg("IS"),  py::arg("S"))
;


    static_cast<py::class_<BinTools_ShapeSet ,std::unique_ptr<BinTools_ShapeSet>  >>(m.attr("BinTools_ShapeSet"))
        .def(py::init< const Standard_Boolean >()  , py::arg("isWithTriangles")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("IsWithTriangles",
             (Standard_Boolean (BinTools_ShapeSet::*)() const) static_cast<Standard_Boolean (BinTools_ShapeSet::*)() const>(&BinTools_ShapeSet::IsWithTriangles),
             R"#(Return true if shape should be stored with triangles.)#" )
        .def("SetWithTriangles",
             (void (BinTools_ShapeSet::*)( const Standard_Boolean  ) ) static_cast<void (BinTools_ShapeSet::*)( const Standard_Boolean  ) >(&BinTools_ShapeSet::SetWithTriangles),
             R"#(Define if shape will be stored with triangles. Ignored (always written) if face defines only triangulation (no surface).)#"  , py::arg("isWithTriangles"))
        .def("SetFormatNb",
             (void (BinTools_ShapeSet::*)( const Standard_Integer  ) ) static_cast<void (BinTools_ShapeSet::*)( const Standard_Integer  ) >(&BinTools_ShapeSet::SetFormatNb),
             R"#(None)#"  , py::arg("theFormatNb"))
        .def("FormatNb",
             (Standard_Integer (BinTools_ShapeSet::*)() const) static_cast<Standard_Integer (BinTools_ShapeSet::*)() const>(&BinTools_ShapeSet::FormatNb),
             R"#(two formats available for the moment: First: does not write CurveOnSurface UV Points into the file on reading calls Check() method. Second: stores CurveOnSurface UV Points. On reading format is recognized from Version string.)#" )
        .def("Clear",
             (void (BinTools_ShapeSet::*)() ) static_cast<void (BinTools_ShapeSet::*)() >(&BinTools_ShapeSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (BinTools_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Integer (BinTools_ShapeSet::*)( const TopoDS_Shape &  ) >(&BinTools_ShapeSet::Add),
             R"#(Stores <S> and its sub-shape. Returns the index of <S>. The method AddGeometry is called on each sub-shape.)#"  , py::arg("S"))
        .def("Shape",
             (const TopoDS_Shape & (BinTools_ShapeSet::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Shape & (BinTools_ShapeSet::*)( const Standard_Integer  ) const>(&BinTools_ShapeSet::Shape),
             R"#(Returns the sub-shape of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (BinTools_ShapeSet::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (BinTools_ShapeSet::*)( const TopoDS_Shape &  ) const>(&BinTools_ShapeSet::Index),
             R"#(Returns the index of <S>.)#"  , py::arg("S"))
        .def("Locations",
             (const BinTools_LocationSet & (BinTools_ShapeSet::*)() const) static_cast<const BinTools_LocationSet & (BinTools_ShapeSet::*)() const>(&BinTools_ShapeSet::Locations),
             R"#(None)#" )
        .def("ChangeLocations",
             (BinTools_LocationSet & (BinTools_ShapeSet::*)() ) static_cast<BinTools_LocationSet & (BinTools_ShapeSet::*)() >(&BinTools_ShapeSet::ChangeLocations),
             R"#(None)#" )
        .def("NbShapes",
             (Standard_Integer (BinTools_ShapeSet::*)() const) static_cast<Standard_Integer (BinTools_ShapeSet::*)() const>(&BinTools_ShapeSet::NbShapes),
             R"#(Returns number of shapes read from file.)#" )
        .def("Write",
             (void (BinTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BinTools_ShapeSet::*)( std::ostream &  ) const>(&BinTools_ShapeSet::Write),
             R"#(Writes the content of me on the stream <OS> in binary format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (BinTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BinTools_ShapeSet::*)( std::istream &  ) >(&BinTools_ShapeSet::Read),
             R"#(Reads the content of me from the binary stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def("Write",
             (void (BinTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const) static_cast<void (BinTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const>(&BinTools_ShapeSet::Write),
             R"#(Writes on <OS> the shape <S>. Writes the orientation, the index of the TShape and the index of the Location.)#"  , py::arg("S"),  py::arg("OS"))
        .def("WriteGeometry",
             (void (BinTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BinTools_ShapeSet::*)( std::ostream &  ) const>(&BinTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of me on the stream <OS> in a binary format that can be read back by Read.)#"  , py::arg("OS"))
        .def("ReadGeometry",
             (void (BinTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BinTools_ShapeSet::*)( std::istream &  ) >(&BinTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("Read",
             (void (BinTools_ShapeSet::*)( TopoDS_Shape & ,  std::istream & ,  const Standard_Integer  ) const) static_cast<void (BinTools_ShapeSet::*)( TopoDS_Shape & ,  std::istream & ,  const Standard_Integer  ) const>(&BinTools_ShapeSet::Read),
             R"#(Reads from <IS> a shape and returns it in S. <NbShapes> is the number of tshapes in the set.)#"  , py::arg("S"),  py::arg("IS"),  py::arg("NbShapes"))
        .def("WriteGeometry",
             (void (BinTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const) static_cast<void (BinTools_ShapeSet::*)( const TopoDS_Shape & ,  std::ostream &  ) const>(&BinTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of <S> on the stream <OS> in a binary format that can be read back by Read.)#"  , py::arg("S"),  py::arg("OS"))
        .def("ReadGeometry",
             (void (BinTools_ShapeSet::*)( const TopAbs_ShapeEnum ,  std::istream & ,  TopoDS_Shape &  ) ) static_cast<void (BinTools_ShapeSet::*)( const TopAbs_ShapeEnum ,  std::istream & ,  TopoDS_Shape &  ) >(&BinTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of a shape of type <T> from the stream <IS> and returns it in <S>.)#"  , py::arg("T"),  py::arg("IS"),  py::arg("S"))
        .def("AddGeometry",
             (void (BinTools_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (BinTools_ShapeSet::*)( const TopoDS_Shape &  ) >(&BinTools_ShapeSet::AddGeometry),
             R"#(Stores the goemetry of <S>.)#"  , py::arg("S"))
        .def("AddShapes",
             (void (BinTools_ShapeSet::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BinTools_ShapeSet::*)( TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BinTools_ShapeSet::AddShapes),
             R"#(Inserts the shape <S2> in the shape <S1>.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("ReadPolygon3D",
             (void (BinTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BinTools_ShapeSet::*)( std::istream &  ) >(&BinTools_ShapeSet::ReadPolygon3D),
             R"#(Reads the 3d polygons of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("WritePolygon3D",
             (void (BinTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BinTools_ShapeSet::*)( std::ostream &  ) const>(&BinTools_ShapeSet::WritePolygon3D),
             R"#(Writes the 3d polygons on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("ReadTriangulation",
             (void (BinTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BinTools_ShapeSet::*)( std::istream &  ) >(&BinTools_ShapeSet::ReadTriangulation),
             R"#(Reads the triangulation of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("WriteTriangulation",
             (void (BinTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BinTools_ShapeSet::*)( std::ostream &  ) const>(&BinTools_ShapeSet::WriteTriangulation),
             R"#(Writes the triangulation on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("ReadPolygonOnTriangulation",
             (void (BinTools_ShapeSet::*)( std::istream &  ) ) static_cast<void (BinTools_ShapeSet::*)( std::istream &  ) >(&BinTools_ShapeSet::ReadPolygonOnTriangulation),
             R"#(Reads the polygons on triangulation of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("WritePolygonOnTriangulation",
             (void (BinTools_ShapeSet::*)( std::ostream &  ) const) static_cast<void (BinTools_ShapeSet::*)( std::ostream &  ) const>(&BinTools_ShapeSet::WritePolygonOnTriangulation),
             R"#(Writes the polygons on triangulation on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
;


    static_cast<py::class_<BinTools_Curve2dSet ,std::unique_ptr<BinTools_Curve2dSet>  >>(m.attr("BinTools_Curve2dSet"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BinTools_Curve2dSet::*)() ) static_cast<void (BinTools_Curve2dSet::*)() >(&BinTools_Curve2dSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (BinTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_Integer (BinTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&BinTools_Curve2dSet::Add),
             R"#(Incorporate a new Curve in the set and returns its index.)#"  , py::arg("C"))
        .def("Curve2d",
             (opencascade::handle<Geom2d_Curve> (BinTools_Curve2dSet::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_Curve> (BinTools_Curve2dSet::*)( const Standard_Integer  ) const>(&BinTools_Curve2dSet::Curve2d),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (BinTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) const) static_cast<Standard_Integer (BinTools_Curve2dSet::*)( const opencascade::handle<Geom2d_Curve> &  ) const>(&BinTools_Curve2dSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("C"))
        .def("Write",
             (void (BinTools_Curve2dSet::*)( std::ostream &  ) const) static_cast<void (BinTools_Curve2dSet::*)( std::ostream &  ) const>(&BinTools_Curve2dSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (BinTools_Curve2dSet::*)( std::istream &  ) ) static_cast<void (BinTools_Curve2dSet::*)( std::istream &  ) >(&BinTools_Curve2dSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def_static("WriteCurve2d_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  std::ostream &  ) >(&BinTools_Curve2dSet::WriteCurve2d),
                    R"#(Dumps the curve on the binary stream, that can be read back.)#"  , py::arg("C"),  py::arg("OS"))
        .def_static("ReadCurve2d_s",
                    (Standard_IStream & (*)( std::istream & ,  opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_IStream & (*)( std::istream & ,  opencascade::handle<Geom2d_Curve> &  ) >(&BinTools_Curve2dSet::ReadCurve2d),
                    R"#(Reads the curve from the stream. The curve is assumed to have been written with the Write method.)#"  , py::arg("IS"),  py::arg("C"))
;


    static_cast<py::class_<BinTools_LocationSet ,std::unique_ptr<BinTools_LocationSet>  >>(m.attr("BinTools_LocationSet"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BinTools_LocationSet::*)() ) static_cast<void (BinTools_LocationSet::*)() >(&BinTools_LocationSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (BinTools_LocationSet::*)( const TopLoc_Location &  ) ) static_cast<Standard_Integer (BinTools_LocationSet::*)( const TopLoc_Location &  ) >(&BinTools_LocationSet::Add),
             R"#(Incorporate a new Location in the set and returns its index.)#"  , py::arg("L"))
        .def("Location",
             (const TopLoc_Location & (BinTools_LocationSet::*)( const Standard_Integer  ) const) static_cast<const TopLoc_Location & (BinTools_LocationSet::*)( const Standard_Integer  ) const>(&BinTools_LocationSet::Location),
             R"#(Returns the location of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (BinTools_LocationSet::*)( const TopLoc_Location &  ) const) static_cast<Standard_Integer (BinTools_LocationSet::*)( const TopLoc_Location &  ) const>(&BinTools_LocationSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("L"))
        .def("NbLocations",
             (Standard_Integer (BinTools_LocationSet::*)() const) static_cast<Standard_Integer (BinTools_LocationSet::*)() const>(&BinTools_LocationSet::NbLocations),
             R"#(Returns number of locations.)#" )
        .def("Write",
             (void (BinTools_LocationSet::*)( std::ostream &  ) const) static_cast<void (BinTools_LocationSet::*)( std::ostream &  ) const>(&BinTools_LocationSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (BinTools_LocationSet::*)( std::istream &  ) ) static_cast<void (BinTools_LocationSet::*)( std::istream &  ) >(&BinTools_LocationSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
;


    static_cast<py::class_<BinTools_CurveSet ,std::unique_ptr<BinTools_CurveSet>  >>(m.attr("BinTools_CurveSet"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BinTools_CurveSet::*)() ) static_cast<void (BinTools_CurveSet::*)() >(&BinTools_CurveSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (BinTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<Standard_Integer (BinTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) >(&BinTools_CurveSet::Add),
             R"#(Incorporate a new Curve in the set and returns its index.)#"  , py::arg("C"))
        .def("Curve",
             (opencascade::handle<Geom_Curve> (BinTools_CurveSet::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_Curve> (BinTools_CurveSet::*)( const Standard_Integer  ) const>(&BinTools_CurveSet::Curve),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (BinTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) const) static_cast<Standard_Integer (BinTools_CurveSet::*)( const opencascade::handle<Geom_Curve> &  ) const>(&BinTools_CurveSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("C"))
        .def("Write",
             (void (BinTools_CurveSet::*)( std::ostream &  ) const) static_cast<void (BinTools_CurveSet::*)( std::ostream &  ) const>(&BinTools_CurveSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (BinTools_CurveSet::*)( std::istream &  ) ) static_cast<void (BinTools_CurveSet::*)( std::istream &  ) >(&BinTools_CurveSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def_static("WriteCurve_s",
                    (void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Curve> & ,  std::ostream &  ) >(&BinTools_CurveSet::WriteCurve),
                    R"#(Dumps the curve on the stream in binary format that can be read back.)#"  , py::arg("C"),  py::arg("OS"))
        .def_static("ReadCurve_s",
                    (Standard_IStream & (*)( std::istream & ,  opencascade::handle<Geom_Curve> &  ) ) static_cast<Standard_IStream & (*)( std::istream & ,  opencascade::handle<Geom_Curve> &  ) >(&BinTools_CurveSet::ReadCurve),
                    R"#(Reads the curve from the stream. The curve is assumed to have been written with the Write method)#"  , py::arg("IS"),  py::arg("C"))
;

    register_default_constructor<BinTools ,std::unique_ptr<BinTools>>(m,"BinTools");

    static_cast<py::class_<BinTools ,std::unique_ptr<BinTools>  >>(m.attr("BinTools"))
        .def_static("PutReal_s",
                    (Standard_OStream & (*)( std::ostream & ,  const Standard_Real  ) ) static_cast<Standard_OStream & (*)( std::ostream & ,  const Standard_Real  ) >(&BinTools::PutReal),
                    R"#(None)#"  , py::arg("OS"),  py::arg("theValue"))
        .def_static("PutInteger_s",
                    (Standard_OStream & (*)( std::ostream & ,  const Standard_Integer  ) ) static_cast<Standard_OStream & (*)( std::ostream & ,  const Standard_Integer  ) >(&BinTools::PutInteger),
                    R"#(None)#"  , py::arg("OS"),  py::arg("theValue"))
        .def_static("PutBool_s",
                    (Standard_OStream & (*)( std::ostream & ,  const Standard_Boolean  ) ) static_cast<Standard_OStream & (*)( std::ostream & ,  const Standard_Boolean  ) >(&BinTools::PutBool),
                    R"#(None)#"  , py::arg("OS"),  py::arg("theValue"))
        .def_static("PutExtChar_s",
                    (Standard_OStream & (*)( std::ostream & ,  const Standard_ExtCharacter  ) ) static_cast<Standard_OStream & (*)( std::ostream & ,  const Standard_ExtCharacter  ) >(&BinTools::PutExtChar),
                    R"#(None)#"  , py::arg("OS"),  py::arg("theValue"))
        .def_static("GetReal_s",
                    (Standard_IStream & (*)( std::istream & ,  Standard_Real &  ) ) static_cast<Standard_IStream & (*)( std::istream & ,  Standard_Real &  ) >(&BinTools::GetReal),
                    R"#(None)#"  , py::arg("IS"),  py::arg("theValue"))
        .def_static("GetInteger_s",
                    (Standard_IStream & (*)( std::istream & ,  Standard_Integer &  ) ) static_cast<Standard_IStream & (*)( std::istream & ,  Standard_Integer &  ) >(&BinTools::GetInteger),
                    R"#(None)#"  , py::arg("IS"),  py::arg("theValue"))
        .def_static("GetBool_s",
                    (Standard_IStream & (*)( std::istream & ,  Standard_Boolean &  ) ) static_cast<Standard_IStream & (*)( std::istream & ,  Standard_Boolean &  ) >(&BinTools::GetBool),
                    R"#(None)#"  , py::arg("IS"),  py::arg("theValue"))
        .def_static("GetExtChar_s",
                    (Standard_IStream & (*)( std::istream & ,  Standard_ExtCharacter &  ) ) static_cast<Standard_IStream & (*)( std::istream & ,  Standard_ExtCharacter &  ) >(&BinTools::GetExtChar),
                    R"#(None)#"  , py::arg("IS"),  py::arg("theValue"))
        .def_static("Write_s",
                    (void (*)( const TopoDS_Shape & ,  std::ostream &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  std::ostream &  ) >(&BinTools::Write),
                    R"#(Writes <theShape> on <theStream> in binary format.)#"  , py::arg("theShape"),  py::arg("theStream"))
        .def_static("Read_s",
                    (void (*)( TopoDS_Shape & ,  std::istream &  ) ) static_cast<void (*)( TopoDS_Shape & ,  std::istream &  ) >(&BinTools::Read),
                    R"#(Reads a shape from <theStream> and returns it in <theShape>.)#"  , py::arg("theShape"),  py::arg("theStream"))
        .def_static("Write_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_CString  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_CString  ) >(&BinTools::Write),
                    R"#(Writes <theShape> in <theFile>.)#"  , py::arg("theShape"),  py::arg("theFile"))
        .def_static("Read_s",
                    (Standard_Boolean (*)( TopoDS_Shape & ,  const Standard_CString  ) ) static_cast<Standard_Boolean (*)( TopoDS_Shape & ,  const Standard_CString  ) >(&BinTools::Read),
                    R"#(Reads a shape from <theFile> and returns it in <theShape>.)#"  , py::arg("theShape"),  py::arg("theFile"))
;

// functions
// ./opencascade/BinTools_SurfaceSet.hxx
// ./opencascade/BinTools_LocationSetPtr.hxx
// ./opencascade/BinTools_LocationSet.hxx
// ./opencascade/BinTools_ShapeSet.hxx
// ./opencascade/BinTools.hxx
// ./opencascade/BinTools_Curve2dSet.hxx
// ./opencascade/BinTools_CurveSet.hxx

// operators

// register typdefs
// ./opencascade/BinTools_SurfaceSet.hxx
// ./opencascade/BinTools_LocationSetPtr.hxx
// ./opencascade/BinTools_LocationSet.hxx
// ./opencascade/BinTools_ShapeSet.hxx
// ./opencascade/BinTools.hxx
// ./opencascade/BinTools_Curve2dSet.hxx
// ./opencascade/BinTools_CurveSet.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
