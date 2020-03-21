
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <Prs3d.hxx>
#include <Prs3d_Arrow.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_DatumAttribute.hxx>
#include <Prs3d_DatumAxes.hxx>
#include <Prs3d_DatumMode.hxx>
#include <Prs3d_DatumParts.hxx>
#include <Prs3d_DimensionArrowOrientation.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <Prs3d_DimensionTextHorizontalPosition.hxx>
#include <Prs3d_DimensionTextVerticalPosition.hxx>
#include <Prs3d_DimensionUnits.hxx>
#include <Prs3d_Drawer.hxx>
#include <Prs3d_InvalidAngle.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_NListIteratorOfListOfSequenceOfPnt.hxx>
#include <Prs3d_NListOfSequenceOfPnt.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_Point.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_PresentationShadow.hxx>
#include <Prs3d_Projector.hxx>
#include <Prs3d_Root.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_ShapeTool.hxx>
#include <Prs3d_Text.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ToolCylinder.hxx>
#include <Prs3d_ToolDisk.hxx>
#include <Prs3d_ToolQuadric.hxx>
#include <Prs3d_ToolSector.hxx>
#include <Prs3d_ToolSphere.hxx>
#include <Prs3d_TypeOfHighlight.hxx>
#include <Prs3d_TypeOfHLR.hxx>
#include <Prs3d_TypeOfLinePicking.hxx>
#include <Prs3d_VertexDrawMode.hxx>

// template related includes
// ./opencascade/Prs3d_NListOfSequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Graphic3d_StructureManager.hxx>

// Module definiiton
void register_Prs3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Prs3d"));


