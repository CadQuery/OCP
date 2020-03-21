
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
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
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <gp_Vec.hxx>
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
#include <gp_Pnt.hxx>
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
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
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
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <gp_Pnt.hxx>
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
#include <gp_Pnt.hxx>
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
#include <IGESGeom_Line.hxx>
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
#include <IGESBasic_SubfigureDef.hxx>
#include <gp_Pnt.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <gp_GTrsf.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
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
// ./opencascade\IGESGeom_Array1OfTransformationMatrix.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\IGESGeom_Array1OfCurveOnSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\IGESGeom_Array1OfBoundary.hxx
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
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESGeom::Init),
                    R"#(Prepares dymanic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESGeom_Protocol> (*)() ) static_cast<opencascade::handle<IGESGeom_Protocol> (*)() >(&IGESGeom::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_BSplineCurve ,opencascade::handle<IGESGeom_BSplineCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_BSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_BSplineCurve::*)( const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColgp_HArray1OfXYZ> & , const Standard_Real , const Standard_Real , const gp_XYZ & ) ) static_cast<void (IGESGeom_BSplineCurve::*)( const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColgp_HArray1OfXYZ> & , const Standard_Real , const Standard_Real , const gp_XYZ & ) >(&IGESGeom_BSplineCurve::Init),
             R"#(This method is used to set the fields of the class BSplineCurve. Beware about indexation of arrays - anIndex : Upper index of the sum - aDegree : Degree of basis functions - aPlanar : 0 = nonplanar curve, 1 = planar curve - aClosed : 0 = open curve, 1 = closed curve - aPolynom : 0 = rational, 1 = polynomial - aPeriodic : 0 = nonperiodic, 1 = periodic - allKnots : Knot sequence values [-Degree,Index+1] - allWeights : Array of weights [0,Index] - allPoles : X, Y, Z coordinates of all control points [0,Index] - aUmin, aUmax : Starting and ending parameter values - aNorm : Unit normal (if the curve is planar) raises exception if allWeights & allPoles are not of same size.)#"  , py::arg("anIndex"),  py::arg("aDegree"),  py::arg("aPlanar"),  py::arg("aClosed"),  py::arg("aPolynom"),  py::arg("aPeriodic"),  py::arg("allKnots"),  py::arg("allWeights"),  py::arg("allPoles"),  py::arg("aUmin"),  py::arg("aUmax"),  py::arg("aNorm"))
        .def("SetFormNumber",
             (void (IGESGeom_BSplineCurve::*)( const Standard_Integer ) ) static_cast<void (IGESGeom_BSplineCurve::*)( const Standard_Integer ) >(&IGESGeom_BSplineCurve::SetFormNumber),
             R"#(Changes FormNumber (indicates the Shape of the Curve) Error if not in range [0-5])#"  , py::arg("form"))
        .def("UpperIndex",
             (Standard_Integer (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::UpperIndex),
             R"#(returns the upper index of the sum (see Knots,Poles))#" )
        .def("Degree",
             (Standard_Integer (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::Degree),
             R"#(returns the degree of basis functions)#" )
        .def("IsPlanar",
             (Standard_Boolean (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Boolean (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::IsPlanar),
             R"#(returns True if the curve is Planar, False if non-planar)#" )
        .def("IsClosed",
             (Standard_Boolean (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Boolean (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::IsClosed),
             R"#(returns True if the curve is closed, False if open)#" )
        .def("IsPolynomial",
             (Standard_Boolean (IGESGeom_BSplineCurve::*)( const Standard_Boolean ) const) static_cast<Standard_Boolean (IGESGeom_BSplineCurve::*)( const Standard_Boolean ) const>(&IGESGeom_BSplineCurve::IsPolynomial),
             R"#(returns True if the curve is polynomial, False if rational <flag> False (D) : computed from the list of weights (all must be equal) <flag> True : as recorded)#"  , py::arg("flag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsPeriodic",
             (Standard_Boolean (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Boolean (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::IsPeriodic),
             R"#(returns True if the curve is periodic, False otherwise)#" )
        .def("NbKnots",
             (Standard_Integer (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::NbKnots),
             R"#(returns the number of knots (i.e. Degree + UpperIndex + 2))#" )
        .def("Knot",
             (Standard_Real (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const>(&IGESGeom_BSplineCurve::Knot),
             R"#(returns the knot referred to by anIndex, inside the range [-Degree,UpperIndex+1] raises exception if anIndex < -Degree() or anIndex > (NbKnots() - Degree()) Note : Knots are numbered from -Degree (not from 1))#"  , py::arg("anIndex"))
        .def("NbPoles",
             (Standard_Integer (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::NbPoles),
             R"#(returns number of poles (i.e. UpperIndex + 1))#" )
        .def("Weight",
             (Standard_Real (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const>(&IGESGeom_BSplineCurve::Weight),
             R"#(returns the weight referred to by anIndex, in [0,UpperIndex] raises exception if anIndex < 0 or anIndex > UpperIndex())#"  , py::arg("anIndex"))
        .def("Pole",
             (gp_Pnt (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const) static_cast<gp_Pnt (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const>(&IGESGeom_BSplineCurve::Pole),
             R"#(returns the pole referred to by anIndex, in [0,UpperIndex] raises exception if anIndex < 0 or anIndex > UpperIndex())#"  , py::arg("anIndex"))
        .def("TransformedPole",
             (gp_Pnt (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const) static_cast<gp_Pnt (IGESGeom_BSplineCurve::*)( const Standard_Integer ) const>(&IGESGeom_BSplineCurve::TransformedPole),
             R"#(returns the anIndex'th pole after applying Transf. Matrix raises exception if an Index < 0 or an Index > UpperIndex())#"  , py::arg("anIndex"))
        .def("UMin",
             (Standard_Real (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Real (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::UMin),
             R"#(returns starting parameter value)#" )
        .def("UMax",
             (Standard_Real (IGESGeom_BSplineCurve::*)() const) static_cast<Standard_Real (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::UMax),
             R"#(returns ending parameter value)#" )
        .def("Normal",
             (gp_XYZ (IGESGeom_BSplineCurve::*)() const) static_cast<gp_XYZ (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::Normal),
             R"#(if the curve is nonplanar then (0, 0, 0) is returned)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_BSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_BSplineCurve::*)() const>(&IGESGeom_BSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_BSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_BSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_BSplineSurface ,opencascade::handle<IGESGeom_BSplineSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_BSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColgp_HArray2OfXYZ> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColgp_HArray2OfXYZ> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&IGESGeom_BSplineSurface::Init),
             R"#(This method is used to set the fields of the class BSplineSurface - anIndexU : Upper index of first sum - anIndexV : Upper index of second sum - aDegU, aDegV : Degrees of first and second sets of basis functions - aCloseU, aCloseV : 1 = Closed in U, V directions 0 = open in U, V directions - aPolynom : 0 = Rational, 1 = polynomial - aPeriodU, aPeriodV : 0 = Non periodic in U or V direction 1 = Periodic in U or V direction - allKnotsU, allKnotsV : Knots in U and V directions - allWeights : Array of weights - allPoles : XYZ coordinates of all control points - aUmin : Starting value of U direction - aUmax : Ending value of U direction - aVmin : Starting value of V direction - aVmax : Ending value of V direction raises exception if allWeights & allPoles are not of same size.)#"  , py::arg("anIndexU"),  py::arg("anIndexV"),  py::arg("aDegU"),  py::arg("aDegV"),  py::arg("aCloseU"),  py::arg("aCloseV"),  py::arg("aPolynom"),  py::arg("aPeriodU"),  py::arg("aPeriodV"),  py::arg("allKnotsU"),  py::arg("allKnotsV"),  py::arg("allWeights"),  py::arg("allPoles"),  py::arg("aUmin"),  py::arg("aUmax"),  py::arg("aVmin"),  py::arg("aVmax"))
        .def("SetFormNumber",
             (void (IGESGeom_BSplineSurface::*)( const Standard_Integer ) ) static_cast<void (IGESGeom_BSplineSurface::*)( const Standard_Integer ) >(&IGESGeom_BSplineSurface::SetFormNumber),
             R"#(Changes FormNumber (indicates the Shape of the Surface) Error if not in range [0-9])#"  , py::arg("form"))
        .def("UpperIndexU",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::UpperIndexU),
             R"#(returns the upper index of the first sum (U))#" )
        .def("UpperIndexV",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::UpperIndexV),
             R"#(returns the upper index of the second sum (V))#" )
        .def("DegreeU",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::DegreeU),
             R"#(returns degree of first set of basis functions)#" )
        .def("DegreeV",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::DegreeV),
             R"#(returns degree of second set of basis functions)#" )
        .def("IsClosedU",
             (Standard_Boolean (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Boolean (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::IsClosedU),
             R"#(True if closed in U direction else False)#" )
        .def("IsClosedV",
             (Standard_Boolean (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Boolean (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::IsClosedV),
             R"#(True if closed in V direction else False)#" )
        .def("IsPolynomial",
             (Standard_Boolean (IGESGeom_BSplineSurface::*)( const Standard_Boolean ) const) static_cast<Standard_Boolean (IGESGeom_BSplineSurface::*)( const Standard_Boolean ) const>(&IGESGeom_BSplineSurface::IsPolynomial),
             R"#(True if polynomial, False if rational <flag> False (D) : computed from Weights <flag> True : recorded)#"  , py::arg("flag")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsPeriodicU",
             (Standard_Boolean (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Boolean (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::IsPeriodicU),
             R"#(True if periodic in U direction else False)#" )
        .def("IsPeriodicV",
             (Standard_Boolean (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Boolean (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::IsPeriodicV),
             R"#(True if periodic in V direction else False)#" )
        .def("NbKnotsU",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::NbKnotsU),
             R"#(returns number of knots in U direction KnotsU are numbered from -DegreeU)#" )
        .def("NbKnotsV",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::NbKnotsV),
             R"#(returns number of knots in V direction KnotsV are numbered from -DegreeV)#" )
        .def("KnotU",
             (Standard_Real (IGESGeom_BSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_BSplineSurface::*)( const Standard_Integer ) const>(&IGESGeom_BSplineSurface::KnotU),
             R"#(returns the value of knot referred to by anIndex in U direction raises exception if anIndex < -DegreeU() or anIndex > (NbKnotsU() - DegreeU()))#"  , py::arg("anIndex"))
        .def("KnotV",
             (Standard_Real (IGESGeom_BSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_BSplineSurface::*)( const Standard_Integer ) const>(&IGESGeom_BSplineSurface::KnotV),
             R"#(returns the value of knot referred to by anIndex in V direction raises exception if anIndex < -DegreeV() or anIndex > (NbKnotsV() - DegreeV()))#"  , py::arg("anIndex"))
        .def("NbPolesU",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::NbPolesU),
             R"#(returns number of poles in U direction)#" )
        .def("NbPolesV",
             (Standard_Integer (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::NbPolesV),
             R"#(returns number of poles in V direction)#" )
        .def("Weight",
             (Standard_Real (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_BSplineSurface::Weight),
             R"#(returns the weight referred to by anIndex1, anIndex2 raises exception if anIndex1 <= 0 or anIndex1 > NbPolesU() or if anIndex2 <= 0 or anIndex2 > NbPolesV())#"  , py::arg("anIndex1"),  py::arg("anIndex2"))
        .def("Pole",
             (gp_Pnt (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Pnt (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_BSplineSurface::Pole),
             R"#(returns the control point referenced by anIndex1, anIndex2 raises exception if anIndex1 <= 0 or anIndex1 > NbPolesU() or if anIndex2 <= 0 or anIndex2 > NbPolesV())#"  , py::arg("anIndex1"),  py::arg("anIndex2"))
        .def("TransformedPole",
             (gp_Pnt (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Pnt (IGESGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_BSplineSurface::TransformedPole),
             R"#(returns the control point referenced by anIndex1, anIndex2 after applying the Transf.Matrix raises exception if anIndex1 <= 0 or anIndex1 > NbPolesU() or if anIndex2 <= 0 or anIndex2 > NbPolesV())#"  , py::arg("anIndex1"),  py::arg("anIndex2"))
        .def("UMin",
             (Standard_Real (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Real (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::UMin),
             R"#(returns starting value in the U direction)#" )
        .def("UMax",
             (Standard_Real (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Real (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::UMax),
             R"#(returns ending value in the U direction)#" )
        .def("VMin",
             (Standard_Real (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Real (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::VMin),
             R"#(returns starting value in the V direction)#" )
        .def("VMax",
             (Standard_Real (IGESGeom_BSplineSurface::*)() const) static_cast<Standard_Real (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::VMax),
             R"#(returns ending value in the V direction)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_BSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_BSplineSurface::*)() const>(&IGESGeom_BSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_BSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_BSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Boundary ,opencascade::handle<IGESGeom_Boundary> , IGESData_IGESEntity>>(m.attr("IGESGeom_Boundary"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_Boundary::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_HArray1OfIGESEntity> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfIGESEntity> & ) ) static_cast<void (IGESGeom_Boundary::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_HArray1OfIGESEntity> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<IGESBasic_HArray1OfHArray1OfIGESEntity> & ) >(&IGESGeom_Boundary::Init),
             R"#(This method is used to set the fields of the class Boundary - aType : Type of bounded surface representation - aPreference : Preferred representation of Trimming Curve - aSurface : Untrimmed surface to be bounded - allModelCurves : Model Space Curves - allSenses : Orientation flags of all Model Space Curves - allParameterCurves : Parameter Space Curves raises exception if allSenses, allModelCurves and allParameterCurves do not have same dimensions)#"  , py::arg("aType"),  py::arg("aPreference"),  py::arg("aSurface"),  py::arg("allModelCurves"),  py::arg("allSenses"),  py::arg("allParameterCurves"))
        .def("BoundaryType",
             (Standard_Integer (IGESGeom_Boundary::*)() const) static_cast<Standard_Integer (IGESGeom_Boundary::*)() const>(&IGESGeom_Boundary::BoundaryType),
             R"#(returns type of bounded surface representation 0 = Boundary entities may only reference model space trimming curves. Associated surface representation may be parametric 1 = Boundary entities must reference model space curves and associated parameter space curve collections. Associated surface must be a parametric representation)#" )
        .def("PreferenceType",
             (Standard_Integer (IGESGeom_Boundary::*)() const) static_cast<Standard_Integer (IGESGeom_Boundary::*)() const>(&IGESGeom_Boundary::PreferenceType),
             R"#(returns preferred representation of trimming curves 0 = Unspecified 1 = Model space 2 = Parameter space 3 = Representations are of equal preference)#" )
        .def("Surface",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_Boundary::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_Boundary::*)() const>(&IGESGeom_Boundary::Surface),
             R"#(returns the surface to be bounded)#" )
        .def("NbModelSpaceCurves",
             (Standard_Integer (IGESGeom_Boundary::*)() const) static_cast<Standard_Integer (IGESGeom_Boundary::*)() const>(&IGESGeom_Boundary::NbModelSpaceCurves),
             R"#(returns the number of model space curves)#" )
        .def("ModelSpaceCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_Boundary::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_Boundary::*)( const Standard_Integer ) const>(&IGESGeom_Boundary::ModelSpaceCurve),
             R"#(returns Model Space Curve raises exception if Index <= 0 or Index > NbModelSpaceCurves())#"  , py::arg("Index"))
        .def("Sense",
             (Standard_Integer (IGESGeom_Boundary::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IGESGeom_Boundary::*)( const Standard_Integer ) const>(&IGESGeom_Boundary::Sense),
             R"#(returns the sense of a particular model space curve 1 = model curve direction does not need reversal 2 = model curve direction needs to be reversed raises exception if Index <= 0 or Index > NbModelSpaceCurves())#"  , py::arg("Index"))
        .def("NbParameterCurves",
             (Standard_Integer (IGESGeom_Boundary::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IGESGeom_Boundary::*)( const Standard_Integer ) const>(&IGESGeom_Boundary::NbParameterCurves),
             R"#(returns the number of parameter curves associated with one model space curve referred to by Index raises exception if Index <= 0 or Index > NbModelSpaceCurves())#"  , py::arg("Index"))
        .def("ParameterCurves",
             (opencascade::handle<IGESData_HArray1OfIGESEntity> (IGESGeom_Boundary::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_HArray1OfIGESEntity> (IGESGeom_Boundary::*)( const Standard_Integer ) const>(&IGESGeom_Boundary::ParameterCurves),
             R"#(returns an array of parameter space curves associated with a model space curve referred to by the Index raises exception if Index <= 0 or Index > NbModelSpaceCurves())#"  , py::arg("Index"))
        .def("ParameterCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_Boundary::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_Boundary::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_Boundary::ParameterCurve),
             R"#(returns an individual parameter curve raises exception if Index or Num is out of range)#"  , py::arg("Index"),  py::arg("Num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Boundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Boundary::*)() const>(&IGESGeom_Boundary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Boundary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_Boundary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_BoundedSurface ,opencascade::handle<IGESGeom_BoundedSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_BoundedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_BoundedSurface::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESGeom_HArray1OfBoundary> & ) ) static_cast<void (IGESGeom_BoundedSurface::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESGeom_HArray1OfBoundary> & ) >(&IGESGeom_BoundedSurface::Init),
             R"#(This method is used to set the fields of the class BoundedSurface - aType : Type of bounded surface representation - aSurface : Surface entity to be bounded - allBounds : Array of boundary entities)#"  , py::arg("aType"),  py::arg("aSurface"),  py::arg("allBounds"))
        .def("RepresentationType",
             (Standard_Integer (IGESGeom_BoundedSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BoundedSurface::*)() const>(&IGESGeom_BoundedSurface::RepresentationType),
             R"#(returns the type of Bounded surface representation 0 = The boundary entities may only reference model space curves 1 = The boundary entities may reference both model space curves and associated parameter space curve representations)#" )
        .def("Surface",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_BoundedSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_BoundedSurface::*)() const>(&IGESGeom_BoundedSurface::Surface),
             R"#(returns the bounded surface)#" )
        .def("NbBoundaries",
             (Standard_Integer (IGESGeom_BoundedSurface::*)() const) static_cast<Standard_Integer (IGESGeom_BoundedSurface::*)() const>(&IGESGeom_BoundedSurface::NbBoundaries),
             R"#(returns the number of boundaries)#" )
        .def("Boundary",
             (opencascade::handle<IGESGeom_Boundary> (IGESGeom_BoundedSurface::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESGeom_Boundary> (IGESGeom_BoundedSurface::*)( const Standard_Integer ) const>(&IGESGeom_BoundedSurface::Boundary),
             R"#(returns boundary entity raises exception if Index <= 0 or Index > NbBoundaries())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_BoundedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_BoundedSurface::*)() const>(&IGESGeom_BoundedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_BoundedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_BoundedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CircularArc ,opencascade::handle<IGESGeom_CircularArc> , IGESData_IGESEntity>>(m.attr("IGESGeom_CircularArc"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_CircularArc::*)( const Standard_Real , const gp_XY & , const gp_XY & , const gp_XY & ) ) static_cast<void (IGESGeom_CircularArc::*)( const Standard_Real , const gp_XY & , const gp_XY & , const gp_XY & ) >(&IGESGeom_CircularArc::Init),
             R"#(This method is used to set the fields of the class CircularArc - aZT : Shift above the Z plane - aCenter : Center of the circle of which the arc forms a part - aStart : Starting point of the circular arc - anEnd : Ending point of the circular arc)#"  , py::arg("aZT"),  py::arg("aCenter"),  py::arg("aStart"),  py::arg("anEnd"))
        .def("Center",
             (gp_Pnt2d (IGESGeom_CircularArc::*)() const) static_cast<gp_Pnt2d (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::Center),
             R"#(returns the center of the circle of which arc forms a part)#" )
        .def("TransformedCenter",
             (gp_Pnt (IGESGeom_CircularArc::*)() const) static_cast<gp_Pnt (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::TransformedCenter),
             R"#(returns the center of the circle of which arc forms a part after applying Transf. Matrix)#" )
        .def("StartPoint",
             (gp_Pnt2d (IGESGeom_CircularArc::*)() const) static_cast<gp_Pnt2d (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::StartPoint),
             R"#(returns the start point of the arc)#" )
        .def("TransformedStartPoint",
             (gp_Pnt (IGESGeom_CircularArc::*)() const) static_cast<gp_Pnt (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::TransformedStartPoint),
             R"#(returns the start point of the arc after applying Transf. Matrix)#" )
        .def("ZPlane",
             (Standard_Real (IGESGeom_CircularArc::*)() const) static_cast<Standard_Real (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::ZPlane),
             R"#(returns the parallel displacement of the plane containing the arc from the XT, YT plane)#" )
        .def("EndPoint",
             (gp_Pnt2d (IGESGeom_CircularArc::*)() const) static_cast<gp_Pnt2d (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::EndPoint),
             R"#(returns the end point of the arc)#" )
        .def("TransformedEndPoint",
             (gp_Pnt (IGESGeom_CircularArc::*)() const) static_cast<gp_Pnt (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::TransformedEndPoint),
             R"#(returns the end point of the arc after applying Transf. Matrix)#" )
        .def("Radius",
             (Standard_Real (IGESGeom_CircularArc::*)() const) static_cast<Standard_Real (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::Radius),
             R"#(returns the radius of the circle of which arc forms a part)#" )
        .def("Angle",
             (Standard_Real (IGESGeom_CircularArc::*)() const) static_cast<Standard_Real (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::Angle),
             R"#(returns the angle subtended by the arc at the center in radians)#" )
        .def("Axis",
             (gp_Dir (IGESGeom_CircularArc::*)() const) static_cast<gp_Dir (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::Axis),
             R"#(Z-Axis of circle (i.e. [0,0,1]))#" )
        .def("TransformedAxis",
             (gp_Dir (IGESGeom_CircularArc::*)() const) static_cast<gp_Dir (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::TransformedAxis),
             R"#(Z-Axis after applying Trans. Matrix)#" )
        .def("IsClosed",
             (Standard_Boolean (IGESGeom_CircularArc::*)() const) static_cast<Standard_Boolean (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::IsClosed),
             R"#(True if StartPoint = EndPoint)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CircularArc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CircularArc::*)() const>(&IGESGeom_CircularArc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CircularArc::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_CircularArc::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CompositeCurve ,opencascade::handle<IGESGeom_CompositeCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_CompositeCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_CompositeCurve::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ) ) static_cast<void (IGESGeom_CompositeCurve::*)( const opencascade::handle<IGESData_HArray1OfIGESEntity> & ) >(&IGESGeom_CompositeCurve::Init),
             R"#(This method is used to set the fields of the class CompositeCurve - allEntities : Constituent Entities of the composite curve)#"  , py::arg("allEntities"))
        .def("NbCurves",
             (Standard_Integer (IGESGeom_CompositeCurve::*)() const) static_cast<Standard_Integer (IGESGeom_CompositeCurve::*)() const>(&IGESGeom_CompositeCurve::NbCurves),
             R"#(returns the number of curves contained in the CompositeCurve)#" )
        .def("Curve",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_CompositeCurve::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_CompositeCurve::*)( const Standard_Integer ) const>(&IGESGeom_CompositeCurve::Curve),
             R"#(returns Component of the CompositeCurve (a curve or a point) raises exception if Index <= 0 or Index > NbCurves())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CompositeCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CompositeCurve::*)() const>(&IGESGeom_CompositeCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CompositeCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_CompositeCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ConicArc ,opencascade::handle<IGESGeom_ConicArc> , IGESData_IGESEntity>>(m.attr("IGESGeom_ConicArc"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_ConicArc::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const gp_XY & , const gp_XY & ) ) static_cast<void (IGESGeom_ConicArc::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const gp_XY & , const gp_XY & ) >(&IGESGeom_ConicArc::Init),
             R"#(This method is used to set the fields of the class ConicalArc - A, B, C, D, E, F : Coefficients of the equation defining conic arc - ZT : Parallel ZT displacement of the arc from XT, YT plane. - aStart : Starting point of the conic arc - anEnd : End point of the conic arc)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"),  py::arg("E"),  py::arg("F"),  py::arg("ZT"),  py::arg("aStart"),  py::arg("anEnd"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_ConicArc::*)() ) static_cast<Standard_Boolean (IGESGeom_ConicArc::*)() >(&IGESGeom_ConicArc::OwnCorrect),
             R"#(sets the Form Number equal to ComputedFormNumber, returns True if changed)#" )
        .def("ComputedFormNumber",
             (Standard_Integer (IGESGeom_ConicArc::*)() const) static_cast<Standard_Integer (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::ComputedFormNumber),
             R"#(Computes the Form Number according to the equation 1 for Ellipse, 2 for Hyperbola, 3 for Parabola)#" )
        .def("ZPlane",
             (Standard_Real (IGESGeom_ConicArc::*)() const) static_cast<Standard_Real (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::ZPlane),
             R"#(returns the Z displacement of the arc from XT, YT plane)#" )
        .def("StartPoint",
             (gp_Pnt2d (IGESGeom_ConicArc::*)() const) static_cast<gp_Pnt2d (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::StartPoint),
             R"#(returns the starting point of the arc)#" )
        .def("TransformedStartPoint",
             (gp_Pnt (IGESGeom_ConicArc::*)() const) static_cast<gp_Pnt (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::TransformedStartPoint),
             R"#(returns the starting point of the arc after applying Transf. Matrix)#" )
        .def("EndPoint",
             (gp_Pnt2d (IGESGeom_ConicArc::*)() const) static_cast<gp_Pnt2d (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::EndPoint),
             R"#(returns the end point of the arc)#" )
        .def("TransformedEndPoint",
             (gp_Pnt (IGESGeom_ConicArc::*)() const) static_cast<gp_Pnt (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::TransformedEndPoint),
             R"#(returns the end point of the arc after applying Transf. Matrix)#" )
        .def("IsFromEllipse",
             (Standard_Boolean (IGESGeom_ConicArc::*)() const) static_cast<Standard_Boolean (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::IsFromEllipse),
             R"#(returns True if parent conic curve is an ellipse)#" )
        .def("IsFromParabola",
             (Standard_Boolean (IGESGeom_ConicArc::*)() const) static_cast<Standard_Boolean (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::IsFromParabola),
             R"#(returns True if parent conic curve is a parabola)#" )
        .def("IsFromHyperbola",
             (Standard_Boolean (IGESGeom_ConicArc::*)() const) static_cast<Standard_Boolean (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::IsFromHyperbola),
             R"#(returns True if parent conic curve is a hyperbola)#" )
        .def("IsClosed",
             (Standard_Boolean (IGESGeom_ConicArc::*)() const) static_cast<Standard_Boolean (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::IsClosed),
             R"#(returns True if StartPoint = EndPoint)#" )
        .def("Axis",
             (gp_Dir (IGESGeom_ConicArc::*)() const) static_cast<gp_Dir (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::Axis),
             R"#(Z-Axis of conic (i.e. [0,0,1]))#" )
        .def("TransformedAxis",
             (gp_Dir (IGESGeom_ConicArc::*)() const) static_cast<gp_Dir (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::TransformedAxis),
             R"#(Z-Axis after applying Trans. Matrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_ConicArc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_ConicArc::*)() const>(&IGESGeom_ConicArc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Equation",
             []( IGESGeom_ConicArc &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; Standard_Real  E; Standard_Real  F; self.Equation(A,B,C,D,E,F); return std::make_tuple(A,B,C,D,E,F); },
             R"#(None)#" )
        .def("Definition",
             []( IGESGeom_ConicArc &self , gp_Pnt & Center,gp_Dir & MainAxis ){ Standard_Real  rmin; Standard_Real  rmax; self.Definition(Center,MainAxis,rmin,rmax); return std::make_tuple(rmin,rmax); },
             R"#(Returns a Definition computed from equation, easier to use <Center> : the center of the the conic (meaningless for a parabola) (defined with Z displacement) <MainAxis> : the Main Axis of the conic (for a Circle, arbitrary the X Axis) <Rmin,Rmax> : Minor and Major Radii of the conic For a Circle, Rmin = Rmax, For a Parabola, Rmin = Rmax = the Focal Warning : the basic definition (by equation) is not very stable, limit cases may be approximative)#"  , py::arg("Center"),  py::arg("MainAxis"))
        .def("TransformedDefinition",
             []( IGESGeom_ConicArc &self , gp_Pnt & Center,gp_Dir & MainAxis ){ Standard_Real  rmin; Standard_Real  rmax; self.TransformedDefinition(Center,MainAxis,rmin,rmax); return std::make_tuple(rmin,rmax); },
             R"#(Same as Definition, but the Location is applied on the Center and the MainAxis)#"  , py::arg("Center"),  py::arg("MainAxis"))
        .def("ComputedDefinition",
             []( IGESGeom_ConicArc &self   ){ Standard_Real  Xcen; Standard_Real  Ycen; Standard_Real  Xax; Standard_Real  Yax; Standard_Real  Rmin; Standard_Real  Rmax; self.ComputedDefinition(Xcen,Ycen,Xax,Yax,Rmin,Rmax); return std::make_tuple(Xcen,Ycen,Xax,Yax,Rmin,Rmax); },
             R"#(Computes and returns the coordinates of the definition of a comic from its equation. Used by Definition & TransformedDefinition, or may be called directly if needed)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_ConicArc::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_ConicArc::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CopiousData ,opencascade::handle<IGESGeom_CopiousData> , IGESData_IGESEntity>>(m.attr("IGESGeom_CopiousData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_CopiousData::*)( const Standard_Integer , const Standard_Real , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (IGESGeom_CopiousData::*)( const Standard_Integer , const Standard_Real , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&IGESGeom_CopiousData::Init),
             R"#(This method is used to set the fields of the class CopiousData - aDataType : Specifies whether data is a pair or a triple or a sextuple. - aZPlane : Common Z value for all points if datatype = 1 - allData : Data to be read in groups of 2, 3 or 6)#"  , py::arg("aDataType"),  py::arg("aZPlane"),  py::arg("allData"))
        .def("SetPolyline",
             (void (IGESGeom_CopiousData::*)( const Standard_Boolean ) ) static_cast<void (IGESGeom_CopiousData::*)( const Standard_Boolean ) >(&IGESGeom_CopiousData::SetPolyline),
             R"#(Sets Copious Data to be a Polyline if <mode> is True (Form = 11-12-13) or a Set of Points else (Form 1-2-3))#"  , py::arg("mode"))
        .def("SetClosedPath2D",
             (void (IGESGeom_CopiousData::*)() ) static_cast<void (IGESGeom_CopiousData::*)() >(&IGESGeom_CopiousData::SetClosedPath2D),
             R"#(Sets Copious Data to be a Closed Path 2D (Form 63) Warning : DataType is not checked and must be set to ONE by Init)#" )
        .def("IsPointSet",
             (Standard_Boolean (IGESGeom_CopiousData::*)() const) static_cast<Standard_Boolean (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::IsPointSet),
             R"#(Returns True if <me> is a Set of Points (Form 1-2-3))#" )
        .def("IsPolyline",
             (Standard_Boolean (IGESGeom_CopiousData::*)() const) static_cast<Standard_Boolean (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::IsPolyline),
             R"#(Returns True if <me> is a Polyline (Form 11-12-13))#" )
        .def("IsClosedPath2D",
             (Standard_Boolean (IGESGeom_CopiousData::*)() const) static_cast<Standard_Boolean (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::IsClosedPath2D),
             R"#(Returns True if <me> is a Closed Path 2D (Form 63))#" )
        .def("DataType",
             (Standard_Integer (IGESGeom_CopiousData::*)() const) static_cast<Standard_Integer (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::DataType),
             R"#(returns data type 1 = XY ( with common Z given by plane) 2 = XYZ ( point) 3 = XYZ + Vec(XYZ) (point + normal vector))#" )
        .def("NbPoints",
             (Standard_Integer (IGESGeom_CopiousData::*)() const) static_cast<Standard_Integer (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::NbPoints),
             R"#(returns the number of tuples)#" )
        .def("Data",
             (Standard_Real (IGESGeom_CopiousData::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_CopiousData::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_CopiousData::Data),
             R"#(Returns an individual Data, given the N0 of the Point and the B0 of the Coordinate (according DataType))#"  , py::arg("NumPoint"),  py::arg("NumData"))
        .def("ZPlane",
             (Standard_Real (IGESGeom_CopiousData::*)() const) static_cast<Standard_Real (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::ZPlane),
             R"#(If datatype = 1, then returns common z value for all data else returns 0)#" )
        .def("Point",
             (gp_Pnt (IGESGeom_CopiousData::*)( const Standard_Integer ) const) static_cast<gp_Pnt (IGESGeom_CopiousData::*)( const Standard_Integer ) const>(&IGESGeom_CopiousData::Point),
             R"#(returns the coordinates of the point specified by the anIndex raises exception if anIndex <= 0 or anIndex > NbPoints())#"  , py::arg("anIndex"))
        .def("TransformedPoint",
             (gp_Pnt (IGESGeom_CopiousData::*)( const Standard_Integer ) const) static_cast<gp_Pnt (IGESGeom_CopiousData::*)( const Standard_Integer ) const>(&IGESGeom_CopiousData::TransformedPoint),
             R"#(returns the coordinates of the point specified by the anIndex after applying Transf. Matrix raises exception if anIndex <= 0 or anIndex > NbPoints())#"  , py::arg("anIndex"))
        .def("Vector",
             (gp_Vec (IGESGeom_CopiousData::*)( const Standard_Integer ) const) static_cast<gp_Vec (IGESGeom_CopiousData::*)( const Standard_Integer ) const>(&IGESGeom_CopiousData::Vector),
             R"#(returns i, j, k values if 3-tuple else returns (0, 0, 0) raises exception if anIndex <= 0 or anIndex > NbPoints())#"  , py::arg("anIndex"))
        .def("TransformedVector",
             (gp_Vec (IGESGeom_CopiousData::*)( const Standard_Integer ) const) static_cast<gp_Vec (IGESGeom_CopiousData::*)( const Standard_Integer ) const>(&IGESGeom_CopiousData::TransformedVector),
             R"#(returns transformed vector if 3-tuple else returns (0, 0, 0) raises exception if anIndex <= 0 or anIndex > NbPoints())#"  , py::arg("anIndex"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CopiousData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CopiousData::*)() const>(&IGESGeom_CopiousData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CopiousData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_CopiousData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_CurveOnSurface ,opencascade::handle<IGESGeom_CurveOnSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_CurveOnSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_CurveOnSurface::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer ) ) static_cast<void (IGESGeom_CurveOnSurface::*)( const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer ) >(&IGESGeom_CurveOnSurface::Init),
             R"#(This method is used to set the fields of the class CurveOnSurface - aMode : Way the curve on the surface has been created - aSurface : Surface on which the curve lies - aCurveUV : Curve S (UV) - aCurve3D : Curve C (3D) - aPreference : 0 = Unspecified 1 = S o B is preferred 2 = C is preferred 3 = C and S o B are equally preferred)#"  , py::arg("aMode"),  py::arg("aSurface"),  py::arg("aCurveUV"),  py::arg("aCurve3D"),  py::arg("aPreference"))
        .def("CreationMode",
             (Standard_Integer (IGESGeom_CurveOnSurface::*)() const) static_cast<Standard_Integer (IGESGeom_CurveOnSurface::*)() const>(&IGESGeom_CurveOnSurface::CreationMode),
             R"#(returns the mode in which the curve is created on the surface 0 = Unspecified 1 = Projection of a given curve on the surface 2 = Intersection of two surfaces 3 = Isoparametric curve, i.e:- either a `u` parametric or a `v` parametric curve)#" )
        .def("Surface",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_CurveOnSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_CurveOnSurface::*)() const>(&IGESGeom_CurveOnSurface::Surface),
             R"#(returns the surface on which the curve lies)#" )
        .def("CurveUV",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_CurveOnSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_CurveOnSurface::*)() const>(&IGESGeom_CurveOnSurface::CurveUV),
             R"#(returns curve S)#" )
        .def("Curve3D",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_CurveOnSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_CurveOnSurface::*)() const>(&IGESGeom_CurveOnSurface::Curve3D),
             R"#(returns curve C)#" )
        .def("PreferenceMode",
             (Standard_Integer (IGESGeom_CurveOnSurface::*)() const) static_cast<Standard_Integer (IGESGeom_CurveOnSurface::*)() const>(&IGESGeom_CurveOnSurface::PreferenceMode),
             R"#(returns preference mode 0 = Unspecified 1 = S o B is preferred 2 = C is preferred 3 = C and S o B are equally preferred)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_CurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_CurveOnSurface::*)() const>(&IGESGeom_CurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_CurveOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_CurveOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Direction ,opencascade::handle<IGESGeom_Direction> , IGESData_IGESEntity>>(m.attr("IGESGeom_Direction"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_Direction::*)( const gp_XYZ & ) ) static_cast<void (IGESGeom_Direction::*)( const gp_XYZ & ) >(&IGESGeom_Direction::Init),
             R"#(This method is used to set the fields of the class Direction - aDirection : Direction ratios, Z is 0 by default)#"  , py::arg("aDirection"))
        .def("Value",
             (gp_Vec (IGESGeom_Direction::*)() const) static_cast<gp_Vec (IGESGeom_Direction::*)() const>(&IGESGeom_Direction::Value),
             R"#(None)#" )
        .def("TransformedValue",
             (gp_Vec (IGESGeom_Direction::*)() const) static_cast<gp_Vec (IGESGeom_Direction::*)() const>(&IGESGeom_Direction::TransformedValue),
             R"#(returns the Direction value after applying Transformation matrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Direction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Direction::*)() const>(&IGESGeom_Direction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Direction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_Direction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Flash ,opencascade::handle<IGESGeom_Flash> , IGESData_IGESEntity>>(m.attr("IGESGeom_Flash"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_Flash::*)( const gp_XY & , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<void (IGESGeom_Flash::*)( const gp_XY & , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESGeom_Flash::Init),
             R"#(This method is used to set the fields of the class Flash - aPoint : Reference of flash - aDim : First flash sizing parameter - anotherDim : Second flash sizing parameter - aRotation : Rotation of flash about reference point in radians - aReference : Pointer to the referenced entity or Null)#"  , py::arg("aPoint"),  py::arg("aDim"),  py::arg("anotherDim"),  py::arg("aRotation"),  py::arg("aReference"))
        .def("SetFormNumber",
             (void (IGESGeom_Flash::*)( const Standard_Integer ) ) static_cast<void (IGESGeom_Flash::*)( const Standard_Integer ) >(&IGESGeom_Flash::SetFormNumber),
             R"#(Changes FormNumber (indicates the Nature of the Flash : 0 Unspecified, then given by Reference, 1->4 various Specialisations (Circle,Rectangle, etc...) ) Error if not in range [0-4])#"  , py::arg("form"))
        .def("ReferencePoint",
             (gp_Pnt2d (IGESGeom_Flash::*)() const) static_cast<gp_Pnt2d (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::ReferencePoint),
             R"#(returns the referenced point, Z = 0 always)#" )
        .def("TransformedReferencePoint",
             (gp_Pnt (IGESGeom_Flash::*)() const) static_cast<gp_Pnt (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::TransformedReferencePoint),
             R"#(returns the referenced point after applying Transf. Matrix)#" )
        .def("Dimension1",
             (Standard_Real (IGESGeom_Flash::*)() const) static_cast<Standard_Real (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::Dimension1),
             R"#(returns first flash sizing parameter)#" )
        .def("Dimension2",
             (Standard_Real (IGESGeom_Flash::*)() const) static_cast<Standard_Real (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::Dimension2),
             R"#(returns second flash sizing parameter)#" )
        .def("Rotation",
             (Standard_Real (IGESGeom_Flash::*)() const) static_cast<Standard_Real (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::Rotation),
             R"#(returns the angle in radians of the rotation of flash about the reference point)#" )
        .def("ReferenceEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_Flash::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::ReferenceEntity),
             R"#(returns the referenced entity or Null handle.)#" )
        .def("HasReferenceEntity",
             (Standard_Boolean (IGESGeom_Flash::*)() const) static_cast<Standard_Boolean (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::HasReferenceEntity),
             R"#(returns True if referenced entity is present.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Flash::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Flash::*)() const>(&IGESGeom_Flash::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Flash::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_Flash::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_GeneralModule ,opencascade::handle<IGESGeom_GeneralModule> , IGESData_GeneralModule>>(m.attr("IGESGeom_GeneralModule"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_GeneralModule::get_type_descriptor),
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_Line::*)( const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (IGESGeom_Line::*)( const gp_XYZ & , const gp_XYZ & ) >(&IGESGeom_Line::Init),
             R"#(This method is used to set the fields of the class Line - aStart : Start point of the line - anEnd : End point of the line)#"  , py::arg("aStart"),  py::arg("anEnd"))
        .def("Infinite",
             (Standard_Integer (IGESGeom_Line::*)() const) static_cast<Standard_Integer (IGESGeom_Line::*)() const>(&IGESGeom_Line::Infinite),
             R"#(Returns the Infinite status i.e. the Form Number : 0 1 2)#" )
        .def("SetInfinite",
             (void (IGESGeom_Line::*)( const Standard_Integer ) ) static_cast<void (IGESGeom_Line::*)( const Standard_Integer ) >(&IGESGeom_Line::SetInfinite),
             R"#(Sets the Infinite status Does nothing if <status> is not 0 1 or 2)#"  , py::arg("status"))
        .def("StartPoint",
             (gp_Pnt (IGESGeom_Line::*)() const) static_cast<gp_Pnt (IGESGeom_Line::*)() const>(&IGESGeom_Line::StartPoint),
             R"#(returns the start point of the line)#" )
        .def("TransformedStartPoint",
             (gp_Pnt (IGESGeom_Line::*)() const) static_cast<gp_Pnt (IGESGeom_Line::*)() const>(&IGESGeom_Line::TransformedStartPoint),
             R"#(returns the start point of the line after applying Transf. Matrix)#" )
        .def("EndPoint",
             (gp_Pnt (IGESGeom_Line::*)() const) static_cast<gp_Pnt (IGESGeom_Line::*)() const>(&IGESGeom_Line::EndPoint),
             R"#(returns the end point of the line)#" )
        .def("TransformedEndPoint",
             (gp_Pnt (IGESGeom_Line::*)() const) static_cast<gp_Pnt (IGESGeom_Line::*)() const>(&IGESGeom_Line::TransformedEndPoint),
             R"#(returns the end point of the line after applying Transf. Matrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Line::*)() const>(&IGESGeom_Line::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Line::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_Line::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_OffsetCurve ,opencascade::handle<IGESGeom_OffsetCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_OffsetCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_OffsetCurve::*)( const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const gp_XYZ & , const Standard_Real , const Standard_Real ) ) static_cast<void (IGESGeom_OffsetCurve::*)( const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const gp_XYZ & , const Standard_Real , const Standard_Real ) >(&IGESGeom_OffsetCurve::Init),
             R"#(This method is used to set the fields of the class OffsetCurve - aBaseCurve : The curve entity to be offset - anOffsetType : Offset distance flag 1 = Single value, uniform distance 2 = Varying linearly 3 = As a specified function - aFunction : Curve entity, one coordinate of which describes offset as a function of its parameter (0 unless OffsetType = 3) - aFunctionCoord : Particular coordinate of curve describing offset as function of its parameters. (used if OffsetType = 3) - aTaperedOffsetType : Tapered offset type flag 1 = Function of arc length 2 = Function of parameter (Only used if OffsetType = 2 or 3) - offDistance1 : First offset distance (Only used if OffsetType = 1 or 2) - arcLength1 : Arc length or parameter value of first offset distance (Only used if OffsetType = 2) - offDistance2 : Second offset distance - arcLength2 : Arc length or parameter value of second offset distance (Only used if OffsetType = 2) - aNormalVec : Unit vector normal to plane containing curve to be offset - anOffsetParam : Start parameter value of offset curve - anotherOffsetParam : End parameter value of offset curve)#"  , py::arg("aBaseCurve"),  py::arg("anOffsetType"),  py::arg("aFunction"),  py::arg("aFunctionCoord"),  py::arg("aTaperedOffsetType"),  py::arg("offDistance1"),  py::arg("arcLength1"),  py::arg("offDistance2"),  py::arg("arcLength2"),  py::arg("aNormalVec"),  py::arg("anOffsetParam"),  py::arg("anotherOffsetParam"))
        .def("BaseCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_OffsetCurve::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::BaseCurve),
             R"#(returns the curve to be offset)#" )
        .def("OffsetType",
             (Standard_Integer (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Integer (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::OffsetType),
             R"#(returns the offset distance flag 1 = Single value offset (uniform distance) 2 = Offset distance varying linearly 3 = Offset distance specified as a function)#" )
        .def("Function",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_OffsetCurve::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::Function),
             R"#(returns the function defining the offset if at all the offset is described as a function or Null Handle.)#" )
        .def("HasFunction",
             (Standard_Boolean (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Boolean (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::HasFunction),
             R"#(returns True if function defining the offset is present.)#" )
        .def("FunctionParameter",
             (Standard_Integer (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Integer (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::FunctionParameter),
             R"#(returns particular coordinate of the curve which describes offset as a function of its parameters. (only used if OffsetType() = 3))#" )
        .def("TaperedOffsetType",
             (Standard_Integer (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Integer (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::TaperedOffsetType),
             R"#(returns tapered offset type flag (only used if OffsetType() = 2 or 3) 1 = Function of arc length 2 = Function of parameter)#" )
        .def("FirstOffsetDistance",
             (Standard_Real (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Real (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::FirstOffsetDistance),
             R"#(returns first offset distance (only used if OffsetType() = 1 or 2))#" )
        .def("ArcLength1",
             (Standard_Real (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Real (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::ArcLength1),
             R"#(returns arc length or parameter value (depending on value of offset distance flag) of first offset distance (only used if OffsetType() = 2))#" )
        .def("SecondOffsetDistance",
             (Standard_Real (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Real (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::SecondOffsetDistance),
             R"#(returns the second offset distance)#" )
        .def("ArcLength2",
             (Standard_Real (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Real (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::ArcLength2),
             R"#(returns arc length or parameter value (depending on value of offset distance flag) of second offset distance (only used if OffsetType() = 2))#" )
        .def("NormalVector",
             (gp_Vec (IGESGeom_OffsetCurve::*)() const) static_cast<gp_Vec (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::NormalVector),
             R"#(returns unit vector normal to plane containing curve to be offset)#" )
        .def("TransformedNormalVector",
             (gp_Vec (IGESGeom_OffsetCurve::*)() const) static_cast<gp_Vec (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::TransformedNormalVector),
             R"#(returns unit vector normal to plane containing curve to be offset after applying Transf. Matrix)#" )
        .def("StartParameter",
             (Standard_Real (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Real (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::StartParameter),
             R"#(returns Start Parameter value of the offset curve)#" )
        .def("EndParameter",
             (Standard_Real (IGESGeom_OffsetCurve::*)() const) static_cast<Standard_Real (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::EndParameter),
             R"#(returns End Parameter value of the offset curve)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_OffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_OffsetCurve::*)() const>(&IGESGeom_OffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( IGESGeom_OffsetCurve &self   ){ Standard_Real  StartParam; Standard_Real  EndParam; self.Parameters(StartParam,EndParam); return std::make_tuple(StartParam,EndParam); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_OffsetCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_OffsetCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_OffsetSurface ,opencascade::handle<IGESGeom_OffsetSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_OffsetSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_OffsetSurface::*)( const gp_XYZ & , const Standard_Real , const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<void (IGESGeom_OffsetSurface::*)( const gp_XYZ & , const Standard_Real , const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESGeom_OffsetSurface::Init),
             R"#(This method is used to set the fields of the class OffsetSurface - anIndicator : Offset indicator - aDistance : Offset distance - aSurface : Surface that is offset)#"  , py::arg("anIndicatoR"),  py::arg("aDistance"),  py::arg("aSurface"))
        .def("OffsetIndicator",
             (gp_Vec (IGESGeom_OffsetSurface::*)() const) static_cast<gp_Vec (IGESGeom_OffsetSurface::*)() const>(&IGESGeom_OffsetSurface::OffsetIndicator),
             R"#(returns the offset indicator)#" )
        .def("TransformedOffsetIndicator",
             (gp_Vec (IGESGeom_OffsetSurface::*)() const) static_cast<gp_Vec (IGESGeom_OffsetSurface::*)() const>(&IGESGeom_OffsetSurface::TransformedOffsetIndicator),
             R"#(returns the offset indicator after applying Transf. Matrix)#" )
        .def("Distance",
             (Standard_Real (IGESGeom_OffsetSurface::*)() const) static_cast<Standard_Real (IGESGeom_OffsetSurface::*)() const>(&IGESGeom_OffsetSurface::Distance),
             R"#(returns the distance by which surface is offset)#" )
        .def("Surface",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_OffsetSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_OffsetSurface::*)() const>(&IGESGeom_OffsetSurface::Surface),
             R"#(returns the surface that has been offset)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_OffsetSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_OffsetSurface::*)() const>(&IGESGeom_OffsetSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_OffsetSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_OffsetSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Plane ,opencascade::handle<IGESGeom_Plane> , IGESData_IGESEntity>>(m.attr("IGESGeom_Plane"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_Plane::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<IGESData_IGESEntity> & , const gp_XYZ & , const Standard_Real ) ) static_cast<void (IGESGeom_Plane::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<IGESData_IGESEntity> & , const gp_XYZ & , const Standard_Real ) >(&IGESGeom_Plane::Init),
             R"#(None)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"),  py::arg("aCurve"),  py::arg("attach"),  py::arg("aSize"))
        .def("SetFormNumber",
             (void (IGESGeom_Plane::*)( const Standard_Integer ) ) static_cast<void (IGESGeom_Plane::*)( const Standard_Integer ) >(&IGESGeom_Plane::SetFormNumber),
             R"#(Changes FormNumber (indicates the Type of Bound : 0 no Bound, 1 (External) Bound, -1 Hole) Remark that Init keeps this Value and must be consistent : aCurve Null if FormNumber = 0, Non-Null else Error if not in ranges [0-1] or [10-12])#"  , py::arg("form"))
        .def("HasBoundingCurve",
             (Standard_Boolean (IGESGeom_Plane::*)() const) static_cast<Standard_Boolean (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::HasBoundingCurve),
             R"#(returns True if there exists a bounding curve)#" )
        .def("HasBoundingCurveHole",
             (Standard_Boolean (IGESGeom_Plane::*)() const) static_cast<Standard_Boolean (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::HasBoundingCurveHole),
             R"#(returns True if bounding curve exists and bounded portion is negative)#" )
        .def("BoundingCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_Plane::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::BoundingCurve),
             R"#(returns Optional Bounding Curve, can be positive (normal clipping) or negative (hole) according to Form Number)#" )
        .def("HasSymbolAttach",
             (Standard_Boolean (IGESGeom_Plane::*)() const) static_cast<Standard_Boolean (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::HasSymbolAttach),
             R"#(returns True if SymbolSize() > 0, False if SymbolSize() = 0)#" )
        .def("SymbolAttach",
             (gp_Pnt (IGESGeom_Plane::*)() const) static_cast<gp_Pnt (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::SymbolAttach),
             R"#(returns (X, Y, Z) if symbol exists else returns (0, 0, 0))#" )
        .def("TransformedSymbolAttach",
             (gp_Pnt (IGESGeom_Plane::*)() const) static_cast<gp_Pnt (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::TransformedSymbolAttach),
             R"#(returns (X, Y, Z) if symbol exists after applying Transf. Matrix else returns (0, 0, 0))#" )
        .def("SymbolSize",
             (Standard_Real (IGESGeom_Plane::*)() const) static_cast<Standard_Real (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::SymbolSize),
             R"#(Size of optional display symbol)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Plane::*)() const>(&IGESGeom_Plane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Equation",
             []( IGESGeom_Plane &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; self.Equation(A,B,C,D); return std::make_tuple(A,B,C,D); },
             R"#(None)#" )
        .def("TransformedEquation",
             []( IGESGeom_Plane &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; self.TransformedEquation(A,B,C,D); return std::make_tuple(A,B,C,D); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Plane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_Plane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Point ,opencascade::handle<IGESGeom_Point> , IGESData_IGESEntity>>(m.attr("IGESGeom_Point"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_Point::*)( const gp_XYZ & , const opencascade::handle<IGESBasic_SubfigureDef> & ) ) static_cast<void (IGESGeom_Point::*)( const gp_XYZ & , const opencascade::handle<IGESBasic_SubfigureDef> & ) >(&IGESGeom_Point::Init),
             R"#(This method is used to set the fields of the class Point - aPoint : Coordinates of point - aSymbol : SubfigureDefinition entity specifying the display symbol if there exists one, or zero)#"  , py::arg("aPoint"),  py::arg("aSymbol"))
        .def("Value",
             (gp_Pnt (IGESGeom_Point::*)() const) static_cast<gp_Pnt (IGESGeom_Point::*)() const>(&IGESGeom_Point::Value),
             R"#(returns co-ordinates of the point)#" )
        .def("TransformedValue",
             (gp_Pnt (IGESGeom_Point::*)() const) static_cast<gp_Pnt (IGESGeom_Point::*)() const>(&IGESGeom_Point::TransformedValue),
             R"#(returns co-ordinates of the point after applying Transf. Matrix)#" )
        .def("HasDisplaySymbol",
             (Standard_Boolean (IGESGeom_Point::*)() const) static_cast<Standard_Boolean (IGESGeom_Point::*)() const>(&IGESGeom_Point::HasDisplaySymbol),
             R"#(returns True if symbol exists)#" )
        .def("DisplaySymbol",
             (opencascade::handle<IGESBasic_SubfigureDef> (IGESGeom_Point::*)() const) static_cast<opencascade::handle<IGESBasic_SubfigureDef> (IGESGeom_Point::*)() const>(&IGESGeom_Point::DisplaySymbol),
             R"#(returns display symbol entity if it exists)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_Point::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_Point::*)() const>(&IGESGeom_Point::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_Point::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_Point::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_Protocol ,opencascade::handle<IGESGeom_Protocol> , IGESData_Protocol>>(m.attr("IGESGeom_Protocol"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ReadWriteModule ,opencascade::handle<IGESGeom_ReadWriteModule> , IGESData_ReadWriteModule>>(m.attr("IGESGeom_ReadWriteModule"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_RuledSurface ,opencascade::handle<IGESGeom_RuledSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_RuledSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_RuledSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (IGESGeom_RuledSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const Standard_Integer ) >(&IGESGeom_RuledSurface::Init),
             R"#(This method is used to set the fields of the class RuledSurface - aCurve : First parametric curve - anotherCurve : Second parametric curve - aDirFlag : Direction Flag 0 = Join first to first, last to last 1 = Join first to last, last to first - aDevFlag : Developable Surface Flag 1 = Developable 0 = Possibly not)#"  , py::arg("aCurve"),  py::arg("anotherCurve"),  py::arg("aDirFlag"),  py::arg("aDevFlag"))
        .def("SetRuledByParameter",
             (void (IGESGeom_RuledSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESGeom_RuledSurface::*)( const Standard_Boolean ) >(&IGESGeom_RuledSurface::SetRuledByParameter),
             R"#(Sets <me> to be Ruled by Parameter (Form 1) if <mode> is True, or Ruled by Length (Form 0) else)#"  , py::arg("mode"))
        .def("IsRuledByParameter",
             (Standard_Boolean (IGESGeom_RuledSurface::*)() const) static_cast<Standard_Boolean (IGESGeom_RuledSurface::*)() const>(&IGESGeom_RuledSurface::IsRuledByParameter),
             R"#(Returns True if Form is 1)#" )
        .def("FirstCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_RuledSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_RuledSurface::*)() const>(&IGESGeom_RuledSurface::FirstCurve),
             R"#(returns the first curve)#" )
        .def("SecondCurve",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_RuledSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_RuledSurface::*)() const>(&IGESGeom_RuledSurface::SecondCurve),
             R"#(returns the second curve)#" )
        .def("DirectionFlag",
             (Standard_Integer (IGESGeom_RuledSurface::*)() const) static_cast<Standard_Integer (IGESGeom_RuledSurface::*)() const>(&IGESGeom_RuledSurface::DirectionFlag),
             R"#(return the sense of direction 0 = Join first to first, last to last 1 = Join first to last, last to first)#" )
        .def("IsDevelopable",
             (Standard_Boolean (IGESGeom_RuledSurface::*)() const) static_cast<Standard_Boolean (IGESGeom_RuledSurface::*)() const>(&IGESGeom_RuledSurface::IsDevelopable),
             R"#(returns True if developable else False)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_RuledSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_RuledSurface::*)() const>(&IGESGeom_RuledSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_RuledSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_RuledSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SpecificModule ,opencascade::handle<IGESGeom_SpecificModule> , IGESData_SpecificModule>>(m.attr("IGESGeom_SpecificModule"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SplineCurve ,opencascade::handle<IGESGeom_SplineCurve> , IGESData_IGESEntity>>(m.attr("IGESGeom_SplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_SplineCurve::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (IGESGeom_SplineCurve::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColStd_HArray2OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&IGESGeom_SplineCurve::Init),
             R"#(This method is used to set the fields of the class SplineCurve - aType : Spline Type 1 = Linear 2 = Quadratic 3 = Cubic 4 = Wilson-Fowler 5 = Modified Wilson-Fowler 6 = B Spline - aDegree : Degree of continuity w.r.t. arc length - nbDimensions : Number of dimensions 2 = Planar 3 = Non-planar - allBreakPoints : Array of break points - allXPolynomials : X coordinate polynomials of segments - allYPolynomials : Y coordinate polynomials of segments - allZPolynomials : Z coordinate polynomials of segments - allXValues : Values of 1st, 2nd, 3rd derivatives of X polynomials at the terminate point and values of X at terminate point - allYValues : Values of 1st, 2nd, 3rd derivatives of Y polynomials at the terminate point and values of Y at terminate point - allZvalues : Values of 1st, 2nd, 3rd derivatives of Z polynomials at the terminate point and values of Z at terminate point raises exception if allXPolynomials, allYPolynomials & allZPolynomials are not of same size OR allXValues, allYValues & allZValues are not of size 4)#"  , py::arg("aType"),  py::arg("aDegree"),  py::arg("nbDimensions"),  py::arg("allBreakPoints"),  py::arg("allXPolynomials"),  py::arg("allYPolynomials"),  py::arg("allZPolynomials"),  py::arg("allXvalues"),  py::arg("allYvalues"),  py::arg("allZvalues"))
        .def("SplineType",
             (Standard_Integer (IGESGeom_SplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_SplineCurve::*)() const>(&IGESGeom_SplineCurve::SplineType),
             R"#(returns the type of Spline curve)#" )
        .def("Degree",
             (Standard_Integer (IGESGeom_SplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_SplineCurve::*)() const>(&IGESGeom_SplineCurve::Degree),
             R"#(returns the degree of the curve)#" )
        .def("NbDimensions",
             (Standard_Integer (IGESGeom_SplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_SplineCurve::*)() const>(&IGESGeom_SplineCurve::NbDimensions),
             R"#(returns the number of dimensions 2 = Planar 3 = Non-planar)#" )
        .def("NbSegments",
             (Standard_Integer (IGESGeom_SplineCurve::*)() const) static_cast<Standard_Integer (IGESGeom_SplineCurve::*)() const>(&IGESGeom_SplineCurve::NbSegments),
             R"#(returns the number of segments)#" )
        .def("BreakPoint",
             (Standard_Real (IGESGeom_SplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_SplineCurve::*)( const Standard_Integer ) const>(&IGESGeom_SplineCurve::BreakPoint),
             R"#(returns breakpoint of piecewise polynomial raises exception if Index <= 0 or Index > NbSegments() + 1)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_SplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_SplineCurve::*)() const>(&IGESGeom_SplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("XCoordPolynomial",
             []( IGESGeom_SplineCurve &self , const Standard_Integer Index ){ Standard_Real  AX; Standard_Real  BX; Standard_Real  CX; Standard_Real  DX; self.XCoordPolynomial(Index,AX,BX,CX,DX); return std::make_tuple(AX,BX,CX,DX); },
             R"#(returns X coordinate polynomial for segment referred to by Index raises exception if Index <= 0 or Index > NbSegments())#"  , py::arg("Index"))
        .def("YCoordPolynomial",
             []( IGESGeom_SplineCurve &self , const Standard_Integer Index ){ Standard_Real  AY; Standard_Real  BY; Standard_Real  CY; Standard_Real  DY; self.YCoordPolynomial(Index,AY,BY,CY,DY); return std::make_tuple(AY,BY,CY,DY); },
             R"#(returns Y coordinate polynomial for segment referred to by Index raises exception if Index <= 0 or Index > NbSegments())#"  , py::arg("Index"))
        .def("ZCoordPolynomial",
             []( IGESGeom_SplineCurve &self , const Standard_Integer Index ){ Standard_Real  AZ; Standard_Real  BZ; Standard_Real  CZ; Standard_Real  DZ; self.ZCoordPolynomial(Index,AZ,BZ,CZ,DZ); return std::make_tuple(AZ,BZ,CZ,DZ); },
             R"#(returns Z coordinate polynomial for segment referred to by Index raises exception if Index <= 0 or Index > NbSegments())#"  , py::arg("Index"))
        .def("XValues",
             []( IGESGeom_SplineCurve &self   ){ Standard_Real  TPX0; Standard_Real  TPX1; Standard_Real  TPX2; Standard_Real  TPX3; self.XValues(TPX0,TPX1,TPX2,TPX3); return std::make_tuple(TPX0,TPX1,TPX2,TPX3); },
             R"#(returns the value of X polynomial, the values of 1st, 2nd and 3rd derivatives of the X polynomial at the terminate point)#" )
        .def("YValues",
             []( IGESGeom_SplineCurve &self   ){ Standard_Real  TPY0; Standard_Real  TPY1; Standard_Real  TPY2; Standard_Real  TPY3; self.YValues(TPY0,TPY1,TPY2,TPY3); return std::make_tuple(TPY0,TPY1,TPY2,TPY3); },
             R"#(returns the value of Y polynomial, the values of 1st, 2nd and 3rd derivatives of the Y polynomial at the termminate point)#" )
        .def("ZValues",
             []( IGESGeom_SplineCurve &self   ){ Standard_Real  TPZ0; Standard_Real  TPZ1; Standard_Real  TPZ2; Standard_Real  TPZ3; self.ZValues(TPZ0,TPZ1,TPZ2,TPZ3); return std::make_tuple(TPZ0,TPZ1,TPZ2,TPZ3); },
             R"#(returns the value of Z polynomial, the values of 1st, 2nd and 3rd derivatives of the Z polynomial at the termminate point)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_SplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_SplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SplineSurface ,opencascade::handle<IGESGeom_SplineSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_SplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , const opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , const opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & ) ) static_cast<void (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , const opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , const opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & ) >(&IGESGeom_SplineSurface::Init),
             R"#(This method is used to set the fields of the class SplineSurface - aBoundaryType : Type of Spline boundary 1 = Linear 2 = Quadratic 3 = Cubic 4 = Wilson-Fowler 5 = Modified Wilson-Fowler 6 = B-spline - aPatchType : Type of patch contained in the grid 1 = Cartesian Product 0 = Unspecified - allUBreakpoints : u values of grid lines - allVBreakpoints : v values of grid lines - allXCoeffs : X coefficients of M x N patches - allYCoeffs : Y coefficients of M x N patches - allZCoeffs : Z coefficients of M x N patches raises exception if allXCoeffs, allYCoeffs & allZCoeffs are not of the same size. or if the size of each element of the double array is not 16)#"  , py::arg("aBoundaryType"),  py::arg("aPatchType"),  py::arg("allUBreakpoints"),  py::arg("allVBreakpoints"),  py::arg("allXCoeffs"),  py::arg("allYCoeffs"),  py::arg("allZCoeffs"))
        .def("NbUSegments",
             (Standard_Integer (IGESGeom_SplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_SplineSurface::*)() const>(&IGESGeom_SplineSurface::NbUSegments),
             R"#(returns the number of U segments)#" )
        .def("NbVSegments",
             (Standard_Integer (IGESGeom_SplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_SplineSurface::*)() const>(&IGESGeom_SplineSurface::NbVSegments),
             R"#(returns the number of V segments)#" )
        .def("BoundaryType",
             (Standard_Integer (IGESGeom_SplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_SplineSurface::*)() const>(&IGESGeom_SplineSurface::BoundaryType),
             R"#(returns boundary type)#" )
        .def("PatchType",
             (Standard_Integer (IGESGeom_SplineSurface::*)() const) static_cast<Standard_Integer (IGESGeom_SplineSurface::*)() const>(&IGESGeom_SplineSurface::PatchType),
             R"#(returns patch type)#" )
        .def("UBreakPoint",
             (Standard_Real (IGESGeom_SplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_SplineSurface::*)( const Standard_Integer ) const>(&IGESGeom_SplineSurface::UBreakPoint),
             R"#(returns U break point of the grid line referred to by anIndex raises exception if anIndex <= 0 or anIndex > NbUSegments() + 1)#"  , py::arg("anIndex"))
        .def("VBreakPoint",
             (Standard_Real (IGESGeom_SplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_SplineSurface::*)( const Standard_Integer ) const>(&IGESGeom_SplineSurface::VBreakPoint),
             R"#(returns V break point of the grid line referred to by anIndex raises exception if anIndex <= 0 or anIndex > NbVSegments() + 1)#"  , py::arg("anIndex"))
        .def("XPolynomial",
             (opencascade::handle<TColStd_HArray1OfReal> (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_SplineSurface::XPolynomial),
             R"#(returns X polynomial of patch referred to by anIndex1, anIndex2 raises exception if anIndex1 <= 0 or anIndex1 > NbUSegments() or anIndex2 <= 0 or anIndex2 > NbVSegments())#"  , py::arg("anIndex1"),  py::arg("anIndex2"))
        .def("YPolynomial",
             (opencascade::handle<TColStd_HArray1OfReal> (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_SplineSurface::YPolynomial),
             R"#(returns Y polynomial of patch referred to by anIndex1, anIndex2 raises exception if anIndex1 <= 0 or anIndex1 > NbUSegments() or anIndex2 <= 0 or anIndex2 > NbVSegments())#"  , py::arg("anIndex1"),  py::arg("anIndex2"))
        .def("ZPolynomial",
             (opencascade::handle<TColStd_HArray1OfReal> (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (IGESGeom_SplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_SplineSurface::ZPolynomial),
             R"#(returns Z polynomial of patch referred to by anIndex1, anIndex2 raises exception if anIndex1 <= 0 or anIndex1 > NbUSegments() or anIndex2 <= 0 or anIndex2 > NbVSegments())#"  , py::arg("anIndex1"),  py::arg("anIndex2"))
        .def("Polynomials",
             (void (IGESGeom_SplineSurface::*)( opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & ) const) static_cast<void (IGESGeom_SplineSurface::*)( opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & , opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> & ) const>(&IGESGeom_SplineSurface::Polynomials),
             R"#(returns in one all the polynomial values "in bulk" usefull for massive treatements)#"  , py::arg("XCoef"),  py::arg("YCoef"),  py::arg("ZCoef"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_SplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_SplineSurface::*)() const>(&IGESGeom_SplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_SplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_SplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_SurfaceOfRevolution ,opencascade::handle<IGESGeom_SurfaceOfRevolution> , IGESData_IGESEntity>>(m.attr("IGESGeom_SurfaceOfRevolution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_SurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_Line> & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Real , const Standard_Real ) ) static_cast<void (IGESGeom_SurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_Line> & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Real , const Standard_Real ) >(&IGESGeom_SurfaceOfRevolution::Init),
             R"#(This method is used to set the fields of the class Line - anAxis : Axis of revolution - aGeneratrix : The curve which is revolved about the axis - aStartAngle : Start angle of the surface of revolution - anEndAngle : End angle of the surface of revolution)#"  , py::arg("anAxis"),  py::arg("aGeneratrix"),  py::arg("aStartAngle"),  py::arg("anEndAngle"))
        .def("AxisOfRevolution",
             (opencascade::handle<IGESGeom_Line> (IGESGeom_SurfaceOfRevolution::*)() const) static_cast<opencascade::handle<IGESGeom_Line> (IGESGeom_SurfaceOfRevolution::*)() const>(&IGESGeom_SurfaceOfRevolution::AxisOfRevolution),
             R"#(returns the axis of revolution)#" )
        .def("Generatrix",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_SurfaceOfRevolution::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_SurfaceOfRevolution::*)() const>(&IGESGeom_SurfaceOfRevolution::Generatrix),
             R"#(returns the curve which is revolved about the axis)#" )
        .def("StartAngle",
             (Standard_Real (IGESGeom_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (IGESGeom_SurfaceOfRevolution::*)() const>(&IGESGeom_SurfaceOfRevolution::StartAngle),
             R"#(returns start angle of revolution)#" )
        .def("EndAngle",
             (Standard_Real (IGESGeom_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (IGESGeom_SurfaceOfRevolution::*)() const>(&IGESGeom_SurfaceOfRevolution::EndAngle),
             R"#(returns end angle of revolution)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_SurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_SurfaceOfRevolution::*)() const>(&IGESGeom_SurfaceOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_SurfaceOfRevolution::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_SurfaceOfRevolution::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_TabulatedCylinder ,opencascade::handle<IGESGeom_TabulatedCylinder> , IGESData_IGESEntity>>(m.attr("IGESGeom_TabulatedCylinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_TabulatedCylinder::*)( const opencascade::handle<IGESData_IGESEntity> & , const gp_XYZ & ) ) static_cast<void (IGESGeom_TabulatedCylinder::*)( const opencascade::handle<IGESData_IGESEntity> & , const gp_XYZ & ) >(&IGESGeom_TabulatedCylinder::Init),
             R"#(This method is used to set the fields of the class TabulatedCylinder - aDirectrix : Directrix Curve of the tabulated cylinder - anEnd : Coordinates of the terminate point of the generatrix The start point of the directrix is identical to the start point of the generatrix)#"  , py::arg("aDirectrix"),  py::arg("anEnd"))
        .def("Directrix",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_TabulatedCylinder::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_TabulatedCylinder::*)() const>(&IGESGeom_TabulatedCylinder::Directrix),
             R"#(returns the directrix curve of the tabulated cylinder)#" )
        .def("EndPoint",
             (gp_Pnt (IGESGeom_TabulatedCylinder::*)() const) static_cast<gp_Pnt (IGESGeom_TabulatedCylinder::*)() const>(&IGESGeom_TabulatedCylinder::EndPoint),
             R"#(returns end point of generatrix of the tabulated cylinder)#" )
        .def("TransformedEndPoint",
             (gp_Pnt (IGESGeom_TabulatedCylinder::*)() const) static_cast<gp_Pnt (IGESGeom_TabulatedCylinder::*)() const>(&IGESGeom_TabulatedCylinder::TransformedEndPoint),
             R"#(returns end point of generatrix of the tabulated cylinder after applying Transf. Matrix)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_TabulatedCylinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_TabulatedCylinder::*)() const>(&IGESGeom_TabulatedCylinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_TabulatedCylinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_TabulatedCylinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBSplineCurve , shared_ptr<IGESGeom_ToolBSplineCurve> >>(m.attr("IGESGeom_ToolBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolBSplineCurve::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolBSplineCurve::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolBSplineCurve::OwnShared),
             R"#(Lists the Entities shared by a BSplineCurve <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & ) const>(&IGESGeom_ToolBSplineCurve::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolBSplineCurve::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const opencascade::handle<IGESGeom_BSplineCurve> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const opencascade::handle<IGESGeom_BSplineCurve> & , Interface_CopyTool & ) const>(&IGESGeom_ToolBSplineCurve::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolBSplineCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolBSplineCurve::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBSplineSurface , shared_ptr<IGESGeom_ToolBSplineSurface> >>(m.attr("IGESGeom_ToolBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolBSplineSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolBSplineSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolBSplineSurface::OwnShared),
             R"#(Lists the Entities shared by a BSplineSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & ) const>(&IGESGeom_ToolBSplineSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolBSplineSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const opencascade::handle<IGESGeom_BSplineSurface> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const opencascade::handle<IGESGeom_BSplineSurface> & , Interface_CopyTool & ) const>(&IGESGeom_ToolBSplineSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolBSplineSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolBSplineSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBoundary , shared_ptr<IGESGeom_ToolBoundary> >>(m.attr("IGESGeom_ToolBoundary"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolBoundary::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolBoundary::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolBoundary::OwnShared),
             R"#(Lists the Entities shared by a Boundary <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & ) const) static_cast<Standard_Boolean (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & ) const>(&IGESGeom_ToolBoundary::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Boundary (if BoundaryType = 0, Nullify all ParameterCurves))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & ) const>(&IGESGeom_ToolBoundary::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolBoundary::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const opencascade::handle<IGESGeom_Boundary> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const opencascade::handle<IGESGeom_Boundary> & , Interface_CopyTool & ) const>(&IGESGeom_ToolBoundary::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolBoundary::*)( const opencascade::handle<IGESGeom_Boundary> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolBoundary::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolBoundedSurface , shared_ptr<IGESGeom_ToolBoundedSurface> >>(m.attr("IGESGeom_ToolBoundedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolBoundedSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolBoundedSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolBoundedSurface::OwnShared),
             R"#(Lists the Entities shared by a BoundedSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & ) const>(&IGESGeom_ToolBoundedSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolBoundedSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const opencascade::handle<IGESGeom_BoundedSurface> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const opencascade::handle<IGESGeom_BoundedSurface> & , Interface_CopyTool & ) const>(&IGESGeom_ToolBoundedSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolBoundedSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolBoundedSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCircularArc , shared_ptr<IGESGeom_ToolCircularArc> >>(m.attr("IGESGeom_ToolCircularArc"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolCircularArc::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolCircularArc::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolCircularArc::OwnShared),
             R"#(Lists the Entities shared by a CircularArc <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & ) const>(&IGESGeom_ToolCircularArc::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolCircularArc::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const opencascade::handle<IGESGeom_CircularArc> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const opencascade::handle<IGESGeom_CircularArc> & , Interface_CopyTool & ) const>(&IGESGeom_ToolCircularArc::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolCircularArc::*)( const opencascade::handle<IGESGeom_CircularArc> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolCircularArc::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCompositeCurve , shared_ptr<IGESGeom_ToolCompositeCurve> >>(m.attr("IGESGeom_ToolCompositeCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolCompositeCurve::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolCompositeCurve::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolCompositeCurve::OwnShared),
             R"#(Lists the Entities shared by a CompositeCurve <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & ) const>(&IGESGeom_ToolCompositeCurve::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolCompositeCurve::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const opencascade::handle<IGESGeom_CompositeCurve> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const opencascade::handle<IGESGeom_CompositeCurve> & , Interface_CopyTool & ) const>(&IGESGeom_ToolCompositeCurve::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolCompositeCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolCompositeCurve::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolConicArc , shared_ptr<IGESGeom_ToolConicArc> >>(m.attr("IGESGeom_ToolConicArc"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolConicArc::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolConicArc::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolConicArc::OwnShared),
             R"#(Lists the Entities shared by a ConicArc <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & ) const) static_cast<Standard_Boolean (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & ) const>(&IGESGeom_ToolConicArc::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a ConicArc (FormNumber recomputed according case Ellips-Parab-Hyperb))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & ) const>(&IGESGeom_ToolConicArc::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolConicArc::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const opencascade::handle<IGESGeom_ConicArc> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const opencascade::handle<IGESGeom_ConicArc> & , Interface_CopyTool & ) const>(&IGESGeom_ToolConicArc::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolConicArc::*)( const opencascade::handle<IGESGeom_ConicArc> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolConicArc::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCopiousData , shared_ptr<IGESGeom_ToolCopiousData> >>(m.attr("IGESGeom_ToolCopiousData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolCopiousData::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolCopiousData::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolCopiousData::OwnShared),
             R"#(Lists the Entities shared by a CopiousData <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & ) const>(&IGESGeom_ToolCopiousData::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolCopiousData::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const opencascade::handle<IGESGeom_CopiousData> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const opencascade::handle<IGESGeom_CopiousData> & , Interface_CopyTool & ) const>(&IGESGeom_ToolCopiousData::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolCopiousData::*)( const opencascade::handle<IGESGeom_CopiousData> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolCopiousData::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolCurveOnSurface , shared_ptr<IGESGeom_ToolCurveOnSurface> >>(m.attr("IGESGeom_ToolCurveOnSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolCurveOnSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolCurveOnSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolCurveOnSurface::OwnShared),
             R"#(Lists the Entities shared by a CurveOnSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & ) const) static_cast<Standard_Boolean (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & ) const>(&IGESGeom_ToolCurveOnSurface::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a CurveOnSurface (its CurveUV must have UseFlag at 5))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & ) const>(&IGESGeom_ToolCurveOnSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolCurveOnSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const opencascade::handle<IGESGeom_CurveOnSurface> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const opencascade::handle<IGESGeom_CurveOnSurface> & , Interface_CopyTool & ) const>(&IGESGeom_ToolCurveOnSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolCurveOnSurface::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolCurveOnSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolDirection , shared_ptr<IGESGeom_ToolDirection> >>(m.attr("IGESGeom_ToolDirection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolDirection::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolDirection::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolDirection::OwnShared),
             R"#(Lists the Entities shared by a Direction <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & ) const>(&IGESGeom_ToolDirection::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolDirection::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const opencascade::handle<IGESGeom_Direction> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const opencascade::handle<IGESGeom_Direction> & , Interface_CopyTool & ) const>(&IGESGeom_ToolDirection::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolDirection::*)( const opencascade::handle<IGESGeom_Direction> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolDirection::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolFlash , shared_ptr<IGESGeom_ToolFlash> >>(m.attr("IGESGeom_ToolFlash"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolFlash::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolFlash::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolFlash::OwnShared),
             R"#(Lists the Entities shared by a Flash <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & ) const) static_cast<Standard_Boolean (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & ) const>(&IGESGeom_ToolFlash::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a Flash (LineFont in Directory Entry forced to Rank = 1))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & ) const>(&IGESGeom_ToolFlash::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolFlash::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const opencascade::handle<IGESGeom_Flash> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const opencascade::handle<IGESGeom_Flash> & , Interface_CopyTool & ) const>(&IGESGeom_ToolFlash::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolFlash::*)( const opencascade::handle<IGESGeom_Flash> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolFlash::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolLine , shared_ptr<IGESGeom_ToolLine> >>(m.attr("IGESGeom_ToolLine"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolLine::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolLine::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolLine::OwnShared),
             R"#(Lists the Entities shared by a Line <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & ) const>(&IGESGeom_ToolLine::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolLine::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const opencascade::handle<IGESGeom_Line> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const opencascade::handle<IGESGeom_Line> & , Interface_CopyTool & ) const>(&IGESGeom_ToolLine::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolLine::*)( const opencascade::handle<IGESGeom_Line> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolLine::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolOffsetCurve , shared_ptr<IGESGeom_ToolOffsetCurve> >>(m.attr("IGESGeom_ToolOffsetCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolOffsetCurve::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolOffsetCurve::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolOffsetCurve::OwnShared),
             R"#(Lists the Entities shared by a OffsetCurve <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & ) const) static_cast<Standard_Boolean (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & ) const>(&IGESGeom_ToolOffsetCurve::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a OffsetCurve (if OffsetType is not 3, OffsetFunction is cleared))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & ) const>(&IGESGeom_ToolOffsetCurve::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolOffsetCurve::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const opencascade::handle<IGESGeom_OffsetCurve> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const opencascade::handle<IGESGeom_OffsetCurve> & , Interface_CopyTool & ) const>(&IGESGeom_ToolOffsetCurve::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolOffsetCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolOffsetCurve::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolOffsetSurface , shared_ptr<IGESGeom_ToolOffsetSurface> >>(m.attr("IGESGeom_ToolOffsetSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolOffsetSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolOffsetSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolOffsetSurface::OwnShared),
             R"#(Lists the Entities shared by a OffsetSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & ) const>(&IGESGeom_ToolOffsetSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolOffsetSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const opencascade::handle<IGESGeom_OffsetSurface> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const opencascade::handle<IGESGeom_OffsetSurface> & , Interface_CopyTool & ) const>(&IGESGeom_ToolOffsetSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolOffsetSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolOffsetSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolPlane , shared_ptr<IGESGeom_ToolPlane> >>(m.attr("IGESGeom_ToolPlane"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolPlane::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolPlane::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolPlane::OwnShared),
             R"#(Lists the Entities shared by a Plane <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & ) const>(&IGESGeom_ToolPlane::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolPlane::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const opencascade::handle<IGESGeom_Plane> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const opencascade::handle<IGESGeom_Plane> & , Interface_CopyTool & ) const>(&IGESGeom_ToolPlane::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolPlane::*)( const opencascade::handle<IGESGeom_Plane> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolPlane::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolPoint , shared_ptr<IGESGeom_ToolPoint> >>(m.attr("IGESGeom_ToolPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolPoint::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolPoint::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolPoint::OwnShared),
             R"#(Lists the Entities shared by a Point <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & ) const>(&IGESGeom_ToolPoint::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolPoint::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const opencascade::handle<IGESGeom_Point> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const opencascade::handle<IGESGeom_Point> & , Interface_CopyTool & ) const>(&IGESGeom_ToolPoint::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolPoint::*)( const opencascade::handle<IGESGeom_Point> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolPoint::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolRuledSurface , shared_ptr<IGESGeom_ToolRuledSurface> >>(m.attr("IGESGeom_ToolRuledSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolRuledSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolRuledSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolRuledSurface::OwnShared),
             R"#(Lists the Entities shared by a RuledSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & ) const>(&IGESGeom_ToolRuledSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolRuledSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const opencascade::handle<IGESGeom_RuledSurface> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const opencascade::handle<IGESGeom_RuledSurface> & , Interface_CopyTool & ) const>(&IGESGeom_ToolRuledSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolRuledSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolRuledSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolSplineCurve , shared_ptr<IGESGeom_ToolSplineCurve> >>(m.attr("IGESGeom_ToolSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolSplineCurve::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolSplineCurve::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolSplineCurve::OwnShared),
             R"#(Lists the Entities shared by a SplineCurve <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & ) const>(&IGESGeom_ToolSplineCurve::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolSplineCurve::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const opencascade::handle<IGESGeom_SplineCurve> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const opencascade::handle<IGESGeom_SplineCurve> & , Interface_CopyTool & ) const>(&IGESGeom_ToolSplineCurve::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolSplineCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolSplineCurve::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolSplineSurface , shared_ptr<IGESGeom_ToolSplineSurface> >>(m.attr("IGESGeom_ToolSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolSplineSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolSplineSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolSplineSurface::OwnShared),
             R"#(Lists the Entities shared by a SplineSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & ) const>(&IGESGeom_ToolSplineSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolSplineSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const opencascade::handle<IGESGeom_SplineSurface> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const opencascade::handle<IGESGeom_SplineSurface> & , Interface_CopyTool & ) const>(&IGESGeom_ToolSplineSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolSplineSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolSplineSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolSurfaceOfRevolution , shared_ptr<IGESGeom_ToolSurfaceOfRevolution> >>(m.attr("IGESGeom_ToolSurfaceOfRevolution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolSurfaceOfRevolution::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolSurfaceOfRevolution::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolSurfaceOfRevolution::OwnShared),
             R"#(Lists the Entities shared by a SurfaceOfRevolution <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & ) const>(&IGESGeom_ToolSurfaceOfRevolution::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolSurfaceOfRevolution::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , Interface_CopyTool & ) const>(&IGESGeom_ToolSurfaceOfRevolution::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolSurfaceOfRevolution::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolSurfaceOfRevolution::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolTabulatedCylinder , shared_ptr<IGESGeom_ToolTabulatedCylinder> >>(m.attr("IGESGeom_ToolTabulatedCylinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolTabulatedCylinder::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolTabulatedCylinder::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolTabulatedCylinder::OwnShared),
             R"#(Lists the Entities shared by a TabulatedCylinder <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & ) const>(&IGESGeom_ToolTabulatedCylinder::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolTabulatedCylinder::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const opencascade::handle<IGESGeom_TabulatedCylinder> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const opencascade::handle<IGESGeom_TabulatedCylinder> & , Interface_CopyTool & ) const>(&IGESGeom_ToolTabulatedCylinder::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolTabulatedCylinder::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolTabulatedCylinder::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolTransformationMatrix , shared_ptr<IGESGeom_ToolTransformationMatrix> >>(m.attr("IGESGeom_ToolTransformationMatrix"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolTransformationMatrix::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolTransformationMatrix::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolTransformationMatrix::OwnShared),
             R"#(Lists the Entities shared by a TransformationMatrix <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("OwnCorrect",
             (Standard_Boolean (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & ) const) static_cast<Standard_Boolean (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & ) const>(&IGESGeom_ToolTransformationMatrix::OwnCorrect),
             R"#(Sets automatic unambiguous Correction on a TransformationMatrix (FormNumber if 0 or 1, recomputed according Positive/Negative))#"  , py::arg("ent"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & ) const>(&IGESGeom_ToolTransformationMatrix::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolTransformationMatrix::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const opencascade::handle<IGESGeom_TransformationMatrix> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const opencascade::handle<IGESGeom_TransformationMatrix> & , Interface_CopyTool & ) const>(&IGESGeom_ToolTransformationMatrix::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolTransformationMatrix::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolTransformationMatrix::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_ToolTrimmedSurface , shared_ptr<IGESGeom_ToolTrimmedSurface> >>(m.attr("IGESGeom_ToolTrimmedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadOwnParams",
             (void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const) static_cast<void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const opencascade::handle<IGESData_IGESReaderData> & , IGESData_ParamReader & ) const>(&IGESGeom_ToolTrimmedSurface::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , IGESData_IGESWriter & ) const) static_cast<void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , IGESData_IGESWriter & ) const>(&IGESGeom_ToolTrimmedSurface::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , Interface_EntityIterator & ) const) static_cast<void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , Interface_EntityIterator & ) const>(&IGESGeom_ToolTrimmedSurface::OwnShared),
             R"#(Lists the Entities shared by a TrimmedSurface <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & ) const) static_cast<IGESData_DirChecker (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & ) const>(&IGESGeom_ToolTrimmedSurface::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&IGESGeom_ToolTrimmedSurface::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const opencascade::handle<IGESGeom_TrimmedSurface> & , Interface_CopyTool & ) const) static_cast<void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const opencascade::handle<IGESGeom_TrimmedSurface> & , Interface_CopyTool & ) const>(&IGESGeom_ToolTrimmedSurface::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IGESGeom_ToolTrimmedSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & , const IGESData_IGESDumper & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IGESGeom_ToolTrimmedSurface::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_TransformationMatrix ,opencascade::handle<IGESGeom_TransformationMatrix> , IGESData_TransfEntity>>(m.attr("IGESGeom_TransformationMatrix"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_TransformationMatrix::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (IGESGeom_TransformationMatrix::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) >(&IGESGeom_TransformationMatrix::Init),
             R"#(This method is used to set the fields of the class TransformationMatrix - aMatrix : 3 x 4 array containing elements of the transformation matrix raises exception if aMatrix is not 3 x 4 array)#"  , py::arg("aMatrix"))
        .def("SetFormNumber",
             (void (IGESGeom_TransformationMatrix::*)( const Standard_Integer ) ) static_cast<void (IGESGeom_TransformationMatrix::*)( const Standard_Integer ) >(&IGESGeom_TransformationMatrix::SetFormNumber),
             R"#(Changes FormNumber (indicates the Type of Transf : Transformation 0-1 or Coordinate System 10-11-12) Error if not in ranges [0-1] or [10-12])#"  , py::arg("form"))
        .def("Data",
             (Standard_Real (IGESGeom_TransformationMatrix::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (IGESGeom_TransformationMatrix::*)( const Standard_Integer , const Standard_Integer ) const>(&IGESGeom_TransformationMatrix::Data),
             R"#(returns individual Data Errro if I not in [1-3] or J not in [1-4])#"  , py::arg("I"),  py::arg("J"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_TransformationMatrix::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESGeom_TrimmedSurface ,opencascade::handle<IGESGeom_TrimmedSurface> , IGESData_IGESEntity>>(m.attr("IGESGeom_TrimmedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESGeom_TrimmedSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const opencascade::handle<IGESGeom_CurveOnSurface> & , const opencascade::handle<IGESGeom_HArray1OfCurveOnSurface> & ) ) static_cast<void (IGESGeom_TrimmedSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer , const opencascade::handle<IGESGeom_CurveOnSurface> & , const opencascade::handle<IGESGeom_HArray1OfCurveOnSurface> & ) >(&IGESGeom_TrimmedSurface::Init),
             R"#(This method is used to set the fields of the class TrimmedSurface - aSurface : Surface to be trimmed - aFlag : Outer boundary type False = The outer boundary is the boundary of rectangle D which is the domain of the surface to be trimmed True = otherwise - anOuter : Closed curve which constitutes outer boundary - allInners : Array of closed curves which constitute the inner boundary)#"  , py::arg("aSurface"),  py::arg("aFlag"),  py::arg("anOuter"),  py::arg("allInners"))
        .def("Surface",
             (opencascade::handle<IGESData_IGESEntity> (IGESGeom_TrimmedSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESGeom_TrimmedSurface::*)() const>(&IGESGeom_TrimmedSurface::Surface),
             R"#(returns the surface to be trimmed)#" )
        .def("HasOuterContour",
             (Standard_Boolean (IGESGeom_TrimmedSurface::*)() const) static_cast<Standard_Boolean (IGESGeom_TrimmedSurface::*)() const>(&IGESGeom_TrimmedSurface::HasOuterContour),
             R"#(returns True if outer contour exists)#" )
        .def("OuterContour",
             (opencascade::handle<IGESGeom_CurveOnSurface> (IGESGeom_TrimmedSurface::*)() const) static_cast<opencascade::handle<IGESGeom_CurveOnSurface> (IGESGeom_TrimmedSurface::*)() const>(&IGESGeom_TrimmedSurface::OuterContour),
             R"#(returns the outer contour of the trimmed surface)#" )
        .def("OuterBoundaryType",
             (Standard_Integer (IGESGeom_TrimmedSurface::*)() const) static_cast<Standard_Integer (IGESGeom_TrimmedSurface::*)() const>(&IGESGeom_TrimmedSurface::OuterBoundaryType),
             R"#(returns the outer contour type of the trimmed surface 0 : The outer boundary is the boundary of D 1 : otherwise)#" )
        .def("NbInnerContours",
             (Standard_Integer (IGESGeom_TrimmedSurface::*)() const) static_cast<Standard_Integer (IGESGeom_TrimmedSurface::*)() const>(&IGESGeom_TrimmedSurface::NbInnerContours),
             R"#(returns the number of inner boundaries)#" )
        .def("InnerContour",
             (opencascade::handle<IGESGeom_CurveOnSurface> (IGESGeom_TrimmedSurface::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IGESGeom_CurveOnSurface> (IGESGeom_TrimmedSurface::*)( const Standard_Integer ) const>(&IGESGeom_TrimmedSurface::InnerContour),
             R"#(returns the Index'th inner contour raises exception if Index <= 0 or Index > NbInnerContours())#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESGeom_TrimmedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESGeom_TrimmedSurface::*)() const>(&IGESGeom_TrimmedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESGeom_TrimmedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESGeom_TrimmedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\IGESGeom_CircularArc.hxx
// ./opencascade\IGESGeom_ToolDirection.hxx
// ./opencascade\IGESGeom_Protocol.hxx
// ./opencascade\IGESGeom_HArray1OfCurveOnSurface.hxx
// ./opencascade\IGESGeom_CurveOnSurface.hxx
// ./opencascade\IGESGeom_ToolOffsetCurve.hxx
// ./opencascade\IGESGeom_ToolBSplineSurface.hxx
// ./opencascade\IGESGeom_SplineCurve.hxx
// ./opencascade\IGESGeom_ConicArc.hxx
// ./opencascade\IGESGeom_Boundary.hxx
// ./opencascade\IGESGeom_OffsetSurface.hxx
// ./opencascade\IGESGeom_ToolOffsetSurface.hxx
// ./opencascade\IGESGeom_TabulatedCylinder.hxx
// ./opencascade\IGESGeom_CompositeCurve.hxx
// ./opencascade\IGESGeom_ToolPlane.hxx
// ./opencascade\IGESGeom_Flash.hxx
// ./opencascade\IGESGeom_OffsetCurve.hxx
// ./opencascade\IGESGeom_RuledSurface.hxx
// ./opencascade\IGESGeom_BSplineCurve.hxx
// ./opencascade\IGESGeom_ToolTransformationMatrix.hxx
// ./opencascade\IGESGeom_ToolSurfaceOfRevolution.hxx
// ./opencascade\IGESGeom_ToolSplineCurve.hxx
// ./opencascade\IGESGeom_ToolCompositeCurve.hxx
// ./opencascade\IGESGeom_HArray1OfBoundary.hxx
// ./opencascade\IGESGeom_ToolConicArc.hxx
// ./opencascade\IGESGeom_Direction.hxx
// ./opencascade\IGESGeom_BoundedSurface.hxx
// ./opencascade\IGESGeom_Plane.hxx
// ./opencascade\IGESGeom_CopiousData.hxx
// ./opencascade\IGESGeom_ToolFlash.hxx
// ./opencascade\IGESGeom_Array1OfTransformationMatrix.hxx
// ./opencascade\IGESGeom_ToolSplineSurface.hxx
// ./opencascade\IGESGeom_Array1OfCurveOnSurface.hxx
// ./opencascade\IGESGeom_ToolTabulatedCylinder.hxx
// ./opencascade\IGESGeom_ToolCopiousData.hxx
// ./opencascade\IGESGeom_ReadWriteModule.hxx
// ./opencascade\IGESGeom_TrimmedSurface.hxx
// ./opencascade\IGESGeom_Line.hxx
// ./opencascade\IGESGeom_ToolTrimmedSurface.hxx
// ./opencascade\IGESGeom_BSplineSurface.hxx
// ./opencascade\IGESGeom_ToolBSplineCurve.hxx
// ./opencascade\IGESGeom_SurfaceOfRevolution.hxx
// ./opencascade\IGESGeom_ToolBoundary.hxx
// ./opencascade\IGESGeom_Array1OfBoundary.hxx
// ./opencascade\IGESGeom_Point.hxx
// ./opencascade\IGESGeom_SplineSurface.hxx
// ./opencascade\IGESGeom.hxx
// ./opencascade\IGESGeom_ToolRuledSurface.hxx
// ./opencascade\IGESGeom_ToolLine.hxx
// ./opencascade\IGESGeom_GeneralModule.hxx
// ./opencascade\IGESGeom_TransformationMatrix.hxx
// ./opencascade\IGESGeom_SpecificModule.hxx
// ./opencascade\IGESGeom_ToolPoint.hxx
// ./opencascade\IGESGeom_ToolBoundedSurface.hxx
// ./opencascade\IGESGeom_ToolCircularArc.hxx
// ./opencascade\IGESGeom_HArray1OfTransformationMatrix.hxx
// ./opencascade\IGESGeom_ToolCurveOnSurface.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESGeom_TransformationMatrix> >(m,"IGESGeom_Array1OfTransformationMatrix");
    register_template_NCollection_Array1<opencascade::handle<IGESGeom_CurveOnSurface> >(m,"IGESGeom_Array1OfCurveOnSurface");
    register_template_NCollection_Array1<opencascade::handle<IGESGeom_Boundary> >(m,"IGESGeom_Array1OfBoundary");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
