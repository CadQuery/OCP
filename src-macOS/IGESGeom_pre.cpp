
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESGeom_Protocol.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESGeom_ConicArc.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <IGESGeom_Plane.hxx>
#include <IGESGeom_Line.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_RuledSurface.hxx>
#include <IGESGeom_SurfaceOfRevolution.hxx>
#include <IGESGeom_TabulatedCylinder.hxx>
#include <IGESGeom_Direction.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESGeom_Flash.hxx>
#include <IGESGeom_BSplineCurve.hxx>
#include <IGESGeom_BSplineSurface.hxx>
#include <IGESGeom_OffsetCurve.hxx>
#include <IGESGeom_OffsetSurface.hxx>
#include <IGESGeom_Boundary.hxx>
#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESGeom_BoundedSurface.hxx>
#include <IGESGeom_TrimmedSurface.hxx>
#include <IGESGeom_ToolCircularArc.hxx>
#include <IGESGeom_ToolCompositeCurve.hxx>
#include <IGESGeom_ToolConicArc.hxx>
#include <IGESGeom_ToolCopiousData.hxx>
#include <IGESGeom_ToolPlane.hxx>
#include <IGESGeom_ToolLine.hxx>
#include <IGESGeom_ToolSplineCurve.hxx>
#include <IGESGeom_ToolSplineSurface.hxx>
#include <IGESGeom_ToolPoint.hxx>
#include <IGESGeom_ToolRuledSurface.hxx>
#include <IGESGeom_ToolSurfaceOfRevolution.hxx>
#include <IGESGeom_ToolTabulatedCylinder.hxx>
#include <IGESGeom_ToolDirection.hxx>
#include <IGESGeom_ToolTransformationMatrix.hxx>
#include <IGESGeom_ToolFlash.hxx>
#include <IGESGeom_ToolBSplineCurve.hxx>
#include <IGESGeom_ToolBSplineSurface.hxx>
#include <IGESGeom_ToolOffsetCurve.hxx>
#include <IGESGeom_ToolOffsetSurface.hxx>
#include <IGESGeom_ToolBoundary.hxx>
#include <IGESGeom_ToolCurveOnSurface.hxx>
#include <IGESGeom_ToolBoundedSurface.hxx>
#include <IGESGeom_ToolTrimmedSurface.hxx>
#include <IGESGeom_Protocol.hxx>
#include <IGESGeom_ReadWriteModule.hxx>
#include <IGESGeom_GeneralModule.hxx>
#include <IGESGeom_SpecificModule.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_TrimmedSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_BSplineSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_GTrsf.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_OffsetSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_SurfaceOfRevolution.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_Boundary.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_ConicArc.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_OffsetCurve.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_TabulatedCylinder.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_RuledSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESGeom_Line.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_BSplineCurve.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_Flash.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Vec.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_Line.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Vec.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_BoundedSurface.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_Plane.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGeom_Direction.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>

// module includes
#include <IGESGeom.hxx>
#include <IGESGeom_Array1OfBoundary.hxx>
#include <IGESGeom_Array1OfCurveOnSurface.hxx>
#include <IGESGeom_Array1OfTransformationMatrix.hxx>
#include <IGESGeom_Boundary.hxx>
#include <IGESGeom_BoundedSurface.hxx>
#include <IGESGeom_BSplineCurve.hxx>
#include <IGESGeom_BSplineSurface.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESGeom_ConicArc.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESGeom_Direction.hxx>
#include <IGESGeom_Flash.hxx>
#include <IGESGeom_GeneralModule.hxx>
#include <IGESGeom_HArray1OfBoundary.hxx>
#include <IGESGeom_HArray1OfCurveOnSurface.hxx>
#include <IGESGeom_HArray1OfTransformationMatrix.hxx>
#include <IGESGeom_Line.hxx>
#include <IGESGeom_OffsetCurve.hxx>
#include <IGESGeom_OffsetSurface.hxx>
#include <IGESGeom_Plane.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Protocol.hxx>
#include <IGESGeom_ReadWriteModule.hxx>
#include <IGESGeom_RuledSurface.hxx>
#include <IGESGeom_SpecificModule.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <IGESGeom_SurfaceOfRevolution.hxx>
#include <IGESGeom_TabulatedCylinder.hxx>
#include <IGESGeom_ToolBoundary.hxx>
#include <IGESGeom_ToolBoundedSurface.hxx>
#include <IGESGeom_ToolBSplineCurve.hxx>
#include <IGESGeom_ToolBSplineSurface.hxx>
#include <IGESGeom_ToolCircularArc.hxx>
#include <IGESGeom_ToolCompositeCurve.hxx>
#include <IGESGeom_ToolConicArc.hxx>
#include <IGESGeom_ToolCopiousData.hxx>
#include <IGESGeom_ToolCurveOnSurface.hxx>
#include <IGESGeom_ToolDirection.hxx>
#include <IGESGeom_ToolFlash.hxx>
#include <IGESGeom_ToolLine.hxx>
#include <IGESGeom_ToolOffsetCurve.hxx>
#include <IGESGeom_ToolOffsetSurface.hxx>
#include <IGESGeom_ToolPlane.hxx>
#include <IGESGeom_ToolPoint.hxx>
#include <IGESGeom_ToolRuledSurface.hxx>
#include <IGESGeom_ToolSplineCurve.hxx>
#include <IGESGeom_ToolSplineSurface.hxx>
#include <IGESGeom_ToolSurfaceOfRevolution.hxx>
#include <IGESGeom_ToolTabulatedCylinder.hxx>
#include <IGESGeom_ToolTransformationMatrix.hxx>
#include <IGESGeom_ToolTrimmedSurface.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESGeom_TrimmedSurface.hxx>

