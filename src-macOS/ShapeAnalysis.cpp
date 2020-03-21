
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopoDS_Compound.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Bnd_Box2d.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeAnalysis_Geom.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeAnalysis_WireVertex.hxx>
#include <ShapeAnalysis_CheckSmallFace.hxx>
#include <ShapeAnalysis_Shell.hxx>
#include <ShapeAnalysis_ShapeTolerance.hxx>
#include <ShapeAnalysis_ShapeContents.hxx>
#include <ShapeAnalysis_FreeBounds.hxx>
#include <ShapeAnalysis_FreeBoundData.hxx>
#include <ShapeAnalysis_FreeBoundsProperties.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_XY.hxx>

// module includes
#include <ShapeAnalysis.hxx>
#include <ShapeAnalysis_BoxBndTree.hxx>
#include <ShapeAnalysis_CheckSmallFace.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx>
#include <ShapeAnalysis_DataMapOfShapeListOfReal.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeAnalysis_FreeBoundData.hxx>
#include <ShapeAnalysis_FreeBounds.hxx>
#include <ShapeAnalysis_FreeBoundsProperties.hxx>
#include <ShapeAnalysis_Geom.hxx>
#include <ShapeAnalysis_HSequenceOfFreeBounds.hxx>
#include <ShapeAnalysis_SequenceOfFreeBounds.hxx>
#include <ShapeAnalysis_ShapeContents.hxx>
#include <ShapeAnalysis_ShapeTolerance.hxx>
#include <ShapeAnalysis_Shell.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeAnalysis_WireVertex.hxx>

