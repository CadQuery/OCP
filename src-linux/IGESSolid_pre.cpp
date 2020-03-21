
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Sphere.hxx>
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
#include <IGESSolid_Shell.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SolidAssembly.hxx>
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
#include <IGESSolid_Block.hxx>
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
#include <IGESSolid_Torus.hxx>
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
#include <IGESSolid_SphericalSurface.hxx>
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
#include <IGESSolid_BooleanTree.hxx>
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
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
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
#include <IGESSolid_Ellipsoid.hxx>
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
#include <IGESSolid_CylindricalSurface.hxx>
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
#include <IGESSolid_EdgeList.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_RightAngularWedge.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ConicalSurface.hxx>
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
#include <IGESSolid_Face.hxx>
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
#include <IGESSolid_Cylinder.hxx>
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
#include <gp_Dir.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SolidInstance.hxx>
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
#include <IGESSolid_SolidOfRevolution.hxx>
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
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ConeFrustum.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SelectedComponent.hxx>
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
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_VertexList.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <IGESSolid_Protocol.hxx>
#include <IGESSolid_Block.hxx>
#include <IGESSolid_RightAngularWedge.hxx>
#include <IGESSolid_Cylinder.hxx>
#include <IGESSolid_ConeFrustum.hxx>
#include <IGESSolid_Sphere.hxx>
#include <IGESSolid_Torus.hxx>
#include <IGESSolid_SolidOfRevolution.hxx>
#include <IGESSolid_SolidOfLinearExtrusion.hxx>
#include <IGESSolid_Ellipsoid.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <IGESSolid_SelectedComponent.hxx>
#include <IGESSolid_SolidAssembly.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <IGESSolid_SolidInstance.hxx>
#include <IGESSolid_VertexList.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_ToolBlock.hxx>
#include <IGESSolid_ToolRightAngularWedge.hxx>
#include <IGESSolid_ToolCylinder.hxx>
#include <IGESSolid_ToolConeFrustum.hxx>
#include <IGESSolid_ToolSphere.hxx>
#include <IGESSolid_ToolTorus.hxx>
#include <IGESSolid_ToolSolidOfRevolution.hxx>
#include <IGESSolid_ToolSolidOfLinearExtrusion.hxx>
#include <IGESSolid_ToolEllipsoid.hxx>
#include <IGESSolid_ToolBooleanTree.hxx>
#include <IGESSolid_ToolSelectedComponent.hxx>
#include <IGESSolid_ToolSolidAssembly.hxx>
#include <IGESSolid_ToolManifoldSolid.hxx>
#include <IGESSolid_ToolPlaneSurface.hxx>
#include <IGESSolid_ToolCylindricalSurface.hxx>
#include <IGESSolid_ToolConicalSurface.hxx>
#include <IGESSolid_ToolSphericalSurface.hxx>
#include <IGESSolid_ToolToroidalSurface.hxx>
#include <IGESSolid_ToolSolidInstance.hxx>
#include <IGESSolid_ToolVertexList.hxx>
#include <IGESSolid_ToolEdgeList.hxx>
#include <IGESSolid_ToolLoop.hxx>
#include <IGESSolid_ToolFace.hxx>
#include <IGESSolid_ToolShell.hxx>
#include <IGESSolid_Protocol.hxx>
#include <IGESSolid_ReadWriteModule.hxx>
#include <IGESSolid_GeneralModule.hxx>
#include <IGESSolid_SpecificModule.hxx>
#include <IGESSolid_TopoBuilder.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_Loop.hxx>
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
#include <IGESSolid_VertexList.hxx>
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
#include <gp_Dir.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_SolidOfLinearExtrusion.hxx>
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
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_PlaneSurface.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_DomainError.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
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
#include <IGESSolid.hxx>
#include <IGESSolid_Array1OfFace.hxx>
#include <IGESSolid_Array1OfLoop.hxx>
#include <IGESSolid_Array1OfShell.hxx>
#include <IGESSolid_Array1OfVertexList.hxx>
#include <IGESSolid_Block.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <IGESSolid_ConeFrustum.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <IGESSolid_Cylinder.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_Ellipsoid.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_GeneralModule.hxx>
#include <IGESSolid_HArray1OfFace.hxx>
#include <IGESSolid_HArray1OfLoop.hxx>
#include <IGESSolid_HArray1OfShell.hxx>
#include <IGESSolid_HArray1OfVertexList.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESSolid_Protocol.hxx>
#include <IGESSolid_ReadWriteModule.hxx>
#include <IGESSolid_RightAngularWedge.hxx>
#include <IGESSolid_SelectedComponent.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_SolidAssembly.hxx>
#include <IGESSolid_SolidInstance.hxx>
#include <IGESSolid_SolidOfLinearExtrusion.hxx>
#include <IGESSolid_SolidOfRevolution.hxx>
#include <IGESSolid_SpecificModule.hxx>
#include <IGESSolid_Sphere.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <IGESSolid_ToolBlock.hxx>
#include <IGESSolid_ToolBooleanTree.hxx>
#include <IGESSolid_ToolConeFrustum.hxx>
#include <IGESSolid_ToolConicalSurface.hxx>
#include <IGESSolid_ToolCylinder.hxx>
#include <IGESSolid_ToolCylindricalSurface.hxx>
#include <IGESSolid_ToolEdgeList.hxx>
#include <IGESSolid_ToolEllipsoid.hxx>
#include <IGESSolid_ToolFace.hxx>
#include <IGESSolid_ToolLoop.hxx>
#include <IGESSolid_ToolManifoldSolid.hxx>
#include <IGESSolid_ToolPlaneSurface.hxx>
#include <IGESSolid_ToolRightAngularWedge.hxx>
#include <IGESSolid_ToolSelectedComponent.hxx>
#include <IGESSolid_ToolShell.hxx>
#include <IGESSolid_ToolSolidAssembly.hxx>
#include <IGESSolid_ToolSolidInstance.hxx>
#include <IGESSolid_ToolSolidOfLinearExtrusion.hxx>
#include <IGESSolid_ToolSolidOfRevolution.hxx>
#include <IGESSolid_ToolSphere.hxx>
#include <IGESSolid_ToolSphericalSurface.hxx>
#include <IGESSolid_ToolToroidalSurface.hxx>
#include <IGESSolid_ToolTorus.hxx>
#include <IGESSolid_ToolVertexList.hxx>
#include <IGESSolid_TopoBuilder.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <IGESSolid_Torus.hxx>
#include <IGESSolid_VertexList.hxx>

