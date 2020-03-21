
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_TypeMismatch.hxx>
#include <TopoDS_Vertex.hxx>
#include <Law_Composite.hxx>
#include <Geom2d_Curve.hxx>
#include <ChFiDS_SurfData.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <TopoDS_Vertex.hxx>
#include <ChFiDS_Spine.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ChFiDS_ChamfMethod.hxx>
#include <ChFiDS_ChamfMode.hxx>
#include <ChFiDS_ChamfSpine.hxx>
#include <ChFiDS_CircSection.hxx>
#include <ChFiDS_CommonPoint.hxx>
#include <ChFiDS_ElSpine.hxx>
#include <ChFiDS_ErrorStatus.hxx>
#include <ChFiDS_FaceInterference.hxx>
#include <ChFiDS_FilSpine.hxx>
#include <ChFiDS_HData.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx>
#include <ChFiDS_ListIteratorOfListOfHElSpine.hxx>
#include <ChFiDS_ListIteratorOfListOfStripe.hxx>
#include <ChFiDS_ListIteratorOfRegularities.hxx>
#include <ChFiDS_ListOfHElSpine.hxx>
#include <ChFiDS_ListOfStripe.hxx>
#include <ChFiDS_Map.hxx>
#include <ChFiDS_Regul.hxx>
#include <ChFiDS_Regularities.hxx>
#include <ChFiDS_SecArray1.hxx>
#include <ChFiDS_SecHArray1.hxx>
#include <ChFiDS_SequenceOfSpine.hxx>
#include <ChFiDS_SequenceOfSurfData.hxx>
#include <ChFiDS_Spine.hxx>
#include <ChFiDS_State.hxx>
#include <ChFiDS_Stripe.hxx>
#include <ChFiDS_StripeArray1.hxx>
#include <ChFiDS_StripeMap.hxx>
#include <ChFiDS_SurfData.hxx>

// template related includes
// ./opencascade/ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_SequenceOfSpine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_SecArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_ListOfStripe.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_ListOfStripe.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_StripeArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_SequenceOfSurfData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_Regularities.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_Regularities.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ChFiDS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ChFiDS", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<ChFiDS_ErrorStatus>(m, "ChFiDS_ErrorStatus",R"#(--- Purpose statuts concernant la cause de l'erreur)#")
        .value("ChFiDS_Ok",ChFiDS_ErrorStatus::ChFiDS_Ok)
        .value("ChFiDS_Error",ChFiDS_ErrorStatus::ChFiDS_Error)
        .value("ChFiDS_WalkingFailure",ChFiDS_ErrorStatus::ChFiDS_WalkingFailure)
        .value("ChFiDS_StartsolFailure",ChFiDS_ErrorStatus::ChFiDS_StartsolFailure)
        .value("ChFiDS_TwistedSurface",ChFiDS_ErrorStatus::ChFiDS_TwistedSurface).export_values();
    py::enum_<ChFiDS_ChamfMethod>(m, "ChFiDS_ChamfMethod",R"#(None)#")
        .value("ChFiDS_Sym",ChFiDS_ChamfMethod::ChFiDS_Sym)
        .value("ChFiDS_TwoDist",ChFiDS_ChamfMethod::ChFiDS_TwoDist)
        .value("ChFiDS_DistAngle",ChFiDS_ChamfMethod::ChFiDS_DistAngle).export_values();
    py::enum_<ChFiDS_ChamfMode>(m, "ChFiDS_ChamfMode",R"#(this enumeration defines several modes of chamfer)#")
        .value("ChFiDS_ClassicChamfer",ChFiDS_ChamfMode::ChFiDS_ClassicChamfer)
        .value("ChFiDS_ConstThroatChamfer",ChFiDS_ChamfMode::ChFiDS_ConstThroatChamfer)
        .value("ChFiDS_ConstThroatWithPenetrationChamfer",ChFiDS_ChamfMode::ChFiDS_ConstThroatWithPenetrationChamfer).export_values();
    py::enum_<ChFiDS_State>(m, "ChFiDS_State",R"#(This enum describe the different kinds of extremities of a fillet. OnSame, Ondiff and AllSame are particular cases of BreakPoint for a corner with 3 edges and three faces : - AllSame means that the three concavities are on the same side of the Shape, - OnDiff means that the edge of the fillet has a concave side different than the two other edges, - OnSame means that the edge of the fillet has a concave side different than one of the two other edges and identical to the third edge.)#")
        .value("ChFiDS_OnSame",ChFiDS_State::ChFiDS_OnSame)
        .value("ChFiDS_OnDiff",ChFiDS_State::ChFiDS_OnDiff)
        .value("ChFiDS_AllSame",ChFiDS_State::ChFiDS_AllSame)
        .value("ChFiDS_BreakPoint",ChFiDS_State::ChFiDS_BreakPoint)
        .value("ChFiDS_FreeBoundary",ChFiDS_State::ChFiDS_FreeBoundary)
        .value("ChFiDS_Closed",ChFiDS_State::ChFiDS_Closed)
        .value("ChFiDS_Tangent",ChFiDS_State::ChFiDS_Tangent).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_IndexedDataMap<TopoDS_Vertex, ChFiDS_ListOfStripe, TopTools_ShapeMapHasher>(m,"ChFiDS_IndexedDataMapOfVertexListOfStripe");
    preregister_template_NCollection_Sequence<opencascade::handle<ChFiDS_Spine> >(m,"ChFiDS_SequenceOfSpine");
    preregister_template_NCollection_Array1<ChFiDS_CircSection>(m,"ChFiDS_SecArray1");
    preregister_template_NCollection_List<opencascade::handle<ChFiDS_Stripe> >(m,"ChFiDS_ListOfStripe");
    preregister_template_NCollection_Array1<opencascade::handle<ChFiDS_Stripe> >(m,"ChFiDS_StripeArray1");
    preregister_template_NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> >(m,"ChFiDS_SequenceOfSurfData");
    preregister_template_NCollection_List<ChFiDS_Regul>(m,"ChFiDS_Regularities");
    preregister_template_NCollection_List<opencascade::handle<ChFiDS_HElSpine> >(m,"ChFiDS_ListOfHElSpine");

