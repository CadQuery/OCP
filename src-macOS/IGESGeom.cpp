
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_IGESGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESGeom"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESGeom , shared_ptr<IGESGeom>>(m,"IGESGeom");

    static_cast<py::class_<IGESGeom , shared_ptr<IGESGeom> >>(m.attr("IGESGeom"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_BSplineCurve ,opencascade::handle<IGESGeom_BSplineCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_BSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_BSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_BSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_BSplineSurface ,opencascade::handle<IGESGeom_BSplineSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_BSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_BSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_BSplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Boundary ,opencascade::handle<IGESGeom_Boundary> , IGESData_IGESEntity>>(m.attr("IGESGeom_Boundary"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Boundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Boundary::*)() const>(&IGESGeom_Boundary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Boundary::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_BoundedSurface ,opencascade::handle<IGESGeom_BoundedSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_BoundedSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_BoundedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_BoundedSurface::*)() const>(&IGESGeom_BoundedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_BoundedSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CircularArc ,opencascade::handle<IGESGeom_CircularArc> , IGESData_IGESEntity>>(m.attr("IGESGeom_CircularArc"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CircularArc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CircularArc::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CompositeCurve ,opencascade::handle<IGESGeom_CompositeCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_CompositeCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CompositeCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CompositeCurve::*)() const>(&IGESGeom_CompositeCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CompositeCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ConicArc ,opencascade::handle<IGESGeom_ConicArc> , IGESData_IGESEntity>>(m.attr("IGESGeom_ConicArc"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_ConicArc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_ConicArc::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CopiousData ,opencascade::handle<IGESGeom_CopiousData> , IGESData_IGESEntity>>(m.attr("IGESGeom_CopiousData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CopiousData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CopiousData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CurveOnSurface ,opencascade::handle<IGESGeom_CurveOnSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_CurveOnSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CurveOnSurface::*)() const>(&IGESGeom_CurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CurveOnSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Direction ,opencascade::handle<IGESGeom_Direction> , IGESData_IGESEntity>>(m.attr("IGESGeom_Direction"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Direction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Direction::*)() const>(&IGESGeom_Direction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Direction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Flash ,opencascade::handle<IGESGeom_Flash> , IGESData_IGESEntity>>(m.attr("IGESGeom_Flash"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Flash::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Flash::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_GeneralModule ,opencascade::handle<IGESGeom_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESGeom_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnSharedCase",
             (void (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , Interface_EntityIterator & ) const>(&IGESGeom_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<IGESData_DirChecker (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESGeom_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESGeom_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IGESGeom_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&IGESGeom_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , Interface_CopyTool & ) const>(&IGESGeom_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (IGESGeom_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&IGESGeom_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Shape for all, but Drawing for : Flash; Point with a symbol; Plane with a symbol)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_GeneralModule::*)() const>(&IGESGeom_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_HArray1OfBoundary ,opencascade::handle<IGESGeom_HArray1OfBoundary> , IGESGeom_Array1OfBoundary, Standard_Transient>>(m.attr("IGESGeom_HArray1OfBoundary"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESGeom_Boundary> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESGeom_Boundary> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESGeom_Array1OfBoundary & (IGESGeom_HArray1OfBoundary::*)() const) static_cast<const IGESGeom_Array1OfBoundary & (IGESGeom_HArray1OfBoundary::*)() const>(&IGESGeom_HArray1OfBoundary::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESGeom_Array1OfBoundary & (IGESGeom_HArray1OfBoundary::*)() ) static_cast<IGESGeom_Array1OfBoundary & (IGESGeom_HArray1OfBoundary::*)() >(&IGESGeom_HArray1OfBoundary::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_HArray1OfBoundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_HArray1OfBoundary::*)() const>(&IGESGeom_HArray1OfBoundary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_HArray1OfBoundary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_HArray1OfBoundary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_HArray1OfCurveOnSurface ,opencascade::handle<IGESGeom_HArray1OfCurveOnSurface> , IGESGeom_Array1OfCurveOnSurface, Standard_Transient>>(m.attr("IGESGeom_HArray1OfCurveOnSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESGeom_CurveOnSurface> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESGeom_CurveOnSurface> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESGeom_Array1OfCurveOnSurface & (IGESGeom_HArray1OfCurveOnSurface::*)() const) static_cast<const IGESGeom_Array1OfCurveOnSurface & (IGESGeom_HArray1OfCurveOnSurface::*)() const>(&IGESGeom_HArray1OfCurveOnSurface::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESGeom_Array1OfCurveOnSurface & (IGESGeom_HArray1OfCurveOnSurface::*)() ) static_cast<IGESGeom_Array1OfCurveOnSurface & (IGESGeom_HArray1OfCurveOnSurface::*)() >(&IGESGeom_HArray1OfCurveOnSurface::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_HArray1OfCurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_HArray1OfCurveOnSurface::*)() const>(&IGESGeom_HArray1OfCurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_HArray1OfCurveOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_HArray1OfCurveOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_HArray1OfTransformationMatrix ,opencascade::handle<IGESGeom_HArray1OfTransformationMatrix> , IGESGeom_Array1OfTransformationMatrix, Standard_Transient>>(m.attr("IGESGeom_HArray1OfTransformationMatrix"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESGeom_TransformationMatrix> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESGeom_TransformationMatrix> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const IGESGeom_Array1OfTransformationMatrix & (IGESGeom_HArray1OfTransformationMatrix::*)() const) static_cast<const IGESGeom_Array1OfTransformationMatrix & (IGESGeom_HArray1OfTransformationMatrix::*)() const>(&IGESGeom_HArray1OfTransformationMatrix::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESGeom_Array1OfTransformationMatrix & (IGESGeom_HArray1OfTransformationMatrix::*)() ) static_cast<IGESGeom_Array1OfTransformationMatrix & (IGESGeom_HArray1OfTransformationMatrix::*)() >(&IGESGeom_HArray1OfTransformationMatrix::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_HArray1OfTransformationMatrix::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_HArray1OfTransformationMatrix::*)() const>(&IGESGeom_HArray1OfTransformationMatrix::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_HArray1OfTransformationMatrix::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_HArray1OfTransformationMatrix::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Line ,opencascade::handle<IGESGeom_Line> , IGESData_IGESEntity>>(m.attr("IGESGeom_Line"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Line::*)() const>(&IGESGeom_Line::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Line::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_OffsetCurve ,opencascade::handle<IGESGeom_OffsetCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_OffsetCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_OffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_OffsetCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_OffsetSurface ,opencascade::handle<IGESGeom_OffsetSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_OffsetSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_OffsetSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_OffsetSurface::*)() const>(&IGESGeom_OffsetSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_OffsetSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Plane ,opencascade::handle<IGESGeom_Plane> , IGESData_IGESEntity>>(m.attr("IGESGeom_Plane"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Plane::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Point ,opencascade::handle<IGESGeom_Point> , IGESData_IGESEntity>>(m.attr("IGESGeom_Point"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Point::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Point::*)() const>(&IGESGeom_Point::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Point::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Protocol ,opencascade::handle<IGESGeom_Protocol> , IGESData_Protocol>>(m.attr("IGESGeom_Protocol"))
    // constructors
    // custom constructors
    // methods
        .def("NbResources",
             (Standard_Integer (IGESGeom_Protocol::*)() const) static_cast<Standard_Integer (IGESGeom_Protocol::*)() const>(&IGESGeom_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESBasic))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESGeom_Protocol::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESGeom_Protocol::*)( const Standard_Integer ) const>(&IGESGeom_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESGeom_Protocol::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Integer (IGESGeom_Protocol::*)( const opencascade::handle<Standard_Type> & ) const>(&IGESGeom_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Protocol::*)() const>(&IGESGeom_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Protocol::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ReadWriteModule ,opencascade::handle<IGESGeom_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESGeom_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESGeom_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IGESGeom_ReadWriteModule::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESGeom)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESGeom_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESGeom)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , IGESData_IGESWriter & ) const>(&IGESGeom_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_ReadWriteModule::*)() const>(&IGESGeom_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_RuledSurface ,opencascade::handle<IGESGeom_RuledSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_RuledSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_RuledSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_RuledSurface::*)() const>(&IGESGeom_RuledSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_RuledSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SpecificModule ,opencascade::handle<IGESGeom_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESGeom_SpecificModule"))
    // constructors
    // custom constructors
    // methods
        .def("OwnDump",
             (void (IGESGeom_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESGeom)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESGeom_SpecificModule::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESGeom_SpecificModule::OwnCorrect),
             R"#(Performs non-ambiguous Correction on Entities which support them (Boundary,ConicArc,Flash,OffsetCurve,TransformationMatrix))#"  , py::arg("CN"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_SpecificModule::*)() const>(&IGESGeom_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_SpecificModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SplineCurve ,opencascade::handle<IGESGeom_SplineCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_SplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_SplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_SplineCurve::*)() const>(&IGESGeom_SplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_SplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SplineSurface ,opencascade::handle<IGESGeom_SplineSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_SplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_SplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_SplineSurface::*)() const>(&IGESGeom_SplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_SplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SurfaceOfRevolution ,opencascade::handle<IGESGeom_SurfaceOfRevolution> , IGESData_IGESEntity>>(m.attr("IGESGeom_SurfaceOfRevolution"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_SurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_SurfaceOfRevolution::*)() const>(&IGESGeom_SurfaceOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_SurfaceOfRevolution::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_TabulatedCylinder ,opencascade::handle<IGESGeom_TabulatedCylinder> , IGESData_IGESEntity>>(m.attr("IGESGeom_TabulatedCylinder"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_TabulatedCylinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_TabulatedCylinder::*)() const>(&IGESGeom_TabulatedCylinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_TabulatedCylinder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBSplineCurve , shared_ptr<IGESGeom_ToolBSplineCurve> >>(m.attr("IGESGeom_ToolBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBSplineSurface , shared_ptr<IGESGeom_ToolBSplineSurface> >>(m.attr("IGESGeom_ToolBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBoundary , shared_ptr<IGESGeom_ToolBoundary> >>(m.attr("IGESGeom_ToolBoundary"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBoundedSurface , shared_ptr<IGESGeom_ToolBoundedSurface> >>(m.attr("IGESGeom_ToolBoundedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCircularArc , shared_ptr<IGESGeom_ToolCircularArc> >>(m.attr("IGESGeom_ToolCircularArc"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCompositeCurve , shared_ptr<IGESGeom_ToolCompositeCurve> >>(m.attr("IGESGeom_ToolCompositeCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolConicArc , shared_ptr<IGESGeom_ToolConicArc> >>(m.attr("IGESGeom_ToolConicArc"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCopiousData , shared_ptr<IGESGeom_ToolCopiousData> >>(m.attr("IGESGeom_ToolCopiousData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCurveOnSurface , shared_ptr<IGESGeom_ToolCurveOnSurface> >>(m.attr("IGESGeom_ToolCurveOnSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolDirection , shared_ptr<IGESGeom_ToolDirection> >>(m.attr("IGESGeom_ToolDirection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolFlash , shared_ptr<IGESGeom_ToolFlash> >>(m.attr("IGESGeom_ToolFlash"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolLine , shared_ptr<IGESGeom_ToolLine> >>(m.attr("IGESGeom_ToolLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolOffsetCurve , shared_ptr<IGESGeom_ToolOffsetCurve> >>(m.attr("IGESGeom_ToolOffsetCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolOffsetSurface , shared_ptr<IGESGeom_ToolOffsetSurface> >>(m.attr("IGESGeom_ToolOffsetSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolPlane , shared_ptr<IGESGeom_ToolPlane> >>(m.attr("IGESGeom_ToolPlane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolPoint , shared_ptr<IGESGeom_ToolPoint> >>(m.attr("IGESGeom_ToolPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolRuledSurface , shared_ptr<IGESGeom_ToolRuledSurface> >>(m.attr("IGESGeom_ToolRuledSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolSplineCurve , shared_ptr<IGESGeom_ToolSplineCurve> >>(m.attr("IGESGeom_ToolSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolSplineSurface , shared_ptr<IGESGeom_ToolSplineSurface> >>(m.attr("IGESGeom_ToolSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolSurfaceOfRevolution , shared_ptr<IGESGeom_ToolSurfaceOfRevolution> >>(m.attr("IGESGeom_ToolSurfaceOfRevolution"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolTabulatedCylinder , shared_ptr<IGESGeom_ToolTabulatedCylinder> >>(m.attr("IGESGeom_ToolTabulatedCylinder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolTransformationMatrix , shared_ptr<IGESGeom_ToolTransformationMatrix> >>(m.attr("IGESGeom_ToolTransformationMatrix"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolTrimmedSurface , shared_ptr<IGESGeom_ToolTrimmedSurface> >>(m.attr("IGESGeom_ToolTrimmedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_TransformationMatrix ,opencascade::handle<IGESGeom_TransformationMatrix> , IGESData_TransfEntity>>(m.attr("IGESGeom_TransformationMatrix"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (gp_GTrsf (IGESGeom_TransformationMatrix::*)() const) static_cast<gp_GTrsf (IGESGeom_TransformationMatrix::*)() const>(&IGESGeom_TransformationMatrix::Value),
             R"#(returns the transformation matrix 4th row elements of GTrsf will always be 0, 0, 0, 1 (not defined))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_TransformationMatrix::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_TransformationMatrix::*)() const>(&IGESGeom_TransformationMatrix::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_TransformationMatrix::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_TrimmedSurface ,opencascade::handle<IGESGeom_TrimmedSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_TrimmedSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_TrimmedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_TrimmedSurface::*)() const>(&IGESGeom_TrimmedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_TrimmedSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IGESGeom.hxx
// ./opencascade/IGESGeom_CompositeCurve.hxx
// ./opencascade/IGESGeom_ToolTrimmedSurface.hxx
// ./opencascade/IGESGeom_ToolCurveOnSurface.hxx
// ./opencascade/IGESGeom_ToolBSplineSurface.hxx
// ./opencascade/IGESGeom_CopiousData.hxx
// ./opencascade/IGESGeom_ToolSplineSurface.hxx
// ./opencascade/IGESGeom_HArray1OfBoundary.hxx
// ./opencascade/IGESGeom_ConicArc.hxx
// ./opencascade/IGESGeom_SplineCurve.hxx
// ./opencascade/IGESGeom_TabulatedCylinder.hxx
// ./opencascade/IGESGeom_BSplineSurface.hxx
// ./opencascade/IGESGeom_TrimmedSurface.hxx
// ./opencascade/IGESGeom_CurveOnSurface.hxx
// ./opencascade/IGESGeom_ToolPoint.hxx
// ./opencascade/IGESGeom_ToolCircularArc.hxx
// ./opencascade/IGESGeom_TransformationMatrix.hxx
// ./opencascade/IGESGeom_ToolOffsetSurface.hxx
// ./opencascade/IGESGeom_CircularArc.hxx
// ./opencascade/IGESGeom_Point.hxx
// ./opencascade/IGESGeom_ToolSplineCurve.hxx
// ./opencascade/IGESGeom_Array1OfBoundary.hxx
// ./opencascade/IGESGeom_ToolCopiousData.hxx
// ./opencascade/IGESGeom_BSplineCurve.hxx
// ./opencascade/IGESGeom_Direction.hxx
// ./opencascade/IGESGeom_ToolTransformationMatrix.hxx
// ./opencascade/IGESGeom_Line.hxx
// ./opencascade/IGESGeom_GeneralModule.hxx
// ./opencascade/IGESGeom_ToolSurfaceOfRevolution.hxx
// ./opencascade/IGESGeom_ToolBoundary.hxx
// ./opencascade/IGESGeom_Array1OfTransformationMatrix.hxx
// ./opencascade/IGESGeom_Flash.hxx
// ./opencascade/IGESGeom_SplineSurface.hxx
// ./opencascade/IGESGeom_SpecificModule.hxx
// ./opencascade/IGESGeom_ToolConicArc.hxx
// ./opencascade/IGESGeom_Array1OfCurveOnSurface.hxx
// ./opencascade/IGESGeom_HArray1OfTransformationMatrix.hxx
// ./opencascade/IGESGeom_ToolOffsetCurve.hxx
// ./opencascade/IGESGeom_ToolTabulatedCylinder.hxx
// ./opencascade/IGESGeom_Plane.hxx
// ./opencascade/IGESGeom_ToolRuledSurface.hxx
// ./opencascade/IGESGeom_RuledSurface.hxx
// ./opencascade/IGESGeom_SurfaceOfRevolution.hxx
// ./opencascade/IGESGeom_ReadWriteModule.hxx
// ./opencascade/IGESGeom_ToolBSplineCurve.hxx
// ./opencascade/IGESGeom_ToolFlash.hxx
// ./opencascade/IGESGeom_OffsetCurve.hxx
// ./opencascade/IGESGeom_Boundary.hxx
// ./opencascade/IGESGeom_HArray1OfCurveOnSurface.hxx
// ./opencascade/IGESGeom_BoundedSurface.hxx
// ./opencascade/IGESGeom_ToolCompositeCurve.hxx
// ./opencascade/IGESGeom_ToolLine.hxx
// ./opencascade/IGESGeom_OffsetSurface.hxx
// ./opencascade/IGESGeom_ToolBoundedSurface.hxx
// ./opencascade/IGESGeom_Protocol.hxx
// ./opencascade/IGESGeom_ToolPlane.hxx
// ./opencascade/IGESGeom_ToolDirection.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESGeom_Boundary> >(m,"IGESGeom_Array1OfBoundary");
    register_template_NCollection_Array1<opencascade::handle<IGESGeom_TransformationMatrix> >(m,"IGESGeom_Array1OfTransformationMatrix");
    register_template_NCollection_Array1<opencascade::handle<IGESGeom_CurveOnSurface> >(m,"IGESGeom_Array1OfCurveOnSurface");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
