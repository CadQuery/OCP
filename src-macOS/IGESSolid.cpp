
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir.hxx>
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
#include <gp_Pnt.hxx>
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
#include <IGESData_IGESEntity.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
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
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
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
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
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
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
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
#include <gp_Dir.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <gp_Pnt.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_VertexList.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>

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
// ./opencascade/IGESSolid_Array1OfLoop.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESSolid_Array1OfFace.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESSolid_Array1OfShell.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESSolid_Array1OfVertexList.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESSolid(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESSolid"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESSolid , shared_ptr<IGESSolid>>(m,"IGESSolid");

    static_cast<py::class_<IGESSolid , shared_ptr<IGESSolid> >>(m.attr("IGESSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Block ,opencascade::handle<IGESSolid_Block> , IGESData_IGESEntity>>(m.attr("IGESSolid_Block"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Block::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Block::*)() const>(&IGESSolid_Block::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Block::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_BooleanTree ,opencascade::handle<IGESSolid_BooleanTree> , IGESData_IGESEntity>>(m.attr("IGESSolid_BooleanTree"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_BooleanTree::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_BooleanTree::*)() const>(&IGESSolid_BooleanTree::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_BooleanTree::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ConeFrustum ,opencascade::handle<IGESSolid_ConeFrustum> , IGESData_IGESEntity>>(m.attr("IGESSolid_ConeFrustum"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ConeFrustum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ConeFrustum::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ConicalSurface ,opencascade::handle<IGESSolid_ConicalSurface> , IGESData_IGESEntity>>(m.attr("IGESSolid_ConicalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ConicalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ConicalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Cylinder ,opencascade::handle<IGESSolid_Cylinder> , IGESData_IGESEntity>>(m.attr("IGESSolid_Cylinder"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Cylinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Cylinder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_CylindricalSurface ,opencascade::handle<IGESSolid_CylindricalSurface> , IGESData_IGESEntity>>(m.attr("IGESSolid_CylindricalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_CylindricalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_CylindricalSurface::*)() const>(&IGESSolid_CylindricalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_CylindricalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_EdgeList ,opencascade::handle<IGESSolid_EdgeList> , IGESData_IGESEntity>>(m.attr("IGESSolid_EdgeList"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_EdgeList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_EdgeList::*)() const>(&IGESSolid_EdgeList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_EdgeList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Ellipsoid ,opencascade::handle<IGESSolid_Ellipsoid> , IGESData_IGESEntity>>(m.attr("IGESSolid_Ellipsoid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Ellipsoid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Ellipsoid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Face ,opencascade::handle<IGESSolid_Face> , IGESData_IGESEntity>>(m.attr("IGESSolid_Face"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Face::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Face::*)() const>(&IGESSolid_Face::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Face::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_GeneralModule ,opencascade::handle<IGESSolid_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESSolid_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESSolid_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESSolid_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESSolid_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESSolid_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESSolid_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESSolid_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESSolid_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESSolid_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESSolid_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Shape for all)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_GeneralModule::*)() const>(&IGESSolid_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_HArray1OfFace ,opencascade::handle<IGESSolid_HArray1OfFace> , IGESSolid_Array1OfFace, Standard_Transient>>(m.attr("IGESSolid_HArray1OfFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESSolid_Face> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESSolid_Face> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESSolid_Array1OfFace & (IGESSolid_HArray1OfFace::*)() const) static_cast<const IGESSolid_Array1OfFace & (IGESSolid_HArray1OfFace::*)() const>(&IGESSolid_HArray1OfFace::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESSolid_Array1OfFace & (IGESSolid_HArray1OfFace::*)() ) static_cast<IGESSolid_Array1OfFace & (IGESSolid_HArray1OfFace::*)() >(&IGESSolid_HArray1OfFace::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfFace::*)() const>(&IGESSolid_HArray1OfFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_HArray1OfFace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_HArray1OfFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_HArray1OfLoop ,opencascade::handle<IGESSolid_HArray1OfLoop> , IGESSolid_Array1OfLoop, Standard_Transient>>(m.attr("IGESSolid_HArray1OfLoop"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESSolid_Loop> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESSolid_Loop> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESSolid_Array1OfLoop & (IGESSolid_HArray1OfLoop::*)() const) static_cast<const IGESSolid_Array1OfLoop & (IGESSolid_HArray1OfLoop::*)() const>(&IGESSolid_HArray1OfLoop::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESSolid_Array1OfLoop & (IGESSolid_HArray1OfLoop::*)() ) static_cast<IGESSolid_Array1OfLoop & (IGESSolid_HArray1OfLoop::*)() >(&IGESSolid_HArray1OfLoop::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfLoop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfLoop::*)() const>(&IGESSolid_HArray1OfLoop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_HArray1OfLoop::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_HArray1OfLoop::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_HArray1OfShell ,opencascade::handle<IGESSolid_HArray1OfShell> , IGESSolid_Array1OfShell, Standard_Transient>>(m.attr("IGESSolid_HArray1OfShell"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESSolid_Shell> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESSolid_Shell> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESSolid_Array1OfShell & (IGESSolid_HArray1OfShell::*)() const) static_cast<const IGESSolid_Array1OfShell & (IGESSolid_HArray1OfShell::*)() const>(&IGESSolid_HArray1OfShell::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESSolid_Array1OfShell & (IGESSolid_HArray1OfShell::*)() ) static_cast<IGESSolid_Array1OfShell & (IGESSolid_HArray1OfShell::*)() >(&IGESSolid_HArray1OfShell::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfShell::*)() const>(&IGESSolid_HArray1OfShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_HArray1OfShell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_HArray1OfShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_HArray1OfVertexList ,opencascade::handle<IGESSolid_HArray1OfVertexList> , IGESSolid_Array1OfVertexList, Standard_Transient>>(m.attr("IGESSolid_HArray1OfVertexList"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESSolid_VertexList> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESSolid_VertexList> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESSolid_Array1OfVertexList & (IGESSolid_HArray1OfVertexList::*)() const) static_cast<const IGESSolid_Array1OfVertexList & (IGESSolid_HArray1OfVertexList::*)() const>(&IGESSolid_HArray1OfVertexList::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESSolid_Array1OfVertexList & (IGESSolid_HArray1OfVertexList::*)() ) static_cast<IGESSolid_Array1OfVertexList & (IGESSolid_HArray1OfVertexList::*)() >(&IGESSolid_HArray1OfVertexList::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfVertexList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfVertexList::*)() const>(&IGESSolid_HArray1OfVertexList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_HArray1OfVertexList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_HArray1OfVertexList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Loop ,opencascade::handle<IGESSolid_Loop> , IGESData_IGESEntity>>(m.attr("IGESSolid_Loop"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Loop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Loop::*)() const>(&IGESSolid_Loop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Loop::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ManifoldSolid ,opencascade::handle<IGESSolid_ManifoldSolid> , IGESData_IGESEntity>>(m.attr("IGESSolid_ManifoldSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ManifoldSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ManifoldSolid::*)() const>(&IGESSolid_ManifoldSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ManifoldSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_PlaneSurface ,opencascade::handle<IGESSolid_PlaneSurface> , IGESData_IGESEntity>>(m.attr("IGESSolid_PlaneSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_PlaneSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_PlaneSurface::*)() const>(&IGESSolid_PlaneSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_PlaneSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Protocol ,opencascade::handle<IGESSolid_Protocol> , IGESData_Protocol>>(m.attr("IGESSolid_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESSolid_Protocol::*)() const) static_cast<Standard_Integer (IGESSolid_Protocol::*)() const>(&IGESSolid_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESGeom))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESSolid_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESSolid_Protocol::*)( const Standard_Integer ) const>(&IGESSolid_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESSolid_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESSolid_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESSolid_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Protocol::*)() const>(&IGESSolid_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ReadWriteModule ,opencascade::handle<IGESSolid_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESSolid_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESSolid_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESSolid_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESSolid_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESSolid)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESSolid_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESSolid_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESSolid_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESSolid)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESSolid_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESSolid_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ReadWriteModule::*)() const>(&IGESSolid_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_RightAngularWedge ,opencascade::handle<IGESSolid_RightAngularWedge> , IGESData_IGESEntity>>(m.attr("IGESSolid_RightAngularWedge"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_RightAngularWedge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_RightAngularWedge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SelectedComponent ,opencascade::handle<IGESSolid_SelectedComponent> , IGESData_IGESEntity>>(m.attr("IGESSolid_SelectedComponent"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SelectedComponent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SelectedComponent::*)() const>(&IGESSolid_SelectedComponent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SelectedComponent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Shell ,opencascade::handle<IGESSolid_Shell> , IGESData_IGESEntity>>(m.attr("IGESSolid_Shell"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Shell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Shell::*)() const>(&IGESSolid_Shell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Shell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidAssembly ,opencascade::handle<IGESSolid_SolidAssembly> , IGESData_IGESEntity>>(m.attr("IGESSolid_SolidAssembly"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidAssembly::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidAssembly::*)() const>(&IGESSolid_SolidAssembly::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidAssembly::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidInstance ,opencascade::handle<IGESSolid_SolidInstance> , IGESData_IGESEntity>>(m.attr("IGESSolid_SolidInstance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidInstance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidInstance::*)() const>(&IGESSolid_SolidInstance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidInstance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidOfLinearExtrusion ,opencascade::handle<IGESSolid_SolidOfLinearExtrusion> , IGESData_IGESEntity>>(m.attr("IGESSolid_SolidOfLinearExtrusion"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfLinearExtrusion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfLinearExtrusion::*)() const>(&IGESSolid_SolidOfLinearExtrusion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidOfLinearExtrusion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidOfRevolution ,opencascade::handle<IGESSolid_SolidOfRevolution> , IGESData_IGESEntity>>(m.attr("IGESSolid_SolidOfRevolution"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidOfRevolution::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SpecificModule ,opencascade::handle<IGESSolid_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESSolid_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESSolid_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESSolid_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESSolid_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESSolid)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SpecificModule::*)() const>(&IGESSolid_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Sphere ,opencascade::handle<IGESSolid_Sphere> , IGESData_IGESEntity>>(m.attr("IGESSolid_Sphere"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Sphere::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Sphere::*)() const>(&IGESSolid_Sphere::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Sphere::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SphericalSurface ,opencascade::handle<IGESSolid_SphericalSurface> , IGESData_IGESEntity>>(m.attr("IGESSolid_SphericalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SphericalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SphericalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolBlock , shared_ptr<IGESSolid_ToolBlock> >>(m.attr("IGESSolid_ToolBlock"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolBooleanTree , shared_ptr<IGESSolid_ToolBooleanTree> >>(m.attr("IGESSolid_ToolBooleanTree"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolConeFrustum , shared_ptr<IGESSolid_ToolConeFrustum> >>(m.attr("IGESSolid_ToolConeFrustum"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolConicalSurface , shared_ptr<IGESSolid_ToolConicalSurface> >>(m.attr("IGESSolid_ToolConicalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolCylinder , shared_ptr<IGESSolid_ToolCylinder> >>(m.attr("IGESSolid_ToolCylinder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolCylindricalSurface , shared_ptr<IGESSolid_ToolCylindricalSurface> >>(m.attr("IGESSolid_ToolCylindricalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolEdgeList , shared_ptr<IGESSolid_ToolEdgeList> >>(m.attr("IGESSolid_ToolEdgeList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolEllipsoid , shared_ptr<IGESSolid_ToolEllipsoid> >>(m.attr("IGESSolid_ToolEllipsoid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolFace , shared_ptr<IGESSolid_ToolFace> >>(m.attr("IGESSolid_ToolFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolLoop , shared_ptr<IGESSolid_ToolLoop> >>(m.attr("IGESSolid_ToolLoop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolManifoldSolid , shared_ptr<IGESSolid_ToolManifoldSolid> >>(m.attr("IGESSolid_ToolManifoldSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolPlaneSurface , shared_ptr<IGESSolid_ToolPlaneSurface> >>(m.attr("IGESSolid_ToolPlaneSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolRightAngularWedge , shared_ptr<IGESSolid_ToolRightAngularWedge> >>(m.attr("IGESSolid_ToolRightAngularWedge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSelectedComponent , shared_ptr<IGESSolid_ToolSelectedComponent> >>(m.attr("IGESSolid_ToolSelectedComponent"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolShell , shared_ptr<IGESSolid_ToolShell> >>(m.attr("IGESSolid_ToolShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidAssembly , shared_ptr<IGESSolid_ToolSolidAssembly> >>(m.attr("IGESSolid_ToolSolidAssembly"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidInstance , shared_ptr<IGESSolid_ToolSolidInstance> >>(m.attr("IGESSolid_ToolSolidInstance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidOfLinearExtrusion , shared_ptr<IGESSolid_ToolSolidOfLinearExtrusion> >>(m.attr("IGESSolid_ToolSolidOfLinearExtrusion"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidOfRevolution , shared_ptr<IGESSolid_ToolSolidOfRevolution> >>(m.attr("IGESSolid_ToolSolidOfRevolution"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSphere , shared_ptr<IGESSolid_ToolSphere> >>(m.attr("IGESSolid_ToolSphere"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSphericalSurface , shared_ptr<IGESSolid_ToolSphericalSurface> >>(m.attr("IGESSolid_ToolSphericalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolToroidalSurface , shared_ptr<IGESSolid_ToolToroidalSurface> >>(m.attr("IGESSolid_ToolToroidalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolTorus , shared_ptr<IGESSolid_ToolTorus> >>(m.attr("IGESSolid_ToolTorus"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolVertexList , shared_ptr<IGESSolid_ToolVertexList> >>(m.attr("IGESSolid_ToolVertexList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_TopoBuilder , shared_ptr<IGESSolid_TopoBuilder> >>(m.attr("IGESSolid_TopoBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToroidalSurface ,opencascade::handle<IGESSolid_ToroidalSurface> , IGESData_IGESEntity>>(m.attr("IGESSolid_ToroidalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ToroidalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ToroidalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Torus ,opencascade::handle<IGESSolid_Torus> , IGESData_IGESEntity>>(m.attr("IGESSolid_Torus"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Torus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Torus::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_VertexList ,opencascade::handle<IGESSolid_VertexList> , IGESData_IGESEntity>>(m.attr("IGESSolid_VertexList"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_VertexList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_VertexList::*)() const>(&IGESSolid_VertexList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_VertexList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESSolid_Shell.hxx
// ./opencascade/IGESSolid_ToolLoop.hxx
// ./opencascade/IGESSolid_ToolConicalSurface.hxx
// ./opencascade/IGESSolid_ToolSolidOfLinearExtrusion.hxx
// ./opencascade/IGESSolid_Block.hxx
// ./opencascade/IGESSolid_ToolCylindricalSurface.hxx
// ./opencascade/IGESSolid_ToroidalSurface.hxx
// ./opencascade/IGESSolid_RightAngularWedge.hxx
// ./opencascade/IGESSolid_SolidOfLinearExtrusion.hxx
// ./opencascade/IGESSolid_ToolSphere.hxx
// ./opencascade/IGESSolid_EdgeList.hxx
// ./opencascade/IGESSolid_ToolTorus.hxx
// ./opencascade/IGESSolid_HArray1OfVertexList.hxx
// ./opencascade/IGESSolid_HArray1OfShell.hxx
// ./opencascade/IGESSolid_ToolEdgeList.hxx
// ./opencascade/IGESSolid_Sphere.hxx
// ./opencascade/IGESSolid_ToolSphericalSurface.hxx
// ./opencascade/IGESSolid_ToolFace.hxx
// ./opencascade/IGESSolid_Face.hxx
// ./opencascade/IGESSolid_ToolPlaneSurface.hxx
// ./opencascade/IGESSolid_ToolSolidAssembly.hxx
// ./opencascade/IGESSolid_ToolShell.hxx
// ./opencascade/IGESSolid_ConicalSurface.hxx
// ./opencascade/IGESSolid_ToolToroidalSurface.hxx
// ./opencascade/IGESSolid_SpecificModule.hxx
// ./opencascade/IGESSolid_ToolVertexList.hxx
// ./opencascade/IGESSolid_SphericalSurface.hxx
// ./opencascade/IGESSolid_Array1OfLoop.hxx
// ./opencascade/IGESSolid_HArray1OfLoop.hxx
// ./opencascade/IGESSolid_ToolSelectedComponent.hxx
// ./opencascade/IGESSolid_Array1OfFace.hxx
// ./opencascade/IGESSolid_Array1OfShell.hxx
// ./opencascade/IGESSolid_Array1OfVertexList.hxx
// ./opencascade/IGESSolid_Protocol.hxx
// ./opencascade/IGESSolid_ToolConeFrustum.hxx
// ./opencascade/IGESSolid_ConeFrustum.hxx
// ./opencascade/IGESSolid_VertexList.hxx
// ./opencascade/IGESSolid_HArray1OfFace.hxx
// ./opencascade/IGESSolid_ToolManifoldSolid.hxx
// ./opencascade/IGESSolid_ToolSolidInstance.hxx
// ./opencascade/IGESSolid_Loop.hxx
// ./opencascade/IGESSolid_ToolEllipsoid.hxx
// ./opencascade/IGESSolid_ToolBlock.hxx
// ./opencascade/IGESSolid_Torus.hxx
// ./opencascade/IGESSolid_ToolCylinder.hxx
// ./opencascade/IGESSolid_ToolRightAngularWedge.hxx
// ./opencascade/IGESSolid_PlaneSurface.hxx
// ./opencascade/IGESSolid_SolidOfRevolution.hxx
// ./opencascade/IGESSolid_ToolSolidOfRevolution.hxx
// ./opencascade/IGESSolid_ManifoldSolid.hxx
// ./opencascade/IGESSolid_SolidAssembly.hxx
// ./opencascade/IGESSolid_SolidInstance.hxx
// ./opencascade/IGESSolid_ToolBooleanTree.hxx
// ./opencascade/IGESSolid.hxx
// ./opencascade/IGESSolid_BooleanTree.hxx
// ./opencascade/IGESSolid_GeneralModule.hxx
// ./opencascade/IGESSolid_Cylinder.hxx
// ./opencascade/IGESSolid_Ellipsoid.hxx
// ./opencascade/IGESSolid_SelectedComponent.hxx
// ./opencascade/IGESSolid_CylindricalSurface.hxx
// ./opencascade/IGESSolid_TopoBuilder.hxx
// ./opencascade/IGESSolid_ReadWriteModule.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_Loop> >(m,"IGESSolid_Array1OfLoop");
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_Face> >(m,"IGESSolid_Array1OfFace");
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_Shell> >(m,"IGESSolid_Array1OfShell");
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_VertexList> >(m,"IGESSolid_Array1OfVertexList");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
