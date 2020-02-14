
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
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <gp_Pnt.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
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
#include <IGESSolid_BooleanTree.hxx>
#include <gp_Pnt.hxx>
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
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
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
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
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
#include <gp_Dir.hxx>
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
// ./opencascade/IGESSolid_Array1OfFace.hxx
#include "NCollection.hxx"
// ./opencascade/IGESSolid_Array1OfShell.hxx
#include "NCollection.hxx"
// ./opencascade/IGESSolid_Array1OfLoop.hxx
#include "NCollection.hxx"
// ./opencascade/IGESSolid_Array1OfVertexList.hxx
#include "NCollection.hxx"


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

    static_cast<py::class_<IGESSolid , shared_ptr<IGESSolid>  >>(m.attr("IGESSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESSolid::Init),
                    R"#(Prepares dynamic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESSolid_Protocol> (*)() ) static_cast<opencascade::handle<IGESSolid_Protocol> (*)() >(&IGESSolid::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Block ,opencascade::handle<IGESSolid_Block>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Block"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Block::*)( const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_Block::*)( const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ &  ) >(&IGESSolid_Block::Init),
             R"#(This method is used to set the fields of the class Block - aSize : Length in each local directions - aCorner : Corner point coordinates. Default (0,0,0) - aXAxis : Unit vector defining local X-axis default (1,0,0) - aZAxis : Unit vector defining local Z-axis default (0,0,1))#"  , py::arg("aSize"),  py::arg("aCorner"),  py::arg("aXAxis"),  py::arg("aZAxis"))
        .def("Size",
             (gp_XYZ (IGESSolid_Block::*)() const) static_cast<gp_XYZ (IGESSolid_Block::*)() const>(&IGESSolid_Block::Size),
             R"#(returns the size of the block)#" )
        .def("XLength",
             (Standard_Real (IGESSolid_Block::*)() const) static_cast<Standard_Real (IGESSolid_Block::*)() const>(&IGESSolid_Block::XLength),
             R"#(returns the length of the Block along the local X-direction)#" )
        .def("YLength",
             (Standard_Real (IGESSolid_Block::*)() const) static_cast<Standard_Real (IGESSolid_Block::*)() const>(&IGESSolid_Block::YLength),
             R"#(returns the length of the Block along the local Y-direction)#" )
        .def("ZLength",
             (Standard_Real (IGESSolid_Block::*)() const) static_cast<Standard_Real (IGESSolid_Block::*)() const>(&IGESSolid_Block::ZLength),
             R"#(returns the length of the Block along the local Z-direction)#" )
        .def("Corner",
             (gp_Pnt (IGESSolid_Block::*)() const) static_cast<gp_Pnt (IGESSolid_Block::*)() const>(&IGESSolid_Block::Corner),
             R"#(returns the corner point coordinates of the Block)#" )
        .def("TransformedCorner",
             (gp_Pnt (IGESSolid_Block::*)() const) static_cast<gp_Pnt (IGESSolid_Block::*)() const>(&IGESSolid_Block::TransformedCorner),
             R"#(returns the corner point coordinates of the Block after applying the TransformationMatrix)#" )
        .def("XAxis",
             (gp_Dir (IGESSolid_Block::*)() const) static_cast<gp_Dir (IGESSolid_Block::*)() const>(&IGESSolid_Block::XAxis),
             R"#(returns the direction defining the local X-axis)#" )
        .def("TransformedXAxis",
             (gp_Dir (IGESSolid_Block::*)() const) static_cast<gp_Dir (IGESSolid_Block::*)() const>(&IGESSolid_Block::TransformedXAxis),
             R"#(returns the direction defining the local X-axis after applying TransformationMatrix)#" )
        .def("YAxis",
             (gp_Dir (IGESSolid_Block::*)() const) static_cast<gp_Dir (IGESSolid_Block::*)() const>(&IGESSolid_Block::YAxis),
             R"#(returns the direction defining the local Y-axis it is the cross product of ZAxis and XAxis)#" )
        .def("TransformedYAxis",
             (gp_Dir (IGESSolid_Block::*)() const) static_cast<gp_Dir (IGESSolid_Block::*)() const>(&IGESSolid_Block::TransformedYAxis),
             R"#(returns the direction defining the local Y-axis after applying TransformationMatrix)#" )
        .def("ZAxis",
             (gp_Dir (IGESSolid_Block::*)() const) static_cast<gp_Dir (IGESSolid_Block::*)() const>(&IGESSolid_Block::ZAxis),
             R"#(returns the direction defining the local X-axis)#" )
        .def("TransformedZAxis",
             (gp_Dir (IGESSolid_Block::*)() const) static_cast<gp_Dir (IGESSolid_Block::*)() const>(&IGESSolid_Block::TransformedZAxis),
             R"#(returns the direction defining the local Z-axis after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Block::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Block::*)() const>(&IGESSolid_Block::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Block::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Block::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_BooleanTree ,opencascade::handle<IGESSolid_BooleanTree>  , IGESData_IGESEntity >>(m.attr("IGESSolid_BooleanTree"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_BooleanTree::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESSolid_BooleanTree::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESSolid_BooleanTree::Init),
             R"#(This method is used to set the fields of the class BooleanTree - operands : Array containing pointer to DE of operands - operations : Array containing integer type for operations)#"  , py::arg("operands"),  py::arg("operations"))
        .def("Length",
             (Standard_Integer (IGESSolid_BooleanTree::*)() const) static_cast<Standard_Integer (IGESSolid_BooleanTree::*)() const>(&IGESSolid_BooleanTree::Length),
             R"#(returns the length of the post-order list)#" )
        .def("IsOperand",
             (Standard_Boolean (IGESSolid_BooleanTree::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESSolid_BooleanTree::*)( const Standard_Integer  ) const>(&IGESSolid_BooleanTree::IsOperand),
             R"#(returns True if Index'th value in the post-order list is an Operand; else returns False if it is an Integer Operations raises exception if Index < 1 or Index > Length())#"  , py::arg("Index"))
        .def("Operand",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_BooleanTree::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_BooleanTree::*)( const Standard_Integer  ) const>(&IGESSolid_BooleanTree::Operand),
             R"#(returns the Index'th value in the post-order list only if it is an operand else returns NULL raises exception if Index < 1 or Index > Length())#"  , py::arg("Index"))
        .def("Operation",
             (Standard_Integer (IGESSolid_BooleanTree::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSolid_BooleanTree::*)( const Standard_Integer  ) const>(&IGESSolid_BooleanTree::Operation),
             R"#(returns the Index'th value in the post-order list only if it is an operation else returns 0 raises exception if Index < 1 or Index > Length())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_BooleanTree::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_BooleanTree::*)() const>(&IGESSolid_BooleanTree::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_BooleanTree::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_BooleanTree::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ConeFrustum ,opencascade::handle<IGESSolid_ConeFrustum>  , IGESData_IGESEntity >>(m.attr("IGESSolid_ConeFrustum"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_ConeFrustum::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_ConeFrustum::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) >(&IGESSolid_ConeFrustum::Init),
             R"#(This method is used to set the fields of the class ConeFrustum - Ht : the Height of cone - R1 : Radius of the larger face - R2 : Radius of the smaller face (default 0) - Center : Center of the larger face (default (0,0,0)) - anAxis : Unit vector in axis direction (default (0,0,1)))#"  , py::arg("Ht"),  py::arg("R1"),  py::arg("R2"),  py::arg("Center"),  py::arg("anAxis"))
        .def("Height",
             (Standard_Real (IGESSolid_ConeFrustum::*)() const) static_cast<Standard_Real (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::Height),
             R"#(returns the height of the cone frustum)#" )
        .def("LargerRadius",
             (Standard_Real (IGESSolid_ConeFrustum::*)() const) static_cast<Standard_Real (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::LargerRadius),
             R"#(returns the radius of the larger face of the cone frustum)#" )
        .def("SmallerRadius",
             (Standard_Real (IGESSolid_ConeFrustum::*)() const) static_cast<Standard_Real (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::SmallerRadius),
             R"#(returns the radius of the second face of the cone frustum)#" )
        .def("FaceCenter",
             (gp_Pnt (IGESSolid_ConeFrustum::*)() const) static_cast<gp_Pnt (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::FaceCenter),
             R"#(returns the center of the larger face of the cone frustum)#" )
        .def("TransformedFaceCenter",
             (gp_Pnt (IGESSolid_ConeFrustum::*)() const) static_cast<gp_Pnt (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::TransformedFaceCenter),
             R"#(returns the center of the larger face of the cone frustum after applying TransformationMatrix)#" )
        .def("Axis",
             (gp_Dir (IGESSolid_ConeFrustum::*)() const) static_cast<gp_Dir (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::Axis),
             R"#(returns the direction of the axis of the cone frustum)#" )
        .def("TransformedAxis",
             (gp_Dir (IGESSolid_ConeFrustum::*)() const) static_cast<gp_Dir (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::TransformedAxis),
             R"#(returns the direction of the axis of the cone frustum after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ConeFrustum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ConeFrustum::*)() const>(&IGESSolid_ConeFrustum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ConeFrustum::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_ConeFrustum::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ConicalSurface ,opencascade::handle<IGESSolid_ConicalSurface>  , IGESData_IGESEntity >>(m.attr("IGESSolid_ConicalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_ConicalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> &  ) ) static_cast<void (IGESSolid_ConicalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> &  ) >(&IGESSolid_ConicalSurface::Init),
             R"#(This method is used to set the fields of the class ConicalSurface - aLocation : Location of the point on axis - anAxis : Direction of the axis - aRadius : Radius at axis point - anAngle : Value of semi-angle in degrees (0<angle<90) - aRefdir : Reference direction (parametrised surface) Null if unparametrised surface.)#"  , py::arg("aLocation"),  py::arg("anAxis"),  py::arg("aRadius"),  py::arg("anAngle"),  py::arg("aRefdir"))
        .def("LocationPoint",
             (opencascade::handle<IGESGeom_Point> (IGESSolid_ConicalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Point> (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::LocationPoint),
             R"#(returns the location of the point on the axis)#" )
        .def("Axis",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_ConicalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::Axis),
             R"#(returns the direction of the axis)#" )
        .def("Radius",
             (Standard_Real (IGESSolid_ConicalSurface::*)() const) static_cast<Standard_Real (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::Radius),
             R"#(returns the radius at the axis point)#" )
        .def("SemiAngle",
             (Standard_Real (IGESSolid_ConicalSurface::*)() const) static_cast<Standard_Real (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::SemiAngle),
             R"#(returns the semi-angle value)#" )
        .def("ReferenceDir",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_ConicalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::ReferenceDir),
             R"#(returns the reference direction of the conical surface in case of parametrised surface. For unparametrised surface it returns NULL.)#" )
        .def("IsParametrised",
             (Standard_Boolean (IGESSolid_ConicalSurface::*)() const) static_cast<Standard_Boolean (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::IsParametrised),
             R"#(returns True if Form no is 1 else false)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ConicalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ConicalSurface::*)() const>(&IGESSolid_ConicalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ConicalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_ConicalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Cylinder ,opencascade::handle<IGESSolid_Cylinder>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Cylinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Cylinder::*)( const Standard_Real ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_Cylinder::*)( const Standard_Real ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) >(&IGESSolid_Cylinder::Init),
             R"#(This method is used to set the fields of the class Cylinder - aHeight : Cylinder height - aRadius : Cylinder radius - aCenter : First face center coordinates (default (0,0,0)) - anAxis : Unit vector in axis direction (default (0,0,1)))#"  , py::arg("aHeight"),  py::arg("aRadius"),  py::arg("aCenter"),  py::arg("anAxis"))
        .def("Height",
             (Standard_Real (IGESSolid_Cylinder::*)() const) static_cast<Standard_Real (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::Height),
             R"#(returns the cylinder height)#" )
        .def("Radius",
             (Standard_Real (IGESSolid_Cylinder::*)() const) static_cast<Standard_Real (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::Radius),
             R"#(returns the cylinder radius)#" )
        .def("FaceCenter",
             (gp_Pnt (IGESSolid_Cylinder::*)() const) static_cast<gp_Pnt (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::FaceCenter),
             R"#(returns the first face center coordinates.)#" )
        .def("TransformedFaceCenter",
             (gp_Pnt (IGESSolid_Cylinder::*)() const) static_cast<gp_Pnt (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::TransformedFaceCenter),
             R"#(returns the first face center after applying TransformationMatrix)#" )
        .def("Axis",
             (gp_Dir (IGESSolid_Cylinder::*)() const) static_cast<gp_Dir (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::Axis),
             R"#(returns the vector in axis direction)#" )
        .def("TransformedAxis",
             (gp_Dir (IGESSolid_Cylinder::*)() const) static_cast<gp_Dir (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::TransformedAxis),
             R"#(returns the vector in axis direction after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Cylinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Cylinder::*)() const>(&IGESSolid_Cylinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Cylinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Cylinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_CylindricalSurface ,opencascade::handle<IGESSolid_CylindricalSurface>  , IGESData_IGESEntity >>(m.attr("IGESSolid_CylindricalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_CylindricalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> &  ) ) static_cast<void (IGESSolid_CylindricalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> &  ) >(&IGESSolid_CylindricalSurface::Init),
             R"#(This method is used to set the fields of the class CylindricalSurface - aLocation : the location of the point on axis - anAxis : the direction of the axis - aRadius : the radius at the axis point - aRefdir : the reference direction (parametrised surface) default NULL (unparametrised surface))#"  , py::arg("aLocation"),  py::arg("anAxis"),  py::arg("aRadius"),  py::arg("aRefdir"))
        .def("LocationPoint",
             (opencascade::handle<IGESGeom_Point> (IGESSolid_CylindricalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Point> (IGESSolid_CylindricalSurface::*)() const>(&IGESSolid_CylindricalSurface::LocationPoint),
             R"#(returns the point on the axis)#" )
        .def("Axis",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_CylindricalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_CylindricalSurface::*)() const>(&IGESSolid_CylindricalSurface::Axis),
             R"#(returns the direction on the axis)#" )
        .def("Radius",
             (Standard_Real (IGESSolid_CylindricalSurface::*)() const) static_cast<Standard_Real (IGESSolid_CylindricalSurface::*)() const>(&IGESSolid_CylindricalSurface::Radius),
             R"#(returns the radius at the axis point)#" )
        .def("IsParametrised",
             (Standard_Boolean (IGESSolid_CylindricalSurface::*)() const) static_cast<Standard_Boolean (IGESSolid_CylindricalSurface::*)() const>(&IGESSolid_CylindricalSurface::IsParametrised),
             R"#(returns whether the surface is parametrised or not)#" )
        .def("ReferenceDir",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_CylindricalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_CylindricalSurface::*)() const>(&IGESSolid_CylindricalSurface::ReferenceDir),
             R"#(returns the reference direction only for parametrised surface else returns NULL)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_CylindricalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_CylindricalSurface::*)() const>(&IGESSolid_CylindricalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_CylindricalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_CylindricalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_EdgeList ,opencascade::handle<IGESSolid_EdgeList>  , IGESData_IGESEntity >>(m.attr("IGESSolid_EdgeList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_EdgeList::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESSolid_HArray1OfVertexList> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESSolid_HArray1OfVertexList> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESSolid_EdgeList::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESSolid_HArray1OfVertexList> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESSolid_HArray1OfVertexList> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESSolid_EdgeList::Init),
             R"#(This method is used to set the fields of the class EdgeList - curves : the model space curves - startVertexList : the vertex list that contains the start vertices - startVertexIndex : the index of the vertex in the corresponding vertex list - endVertexList : the vertex list that contains the end vertices - endVertexIndex : the index of the vertex in the corresponding vertex list raises exception if size of curves,startVertexList,startVertexIndex, endVertexList and endVertexIndex do no match)#"  , py::arg("curves"),  py::arg("startVertexList"),  py::arg("startVertexIndex"),  py::arg("endVertexList"),  py::arg("endVertexIndex"))
        .def("NbEdges",
             (Standard_Integer (IGESSolid_EdgeList::*)() const) static_cast<Standard_Integer (IGESSolid_EdgeList::*)() const>(&IGESSolid_EdgeList::NbEdges),
             R"#(returns the number of edges in the edge list)#" )
        .def("Curve",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_EdgeList::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_EdgeList::*)( const Standard_Integer  ) const>(&IGESSolid_EdgeList::Curve),
             R"#(returns the num'th model space curve raises Exception if num <= 0 or num > NbEdges())#"  , py::arg("num"))
        .def("StartVertexList",
             (opencascade::handle<IGESSolid_VertexList> (IGESSolid_EdgeList::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESSolid_VertexList> (IGESSolid_EdgeList::*)( const Standard_Integer  ) const>(&IGESSolid_EdgeList::StartVertexList),
             R"#(returns the num'th start vertex list raises Exception if num <= 0 or num > NbEdges())#"  , py::arg("num"))
        .def("StartVertexIndex",
             (Standard_Integer (IGESSolid_EdgeList::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSolid_EdgeList::*)( const Standard_Integer  ) const>(&IGESSolid_EdgeList::StartVertexIndex),
             R"#(returns the index of num'th start vertex in the corresponding start vertex list raises Exception if num <= 0 or num > NbEdges())#"  , py::arg("num"))
        .def("EndVertexList",
             (opencascade::handle<IGESSolid_VertexList> (IGESSolid_EdgeList::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESSolid_VertexList> (IGESSolid_EdgeList::*)( const Standard_Integer  ) const>(&IGESSolid_EdgeList::EndVertexList),
             R"#(returns the num'th end vertex list raises Exception if num <= 0 or num > NbEdges())#"  , py::arg("num"))
        .def("EndVertexIndex",
             (Standard_Integer (IGESSolid_EdgeList::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSolid_EdgeList::*)( const Standard_Integer  ) const>(&IGESSolid_EdgeList::EndVertexIndex),
             R"#(returns the index of num'th end vertex in the corresponding end vertex list raises Exception if num <= 0 or num > NbEdges())#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_EdgeList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_EdgeList::*)() const>(&IGESSolid_EdgeList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_EdgeList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_EdgeList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Ellipsoid ,opencascade::handle<IGESSolid_Ellipsoid>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Ellipsoid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Ellipsoid::*)( const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_Ellipsoid::*)( const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ &  ) >(&IGESSolid_Ellipsoid::Init),
             R"#(This method is used to set the fields of the class Ellipsoid - aSize : Lengths in the local X,Y,Z directions - aCenter : Center point of ellipsoid (default (0,0,0)) - anXAxis : Unit vector defining local X-axis default (1,0,0) - anZAxis : Unit vector defining local Z-axis default (0,0,1))#"  , py::arg("aSize"),  py::arg("aCenter"),  py::arg("anXAxis"),  py::arg("anZAxis"))
        .def("Size",
             (gp_XYZ (IGESSolid_Ellipsoid::*)() const) static_cast<gp_XYZ (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::Size),
             R"#(returns the size)#" )
        .def("XLength",
             (Standard_Real (IGESSolid_Ellipsoid::*)() const) static_cast<Standard_Real (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::XLength),
             R"#(returns the length in the local X-direction)#" )
        .def("YLength",
             (Standard_Real (IGESSolid_Ellipsoid::*)() const) static_cast<Standard_Real (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::YLength),
             R"#(returns the length in the local Y-direction)#" )
        .def("ZLength",
             (Standard_Real (IGESSolid_Ellipsoid::*)() const) static_cast<Standard_Real (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::ZLength),
             R"#(returns the length in the local Z-direction)#" )
        .def("Center",
             (gp_Pnt (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Pnt (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::Center),
             R"#(returns the center of the ellipsoid)#" )
        .def("TransformedCenter",
             (gp_Pnt (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Pnt (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::TransformedCenter),
             R"#(returns the center of the ellipsoid after applying TransformationMatrix)#" )
        .def("XAxis",
             (gp_Dir (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Dir (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::XAxis),
             R"#(returns the vector corresponding to the local X-direction)#" )
        .def("TransformedXAxis",
             (gp_Dir (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Dir (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::TransformedXAxis),
             R"#(returns the vector corresponding to the local X-direction after applying TransformationMatrix)#" )
        .def("YAxis",
             (gp_Dir (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Dir (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::YAxis),
             R"#(returns the vector corresponding to the local Y-direction which is got by taking cross product of ZAxis and XAxis)#" )
        .def("TransformedYAxis",
             (gp_Dir (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Dir (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::TransformedYAxis),
             R"#(returns the vector corresponding to the local Y-direction (which is got by taking cross product of ZAxis and XAxis) after applying TransformationMatrix)#" )
        .def("ZAxis",
             (gp_Dir (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Dir (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::ZAxis),
             R"#(returns the vector corresponding to the local Z-direction)#" )
        .def("TransformedZAxis",
             (gp_Dir (IGESSolid_Ellipsoid::*)() const) static_cast<gp_Dir (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::TransformedZAxis),
             R"#(returns the vector corresponding to the local Z-direction after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Ellipsoid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Ellipsoid::*)() const>(&IGESSolid_Ellipsoid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Ellipsoid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Ellipsoid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Face ,opencascade::handle<IGESSolid_Face>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Face"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Face::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean ,  const opencascade::handle<IGESSolid_HArray1OfLoop> &  ) ) static_cast<void (IGESSolid_Face::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Boolean ,  const opencascade::handle<IGESSolid_HArray1OfLoop> &  ) >(&IGESSolid_Face::Init),
             R"#(This method is used to set the fields of the class Face - aSurface : Pointer to the underlying surface - outerLoopFlag : True means the first loop is the outer loop - loops : Array of loops bounding the face)#"  , py::arg("aSurface"),  py::arg("outerLoopFlag"),  py::arg("loops"))
        .def("Surface",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_Face::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_Face::*)() const>(&IGESSolid_Face::Surface),
             R"#(returns the underlying surface of the face)#" )
        .def("NbLoops",
             (Standard_Integer (IGESSolid_Face::*)() const) static_cast<Standard_Integer (IGESSolid_Face::*)() const>(&IGESSolid_Face::NbLoops),
             R"#(returns the number of the loops bounding the face)#" )
        .def("HasOuterLoop",
             (Standard_Boolean (IGESSolid_Face::*)() const) static_cast<Standard_Boolean (IGESSolid_Face::*)() const>(&IGESSolid_Face::HasOuterLoop),
             R"#(checks whether there is an outer loop or not)#" )
        .def("Loop",
             (opencascade::handle<IGESSolid_Loop> (IGESSolid_Face::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESSolid_Loop> (IGESSolid_Face::*)( const Standard_Integer  ) const>(&IGESSolid_Face::Loop),
             R"#(returns the Index'th loop that bounds the face raises exception if Index < 0 or Index >= NbLoops)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Face::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Face::*)() const>(&IGESSolid_Face::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Face::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Face::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_GeneralModule ,opencascade::handle<IGESSolid_GeneralModule>  , IGESData_GeneralModule >>(m.attr("IGESSolid_GeneralModule"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESSolid_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESSolid_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESSolid_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESSolid_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESSolid_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<Standard_Integer (IGESSolid_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&IGESSolid_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Shape for all)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_GeneralModule::*)() const>(&IGESSolid_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_HArray1OfFace ,opencascade::handle<IGESSolid_HArray1OfFace>  , IGESSolid_Array1OfFace , Standard_Transient >>(m.attr("IGESSolid_HArray1OfFace"))
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


    static_cast<py::class_<IGESSolid_HArray1OfLoop ,opencascade::handle<IGESSolid_HArray1OfLoop>  , IGESSolid_Array1OfLoop , Standard_Transient >>(m.attr("IGESSolid_HArray1OfLoop"))
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


    static_cast<py::class_<IGESSolid_HArray1OfShell ,opencascade::handle<IGESSolid_HArray1OfShell>  , IGESSolid_Array1OfShell , Standard_Transient >>(m.attr("IGESSolid_HArray1OfShell"))
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


    static_cast<py::class_<IGESSolid_HArray1OfVertexList ,opencascade::handle<IGESSolid_HArray1OfVertexList>  , IGESSolid_Array1OfVertexList , Standard_Transient >>(m.attr("IGESSolid_HArray1OfVertexList"))
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


    static_cast<py::class_<IGESSolid_Loop ,opencascade::handle<IGESSolid_Loop>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Loop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Loop::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfIGESEntity> &  ) ) static_cast<void (IGESSolid_Loop::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfIGESEntity> &  ) >(&IGESSolid_Loop::Init),
             R"#(This method is used to set the fields of the class Loop - types : 0 = Edge; 1 = Vertex - edges : Pointer to the EdgeList or VertexList - index : Index of the edge into the EdgeList VertexList entity - orient : Orientation flag of the edge - nbParameterCurves : the number of parameter space curves for each edge - isoparametricFlags : the isoparametric flag of the parameter space curve - curves : the parameter space curves raises exception if length of types, edges, index, orient and nbParameterCurves do not match or the length of isoparametricFlags and curves do not match)#"  , py::arg("types"),  py::arg("edges"),  py::arg("index"),  py::arg("orient"),  py::arg("nbParameterCurves"),  py::arg("isoparametricFlags"),  py::arg("curves"))
        .def("IsBound",
             (Standard_Boolean (IGESSolid_Loop::*)() const) static_cast<Standard_Boolean (IGESSolid_Loop::*)() const>(&IGESSolid_Loop::IsBound),
             R"#(Tells if a Loop is a Bound (FN 1) else it is free (FN 0))#" )
        .def("SetBound",
             (void (IGESSolid_Loop::*)( const Standard_Boolean  ) ) static_cast<void (IGESSolid_Loop::*)( const Standard_Boolean  ) >(&IGESSolid_Loop::SetBound),
             R"#(Sets or Unset the Bound Status (from Form Number) Default is True)#"  , py::arg("bound"))
        .def("NbEdges",
             (Standard_Integer (IGESSolid_Loop::*)() const) static_cast<Standard_Integer (IGESSolid_Loop::*)() const>(&IGESSolid_Loop::NbEdges),
             R"#(returns the number of edge tuples)#" )
        .def("EdgeType",
             (Standard_Integer (IGESSolid_Loop::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSolid_Loop::*)( const Standard_Integer  ) const>(&IGESSolid_Loop::EdgeType),
             R"#(returns the type of Index'th edge (0 = Edge, 1 = Vertex) raises exception if Index <= 0 or Index > NbEdges())#"  , py::arg("Index"))
        .def("Edge",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_Loop::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_Loop::*)( const Standard_Integer  ) const>(&IGESSolid_Loop::Edge),
             R"#(return the EdgeList or VertexList corresponding to the Index raises exception if Index <= 0 or Index > NbEdges())#"  , py::arg("Index"))
        .def("Orientation",
             (Standard_Boolean (IGESSolid_Loop::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESSolid_Loop::*)( const Standard_Integer  ) const>(&IGESSolid_Loop::Orientation),
             R"#(returns the orientation flag corresponding to Index'th edge raises exception if Index <= 0 or Index > NbEdges())#"  , py::arg("Index"))
        .def("NbParameterCurves",
             (Standard_Integer (IGESSolid_Loop::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSolid_Loop::*)( const Standard_Integer  ) const>(&IGESSolid_Loop::NbParameterCurves),
             R"#(return the number of parameter space curves associated with Index'th Edge raises exception if Index <= 0 or Index > NbEdges())#"  , py::arg("Index"))
        .def("IsIsoparametric",
             (Standard_Boolean (IGESSolid_Loop::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESSolid_Loop::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESSolid_Loop::IsIsoparametric),
             R"#(None)#"  , py::arg("EdgeIndex"),  py::arg("CurveIndex"))
        .def("ParametricCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_Loop::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_Loop::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESSolid_Loop::ParametricCurve),
             R"#(returns the CurveIndex'th parameter space curve associated with EdgeIndex'th edge raises exception if EdgeIndex <= 0 or EdgeIndex > NbEdges() or if CurveIndex <= 0 or CurveIndex > NbParameterCurves(EdgeIndex))#"  , py::arg("EdgeIndex"),  py::arg("CurveIndex"))
        .def("ListIndex",
             (Standard_Integer (IGESSolid_Loop::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSolid_Loop::*)( const Standard_Integer  ) const>(&IGESSolid_Loop::ListIndex),
             R"#(raises exception If num <= 0 or num > NbEdges())#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Loop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Loop::*)() const>(&IGESSolid_Loop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Loop::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Loop::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ManifoldSolid ,opencascade::handle<IGESSolid_ManifoldSolid>  , IGESData_IGESEntity >>(m.attr("IGESSolid_ManifoldSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_ManifoldSolid::*)( const opencascade::handle<IGESSolid_Shell> & ,  const Standard_Boolean ,  const opencascade::handle<IGESSolid_HArray1OfShell> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESSolid_ManifoldSolid::*)( const opencascade::handle<IGESSolid_Shell> & ,  const Standard_Boolean ,  const opencascade::handle<IGESSolid_HArray1OfShell> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESSolid_ManifoldSolid::Init),
             R"#(This method is used to set the fields of the class ManifoldSolid - aShell : pointer to the shell - shellflag : orientation flag of shell - voidShells : the void shells - voidShellFlags : orientation of the void shells raises exception if length of voidShells and voidShellFlags do not match)#"  , py::arg("aShell"),  py::arg("shellflag"),  py::arg("voidShells"),  py::arg("voidShellFlags"))
        .def("Shell",
             (opencascade::handle<IGESSolid_Shell> (IGESSolid_ManifoldSolid::*)() const) static_cast<opencascade::handle<IGESSolid_Shell> (IGESSolid_ManifoldSolid::*)() const>(&IGESSolid_ManifoldSolid::Shell),
             R"#(returns the Shell entity which is being referred)#" )
        .def("OrientationFlag",
             (Standard_Boolean (IGESSolid_ManifoldSolid::*)() const) static_cast<Standard_Boolean (IGESSolid_ManifoldSolid::*)() const>(&IGESSolid_ManifoldSolid::OrientationFlag),
             R"#(returns the orientation flag of the shell)#" )
        .def("NbVoidShells",
             (Standard_Integer (IGESSolid_ManifoldSolid::*)() const) static_cast<Standard_Integer (IGESSolid_ManifoldSolid::*)() const>(&IGESSolid_ManifoldSolid::NbVoidShells),
             R"#(returns the number of void shells)#" )
        .def("VoidShell",
             (opencascade::handle<IGESSolid_Shell> (IGESSolid_ManifoldSolid::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESSolid_Shell> (IGESSolid_ManifoldSolid::*)( const Standard_Integer  ) const>(&IGESSolid_ManifoldSolid::VoidShell),
             R"#(returns Index'th void shell. raises exception if Index <= 0 or Index > NbVoidShells())#"  , py::arg("Index"))
        .def("VoidOrientationFlag",
             (Standard_Boolean (IGESSolid_ManifoldSolid::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESSolid_ManifoldSolid::*)( const Standard_Integer  ) const>(&IGESSolid_ManifoldSolid::VoidOrientationFlag),
             R"#(returns Index'th orientation flag. raises exception if Index <= 0 or Index > NbVoidShells())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ManifoldSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ManifoldSolid::*)() const>(&IGESSolid_ManifoldSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ManifoldSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_ManifoldSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_PlaneSurface ,opencascade::handle<IGESSolid_PlaneSurface>  , IGESData_IGESEntity >>(m.attr("IGESSolid_PlaneSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_PlaneSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const opencascade::handle<IGESGeom_Direction> &  ) ) static_cast<void (IGESSolid_PlaneSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const opencascade::handle<IGESGeom_Direction> &  ) >(&IGESSolid_PlaneSurface::Init),
             R"#(This method is used to set the fields of the class PlaneSurface - aLocation : the point on the surface - aNormal : the surface normal direction - refdir : the reference direction (default NULL) for unparameterised curves)#"  , py::arg("aLocation"),  py::arg("aNormal"),  py::arg("refdir"))
        .def("LocationPoint",
             (opencascade::handle<IGESGeom_Point> (IGESSolid_PlaneSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Point> (IGESSolid_PlaneSurface::*)() const>(&IGESSolid_PlaneSurface::LocationPoint),
             R"#(returns the point on the surface)#" )
        .def("Normal",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_PlaneSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_PlaneSurface::*)() const>(&IGESSolid_PlaneSurface::Normal),
             R"#(returns the normal to the surface)#" )
        .def("ReferenceDir",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_PlaneSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_PlaneSurface::*)() const>(&IGESSolid_PlaneSurface::ReferenceDir),
             R"#(returns the reference direction (for parameterised curve) returns NULL for unparameterised curve)#" )
        .def("IsParametrised",
             (Standard_Boolean (IGESSolid_PlaneSurface::*)() const) static_cast<Standard_Boolean (IGESSolid_PlaneSurface::*)() const>(&IGESSolid_PlaneSurface::IsParametrised),
             R"#(returns True if parameterised, else False)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_PlaneSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_PlaneSurface::*)() const>(&IGESSolid_PlaneSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_PlaneSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_PlaneSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Protocol ,opencascade::handle<IGESSolid_Protocol>  , IGESData_Protocol >>(m.attr("IGESSolid_Protocol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESSolid_Protocol::*)() const) static_cast<Standard_Integer (IGESSolid_Protocol::*)() const>(&IGESSolid_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESGeom))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESSolid_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESSolid_Protocol::*)( const Standard_Integer  ) const>(&IGESSolid_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESSolid_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESSolid_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESSolid_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Protocol::*)() const>(&IGESSolid_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ReadWriteModule ,opencascade::handle<IGESSolid_ReadWriteModule>  , IGESData_ReadWriteModule >>(m.attr("IGESSolid_ReadWriteModule"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESSolid_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESSolid_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESSolid_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESSolid)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESSolid_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESSolid)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ReadWriteModule::*)() const>(&IGESSolid_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_RightAngularWedge ,opencascade::handle<IGESSolid_RightAngularWedge>  , IGESData_IGESEntity >>(m.attr("IGESSolid_RightAngularWedge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_RightAngularWedge::*)( const gp_XYZ & ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_RightAngularWedge::*)( const gp_XYZ & ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ & ,  const gp_XYZ &  ) >(&IGESSolid_RightAngularWedge::Init),
             R"#(This method is used to set the fields of the class RightAngularWedge - aSize : the lengths along the local axes - lowX : the length at the smaller X-side - aCorner : the corner point coordinates default (0,0,0) - anXAxis : the unit vector defining local X-axis default (1,0,0) - anZAxis : the unit vector defining local Z-axis default (0,0,1))#"  , py::arg("aSize"),  py::arg("lowX"),  py::arg("aCorner"),  py::arg("anXAxis"),  py::arg("anZAxis"))
        .def("Size",
             (gp_XYZ (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_XYZ (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::Size),
             R"#(returns the size)#" )
        .def("XBigLength",
             (Standard_Real (IGESSolid_RightAngularWedge::*)() const) static_cast<Standard_Real (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::XBigLength),
             R"#(returns the length along the local X-axis)#" )
        .def("XSmallLength",
             (Standard_Real (IGESSolid_RightAngularWedge::*)() const) static_cast<Standard_Real (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::XSmallLength),
             R"#(returns the smaller length along the local X-direction at Y=LY)#" )
        .def("YLength",
             (Standard_Real (IGESSolid_RightAngularWedge::*)() const) static_cast<Standard_Real (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::YLength),
             R"#(returns the length along the local Y-axis)#" )
        .def("ZLength",
             (Standard_Real (IGESSolid_RightAngularWedge::*)() const) static_cast<Standard_Real (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::ZLength),
             R"#(returns the length along the local Z-axis)#" )
        .def("Corner",
             (gp_Pnt (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Pnt (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::Corner),
             R"#(returns the corner point coordinates)#" )
        .def("TransformedCorner",
             (gp_Pnt (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Pnt (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::TransformedCorner),
             R"#(returns the corner point coordinates after applying TransformationMatrix)#" )
        .def("XAxis",
             (gp_Dir (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Dir (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::XAxis),
             R"#(returns the direction defining the local X-axis)#" )
        .def("TransformedXAxis",
             (gp_Dir (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Dir (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::TransformedXAxis),
             R"#(returns the direction defining the local X-axis after applying the TransformationMatrix)#" )
        .def("YAxis",
             (gp_Dir (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Dir (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::YAxis),
             R"#(returns the direction defining the local Y-axis it is got by taking the cross product of ZAxis and XAxis)#" )
        .def("TransformedYAxis",
             (gp_Dir (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Dir (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::TransformedYAxis),
             R"#(returns the direction defining the local Y-axis after applying the TransformationMatrix)#" )
        .def("ZAxis",
             (gp_Dir (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Dir (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::ZAxis),
             R"#(returns the direction defining the local Z-axis)#" )
        .def("TransformedZAxis",
             (gp_Dir (IGESSolid_RightAngularWedge::*)() const) static_cast<gp_Dir (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::TransformedZAxis),
             R"#(returns the direction defining the local Z-axis after applying the TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_RightAngularWedge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_RightAngularWedge::*)() const>(&IGESSolid_RightAngularWedge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_RightAngularWedge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_RightAngularWedge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SelectedComponent ,opencascade::handle<IGESSolid_SelectedComponent>  , IGESData_IGESEntity >>(m.attr("IGESSolid_SelectedComponent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_SelectedComponent::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_SelectedComponent::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const gp_XYZ &  ) >(&IGESSolid_SelectedComponent::Init),
             R"#(This method is used to set the fields of the class SelectedComponent - anEntity : the Boolean tree entity - selectPnt : Point in or on the desired component)#"  , py::arg("anEntity"),  py::arg("selectPnt"))
        .def("Component",
             (opencascade::handle<IGESSolid_BooleanTree> (IGESSolid_SelectedComponent::*)() const) static_cast<opencascade::handle<IGESSolid_BooleanTree> (IGESSolid_SelectedComponent::*)() const>(&IGESSolid_SelectedComponent::Component),
             R"#(returns the Boolean tree entity)#" )
        .def("SelectPoint",
             (gp_Pnt (IGESSolid_SelectedComponent::*)() const) static_cast<gp_Pnt (IGESSolid_SelectedComponent::*)() const>(&IGESSolid_SelectedComponent::SelectPoint),
             R"#(returns the point on/in the selected component)#" )
        .def("TransformedSelectPoint",
             (gp_Pnt (IGESSolid_SelectedComponent::*)() const) static_cast<gp_Pnt (IGESSolid_SelectedComponent::*)() const>(&IGESSolid_SelectedComponent::TransformedSelectPoint),
             R"#(returns the point on/in the selected component after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SelectedComponent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SelectedComponent::*)() const>(&IGESSolid_SelectedComponent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SelectedComponent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_SelectedComponent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Shell ,opencascade::handle<IGESSolid_Shell>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Shell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Shell::*)( const opencascade::handle<IGESSolid_HArray1OfFace> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (IGESSolid_Shell::*)( const opencascade::handle<IGESSolid_HArray1OfFace> & ,  const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&IGESSolid_Shell::Init),
             R"#(This method is used to set the fields of the class Shell - allFaces : the faces comprising the shell - allOrient : the orientation flags of the shell raises exception if length of allFaces & allOrient do not match)#"  , py::arg("allFaces"),  py::arg("allOrient"))
        .def("IsClosed",
             (Standard_Boolean (IGESSolid_Shell::*)() const) static_cast<Standard_Boolean (IGESSolid_Shell::*)() const>(&IGESSolid_Shell::IsClosed),
             R"#(Tells if a Shell is Closed, i.e. if its FormNumber is 1 (this is the default))#" )
        .def("SetClosed",
             (void (IGESSolid_Shell::*)( const Standard_Boolean  ) ) static_cast<void (IGESSolid_Shell::*)( const Standard_Boolean  ) >(&IGESSolid_Shell::SetClosed),
             R"#(Sets or Unsets the Closed status (FormNumber = 1 else 2))#"  , py::arg("closed"))
        .def("NbFaces",
             (Standard_Integer (IGESSolid_Shell::*)() const) static_cast<Standard_Integer (IGESSolid_Shell::*)() const>(&IGESSolid_Shell::NbFaces),
             R"#(returns the number of the face entities in the shell)#" )
        .def("Face",
             (opencascade::handle<IGESSolid_Face> (IGESSolid_Shell::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESSolid_Face> (IGESSolid_Shell::*)( const Standard_Integer  ) const>(&IGESSolid_Shell::Face),
             R"#(returns the Index'th face entity of the shell raises exception if Index <= 0 or Index > NbFaces())#"  , py::arg("Index"))
        .def("Orientation",
             (Standard_Boolean (IGESSolid_Shell::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESSolid_Shell::*)( const Standard_Integer  ) const>(&IGESSolid_Shell::Orientation),
             R"#(returns the orientation of Index'th face w.r.t the direction of the underlying surface raises exception if Index <= 0 or Index > NbFaces())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Shell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Shell::*)() const>(&IGESSolid_Shell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Shell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Shell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidAssembly ,opencascade::handle<IGESSolid_SolidAssembly>  , IGESData_IGESEntity >>(m.attr("IGESSolid_SolidAssembly"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_SolidAssembly::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESGeom_HArray1OfTransformationMatrix> &  ) ) static_cast<void (IGESSolid_SolidAssembly::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ,  const opencascade::handle<IGESGeom_HArray1OfTransformationMatrix> &  ) >(&IGESSolid_SolidAssembly::Init),
             R"#(This method is used to set the fields of the class SolidAssembly - allItems : the collection of items - allMatrices : transformation matrices corresponding to each item raises exception if the length of allItems & allMatrices do not match)#"  , py::arg("allItems"),  py::arg("allMatrices"))
        .def("HasBrep",
             (Standard_Boolean (IGESSolid_SolidAssembly::*)() const) static_cast<Standard_Boolean (IGESSolid_SolidAssembly::*)() const>(&IGESSolid_SolidAssembly::HasBrep),
             R"#(Tells if at least one item is a Brep, from FormNumber)#" )
        .def("SetBrep",
             (void (IGESSolid_SolidAssembly::*)( const Standard_Boolean  ) ) static_cast<void (IGESSolid_SolidAssembly::*)( const Standard_Boolean  ) >(&IGESSolid_SolidAssembly::SetBrep),
             R"#(Sets or Unsets the status "HasBrep" from FormNumber Default is False)#"  , py::arg("hasbrep"))
        .def("NbItems",
             (Standard_Integer (IGESSolid_SolidAssembly::*)() const) static_cast<Standard_Integer (IGESSolid_SolidAssembly::*)() const>(&IGESSolid_SolidAssembly::NbItems),
             R"#(returns the number of items in the collection)#" )
        .def("Item",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidAssembly::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidAssembly::*)( const Standard_Integer  ) const>(&IGESSolid_SolidAssembly::Item),
             R"#(returns the Index'th item raises exception if Index <= 0 or Index > NbItems())#"  , py::arg("Index"))
        .def("TransfMatrix",
             (opencascade::handle<IGESGeom_TransformationMatrix> (IGESSolid_SolidAssembly::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGeom_TransformationMatrix> (IGESSolid_SolidAssembly::*)( const Standard_Integer  ) const>(&IGESSolid_SolidAssembly::TransfMatrix),
             R"#(returns the transformation matrix of the Index'th item raises exception if Index <= 0 or Index > NbItems())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidAssembly::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidAssembly::*)() const>(&IGESSolid_SolidAssembly::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidAssembly::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_SolidAssembly::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidInstance ,opencascade::handle<IGESSolid_SolidInstance>  , IGESData_IGESEntity >>(m.attr("IGESSolid_SolidInstance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_SolidInstance::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESSolid_SolidInstance::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESSolid_SolidInstance::Init),
             R"#(This method is used to set the fields of the class SolidInstance - anEntity : the entity corresponding to the solid)#"  , py::arg("anEntity"))
        .def("IsBrep",
             (Standard_Boolean (IGESSolid_SolidInstance::*)() const) static_cast<Standard_Boolean (IGESSolid_SolidInstance::*)() const>(&IGESSolid_SolidInstance::IsBrep),
             R"#(Tells if a SolidInstance is for a BREP Default is False)#" )
        .def("SetBrep",
             (void (IGESSolid_SolidInstance::*)( const Standard_Boolean  ) ) static_cast<void (IGESSolid_SolidInstance::*)( const Standard_Boolean  ) >(&IGESSolid_SolidInstance::SetBrep),
             R"#(Sets or unsets the Brep status (FormNumber = 1 else 0))#"  , py::arg("brep"))
        .def("Entity",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidInstance::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidInstance::*)() const>(&IGESSolid_SolidInstance::Entity),
             R"#(returns the solid entity)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidInstance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidInstance::*)() const>(&IGESSolid_SolidInstance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidInstance::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_SolidInstance::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidOfLinearExtrusion ,opencascade::handle<IGESSolid_SolidOfLinearExtrusion>  , IGESData_IGESEntity >>(m.attr("IGESSolid_SolidOfLinearExtrusion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_SolidOfLinearExtrusion::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_SolidOfLinearExtrusion::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real ,  const gp_XYZ &  ) >(&IGESSolid_SolidOfLinearExtrusion::Init),
             R"#(This method is used to set the fields of the class SolidOfLinearExtrusion - aCurve : the planar curve that is to be translated - aLength : the length of extrusion - aDirection : the vector specifying the direction of extrusion default (0,0,1))#"  , py::arg("aCurve"),  py::arg("aLength"),  py::arg("aDirection"))
        .def("Curve",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidOfLinearExtrusion::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidOfLinearExtrusion::*)() const>(&IGESSolid_SolidOfLinearExtrusion::Curve),
             R"#(returns the planar curve that is to be translated)#" )
        .def("ExtrusionLength",
             (Standard_Real (IGESSolid_SolidOfLinearExtrusion::*)() const) static_cast<Standard_Real (IGESSolid_SolidOfLinearExtrusion::*)() const>(&IGESSolid_SolidOfLinearExtrusion::ExtrusionLength),
             R"#(returns the Extrusion Length)#" )
        .def("ExtrusionDirection",
             (gp_Dir (IGESSolid_SolidOfLinearExtrusion::*)() const) static_cast<gp_Dir (IGESSolid_SolidOfLinearExtrusion::*)() const>(&IGESSolid_SolidOfLinearExtrusion::ExtrusionDirection),
             R"#(returns the Extrusion direction)#" )
        .def("TransformedExtrusionDirection",
             (gp_Dir (IGESSolid_SolidOfLinearExtrusion::*)() const) static_cast<gp_Dir (IGESSolid_SolidOfLinearExtrusion::*)() const>(&IGESSolid_SolidOfLinearExtrusion::TransformedExtrusionDirection),
             R"#(returns ExtrusionDirection after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfLinearExtrusion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfLinearExtrusion::*)() const>(&IGESSolid_SolidOfLinearExtrusion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidOfLinearExtrusion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_SolidOfLinearExtrusion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SolidOfRevolution ,opencascade::handle<IGESSolid_SolidOfRevolution>  , IGESData_IGESEntity >>(m.attr("IGESSolid_SolidOfRevolution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_SolidOfRevolution::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_SolidOfRevolution::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) >(&IGESSolid_SolidOfRevolution::Init),
             R"#(This method is used to set the fields of the class SolidOfRevolution - aCurve : the curve entity that is to be revolved - aFract : the fraction of full rotation (default 1.0) - aAxisPnt : the point on the axis - aDirection : the direction of the axis)#"  , py::arg("aCurve"),  py::arg("aFract"),  py::arg("aAxisPnt"),  py::arg("aDirection"))
        .def("SetClosedToAxis",
             (void (IGESSolid_SolidOfRevolution::*)( const Standard_Boolean  ) ) static_cast<void (IGESSolid_SolidOfRevolution::*)( const Standard_Boolean  ) >(&IGESSolid_SolidOfRevolution::SetClosedToAxis),
             R"#(Sets the Curve to be by default, Closed to Axis (Form 0) if <mode> is True, Closed to Itself (Form 1) else)#"  , py::arg("mode"))
        .def("IsClosedToAxis",
             (Standard_Boolean (IGESSolid_SolidOfRevolution::*)() const) static_cast<Standard_Boolean (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::IsClosedToAxis),
             R"#(Returns True if Form Number = 0 if Form no is 0, then the curve is closed to axis if 1, the curve is closed to itself.)#" )
        .def("Curve",
             (opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidOfRevolution::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::Curve),
             R"#(returns the curve entity that is to be revolved)#" )
        .def("Fraction",
             (Standard_Real (IGESSolid_SolidOfRevolution::*)() const) static_cast<Standard_Real (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::Fraction),
             R"#(returns the fraction of full rotation that the curve is to be rotated)#" )
        .def("AxisPoint",
             (gp_Pnt (IGESSolid_SolidOfRevolution::*)() const) static_cast<gp_Pnt (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::AxisPoint),
             R"#(returns the point on the axis)#" )
        .def("TransformedAxisPoint",
             (gp_Pnt (IGESSolid_SolidOfRevolution::*)() const) static_cast<gp_Pnt (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::TransformedAxisPoint),
             R"#(returns the point on the axis after applying Trans.Matrix)#" )
        .def("Axis",
             (gp_Dir (IGESSolid_SolidOfRevolution::*)() const) static_cast<gp_Dir (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::Axis),
             R"#(returns the direction of the axis)#" )
        .def("TransformedAxis",
             (gp_Dir (IGESSolid_SolidOfRevolution::*)() const) static_cast<gp_Dir (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::TransformedAxis),
             R"#(returns the direction of the axis after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SolidOfRevolution::*)() const>(&IGESSolid_SolidOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SolidOfRevolution::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_SolidOfRevolution::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SpecificModule ,opencascade::handle<IGESSolid_SpecificModule>  , IGESData_SpecificModule >>(m.attr("IGESSolid_SpecificModule"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESSolid_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESSolid)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SpecificModule::*)() const>(&IGESSolid_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SpecificModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Sphere ,opencascade::handle<IGESSolid_Sphere>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Sphere"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Sphere::*)( const Standard_Real ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_Sphere::*)( const Standard_Real ,  const gp_XYZ &  ) >(&IGESSolid_Sphere::Init),
             R"#(This method is used to set the fields of the class Sphere - aRadius : the radius of the sphere - aCenter : the center point coordinates (default (0,0,0)))#"  , py::arg("aRadius"),  py::arg("aCenter"))
        .def("Radius",
             (Standard_Real (IGESSolid_Sphere::*)() const) static_cast<Standard_Real (IGESSolid_Sphere::*)() const>(&IGESSolid_Sphere::Radius),
             R"#(returns the radius of the sphere)#" )
        .def("Center",
             (gp_Pnt (IGESSolid_Sphere::*)() const) static_cast<gp_Pnt (IGESSolid_Sphere::*)() const>(&IGESSolid_Sphere::Center),
             R"#(returns the center of the sphere)#" )
        .def("TransformedCenter",
             (gp_Pnt (IGESSolid_Sphere::*)() const) static_cast<gp_Pnt (IGESSolid_Sphere::*)() const>(&IGESSolid_Sphere::TransformedCenter),
             R"#(returns the center of the sphere after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Sphere::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Sphere::*)() const>(&IGESSolid_Sphere::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Sphere::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Sphere::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_SphericalSurface ,opencascade::handle<IGESSolid_SphericalSurface>  , IGESData_IGESEntity >>(m.attr("IGESSolid_SphericalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_SphericalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> & ,  const opencascade::handle<IGESGeom_Direction> &  ) ) static_cast<void (IGESSolid_SphericalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> & ,  const opencascade::handle<IGESGeom_Direction> &  ) >(&IGESSolid_SphericalSurface::Init),
             R"#(This method is used to set the fields of the class SphericalSurface - aCenter : the coordinates of the center point - aRadius : value of radius - anAxis : the direction of the axis Null in case of Unparametrised surface - aRefdir : the reference direction Null in case of Unparametrised surface)#"  , py::arg("aCenter"),  py::arg("aRadius"),  py::arg("anAxis"),  py::arg("aRefdir"))
        .def("Center",
             (opencascade::handle<IGESGeom_Point> (IGESSolid_SphericalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Point> (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::Center),
             R"#(returns the center of the spherical surface)#" )
        .def("TransformedCenter",
             (gp_Pnt (IGESSolid_SphericalSurface::*)() const) static_cast<gp_Pnt (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::TransformedCenter),
             R"#(returns the center of the spherical surface after applying TransformationMatrix)#" )
        .def("Radius",
             (Standard_Real (IGESSolid_SphericalSurface::*)() const) static_cast<Standard_Real (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::Radius),
             R"#(returns the radius of the spherical surface)#" )
        .def("Axis",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_SphericalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::Axis),
             R"#(returns the direction of the axis (Parametrised surface) Null is returned if the surface is not parametrised)#" )
        .def("ReferenceDir",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_SphericalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::ReferenceDir),
             R"#(returns the reference direction (Parametrised surface) Null is returned if the surface is not parametrised)#" )
        .def("IsParametrised",
             (Standard_Boolean (IGESSolid_SphericalSurface::*)() const) static_cast<Standard_Boolean (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::IsParametrised),
             R"#(Returns True if the surface is parametrised, else False)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_SphericalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_SphericalSurface::*)() const>(&IGESSolid_SphericalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_SphericalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_SphericalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolBlock , shared_ptr<IGESSolid_ToolBlock>  >>(m.attr("IGESSolid_ToolBlock"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolBlock::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolBlock::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolBlock::OwnShared),
             R"#(Lists the Entities shared by a Block <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> &  ) const>(&IGESSolid_ToolBlock::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolBlock::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const opencascade::handle<IGESSolid_Block> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const opencascade::handle<IGESSolid_Block> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolBlock::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolBlock::*)( const opencascade::handle<IGESSolid_Block> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolBlock::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolBooleanTree , shared_ptr<IGESSolid_ToolBooleanTree>  >>(m.attr("IGESSolid_ToolBooleanTree"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolBooleanTree::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolBooleanTree::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolBooleanTree::OwnShared),
             R"#(Lists the Entities shared by a BooleanTree <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> &  ) const>(&IGESSolid_ToolBooleanTree::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolBooleanTree::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const opencascade::handle<IGESSolid_BooleanTree> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const opencascade::handle<IGESSolid_BooleanTree> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolBooleanTree::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolBooleanTree::*)( const opencascade::handle<IGESSolid_BooleanTree> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolBooleanTree::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolConeFrustum , shared_ptr<IGESSolid_ToolConeFrustum>  >>(m.attr("IGESSolid_ToolConeFrustum"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolConeFrustum::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolConeFrustum::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolConeFrustum::OwnShared),
             R"#(Lists the Entities shared by a ConeFrustum <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> &  ) const>(&IGESSolid_ToolConeFrustum::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolConeFrustum::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const opencascade::handle<IGESSolid_ConeFrustum> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const opencascade::handle<IGESSolid_ConeFrustum> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolConeFrustum::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolConeFrustum::*)( const opencascade::handle<IGESSolid_ConeFrustum> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolConeFrustum::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolConicalSurface , shared_ptr<IGESSolid_ToolConicalSurface>  >>(m.attr("IGESSolid_ToolConicalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolConicalSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolConicalSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolConicalSurface::OwnShared),
             R"#(Lists the Entities shared by a ConicalSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> &  ) const>(&IGESSolid_ToolConicalSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolConicalSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const opencascade::handle<IGESSolid_ConicalSurface> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const opencascade::handle<IGESSolid_ConicalSurface> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolConicalSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolConicalSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolConicalSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolCylinder , shared_ptr<IGESSolid_ToolCylinder>  >>(m.attr("IGESSolid_ToolCylinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolCylinder::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolCylinder::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolCylinder::OwnShared),
             R"#(Lists the Entities shared by a Cylinder <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> &  ) const>(&IGESSolid_ToolCylinder::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolCylinder::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const opencascade::handle<IGESSolid_Cylinder> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const opencascade::handle<IGESSolid_Cylinder> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolCylinder::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolCylinder::*)( const opencascade::handle<IGESSolid_Cylinder> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolCylinder::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolCylindricalSurface , shared_ptr<IGESSolid_ToolCylindricalSurface>  >>(m.attr("IGESSolid_ToolCylindricalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolCylindricalSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolCylindricalSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolCylindricalSurface::OwnShared),
             R"#(Lists the Entities shared by a CylindricalSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> &  ) const>(&IGESSolid_ToolCylindricalSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolCylindricalSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const opencascade::handle<IGESSolid_CylindricalSurface> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const opencascade::handle<IGESSolid_CylindricalSurface> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolCylindricalSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolCylindricalSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolCylindricalSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolEdgeList , shared_ptr<IGESSolid_ToolEdgeList>  >>(m.attr("IGESSolid_ToolEdgeList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolEdgeList::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolEdgeList::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolEdgeList::OwnShared),
             R"#(Lists the Entities shared by a EdgeList <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> &  ) const>(&IGESSolid_ToolEdgeList::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolEdgeList::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const opencascade::handle<IGESSolid_EdgeList> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const opencascade::handle<IGESSolid_EdgeList> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolEdgeList::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolEdgeList::*)( const opencascade::handle<IGESSolid_EdgeList> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolEdgeList::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolEllipsoid , shared_ptr<IGESSolid_ToolEllipsoid>  >>(m.attr("IGESSolid_ToolEllipsoid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolEllipsoid::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolEllipsoid::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolEllipsoid::OwnShared),
             R"#(Lists the Entities shared by a Ellipsoid <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> &  ) const>(&IGESSolid_ToolEllipsoid::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolEllipsoid::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const opencascade::handle<IGESSolid_Ellipsoid> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const opencascade::handle<IGESSolid_Ellipsoid> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolEllipsoid::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolEllipsoid::*)( const opencascade::handle<IGESSolid_Ellipsoid> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolEllipsoid::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolFace , shared_ptr<IGESSolid_ToolFace>  >>(m.attr("IGESSolid_ToolFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolFace::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolFace::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolFace::OwnShared),
             R"#(Lists the Entities shared by a Face <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> &  ) const>(&IGESSolid_ToolFace::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolFace::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const opencascade::handle<IGESSolid_Face> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const opencascade::handle<IGESSolid_Face> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolFace::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolFace::*)( const opencascade::handle<IGESSolid_Face> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolFace::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolLoop , shared_ptr<IGESSolid_ToolLoop>  >>(m.attr("IGESSolid_ToolLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolLoop::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolLoop::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolLoop::OwnShared),
             R"#(Lists the Entities shared by a Loop <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> &  ) const>(&IGESSolid_ToolLoop::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolLoop::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const opencascade::handle<IGESSolid_Loop> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const opencascade::handle<IGESSolid_Loop> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolLoop::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolLoop::*)( const opencascade::handle<IGESSolid_Loop> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolLoop::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolManifoldSolid , shared_ptr<IGESSolid_ToolManifoldSolid>  >>(m.attr("IGESSolid_ToolManifoldSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolManifoldSolid::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolManifoldSolid::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolManifoldSolid::OwnShared),
             R"#(Lists the Entities shared by a ManifoldSolid <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> &  ) const>(&IGESSolid_ToolManifoldSolid::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolManifoldSolid::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const opencascade::handle<IGESSolid_ManifoldSolid> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const opencascade::handle<IGESSolid_ManifoldSolid> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolManifoldSolid::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolManifoldSolid::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolManifoldSolid::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolPlaneSurface , shared_ptr<IGESSolid_ToolPlaneSurface>  >>(m.attr("IGESSolid_ToolPlaneSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolPlaneSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolPlaneSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolPlaneSurface::OwnShared),
             R"#(Lists the Entities shared by a PlaneSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> &  ) const>(&IGESSolid_ToolPlaneSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolPlaneSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const opencascade::handle<IGESSolid_PlaneSurface> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const opencascade::handle<IGESSolid_PlaneSurface> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolPlaneSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolPlaneSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolPlaneSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolRightAngularWedge , shared_ptr<IGESSolid_ToolRightAngularWedge>  >>(m.attr("IGESSolid_ToolRightAngularWedge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolRightAngularWedge::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolRightAngularWedge::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolRightAngularWedge::OwnShared),
             R"#(Lists the Entities shared by a RightAngularWedge <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> &  ) const>(&IGESSolid_ToolRightAngularWedge::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolRightAngularWedge::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const opencascade::handle<IGESSolid_RightAngularWedge> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const opencascade::handle<IGESSolid_RightAngularWedge> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolRightAngularWedge::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolRightAngularWedge::*)( const opencascade::handle<IGESSolid_RightAngularWedge> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolRightAngularWedge::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSelectedComponent , shared_ptr<IGESSolid_ToolSelectedComponent>  >>(m.attr("IGESSolid_ToolSelectedComponent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolSelectedComponent::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolSelectedComponent::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolSelectedComponent::OwnShared),
             R"#(Lists the Entities shared by a SelectedComponent <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> &  ) const>(&IGESSolid_ToolSelectedComponent::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolSelectedComponent::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const opencascade::handle<IGESSolid_SelectedComponent> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const opencascade::handle<IGESSolid_SelectedComponent> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolSelectedComponent::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolSelectedComponent::*)( const opencascade::handle<IGESSolid_SelectedComponent> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolSelectedComponent::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolShell , shared_ptr<IGESSolid_ToolShell>  >>(m.attr("IGESSolid_ToolShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolShell::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolShell::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolShell::OwnShared),
             R"#(Lists the Entities shared by a Shell <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> &  ) const>(&IGESSolid_ToolShell::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolShell::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const opencascade::handle<IGESSolid_Shell> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const opencascade::handle<IGESSolid_Shell> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolShell::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolShell::*)( const opencascade::handle<IGESSolid_Shell> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolShell::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidAssembly , shared_ptr<IGESSolid_ToolSolidAssembly>  >>(m.attr("IGESSolid_ToolSolidAssembly"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolSolidAssembly::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolSolidAssembly::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolSolidAssembly::OwnShared),
             R"#(Lists the Entities shared by a SolidAssembly <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> &  ) const>(&IGESSolid_ToolSolidAssembly::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolSolidAssembly::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const opencascade::handle<IGESSolid_SolidAssembly> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const opencascade::handle<IGESSolid_SolidAssembly> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolSolidAssembly::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolSolidAssembly::*)( const opencascade::handle<IGESSolid_SolidAssembly> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolSolidAssembly::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidInstance , shared_ptr<IGESSolid_ToolSolidInstance>  >>(m.attr("IGESSolid_ToolSolidInstance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolSolidInstance::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolSolidInstance::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolSolidInstance::OwnShared),
             R"#(Lists the Entities shared by a SolidInstance <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> &  ) const>(&IGESSolid_ToolSolidInstance::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolSolidInstance::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const opencascade::handle<IGESSolid_SolidInstance> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const opencascade::handle<IGESSolid_SolidInstance> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolSolidInstance::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolSolidInstance::*)( const opencascade::handle<IGESSolid_SolidInstance> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolSolidInstance::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidOfLinearExtrusion , shared_ptr<IGESSolid_ToolSolidOfLinearExtrusion>  >>(m.attr("IGESSolid_ToolSolidOfLinearExtrusion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolSolidOfLinearExtrusion::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolSolidOfLinearExtrusion::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolSolidOfLinearExtrusion::OwnShared),
             R"#(Lists the Entities shared by a SolidOfLinearExtrusion <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> &  ) const>(&IGESSolid_ToolSolidOfLinearExtrusion::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolSolidOfLinearExtrusion::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolSolidOfLinearExtrusion::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolSolidOfLinearExtrusion::*)( const opencascade::handle<IGESSolid_SolidOfLinearExtrusion> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolSolidOfLinearExtrusion::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSolidOfRevolution , shared_ptr<IGESSolid_ToolSolidOfRevolution>  >>(m.attr("IGESSolid_ToolSolidOfRevolution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolSolidOfRevolution::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolSolidOfRevolution::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolSolidOfRevolution::OwnShared),
             R"#(Lists the Entities shared by a SolidOfRevolution <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> &  ) const>(&IGESSolid_ToolSolidOfRevolution::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolSolidOfRevolution::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolSolidOfRevolution::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolSolidOfRevolution::*)( const opencascade::handle<IGESSolid_SolidOfRevolution> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolSolidOfRevolution::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSphere , shared_ptr<IGESSolid_ToolSphere>  >>(m.attr("IGESSolid_ToolSphere"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolSphere::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolSphere::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolSphere::OwnShared),
             R"#(Lists the Entities shared by a Sphere <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> &  ) const>(&IGESSolid_ToolSphere::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolSphere::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const opencascade::handle<IGESSolid_Sphere> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const opencascade::handle<IGESSolid_Sphere> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolSphere::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolSphere::*)( const opencascade::handle<IGESSolid_Sphere> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolSphere::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolSphericalSurface , shared_ptr<IGESSolid_ToolSphericalSurface>  >>(m.attr("IGESSolid_ToolSphericalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolSphericalSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolSphericalSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolSphericalSurface::OwnShared),
             R"#(Lists the Entities shared by a SphericalSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> &  ) const>(&IGESSolid_ToolSphericalSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolSphericalSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const opencascade::handle<IGESSolid_SphericalSurface> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const opencascade::handle<IGESSolid_SphericalSurface> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolSphericalSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolSphericalSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolSphericalSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolToroidalSurface , shared_ptr<IGESSolid_ToolToroidalSurface>  >>(m.attr("IGESSolid_ToolToroidalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolToroidalSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolToroidalSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolToroidalSurface::OwnShared),
             R"#(Lists the Entities shared by a ToroidalSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> &  ) const>(&IGESSolid_ToolToroidalSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolToroidalSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const opencascade::handle<IGESSolid_ToroidalSurface> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const opencascade::handle<IGESSolid_ToroidalSurface> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolToroidalSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolToroidalSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolToroidalSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolTorus , shared_ptr<IGESSolid_ToolTorus>  >>(m.attr("IGESSolid_ToolTorus"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolTorus::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolTorus::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolTorus::OwnShared),
             R"#(Lists the Entities shared by a Torus <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> &  ) const>(&IGESSolid_ToolTorus::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolTorus::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const opencascade::handle<IGESSolid_Torus> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const opencascade::handle<IGESSolid_Torus> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolTorus::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolTorus::*)( const opencascade::handle<IGESSolid_Torus> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolTorus::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToolVertexList , shared_ptr<IGESSolid_ToolVertexList>  >>(m.attr("IGESSolid_ToolVertexList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESSolid_ToolVertexList::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  IGESData_IGESWriter &  ) const>(&IGESSolid_ToolVertexList::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  Interface_EntityIterator &  ) const>(&IGESSolid_ToolVertexList::OwnShared),
             R"#(Lists the Entities shared by a VertexList <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> &  ) const) static_cast<IGESData_DirChecker (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> &  ) const>(&IGESSolid_ToolVertexList::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESSolid_ToolVertexList::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const opencascade::handle<IGESSolid_VertexList> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const opencascade::handle<IGESSolid_VertexList> & ,  Interface_CopyTool &  ) const>(&IGESSolid_ToolVertexList::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESSolid_ToolVertexList::*)( const opencascade::handle<IGESSolid_VertexList> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESSolid_ToolVertexList::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_TopoBuilder , shared_ptr<IGESSolid_TopoBuilder>  >>(m.attr("IGESSolid_TopoBuilder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::Clear),
             R"#(Resets the TopoBuilder for an entirely new operation (with a new EdgeList, a new VertexList, new Shells, ...))#" )
        .def("AddVertex",
             (void (IGESSolid_TopoBuilder::*)( const gp_XYZ &  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const gp_XYZ &  ) >(&IGESSolid_TopoBuilder::AddVertex),
             R"#(Adds a Vertex to the VertexList)#"  , py::arg("val"))
        .def("NbVertices",
             (Standard_Integer (IGESSolid_TopoBuilder::*)() const) static_cast<Standard_Integer (IGESSolid_TopoBuilder::*)() const>(&IGESSolid_TopoBuilder::NbVertices),
             R"#(Returns the count of already recorded Vertices)#" )
        .def("Vertex",
             (const gp_XYZ & (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) const) static_cast<const gp_XYZ & (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) const>(&IGESSolid_TopoBuilder::Vertex),
             R"#(Returns a Vertex, given its rank)#"  , py::arg("num"))
        .def("VertexList",
             (opencascade::handle<IGESSolid_VertexList> (IGESSolid_TopoBuilder::*)() const) static_cast<opencascade::handle<IGESSolid_VertexList> (IGESSolid_TopoBuilder::*)() const>(&IGESSolid_TopoBuilder::VertexList),
             R"#(Returns the VertexList. It can be referenced, but it remains empty until call to EndShell or EndSolid)#" )
        .def("AddEdge",
             (void (IGESSolid_TopoBuilder::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESSolid_TopoBuilder::AddEdge),
             R"#(Adds an Edge (3D) to the EdgeList, defined by a Curve and two number of Vertex, for start and end)#"  , py::arg("curve"),  py::arg("vstart"),  py::arg("vend"))
        .def("NbEdges",
             (Standard_Integer (IGESSolid_TopoBuilder::*)() const) static_cast<Standard_Integer (IGESSolid_TopoBuilder::*)() const>(&IGESSolid_TopoBuilder::NbEdges),
             R"#(Returns the count of recorded Edges (3D))#" )
        .def("EdgeList",
             (opencascade::handle<IGESSolid_EdgeList> (IGESSolid_TopoBuilder::*)() const) static_cast<opencascade::handle<IGESSolid_EdgeList> (IGESSolid_TopoBuilder::*)() const>(&IGESSolid_TopoBuilder::EdgeList),
             R"#(Returns the EdgeList. It can be referenced, but it remains empty until call to EndShell or EndSolid)#" )
        .def("MakeLoop",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::MakeLoop),
             R"#(Begins the definition of a new Loop : it is the Current Loop All Edges (UV) defined by MakeEdge/EndEdge will be added in it The Loop can then be referenced but is empty. It will be filled with its Edges(UV) by EndLoop (from SetOuter/AddInner))#" )
        .def("MakeEdge",
             (void (IGESSolid_TopoBuilder::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&IGESSolid_TopoBuilder::MakeEdge),
             R"#(Defines an Edge(UV), to be added in the current Loop by EndEdge <edgetype> gives the type of the edge <edge3d> identifies the Edge(3D) used as support The EdgeList is allways the current one <orientation gives the orientation flag It is then necessary to : - give the parametric curves - close the definition of this edge(UV) by EndEdge, else the next call to MakeEdge will erase this one)#"  , py::arg("edgetype"),  py::arg("edge3d"),  py::arg("orientation"))
        .def("AddCurveUV",
             (void (IGESSolid_TopoBuilder::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Integer  ) >(&IGESSolid_TopoBuilder::AddCurveUV),
             R"#(Adds a Parametric Curve (UV) to the current Edge(UV))#"  , py::arg("curve"),  py::arg("iso"))
        .def("EndEdge",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::EndEdge),
             R"#(Closes the definition of an Edge(UV) and adds it to the current Loop)#" )
        .def("MakeFace",
             (void (IGESSolid_TopoBuilder::*)( const opencascade::handle<IGESData_IGESEntity> &  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const opencascade::handle<IGESData_IGESEntity> &  ) >(&IGESSolid_TopoBuilder::MakeFace),
             R"#(Begins the definition of a new Face, on a surface All Loops defined by MakeLoop will be added in it, according the closing call : SetOuter for the Outer Loop (by default, if SetOuter is not called, no OuterLoop is defined); AddInner for the list of Inner Loops (there can be none))#"  , py::arg("surface"))
        .def("SetOuter",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::SetOuter),
             R"#(Closes the current Loop and sets it Loop as Outer Loop. If no current Loop has yet been defined, does nothing.)#" )
        .def("AddInner",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::AddInner),
             R"#(Closes the current Loop and adds it to the list of Inner Loops for the current Face)#" )
        .def("EndFace",
             (void (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) >(&IGESSolid_TopoBuilder::EndFace),
             R"#(Closes the definition of the current Face, fills it and adds it to the current Shell with an orientation flag (0/1))#"  , py::arg("orientation"))
        .def("MakeShell",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::MakeShell),
             R"#(Begins the definition of a new Shell (either Simple or in a Solid))#" )
        .def("EndSimpleShell",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::EndSimpleShell),
             R"#(Closes the whole definition as that of a simple Shell)#" )
        .def("SetMainShell",
             (void (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) >(&IGESSolid_TopoBuilder::SetMainShell),
             R"#(Closes the definition of the current Shell as for the Main Shell of a Solid, with an orientation flag (0/1))#"  , py::arg("orientation"))
        .def("AddVoidShell",
             (void (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) ) static_cast<void (IGESSolid_TopoBuilder::*)( const Standard_Integer  ) >(&IGESSolid_TopoBuilder::AddVoidShell),
             R"#(Closes the definition of the current Shell and adds it to the list of Void Shells of a Solid, with an orientation flag (0/1))#"  , py::arg("orientation"))
        .def("EndSolid",
             (void (IGESSolid_TopoBuilder::*)() ) static_cast<void (IGESSolid_TopoBuilder::*)() >(&IGESSolid_TopoBuilder::EndSolid),
             R"#(Closes the whole definition as that of a ManifoldSolid Its call is exclusive from that of EndSimpleShell)#" )
        .def("Shell",
             (opencascade::handle<IGESSolid_Shell> (IGESSolid_TopoBuilder::*)() const) static_cast<opencascade::handle<IGESSolid_Shell> (IGESSolid_TopoBuilder::*)() const>(&IGESSolid_TopoBuilder::Shell),
             R"#(Returns the current Shell. The current Shell is created empty by MakeShell and filled by EndShell)#" )
        .def("Solid",
             (opencascade::handle<IGESSolid_ManifoldSolid> (IGESSolid_TopoBuilder::*)() const) static_cast<opencascade::handle<IGESSolid_ManifoldSolid> (IGESSolid_TopoBuilder::*)() const>(&IGESSolid_TopoBuilder::Solid),
             R"#(Returns the current ManifoldSolid. It is created empty by Create and filled by EndSolid)#" )
    // methods using call by reference i.s.o. return
        .def("Edge",
             []( IGESSolid_TopoBuilder &self , const Standard_Integer num,opencascade::handle<IGESData_IGESEntity> & curve ){ Standard_Integer  vstart; Standard_Integer  vend; self.Edge(num,curve,vstart,vend); return std::make_tuple(vstart,vend); },
             R"#(Returns the definition of an Edge (3D) given its rank)#"  , py::arg("num"),  py::arg("curve"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_ToroidalSurface ,opencascade::handle<IGESSolid_ToroidalSurface>  , IGESData_IGESEntity >>(m.attr("IGESSolid_ToroidalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_ToroidalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> &  ) ) static_cast<void (IGESSolid_ToroidalSurface::*)( const opencascade::handle<IGESGeom_Point> & ,  const opencascade::handle<IGESGeom_Direction> & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<IGESGeom_Direction> &  ) >(&IGESSolid_ToroidalSurface::Init),
             R"#(This method is used to set the fields of the class ToroidalSurface - aCenter : the center point coordinates - anAxis : the direction of the axis - majRadius : the major radius - minRadius : the minor radius - Refdir : the reference direction (parametrised) default Null for unparametrised surface)#"  , py::arg("aCenter"),  py::arg("anAxis"),  py::arg("majRadius"),  py::arg("minRadius"),  py::arg("Refdir"))
        .def("Center",
             (opencascade::handle<IGESGeom_Point> (IGESSolid_ToroidalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Point> (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::Center),
             R"#(returns the center point coordinates of the surface)#" )
        .def("TransformedCenter",
             (gp_Pnt (IGESSolid_ToroidalSurface::*)() const) static_cast<gp_Pnt (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::TransformedCenter),
             R"#(returns the center point coordinates of the surface after applying TransformationMatrix)#" )
        .def("Axis",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_ToroidalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::Axis),
             R"#(returns the direction of the axis)#" )
        .def("MajorRadius",
             (Standard_Real (IGESSolid_ToroidalSurface::*)() const) static_cast<Standard_Real (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::MajorRadius),
             R"#(returns the major radius of the surface)#" )
        .def("MinorRadius",
             (Standard_Real (IGESSolid_ToroidalSurface::*)() const) static_cast<Standard_Real (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::MinorRadius),
             R"#(returns the minor radius of the surface)#" )
        .def("ReferenceDir",
             (opencascade::handle<IGESGeom_Direction> (IGESSolid_ToroidalSurface::*)() const) static_cast<opencascade::handle<IGESGeom_Direction> (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::ReferenceDir),
             R"#(returns the reference direction (parametrised surface) Null is returned if the surface is not parametrised)#" )
        .def("IsParametrised",
             (Standard_Boolean (IGESSolid_ToroidalSurface::*)() const) static_cast<Standard_Boolean (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::IsParametrised),
             R"#(Returns True if the surface is parametrised, else False)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_ToroidalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_ToroidalSurface::*)() const>(&IGESSolid_ToroidalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_ToroidalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_ToroidalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_Torus ,opencascade::handle<IGESSolid_Torus>  , IGESData_IGESEntity >>(m.attr("IGESSolid_Torus"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_Torus::*)( const Standard_Real ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (IGESSolid_Torus::*)( const Standard_Real ,  const Standard_Real ,  const gp_XYZ & ,  const gp_XYZ &  ) >(&IGESSolid_Torus::Init),
             R"#(This method is used to set the fields of the class Torus - R1 : distance from center of torus to center of circular disc to be revolved - R2 : radius of circular disc - aPoint : center point coordinates (default (0,0,0)) - anAxis : unit vector in axis direction (default (0,0,1)))#"  , py::arg("R1"),  py::arg("R2"),  py::arg("aPoint"),  py::arg("anAxisdir"))
        .def("MajorRadius",
             (Standard_Real (IGESSolid_Torus::*)() const) static_cast<Standard_Real (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::MajorRadius),
             R"#(returns the distance from the center of torus to the center of the disc to be revolved)#" )
        .def("DiscRadius",
             (Standard_Real (IGESSolid_Torus::*)() const) static_cast<Standard_Real (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::DiscRadius),
             R"#(returns the radius of the disc to be revolved)#" )
        .def("AxisPoint",
             (gp_Pnt (IGESSolid_Torus::*)() const) static_cast<gp_Pnt (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::AxisPoint),
             R"#(returns the center of torus)#" )
        .def("TransformedAxisPoint",
             (gp_Pnt (IGESSolid_Torus::*)() const) static_cast<gp_Pnt (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::TransformedAxisPoint),
             R"#(returns the center of torus after applying TransformationMatrix)#" )
        .def("Axis",
             (gp_Dir (IGESSolid_Torus::*)() const) static_cast<gp_Dir (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::Axis),
             R"#(returns direction of the axis)#" )
        .def("TransformedAxis",
             (gp_Dir (IGESSolid_Torus::*)() const) static_cast<gp_Dir (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::TransformedAxis),
             R"#(returns direction of the axis after applying TransformationMatrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_Torus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_Torus::*)() const>(&IGESSolid_Torus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_Torus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_Torus::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESSolid_VertexList ,opencascade::handle<IGESSolid_VertexList>  , IGESData_IGESEntity >>(m.attr("IGESSolid_VertexList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESSolid_VertexList::*)( const opencascade::handle<TColgp_HArray1OfXYZ> &  ) ) static_cast<void (IGESSolid_VertexList::*)( const opencascade::handle<TColgp_HArray1OfXYZ> &  ) >(&IGESSolid_VertexList::Init),
             R"#(This method is used to set the fields of the class VertexList - vertices : the vertices in the list)#"  , py::arg("vertices"))
        .def("NbVertices",
             (Standard_Integer (IGESSolid_VertexList::*)() const) static_cast<Standard_Integer (IGESSolid_VertexList::*)() const>(&IGESSolid_VertexList::NbVertices),
             R"#(return the number of vertices in the list)#" )
        .def("Vertex",
             (gp_Pnt (IGESSolid_VertexList::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (IGESSolid_VertexList::*)( const Standard_Integer  ) const>(&IGESSolid_VertexList::Vertex),
             R"#(returns the num'th vertex in the list raises exception if num <= 0 or num > NbVertices())#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESSolid_VertexList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESSolid_VertexList::*)() const>(&IGESSolid_VertexList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESSolid_VertexList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESSolid_VertexList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESSolid_ToolConeFrustum.hxx
// ./opencascade/IGESSolid_HArray1OfShell.hxx
// ./opencascade/IGESSolid_PlaneSurface.hxx
// ./opencascade/IGESSolid_ManifoldSolid.hxx
// ./opencascade/IGESSolid_ToolConicalSurface.hxx
// ./opencascade/IGESSolid_ToolSolidOfLinearExtrusion.hxx
// ./opencascade/IGESSolid_ToolBlock.hxx
// ./opencascade/IGESSolid_Cylinder.hxx
// ./opencascade/IGESSolid_Shell.hxx
// ./opencascade/IGESSolid_ReadWriteModule.hxx
// ./opencascade/IGESSolid_ToolCylindricalSurface.hxx
// ./opencascade/IGESSolid_GeneralModule.hxx
// ./opencascade/IGESSolid_Protocol.hxx
// ./opencascade/IGESSolid_SphericalSurface.hxx
// ./opencascade/IGESSolid_Block.hxx
// ./opencascade/IGESSolid_ToolCylinder.hxx
// ./opencascade/IGESSolid_Array1OfFace.hxx
// ./opencascade/IGESSolid_ToolToroidalSurface.hxx
// ./opencascade/IGESSolid_ToroidalSurface.hxx
// ./opencascade/IGESSolid_SpecificModule.hxx
// ./opencascade/IGESSolid_Ellipsoid.hxx
// ./opencascade/IGESSolid_Array1OfShell.hxx
// ./opencascade/IGESSolid_Sphere.hxx
// ./opencascade/IGESSolid_ToolSolidInstance.hxx
// ./opencascade/IGESSolid_HArray1OfFace.hxx
// ./opencascade/IGESSolid_ToolSolidAssembly.hxx
// ./opencascade/IGESSolid_ConicalSurface.hxx
// ./opencascade/IGESSolid_Array1OfLoop.hxx
// ./opencascade/IGESSolid_ToolSphericalSurface.hxx
// ./opencascade/IGESSolid_EdgeList.hxx
// ./opencascade/IGESSolid_SelectedComponent.hxx
// ./opencascade/IGESSolid_ToolPlaneSurface.hxx
// ./opencascade/IGESSolid_ToolSolidOfRevolution.hxx
// ./opencascade/IGESSolid_Torus.hxx
// ./opencascade/IGESSolid_ConeFrustum.hxx
// ./opencascade/IGESSolid_SolidOfRevolution.hxx
// ./opencascade/IGESSolid_HArray1OfLoop.hxx
// ./opencascade/IGESSolid_VertexList.hxx
// ./opencascade/IGESSolid_HArray1OfVertexList.hxx
// ./opencascade/IGESSolid_RightAngularWedge.hxx
// ./opencascade/IGESSolid_ToolBooleanTree.hxx
// ./opencascade/IGESSolid_CylindricalSurface.hxx
// ./opencascade/IGESSolid_BooleanTree.hxx
// ./opencascade/IGESSolid_Array1OfVertexList.hxx
// ./opencascade/IGESSolid_SolidAssembly.hxx
// ./opencascade/IGESSolid_ToolManifoldSolid.hxx
// ./opencascade/IGESSolid_ToolFace.hxx
// ./opencascade/IGESSolid_ToolVertexList.hxx
// ./opencascade/IGESSolid_Loop.hxx
// ./opencascade/IGESSolid_ToolEllipsoid.hxx
// ./opencascade/IGESSolid_Face.hxx
// ./opencascade/IGESSolid_ToolRightAngularWedge.hxx
// ./opencascade/IGESSolid_ToolLoop.hxx
// ./opencascade/IGESSolid_SolidOfLinearExtrusion.hxx
// ./opencascade/IGESSolid_ToolSelectedComponent.hxx
// ./opencascade/IGESSolid_TopoBuilder.hxx
// ./opencascade/IGESSolid_ToolSphere.hxx
// ./opencascade/IGESSolid_ToolEdgeList.hxx
// ./opencascade/IGESSolid_ToolShell.hxx
// ./opencascade/IGESSolid_ToolTorus.hxx
// ./opencascade/IGESSolid_SolidInstance.hxx
// ./opencascade/IGESSolid.hxx

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_Face> >(m,"IGESSolid_Array1OfFace");  
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_Shell> >(m,"IGESSolid_Array1OfShell");  
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_Loop> >(m,"IGESSolid_Array1OfLoop");  
    register_template_NCollection_Array1<opencascade::handle<IGESSolid_VertexList> >(m,"IGESSolid_Array1OfVertexList");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