// template related includes
// ./opencascade/ShapeAnalysis_SequenceOfFreeBounds.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeAnalysis_BoxBndTree.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeAnalysis(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeAnalysis"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ShapeAnalysis , shared_ptr<ShapeAnalysis>>(m,"ShapeAnalysis");

    static_cast<py::class_<ShapeAnalysis , shared_ptr<ShapeAnalysis> >>(m.attr("ShapeAnalysis"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_CheckSmallFace , shared_ptr<ShapeAnalysis_CheckSmallFace> >>(m.attr("ShapeAnalysis_CheckSmallFace"))
    // constructors
    // custom constructors
    // methods
        .def("Status",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::Status),
             R"#(Returns the status of last call to Perform() ShapeExtend_OK : face was OK, nothing done ShapeExtend_DONE1: some wires are fixed ShapeExtend_DONE2: orientation of wires fixed ShapeExtend_DONE3: missing seam added ShapeExtend_DONE4: small area wire removed ShapeExtend_DONE5: natural bounds added ShapeExtend_FAIL1: some fails during fixing wires ShapeExtend_FAIL2: cannot fix orientation of wires ShapeExtend_FAIL3: cannot add missing seam ShapeExtend_FAIL4: cannot remove small area wire)#"  , py::arg("status"))
        .def("SetTolerance",
             (void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real ) >(&ShapeAnalysis_CheckSmallFace::SetTolerance),
             R"#(Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Sets a fixed MaxTolerance to check small face Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Unset fixed tolerance, comes back to local tolerance zones Unset fixed tolerance, comes back to local tolerance zones)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const) static_cast<Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const>(&ShapeAnalysis_CheckSmallFace::Tolerance),
             R"#(Returns the tolerance to check small faces, negative value if local tolerances zones are to be considered)#" )
        .def("StatusSpot",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusSpot),
             R"#(None)#"  , py::arg("status"))
        .def("StatusStrip",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusStrip),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPin",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusPin),
             R"#(None)#"  , py::arg("status"))
        .def("StatusTwisted",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusTwisted),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSplitVert",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusSplitVert),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinFace",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinFace),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinEdges",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinEdges),
             R"#(None)#"  , py::arg("status"))
        .def("Status",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::Status),
             R"#(Returns the status of last call to Perform() ShapeExtend_OK : face was OK, nothing done ShapeExtend_DONE1: some wires are fixed ShapeExtend_DONE2: orientation of wires fixed ShapeExtend_DONE3: missing seam added ShapeExtend_DONE4: small area wire removed ShapeExtend_DONE5: natural bounds added ShapeExtend_FAIL1: some fails during fixing wires ShapeExtend_FAIL2: cannot fix orientation of wires ShapeExtend_FAIL3: cannot add missing seam ShapeExtend_FAIL4: cannot remove small area wire)#"  , py::arg("status"))
        .def("SetTolerance",
             (void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real ) >(&ShapeAnalysis_CheckSmallFace::SetTolerance),
             R"#(Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Sets a fixed MaxTolerance to check small face Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Unset fixed tolerance, comes back to local tolerance zones Unset fixed tolerance, comes back to local tolerance zones)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const) static_cast<Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const>(&ShapeAnalysis_CheckSmallFace::Tolerance),
             R"#(Returns the tolerance to check small faces, negative value if local tolerances zones are to be considered)#" )
        .def("StatusSpot",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusSpot),
             R"#(None)#"  , py::arg("status"))
        .def("StatusStrip",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusStrip),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPin",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusPin),
             R"#(None)#"  , py::arg("status"))
        .def("StatusTwisted",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusTwisted),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinFace",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinFace),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinEdges",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinEdges),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSplitVert",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_CheckSmallFace::StatusSplitVert),
             R"#(None)#"  , py::arg("status"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<ShapeAnalysis_Curve , shared_ptr<ShapeAnalysis_Curve>>(m,"ShapeAnalysis_Curve");

    static_cast<py::class_<ShapeAnalysis_Curve , shared_ptr<ShapeAnalysis_Curve> >>(m.attr("ShapeAnalysis_Curve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_Edge , shared_ptr<ShapeAnalysis_Edge> >>(m.attr("ShapeAnalysis_Edge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_FreeBoundData ,opencascade::handle<ShapeAnalysis_FreeBoundData> , Standard_Transient>>(m.attr("ShapeAnalysis_FreeBoundData"))
    // constructors
    // custom constructors
    // methods
        .def("SetFreeBound",
             (void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire & ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire & ) >(&ShapeAnalysis_FreeBoundData::SetFreeBound),
             R"#(Sets contour)#"  , py::arg("freebound"))
        .def("SetArea",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetArea),
             R"#(Sets area of the contour)#"  , py::arg("area"))
        .def("SetPerimeter",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetPerimeter),
             R"#(Sets perimeter of the contour)#"  , py::arg("perimeter"))
        .def("SetRatio",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetRatio),
             R"#(Sets ratio of average length to average width of the contour)#"  , py::arg("ratio"))
        .def("SetWidth",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetWidth),
             R"#(Sets average width of the contour)#"  , py::arg("width"))
        .def("FreeBound",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::FreeBound),
             R"#(Returns contour)#" )
        .def("Area",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Area),
             R"#(Returns area of the contour)#" )
        .def("Perimeter",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Perimeter),
             R"#(Returns perimeter of the contour)#" )
        .def("Ratio",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Ratio),
             R"#(Returns ratio of average length to average width of the contour)#" )
        .def("Width",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Width),
             R"#(Returns average width of the contour)#" )
        .def("NbNotches",
             (Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::NbNotches),
             R"#(Returns number of notches on the contour)#" )
        .def("Notches",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Notches),
             R"#(Returns sequence of notches on the contour)#" )
        .def("Notch",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer ) const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer ) const>(&ShapeAnalysis_FreeBoundData::Notch),
             R"#(Returns notch on the contour)#"  , py::arg("index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_FreeBoundData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::DynamicType),
             R"#(None)#" )
        .def("SetFreeBound",
             (void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire & ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire & ) >(&ShapeAnalysis_FreeBoundData::SetFreeBound),
             R"#(Sets contour)#"  , py::arg("freebound"))
        .def("SetArea",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetArea),
             R"#(Sets area of the contour)#"  , py::arg("area"))
        .def("SetPerimeter",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetPerimeter),
             R"#(Sets perimeter of the contour)#"  , py::arg("perimeter"))
        .def("SetRatio",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetRatio),
             R"#(Sets ratio of average length to average width of the contour)#"  , py::arg("ratio"))
        .def("SetWidth",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real ) >(&ShapeAnalysis_FreeBoundData::SetWidth),
             R"#(Sets average width of the contour)#"  , py::arg("width"))
        .def("FreeBound",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::FreeBound),
             R"#(Returns contour)#" )
        .def("Area",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Area),
             R"#(Returns area of the contour)#" )
        .def("Perimeter",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Perimeter),
             R"#(Returns perimeter of the contour)#" )
        .def("Ratio",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Ratio),
             R"#(Returns ratio of average length to average width of the contour)#" )
        .def("Width",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Width),
             R"#(Returns average width of the contour)#" )
        .def("NbNotches",
             (Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::NbNotches),
             R"#(Returns number of notches on the contour)#" )
        .def("Notches",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Notches),
             R"#(Returns sequence of notches on the contour)#" )
        .def("Notch",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer ) const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer ) const>(&ShapeAnalysis_FreeBoundData::Notch),
             R"#(Returns notch on the contour)#"  , py::arg("index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_FreeBoundData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_FreeBounds , shared_ptr<ShapeAnalysis_FreeBounds> >>(m.attr("ShapeAnalysis_FreeBounds"))
    // constructors
    // custom constructors
    // methods
        .def("GetClosedWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetClosedWires),
             R"#(Returns compound of closed wires out of free edges.)#" )
        .def("GetOpenWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetOpenWires),
             R"#(Returns compound of open wires out of free edges.)#" )
        .def("GetClosedWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetClosedWires),
             R"#(Returns compound of closed wires out of free edges.)#" )
        .def("GetOpenWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetOpenWires),
             R"#(Returns compound of open wires out of free edges.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_FreeBoundsProperties , shared_ptr<ShapeAnalysis_FreeBoundsProperties> >>(m.attr("ShapeAnalysis_FreeBoundsProperties"))
    // constructors
    // custom constructors
    // methods
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::IsLoaded),
             R"#(Returns True if shape is loaded)#" )
        .def("Shape",
             (TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Shape),
             R"#(Returns shape)#" )
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Tolerance),
             R"#(Returns tolerance)#" )
        .def("NbFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbFreeBounds),
             R"#(Returns number of free bounds)#" )
        .def("NbClosedFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbClosedFreeBounds),
             R"#(Returns number of closed free bounds)#" )
        .def("NbOpenFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbOpenFreeBounds),
             R"#(Returns number of open free bounds)#" )
        .def("ClosedFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBounds),
             R"#(Returns all closed free bounds)#" )
        .def("OpenFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBounds),
             R"#(Returns all open free bounds)#" )
        .def("ClosedFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBound),
             R"#(Returns properties of closed free bound specified by its rank number)#"  , py::arg("index"))
        .def("OpenFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBound),
             R"#(Returns properties of open free bound specified by its rank number)#"  , py::arg("index"))
        .def("Shape",
             (TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Shape),
             R"#(Returns shape)#" )
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::IsLoaded),
             R"#(Returns True if shape is loaded)#" )
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Tolerance),
             R"#(Returns tolerance)#" )
        .def("NbFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbFreeBounds),
             R"#(Returns number of free bounds)#" )
        .def("NbClosedFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbClosedFreeBounds),
             R"#(Returns number of closed free bounds)#" )
        .def("NbOpenFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbOpenFreeBounds),
             R"#(Returns number of open free bounds)#" )
        .def("ClosedFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBounds),
             R"#(Returns all closed free bounds)#" )
        .def("OpenFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBounds),
             R"#(Returns all open free bounds)#" )
        .def("ClosedFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBound),
             R"#(Returns properties of closed free bound specified by its rank number)#"  , py::arg("index"))
        .def("OpenFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer ) const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBound),
             R"#(Returns properties of open free bound specified by its rank number)#"  , py::arg("index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<ShapeAnalysis_Geom , shared_ptr<ShapeAnalysis_Geom>>(m,"ShapeAnalysis_Geom");

    static_cast<py::class_<ShapeAnalysis_Geom , shared_ptr<ShapeAnalysis_Geom> >>(m.attr("ShapeAnalysis_Geom"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_HSequenceOfFreeBounds ,opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> , ShapeAnalysis_SequenceOfFreeBounds, Standard_Transient>>(m.attr("ShapeAnalysis_HSequenceOfFreeBounds"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const) static_cast<const ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const>(&ShapeAnalysis_HSequenceOfFreeBounds::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (ShapeAnalysis_HSequenceOfFreeBounds::*)(  const opencascade::handle<ShapeAnalysis_FreeBoundData> & ) ) static_cast<void (ShapeAnalysis_HSequenceOfFreeBounds::*)(  const opencascade::handle<ShapeAnalysis_FreeBoundData> & ) >(&ShapeAnalysis_HSequenceOfFreeBounds::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (ShapeAnalysis_HSequenceOfFreeBounds::*)( NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > & ) ) static_cast<void (ShapeAnalysis_HSequenceOfFreeBounds::*)( NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > & ) >(&ShapeAnalysis_HSequenceOfFreeBounds::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() ) static_cast<ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() >(&ShapeAnalysis_HSequenceOfFreeBounds::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const>(&ShapeAnalysis_HSequenceOfFreeBounds::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_HSequenceOfFreeBounds::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAnalysis_HSequenceOfFreeBounds::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_ShapeContents , shared_ptr<ShapeAnalysis_ShapeContents> >>(m.attr("ShapeAnalysis_ShapeContents"))
    // constructors
    // custom constructors
    // methods
        .def("ModifyBigSplineMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyBigSplineMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves has more than 8192 poles.)#" )
        .def("ModifyIndirectMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyIndirectMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on indirect surfaces)#" )
        .def("ModifyOffestSurfaceMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffestSurfaceMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on offset surfaces.)#" )
        .def("ModifyTrimmed3dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed3dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if ist 3D curves are trimmed curves)#" )
        .def("ModifyOffsetCurveMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffsetCurveMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves and pcurves are offest curves)#" )
        .def("ModifyTrimmed2dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed2dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its pcurves are trimmed curves)#" )
        .def("NbSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolids),
             R"#(None)#" )
        .def("NbShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbShells),
             R"#(None)#" )
        .def("NbFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaces),
             R"#(None)#" )
        .def("NbWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWires),
             R"#(None)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbEdges),
             R"#(None)#" )
        .def("NbVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbVertices),
             R"#(None)#" )
        .def("NbSolidsWithVoids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolidsWithVoids),
             R"#(None)#" )
        .def("NbBigSplines",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBigSplines),
             R"#(None)#" )
        .def("NbC0Surfaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Surfaces),
             R"#(None)#" )
        .def("NbC0Curves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Curves),
             R"#(None)#" )
        .def("NbOffsetSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetSurf),
             R"#(None)#" )
        .def("NbIndirectSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbIndirectSurf),
             R"#(None)#" )
        .def("NbOffsetCurves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetCurves),
             R"#(None)#" )
        .def("NbTrimmedCurve2d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve2d),
             R"#(None)#" )
        .def("NbTrimmedCurve3d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve3d),
             R"#(None)#" )
        .def("NbBSplibeSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBSplibeSurf),
             R"#(None)#" )
        .def("NbBezierSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBezierSurf),
             R"#(None)#" )
        .def("NbTrimSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimSurf),
             R"#(None)#" )
        .def("NbWireWitnSeam",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWitnSeam),
             R"#(None)#" )
        .def("NbWireWithSevSeams",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWithSevSeams),
             R"#(None)#" )
        .def("NbFaceWithSevWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaceWithSevWires),
             R"#(None)#" )
        .def("NbNoPCurve",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbNoPCurve),
             R"#(None)#" )
        .def("NbFreeFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeFaces),
             R"#(None)#" )
        .def("NbFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeWires),
             R"#(None)#" )
        .def("NbFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeEdges),
             R"#(None)#" )
        .def("NbSharedSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedSolids),
             R"#(None)#" )
        .def("NbSharedShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedShells),
             R"#(None)#" )
        .def("NbSharedFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFaces),
             R"#(None)#" )
        .def("NbSharedWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedWires),
             R"#(None)#" )
        .def("NbSharedFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeWires),
             R"#(None)#" )
        .def("NbSharedFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeEdges),
             R"#(None)#" )
        .def("NbSharedEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedEdges),
             R"#(None)#" )
        .def("NbSharedVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedVertices),
             R"#(None)#" )
        .def("BigSplineSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::BigSplineSec),
             R"#(None)#" )
        .def("IndirectSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::IndirectSec),
             R"#(None)#" )
        .def("OffsetSurfaceSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetSurfaceSec),
             R"#(None)#" )
        .def("Trimmed3dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed3dSec),
             R"#(None)#" )
        .def("OffsetCurveSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetCurveSec),
             R"#(None)#" )
        .def("Trimmed2dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed2dSec),
             R"#(None)#" )
        .def("NbSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolids),
             R"#(None)#" )
        .def("NbShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbShells),
             R"#(None)#" )
        .def("NbFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaces),
             R"#(None)#" )
        .def("NbWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWires),
             R"#(None)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbEdges),
             R"#(None)#" )
        .def("NbVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbVertices),
             R"#(None)#" )
        .def("NbSolidsWithVoids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolidsWithVoids),
             R"#(None)#" )
        .def("NbBigSplines",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBigSplines),
             R"#(None)#" )
        .def("NbC0Surfaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Surfaces),
             R"#(None)#" )
        .def("NbC0Curves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Curves),
             R"#(None)#" )
        .def("NbOffsetSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetSurf),
             R"#(None)#" )
        .def("NbIndirectSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbIndirectSurf),
             R"#(None)#" )
        .def("NbOffsetCurves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetCurves),
             R"#(None)#" )
        .def("NbTrimmedCurve2d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve2d),
             R"#(None)#" )
        .def("NbTrimmedCurve3d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve3d),
             R"#(None)#" )
        .def("NbBSplibeSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBSplibeSurf),
             R"#(None)#" )
        .def("NbBezierSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBezierSurf),
             R"#(None)#" )
        .def("NbTrimSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimSurf),
             R"#(None)#" )
        .def("NbWireWitnSeam",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWitnSeam),
             R"#(None)#" )
        .def("NbWireWithSevSeams",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWithSevSeams),
             R"#(None)#" )
        .def("NbFaceWithSevWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaceWithSevWires),
             R"#(None)#" )
        .def("NbNoPCurve",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbNoPCurve),
             R"#(None)#" )
        .def("NbFreeFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeFaces),
             R"#(None)#" )
        .def("NbFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeWires),
             R"#(None)#" )
        .def("NbFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeEdges),
             R"#(None)#" )
        .def("NbSharedSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedSolids),
             R"#(None)#" )
        .def("NbSharedShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedShells),
             R"#(None)#" )
        .def("NbSharedFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFaces),
             R"#(None)#" )
        .def("NbSharedWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedWires),
             R"#(None)#" )
        .def("NbSharedFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeWires),
             R"#(None)#" )
        .def("NbSharedFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeEdges),
             R"#(None)#" )
        .def("NbSharedEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedEdges),
             R"#(None)#" )
        .def("NbSharedVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedVertices),
             R"#(None)#" )
        .def("BigSplineSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::BigSplineSec),
             R"#(None)#" )
        .def("IndirectSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::IndirectSec),
             R"#(None)#" )
        .def("OffsetSurfaceSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetSurfaceSec),
             R"#(None)#" )
        .def("Trimmed3dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed3dSec),
             R"#(None)#" )
        .def("OffsetCurveSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetCurveSec),
             R"#(None)#" )
        .def("Trimmed2dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed2dSec),
             R"#(None)#" )
        .def("ModifyBigSplineMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyBigSplineMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves has more than 8192 poles.)#" )
        .def("ModifyIndirectMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyIndirectMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on indirect surfaces)#" )
        .def("ModifyOffestSurfaceMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffestSurfaceMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on offset surfaces.)#" )
        .def("ModifyTrimmed3dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed3dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if ist 3D curves are trimmed curves)#" )
        .def("ModifyOffsetCurveMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffsetCurveMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves and pcurves are offest curves)#" )
        .def("ModifyTrimmed2dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed2dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its pcurves are trimmed curves)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_ShapeTolerance , shared_ptr<ShapeAnalysis_ShapeTolerance> >>(m.attr("ShapeAnalysis_ShapeTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<ShapeAnalysis_Shell , shared_ptr<ShapeAnalysis_Shell>>(m,"ShapeAnalysis_Shell");

    static_cast<py::class_<ShapeAnalysis_Shell , shared_ptr<ShapeAnalysis_Shell> >>(m.attr("ShapeAnalysis_Shell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_Surface ,opencascade::handle<ShapeAnalysis_Surface> , Standard_Transient>>(m.attr("ShapeAnalysis_Surface"))
    // constructors
    // custom constructors
    // methods
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Surface),
             R"#(Returns a surface being analyzed)#" )
        .def("TrueAdaptor3d",
             (const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::TrueAdaptor3d),
             R"#(Returns the Adaptor (may be Null if method Adaptor() was not called))#" )
        .def("Gap",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Gap),
             R"#(Returns 3D distance found by one of the following methods. IsDegenerated, DegeneratedValues, ProjectDegenerated (distance between 3D point and found or last (if not found) singularity), IsUClosed, IsVClosed (minimum value of precision to consider the surface to be closed), ValueOfUV (distance between 3D point and found solution).)#" )
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real , const Standard_Real ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real , const Standard_Real ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3D point specified by parameters in surface parametrical space)#"  , py::arg("u"),  py::arg("v"))
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3d point specified by a point in surface parametrical space)#"  , py::arg("p2d"))
        .def("UCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::UCloseVal),
             R"#(Returns minimum value to consider the surface as U-closed)#" )
        .def("VCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::VCloseVal),
             R"#(Returns minimum value to consider the surface as V-closed)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::DynamicType),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Surface),
             R"#(Returns a surface being analyzed)#" )
        .def("TrueAdaptor3d",
             (const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::TrueAdaptor3d),
             R"#(Returns the Adaptor (may be Null if method Adaptor() was not called))#" )
        .def("Gap",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Gap),
             R"#(Returns 3D distance found by one of the following methods. IsDegenerated, DegeneratedValues, ProjectDegenerated (distance between 3D point and found or last (if not found) singularity), IsUClosed, IsVClosed (minimum value of precision to consider the surface to be closed), ValueOfUV (distance between 3D point and found solution).)#" )
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real , const Standard_Real ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real , const Standard_Real ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3D point specified by parameters in surface parametrical space)#"  , py::arg("u"),  py::arg("v"))
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3d point specified by a point in surface parametrical space)#"  , py::arg("p2d"))
        .def("UCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::UCloseVal),
             R"#(Returns minimum value to consider the surface as U-closed)#" )
        .def("VCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::VCloseVal),
             R"#(Returns minimum value to consider the surface as V-closed)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( ShapeAnalysis_Surface &self   ){ Standard_Real  ufirst; Standard_Real  ulast; Standard_Real  vfirst; Standard_Real  vlast; self.Bounds(ufirst,ulast,vfirst,vlast); return std::make_tuple(ufirst,ulast,vfirst,vlast); },
             R"#(Returns the bounds of the surface (from Bounds from Surface, but buffered))#" )
        .def("Bounds",
             []( ShapeAnalysis_Surface &self   ){ Standard_Real  ufirst; Standard_Real  ulast; Standard_Real  vfirst; Standard_Real  vlast; self.Bounds(ufirst,ulast,vfirst,vlast); return std::make_tuple(ufirst,ulast,vfirst,vlast); },
             R"#(Returns the bounds of the surface (from Bounds from Surface, but buffered))#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_Surface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_TransferParameters ,opencascade::handle<ShapeAnalysis_TransferParameters> , Standard_Transient>>(m.attr("ShapeAnalysis_TransferParameters"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeAnalysis_TransferParameters::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (ShapeAnalysis_TransferParameters::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&ShapeAnalysis_TransferParameters::Init),
             R"#(Initialize a tool with edge and face)#"  , py::arg("E"),  py::arg("F"))
        .def("Perform",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParameters::*)( const opencascade::handle<TColStd_HSequenceOfReal> & , const Standard_Boolean ) ) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParameters::*)( const opencascade::handle<TColStd_HSequenceOfReal> & , const Standard_Boolean ) >(&ShapeAnalysis_TransferParameters::Perform),
             R"#(Transfers parameters given by sequence Params from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Params"),  py::arg("To2d"))
        .def("Perform",
             (Standard_Real (ShapeAnalysis_TransferParameters::*)( const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Real (ShapeAnalysis_TransferParameters::*)( const Standard_Real , const Standard_Boolean ) >(&ShapeAnalysis_TransferParameters::Perform),
             R"#(Transfers parameter given by sequence Params from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Param"),  py::arg("To2d"))
        .def("TransferRange",
             (void (ShapeAnalysis_TransferParameters::*)( TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (ShapeAnalysis_TransferParameters::*)( TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&ShapeAnalysis_TransferParameters::TransferRange),
             R"#(Recomputes range of curves from NewEdge. If Is2d equals True parameters are recomputed by curve2d else by curve3d.)#"  , py::arg("newEdge"),  py::arg("prevPar"),  py::arg("currPar"),  py::arg("To2d"))
        .def("IsSameRange",
             (Standard_Boolean (ShapeAnalysis_TransferParameters::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_TransferParameters::*)() const>(&ShapeAnalysis_TransferParameters::IsSameRange),
             R"#(Returns True if 3d curve of edge and pcurve are SameRange (in default implementation, if myScale == 1 and myShift == 0))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParameters::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParameters::*)() const>(&ShapeAnalysis_TransferParameters::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_TransferParameters::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_Wire ,opencascade::handle<ShapeAnalysis_Wire> , Standard_Transient>>(m.attr("ShapeAnalysis_Wire"))
    // constructors
    // custom constructors
    // methods
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsLoaded),
             R"#(Returns True if wire is loaded and has number of edges >0)#" )
        .def("IsReady",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsReady),
             R"#(Returns True if IsLoaded and underlying face is not null)#" )
        .def("Precision",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Precision),
             R"#(Returns the value of precision)#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::WireData),
             R"#(Returns wire object being analyzed)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Integer (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::NbEdges),
             R"#(Returns the number of edges in the wire, or 0 if it is not loaded)#" )
        .def("Face",
             (const TopoDS_Face & (ShapeAnalysis_Wire::*)() const) static_cast<const TopoDS_Face & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Face),
             R"#(Returns the working face)#" )
        .def("Surface",
             (const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Surface),
             R"#(Returns the working surface)#" )
        .def("StatusOrder",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusOrder),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusConnected",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusConnected),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusEdgeCurves",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusEdgeCurves),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusDegenerated",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusDegenerated),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusClosed",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusClosed),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSmall",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusSmall),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSelfIntersection",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusSelfIntersection),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLacking",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusLacking),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps3d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusGaps3d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps2d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusGaps2d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusCurveGaps",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusCurveGaps),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLoop",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusLoop),
             R"#(None)#"  , py::arg("Status"))
        .def("LastCheckStatus",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::LastCheckStatus),
             R"#(Querying the status of the LAST perfomed 'Advanced' checking procedure)#"  , py::arg("Status"))
        .def("MinDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance3d),
             R"#(Returns the last lowest distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex)#" )
        .def("MinDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance2d),
             R"#(Returns the last lowest distance in 2D-UV computed by CheckContinuity2d)#" )
        .def("MaxDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance3d),
             R"#(Returns the last maximal distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex, CheckSameParameter)#" )
        .def("MaxDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance2d),
             R"#(Returns the last maximal distance in 2D-UV computed by CheckContinuity2d)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::DynamicType),
             R"#(None)#" )
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsLoaded),
             R"#(Returns True if wire is loaded and has number of edges >0)#" )
        .def("IsReady",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsReady),
             R"#(Returns True if IsLoaded and underlying face is not null)#" )
        .def("Precision",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Precision),
             R"#(Returns the value of precision)#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::WireData),
             R"#(Returns wire object being analyzed)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Integer (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::NbEdges),
             R"#(Returns the number of edges in the wire, or 0 if it is not loaded)#" )
        .def("Face",
             (const TopoDS_Face & (ShapeAnalysis_Wire::*)() const) static_cast<const TopoDS_Face & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Face),
             R"#(Returns the working face)#" )
        .def("Surface",
             (const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Surface),
             R"#(Returns the working surface)#" )
        .def("StatusOrder",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusOrder),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusConnected",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusConnected),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusEdgeCurves",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusEdgeCurves),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusDegenerated",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusDegenerated),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusClosed",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusClosed),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSmall",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusSmall),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSelfIntersection",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusSelfIntersection),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLacking",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusLacking),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps3d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusGaps3d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps2d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusGaps2d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusCurveGaps",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusCurveGaps),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLoop",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::StatusLoop),
             R"#(None)#"  , py::arg("Status"))
        .def("LastCheckStatus",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status ) const>(&ShapeAnalysis_Wire::LastCheckStatus),
             R"#(Querying the status of the LAST perfomed 'Advanced' checking procedure)#"  , py::arg("Status"))
        .def("MinDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance3d),
             R"#(Returns the last lowest distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex)#" )
        .def("MinDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance2d),
             R"#(Returns the last lowest distance in 2D-UV computed by CheckContinuity2d)#" )
        .def("MaxDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance3d),
             R"#(Returns the last maximal distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex, CheckSameParameter)#" )
        .def("MaxDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance2d),
             R"#(Returns the last maximal distance in 2D-UV computed by CheckContinuity2d)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_Wire::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_WireOrder , shared_ptr<ShapeAnalysis_WireOrder> >>(m.attr("ShapeAnalysis_WireOrder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_WireVertex , shared_ptr<ShapeAnalysis_WireVertex> >>(m.attr("ShapeAnalysis_WireVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAnalysis_TransferParametersProj ,opencascade::handle<ShapeAnalysis_TransferParametersProj> , ShapeAnalysis_TransferParameters>>(m.attr("ShapeAnalysis_TransferParametersProj"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeAnalysis_TransferParametersProj::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<void (ShapeAnalysis_TransferParametersProj::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&ShapeAnalysis_TransferParametersProj::Init),
             R"#(None)#"  , py::arg("E"),  py::arg("F"))
        .def("Perform",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParametersProj::*)( const opencascade::handle<TColStd_HSequenceOfReal> & , const Standard_Boolean ) ) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParametersProj::*)( const opencascade::handle<TColStd_HSequenceOfReal> & , const Standard_Boolean ) >(&ShapeAnalysis_TransferParametersProj::Perform),
             R"#(Transfers parameters given by sequence Params from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Papams"),  py::arg("To2d"))
        .def("Perform",
             (Standard_Real (ShapeAnalysis_TransferParametersProj::*)( const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Real (ShapeAnalysis_TransferParametersProj::*)( const Standard_Real , const Standard_Boolean ) >(&ShapeAnalysis_TransferParametersProj::Perform),
             R"#(Transfers parameter given by Param from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Param"),  py::arg("To2d"))
        .def("TransferRange",
             (void (ShapeAnalysis_TransferParametersProj::*)( TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (ShapeAnalysis_TransferParametersProj::*)( TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&ShapeAnalysis_TransferParametersProj::TransferRange),
             R"#(Recomputes range of curves from NewEdge. If Is2d equals True parameters are recomputed by curve2d else by curve3d.)#"  , py::arg("newEdge"),  py::arg("prevPar"),  py::arg("currPar"),  py::arg("Is2d"))
        .def("IsSameRange",
             (Standard_Boolean (ShapeAnalysis_TransferParametersProj::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_TransferParametersProj::*)() const>(&ShapeAnalysis_TransferParametersProj::IsSameRange),
             R"#(Returns False;)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParametersProj::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParametersProj::*)() const>(&ShapeAnalysis_TransferParametersProj::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_TransferParametersProj::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeAnalysis_SequenceOfFreeBounds.hxx
// ./opencascade/ShapeAnalysis_TransferParametersProj.hxx
// ./opencascade/ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx
// ./opencascade/ShapeAnalysis_BoxBndTree.hxx
// ./opencascade/ShapeAnalysis_Edge.hxx
// ./opencascade/ShapeAnalysis_FreeBoundData.hxx
// ./opencascade/ShapeAnalysis_Surface.hxx
// ./opencascade/ShapeAnalysis_Shell.hxx
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
// ./opencascade/ShapeAnalysis_TransferParameters.hxx
// ./opencascade/ShapeAnalysis_Curve.hxx
// ./opencascade/ShapeAnalysis_HSequenceOfFreeBounds.hxx
// ./opencascade/ShapeAnalysis_ShapeTolerance.hxx
// ./opencascade/ShapeAnalysis_CheckSmallFace.hxx
// ./opencascade/ShapeAnalysis_FreeBounds.hxx
// ./opencascade/ShapeAnalysis_ShapeContents.hxx
// ./opencascade/ShapeAnalysis_Wire.hxx
// ./opencascade/ShapeAnalysis_Geom.hxx
// ./opencascade/ShapeAnalysis.hxx
// ./opencascade/ShapeAnalysis_WireVertex.hxx
// ./opencascade/ShapeAnalysis_FreeBoundsProperties.hxx
// ./opencascade/ShapeAnalysis_WireOrder.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> >(m,"ShapeAnalysis_SequenceOfFreeBounds");
    register_template_NCollection_UBTree<Standard_Integer, Bnd_Box>(m,"ShapeAnalysis_BoxBndTree");
    register_template_NCollection_DataMap<TopoDS_Shape, TColStd_ListOfReal, TopTools_ShapeMapHasher>(m,"ShapeAnalysis_DataMapOfShapeListOfReal");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