// template related includes
// ./opencascade/IGESSolid_Array1OfVertexList.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESSolid_Array1OfFace.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESSolid_Array1OfShell.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESSolid_Array1OfLoop.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESSolid_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESSolid", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<IGESSolid_VertexList> >(m,"IGESSolid_Array1OfVertexList");
    preregister_template_NCollection_Array1<opencascade::handle<IGESSolid_Face> >(m,"IGESSolid_Array1OfFace");
    preregister_template_NCollection_Array1<opencascade::handle<IGESSolid_Shell> >(m,"IGESSolid_Array1OfShell");
    preregister_template_NCollection_Array1<opencascade::handle<IGESSolid_Loop> >(m,"IGESSolid_Array1OfLoop");

// classes forward declarations only
    py::class_<IGESSolid , shared_ptr<IGESSolid> >(m,"IGESSolid",R"#(This package consists of B-Rep and CSG Solid entities)#");
    py::class_<IGESSolid_Block ,opencascade::handle<IGESSolid_Block> , IGESData_IGESEntity>(m,"IGESSolid_Block",R"#(defines Block, Type <150> Form Number <0> in package IGESSolid The Block is a rectangular parallelopiped, defined with one vertex at (X1, Y1, Z1) and three edges lying along the local +X, +Y, +Z axes.defines Block, Type <150> Form Number <0> in package IGESSolid The Block is a rectangular parallelopiped, defined with one vertex at (X1, Y1, Z1) and three edges lying along the local +X, +Y, +Z axes.defines Block, Type <150> Form Number <0> in package IGESSolid The Block is a rectangular parallelopiped, defined with one vertex at (X1, Y1, Z1) and three edges lying along the local +X, +Y, +Z axes.)#");
    py::class_<IGESSolid_BooleanTree ,opencascade::handle<IGESSolid_BooleanTree> , IGESData_IGESEntity>(m,"IGESSolid_BooleanTree",R"#(defines BooleanTree, Type <180> Form Number <0> in package IGESSolid The Boolean tree describes a binary tree structure composed of regularized Boolean operations and operands, in post-order notation.defines BooleanTree, Type <180> Form Number <0> in package IGESSolid The Boolean tree describes a binary tree structure composed of regularized Boolean operations and operands, in post-order notation.defines BooleanTree, Type <180> Form Number <0> in package IGESSolid The Boolean tree describes a binary tree structure composed of regularized Boolean operations and operands, in post-order notation.)#");
    py::class_<IGESSolid_ConeFrustum ,opencascade::handle<IGESSolid_ConeFrustum> , IGESData_IGESEntity>(m,"IGESSolid_ConeFrustum",R"#(defines ConeFrustum, Type <156> Form Number <0> in package IGESSolid The Cone Frustum is defined by the center of the larger circular face of the frustum, its radius, a unit vector in the axis direction, a height in this direction and a second circular face with radius which is lesser than the first face.defines ConeFrustum, Type <156> Form Number <0> in package IGESSolid The Cone Frustum is defined by the center of the larger circular face of the frustum, its radius, a unit vector in the axis direction, a height in this direction and a second circular face with radius which is lesser than the first face.defines ConeFrustum, Type <156> Form Number <0> in package IGESSolid The Cone Frustum is defined by the center of the larger circular face of the frustum, its radius, a unit vector in the axis direction, a height in this direction and a second circular face with radius which is lesser than the first face.)#");
    py::class_<IGESSolid_ConicalSurface ,opencascade::handle<IGESSolid_ConicalSurface> , IGESData_IGESEntity>(m,"IGESSolid_ConicalSurface",R"#(defines ConicalSurface, Type <194> Form Number <0,1> in package IGESSolid The right circular conical surface is defined by a point on the axis on the cone, the direction of the axis of the cone, the radius of the cone at the axis point and the cone semi-angle.defines ConicalSurface, Type <194> Form Number <0,1> in package IGESSolid The right circular conical surface is defined by a point on the axis on the cone, the direction of the axis of the cone, the radius of the cone at the axis point and the cone semi-angle.defines ConicalSurface, Type <194> Form Number <0,1> in package IGESSolid The right circular conical surface is defined by a point on the axis on the cone, the direction of the axis of the cone, the radius of the cone at the axis point and the cone semi-angle.)#");
    py::class_<IGESSolid_Cylinder ,opencascade::handle<IGESSolid_Cylinder> , IGESData_IGESEntity>(m,"IGESSolid_Cylinder",R"#(defines Cylinder, Type <154> Form Number <0> in package IGESSolid This defines a solid cylinderdefines Cylinder, Type <154> Form Number <0> in package IGESSolid This defines a solid cylinderdefines Cylinder, Type <154> Form Number <0> in package IGESSolid This defines a solid cylinder)#");
    py::class_<IGESSolid_CylindricalSurface ,opencascade::handle<IGESSolid_CylindricalSurface> , IGESData_IGESEntity>(m,"IGESSolid_CylindricalSurface",R"#(defines CylindricalSurface, Type <192> Form Number <0,1> in package IGESSoliddefines CylindricalSurface, Type <192> Form Number <0,1> in package IGESSoliddefines CylindricalSurface, Type <192> Form Number <0,1> in package IGESSolid)#");
    py::class_<IGESSolid_EdgeList ,opencascade::handle<IGESSolid_EdgeList> , IGESData_IGESEntity>(m,"IGESSolid_EdgeList",R"#(defines EdgeList, Type <504> Form <1> in package IGESSolid EdgeList is defined as a segment joining two vertices It contains one or more edge tuples.defines EdgeList, Type <504> Form <1> in package IGESSolid EdgeList is defined as a segment joining two vertices It contains one or more edge tuples.defines EdgeList, Type <504> Form <1> in package IGESSolid EdgeList is defined as a segment joining two vertices It contains one or more edge tuples.)#");
    py::class_<IGESSolid_Ellipsoid ,opencascade::handle<IGESSolid_Ellipsoid> , IGESData_IGESEntity>(m,"IGESSolid_Ellipsoid",R"#(defines Ellipsoid, Type <168> Form Number <0> in package IGESSolid The ellipsoid is a solid bounded by the surface defined by: X^2 Y^2 Z^2 ----- + ----- + ----- = 1 LX^2 LY^2 LZ^2defines Ellipsoid, Type <168> Form Number <0> in package IGESSolid The ellipsoid is a solid bounded by the surface defined by: X^2 Y^2 Z^2 ----- + ----- + ----- = 1 LX^2 LY^2 LZ^2defines Ellipsoid, Type <168> Form Number <0> in package IGESSolid The ellipsoid is a solid bounded by the surface defined by: X^2 Y^2 Z^2 ----- + ----- + ----- = 1 LX^2 LY^2 LZ^2)#");
    py::class_<IGESSolid_Face ,opencascade::handle<IGESSolid_Face> , IGESData_IGESEntity>(m,"IGESSolid_Face",R"#(defines Face, Type <510> Form Number <1> in package IGESSolid Face entity is a bound (partial) which has finite areadefines Face, Type <510> Form Number <1> in package IGESSolid Face entity is a bound (partial) which has finite areadefines Face, Type <510> Form Number <1> in package IGESSolid Face entity is a bound (partial) which has finite area)#");
    py::class_<IGESSolid_GeneralModule ,opencascade::handle<IGESSolid_GeneralModule> , IGESData_GeneralModule>(m,"IGESSolid_GeneralModule",R"#(Definition of General Services for IGESSolid (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESSolid (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESSolid (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESSolid_HArray1OfFace ,opencascade::handle<IGESSolid_HArray1OfFace> , IGESSolid_Array1OfFace, Standard_Transient>(m,"IGESSolid_HArray1OfFace",R"#()#");
    py::class_<IGESSolid_HArray1OfLoop ,opencascade::handle<IGESSolid_HArray1OfLoop> , IGESSolid_Array1OfLoop, Standard_Transient>(m,"IGESSolid_HArray1OfLoop",R"#()#");
    py::class_<IGESSolid_HArray1OfShell ,opencascade::handle<IGESSolid_HArray1OfShell> , IGESSolid_Array1OfShell, Standard_Transient>(m,"IGESSolid_HArray1OfShell",R"#()#");
    py::class_<IGESSolid_HArray1OfVertexList ,opencascade::handle<IGESSolid_HArray1OfVertexList> , IGESSolid_Array1OfVertexList, Standard_Transient>(m,"IGESSolid_HArray1OfVertexList",R"#()#");
    py::class_<IGESSolid_Loop ,opencascade::handle<IGESSolid_Loop> , IGESData_IGESEntity>(m,"IGESSolid_Loop",R"#(defines Loop, Type <508> Form Number <1> in package IGESSolid A Loop entity specifies a bound of a face. It represents a connected collection of face boundaries, seams, and poles of a single face.defines Loop, Type <508> Form Number <1> in package IGESSolid A Loop entity specifies a bound of a face. It represents a connected collection of face boundaries, seams, and poles of a single face.defines Loop, Type <508> Form Number <1> in package IGESSolid A Loop entity specifies a bound of a face. It represents a connected collection of face boundaries, seams, and poles of a single face.)#");
    py::class_<IGESSolid_ManifoldSolid ,opencascade::handle<IGESSolid_ManifoldSolid> , IGESData_IGESEntity>(m,"IGESSolid_ManifoldSolid",R"#(defines ManifoldSolid, Type <186> Form Number <0> in package IGESSolid A manifold solid is a bounded, closed, and finite volume in three dimensional Euclidean spacedefines ManifoldSolid, Type <186> Form Number <0> in package IGESSolid A manifold solid is a bounded, closed, and finite volume in three dimensional Euclidean spacedefines ManifoldSolid, Type <186> Form Number <0> in package IGESSolid A manifold solid is a bounded, closed, and finite volume in three dimensional Euclidean space)#");
    py::class_<IGESSolid_PlaneSurface ,opencascade::handle<IGESSolid_PlaneSurface> , IGESData_IGESEntity>(m,"IGESSolid_PlaneSurface",R"#(defines PlaneSurface, Type <190> Form Number <0,1> in package IGESSolid A plane surface entity is defined by a point on the surface and a normal to it.defines PlaneSurface, Type <190> Form Number <0,1> in package IGESSolid A plane surface entity is defined by a point on the surface and a normal to it.defines PlaneSurface, Type <190> Form Number <0,1> in package IGESSolid A plane surface entity is defined by a point on the surface and a normal to it.)#");
    py::class_<IGESSolid_Protocol ,opencascade::handle<IGESSolid_Protocol> , IGESData_Protocol>(m,"IGESSolid_Protocol",R"#(Description of Protocol for IGESSolidDescription of Protocol for IGESSolidDescription of Protocol for IGESSolid)#");
    py::class_<IGESSolid_ReadWriteModule ,opencascade::handle<IGESSolid_ReadWriteModule> , IGESData_ReadWriteModule>(m,"IGESSolid_ReadWriteModule",R"#(Defines Solid File Access Module for IGESSolid (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Solid File Access Module for IGESSolid (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Solid File Access Module for IGESSolid (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.)#");
    py::class_<IGESSolid_RightAngularWedge ,opencascade::handle<IGESSolid_RightAngularWedge> , IGESData_IGESEntity>(m,"IGESSolid_RightAngularWedge",R"#(defines RightAngularWedge, Type <152> Form Number <0> in package IGESSolid A right angular wedge is a triangular/trapezoidal prismdefines RightAngularWedge, Type <152> Form Number <0> in package IGESSolid A right angular wedge is a triangular/trapezoidal prismdefines RightAngularWedge, Type <152> Form Number <0> in package IGESSolid A right angular wedge is a triangular/trapezoidal prism)#");
    py::class_<IGESSolid_SelectedComponent ,opencascade::handle<IGESSolid_SelectedComponent> , IGESData_IGESEntity>(m,"IGESSolid_SelectedComponent",R"#(defines SelectedComponent, Type <182> Form Number <0> in package IGESSolid The Selected Component entity provides a means of selecting one component of a disjoint CSG soliddefines SelectedComponent, Type <182> Form Number <0> in package IGESSolid The Selected Component entity provides a means of selecting one component of a disjoint CSG soliddefines SelectedComponent, Type <182> Form Number <0> in package IGESSolid The Selected Component entity provides a means of selecting one component of a disjoint CSG solid)#");
    py::class_<IGESSolid_Shell ,opencascade::handle<IGESSolid_Shell> , IGESData_IGESEntity>(m,"IGESSolid_Shell",R"#(defines Shell, Type <514> Form Number <1> in package IGESSolid Shell entity is a connected entity of dimensionality 2 which divides R3 into two arcwise connected open subsets, one of which is finite. Inside of the shell is defined to be the finite region. From IGES-5.3, Form can be <1> for Closed or <2> for Opendefines Shell, Type <514> Form Number <1> in package IGESSolid Shell entity is a connected entity of dimensionality 2 which divides R3 into two arcwise connected open subsets, one of which is finite. Inside of the shell is defined to be the finite region. From IGES-5.3, Form can be <1> for Closed or <2> for Opendefines Shell, Type <514> Form Number <1> in package IGESSolid Shell entity is a connected entity of dimensionality 2 which divides R3 into two arcwise connected open subsets, one of which is finite. Inside of the shell is defined to be the finite region. From IGES-5.3, Form can be <1> for Closed or <2> for Open)#");
    py::class_<IGESSolid_SolidAssembly ,opencascade::handle<IGESSolid_SolidAssembly> , IGESData_IGESEntity>(m,"IGESSolid_SolidAssembly",R"#(defines SolidAssembly, Type <184> Form <0> in package IGESSolid Solid assembly is a collection of items which possess a shared fixed geometric relationship.defines SolidAssembly, Type <184> Form <0> in package IGESSolid Solid assembly is a collection of items which possess a shared fixed geometric relationship.defines SolidAssembly, Type <184> Form <0> in package IGESSolid Solid assembly is a collection of items which possess a shared fixed geometric relationship.)#");
    py::class_<IGESSolid_SolidInstance ,opencascade::handle<IGESSolid_SolidInstance> , IGESData_IGESEntity>(m,"IGESSolid_SolidInstance",R"#(defines SolidInstance, Type <430> Form Number <0> in package IGESSolid This provides a mechanism for replicating a solid representation.defines SolidInstance, Type <430> Form Number <0> in package IGESSolid This provides a mechanism for replicating a solid representation.defines SolidInstance, Type <430> Form Number <0> in package IGESSolid This provides a mechanism for replicating a solid representation.)#");
    py::class_<IGESSolid_SolidOfLinearExtrusion ,opencascade::handle<IGESSolid_SolidOfLinearExtrusion> , IGESData_IGESEntity>(m,"IGESSolid_SolidOfLinearExtrusion",R"#(defines SolidOfLinearExtrusion, Type <164> Form Number <0> in package IGESSolid Solid of linear extrusion is defined by translatin an area determined by a planar curvedefines SolidOfLinearExtrusion, Type <164> Form Number <0> in package IGESSolid Solid of linear extrusion is defined by translatin an area determined by a planar curvedefines SolidOfLinearExtrusion, Type <164> Form Number <0> in package IGESSolid Solid of linear extrusion is defined by translatin an area determined by a planar curve)#");
    py::class_<IGESSolid_SolidOfRevolution ,opencascade::handle<IGESSolid_SolidOfRevolution> , IGESData_IGESEntity>(m,"IGESSolid_SolidOfRevolution",R"#(defines SolidOfRevolution, Type <162> Form Number <0,1> in package IGESSolid This entity is defined by revolving the area determined by a planar curve about a specified axis through a given fraction of full rotation.defines SolidOfRevolution, Type <162> Form Number <0,1> in package IGESSolid This entity is defined by revolving the area determined by a planar curve about a specified axis through a given fraction of full rotation.defines SolidOfRevolution, Type <162> Form Number <0,1> in package IGESSolid This entity is defined by revolving the area determined by a planar curve about a specified axis through a given fraction of full rotation.)#");
    py::class_<IGESSolid_SpecificModule ,opencascade::handle<IGESSolid_SpecificModule> , IGESData_SpecificModule>(m,"IGESSolid_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump, for IGESSolidDefines Services attached to IGES Entities : Dump, for IGESSolidDefines Services attached to IGES Entities : Dump, for IGESSolid)#");
    py::class_<IGESSolid_Sphere ,opencascade::handle<IGESSolid_Sphere> , IGESData_IGESEntity>(m,"IGESSolid_Sphere",R"#(defines Sphere, Type <158> Form Number <0> in package IGESSolid This defines a sphere with a center and radiusdefines Sphere, Type <158> Form Number <0> in package IGESSolid This defines a sphere with a center and radiusdefines Sphere, Type <158> Form Number <0> in package IGESSolid This defines a sphere with a center and radius)#");
    py::class_<IGESSolid_SphericalSurface ,opencascade::handle<IGESSolid_SphericalSurface> , IGESData_IGESEntity>(m,"IGESSolid_SphericalSurface",R"#(defines SphericalSurface, Type <196> Form Number <0,1> in package IGESSolid Spherical surface is defined by a center and radius. In case of parametrised surface an axis and a reference direction is provided.defines SphericalSurface, Type <196> Form Number <0,1> in package IGESSolid Spherical surface is defined by a center and radius. In case of parametrised surface an axis and a reference direction is provided.defines SphericalSurface, Type <196> Form Number <0,1> in package IGESSolid Spherical surface is defined by a center and radius. In case of parametrised surface an axis and a reference direction is provided.)#");
    py::class_<IGESSolid_ToolBlock , shared_ptr<IGESSolid_ToolBlock> >(m,"IGESSolid_ToolBlock",R"#(Tool to work on a Block. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolBooleanTree , shared_ptr<IGESSolid_ToolBooleanTree> >(m,"IGESSolid_ToolBooleanTree",R"#(Tool to work on a BooleanTree. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolConeFrustum , shared_ptr<IGESSolid_ToolConeFrustum> >(m,"IGESSolid_ToolConeFrustum",R"#(Tool to work on a ConeFrustum. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolConicalSurface , shared_ptr<IGESSolid_ToolConicalSurface> >(m,"IGESSolid_ToolConicalSurface",R"#(Tool to work on a ConicalSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolCylinder , shared_ptr<IGESSolid_ToolCylinder> >(m,"IGESSolid_ToolCylinder",R"#(Tool to work on a Cylinder. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolCylindricalSurface , shared_ptr<IGESSolid_ToolCylindricalSurface> >(m,"IGESSolid_ToolCylindricalSurface",R"#(Tool to work on a CylindricalSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolEdgeList , shared_ptr<IGESSolid_ToolEdgeList> >(m,"IGESSolid_ToolEdgeList",R"#(Tool to work on a EdgeList. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolEllipsoid , shared_ptr<IGESSolid_ToolEllipsoid> >(m,"IGESSolid_ToolEllipsoid",R"#(Tool to work on a Ellipsoid. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolFace , shared_ptr<IGESSolid_ToolFace> >(m,"IGESSolid_ToolFace",R"#(Tool to work on a Face. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolLoop , shared_ptr<IGESSolid_ToolLoop> >(m,"IGESSolid_ToolLoop",R"#(Tool to work on a Loop. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolManifoldSolid , shared_ptr<IGESSolid_ToolManifoldSolid> >(m,"IGESSolid_ToolManifoldSolid",R"#(Tool to work on a ManifoldSolid. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolPlaneSurface , shared_ptr<IGESSolid_ToolPlaneSurface> >(m,"IGESSolid_ToolPlaneSurface",R"#(Tool to work on a PlaneSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolRightAngularWedge , shared_ptr<IGESSolid_ToolRightAngularWedge> >(m,"IGESSolid_ToolRightAngularWedge",R"#(Tool to work on a RightAngularWedge. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolSelectedComponent , shared_ptr<IGESSolid_ToolSelectedComponent> >(m,"IGESSolid_ToolSelectedComponent",R"#(Tool to work on a SelectedComponent. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolShell , shared_ptr<IGESSolid_ToolShell> >(m,"IGESSolid_ToolShell",R"#(Tool to work on a Shell. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolSolidAssembly , shared_ptr<IGESSolid_ToolSolidAssembly> >(m,"IGESSolid_ToolSolidAssembly",R"#(Tool to work on a SolidAssembly. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolSolidInstance , shared_ptr<IGESSolid_ToolSolidInstance> >(m,"IGESSolid_ToolSolidInstance",R"#(Tool to work on a SolidInstance. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolSolidOfLinearExtrusion , shared_ptr<IGESSolid_ToolSolidOfLinearExtrusion> >(m,"IGESSolid_ToolSolidOfLinearExtrusion",R"#(Tool to work on a SolidOfLinearExtrusion. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolSolidOfRevolution , shared_ptr<IGESSolid_ToolSolidOfRevolution> >(m,"IGESSolid_ToolSolidOfRevolution",R"#(Tool to work on a SolidOfRevolution. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolSphere , shared_ptr<IGESSolid_ToolSphere> >(m,"IGESSolid_ToolSphere",R"#(Tool to work on a Sphere. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolSphericalSurface , shared_ptr<IGESSolid_ToolSphericalSurface> >(m,"IGESSolid_ToolSphericalSurface",R"#(Tool to work on a SphericalSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolToroidalSurface , shared_ptr<IGESSolid_ToolToroidalSurface> >(m,"IGESSolid_ToolToroidalSurface",R"#(Tool to work on a ToroidalSurface. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolTorus , shared_ptr<IGESSolid_ToolTorus> >(m,"IGESSolid_ToolTorus",R"#(Tool to work on a Torus. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_ToolVertexList , shared_ptr<IGESSolid_ToolVertexList> >(m,"IGESSolid_ToolVertexList",R"#(Tool to work on a VertexList. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESSolid_TopoBuilder , shared_ptr<IGESSolid_TopoBuilder> >(m,"IGESSolid_TopoBuilder",R"#(This class manages the creation of an IGES Topologic entity (BREP : ManifoldSolid, Shell, Face) This includes definiting of Vertex and Edge Lists, building of Edges and Loops)#");
    py::class_<IGESSolid_ToroidalSurface ,opencascade::handle<IGESSolid_ToroidalSurface> , IGESData_IGESEntity>(m,"IGESSolid_ToroidalSurface",R"#(defines ToroidalSurface, Type <198> Form Number <0,1> in package IGESSolid This entity is defined by the center point, the axis direction and the major and minor radii. In case of parametrised surface a reference direction is provided.defines ToroidalSurface, Type <198> Form Number <0,1> in package IGESSolid This entity is defined by the center point, the axis direction and the major and minor radii. In case of parametrised surface a reference direction is provided.defines ToroidalSurface, Type <198> Form Number <0,1> in package IGESSolid This entity is defined by the center point, the axis direction and the major and minor radii. In case of parametrised surface a reference direction is provided.)#");
    py::class_<IGESSolid_Torus ,opencascade::handle<IGESSolid_Torus> , IGESData_IGESEntity>(m,"IGESSolid_Torus",R"#(defines Torus, Type <160> Form Number <0> in package IGESSolid A Torus is a solid formed by revolving a circular disc about a specified coplanar axis.defines Torus, Type <160> Form Number <0> in package IGESSolid A Torus is a solid formed by revolving a circular disc about a specified coplanar axis.defines Torus, Type <160> Form Number <0> in package IGESSolid A Torus is a solid formed by revolving a circular disc about a specified coplanar axis.)#");
    py::class_<IGESSolid_VertexList ,opencascade::handle<IGESSolid_VertexList> , IGESData_IGESEntity>(m,"IGESSolid_VertexList",R"#(defines VertexList, Type <502> Form Number <1> in package IGESSolid A vertex is a point in R3. A vertex is the bound of an edge and can participate in the bounds of a face. It contains one or more vertices.defines VertexList, Type <502> Form Number <1> in package IGESSolid A vertex is a point in R3. A vertex is the bound of an edge and can participate in the bounds of a face. It contains one or more vertices.defines VertexList, Type <502> Form Number <1> in package IGESSolid A vertex is a point in R3. A vertex is the bound of an edge and can participate in the bounds of a face. It contains one or more vertices.)#");

};

// user-defined post-inclusion per module

// user-defined post
