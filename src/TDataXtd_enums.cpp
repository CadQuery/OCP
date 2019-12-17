
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Pln.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Pnt.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Integer.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
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
#include <TDataStd_Real.hxx>
#include <Standard_GUID.hxx>
#include <TNaming_NamedShape.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
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
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <gp_Lin.hxx>
#include <TDF_RelocationTable.hxx>

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
// ./opencascade/TDataXtd_Array1OfTrsf.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TDataXtd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TDataXtd", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TDataXtd_ConstraintEnum>(m, "TDataXtd_ConstraintEnum",R"#(The terms of this enumeration define the types of available constraint. ==================)#")
        .value("TDataXtd_RADIUS",TDataXtd_ConstraintEnum::TDataXtd_RADIUS)
        .value("TDataXtd_DIAMETER",TDataXtd_ConstraintEnum::TDataXtd_DIAMETER)
        .value("TDataXtd_MINOR_RADIUS",TDataXtd_ConstraintEnum::TDataXtd_MINOR_RADIUS)
        .value("TDataXtd_MAJOR_RADIUS",TDataXtd_ConstraintEnum::TDataXtd_MAJOR_RADIUS)
        .value("TDataXtd_TANGENT",TDataXtd_ConstraintEnum::TDataXtd_TANGENT)
        .value("TDataXtd_PARALLEL",TDataXtd_ConstraintEnum::TDataXtd_PARALLEL)
        .value("TDataXtd_PERPENDICULAR",TDataXtd_ConstraintEnum::TDataXtd_PERPENDICULAR)
        .value("TDataXtd_CONCENTRIC",TDataXtd_ConstraintEnum::TDataXtd_CONCENTRIC)
        .value("TDataXtd_COINCIDENT",TDataXtd_ConstraintEnum::TDataXtd_COINCIDENT)
        .value("TDataXtd_DISTANCE",TDataXtd_ConstraintEnum::TDataXtd_DISTANCE)
        .value("TDataXtd_ANGLE",TDataXtd_ConstraintEnum::TDataXtd_ANGLE)
        .value("TDataXtd_EQUAL_RADIUS",TDataXtd_ConstraintEnum::TDataXtd_EQUAL_RADIUS)
        .value("TDataXtd_SYMMETRY",TDataXtd_ConstraintEnum::TDataXtd_SYMMETRY)
        .value("TDataXtd_MIDPOINT",TDataXtd_ConstraintEnum::TDataXtd_MIDPOINT)
        .value("TDataXtd_EQUAL_DISTANCE",TDataXtd_ConstraintEnum::TDataXtd_EQUAL_DISTANCE)
        .value("TDataXtd_FIX",TDataXtd_ConstraintEnum::TDataXtd_FIX)
        .value("TDataXtd_RIGID",TDataXtd_ConstraintEnum::TDataXtd_RIGID)
        .value("TDataXtd_FROM",TDataXtd_ConstraintEnum::TDataXtd_FROM)
        .value("TDataXtd_AXIS",TDataXtd_ConstraintEnum::TDataXtd_AXIS)
        .value("TDataXtd_MATE",TDataXtd_ConstraintEnum::TDataXtd_MATE)
        .value("TDataXtd_ALIGN_FACES",TDataXtd_ConstraintEnum::TDataXtd_ALIGN_FACES)
        .value("TDataXtd_ALIGN_AXES",TDataXtd_ConstraintEnum::TDataXtd_ALIGN_AXES)
        .value("TDataXtd_AXES_ANGLE",TDataXtd_ConstraintEnum::TDataXtd_AXES_ANGLE)
        .value("TDataXtd_FACES_ANGLE",TDataXtd_ConstraintEnum::TDataXtd_FACES_ANGLE)
        .value("TDataXtd_ROUND",TDataXtd_ConstraintEnum::TDataXtd_ROUND)
        .value("TDataXtd_OFFSET",TDataXtd_ConstraintEnum::TDataXtd_OFFSET).export_values();
    py::enum_<TDataXtd_GeometryEnum>(m, "TDataXtd_GeometryEnum",R"#(The terms of this enumeration define the types of geometric shapes available.)#")
        .value("TDataXtd_ANY_GEOM",TDataXtd_GeometryEnum::TDataXtd_ANY_GEOM)
        .value("TDataXtd_POINT",TDataXtd_GeometryEnum::TDataXtd_POINT)
        .value("TDataXtd_LINE",TDataXtd_GeometryEnum::TDataXtd_LINE)
        .value("TDataXtd_CIRCLE",TDataXtd_GeometryEnum::TDataXtd_CIRCLE)
        .value("TDataXtd_ELLIPSE",TDataXtd_GeometryEnum::TDataXtd_ELLIPSE)
        .value("TDataXtd_SPLINE",TDataXtd_GeometryEnum::TDataXtd_SPLINE)
        .value("TDataXtd_PLANE",TDataXtd_GeometryEnum::TDataXtd_PLANE)
        .value("TDataXtd_CYLINDER",TDataXtd_GeometryEnum::TDataXtd_CYLINDER).export_values();

