
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Bnd_Box.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_DimensionAspect.hxx>

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
        .def_static("MatchSegment_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const gp_Pnt & , const gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const gp_Pnt & , const gp_Pnt & , Standard_Real & ) >(&Prs3d::MatchSegment),
                    R"#(draws an arrow at a given location, with respect to a given direction.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("p1"),  py::arg("p2"),  py::arg("dist"))
        .def_static("GetDeflection_s",
                    (Standard_Real (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d::GetDeflection),
                    R"#(Computes the absolute deflection value depending on the type of deflection in theDrawer: Aspect_TOD_RELATIVE: the absolute deflection is computed using the relative deviation coefficient from theDrawer and the shape's bounding box; Aspect_TOD_ABSOLUTE: the maximal chordial deviation from theDrawer is returned. In case of the type of deflection in theDrawer computed relative deflection for shape is stored as absolute deflection. It is necessary to use it later on for sub-shapes. This function should always be used to compute the deflection value for building discrete representations of the shape (triangualtion, wireframe) to avoid incosistencies between different representations of the shape and undesirable visual artifacts.)#"  , py::arg("theShape"),  py::arg("theDrawer"))
        .def_static("PrimitivesFromPolylines_s",
                    (opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)(  const NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)(  const NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&Prs3d::PrimitivesFromPolylines),
                    R"#(Assembles array of primitives for sequence of polylines.)#"  , py::arg("thePoints"))
        .def_static("AddPrimitivesGroup_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_LineAspect> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Prs3d_LineAspect> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&Prs3d::AddPrimitivesGroup),
                    R"#(Add primitives into new group in presentation and clear the list of polylines.)#"  , py::arg("thePrs"),  py::arg("theAspect"),  py::arg("thePolylines"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_BasicAspect::get_type_descriptor),
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_Drawer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DynamicType),
             R"#(None)#" )
        .def("SetTypeOfDeflection",
             (void (Prs3d_Drawer::*)( const Aspect_TypeOfDeflection ) ) static_cast<void (Prs3d_Drawer::*)( const Aspect_TypeOfDeflection ) >(&Prs3d_Drawer::SetTypeOfDeflection),
             R"#(Sets the type of chordal deflection. This indicates whether the deflection value is absolute or relative to the size of the object.)#"  , py::arg("theTypeOfDeflection"))
        .def("TypeOfDeflection",
             (Aspect_TypeOfDeflection (Prs3d_Drawer::*)() const) static_cast<Aspect_TypeOfDeflection (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::TypeOfDeflection),
             R"#(Returns the type of chordal deflection. This indicates whether the deflection value is absolute or relative to the size of the object.)#" )
        .def("HasOwnTypeOfDeflection",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnTypeOfDeflection),
             R"#(Returns true if the drawer has a type of deflection setting active.)#" )
        .def("SetMaximalChordialDeviation",
             (void (Prs3d_Drawer::*)( const Standard_Real ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Real ) >(&Prs3d_Drawer::SetMaximalChordialDeviation),
             R"#(Defines the maximal chordial deviation when drawing any curve. Even if the type of deviation is set to TOD_Relative, this value is used by: Prs3d_DeflectionCurve Prs3d_WFDeflectionSurface Prs3d_WFDeflectionRestrictedFace)#"  , py::arg("theChordialDeviation"))
        .def("MaximalChordialDeviation",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::MaximalChordialDeviation),
             R"#(Returns the maximal chordal deviation. The default value is 0.1. Drawings of curves or patches are made with respect to an absolute maximal chordal deviation.)#" )
        .def("HasOwnMaximalChordialDeviation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnMaximalChordialDeviation),
             R"#(Returns true if the drawer has a maximal chordial deviation setting active.)#" )
        .def("SetTypeOfHLR",
             (void (Prs3d_Drawer::*)( const Prs3d_TypeOfHLR ) ) static_cast<void (Prs3d_Drawer::*)( const Prs3d_TypeOfHLR ) >(&Prs3d_Drawer::SetTypeOfHLR),
             R"#(Sets the type of HLR algorithm used by drawer's interactive objects)#"  , py::arg("theTypeOfHLR"))
        .def("TypeOfHLR",
             (Prs3d_TypeOfHLR (Prs3d_Drawer::*)() ) static_cast<Prs3d_TypeOfHLR (Prs3d_Drawer::*)() >(&Prs3d_Drawer::TypeOfHLR),
             R"#(Returns the type of HLR algorithm currently in use.)#" )
        .def("HasOwnTypeOfHLR",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnTypeOfHLR),
             R"#(Returns true if the type of HLR is not equal to Prs3d_TOH_NotSet.)#" )
        .def("SetMaximalParameterValue",
             (void (Prs3d_Drawer::*)( const Standard_Real ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Real ) >(&Prs3d_Drawer::SetMaximalParameterValue),
             R"#(Defines the maximum value allowed for the first and last parameters of an infinite curve.)#"  , py::arg("theValue"))
        .def("MaximalParameterValue",
             (Standard_Real (Prs3d_Drawer::*)() const) static_cast<Standard_Real (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::MaximalParameterValue),
             R"#(Sets the maximum value allowed for the first and last parameters of an infinite curve. By default, this value is 500000.)#" )
        .def("HasOwnMaximalParameterValue",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnMaximalParameterValue),
             R"#(Returns true if the drawer has a maximum value allowed for the first and last parameters of an infinite curve setting active.)#" )
        .def("SetIsoOnPlane",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetIsoOnPlane),
             R"#(Sets IsoOnPlane on or off by setting the parameter theIsEnabled to true or false.)#"  , py::arg("theIsEnabled"))
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
        .def("SetIsoOnTriangulation",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetIsoOnTriangulation),
             R"#(Enables or disables isolines on triangulation by setting the parameter theIsEnabled to true or false.)#"  , py::arg("theToEnable"))
        .def("SetDiscretisation",
             (void (Prs3d_Drawer::*)( const Standard_Integer ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Integer ) >(&Prs3d_Drawer::SetDiscretisation),
             R"#(Sets the discretisation parameter theValue.)#"  , py::arg("theValue"))
        .def("Discretisation",
             (Standard_Integer (Prs3d_Drawer::*)() const) static_cast<Standard_Integer (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::Discretisation),
             R"#(Returns the discretisation setting.)#" )
        .def("HasOwnDiscretisation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDiscretisation),
             R"#(Returns true if the drawer has discretisation setting active.)#" )
        .def("SetDeviationCoefficient",
             (void (Prs3d_Drawer::*)( const Standard_Real ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Real ) >(&Prs3d_Drawer::SetDeviationCoefficient),
             R"#(Sets the deviation coefficient theCoefficient. Also sets the hasOwnDeviationCoefficient flag to Standard_True and myPreviousDeviationCoefficient)#"  , py::arg("theCoefficient"))
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
        .def("SetHLRDeviationCoefficient",
             (void (Prs3d_Drawer::*)( const Standard_Real ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Real ) >(&Prs3d_Drawer::SetHLRDeviationCoefficient),
             R"#(Sets the deviation coefficient aCoefficient for removal of hidden lines created by different viewpoints in different presentations. The Default value is 0.02. Also sets the hasOwnHLRDeviationCoefficient flag to Standard_True and myPreviousHLRDeviationCoefficient)#"  , py::arg("theCoefficient"))
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
        .def("SetDeviationAngle",
             (void (Prs3d_Drawer::*)( const Standard_Real ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Real ) >(&Prs3d_Drawer::SetDeviationAngle),
             R"#(Sets the deviation angle theAngle. Also sets the hasOwnDeviationAngle flag to Standard_True, and myPreviousDeviationAngle.)#"  , py::arg("theAngle"))
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
        .def("SetHLRAngle",
             (void (Prs3d_Drawer::*)( const Standard_Real ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Real ) >(&Prs3d_Drawer::SetHLRAngle),
             R"#(Sets anAngle, the angle of maximum chordal deviation for removal of hidden lines created by different viewpoints in different presentations. The default value is 20 * M_PI / 180. Also sets the hasOwnHLRDeviationAngle flag to Standard_True and myPreviousHLRDeviationAngle.)#"  , py::arg("theAngle"))
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
        .def("SetAutoTriangulation",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetAutoTriangulation),
             R"#(Sets IsAutoTriangulated on or off by setting the parameter theIsEnabled to true or false. If this flag is True automatic re-triangulation with deflection-check logic will be applied. Else this feature will be disable and triangulation is expected to be computed by application itself and no shading presentation at all if unavailable.)#"  , py::arg("theIsEnabled"))
        .def("IsAutoTriangulation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::IsAutoTriangulation),
             R"#(Returns True if automatic triangulation is enabled.)#" )
        .def("HasOwnIsAutoTriangulation",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnIsAutoTriangulation),
             R"#(Returns true if the drawer has IsoOnPlane setting active.)#" )
        .def("UIsoAspect",
             (const opencascade::handle<Prs3d_IsoAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_IsoAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::UIsoAspect),
             R"#(Defines the attributes which are used when drawing an U isoparametric curve of a face. Defines the number of U isoparametric curves to be drawn for a single face. The LineAspect for U isoparametric lines can be edited (methods SetColor, SetTypeOfLine, SetWidth, SetNumber) The default values are: COLOR : Quantity_NOC_GRAY75 TYPE OF LINE: Aspect_TOL_SOLID WIDTH : 0.5)#" )
        .def("SetUIsoAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_IsoAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_IsoAspect> & ) >(&Prs3d_Drawer::SetUIsoAspect),
             R"#(None)#"  , py::arg("theAspect"))
        .def("HasOwnUIsoAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnUIsoAspect),
             R"#(Returns true if the drawer has its own attribute for UIso aspect that overrides the one in the link.)#" )
        .def("VIsoAspect",
             (const opencascade::handle<Prs3d_IsoAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_IsoAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::VIsoAspect),
             R"#(Defines the attributes which are used when drawing an V isoparametric curve of a face. Defines the number of V isoparametric curves to be drawn for a single face. The LineAspect for V isoparametric lines can be edited (methods SetColor, SetTypeOfLine, SetWidth, SetNumber) The default values are: COLOR : Quantity_NOC_GRAY82 TYPE OF LINE: Aspect_TOL_SOLID WIDTH : 0.5)#" )
        .def("SetVIsoAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_IsoAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_IsoAspect> & ) >(&Prs3d_Drawer::SetVIsoAspect),
             R"#(Sets the appearance of V isoparameters - theAspect.)#"  , py::arg("theAspect"))
        .def("HasOwnVIsoAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnVIsoAspect),
             R"#(Returns true if the drawer has its own attribute for VIso aspect that overrides the one in the link.)#" )
        .def("WireAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::WireAspect),
             R"#(Returns wire aspect settings. The LineAspect for the free boundaries can be edited. The default values are: Color: Quantity_NOC_GREEN Type of line: Aspect_TOL_SOLID Width: 1.0 These attributes are used by the algorithm Prs3d_WFShape.)#" )
        .def("SetWireAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetWireAspect),
             R"#(Sets the parameter theAspect for display of wires.)#"  , py::arg("theAspect"))
        .def("HasOwnWireAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnWireAspect),
             R"#(Returns true if the drawer has its own attribute for wire aspect that overrides the one in the link.)#" )
        .def("SetWireDraw",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetWireDraw),
             R"#(Sets WireDraw on or off by setting the parameter theIsEnabled to true or false.)#"  , py::arg("theIsEnabled"))
        .def("WireDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::WireDraw),
             R"#(Returns True if the drawing of the wire is enabled.)#" )
        .def("HasOwnWireDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnWireDraw),
             R"#(Returns true if the drawer has its own attribute for "draw wires" flag that overrides the one in the link.)#" )
        .def("PointAspect",
             (const opencascade::handle<Prs3d_PointAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_PointAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::PointAspect),
             R"#(Returns the point aspect setting. The default values are Color: Quantity_NOC_YELLOW Type of marker: Aspect_TOM_PLUS Scale: 1.0 These attributes are used by the algorithms Prs3d_Point.)#" )
        .def("SetPointAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_PointAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_PointAspect> & ) >(&Prs3d_Drawer::SetPointAspect),
             R"#(Sets the parameter theAspect for display attributes of points)#"  , py::arg("theAspect"))
        .def("HasOwnPointAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnPointAspect),
             R"#(Returns true if the drawer has its own attribute for point aspect that overrides the one in the link.)#" )
        .def("SetupOwnPointAspect",
             (Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d_Drawer::SetupOwnPointAspect),
             R"#(Sets own point aspect. Returns FALSE if the drawer already has its own attribute for point aspect.)#"  , py::arg("theDefaults")=static_cast<const opencascade::handle<Prs3d_Drawer> &>(Handle ( Prs3d_Drawer ) ( )))
        .def("LineAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::LineAspect),
             R"#(Returns settings for line aspects. These settings can be edited. The default values are: Color: Quantity_NOC_YELLOW Type of line: Aspect_TOL_SOLID Width: 1.0 These attributes are used by the following algorithms: Prs3d_Curve Prs3d_Line Prs3d_HLRShape)#" )
        .def("SetLineAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetLineAspect),
             R"#(Sets the parameter theAspect for display attributes of lines.)#"  , py::arg("theAspect"))
        .def("HasOwnLineAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnLineAspect),
             R"#(Returns true if the drawer has its own attribute for line aspect that overrides the one in the link.)#" )
        .def("SetOwnLineAspects",
             (Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d_Drawer::SetOwnLineAspects),
             R"#(Sets own line aspects. Returns FALSE if own line aspect are already set.)#"  , py::arg("theDefaults")=static_cast<const opencascade::handle<Prs3d_Drawer> &>(Handle ( Prs3d_Drawer ) ( )))
        .def("SetOwnDatumAspects",
             (Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d_Drawer::SetOwnDatumAspects),
             R"#(Sets own line aspects for datums. Returns FALSE if own line for datums are already set.)#"  , py::arg("theDefaults")=static_cast<const opencascade::handle<Prs3d_Drawer> &>(Handle ( Prs3d_Drawer ) ( )))
        .def("TextAspect",
             (const opencascade::handle<Prs3d_TextAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_TextAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::TextAspect),
             R"#(Returns settings for text aspect. These settings can be edited. The default value is: - Color: Quantity_NOC_YELLOW)#" )
        .def("SetTextAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_TextAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_TextAspect> & ) >(&Prs3d_Drawer::SetTextAspect),
             R"#(Sets the parameter theAspect for display attributes of text.)#"  , py::arg("theAspect"))
        .def("HasOwnTextAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnTextAspect),
             R"#(Returns true if the drawer has its own attribute for text aspect that overrides the one in the link.)#" )
        .def("ShadingAspect",
             (const opencascade::handle<Prs3d_ShadingAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_ShadingAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::ShadingAspect),
             R"#(Returns settings for shading aspects. These settings can be edited. The default values are: - Color: Quantity_NOC_YELLOW - Material: Graphic3d_NOM_BRASS Shading aspect is obtained through decomposition of 3d faces into triangles, each side of each triangle being a chord of the corresponding curved edge in the face. Reflection of light in each projector perspective is then calculated for each of the resultant triangular planes.)#" )
        .def("SetShadingAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_ShadingAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_ShadingAspect> & ) >(&Prs3d_Drawer::SetShadingAspect),
             R"#(Sets the parameter theAspect for display attributes of shading.)#"  , py::arg("theAspect"))
        .def("HasOwnShadingAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnShadingAspect),
             R"#(Returns true if the drawer has its own attribute for shading aspect that overrides the one in the link.)#" )
        .def("SetupOwnShadingAspect",
             (Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d_Drawer::SetupOwnShadingAspect),
             R"#(Sets own shading aspect. Returns FALSE if the drawer already has its own attribute for shading aspect.)#"  , py::arg("theDefaults")=static_cast<const opencascade::handle<Prs3d_Drawer> &>(Handle ( Prs3d_Drawer ) ( )))
        .def("SeenLineAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::SeenLineAspect),
             R"#(Returns settings for seen line aspects. These settings can be edited. The default values are: Color: Quantity_NOC_YELLOW Type of line: Aspect_TOL_SOLID Width: 1.0)#" )
        .def("SetSeenLineAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetSeenLineAspect),
             R"#(Sets the parameter theAspect for the display of seen lines in hidden line removal mode.)#"  , py::arg("theAspect"))
        .def("HasOwnSeenLineAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnSeenLineAspect),
             R"#(Returns true if the drawer has its own attribute for seen line aspect that overrides the one in the link.)#" )
        .def("PlaneAspect",
             (const opencascade::handle<Prs3d_PlaneAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_PlaneAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::PlaneAspect),
             R"#(Returns settings for the appearance of planes.)#" )
        .def("SetPlaneAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_PlaneAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_PlaneAspect> & ) >(&Prs3d_Drawer::SetPlaneAspect),
             R"#(Sets the parameter theAspect for the display of planes.)#"  , py::arg("theAspect"))
        .def("HasOwnPlaneAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnPlaneAspect),
             R"#(Returns true if the drawer has its own attribute for plane aspect that overrides the one in the link.)#" )
        .def("ArrowAspect",
             (const opencascade::handle<Prs3d_ArrowAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_ArrowAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::ArrowAspect),
             R"#(Returns the attributes for display of arrows.)#" )
        .def("SetArrowAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_ArrowAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_ArrowAspect> & ) >(&Prs3d_Drawer::SetArrowAspect),
             R"#(Sets the parameter theAspect for display attributes of arrows.)#"  , py::arg("theAspect"))
        .def("HasOwnArrowAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnArrowAspect),
             R"#(Returns true if the drawer has its own attribute for arrow aspect that overrides the one in the link.)#" )
        .def("SetLineArrowDraw",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetLineArrowDraw),
             R"#(Enables the drawing of an arrow at the end of each line. By default the arrows are not drawn.)#"  , py::arg("theIsEnabled"))
        .def("LineArrowDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::LineArrowDraw),
             R"#(Returns True if drawing an arrow at the end of each edge is enabled and False otherwise (the default).)#" )
        .def("HasOwnLineArrowDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnLineArrowDraw),
             R"#(Returns true if the drawer has its own attribute for "draw arrow" flag that overrides the one in the link.)#" )
        .def("HiddenLineAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::HiddenLineAspect),
             R"#(Returns settings for hidden line aspects. These settings can be edited. The default values are: Color: Quantity_NOC_YELLOW Type of line: Aspect_TOL_DASH Width: 1.0)#" )
        .def("SetHiddenLineAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetHiddenLineAspect),
             R"#(Sets the parameter theAspect for the display of hidden lines in hidden line removal mode.)#"  , py::arg("theAspect"))
        .def("HasOwnHiddenLineAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnHiddenLineAspect),
             R"#(Returns true if the drawer has its own attribute for hidden lines aspect that overrides the one in the link.)#" )
        .def("DrawHiddenLine",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::DrawHiddenLine),
             R"#(Returns Standard_True if the hidden lines are to be drawn. By default the hidden lines are not drawn.)#" )
        .def("EnableDrawHiddenLine",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::EnableDrawHiddenLine),
             R"#(Enables the DrawHiddenLine function.)#" )
        .def("DisableDrawHiddenLine",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::DisableDrawHiddenLine),
             R"#(Disables the DrawHiddenLine function.)#" )
        .def("HasOwnDrawHiddenLine",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDrawHiddenLine),
             R"#(Returns true if the drawer has its own attribute for "draw hidden lines" flag that overrides the one in the link.)#" )
        .def("VectorAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::VectorAspect),
             R"#(Returns settings for the appearance of vectors. These settings can be edited. The default values are: Color: Quantity_NOC_SKYBLUE Type of line: Aspect_TOL_SOLID Width: 1.0)#" )
        .def("SetVectorAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetVectorAspect),
             R"#(Sets the modality theAspect for the display of vectors.)#"  , py::arg("theAspect"))
        .def("HasOwnVectorAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnVectorAspect),
             R"#(Returns true if the drawer has its own attribute for vector aspect that overrides the one in the link.)#" )
        .def("SetVertexDrawMode",
             (void (Prs3d_Drawer::*)( const Prs3d_VertexDrawMode ) ) static_cast<void (Prs3d_Drawer::*)( const Prs3d_VertexDrawMode ) >(&Prs3d_Drawer::SetVertexDrawMode),
             R"#(Sets the mode of visualization of vertices of a TopoDS_Shape instance. By default, only stand-alone vertices (not belonging topologically to an edge) are drawn, that corresponds to Prs3d_VDM_Standalone mode. Switching to Prs3d_VDM_Standalone mode makes all shape's vertices visible. To inherit this parameter from the global drawer instance ("the link") when it is present, Prs3d_VDM_Inherited value should be used.)#"  , py::arg("theMode"))
        .def("VertexDrawMode",
             (Prs3d_VertexDrawMode (Prs3d_Drawer::*)() ) static_cast<Prs3d_VertexDrawMode (Prs3d_Drawer::*)() >(&Prs3d_Drawer::VertexDrawMode),
             R"#(Returns the current mode of visualization of vertices of a TopoDS_Shape instance.)#" )
        .def("HasOwnVertexDrawMode",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnVertexDrawMode),
             R"#(Returns true if the vertex draw mode is not equal to Prs3d_VDM_Inherited. This means that individual vertex draw mode value (i.e. not inherited from the global drawer) is used for a specific interactive object.)#" )
        .def("DatumAspect",
             (const opencascade::handle<Prs3d_DatumAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_DatumAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::DatumAspect),
             R"#(Returns settings for the appearance of datums. These settings can be edited. The default values for the three axes are: Color: Quantity_NOC_PEACHPUFF Type of line: Aspect_TOL_SOLID Width: 1.0)#" )
        .def("SetDatumAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_DatumAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_DatumAspect> & ) >(&Prs3d_Drawer::SetDatumAspect),
             R"#(Sets the modality theAspect for the display of datums.)#"  , py::arg("theAspect"))
        .def("HasOwnDatumAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDatumAspect),
             R"#(Returns true if the drawer has its own attribute for datum aspect that overrides the one in the link.)#" )
        .def("SectionAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::SectionAspect),
             R"#(The LineAspect for the wire can be edited. The default values are: Color: Quantity_NOC_ORANGE Type of line: Aspect_TOL_SOLID Width: 1.0 These attributes are used by the algorithm Prs3d_WFShape.)#" )
        .def("SetSectionAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetSectionAspect),
             R"#(Sets the parameter theAspect for display attributes of sections.)#"  , py::arg("theAspect"))
        .def("HasOwnSectionAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnSectionAspect),
             R"#(Returns true if the drawer has its own attribute for section aspect that overrides the one in the link.)#" )
        .def("SetFreeBoundaryAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetFreeBoundaryAspect),
             R"#(Sets the parameter theAspect for the display of free boundaries. The method sets aspect owned by the drawer that will be used during visualization instead of the one set in link.)#"  , py::arg("theAspect"))
        .def("FreeBoundaryAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::FreeBoundaryAspect),
             R"#(Returns the values for presentation of free boundaries, in other words, boundaries which are not shared. The LineAspect for the free boundaries can be edited. The default values are: Color: Quantity_NOC_GREEN Type of line: Aspect_TOL_SOLID Width: 1.0 These attributes are used by the algorithm Prs3d_WFShape)#" )
        .def("HasOwnFreeBoundaryAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFreeBoundaryAspect),
             R"#(Returns true if the drawer has its own attribute for free boundaries aspect that overrides the one in the link.)#" )
        .def("SetFreeBoundaryDraw",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetFreeBoundaryDraw),
             R"#(Enables or disables drawing of free boundaries for shading presentations. The method sets drawing flag owned by the drawer that will be used during visualization instead of the one set in link. theIsEnabled is a boolean flag indicating whether the free boundaries should be drawn or not.)#"  , py::arg("theIsEnabled"))
        .def("FreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::FreeBoundaryDraw),
             R"#(Returns True if the drawing of the free boundaries is enabled True is the default setting.)#" )
        .def("HasOwnFreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFreeBoundaryDraw),
             R"#(Returns true if the drawer has its own attribute for "draw free boundaries" flag that overrides the one in the link.)#" )
        .def("SetUnFreeBoundaryAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetUnFreeBoundaryAspect),
             R"#(Sets the parameter theAspect for the display of shared boundaries. The method sets aspect owned by the drawer that will be used during visualization instead of the one set in link.)#"  , py::arg("theAspect"))
        .def("UnFreeBoundaryAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::UnFreeBoundaryAspect),
             R"#(Returns settings for shared boundary line aspects. The LineAspect for the unfree boundaries can be edited. The default values are: Color: Quantity_NOC_YELLOW Type of line: Aspect_TOL_SOLID Width: 1. These attributes are used by the algorithm Prs3d_WFShape)#" )
        .def("HasOwnUnFreeBoundaryAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnUnFreeBoundaryAspect),
             R"#(Returns true if the drawer has its own attribute for unfree boundaries aspect that overrides the one in the link.)#" )
        .def("SetUnFreeBoundaryDraw",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetUnFreeBoundaryDraw),
             R"#(Enables or disables drawing of shared boundaries for shading presentations. The method sets drawing flag owned by the drawer that will be used during visualization instead of the one set in link. theIsEnabled is a boolean flag indicating whether the shared boundaries should be drawn or not.)#"  , py::arg("theIsEnabled"))
        .def("UnFreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::UnFreeBoundaryDraw),
             R"#(Returns True if the drawing of the shared boundaries is enabled. True is the default setting.)#" )
        .def("HasOwnUnFreeBoundaryDraw",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnUnFreeBoundaryDraw),
             R"#(Returns true if the drawer has its own attribute for "draw shared boundaries" flag that overrides the one in the link.)#" )
        .def("SetFaceBoundaryAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_LineAspect> & ) >(&Prs3d_Drawer::SetFaceBoundaryAspect),
             R"#(Sets line aspect for face boundaries. The method sets line aspect owned by the drawer that will be used during visualization instead of the one set in link. theAspect is the line aspect that determines the look of the face boundaries.)#"  , py::arg("theAspect"))
        .def("FaceBoundaryAspect",
             (const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_LineAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::FaceBoundaryAspect),
             R"#(Returns line aspect of face boundaries.)#" )
        .def("HasOwnFaceBoundaryAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnFaceBoundaryAspect),
             R"#(Returns true if the drawer has its own attribute for face boundaries aspect that overrides the one in the link.)#" )
        .def("SetupOwnFaceBoundaryAspect",
             (Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&Prs3d_Drawer::SetupOwnFaceBoundaryAspect),
             R"#(Sets own face boundary aspect. Returns FALSE if the drawer already has its own attribute for face boundary aspect.)#"  , py::arg("theDefaults")=static_cast<const opencascade::handle<Prs3d_Drawer> &>(Handle ( Prs3d_Drawer ) ( )))
        .def("SetFaceBoundaryDraw",
             (void (Prs3d_Drawer::*)( const Standard_Boolean ) ) static_cast<void (Prs3d_Drawer::*)( const Standard_Boolean ) >(&Prs3d_Drawer::SetFaceBoundaryDraw),
             R"#(Enables or disables face boundary drawing for shading presentations. The method sets drawing flag owned by the drawer that will be used during visualization instead of the one set in link. theIsEnabled is a boolean flag indicating whether the face boundaries should be drawn or not.)#"  , py::arg("theIsEnabled"))
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
        .def("DimensionAspect",
             (const opencascade::handle<Prs3d_DimensionAspect> & (Prs3d_Drawer::*)() ) static_cast<const opencascade::handle<Prs3d_DimensionAspect> & (Prs3d_Drawer::*)() >(&Prs3d_Drawer::DimensionAspect),
             R"#(Returns settings for the appearance of dimensions.)#" )
        .def("SetDimensionAspect",
             (void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_DimensionAspect> & ) ) static_cast<void (Prs3d_Drawer::*)( const opencascade::handle<Prs3d_DimensionAspect> & ) >(&Prs3d_Drawer::SetDimensionAspect),
             R"#(Sets the settings for the appearance of dimensions. The method sets aspect owned by the drawer that will be used during visualization instead of the one set in link.)#"  , py::arg("theAspect"))
        .def("HasOwnDimensionAspect",
             (Standard_Boolean (Prs3d_Drawer::*)() const) static_cast<Standard_Boolean (Prs3d_Drawer::*)() const>(&Prs3d_Drawer::HasOwnDimensionAspect),
             R"#(Returns true if the drawer has its own attribute for the appearance of dimensions that overrides the one in the link.)#" )
        .def("SetDimLengthModelUnits",
             (void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) ) static_cast<void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) >(&Prs3d_Drawer::SetDimLengthModelUnits),
             R"#(Sets dimension length model units for computing of dimension presentation. The method sets value owned by the drawer that will be used during visualization instead of the one set in link.)#"  , py::arg("theUnits"))
        .def("SetDimAngleModelUnits",
             (void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) ) static_cast<void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) >(&Prs3d_Drawer::SetDimAngleModelUnits),
             R"#(Sets dimension angle model units for computing of dimension presentation. The method sets value owned by the drawer that will be used during visualization instead of the one set in link.)#"  , py::arg("theUnits"))
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
        .def("SetDimLengthDisplayUnits",
             (void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) ) static_cast<void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) >(&Prs3d_Drawer::SetDimLengthDisplayUnits),
             R"#(Sets length units in which value for dimension presentation is displayed. The method sets value owned by the drawer that will be used during visualization instead of the one set in link.)#"  , py::arg("theUnits"))
        .def("SetDimAngleDisplayUnits",
             (void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) ) static_cast<void (Prs3d_Drawer::*)( const TCollection_AsciiString & ) >(&Prs3d_Drawer::SetDimAngleDisplayUnits),
             R"#(Sets angle units in which value for dimension presentation is displayed. The method sets value owned by the drawer that will be used during visualization instead of the one set in link.)#"  , py::arg("theUnits"))
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
        .def("ClearLocalAttributes",
             (void (Prs3d_Drawer::*)() ) static_cast<void (Prs3d_Drawer::*)() >(&Prs3d_Drawer::ClearLocalAttributes),
             R"#(Removes local attributes.)#" )
        .def("SetShaderProgram",
             (bool (Prs3d_Drawer::*)( const opencascade::handle<Graphic3d_ShaderProgram> & , const Graphic3d_GroupAspect , const bool ) ) static_cast<bool (Prs3d_Drawer::*)( const opencascade::handle<Graphic3d_ShaderProgram> & , const Graphic3d_GroupAspect , const bool ) >(&Prs3d_Drawer::SetShaderProgram),
             R"#(Assign shader program for specified type of primitives.)#"  , py::arg("theProgram"),  py::arg("theAspect"),  py::arg("theToOverrideDefaults")=static_cast<const bool>(false))
        .def("SetShadingModel",
             (bool (Prs3d_Drawer::*)( Graphic3d_TypeOfShadingModel , bool ) ) static_cast<bool (Prs3d_Drawer::*)( Graphic3d_TypeOfShadingModel , bool ) >(&Prs3d_Drawer::SetShadingModel),
             R"#(Sets Shading Model type for the shading aspect.)#"  , py::arg("theModel"),  py::arg("theToOverrideDefaults")=static_cast<bool>(false))
        .def("DumpJson",
             (void (Prs3d_Drawer::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_Drawer::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_Drawer::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_Drawer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_Drawer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_PresentationShadow ,opencascade::handle<Prs3d_PresentationShadow> , Graphic3d_Structure>>(m.attr("Prs3d_PresentationShadow"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> &,const opencascade::handle<Graphic3d_Structure> & >()  , py::arg("theViewer"),  py::arg("thePrs") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_PresentationShadow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_Projector ,opencascade::handle<Prs3d_Projector> , Standard_Transient>>(m.attr("Prs3d_Projector"))
    // constructors
        .def(py::init< const HLRAlgo_Projector & >()  , py::arg("Pr") )
        .def(py::init< const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Pers"),  py::arg("Focus"),  py::arg("DX"),  py::arg("DY"),  py::arg("DZ"),  py::arg("XAt"),  py::arg("YAt"),  py::arg("ZAt"),  py::arg("XUp"),  py::arg("YUp"),  py::arg("ZUp") )
    // custom constructors
    // methods
        .def("Projector",
             (HLRAlgo_Projector (Prs3d_Projector::*)() const) static_cast<HLRAlgo_Projector (Prs3d_Projector::*)() const>(&Prs3d_Projector::Projector),
             R"#(Returns a projector object for use in a hidden line removal algorithm.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_Projector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_Projector::*)() const>(&Prs3d_Projector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_Projector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_Projector::get_type_descriptor),
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
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("theShape"),  py::arg("theAllVertices")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("InitFace",
             (void (Prs3d_ShapeTool::*)() ) static_cast<void (Prs3d_ShapeTool::*)() >(&Prs3d_ShapeTool::InitFace),
             R"#(None)#" )
        .def("MoreFace",
             (Standard_Boolean (Prs3d_ShapeTool::*)() const) static_cast<Standard_Boolean (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::MoreFace),
             R"#(None)#" )
        .def("NextFace",
             (void (Prs3d_ShapeTool::*)() ) static_cast<void (Prs3d_ShapeTool::*)() >(&Prs3d_ShapeTool::NextFace),
             R"#(None)#" )
        .def("GetFace",
             (const TopoDS_Face & (Prs3d_ShapeTool::*)() const) static_cast<const TopoDS_Face & (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::GetFace),
             R"#(None)#" )
        .def("FaceBound",
             (Bnd_Box (Prs3d_ShapeTool::*)() const) static_cast<Bnd_Box (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::FaceBound),
             R"#(None)#" )
        .def("IsPlanarFace",
             (Standard_Boolean (Prs3d_ShapeTool::*)() const) static_cast<Standard_Boolean (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::IsPlanarFace),
             R"#(None)#" )
        .def("InitCurve",
             (void (Prs3d_ShapeTool::*)() ) static_cast<void (Prs3d_ShapeTool::*)() >(&Prs3d_ShapeTool::InitCurve),
             R"#(None)#" )
        .def("MoreCurve",
             (Standard_Boolean (Prs3d_ShapeTool::*)() const) static_cast<Standard_Boolean (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::MoreCurve),
             R"#(None)#" )
        .def("NextCurve",
             (void (Prs3d_ShapeTool::*)() ) static_cast<void (Prs3d_ShapeTool::*)() >(&Prs3d_ShapeTool::NextCurve),
             R"#(None)#" )
        .def("GetCurve",
             (const TopoDS_Edge & (Prs3d_ShapeTool::*)() const) static_cast<const TopoDS_Edge & (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::GetCurve),
             R"#(None)#" )
        .def("CurveBound",
             (Bnd_Box (Prs3d_ShapeTool::*)() const) static_cast<Bnd_Box (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::CurveBound),
             R"#(None)#" )
        .def("Neighbours",
             (Standard_Integer (Prs3d_ShapeTool::*)() const) static_cast<Standard_Integer (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::Neighbours),
             R"#(None)#" )
        .def("FacesOfEdge",
             (opencascade::handle<TopTools_HSequenceOfShape> (Prs3d_ShapeTool::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::FacesOfEdge),
             R"#(None)#" )
        .def("InitVertex",
             (void (Prs3d_ShapeTool::*)() ) static_cast<void (Prs3d_ShapeTool::*)() >(&Prs3d_ShapeTool::InitVertex),
             R"#(None)#" )
        .def("MoreVertex",
             (Standard_Boolean (Prs3d_ShapeTool::*)() const) static_cast<Standard_Boolean (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::MoreVertex),
             R"#(None)#" )
        .def("NextVertex",
             (void (Prs3d_ShapeTool::*)() ) static_cast<void (Prs3d_ShapeTool::*)() >(&Prs3d_ShapeTool::NextVertex),
             R"#(None)#" )
        .def("GetVertex",
             (const TopoDS_Vertex & (Prs3d_ShapeTool::*)() const) static_cast<const TopoDS_Vertex & (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::GetVertex),
             R"#(None)#" )
        .def("HasSurface",
             (Standard_Boolean (Prs3d_ShapeTool::*)() const) static_cast<Standard_Boolean (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::HasSurface),
             R"#(None)#" )
        .def("CurrentTriangulation",
             (opencascade::handle<Poly_Triangulation> (Prs3d_ShapeTool::*)( TopLoc_Location & ) const) static_cast<opencascade::handle<Poly_Triangulation> (Prs3d_ShapeTool::*)( TopLoc_Location & ) const>(&Prs3d_ShapeTool::CurrentTriangulation),
             R"#(None)#"  , py::arg("l"))
        .def("HasCurve",
             (Standard_Boolean (Prs3d_ShapeTool::*)() const) static_cast<Standard_Boolean (Prs3d_ShapeTool::*)() const>(&Prs3d_ShapeTool::HasCurve),
             R"#(None)#" )
        .def("PolygonOnTriangulation",
             (void (Prs3d_ShapeTool::*)( opencascade::handle<Poly_PolygonOnTriangulation> & , opencascade::handle<Poly_Triangulation> & , TopLoc_Location & ) const) static_cast<void (Prs3d_ShapeTool::*)( opencascade::handle<Poly_PolygonOnTriangulation> & , opencascade::handle<Poly_Triangulation> & , TopLoc_Location & ) const>(&Prs3d_ShapeTool::PolygonOnTriangulation),
             R"#(None)#"  , py::arg("Indices"),  py::arg("T"),  py::arg("l"))
        .def("Polygon3D",
             (opencascade::handle<Poly_Polygon3D> (Prs3d_ShapeTool::*)( TopLoc_Location & ) const) static_cast<opencascade::handle<Poly_Polygon3D> (Prs3d_ShapeTool::*)( TopLoc_Location & ) const>(&Prs3d_ShapeTool::Polygon3D),
             R"#(None)#"  , py::arg("l"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsPlanarFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ) >(&Prs3d_ShapeTool::IsPlanarFace),
                    R"#(None)#"  , py::arg("theFace"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolQuadric , shared_ptr<Prs3d_ToolQuadric>,Py_Prs3d_ToolQuadric >>(m.attr("Prs3d_ToolQuadric"))
    // constructors
    // custom constructors
    // methods
        .def("FillArray",
             (void (Prs3d_ToolQuadric::*)( opencascade::handle<Graphic3d_ArrayOfTriangles> & , const gp_Trsf & ) ) static_cast<void (Prs3d_ToolQuadric::*)( opencascade::handle<Graphic3d_ArrayOfTriangles> & , const gp_Trsf & ) >(&Prs3d_ToolQuadric::FillArray),
             R"#(Generate primitives for 3D quadric surface and fill the given array. Optional transformation is applied.)#"  , py::arg("theArray"),  py::arg("theTrsf"))
        .def("FillArray",
             (void (Prs3d_ToolQuadric::*)( opencascade::handle<Graphic3d_ArrayOfTriangles> & , opencascade::handle<Poly_Triangulation> & , const gp_Trsf & ) ) static_cast<void (Prs3d_ToolQuadric::*)( opencascade::handle<Graphic3d_ArrayOfTriangles> & , opencascade::handle<Poly_Triangulation> & , const gp_Trsf & ) >(&Prs3d_ToolQuadric::FillArray),
             R"#(Generate primitives for 3D quadric surface presentation and fill the given array and poly triangulation structure. Optional transformation is applied.)#"  , py::arg("theArray"),  py::arg("theTriangulation"),  py::arg("theTrsf"))
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
        .def_static("DrawShaded_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const gp_Ax1 & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const gp_Ax1 & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&Prs3d_Arrow::DrawShaded),
                    R"#(Defines the representation of the arrow as shaded triangulation.)#"  , py::arg("theAxis"),  py::arg("theTubeRadius"),  py::arg("theAxisLength"),  py::arg("theConeRadius"),  py::arg("theConeLength"),  py::arg("theNbFacettes"))
        .def_static("DrawSegments_s",
                    (opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&Prs3d_Arrow::DrawSegments),
                    R"#(Defines the representation of the arrow as a container of segments.)#"  , py::arg("theLocation"),  py::arg("theDir"),  py::arg("theAngle"),  py::arg("theLength"),  py::arg("theNbSegments"))
        .def_static("Draw_s",
                    (void (*)( const opencascade::handle<Graphic3d_Group> & , const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_Group> & , const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real ) >(&Prs3d_Arrow::Draw),
                    R"#(Defines the representation of the arrow. Note that this method does NOT assign any presentation aspects to the primitives group!)#"  , py::arg("theGroup"),  py::arg("theLocation"),  py::arg("theDirection"),  py::arg("theAngle"),  py::arg("theLength"))
        .def_static("Draw_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const gp_Pnt & , const gp_Dir & , const Standard_Real , const Standard_Real ) >(&Prs3d_Arrow::Draw),
                    R"#(Alias to another method Draw() for backward compatibility.)#"  , py::arg("thePrs"),  py::arg("theLocation"),  py::arg("theDirection"),  py::arg("theAngle"),  py::arg("theLength"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ArrowAspect ,opencascade::handle<Prs3d_ArrowAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_ArrowAspect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("anAngle"),  py::arg("aLength") )
        .def(py::init< const opencascade::handle<Graphic3d_AspectLine3d> & >()  , py::arg("theAspect") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_ArrowAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_ArrowAspect::*)() const>(&Prs3d_ArrowAspect::DynamicType),
             R"#(None)#" )
        .def("SetAngle",
             (void (Prs3d_ArrowAspect::*)( const Standard_Real ) ) static_cast<void (Prs3d_ArrowAspect::*)( const Standard_Real ) >(&Prs3d_ArrowAspect::SetAngle),
             R"#(defines the angle of the arrows.)#"  , py::arg("anAngle"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_ArrowAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_DatumAspect ,opencascade::handle<Prs3d_DatumAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_DatumAspect"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_DatumAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::DynamicType),
             R"#(None)#" )
        .def("LineAspect",
             (opencascade::handle<Prs3d_LineAspect> (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const) static_cast<opencascade::handle<Prs3d_LineAspect> (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const>(&Prs3d_DatumAspect::LineAspect),
             R"#(Returns the right-handed coordinate system set in SetComponent.)#"  , py::arg("thePart"))
        .def("ShadingAspect",
             (opencascade::handle<Prs3d_ShadingAspect> (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const) static_cast<opencascade::handle<Prs3d_ShadingAspect> (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const>(&Prs3d_DatumAspect::ShadingAspect),
             R"#(Returns the right-handed coordinate system set in SetComponent.)#"  , py::arg("thePart"))
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
        .def("SetDrawFirstAndSecondAxis",
             (void (Prs3d_DatumAspect::*)( Standard_Boolean ) ) static_cast<void (Prs3d_DatumAspect::*)( Standard_Boolean ) >(&Prs3d_DatumAspect::SetDrawFirstAndSecondAxis),
             R"#(Sets the DrawFirstAndSecondAxis attributes to active.)#"  , py::arg("theToDraw"))
        .def("DrawFirstAndSecondAxis",
             (Standard_Boolean (Prs3d_DatumAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::DrawFirstAndSecondAxis),
             R"#(Returns true if the first and second axes can be drawn.)#" )
        .def("SetDrawThirdAxis",
             (void (Prs3d_DatumAspect::*)( Standard_Boolean ) ) static_cast<void (Prs3d_DatumAspect::*)( Standard_Boolean ) >(&Prs3d_DatumAspect::SetDrawThirdAxis),
             R"#(Sets the DrawThirdAxis attributes to active.)#"  , py::arg("theToDraw"))
        .def("DrawThirdAxis",
             (Standard_Boolean (Prs3d_DatumAspect::*)() const) static_cast<Standard_Boolean (Prs3d_DatumAspect::*)() const>(&Prs3d_DatumAspect::DrawThirdAxis),
             R"#(Returns true if the third axis can be drawn.)#" )
        .def("DrawDatumPart",
             (Standard_Boolean (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const) static_cast<Standard_Boolean (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const>(&Prs3d_DatumAspect::DrawDatumPart),
             R"#(Returns true if the given part is used in axes of aspect)#"  , py::arg("thePart"))
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
        .def("AxisLength",
             (Standard_Real (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const) static_cast<Standard_Real (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const>(&Prs3d_DatumAspect::AxisLength),
             R"#(Returns the length of the displayed first axis.)#"  , py::arg("thePart"))
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
        .def("ArrowPartForAxis",
             (Prs3d_DatumParts (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const) static_cast<Prs3d_DatumParts (Prs3d_DatumAspect::*)( Prs3d_DatumParts ) const>(&Prs3d_DatumAspect::ArrowPartForAxis),
             R"#(Returns type of arrow for a type of axis)#"  , py::arg("thePart"))
        .def("DumpJson",
             (void (Prs3d_DatumAspect::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (Prs3d_DatumAspect::*)( std::ostream & , const Standard_Integer ) const>(&Prs3d_DatumAspect::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Prs3d_DatumAspect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_DatumAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_DimensionAspect ,opencascade::handle<Prs3d_DimensionAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_DimensionAspect"))
    // constructors
        .def(py::init<  >()  )
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
        .def("SetCommonColor",
             (void (Prs3d_DimensionAspect::*)( const Quantity_Color & ) ) static_cast<void (Prs3d_DimensionAspect::*)( const Quantity_Color & ) >(&Prs3d_DimensionAspect::SetCommonColor),
             R"#(Sets the same color for all parts of dimension: lines, arrows and text.)#"  , py::arg("theColor"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_DimensionAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_LineAspect ,opencascade::handle<Prs3d_LineAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_LineAspect"))
    // constructors
        .def(py::init< const Quantity_Color &,const Aspect_TypeOfLine,const Standard_Real >()  , py::arg("theColor"),  py::arg("theType"),  py::arg("theWidth") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_LineAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_PlaneAspect ,opencascade::handle<Prs3d_PlaneAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_PlaneAspect"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_PlaneAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_PointAspect ,opencascade::handle<Prs3d_PointAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_PointAspect"))
    // constructors
        .def(py::init< const Aspect_TypeOfMarker,const Quantity_Color &,const Standard_Real >()  , py::arg("theType"),  py::arg("theColor"),  py::arg("theScale") )
        .def(py::init< const Quantity_Color &,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfByte> & >()  , py::arg("theColor"),  py::arg("theWidth"),  py::arg("theHeight"),  py::arg("theTexture") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_PointAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ShadingAspect ,opencascade::handle<Prs3d_ShadingAspect> , Prs3d_BasicAspect>>(m.attr("Prs3d_ShadingAspect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_AspectFillArea3d> & >()  , py::arg("theAspect") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Prs3d_ShadingAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Prs3d_ShadingAspect::*)() const>(&Prs3d_ShadingAspect::DynamicType),
             R"#(None)#" )
        .def("SetColor",
             (void (Prs3d_ShadingAspect::*)( const Quantity_Color & , const Aspect_TypeOfFacingModel ) ) static_cast<void (Prs3d_ShadingAspect::*)( const Quantity_Color & , const Aspect_TypeOfFacingModel ) >(&Prs3d_ShadingAspect::SetColor),
             R"#(Change the polygons interior color and material ambient color.)#"  , py::arg("aColor"),  py::arg("aModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_BOTH_SIDE))
        .def("SetMaterial",
             (void (Prs3d_ShadingAspect::*)( const Graphic3d_MaterialAspect & , const Aspect_TypeOfFacingModel ) ) static_cast<void (Prs3d_ShadingAspect::*)( const Graphic3d_MaterialAspect & , const Aspect_TypeOfFacingModel ) >(&Prs3d_ShadingAspect::SetMaterial),
             R"#(Change the polygons material aspect.)#"  , py::arg("aMaterial"),  py::arg("aModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_BOTH_SIDE))
        .def("SetTransparency",
             (void (Prs3d_ShadingAspect::*)( const Standard_Real , const Aspect_TypeOfFacingModel ) ) static_cast<void (Prs3d_ShadingAspect::*)( const Standard_Real , const Aspect_TypeOfFacingModel ) >(&Prs3d_ShadingAspect::SetTransparency),
             R"#(Change the polygons transparency value. Warning : aValue must be in the range 0,1. 0 is the default (NO transparent))#"  , py::arg("aValue"),  py::arg("aModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_BOTH_SIDE))
        .def("Color",
             (const Quantity_Color & (Prs3d_ShadingAspect::*)( const Aspect_TypeOfFacingModel ) const) static_cast<const Quantity_Color & (Prs3d_ShadingAspect::*)( const Aspect_TypeOfFacingModel ) const>(&Prs3d_ShadingAspect::Color),
             R"#(Returns the polygons color.)#"  , py::arg("aModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_FRONT_SIDE))
        .def("Material",
             (const Graphic3d_MaterialAspect & (Prs3d_ShadingAspect::*)( const Aspect_TypeOfFacingModel ) const) static_cast<const Graphic3d_MaterialAspect & (Prs3d_ShadingAspect::*)( const Aspect_TypeOfFacingModel ) const>(&Prs3d_ShadingAspect::Material),
             R"#(Returns the polygons material aspect.)#"  , py::arg("aModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_FRONT_SIDE))
        .def("Transparency",
             (Standard_Real (Prs3d_ShadingAspect::*)( const Aspect_TypeOfFacingModel ) const) static_cast<Standard_Real (Prs3d_ShadingAspect::*)( const Aspect_TypeOfFacingModel ) const>(&Prs3d_ShadingAspect::Transparency),
             R"#(Returns the polygons transparency value.)#"  , py::arg("aModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_FRONT_SIDE))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_ShadingAspect::get_type_descriptor),
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
                    (void (*)( const opencascade::handle<Graphic3d_Group> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Pnt & ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_Group> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Pnt & ) >(&Prs3d_Text::Draw),
                    R"#(Defines the display of the text.)#"  , py::arg("theGroup"),  py::arg("theAspect"),  py::arg("theText"),  py::arg("theAttachmentPoint"))
        .def_static("Draw_s",
                    (void (*)( const opencascade::handle<Graphic3d_Group> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Ax2 & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_Group> & , const opencascade::handle<Prs3d_TextAspect> & , const TCollection_ExtendedString & , const gp_Ax2 & , const Standard_Boolean ) >(&Prs3d_Text::Draw),
                    R"#(Draws the text label.)#"  , py::arg("theGroup"),  py::arg("theAspect"),  py::arg("theText"),  py::arg("theOrientation"),  py::arg("theHasOwnAnchor")=static_cast<const Standard_Boolean>(Standard_True))
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
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Graphic3d_AspectText3d> & >()  , py::arg("theAspect") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_TextAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolCylinder , shared_ptr<Prs3d_ToolCylinder> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolCylinder"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("theBottomRad"),  py::arg("theTopRad"),  py::arg("theHeight"),  py::arg("theNbSlices"),  py::arg("theNbStacks") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Create_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) >(&Prs3d_ToolCylinder::Create),
                    R"#(Generate primitives for 3D quadric surface and return a filled array.)#"  , py::arg("theBottomRad"),  py::arg("theTopRad"),  py::arg("theHeight"),  py::arg("theNbSlices"),  py::arg("theNbStacks"),  py::arg("theTrsf"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolDisk , shared_ptr<Prs3d_ToolDisk> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolDisk"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("theInnerRadius"),  py::arg("theOuterRadius"),  py::arg("theNbSlices"),  py::arg("theNbStacks") )
    // custom constructors
    // methods
        .def("SetAngleRange",
             (void (Prs3d_ToolDisk::*)( Standard_Real , Standard_Real ) ) static_cast<void (Prs3d_ToolDisk::*)( Standard_Real , Standard_Real ) >(&Prs3d_ToolDisk::SetAngleRange),
             R"#(Set angle range in radians [0, 2*PI] by default.)#"  , py::arg("theStartAngle"),  py::arg("theEndAngle"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Create_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) >(&Prs3d_ToolDisk::Create),
                    R"#(Generate primitives for 3D quadric surface and return a filled array.)#"  , py::arg("theInnerRadius"),  py::arg("theOuterRadius"),  py::arg("theNbSlices"),  py::arg("theNbStacks"),  py::arg("theTrsf"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolSector , shared_ptr<Prs3d_ToolSector> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolSector"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("theRadius"),  py::arg("theNbSlices"),  py::arg("theNbStacks") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Create_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) >(&Prs3d_ToolSector::Create),
                    R"#(Generate primitives for 3D quadric surface and return a filled array.)#"  , py::arg("theRadius"),  py::arg("theNbSlices"),  py::arg("theNbStacks"),  py::arg("theTrsf"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Prs3d_ToolSphere , shared_ptr<Prs3d_ToolSphere> , Prs3d_ToolQuadric>>(m.attr("Prs3d_ToolSphere"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("theRadius"),  py::arg("theNbSlices"),  py::arg("theNbStacks") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Create_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const Standard_Real , const Standard_Integer , const Standard_Integer , const gp_Trsf & ) >(&Prs3d_ToolSphere::Create),
                    R"#(Generate primitives for 3D quadric surface and return a filled array.)#"  , py::arg("theRadius"),  py::arg("theNbSlices"),  py::arg("theNbStacks"),  py::arg("theTrsf"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Prs3d_IsoAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Prs3d_VertexDrawMode.hxx
// ./opencascade/Prs3d_DimensionArrowOrientation.hxx
// ./opencascade/Prs3d_DimensionUnits.hxx
// ./opencascade/Prs3d_IsoAspect.hxx
// ./opencascade/Prs3d_Projector.hxx
// ./opencascade/Prs3d_DimensionTextHorizontalPosition.hxx
// ./opencascade/Prs3d_DatumMode.hxx
// ./opencascade/Prs3d_ArrowAspect.hxx
// ./opencascade/Prs3d_ShapeTool.hxx
// ./opencascade/Prs3d_DatumAspect.hxx
// ./opencascade/Prs3d_Text.hxx
// ./opencascade/Prs3d_LineAspect.hxx
// ./opencascade/Prs3d_TypeOfHighlight.hxx
// ./opencascade/Prs3d_ToolQuadric.hxx
// ./opencascade/Prs3d_TypeOfHLR.hxx
// ./opencascade/Prs3d.hxx
// ./opencascade/Prs3d_PointAspect.hxx
// ./opencascade/Prs3d_InvalidAngle.hxx
// ./opencascade/Prs3d_Root.hxx
// ./opencascade/Prs3d_BasicAspect.hxx
// ./opencascade/Prs3d_NListIteratorOfListOfSequenceOfPnt.hxx
// ./opencascade/Prs3d_DatumParts.hxx
// ./opencascade/Prs3d_Drawer.hxx
// ./opencascade/Prs3d_ToolSphere.hxx
// ./opencascade/Prs3d_ShadingAspect.hxx
// ./opencascade/Prs3d_ToolSector.hxx
// ./opencascade/Prs3d_Point.hxx
// ./opencascade/Prs3d_ToolCylinder.hxx
// ./opencascade/Prs3d_DatumAttribute.hxx
// ./opencascade/Prs3d_DatumAxes.hxx
// ./opencascade/Prs3d_TextAspect.hxx
// ./opencascade/Prs3d_DimensionAspect.hxx
// ./opencascade/Prs3d_TypeOfLinePicking.hxx
// ./opencascade/Prs3d_PlaneAspect.hxx
// ./opencascade/Prs3d_Presentation.hxx
// ./opencascade/Prs3d_DimensionTextVerticalPosition.hxx
// ./opencascade/Prs3d_Arrow.hxx
// ./opencascade/Prs3d_PresentationShadow.hxx
// ./opencascade/Prs3d_ToolDisk.hxx
// ./opencascade/Prs3d_NListOfSequenceOfPnt.hxx

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