//Python trampoline classes
    class Py_Prs3d_BasicAspect : public Prs3d_BasicAspect{
    public:
        using Prs3d_BasicAspect::Prs3d_BasicAspect;


        // public pure virtual
        void DumpJson(std::ostream & theOStream,const Standard_Integer theDepth) const  override { PYBIND11_OVERLOAD_PURE(void,Prs3d_BasicAspect,DumpJson,theOStream,theDepth) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Prs3d_ToolQuadric : public Prs3d_ToolQuadric{
    public:
        using Prs3d_ToolQuadric::Prs3d_ToolQuadric;


        // public pure virtual


        // protected pure virtual
        gp_Pnt Vertex(const Standard_Real theU,const Standard_Real theV) override { PYBIND11_OVERLOAD_PURE(gp_Pnt,Prs3d_ToolQuadric,Vertex,theU,theV) };
        gp_Dir Normal(const Standard_Real theU,const Standard_Real theV) override { PYBIND11_OVERLOAD_PURE(gp_Dir,Prs3d_ToolQuadric,Normal,theU,theV) };


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<Prs3d , shared_ptr<Prs3d>>(m,"Prs3d");

    static_cast<py::class_<Prs3d , shared_ptr<Prs3d> >>(m.attr("Prs3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_BasicAspect ,opencascade::handle<Prs3d_BasicAspect>,Py_Prs3d_BasicAspect , Standard_Transient>>(m.attr("Prs3d_BasicAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_BasicAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_BasicAspect::*)() const>(&Prs3d_BasicAspect::DynamicType),
             R"#(None)#" )
        .def("DumpJson",
             (void (Prs3d_BasicAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_BasicAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_BasicAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_BasicAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_DimensionUnits , shared_ptr<Prs3d_DimensionUnits> >>(m.attr("Prs3d_DimensionUnits"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Prs3d_DimensionUnits & >()  , py::arg("theUnits") )
    // custom constructors
    // methods
        .def("SetAngleUnits",
             (void (Prs3d_DimensionUnits::*)( const TCollection_AsciiString & ) ) static_cast<void (Prs3d_DimensionUnits::*)( const TCollection_AsciiString & ) >(&Prs3d_DimensionUnits::SetAngleUnits),
             R"#(Sets angle units)#"  , py::arg("theUnits"))
        .def("GetAngleUnits",
             (const TCollection_AsciiString & (Prs3d_DimensionUnits::*)() const) static_cast<const TCollection_AsciiString & (Prs3d_DimensionUnits::*)() const>(&Prs3d_DimensionUnits::GetAngleUnits),
             R"#(Returns angle units)#" )
        .def("SetLengthUnits",
             (void (Prs3d_DimensionUnits::*)( const TCollection_AsciiString & ) ) static_cast<void (Prs3d_DimensionUnits::*)( const TCollection_AsciiString & ) >(&Prs3d_DimensionUnits::SetLengthUnits),
             R"#(Sets length units)#"  , py::arg("theUnits"))
        .def("GetLengthUnits",
             (const TCollection_AsciiString & (Prs3d_DimensionUnits::*)() const) static_cast<const TCollection_AsciiString & (Prs3d_DimensionUnits::*)() const>(&Prs3d_DimensionUnits::GetLengthUnits),
             R"#(Returns length units)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_Drawer ,opencascade::handle<Prs3d_Drawer> , Graphic3d_PresentationAttributes>>(m.attr("Prs3d_Drawer"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_Drawer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DynamicType),
             R"#(None)#" )
        .def("TypeOfDeflection",
             (Aspect_TypeOfDeflection (Prs3d_Drawer::*)() const) static_cast<Aspect_TypeOfDeflection (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::TypeOfDeflection),
             R"#(Returns the type of chordal deflection. This indicates whether the deflection value is absolute or relative to the size of the object.)#" )
        .def("HasOwnTypeOfDeflection",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnTypeOfDeflection),
             R"#(Returns true if the drawer has a type of deflection setting active.)#" )
        .def("MaximalChordialDeviation",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::MaximalChordialDeviation),
             R"#(Returns the maximal chordal deviation. The default value is 0.1. Drawings of curves or patches are made with respect to an absolute maximal chordal deviation.)#" )
        .def("HasOwnMaximalChordialDeviation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnMaximalChordialDeviation),
             R"#(Returns true if the drawer has a maximal chordial deviation setting active.)#" )
        .def("HasOwnTypeOfHLR",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnTypeOfHLR),
             R"#(Returns true if the type of HLR is not equal to Prs3d_TOH_NotSet.)#" )
        .def("MaximalParameterValue",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::MaximalParameterValue),
             R"#(Sets the maximum value allowed for the first and last parameters of an infinite curve. By default, this value is 500000.)#" )
        .def("HasOwnMaximalParameterValue",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnMaximalParameterValue),
             R"#(Returns true if the drawer has a maximum value allowed for the first and last parameters of an infinite curve setting active.)#" )
        .def("IsoOnPlane",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::IsoOnPlane),
             R"#(Returns True if the drawing of isos on planes is enabled.)#" )
        .def("HasOwnIsoOnPlane",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnIsoOnPlane),
             R"#(Returns true if the drawer has IsoOnPlane setting active.)#" )
        .def("IsoOnTriangulation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::IsoOnTriangulation),
             R"#(Returns True if the drawing of isos on triangulation is enabled.)#" )
        .def("HasOwnIsoOnTriangulation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnIsoOnTriangulation),
             R"#(Returns true if the drawer has IsoOnTriangulation setting active.)#" )
        .def("Discretisation",
             (Standard_Integer (Prs3d_Drawer::*)() const) static_cast<Standard_Integer (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::Discretisation),
             R"#(Returns the discretisation setting.)#" )
        .def("HasOwnDiscretisation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDiscretisation),
             R"#(Returns true if the drawer has discretisation setting active.)#" )
        .def("DeviationCoefficient",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DeviationCoefficient),
             R"#(Returns the deviation coefficient. Drawings of curves or patches are made with respect to a maximal chordal deviation. A Deviation coefficient is used in the shading display mode. The shape is seen decomposed into triangles. These are used to calculate reflection of light from the surface of the object. The triangles are formed from chords of the curves in the shape. The deviation coefficient gives the highest value of the angle with which a chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is begun. This deviation is absolute and is set through the method: SetMaximalChordialDeviation. The default value is 0.001. In drawing shapes, however, you are allowed to ask for a relative deviation. This deviation will be: SizeOfObject * DeviationCoefficient.)#" )
        .def("SetDeviationCoefficient",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::SetDeviationCoefficient),
             R"#(Sets the hasOwnDeviationCoefficient flag to Standard_False)#" )
        .def("HasOwnDeviationCoefficient",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDeviationCoefficient),
             R"#(Returns true if there is a local setting for deviation coefficient in this framework for a specific interactive object.)#" )
        .def("PreviousDeviationCoefficient",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::PreviousDeviationCoefficient),
             R"#(Saves the previous value used for the chordal deviation coefficient.)#" )
        .def("UpdatePreviousDeviationCoefficient",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::UpdatePreviousDeviationCoefficient),
             R"#(Updates the previous value used for the chordal deviation coefficient to the current state.)#" )
        .def("HLRDeviationCoefficient",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HLRDeviationCoefficient),
             R"#(Returns the real number value of the hidden line removal deviation coefficient in this framework, if the flag hasOwnHLRDeviationCoefficient is true or there is no Link. Else the shape's HLR deviation coefficient is used. A Deviation coefficient is used in the shading display mode. The shape is seen decomposed into triangles. These are used to calculate reflection of light from the surface of the object. The triangles are formed from chords of the curves in the shape. The deviation coefficient give the highest value of the angle with which a chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is begun. To find the hidden lines, hidden line display mode entails recalculation of the view at each different projector perspective. Since hidden lines entail calculations of more than usual complexity to decompose them into these triangles, a deviation coefficient allowing greater tolerance is used. This increases efficiency in calculation. The Default value is 0.02.)#" )
        .def("SetHLRDeviationCoefficient",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::SetHLRDeviationCoefficient),
             R"#(Sets the hasOwnHLRDeviationCoefficient flag to Standard_False)#" )
        .def("HasOwnHLRDeviationCoefficient",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnHLRDeviationCoefficient),
             R"#(Returns true if the there is a setting for HLR deviation coefficient in this framework for a specific interactive object.)#" )
        .def("PreviousHLRDeviationCoefficient",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::PreviousHLRDeviationCoefficient),
             R"#(Returns the previous value of the hidden line removal deviation coefficient.)#" )
        .def("DeviationAngle",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DeviationAngle),
             R"#(Returns the value for deviation angle.)#" )
        .def("SetDeviationAngle",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::SetDeviationAngle),
             R"#(Sets the hasOwnDeviationAngle flag to Standard_False)#" )
        .def("HasOwnDeviationAngle",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDeviationAngle),
             R"#(Returns true if the there is a local setting for deviation angle in this framework for a specific interactive object.)#" )
        .def("PreviousDeviationAngle",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::PreviousDeviationAngle),
             R"#(Returns the previous deviation angle)#" )
        .def("UpdatePreviousDeviationAngle",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::UpdatePreviousDeviationAngle),
             R"#(Updates the previous deviation angle to the current value)#" )
        .def("HLRAngle",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HLRAngle),
             R"#(Returns the real number value of the deviation angle in hidden line removal views. The default value is 20 * M_PI / 180.)#" )
        .def("SetHLRAngle",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::SetHLRAngle),
             R"#(Sets the hasOwnHLRDeviationAngle flag to Standard_False)#" )
        .def("HasOwnHLRDeviationAngle",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnHLRDeviationAngle),
             R"#(Returns true if the there is a setting for HLR deviation angle in this framework for a specific interactive object.)#" )
        .def("PreviousHLRDeviationAngle",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::PreviousHLRDeviationAngle),
             R"#(Returns the previous value of the HLR deviation angle.)#" )
        .def("IsAutoTriangulation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::IsAutoTriangulation),
             R"#(Returns True if automatic triangulation is enabled.)#" )
        .def("HasOwnIsAutoTriangulation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnIsAutoTriangulation),
             R"#(Returns true if the drawer has IsoOnPlane setting active.)#" )
        .def("HasOwnUIsoAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnUIsoAspect),
             R"#(Returns true if the drawer has its own attribute for UIso aspect that overrides the one in the link.)#" )
        .def("HasOwnVIsoAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnVIsoAspect),
             R"#(Returns true if the drawer has its own attribute for VIso aspect that overrides the one in the link.)#" )
        .def("HasOwnWireAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnWireAspect),
             R"#(Returns true if the drawer has its own attribute for wire aspect that overrides the one in the link.)#" )
        .def("WireDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::WireDraw),
             R"#(Returns True if the drawing of the wire is enabled.)#" )
        .def("HasOwnWireDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnWireDraw),
             R"#(Returns true if the drawer has its own attribute for "draw wires" flag that overrides the one in the link.)#" )
        .def("HasOwnPointAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnPointAspect),
             R"#(Returns true if the drawer has its own attribute for point aspect that overrides the one in the link.)#" )
        .def("HasOwnLineAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnLineAspect),
             R"#(Returns true if the drawer has its own attribute for line aspect that overrides the one in the link.)#" )
        .def("HasOwnTextAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnTextAspect),
             R"#(Returns true if the drawer has its own attribute for text aspect that overrides the one in the link.)#" )
        .def("HasOwnShadingAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnShadingAspect),
             R"#(Returns true if the drawer has its own attribute for shading aspect that overrides the one in the link.)#" )
        .def("HasOwnSeenLineAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnSeenLineAspect),
             R"#(Returns true if the drawer has its own attribute for seen line aspect that overrides the one in the link.)#" )
        .def("HasOwnPlaneAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnPlaneAspect),
             R"#(Returns true if the drawer has its own attribute for plane aspect that overrides the one in the link.)#" )
        .def("HasOwnArrowAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnArrowAspect),
             R"#(Returns true if the drawer has its own attribute for arrow aspect that overrides the one in the link.)#" )
        .def("LineArrowDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::LineArrowDraw),
             R"#(Returns True if drawing an arrow at the end of each edge is enabled and False otherwise (the default).)#" )
        .def("HasOwnLineArrowDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnLineArrowDraw),
             R"#(Returns true if the drawer has its own attribute for "draw arrow" flag that overrides the one in the link.)#" )
        .def("HasOwnHiddenLineAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnHiddenLineAspect),
             R"#(Returns true if the drawer has its own attribute for hidden lines aspect that overrides the one in the link.)#" )
        .def("DrawHiddenLine",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DrawHiddenLine),
             R"#(Returns Standard_True if the hidden lines are to be drawn. By default the hidden lines are not drawn.)#" )
        .def("HasOwnDrawHiddenLine",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDrawHiddenLine),
             R"#(Returns true if the drawer has its own attribute for "draw hidden lines" flag that overrides the one in the link.)#" )
        .def("HasOwnVectorAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnVectorAspect),
             R"#(Returns true if the drawer has its own attribute for vector aspect that overrides the one in the link.)#" )
        .def("HasOwnVertexDrawMode",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnVertexDrawMode),
             R"#(Returns true if the vertex draw mode is not equal to Prs3d_VDM_Inherited. This means that individual vertex draw mode value (i.e. not inherited from the global drawer) is used for a specific interactive object.)#" )
        .def("HasOwnDatumAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDatumAspect),
             R"#(Returns true if the drawer has its own attribute for datum aspect that overrides the one in the link.)#" )
        .def("HasOwnSectionAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnSectionAspect),
             R"#(Returns true if the drawer has its own attribute for section aspect that overrides the one in the link.)#" )
        .def("HasOwnFreeBoundaryAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFreeBoundaryAspect),
             R"#(Returns true if the drawer has its own attribute for free boundaries aspect that overrides the one in the link.)#" )
        .def("FreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::FreeBoundaryDraw),
             R"#(Returns True if the drawing of the free boundaries is enabled True is the default setting.)#" )
        .def("HasOwnFreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFreeBoundaryDraw),
             R"#(Returns true if the drawer has its own attribute for "draw free boundaries" flag that overrides the one in the link.)#" )
        .def("HasOwnUnFreeBoundaryAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnUnFreeBoundaryAspect),
             R"#(Returns true if the drawer has its own attribute for unfree boundaries aspect that overrides the one in the link.)#" )
        .def("UnFreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::UnFreeBoundaryDraw),
             R"#(Returns True if the drawing of the shared boundaries is enabled. True is the default setting.)#" )
        .def("HasOwnUnFreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnUnFreeBoundaryDraw),
             R"#(Returns true if the drawer has its own attribute for "draw shared boundaries" flag that overrides the one in the link.)#" )
        .def("HasOwnFaceBoundaryAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFaceBoundaryAspect),
             R"#(Returns true if the drawer has its own attribute for face boundaries aspect that overrides the one in the link.)#" )
        .def("FaceBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::FaceBoundaryDraw),
             R"#(Checks whether the face boundary drawing is enabled or not.)#" )
        .def("HasOwnFaceBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFaceBoundaryDraw),
             R"#(Returns true if the drawer has its own attribute for "draw face boundaries" flag that overrides the one in the link.)#" )
        .def("HasOwnFaceBoundaryUpperContinuity",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFaceBoundaryUpperContinuity),
             R"#(Returns true if the drawer has its own attribute for face boundaries upper edge continuity class that overrides the one in the link.)#" )
        .def("FaceBoundaryUpperContinuity",
             (GeomAbs_Shape (Prs3d_Drawer::*)() const) static_cast<GeomAbs_Shape (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::FaceBoundaryUpperContinuity),
             R"#(Get the most edge continuity class; GeomAbs_CN by default (all edges).)#" )
        .def("SetFaceBoundaryUpperContinuity",
             (void (Prs3d_Drawer::*)( GeomAbs_Shape ) ) static_cast<void (Prs3d_Drawer::*)( GeomAbs_Shape ) >(&Prs3d_Drawer::SetFaceBoundaryUpperContinuity),
             R"#(Set the most edge continuity class for face boundaries.)#"  , py::arg("theMostAllowedEdgeClass"))
        .def("UnsetFaceBoundaryUpperContinuity",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::UnsetFaceBoundaryUpperContinuity),
             R"#(Unset the most edge continuity class for face boundaries.)#" )
        .def("HasOwnDimensionAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDimensionAspect),
             R"#(Returns true if the drawer has its own attribute for the appearance of dimensions that overrides the one in the link.)#" )
        .def("DimLengthModelUnits",
             (const TCollection_AsciiString & (Prs3d_Drawer::*)() const) static_cast<const TCollection_AsciiString & (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DimLengthModelUnits),
             R"#(Returns length model units for the dimension presentation.)#" )
        .def("DimAngleModelUnits",
             (const TCollection_AsciiString & (Prs3d_Drawer::*)() const) static_cast<const TCollection_AsciiString & (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DimAngleModelUnits),
             R"#(Returns angle model units for the dimension presentation.)#" )
        .def("HasOwnDimLengthModelUnits",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDimLengthModelUnits),
             R"#(Returns true if the drawer has its own attribute for dimension length model units that overrides the one in the link.)#" )
        .def("HasOwnDimAngleModelUnits",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDimAngleModelUnits),
             R"#(Returns true if the drawer has its own attribute for dimension angle model units that overrides the one in the link.)#" )
        .def("DimLengthDisplayUnits",
             (const TCollection_AsciiString & (Prs3d_Drawer::*)() const) static_cast<const TCollection_AsciiString & (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DimLengthDisplayUnits),
             R"#(Returns length units in which dimension presentation is displayed.)#" )
        .def("DimAngleDisplayUnits",
             (const TCollection_AsciiString & (Prs3d_Drawer::*)() const) static_cast<const TCollection_AsciiString & (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DimAngleDisplayUnits),
             R"#(Returns angle units in which dimension presentation is displayed.)#" )
        .def("HasOwnDimLengthDisplayUnits",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDimLengthDisplayUnits),
             R"#(Returns true if the drawer has its own attribute for length units in which dimension presentation is displayed that overrides the one in the link.)#" )
        .def("HasOwnDimAngleDisplayUnits",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDimAngleDisplayUnits),
             R"#(Returns true if the drawer has its own attribute for angle units in which dimension presentation is displayed that overrides the one in the link.)#" )
        .def("Link",
             (const opencascade::handle<Prs3d_Drawer> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_Drawer> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::Link),
             R"#(Returns the drawer to which the current object references.)#" )
        .def("HasLink",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasLink),
             R"#(Returns true if the current object has a link on the other drawer.)#" )
        .def("Link",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d_Drawer::Link),
             R"#(Sets theDrawer as a link to which the current object references.)#"  , py::arg("theDrawer"))
        .def("SetLink",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d_Drawer::SetLink),
             R"#(Sets theDrawer as a link to which the current object references.)#"  , py::arg("theDrawer"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_Drawer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_PresentationShadow ,opencascade::handle<Prs3d_PresentationShadow> , Graphic3d_Structure>>(m.attr("Prs3d_PresentationShadow"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_PresentationShadow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_PresentationShadow::*)() const>(&Prs3d_PresentationShadow::DynamicType),
             R"#(None)#" )
        .def("ParentId",
             (Standard_Integer (Prs3d_PresentationShadow::*)() const) static_cast<Standard_Integer (Prs3d_PresentationShadow::*)() const>(&Prs3d_PresentationShadow::ParentId),
             R"#(Returns the id of the parent presentation)#" )
        .def("ParentAffinity",
             (const opencascade::handle<Graphic3d_ViewAffinity> & (Prs3d_PresentationShadow::*)() const) static_cast<const opencascade::handle<Graphic3d_ViewAffinity> & (Prs3d_PresentationShadow::*)() const>(&Prs3d_PresentationShadow::ParentAffinity),
             R"#(Returns view affinity of the parent presentation)#" )
        .def("CalculateBoundBox",
             (void (Prs3d_PresentationShadow::*)() ) static_cast<void (Prs3d_PresentationShadow::*)() >(&Prs3d_PresentationShadow::CalculateBoundBox),
             R"#(Do nothing - axis-aligned bounding box should be initialized from parent structure.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_PresentationShadow::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_Projector ,opencascade::handle<Prs3d_Projector> , Standard_Transient>>(m.attr("Prs3d_Projector"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_Projector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_Projector::*)() const>(&Prs3d_Projector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_Projector::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Prs3d_Root , shared_ptr<Prs3d_Root>>(m,"Prs3d_Root");

    static_cast<py::class_<Prs3d_Root , shared_ptr<Prs3d_Root> >>(m.attr("Prs3d_Root"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CurrentGroup_s",
                    (opencascade::handle<Graphic3d_Group> (*)( const opencascade::handle<Prs3d_Presentation> & ) ) static_cast<opencascade::handle<Graphic3d_Group> (*)( const opencascade::handle<Prs3d_Presentation> & ) >(&Prs3d_Root::CurrentGroup),
                    R"#(Returns the current (last created) group of primititves inside graphic objects in the display. A group also contains the attributes whose ranges are limited to the primitives in it.)#"  , py::arg("thePrs3d"))
        .def_static("NewGroup_s",
                    (opencascade::handle<Graphic3d_Group> (*)( const opencascade::handle<Prs3d_Presentation> & ) ) static_cast<opencascade::handle<Graphic3d_Group> (*)( const opencascade::handle<Prs3d_Presentation> & ) >(&Prs3d_Root::NewGroup),
                    R"#(Returns the new group of primitives inside graphic objects in the display. A group also contains the attributes whose ranges are limited to the primitives in it.)#"  , py::arg("thePrs3d"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ShapeTool , shared_ptr<Prs3d_ShapeTool> >>(m.attr("Prs3d_ShapeTool"))
    // constructors
    // custom constructors
    // methods
        .def("IsPlanarFace",
             (Standard_Boolean (Prs3d_ShapeTool::*)() const) static_cast<Standard_Boolean (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::IsPlanarFace),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolQuadric , shared_ptr<Prs3d_ToolQuadric>,Py_Prs3d_ToolQuadric >>(m.attr("Prs3d_ToolQuadric"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("TrianglesNb_s",
                    (Standard_Integer (*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const Standard_Integer , const Standard_Integer ) >(&Prs3d_ToolQuadric::TrianglesNb),
                    R"#(Number of triangles for presentation with the given params.)#"  , py::arg("theSlicesNb"),  py::arg("theStacksNb"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Prs3d_Arrow , shared_ptr<Prs3d_Arrow>>(m,"Prs3d_Arrow");

    static_cast<py::class_<Prs3d_Arrow , shared_ptr<Prs3d_Arrow> , Prs3d_Root>>(m.attr("Prs3d_Arrow"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Draw_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real ) >(&Prs3d_Arrow::Draw),
                    R"#(Alias to another method Draw() for backward compatibility.)#"  , py::arg("thePrs"),  py::arg("theLocation"),  py::arg("theDirection"),  py::arg("theAngle"),  py::arg("theLength"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ArrowAspect ,opencascade::handle<Prs3d_ArrowAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_ArrowAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_ArrowAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_ArrowAspect::*)() const>(&Prs3d_ArrowAspect::DynamicType),
             R"#(None)#" )
        .def("Angle",
             (Standard_Real (Prs3d_ArrowAspect::*)() const) static_cast<Standard_Real (Prs3d_ArrowAspect::*)() const>(&Prs3d_ArrowAspect::Angle),
             R"#(returns the current value of the angle used when drawing an arrow.)#" )
        .def("SetLength",
             (void (Prs3d_ArrowAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_ArrowAspect::*)( const Standard_Real ) >(&Prs3d_ArrowAspect::SetLength),
             R"#(Defines the length of the arrows.)#"  , py::arg("theLength"))
        .def("Length",
             (Standard_Real (Prs3d_ArrowAspect::*)() const) static_cast<Standard_Real (Prs3d_ArrowAspect::*)() const>(&Prs3d_ArrowAspect::Length),
             R"#(Returns the current value of the length used when drawing an arrow.)#" )
        .def("SetColor",
             (void (Prs3d_ArrowAspect::*)( const Quantity_Color & ) ) static_cast<void (Prs3d_ArrowAspect::*)( const Quantity_Color & ) >(&Prs3d_ArrowAspect::SetColor),
             R"#(None)#"  , py::arg("theColor"))
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectLine3d> & (Prs3d_ArrowAspect::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectLine3d> & (Prs3d_ArrowAspect::*)() const>(&Prs3d_ArrowAspect::Aspect),
             R"#(None)#" )
        .def("SetAspect",
             (void (Prs3d_ArrowAspect::*)( const opencascade::handle<Graphic3d_AspectLine3d> & ) ) static_cast<void (Prs3d_ArrowAspect::*)( const opencascade::handle<Graphic3d_AspectLine3d> & ) >(&Prs3d_ArrowAspect::SetAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("DumpJson",
             (void (Prs3d_ArrowAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_ArrowAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_ArrowAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_ArrowAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_DatumAspect ,opencascade::handle<Prs3d_DatumAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_DatumAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::DynamicType),
             R"#(None)#" )
        .def("TextAspect",
             (const opencascade::handle<Prs3d_TextAspect> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Prs3d_TextAspect> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::TextAspect),
             R"#(Returns the text attributes for rendering labels.)#" )
        .def("SetTextAspect",
             (void (Prs3d_DatumAspect::*)( const opencascade::handle<Prs3d_TextAspect> & ) ) static_cast<void (Prs3d_DatumAspect::*)( const opencascade::handle<Prs3d_TextAspect> & ) >(&Prs3d_DatumAspect::SetTextAspect),
             R"#(Sets text attributes for rendering labels.)#"  , py::arg("theTextAspect"))
        .def("PointAspect",
             (const opencascade::handle<Prs3d_PointAspect> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Prs3d_PointAspect> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::PointAspect),
             R"#(Returns the point aspect of origin wireframe presentation)#" )
        .def("SetPointAspect",
             (void (Prs3d_DatumAspect::*)( const opencascade::handle<Prs3d_PointAspect> & ) ) static_cast<void (Prs3d_DatumAspect::*)( const opencascade::handle<Prs3d_PointAspect> & ) >(&Prs3d_DatumAspect::SetPointAspect),
             R"#(Returns the point aspect of origin wireframe presentation)#"  , py::arg("theAspect"))
        .def("ArrowAspect",
             (const opencascade::handle<Prs3d_ArrowAspect> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Prs3d_ArrowAspect> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::ArrowAspect),
             R"#(Returns the arrow aspect of presentation)#" )
        .def("SetArrowAspect",
             (void (Prs3d_DatumAspect::*)( const opencascade::handle<Prs3d_ArrowAspect> & ) ) static_cast<void (Prs3d_DatumAspect::*)( const opencascade::handle<Prs3d_ArrowAspect> & ) >(&Prs3d_DatumAspect::SetArrowAspect),
             R"#(Sets the arrow aspect of presentation)#"  , py::arg("theAspect"))
        .def("FirstAxisAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::FirstAxisAspect),
             R"#(Returns the attributes for display of the first axis.)#" )
        .def("SecondAxisAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::SecondAxisAspect),
             R"#(Returns the attributes for display of the second axis.)#" )
        .def("ThirdAxisAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::ThirdAxisAspect),
             R"#(Returns the attributes for display of the third axis.)#" )
        .def("DrawFirstAndSecondAxis",
             (Standard_Boolean (Prs3d_DatumAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::DrawFirstAndSecondAxis),
             R"#(Returns true if the first and second axes can be drawn.)#" )
        .def("DrawThirdAxis",
             (Standard_Boolean (Prs3d_DatumAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::DrawThirdAxis),
             R"#(Returns true if the third axis can be drawn.)#" )
        .def("SetDrawDatumAxes",
             (void (Prs3d_DatumAspect::*)( Prs3d_DatumAxes ) ) static_cast<void (Prs3d_DatumAspect::*)( Prs3d_DatumAxes ) >(&Prs3d_DatumAspect::SetDrawDatumAxes),
             R"#(Sets the axes used in the datum aspect)#"  , py::arg("theType"))
        .def("DatumAxes",
             (Prs3d_DatumAxes (Prs3d_DatumAspect::*)() const) static_cast<Prs3d_DatumAxes (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::DatumAxes),
             R"#(Returns axes used in the datum aspect)#" )
        .def("SetAttribute",
             (void (Prs3d_DatumAspect::*)( Prs3d_DatumAttribute , const Standard_Real & ) ) static_cast<void (Prs3d_DatumAspect::*)( Prs3d_DatumAttribute , const Standard_Real & ) >(&Prs3d_DatumAspect::SetAttribute),
             R"#(Sets the attribute of the datum type)#"  , py::arg("theType"),  py::arg("theValue"))
        .def("Attribute",
             (Standard_Real (Prs3d_DatumAspect::*)( Prs3d_DatumAttribute ) const) static_cast<Standard_Real (Prs3d_DatumAspect::*)( Prs3d_DatumAttribute ) const>(&Prs3d_DatumAspect::Attribute),
             R"#(Returns the attribute of the datum type)#"  , py::arg("theType"))
        .def("SetAxisLength",
             (void (Prs3d_DatumAspect::*)( Standard_Real , Standard_Real , Standard_Real ) ) static_cast<void (Prs3d_DatumAspect::*)( Standard_Real , Standard_Real , Standard_Real ) >(&Prs3d_DatumAspect::SetAxisLength),
             R"#(Sets the lengths of the three axes.)#"  , py::arg("theL1"),  py::arg("theL2"),  py::arg("theL3"))
        .def("FirstAxisLength",
             (Standard_Real (Prs3d_DatumAspect::*)() const) static_cast<Standard_Real (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::FirstAxisLength),
             R"#(Returns the length of the displayed first axis.)#" )
        .def("SecondAxisLength",
             (Standard_Real (Prs3d_DatumAspect::*)() const) static_cast<Standard_Real (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::SecondAxisLength),
             R"#(Returns the length of the displayed second axis.)#" )
        .def("ThirdAxisLength",
             (Standard_Real (Prs3d_DatumAspect::*)() const) static_cast<Standard_Real (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::ThirdAxisLength),
             R"#(Returns the length of the displayed third axis.)#" )
        .def("ToDrawLabels",
             (Standard_Boolean (Prs3d_DatumAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::ToDrawLabels),
             R"#(Returns true if axes labels are drawn; TRUE by default.)#" )
        .def("SetDrawLabels",
             (void (Prs3d_DatumAspect::*)( Standard_Boolean ) ) static_cast<void (Prs3d_DatumAspect::*)( Standard_Boolean ) >(&Prs3d_DatumAspect::SetDrawLabels),
             R"#(Sets option to draw or not to draw text labels for axes)#"  , py::arg("theToDraw"))
        .def("SetToDrawLabels",
             (void (Prs3d_DatumAspect::*)( Standard_Boolean ) ) static_cast<void (Prs3d_DatumAspect::*)( Standard_Boolean ) >(&Prs3d_DatumAspect::SetToDrawLabels),
             R"#(None)#"  , py::arg("theToDraw"))
        .def("ToDrawArrows",
             (Standard_Boolean (Prs3d_DatumAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::ToDrawArrows),
             R"#(Returns true if axes arrows are drawn; TRUE by default.)#" )
        .def("SetDrawArrows",
             (void (Prs3d_DatumAspect::*)( Standard_Boolean ) ) static_cast<void (Prs3d_DatumAspect::*)( Standard_Boolean ) >(&Prs3d_DatumAspect::SetDrawArrows),
             R"#(Sets option to draw or not arrows for axes)#"  , py::arg("theToDraw"))
        .def("DumpJson",
             (void (Prs3d_DatumAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_DatumAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_DatumAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_DatumAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_DimensionAspect ,opencascade::handle<Prs3d_DimensionAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_DimensionAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_DimensionAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::DynamicType),
             R"#(None)#" )
        .def("LineAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DimensionAspect::*)() const) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::LineAspect),
             R"#(Returns the settings for the display of lines used in presentation of dimensions.)#" )
        .def("SetLineAspect",
             (void (Prs3d_DimensionAspect::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_DimensionAspect::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_DimensionAspect::SetLineAspect),
             R"#(Sets the display attributes of lines used in presentation of dimensions.)#"  , py::arg("theAspect"))
        .def("TextAspect",
             (const opencascade::handle<Prs3d_TextAspect> & (Prs3d_DimensionAspect::*)() const) static_cast<const opencascade::handle<Prs3d_TextAspect> & (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::TextAspect),
             R"#(Returns the settings for the display of text used in presentation of dimensions.)#" )
        .def("SetTextAspect",
             (void (Prs3d_DimensionAspect::*)( const opencascade::handle<Prs3d_TextAspect> & ) ) static_cast<void (Prs3d_DimensionAspect::*)( const opencascade::handle<Prs3d_TextAspect> & ) >(&Prs3d_DimensionAspect::SetTextAspect),
             R"#(Sets the display attributes of text used in presentation of dimensions.)#"  , py::arg("theAspect"))
        .def("IsText3d",
             (Standard_Boolean (Prs3d_DimensionAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::IsText3d),
             R"#(Check if text for dimension label is 3d.)#" )
        .def("MakeText3d",
             (void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) >(&Prs3d_DimensionAspect::MakeText3d),
             R"#(Sets type of text.)#"  , py::arg("isText3d"))
        .def("IsTextShaded",
             (Standard_Boolean (Prs3d_DimensionAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::IsTextShaded),
             R"#(Check if 3d text for dimension label is shaded.)#" )
        .def("MakeTextShaded",
             (void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) >(&Prs3d_DimensionAspect::MakeTextShaded),
             R"#(Turns on/off text shading for 3d text.)#"  , py::arg("theIsTextShaded"))
        .def("IsArrows3d",
             (Standard_Boolean (Prs3d_DimensionAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::IsArrows3d),
             R"#(Gets type of arrows.)#" )
        .def("MakeArrows3d",
             (void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) >(&Prs3d_DimensionAspect::MakeArrows3d),
             R"#(Sets type of arrows.)#"  , py::arg("theIsArrows3d"))
        .def("IsUnitsDisplayed",
             (Standard_Boolean (Prs3d_DimensionAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::IsUnitsDisplayed),
             R"#(Shows if Units are to be displayed along with dimension value.)#" )
        .def("MakeUnitsDisplayed",
             (void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Standard_Boolean ) >(&Prs3d_DimensionAspect::MakeUnitsDisplayed),
             R"#(Specifies whether the units string should be displayed along with value label or not.)#"  , py::arg("theIsDisplayed"))
        .def("SetArrowOrientation",
             (void (Prs3d_DimensionAspect::*)( const Prs3d_DimensionArrowOrientation ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Prs3d_DimensionArrowOrientation ) >(&Prs3d_DimensionAspect::SetArrowOrientation),
             R"#(Sets orientation of arrows (external or internal). By default orientation is chosen automatically according to situation and text label size.)#"  , py::arg("theArrowOrient"))
        .def("ArrowOrientation",
             (Prs3d_DimensionArrowOrientation (Prs3d_DimensionAspect::*)() const) static_cast<Prs3d_DimensionArrowOrientation (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::ArrowOrientation),
             R"#(Gets orientation of arrows (external or internal).)#" )
        .def("SetTextVerticalPosition",
             (void (Prs3d_DimensionAspect::*)( const Prs3d_DimensionTextVerticalPosition ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Prs3d_DimensionTextVerticalPosition ) >(&Prs3d_DimensionAspect::SetTextVerticalPosition),
             R"#(Sets vertical text alignment for text label.)#"  , py::arg("thePosition"))
        .def("TextVerticalPosition",
             (Prs3d_DimensionTextVerticalPosition (Prs3d_DimensionAspect::*)() const) static_cast<Prs3d_DimensionTextVerticalPosition (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::TextVerticalPosition),
             R"#(Gets vertical text alignment for text label.)#" )
        .def("SetTextHorizontalPosition",
             (void (Prs3d_DimensionAspect::*)( const Prs3d_DimensionTextHorizontalPosition ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Prs3d_DimensionTextHorizontalPosition ) >(&Prs3d_DimensionAspect::SetTextHorizontalPosition),
             R"#(Sets horizontal text alignment for text label.)#"  , py::arg("thePosition"))
        .def("TextHorizontalPosition",
             (Prs3d_DimensionTextHorizontalPosition (Prs3d_DimensionAspect::*)() const) static_cast<Prs3d_DimensionTextHorizontalPosition (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::TextHorizontalPosition),
             R"#(Gets horizontal text alignment for text label.)#" )
        .def("ArrowAspect",
             (const opencascade::handle<Prs3d_ArrowAspect> & (Prs3d_DimensionAspect::*)() const) static_cast<const opencascade::handle<Prs3d_ArrowAspect> & (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::ArrowAspect),
             R"#(Returns the settings for displaying arrows.)#" )
        .def("SetArrowAspect",
             (void (Prs3d_DimensionAspect::*)( const opencascade::handle<Prs3d_ArrowAspect> & ) ) static_cast<void (Prs3d_DimensionAspect::*)( const opencascade::handle<Prs3d_ArrowAspect> & ) >(&Prs3d_DimensionAspect::SetArrowAspect),
             R"#(Sets the display attributes of arrows used in presentation of dimensions.)#"  , py::arg("theAspect"))
        .def("SetExtensionSize",
             (void (Prs3d_DimensionAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Standard_Real ) >(&Prs3d_DimensionAspect::SetExtensionSize),
             R"#(Sets extension size.)#"  , py::arg("theSize"))
        .def("ExtensionSize",
             (Standard_Real (Prs3d_DimensionAspect::*)() const) static_cast<Standard_Real (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::ExtensionSize),
             R"#(Returns extension size.)#" )
        .def("SetArrowTailSize",
             (void (Prs3d_DimensionAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Standard_Real ) >(&Prs3d_DimensionAspect::SetArrowTailSize),
             R"#(Set size for arrow tail (extension without text).)#"  , py::arg("theSize"))
        .def("ArrowTailSize",
             (Standard_Real (Prs3d_DimensionAspect::*)() const) static_cast<Standard_Real (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::ArrowTailSize),
             R"#(Returns arrow tail size.)#" )
        .def("SetValueStringFormat",
             (void (Prs3d_DimensionAspect::*)( const TCollection_AsciiString & ) ) static_cast<void (Prs3d_DimensionAspect::*)( const TCollection_AsciiString & ) >(&Prs3d_DimensionAspect::SetValueStringFormat),
             R"#(Sets "sprintf"-syntax format for formatting dimension value labels.)#"  , py::arg("theFormat"))
        .def("ValueStringFormat",
             (const TCollection_AsciiString & (Prs3d_DimensionAspect::*)() const) static_cast<const TCollection_AsciiString & (Prs3d_DimensionAspect::*)() const>(&Prs3d_DimensionAspect::ValueStringFormat),
             R"#(Returns format.)#" )
        .def("DumpJson",
             (void (Prs3d_DimensionAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_DimensionAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_DimensionAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_DimensionAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_LineAspect ,opencascade::handle<Prs3d_LineAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_LineAspect"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_AspectLine3d> & >()  , py::arg("theAspect") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_LineAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_LineAspect::*)() const>(&Prs3d_LineAspect::DynamicType),
             R"#(None)#" )
        .def("SetColor",
             (void (Prs3d_LineAspect::*)( const Quantity_Color & ) ) static_cast<void (Prs3d_LineAspect::*)( const Quantity_Color & ) >(&Prs3d_LineAspect::SetColor),
             R"#(Sets the line color defined at the time of construction. Default value: Quantity_NOC_YELLOW)#"  , py::arg("theColor"))
        .def("SetTypeOfLine",
             (void (Prs3d_LineAspect::*)( const Aspect_TypeOfLine ) ) static_cast<void (Prs3d_LineAspect::*)( const Aspect_TypeOfLine ) >(&Prs3d_LineAspect::SetTypeOfLine),
             R"#(Sets the type of line defined at the time of construction. This could, for example, be solid, dotted or made up of dashes. Default value: Aspect_TOL_SOLID)#"  , py::arg("theType"))
        .def("SetWidth",
             (void (Prs3d_LineAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_LineAspect::*)( const Standard_Real ) >(&Prs3d_LineAspect::SetWidth),
             R"#(Sets the line width defined at the time of construction. Default value: 1.)#"  , py::arg("theWidth"))
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectLine3d> & (Prs3d_LineAspect::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectLine3d> & (Prs3d_LineAspect::*)() const>(&Prs3d_LineAspect::Aspect),
             R"#(Returns the line aspect. This is defined as the set of color, type and thickness attributes.)#" )
        .def("SetAspect",
             (void (Prs3d_LineAspect::*)( const opencascade::handle<Graphic3d_AspectLine3d> & ) ) static_cast<void (Prs3d_LineAspect::*)( const opencascade::handle<Graphic3d_AspectLine3d> & ) >(&Prs3d_LineAspect::SetAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("DumpJson",
             (void (Prs3d_LineAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_LineAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_LineAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_LineAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_PlaneAspect ,opencascade::handle<Prs3d_PlaneAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_PlaneAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_PlaneAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::DynamicType),
             R"#(None)#" )
        .def("EdgesAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_PlaneAspect::*)() const) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::EdgesAspect),
             R"#(Returns the attributes of displayed edges involved in the presentation of planes.)#" )
        .def("IsoAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_PlaneAspect::*)() const) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::IsoAspect),
             R"#(Returns the attributes of displayed isoparameters involved in the presentation of planes.)#" )
        .def("ArrowAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_PlaneAspect::*)() const) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::ArrowAspect),
             R"#(Returns the settings for displaying an arrow.)#" )
        .def("SetArrowsLength",
             (void (Prs3d_PlaneAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Real ) >(&Prs3d_PlaneAspect::SetArrowsLength),
             R"#(None)#"  , py::arg("theLength"))
        .def("ArrowsLength",
             (Standard_Real (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Real (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::ArrowsLength),
             R"#(Returns the length of the arrow shaft used in the display of arrows.)#" )
        .def("SetArrowsSize",
             (void (Prs3d_PlaneAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Real ) >(&Prs3d_PlaneAspect::SetArrowsSize),
             R"#(Sets the angle of the arrowhead used in the display of planes.)#"  , py::arg("theSize"))
        .def("ArrowsSize",
             (Standard_Real (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Real (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::ArrowsSize),
             R"#(Returns the size of arrows used in the display of planes.)#" )
        .def("SetArrowsAngle",
             (void (Prs3d_PlaneAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Real ) >(&Prs3d_PlaneAspect::SetArrowsAngle),
             R"#(Sets the angle of the arrowhead used in the display of arrows involved in the presentation of planes.)#"  , py::arg("theAngle"))
        .def("ArrowsAngle",
             (Standard_Real (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Real (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::ArrowsAngle),
             R"#(Returns the angle of the arrowhead used in the display of arrows involved in the presentation of planes.)#" )
        .def("SetDisplayCenterArrow",
             (void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) >(&Prs3d_PlaneAspect::SetDisplayCenterArrow),
             R"#(Sets the display attributes defined in DisplayCenterArrow to active.)#"  , py::arg("theToDraw"))
        .def("DisplayCenterArrow",
             (Standard_Boolean (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Boolean (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::DisplayCenterArrow),
             R"#(Returns true if the display of center arrows is allowed.)#" )
        .def("SetDisplayEdgesArrows",
             (void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) >(&Prs3d_PlaneAspect::SetDisplayEdgesArrows),
             R"#(Sets the display attributes defined in DisplayEdgesArrows to active.)#"  , py::arg("theToDraw"))
        .def("DisplayEdgesArrows",
             (Standard_Boolean (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Boolean (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::DisplayEdgesArrows),
             R"#(Returns true if the display of edge arrows is allowed.)#" )
        .def("SetDisplayEdges",
             (void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) >(&Prs3d_PlaneAspect::SetDisplayEdges),
             R"#(None)#"  , py::arg("theToDraw"))
        .def("DisplayEdges",
             (Standard_Boolean (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Boolean (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::DisplayEdges),
             R"#(None)#" )
        .def("SetDisplayIso",
             (void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Boolean ) >(&Prs3d_PlaneAspect::SetDisplayIso),
             R"#(Sets the display attributes defined in DisplayIso to active.)#"  , py::arg("theToDraw"))
        .def("DisplayIso",
             (Standard_Boolean (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Boolean (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::DisplayIso),
             R"#(Returns true if the display of isoparameters is allowed.)#" )
        .def("SetPlaneLength",
             (void (Prs3d_PlaneAspect::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Real , const Standard_Real ) >(&Prs3d_PlaneAspect::SetPlaneLength),
             R"#(None)#"  , py::arg("theLX"),  py::arg("theLY"))
        .def("PlaneXLength",
             (Standard_Real (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Real (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::PlaneXLength),
             R"#(Returns the length of the x axis used in the display of planes.)#" )
        .def("PlaneYLength",
             (Standard_Real (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Real (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::PlaneYLength),
             R"#(Returns the length of the y axis used in the display of planes.)#" )
        .def("SetIsoDistance",
             (void (Prs3d_PlaneAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_PlaneAspect::*)( const Standard_Real ) >(&Prs3d_PlaneAspect::SetIsoDistance),
             R"#(Sets the distance L between isoparameters used in the display of planes.)#"  , py::arg("theL"))
        .def("IsoDistance",
             (Standard_Real (Prs3d_PlaneAspect::*)() const) static_cast<Standard_Real (Prs3d_PlaneAspect::*)() const>(&Prs3d_PlaneAspect::IsoDistance),
             R"#(Returns the distance between isoparameters used in the display of planes.)#" )
        .def("DumpJson",
             (void (Prs3d_PlaneAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_PlaneAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_PlaneAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_PlaneAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_PointAspect ,opencascade::handle<Prs3d_PointAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_PointAspect"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_AspectMarker3d> & >()  , py::arg("theAspect") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_PointAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_PointAspect::*)() const>(&Prs3d_PointAspect::DynamicType),
             R"#(None)#" )
        .def("SetColor",
             (void (Prs3d_PointAspect::*)( const Quantity_Color & ) ) static_cast<void (Prs3d_PointAspect::*)( const Quantity_Color & ) >(&Prs3d_PointAspect::SetColor),
             R"#(defines the color to be used when drawing a point. Default value: Quantity_NOC_YELLOW)#"  , py::arg("theColor"))
        .def("SetTypeOfMarker",
             (void (Prs3d_PointAspect::*)( const Aspect_TypeOfMarker ) ) static_cast<void (Prs3d_PointAspect::*)( const Aspect_TypeOfMarker ) >(&Prs3d_PointAspect::SetTypeOfMarker),
             R"#(defines the type of representation to be used when drawing a point. Default value: Aspect_TOM_PLUS)#"  , py::arg("theType"))
        .def("SetScale",
             (void (Prs3d_PointAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_PointAspect::*)( const Standard_Real ) >(&Prs3d_PointAspect::SetScale),
             R"#(defines the size of the marker used when drawing a point. Default value: 1.)#"  , py::arg("theScale"))
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectMarker3d> & (Prs3d_PointAspect::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectMarker3d> & (Prs3d_PointAspect::*)() const>(&Prs3d_PointAspect::Aspect),
             R"#(None)#" )
        .def("SetAspect",
             (void (Prs3d_PointAspect::*)( const opencascade::handle<Graphic3d_AspectMarker3d> & ) ) static_cast<void (Prs3d_PointAspect::*)( const opencascade::handle<Graphic3d_AspectMarker3d> & ) >(&Prs3d_PointAspect::SetAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("GetTexture",
             (const opencascade::handle<Graphic3d_MarkerImage> & (Prs3d_PointAspect::*)() const) static_cast<const opencascade::handle<Graphic3d_MarkerImage> & (Prs3d_PointAspect::*)() const>(&Prs3d_PointAspect::GetTexture),
             R"#(Returns marker's texture.)#" )
        .def("DumpJson",
             (void (Prs3d_PointAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_PointAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_PointAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
        .def("GetTextureSize",
             []( Prs3d_PointAspect &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.GetTextureSize(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(Returns marker's texture size.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_PointAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ShadingAspect ,opencascade::handle<Prs3d_ShadingAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_ShadingAspect"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_AspectFillArea3d> & >()  , py::arg("theAspect") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_ShadingAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_ShadingAspect::*)() const>(&Prs3d_ShadingAspect::DynamicType),
             R"#(None)#" )
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectFillArea3d> & (Prs3d_ShadingAspect::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectFillArea3d> & (Prs3d_ShadingAspect::*)() const>(&Prs3d_ShadingAspect::Aspect),
             R"#(Returns the polygons aspect properties.)#" )
        .def("SetAspect",
             (void (Prs3d_ShadingAspect::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> & ) ) static_cast<void (Prs3d_ShadingAspect::*)( const opencascade::handle<Graphic3d_AspectFillArea3d> & ) >(&Prs3d_ShadingAspect::SetAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("DumpJson",
             (void (Prs3d_ShadingAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_ShadingAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_ShadingAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_ShadingAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Prs3d_Text , shared_ptr<Prs3d_Text>>(m,"Prs3d_Text");

    static_cast<py::class_<Prs3d_Text , shared_ptr<Prs3d_Text> , Prs3d_Root>>(m.attr("Prs3d_Text"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Draw_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_Drawer> & , const TCollection_ExtendedString & , const gp_Pnt & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_Drawer> & , const TCollection_ExtendedString & , const gp_Pnt & ) >(&Prs3d_Text::Draw),
                    R"#(Alias to another method Draw() for backward compatibility.)#"  , py::arg("thePrs"),  py::arg("theDrawer"),  py::arg("theText"),  py::arg("theAttachmentPoint"))
        .def_static("Draw_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Ax2 & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Ax2 & , const Standard_Boolean ) >(&Prs3d_Text::Draw),
                    R"#(Alias to another method Draw() for backward compatibility.)#"  , py::arg("thePrs"),  py::arg("theAspect"),  py::arg("theText"),  py::arg("theOrientation"),  py::arg("theHasOwnAnchor")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Draw_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Pnt & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Pnt & ) >(&Prs3d_Text::Draw),
                    R"#(Alias to another method Draw() for backward compatibility.)#"  , py::arg("thePrs"),  py::arg("theAspect"),  py::arg("theText"),  py::arg("theAttachmentPoint"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_TextAspect ,opencascade::handle<Prs3d_TextAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_TextAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_TextAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_TextAspect::*)() const>(&Prs3d_TextAspect::DynamicType),
             R"#(None)#" )
        .def("SetColor",
             (void (Prs3d_TextAspect::*)( const Quantity_Color & ) ) static_cast<void (Prs3d_TextAspect::*)( const Quantity_Color & ) >(&Prs3d_TextAspect::SetColor),
             R"#(Sets the color of the type used in text display.)#"  , py::arg("theColor"))
        .def("SetFont",
             (void (Prs3d_TextAspect::*)( const Standard_CString ) ) static_cast<void (Prs3d_TextAspect::*)( const Standard_CString ) >(&Prs3d_TextAspect::SetFont),
             R"#(Sets the font used in text display.)#"  , py::arg("theFont"))
        .def("SetHeight",
             (void (Prs3d_TextAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_TextAspect::*)( const Standard_Real ) >(&Prs3d_TextAspect::SetHeight),
             R"#(Sets the height of the text.)#"  , py::arg("theHeight"))
        .def("SetAngle",
             (void (Prs3d_TextAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_TextAspect::*)( const Standard_Real ) >(&Prs3d_TextAspect::SetAngle),
             R"#(Sets the angle)#"  , py::arg("theAngle"))
        .def("Height",
             (Standard_Real (Prs3d_TextAspect::*)() const) static_cast<Standard_Real (Prs3d_TextAspect::*)() const>(&Prs3d_TextAspect::Height),
             R"#(Returns the height of the text box.)#" )
        .def("Angle",
             (Standard_Real (Prs3d_TextAspect::*)() const) static_cast<Standard_Real (Prs3d_TextAspect::*)() const>(&Prs3d_TextAspect::Angle),
             R"#(Returns the angle)#" )
        .def("SetHorizontalJustification",
             (void (Prs3d_TextAspect::*)( const Graphic3d_HorizontalTextAlignment ) ) static_cast<void (Prs3d_TextAspect::*)( const Graphic3d_HorizontalTextAlignment ) >(&Prs3d_TextAspect::SetHorizontalJustification),
             R"#(Sets horizontal alignment of text.)#"  , py::arg("theJustification"))
        .def("SetVerticalJustification",
             (void (Prs3d_TextAspect::*)( const Graphic3d_VerticalTextAlignment ) ) static_cast<void (Prs3d_TextAspect::*)( const Graphic3d_VerticalTextAlignment ) >(&Prs3d_TextAspect::SetVerticalJustification),
             R"#(Sets the vertical alignment of text.)#"  , py::arg("theJustification"))
        .def("SetOrientation",
             (void (Prs3d_TextAspect::*)( const Graphic3d_TextPath ) ) static_cast<void (Prs3d_TextAspect::*)( const Graphic3d_TextPath ) >(&Prs3d_TextAspect::SetOrientation),
             R"#(Sets the orientation of text.)#"  , py::arg("theOrientation"))
        .def("HorizontalJustification",
             (Graphic3d_HorizontalTextAlignment (Prs3d_TextAspect::*)() const) static_cast<Graphic3d_HorizontalTextAlignment (Prs3d_TextAspect::*)() const>(&Prs3d_TextAspect::HorizontalJustification),
             R"#(Returns the horizontal alignment of the text. The range of values includes: - left - center - right, and - normal (justified).)#" )
        .def("VerticalJustification",
             (Graphic3d_VerticalTextAlignment (Prs3d_TextAspect::*)() const) static_cast<Graphic3d_VerticalTextAlignment (Prs3d_TextAspect::*)() const>(&Prs3d_TextAspect::VerticalJustification),
             R"#(Returns the vertical alignment of the text. The range of values includes: - normal - top - cap - half - base - bottom)#" )
        .def("Orientation",
             (Graphic3d_TextPath (Prs3d_TextAspect::*)() const) static_cast<Graphic3d_TextPath (Prs3d_TextAspect::*)() const>(&Prs3d_TextAspect::Orientation),
             R"#(Returns the orientation of the text. Text can be displayed in the following directions: - up - down - left, or - right)#" )
        .def("Aspect",
             (const opencascade::handle<Graphic3d_AspectText3d> & (Prs3d_TextAspect::*)() const) static_cast<const opencascade::handle<Graphic3d_AspectText3d> & (Prs3d_TextAspect::*)() const>(&Prs3d_TextAspect::Aspect),
             R"#(Returns the purely textual attributes used in the display of text. These include: - color - font - height/width ratio, that is, the expansion factor, and - space between characters.)#" )
        .def("SetAspect",
             (void (Prs3d_TextAspect::*)( const opencascade::handle<Graphic3d_AspectText3d> & ) ) static_cast<void (Prs3d_TextAspect::*)( const opencascade::handle<Graphic3d_AspectText3d> & ) >(&Prs3d_TextAspect::SetAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("DumpJson",
             (void (Prs3d_TextAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_TextAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_TextAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_TextAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolCylinder , shared_ptr<Prs3d_ToolCylinder> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolCylinder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolDisk , shared_ptr<Prs3d_ToolDisk> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolDisk"))
    // constructors
    // custom constructors
    // methods
        .def("SetAngleRange",
             (void (Prs3d_ToolDisk::*)( Standard_Real , Standard_Real ) ) static_cast<void (Prs3d_ToolDisk::*)( Standard_Real , Standard_Real ) >(&Prs3d_ToolDisk::SetAngleRange),
             R"#(Set angle range in radians [0, 2*PI] by default.)#"  , py::arg("theStartAngle"),  py::arg("theEndAngle"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolSector , shared_ptr<Prs3d_ToolSector> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolSector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolSphere , shared_ptr<Prs3d_ToolSphere> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolSphere"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_IsoAspect ,opencascade::handle<Prs3d_IsoAspect> , Prs3d_LineAspect>>(m.attr("Prs3d_IsoAspect"))
    // constructors
        .def(py::init< const Quantity_Color &,const Aspect_TypeOfLine,const Standard_Real,const Standard_Integer >()  , py::arg("theColor"),  py::arg("theType"),  py::arg("theWidth"),  py::arg("theNumber") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_IsoAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_IsoAspect::*)() const>(&Prs3d_IsoAspect::DynamicType),
             R"#(None)#" )
        .def("SetNumber",
             (void (Prs3d_IsoAspect::*)( const Standard_Integer ) ) static_cast<void (Prs3d_IsoAspect::*)( const Standard_Integer ) >(&Prs3d_IsoAspect::SetNumber),
             R"#(defines the number of U or V isoparametric curves to be drawn for a single face. Default value: 10)#"  , py::arg("theNumber"))
        .def("Number",
             (Standard_Integer (Prs3d_IsoAspect::*)() const) static_cast<Standard_Integer (Prs3d_IsoAspect::*)() const>(&Prs3d_IsoAspect::Number),
             R"#(returns the number of U or V isoparametric curves drawn for a single face.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_IsoAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Prs3d_DatumAttribute.hxx
// ./opencascade/Prs3d_ToolSector.hxx
// ./opencascade/Prs3d_ArrowAspect.hxx
// ./opencascade/Prs3d_DatumParts.hxx
// ./opencascade/Prs3d_Point.hxx
// ./opencascade/Prs3d_Projector.hxx
// ./opencascade/Prs3d_NListIteratorOfListOfSequenceOfPnt.hxx
// ./opencascade/Prs3d_TextAspect.hxx
// ./opencascade/Prs3d_DatumAspect.hxx
// ./opencascade/Prs3d_ToolQuadric.hxx
// ./opencascade/Prs3d_DimensionTextHorizontalPosition.hxx
// ./opencascade/Prs3d_DimensionTextVerticalPosition.hxx
// ./opencascade/Prs3d_Drawer.hxx
// ./opencascade/Prs3d_Text.hxx
// ./opencascade/Prs3d_LineAspect.hxx
// ./opencascade/Prs3d_DatumAxes.hxx
// ./opencascade/Prs3d_TypeOfHLR.hxx
// ./opencascade/Prs3d_PresentationShadow.hxx
// ./opencascade/Prs3d_PointAspect.hxx
// ./opencascade/Prs3d_ShapeTool.hxx
// ./opencascade/Prs3d_TypeOfLinePicking.hxx
// ./opencascade/Prs3d_PlaneAspect.hxx
// ./opencascade/Prs3d_NListOfSequenceOfPnt.hxx
// ./opencascade/Prs3d_BasicAspect.hxx
// ./opencascade/Prs3d_InvalidAngle.hxx
// ./opencascade/Prs3d.hxx
// ./opencascade/Prs3d_Presentation.hxx
// ./opencascade/Prs3d_ToolSphere.hxx
// ./opencascade/Prs3d_DimensionUnits.hxx
// ./opencascade/Prs3d_IsoAspect.hxx
// ./opencascade/Prs3d_Root.hxx
// ./opencascade/Prs3d_TypeOfHighlight.hxx
// ./opencascade/Prs3d_ToolDisk.hxx
// ./opencascade/Prs3d_Arrow.hxx
// ./opencascade/Prs3d_VertexDrawMode.hxx
// ./opencascade/Prs3d_ShadingAspect.hxx
// ./opencascade/Prs3d_DimensionAspect.hxx
// ./opencascade/Prs3d_DatumMode.hxx
// ./opencascade/Prs3d_DimensionArrowOrientation.hxx
// ./opencascade/Prs3d_ToolCylinder.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> >(m,"Prs3d_NListOfSequenceOfPnt");


// exceptions
register_occ_exception<Prs3d_InvalidAngle>(m, "Prs3d_InvalidAngle");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