// template related includes
// ./opencascade/IGESGeom_Array1OfBoundary.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESGeom_Array1OfTransformationMatrix.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESGeom_Array1OfCurveOnSurface.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESGeom_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESGeom", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<IGESGeom_Boundary> >(m,"IGESGeom_Array1OfBoundary");
    preregister_template_NCollection_Array1<opencascade::handle<IGESGeom_TransformationMatrix> >(m,"IGESGeom_Array1OfTransformationMatrix");
    preregister_template_NCollection_Array1<opencascade::handle<IGESGeom_CurveOnSurface> >(m,"IGESGeom_Array1OfCurveOnSurface");

// classes forward declarations only
    py::class_<IGESGeom , shared_ptr<IGESGeom> >(m,"IGESGeom",R"#(This package consists of B-Rep and CSG Solid entities)#");
    py::class_<IGESGeom_BSplineCurve ,opencascade::handle<IGESGeom_BSplineCurve> , IGESData_IGESEntity>(m,"IGESGeom_BSplineCurve",R"#(defines IGESBSplineCurve, Type <126> Form <0-5> in package IGESGeom A parametric equation obtained by dividing two summations involving weights (which are real numbers), the control points, and B-Spline basis functionsdefines IGESBSplineCurve, Type <126> Form <0-5> in package IGESGeom A parametric equation obtained by dividing two summations involving weights (which are real numbers), the control points, and B-Spline basis functionsdefines IGESBSplineCurve, Type <126> Form <0-5> in package IGESGeom A parametric equation obtained by dividing two summations involving weights (which are real numbers), the control points, and B-Spline basis functions)#");
    py::class_<IGESGeom_BSplineSurface ,opencascade::handle<IGESGeom_BSplineSurface> , IGESData_IGESEntity>(m,"IGESGeom_BSplineSurface",R"#(defines IGESBSplineSurface, Type <128> Form <0-9> in package IGESGeom A parametric equation obtained by dividing two summations involving weights (which are real numbers), the control points, and B-Spline basis functionsdefines IGESBSplineSurface, Type <128> Form <0-9> in package IGESGeom A parametric equation obtained by dividing two summations involving weights (which are real numbers), the control points, and B-Spline basis functionsdefines IGESBSplineSurface, Type <128> Form <0-9> in package IGESGeom A parametric equation obtained by dividing two summations involving weights (which are real numbers), the control points, and B-Spline basis functions)#");
    py::class_<IGESGeom_Boundary ,opencascade::handle<IGESGeom_Boundary> , IGESData_IGESEntity>(m,"IGESGeom_Boundary",R"#(defines IGESBoundary, Type <141> Form <0> in package IGESGeom A boundary entity identifies a surface boundary consisting of a set of curves lying on the surfacedefines IGESBoundary, Type <141> Form <0> in package IGESGeom A boundary entity identifies a surface boundary consisting of a set of curves lying on the surfacedefines IGESBoundary, Type <141> Form <0> in package IGESGeom A boundary entity identifies a surface boundary consisting of a set of curves lying on the surface)#");
    py::class_<IGESGeom_BoundedSurface ,opencascade::handle<IGESGeom_BoundedSurface> , IGESData_IGESEntity>(m,"IGESGeom_BoundedSurface",R"#(defines BoundedSurface, Type <143> Form <0> in package IGESGeom A bounded surface is used to communicate trimmed surfaces. The surface and trimming curves are assumed to be represented parametrically.defines BoundedSurface, Type <143> Form <0> in package IGESGeom A bounded surface is used to communicate trimmed surfaces. The surface and trimming curves are assumed to be represented parametrically.defines BoundedSurface, Type <143> Form <0> in package IGESGeom A bounded surface is used to communicate trimmed surfaces. The surface and trimming curves are assumed to be represented parametrically.)#");
    py::class_<IGESGeom_CircularArc ,opencascade::handle<IGESGeom_CircularArc> , IGESData_IGESEntity>(m,"IGESGeom_CircularArc",R"#(defines IGESCircularArc, Type <100> Form <0> in package IGESGeom A circular arc is a connected portion of a parent circle which consists of more than one point. The definition space coordinate system is always chosen so that the circular arc remains in a plane either coincident with or parallel to the XT, YT plane.defines IGESCircularArc, Type <100> Form <0> in package IGESGeom A circular arc is a connected portion of a parent circle which consists of more than one point. The definition space coordinate system is always chosen so that the circular arc remains in a plane either coincident with or parallel to the XT, YT plane.defines IGESCircularArc, Type <100> Form <0> in package IGESGeom A circular arc is a connected portion of a parent circle which consists of more than one point. The definition space coordinate system is always chosen so that the circular arc remains in a plane either coincident with or parallel to the XT, YT plane.)#");
    py::class_<IGESGeom_CompositeCurve ,opencascade::handle<IGESGeom_CompositeCurve> , IGESData_IGESEntity>(m,"IGESGeom_CompositeCurve",R"#(defines IGESCompositeCurve, Type <102> Form <0> in package IGESGeom A composite curve is defined as an ordered list of entities consisting of a point, connect point and parametrised curve entities (excluding the CompositeCurve entity).defines IGESCompositeCurve, Type <102> Form <0> in package IGESGeom A composite curve is defined as an ordered list of entities consisting of a point, connect point and parametrised curve entities (excluding the CompositeCurve entity).defines IGESCompositeCurve, Type <102> Form <0> in package IGESGeom A composite curve is defined as an ordered list of entities consisting of a point, connect point and parametrised curve entities (excluding the CompositeCurve entity).)#");
    py::class_<IGESGeom_ConicArc ,opencascade::handle<IGESGeom_ConicArc> , IGESData_IGESEntity>(m,"IGESGeom_ConicArc",R"#(defines IGESConicArc, Type <104> Form <0-3> in package IGESGeom A conic arc is a bounded connected portion of a parent conic curve which consists of more than one point. The parent conic curve is either an ellipse, a parabola, or a hyperbola. The definition space coordinate system is always chosen so that the conic arc lies in a plane either coincident with or parallel to XT, YT plane. Within such a plane a conic is defined by the six coefficients in the following equation. A*XT^2 + B*XT*YT + C*YT^2 + D*XT + E*YT + F = 0defines IGESConicArc, Type <104> Form <0-3> in package IGESGeom A conic arc is a bounded connected portion of a parent conic curve which consists of more than one point. The parent conic curve is either an ellipse, a parabola, or a hyperbola. The definition space coordinate system is always chosen so that the conic arc lies in a plane either coincident with or parallel to XT, YT plane. Within such a plane a conic is defined by the six coefficients in the following equation. A*XT^2 + B*XT*YT + C*YT^2 + D*XT + E*YT + F = 0defines IGESConicArc, Type <104> Form <0-3> in package IGESGeom A conic arc is a bounded connected portion of a parent conic curve which consists of more than one point. The parent conic curve is either an ellipse, a parabola, or a hyperbola. The definition space coordinate system is always chosen so that the conic arc lies in a plane either coincident with or parallel to XT, YT plane. Within such a plane a conic is defined by the six coefficients in the following equation. A*XT^2 + B*XT*YT + C*YT^2 + D*XT + E*YT + F = 0)#");
    py::class_<IGESGeom_CopiousData ,opencascade::handle<IGESGeom_CopiousData> , IGESData_IGESEntity>(m,"IGESGeom_CopiousData",R"#(defines IGESCopiousData, Type <106> Form <1-3,11-13,63> in package IGESGeom This entity stores data points in the form of pairs, triples, or sextuples. An interpretation flag value signifies which of these forms is being used.defines IGESCopiousData, Type <106> Form <1-3,11-13,63> in package IGESGeom This entity stores data points in the form of pairs, triples, or sextuples. An interpretation flag value signifies which of these forms is being used.defines IGESCopiousData, Type <106> Form <1-3,11-13,63> in package IGESGeom This entity stores data points in the form of pairs, triples, or sextuples. An interpretation flag value signifies which of these forms is being used.)#");
    py::class_<IGESGeom_CurveOnSurface ,opencascade::handle<IGESGeom_CurveOnSurface> , IGESData_IGESEntity>(m,"IGESGeom_CurveOnSurface",R"#(defines IGESCurveOnSurface, Type <142> Form <0> in package IGESGeom A curve on a parametric surface entity associates a given curve with a surface and identifies the curve as lying on the surface.defines IGESCurveOnSurface, Type <142> Form <0> in package IGESGeom A curve on a parametric surface entity associates a given curve with a surface and identifies the curve as lying on the surface.defines IGESCurveOnSurface, Type <142> Form <0> in package IGESGeom A curve on a parametric surface entity associates a given curve with a surface and identifies the curve as lying on the surface.)#");
    py::class_<IGESGeom_Direction ,opencascade::handle<IGESGeom_Direction> , IGESData_IGESEntity>(m,"IGESGeom_Direction",R"#(defines IGESDirection, Type <123> Form <0> in package IGESGeom A direction entity is a non-zero vector in Euclidean 3-space that is defined by its three components (direction ratios) with respect to the coordinate axes. If x, y, z are the direction ratios then (x^2 + y^2 + z^2) > 0defines IGESDirection, Type <123> Form <0> in package IGESGeom A direction entity is a non-zero vector in Euclidean 3-space that is defined by its three components (direction ratios) with respect to the coordinate axes. If x, y, z are the direction ratios then (x^2 + y^2 + z^2) > 0defines IGESDirection, Type <123> Form <0> in package IGESGeom A direction entity is a non-zero vector in Euclidean 3-space that is defined by its three components (direction ratios) with respect to the coordinate axes. If x, y, z are the direction ratios then (x^2 + y^2 + z^2) > 0)#");
    py::class_<IGESGeom_Flash ,opencascade::handle<IGESGeom_Flash> , IGESData_IGESEntity>(m,"IGESGeom_Flash",R"#(defines IGESFlash, Type <125> Form <0 - 4> in package IGESGeom A flash entity is a point in the ZT=0 plane that locates a particular closed area. That closed area can be defined in one of two ways. First, it can be an arbitrary closed area defined by any entity capable of defining a closed area. The points of this entity must all lie in the ZT=0 plane. Second, it can be a member of a predefined set of flash shapes.defines IGESFlash, Type <125> Form <0 - 4> in package IGESGeom A flash entity is a point in the ZT=0 plane that locates a particular closed area. That closed area can be defined in one of two ways. First, it can be an arbitrary closed area defined by any entity capable of defining a closed area. The points of this entity must all lie in the ZT=0 plane. Second, it can be a member of a predefined set of flash shapes.defines IGESFlash, Type <125> Form <0 - 4> in package IGESGeom A flash entity is a point in the ZT=0 plane that locates a particular closed area. That closed area can be defined in one of two ways. First, it can be an arbitrary closed area defined by any entity capable of defining a closed area. The points of this entity must all lie in the ZT=0 plane. Second, it can be a member of a predefined set of flash shapes.)#");
    py::class_<IGESGeom_GeneralModule ,opencascade::handle<IGESGeom_GeneralModule> , IGESData_GeneralModule>(m,"IGESGeom_GeneralModule",R"#(Definition of General Services for IGESGeom (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESGeom (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESGeom (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESGeom_HArray1OfBoundary ,opencascade::handle<IGESGeom_HArray1OfBoundary> , IGESGeom_Array1OfBoundary, Standard_Transient>(m,"IGESGeom_HArray1OfBoundary",R"#()#");
    py::class_<IGESGeom_HArray1OfCurveOnSurface ,opencascade::handle<IGESGeom_HArray1OfCurveOnSurface> , IGESGeom_Array1OfCurveOnSurface, Standard_Transient>(m,"IGESGeom_HArray1OfCurveOnSurface",R"#()#");
    py::class_<IGESGeom_HArray1OfTransformationMatrix ,opencascade::handle<IGESGeom_HArray1OfTransformationMatrix> , IGESGeom_Array1OfTransformationMatrix, Standard_Transient>(m,"IGESGeom_HArray1OfTransformationMatrix",R"#()#");
    py::class_<IGESGeom_Line ,opencascade::handle<IGESGeom_Line> , IGESData_IGESEntity>(m,"IGESGeom_Line",R"#(defines IGESLine, Type <110> Form <0> in package IGESGeom A line is a bounded, connected portion of a parent straight line which consists of more than one point. A line is defined by its end points.defines IGESLine, Type <110> Form <0> in package IGESGeom A line is a bounded, connected portion of a parent straight line which consists of more than one point. A line is defined by its end points.defines IGESLine, Type <110> Form <0> in package IGESGeom A line is a bounded, connected portion of a parent straight line which consists of more than one point. A line is defined by its end points.)#");
    py::class_<IGESGeom_OffsetCurve ,opencascade::handle<IGESGeom_OffsetCurve> , IGESData_IGESEntity>(m,"IGESGeom_OffsetCurve",R"#(defines IGESOffsetCurve, Type <130> Form <0> in package IGESGeom An OffsetCurve entity contains the data necessary to determine the offset of a given curve C. This entity points to the base curve to be offset and contains offset distance and other pertinent information.defines IGESOffsetCurve, Type <130> Form <0> in package IGESGeom An OffsetCurve entity contains the data necessary to determine the offset of a given curve C. This entity points to the base curve to be offset and contains offset distance and other pertinent information.defines IGESOffsetCurve, Type <130> Form <0> in package IGESGeom An OffsetCurve entity contains the data necessary to determine the offset of a given curve C. This entity points to the base curve to be offset and contains offset distance and other pertinent information.)#");
    py::class_<IGESGeom_OffsetSurface ,opencascade::handle<IGESGeom_OffsetSurface> , IGESData_IGESEntity>(m,"IGESGeom_OffsetSurface",R"#(defines IGESOffsetSurface, Type <140> Form <0> in package IGESGeom An offset surface is a surface defined in terms of an already existing surface.If S(u, v) is a parametrised regular surface and N(u, v) is a differential field of unit normal vectors defined on the whole surface, and "d" a fixed non zero real number, then offset surface to S is a parametrised surface S(u, v) given by O(u, v) = S(u, v) + d * N(u, v); u1 <= u <= u2; v1 <= v <= v2;defines IGESOffsetSurface, Type <140> Form <0> in package IGESGeom An offset surface is a surface defined in terms of an already existing surface.If S(u, v) is a parametrised regular surface and N(u, v) is a differential field of unit normal vectors defined on the whole surface, and "d" a fixed non zero real number, then offset surface to S is a parametrised surface S(u, v) given by O(u, v) = S(u, v) + d * N(u, v); u1 <= u <= u2; v1 <= v <= v2;defines IGESOffsetSurface, Type <140> Form <0> in package IGESGeom An offset surface is a surface defined in terms of an already existing surface.If S(u, v) is a parametrised regular surface and N(u, v) is a differential field of unit normal vectors defined on the whole surface, and "d" a fixed non zero real number, then offset surface to S is a parametrised surface S(u, v) given by O(u, v) = S(u, v) + d * N(u, v); u1 <= u <= u2; v1 <= v <= v2;)#");
    py::class_<IGESGeom_Plane ,opencascade::handle<IGESGeom_Plane> , IGESData_IGESEntity>(m,"IGESGeom_Plane",R"#(defines IGESPlane, Type <108> Form <-1,0,1> in package IGESGeom A plane entity can be used to represent unbounded plane, as well as bounded portion of a plane. In either of the above cases the plane is defined within definition space by means of coefficients A, B, C, D where at least one of A, B, C is non-zero and A * XT + B * YT + C * ZT = Ddefines IGESPlane, Type <108> Form <-1,0,1> in package IGESGeom A plane entity can be used to represent unbounded plane, as well as bounded portion of a plane. In either of the above cases the plane is defined within definition space by means of coefficients A, B, C, D where at least one of A, B, C is non-zero and A * XT + B * YT + C * ZT = Ddefines IGESPlane, Type <108> Form <-1,0,1> in package IGESGeom A plane entity can be used to represent unbounded plane, as well as bounded portion of a plane. In either of the above cases the plane is defined within definition space by means of coefficients A, B, C, D where at least one of A, B, C is non-zero and A * XT + B * YT + C * ZT = D)#");
    py::class_<IGESGeom_Point ,opencascade::handle<IGESGeom_Point> , IGESData_IGESEntity>(m,"IGESGeom_Point",R"#(defines IGESPoint, Type <116> Form <0> in package IGESGeomdefines IGESPoint, Type <116> Form <0> in package IGESGeomdefines IGESPoint, Type <116> Form <0> in package IGESGeom)#");
    py::class_<IGESGeom_Protocol ,opencascade::handle<IGESGeom_Protocol> , IGESData_Protocol>(m,"IGESGeom_Protocol",R"#(Description of Protocol for IGESGeomDescription of Protocol for IGESGeomDescription of Protocol for IGESGeom)#");
    py::class_<IGESGeom_ReadWriteModule ,opencascade::handle<IGESGeom_ReadWriteModule> , IGESData_ReadWriteModule>(m,"IGESGeom_ReadWriteModule",R"#(Defines Geom File Access Module for IGESGeom (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Geom File Access Module for IGESGeom (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Geom File Access Module for IGESGeom (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.)#");
    py::class_<IGESGeom_RuledSurface ,opencascade::handle<IGESGeom_RuledSurface> , IGESData_IGESEntity>(m,"IGESGeom_RuledSurface",R"#(defines IGESRuledSurface, Type <118> Form <0-1> in package IGESGeom A ruled surface is formed by moving a line connecting points of equal relative arc length or equal relative parametric value on two parametric curves from a start point to a terminate point on the curves. The parametric curves may be points, lines, circles, conics, rational B-splines, parametric splines or any parametric curve defined in the IGES specification.defines IGESRuledSurface, Type <118> Form <0-1> in package IGESGeom A ruled surface is formed by moving a line connecting points of equal relative arc length or equal relative parametric value on two parametric curves from a start point to a terminate point on the curves. The parametric curves may be points, lines, circles, conics, rational B-splines, parametric splines or any parametric curve defined in the IGES specification.defines IGESRuledSurface, Type <118> Form <0-1> in package IGESGeom A ruled surface is formed by moving a line connecting points of equal relative arc length or equal relative parametric value on two parametric curves from a start point to a terminate point on the curves. The parametric curves may be points, lines, circles, conics, rational B-splines, parametric splines or any parametric curve defined in the IGES specification.)#");
    py::class_<IGESGeom_SpecificModule ,opencascade::handle<IGESGeom_SpecificModule> , IGESData_SpecificModule>(m,"IGESGeom_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump & OwnCorrect, for IGESGeomDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESGeomDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESGeom)#");
    py::class_<IGESGeom_SplineCurve ,opencascade::handle<IGESGeom_SplineCurve> , IGESData_IGESEntity>(m,"IGESGeom_SplineCurve",R"#(Defines IGESSplineCurve, Type <112> Form <0> in package IGESGeom The parametric spline is a sequence of parametric polynomial segments. The curve could be of the type Linear, Quadratic, Cubic, Wilson-Fowler, Modified Wilson-Fowler, B-Spline. The N polynomial segments are delimited by the break points T(1), T(2), T(3), ..., T(N+1).Defines IGESSplineCurve, Type <112> Form <0> in package IGESGeom The parametric spline is a sequence of parametric polynomial segments. The curve could be of the type Linear, Quadratic, Cubic, Wilson-Fowler, Modified Wilson-Fowler, B-Spline. The N polynomial segments are delimited by the break points T(1), T(2), T(3), ..., T(N+1).Defines IGESSplineCurve, Type <112> Form <0> in package IGESGeom The parametric spline is a sequence of parametric polynomial segments. The curve could be of the type Linear, Quadratic, Cubic, Wilson-Fowler, Modified Wilson-Fowler, B-Spline. The N polynomial segments are delimited by the break points T(1), T(2), T(3), ..., T(N+1).)#");
    py::class_<IGESGeom_SplineSurface ,opencascade::handle<IGESGeom_SplineSurface> , IGESData_IGESEntity>(m,"IGESGeom_SplineSurface",R"#(defines IGESSplineSurface, Type <114> Form <0> in package IGESGeom A parametric spline surface is a grid of polynomial patches. Patch could be of the type Linear, Quadratic, Cubic, Wilson-Fowler, Modified Wilson-Fowler, B-Spline The M * N grid of patches is defined by the 'u' break points TU(1), TU(2), ..., TU(M+1) and the 'v' break points TV(1), TV(2), TV(3) ..., TV(N+1).defines IGESSplineSurface, Type <114> Form <0> in package IGESGeom A parametric spline surface is a grid of polynomial patches. Patch could be of the type Linear, Quadratic, Cubic, Wilson-Fowler, Modified Wilson-Fowler, B-Spline The M * N grid of patches is defined by the 'u' break points TU(1), TU(2), ..., TU(M+1) and the 'v' break points TV(1), TV(2), TV(3) ..., TV(N+1).defines IGESSplineSurface, Type <114> Form <0> in package IGESGeom A parametric spline surface is a grid of polynomial patches. Patch could be of the type Linear, Quadratic, Cubic, Wilson-Fowler, Modified Wilson-Fowler, B-Spline The M * N grid of patches is defined by the 'u' break points TU(1), TU(2), ..., TU(M+1) and the 'v' break points TV(1), TV(2), TV(3) ..., TV(N+1).)#");
    py::class_<IGESGeom_SurfaceOfRevolution ,opencascade::handle<IGESGeom_SurfaceOfRevolution> , IGESData_IGESEntity>(m,"IGESGeom_SurfaceOfRevolution",R"#(defines IGESSurfaceOfRevolution, Type <120> Form <0> in package IGESGeom A surface of revolution is defined by an axis of rotation a generatrix, and start and terminate rotation angles. The surface is created by rotating the generatrix about the axis of rotation through the start and terminate rotation angles.defines IGESSurfaceOfRevolution, Type <120> Form <0> in package IGESGeom A surface of revolution is defined by an axis of rotation a generatrix, and start and terminate rotation angles. The surface is created by rotating the generatrix about the axis of rotation through the start and terminate rotation angles.defines IGESSurfaceOfRevolution, Type <120> Form <0> in package IGESGeom A surface of revolution is defined by an axis of rotation a generatrix, and start and terminate rotation angles. The surface is created by rotating the generatrix about the axis of rotation through the start and terminate rotation angles.)#");
    py::class_<IGESGeom_TabulatedCylinder ,opencascade::handle<IGESGeom_TabulatedCylinder> , IGESData_IGESEntity>(m,"IGESGeom_TabulatedCylinder",R"#(defines IGESTabulatedCylinder, Type <122> Form <0> in package IGESGeom A tabulated cylinder is a surface formed by moving a line segment called generatrix parallel to itself along a curve called directrix. The curve may be a line, circular arc, conic arc, parametric spline curve, rational B-spline curve or composite curve.defines IGESTabulatedCylinder, Type <122> Form <0> in package IGESGeom A tabulated cylinder is a surface formed by moving a line segment called generatrix parallel to itself along a curve called directrix. The curve may be a line, circular arc, conic arc, parametric spline curve, rational B-spline curve or composite curve.defines IGESTabulatedCylinder, Type <122> Form <0> in package IGESGeom A tabulated cylinder is a surface formed by moving a line segment called generatrix parallel to itself along a curve called directrix. The curve may be a line, circular arc, conic arc, parametric spline curve, rational B-spline curve or composite curve.)#");
    py::class_<IGESGeom_ToolBSplineCurve , shared_ptr<IGESGeom_ToolBSplineCurve> >(m,"IGESGeom_ToolBSplineCurve",R"#(Tool to work on a BSplineCurve. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolBSplineSurface , shared_ptr<IGESGeom_ToolBSplineSurface> >(m,"IGESGeom_ToolBSplineSurface",R"#(Tool to work on a BSplineSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolBoundary , shared_ptr<IGESGeom_ToolBoundary> >(m,"IGESGeom_ToolBoundary",R"#(Tool to work on a Boundary. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolBoundedSurface , shared_ptr<IGESGeom_ToolBoundedSurface> >(m,"IGESGeom_ToolBoundedSurface",R"#(Tool to work on a BoundedSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolCircularArc , shared_ptr<IGESGeom_ToolCircularArc> >(m,"IGESGeom_ToolCircularArc",R"#(Tool to work on a CircularArc. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolCompositeCurve , shared_ptr<IGESGeom_ToolCompositeCurve> >(m,"IGESGeom_ToolCompositeCurve",R"#(Tool to work on a CompositeCurve. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolConicArc , shared_ptr<IGESGeom_ToolConicArc> >(m,"IGESGeom_ToolConicArc",R"#(Tool to work on a ConicArc. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolCopiousData , shared_ptr<IGESGeom_ToolCopiousData> >(m,"IGESGeom_ToolCopiousData",R"#(Tool to work on a CopiousData. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolCurveOnSurface , shared_ptr<IGESGeom_ToolCurveOnSurface> >(m,"IGESGeom_ToolCurveOnSurface",R"#(Tool to work on a CurveOnSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolDirection , shared_ptr<IGESGeom_ToolDirection> >(m,"IGESGeom_ToolDirection",R"#(Tool to work on a Direction. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolFlash , shared_ptr<IGESGeom_ToolFlash> >(m,"IGESGeom_ToolFlash",R"#(Tool to work on a Flash. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolLine , shared_ptr<IGESGeom_ToolLine> >(m,"IGESGeom_ToolLine",R"#(Tool to work on a Line. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolOffsetCurve , shared_ptr<IGESGeom_ToolOffsetCurve> >(m,"IGESGeom_ToolOffsetCurve",R"#(Tool to work on a OffsetCurve. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolOffsetSurface , shared_ptr<IGESGeom_ToolOffsetSurface> >(m,"IGESGeom_ToolOffsetSurface",R"#(Tool to work on a OffsetSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolPlane , shared_ptr<IGESGeom_ToolPlane> >(m,"IGESGeom_ToolPlane",R"#(Tool to work on a Plane. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolPoint , shared_ptr<IGESGeom_ToolPoint> >(m,"IGESGeom_ToolPoint",R"#(Tool to work on a Point. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolRuledSurface , shared_ptr<IGESGeom_ToolRuledSurface> >(m,"IGESGeom_ToolRuledSurface",R"#(Tool to work on a RuledSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolSplineCurve , shared_ptr<IGESGeom_ToolSplineCurve> >(m,"IGESGeom_ToolSplineCurve",R"#(Tool to work on a SplineCurve. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolSplineSurface , shared_ptr<IGESGeom_ToolSplineSurface> >(m,"IGESGeom_ToolSplineSurface",R"#(Tool to work on a SplineSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolSurfaceOfRevolution , shared_ptr<IGESGeom_ToolSurfaceOfRevolution> >(m,"IGESGeom_ToolSurfaceOfRevolution",R"#(Tool to work on a SurfaceOfRevolution. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolTabulatedCylinder , shared_ptr<IGESGeom_ToolTabulatedCylinder> >(m,"IGESGeom_ToolTabulatedCylinder",R"#(Tool to work on a TabulatedCylinder. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolTransformationMatrix , shared_ptr<IGESGeom_ToolTransformationMatrix> >(m,"IGESGeom_ToolTransformationMatrix",R"#(Tool to work on a TransformationMatrix. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_ToolTrimmedSurface , shared_ptr<IGESGeom_ToolTrimmedSurface> >(m,"IGESGeom_ToolTrimmedSurface",R"#(Tool to work on a TrimmedSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGeom_TransformationMatrix ,opencascade::handle<IGESGeom_TransformationMatrix> , IGESData_TransfEntity>(m,"IGESGeom_TransformationMatrix",R"#(defines IGESTransformationMatrix, Type <124> Form <0> in package IGESGeom The transformation matrix entity transforms three-row column vectors by means of matrix multiplication and then a vector addition. This entity can be considered as an "operator" entity in that it starts with the input vector, operates on it as described above, and produces the output vector.defines IGESTransformationMatrix, Type <124> Form <0> in package IGESGeom The transformation matrix entity transforms three-row column vectors by means of matrix multiplication and then a vector addition. This entity can be considered as an "operator" entity in that it starts with the input vector, operates on it as described above, and produces the output vector.defines IGESTransformationMatrix, Type <124> Form <0> in package IGESGeom The transformation matrix entity transforms three-row column vectors by means of matrix multiplication and then a vector addition. This entity can be considered as an "operator" entity in that it starts with the input vector, operates on it as described above, and produces the output vector.)#");
    py::class_<IGESGeom_TrimmedSurface ,opencascade::handle<IGESGeom_TrimmedSurface> , IGESData_IGESEntity>(m,"IGESGeom_TrimmedSurface",R"#(defines IGESTrimmedSurface, Type <144> Form <0> in package IGESGeom A simple closed curve in Euclidean plane divides the plane in to two disjoint, open connected components; one bounded, one unbounded. The bounded one is called the interior region to the curve. Unbounded component is called exterior region to the curve. The domain of the trimmed surface is defined as the interior of the outer boundaries and exterior of the inner boundaries and includes the boundary curves.defines IGESTrimmedSurface, Type <144> Form <0> in package IGESGeom A simple closed curve in Euclidean plane divides the plane in to two disjoint, open connected components; one bounded, one unbounded. The bounded one is called the interior region to the curve. Unbounded component is called exterior region to the curve. The domain of the trimmed surface is defined as the interior of the outer boundaries and exterior of the inner boundaries and includes the boundary curves.defines IGESTrimmedSurface, Type <144> Form <0> in package IGESGeom A simple closed curve in Euclidean plane divides the plane in to two disjoint, open connected components; one bounded, one unbounded. The bounded one is called the interior region to the curve. Unbounded component is called exterior region to the curve. The domain of the trimmed surface is defined as the interior of the outer boundaries and exterior of the inner boundaries and includes the boundary curves.)#");

};

// user-defined post-inclusion per module

// user-defined post