//Python trampoline classes
    class Py_TDataXtd_Pattern : public TDataXtd_Pattern{
    public:
        using TDataXtd_Pattern::TDataXtd_Pattern;
        
        // public pure virtual
        const Standard_GUID & PatternID() const  override { PYBIND11_OVERLOAD_PURE(const Standard_GUID &,TDataXtd_Pattern,PatternID,) };
        Standard_Integer NbTrsfs() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,TDataXtd_Pattern,NbTrsfs,) };
        void ComputeTrsfs(NCollection_Array1<gp_Trsf> & Trsfs) const  override { PYBIND11_OVERLOAD_PURE(void,TDataXtd_Pattern,ComputeTrsfs,Trsfs) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<TDataXtd_Position ,opencascade::handle<TDataXtd_Position>  , TDF_Attribute >(m,"TDataXtd_Position",R"#(Position of a LabelPosition of a LabelPosition of a Label)#");
    py::class_<TDataXtd_Point ,opencascade::handle<TDataXtd_Point>  , TDF_Attribute >(m,"TDataXtd_Point",R"#(The basis to define a point attribute. The topological attribute must contain a vertex. You use this class to create reference points in a design.The basis to define a point attribute. The topological attribute must contain a vertex. You use this class to create reference points in a design.The basis to define a point attribute. The topological attribute must contain a vertex. You use this class to create reference points in a design.)#");
    py::class_<TDataXtd_Shape ,opencascade::handle<TDataXtd_Shape>  , TDF_Attribute >(m,"TDataXtd_Shape",R"#(A Shape is associated in the framework with : a NamedShape attributeA Shape is associated in the framework with : a NamedShape attributeA Shape is associated in the framework with : a NamedShape attribute)#");
    py::class_<TDataXtd_Placement ,opencascade::handle<TDataXtd_Placement>  , TDF_Attribute >(m,"TDataXtd_Placement",R"#()#");
    py::class_<TDataXtd_Triangulation ,opencascade::handle<TDataXtd_Triangulation>  , TDF_Attribute >(m,"TDataXtd_Triangulation",R"#(An Ocaf attribute containing a mesh (Poly_Triangulation). It duplicates all methods from Poly_Triangulation. It is highly recommended to modify the mesh through the methods of this attribute, but not directly via the underlying Poly_Triangulation object. In this case Undo/Redo will work fine and robust.An Ocaf attribute containing a mesh (Poly_Triangulation). It duplicates all methods from Poly_Triangulation. It is highly recommended to modify the mesh through the methods of this attribute, but not directly via the underlying Poly_Triangulation object. In this case Undo/Redo will work fine and robust.An Ocaf attribute containing a mesh (Poly_Triangulation). It duplicates all methods from Poly_Triangulation. It is highly recommended to modify the mesh through the methods of this attribute, but not directly via the underlying Poly_Triangulation object. In this case Undo/Redo will work fine and robust.)#");
    py::class_<TDataXtd_Constraint ,opencascade::handle<TDataXtd_Constraint>  , TDF_Attribute >(m,"TDataXtd_Constraint",R"#(The groundwork to define constraint attributes. The constraint attribute contains the following sorts of data: - Type whether the constraint attribute is a geometric constraint or a dimension - Value the real number value of a numeric constraint such as an angle or a radius - Geometries to identify the geometries underlying the topological attributes which define the constraint (up to 4) - Plane for 2D constraints.The groundwork to define constraint attributes. The constraint attribute contains the following sorts of data: - Type whether the constraint attribute is a geometric constraint or a dimension - Value the real number value of a numeric constraint such as an angle or a radius - Geometries to identify the geometries underlying the topological attributes which define the constraint (up to 4) - Plane for 2D constraints.The groundwork to define constraint attributes. The constraint attribute contains the following sorts of data: - Type whether the constraint attribute is a geometric constraint or a dimension - Value the real number value of a numeric constraint such as an angle or a radius - Geometries to identify the geometries underlying the topological attributes which define the constraint (up to 4) - Plane for 2D constraints.)#");
    py::class_<TDataXtd_Axis ,opencascade::handle<TDataXtd_Axis>  , TDF_Attribute >(m,"TDataXtd_Axis",R"#(The basis to define an axis attribute.The basis to define an axis attribute.The basis to define an axis attribute.)#");
    py::class_<TDataXtd_Plane ,opencascade::handle<TDataXtd_Plane>  , TDF_Attribute >(m,"TDataXtd_Plane",R"#(The basis to define a plane attribute. Warning: Use TDataXtd_Geometry attribute to retrieve the gp_Pln of the Plane attributeThe basis to define a plane attribute. Warning: Use TDataXtd_Geometry attribute to retrieve the gp_Pln of the Plane attributeThe basis to define a plane attribute. Warning: Use TDataXtd_Geometry attribute to retrieve the gp_Pln of the Plane attribute)#");
    py::class_<TDataXtd_Presentation ,opencascade::handle<TDataXtd_Presentation>  , TDF_Attribute >(m,"TDataXtd_Presentation",R"#(Attribute containing parameters of presentation of the shape, e.g. the shape attached to the same label and displayed using TPrsStd tools (see TPrsStd_AISPresentation).Attribute containing parameters of presentation of the shape, e.g. the shape attached to the same label and displayed using TPrsStd tools (see TPrsStd_AISPresentation).Attribute containing parameters of presentation of the shape, e.g. the shape attached to the same label and displayed using TPrsStd tools (see TPrsStd_AISPresentation).)#");
    py::class_<TDataXtd_Pattern ,opencascade::handle<TDataXtd_Pattern> ,Py_TDataXtd_Pattern , TDF_Attribute >(m,"TDataXtd_Pattern",R"#(a general pattern modela general pattern modela general pattern model)#");
    py::class_<TDataXtd ,std::unique_ptr<TDataXtd>  >(m,"TDataXtd",R"#(This package defines extension of standard attributes for modelling (mainly for work with geometry).)#");
    py::class_<TDataXtd_HArray1OfTrsf ,std::unique_ptr<TDataXtd_HArray1OfTrsf>  >(m,"TDataXtd_HArray1OfTrsf",R"#()#");
    py::class_<TDataXtd_Geometry ,opencascade::handle<TDataXtd_Geometry>  , TDF_Attribute >(m,"TDataXtd_Geometry",R"#(This class is used to model construction geometry. The specific geometric construction of the attribute is defined by an element of the enumeration TDataXtd_GeometryEnum. This attribute may also be used to qualify underlying geometry of the associated NamedShape. for Constructuion element by example.This class is used to model construction geometry. The specific geometric construction of the attribute is defined by an element of the enumeration TDataXtd_GeometryEnum. This attribute may also be used to qualify underlying geometry of the associated NamedShape. for Constructuion element by example.This class is used to model construction geometry. The specific geometric construction of the attribute is defined by an element of the enumeration TDataXtd_GeometryEnum. This attribute may also be used to qualify underlying geometry of the associated NamedShape. for Constructuion element by example.)#");
    py::class_<TDataXtd_PatternStd ,opencascade::handle<TDataXtd_PatternStd>  , TDataXtd_Pattern >(m,"TDataXtd_PatternStd",R"#(to create a PatternStd (LinearPattern, CircularPattern, RectangularPattern, RadialCircularPattern, MirrorPattern)to create a PatternStd (LinearPattern, CircularPattern, RectangularPattern, RadialCircularPattern, MirrorPattern)to create a PatternStd (LinearPattern, CircularPattern, RectangularPattern, RadialCircularPattern, MirrorPattern))#");

// pre-register typdefs
// ./opencascade/TDataXtd_Position.hxx
// ./opencascade/TDataXtd_Plane.hxx
// ./opencascade/TDataXtd_Point.hxx
// ./opencascade/TDataXtd_HArray1OfTrsf.hxx
// ./opencascade/TDataXtd_Shape.hxx
// ./opencascade/TDataXtd_Presentation.hxx
// ./opencascade/TDataXtd_PatternStd.hxx
// ./opencascade/TDataXtd_Placement.hxx
// ./opencascade/TDataXtd_Pattern.hxx
// ./opencascade/TDataXtd_Array1OfTrsf.hxx
    preregister_template_NCollection_Array1<gp_Trsf>(m,"TDataXtd_Array1OfTrsf");  
// ./opencascade/TDataXtd_Triangulation.hxx
// ./opencascade/TDataXtd_Geometry.hxx
// ./opencascade/TDataXtd_ConstraintEnum.hxx
// ./opencascade/TDataXtd_GeometryEnum.hxx
// ./opencascade/TDataXtd_Constraint.hxx
// ./opencascade/TDataXtd.hxx
// ./opencascade/TDataXtd_Axis.hxx

};

// user-defined post-inclusion per module

// user-defined post