// classes forward declarations only
    py::class_<ChFiDS_CircSection , shared_ptr<ChFiDS_CircSection> >(m,"ChFiDS_CircSection",R"#(A Section of fillet.)#");
    py::class_<ChFiDS_CommonPoint , shared_ptr<ChFiDS_CommonPoint> >(m,"ChFiDS_CommonPoint",R"#(point start/end of fillet common to 2 adjacent filets and to an edge on one of 2 faces participating in the construction of the fillet)#");
    py::class_<ChFiDS_ElSpine , shared_ptr<ChFiDS_ElSpine> , Adaptor3d_Curve>(m,"ChFiDS_ElSpine",R"#(Elementary Spine for cheminements and approximations.)#");
    py::class_<ChFiDS_FaceInterference , shared_ptr<ChFiDS_FaceInterference> >(m,"ChFiDS_FaceInterference",R"#(interference face/fillet)#");
    py::class_<ChFiDS_HData ,opencascade::handle<ChFiDS_HData> , ChFiDS_SequenceOfSurfData, Standard_Transient>(m,"ChFiDS_HData",R"#()#");
    py::class_<ChFiDS_HElSpine ,opencascade::handle<ChFiDS_HElSpine> , Adaptor3d_HCurve>(m,"ChFiDS_HElSpine",R"#()#");
    py::class_<ChFiDS_Map , shared_ptr<ChFiDS_Map> >(m,"ChFiDS_Map",R"#(Encapsulation of IndexedDataMapOfShapeListOfShape.)#");
    py::class_<ChFiDS_Regul , shared_ptr<ChFiDS_Regul> >(m,"ChFiDS_Regul",R"#(Storage of a curve and its 2 faces or surfaces of support.)#");
    py::class_<ChFiDS_SecHArray1 ,opencascade::handle<ChFiDS_SecHArray1> , ChFiDS_SecArray1, Standard_Transient>(m,"ChFiDS_SecHArray1",R"#()#");
    py::class_<ChFiDS_Spine ,opencascade::handle<ChFiDS_Spine> , Standard_Transient>(m,"ChFiDS_Spine",R"#(Contains information necessary for construction of a 3D fillet or chamfer:Contains information necessary for construction of a 3D fillet or chamfer:Contains information necessary for construction of a 3D fillet or chamfer:)#");
    py::class_<ChFiDS_Stripe ,opencascade::handle<ChFiDS_Stripe> , Standard_Transient>(m,"ChFiDS_Stripe",R"#(Data characterising a band of fillet.Data characterising a band of fillet.Data characterising a band of fillet.)#");
    py::class_<ChFiDS_StripeMap , shared_ptr<ChFiDS_StripeMap> >(m,"ChFiDS_StripeMap",R"#(encapsulation of IndexedDataMapOfVertexListOfStripe)#");
    py::class_<ChFiDS_SurfData ,opencascade::handle<ChFiDS_SurfData> , Standard_Transient>(m,"ChFiDS_SurfData",R"#(data structure for all information related to the fillet and to 2 faces vis a visdata structure for all information related to the fillet and to 2 faces vis a visdata structure for all information related to the fillet and to 2 faces vis a vis)#");
    py::class_<ChFiDS_ChamfSpine ,opencascade::handle<ChFiDS_ChamfSpine> , ChFiDS_Spine>(m,"ChFiDS_ChamfSpine",R"#(Provides data specific to chamfers distances on each of faces.Provides data specific to chamfers distances on each of faces.Provides data specific to chamfers distances on each of faces.)#");
    py::class_<ChFiDS_FilSpine ,opencascade::handle<ChFiDS_FilSpine> , ChFiDS_Spine>(m,"ChFiDS_FilSpine",R"#(Provides data specific to the fillets - vector or rule of evolution (C2).Provides data specific to the fillets - vector or rule of evolution (C2).Provides data specific to the fillets - vector or rule of evolution (C2).)#");

};

// user-defined post-inclusion per module

// user-defined post
