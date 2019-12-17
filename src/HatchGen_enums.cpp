
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IntRes2d_IntersectionPoint.hxx>
#include <IntRes2d_IntersectionPoint.hxx>

// module includes
#include <HatchGen_Domain.hxx>
#include <HatchGen_Domains.hxx>
#include <HatchGen_ErrorStatus.hxx>
#include <HatchGen_IntersectionPoint.hxx>
#include <HatchGen_IntersectionType.hxx>
#include <HatchGen_PointOnElement.hxx>
#include <HatchGen_PointOnHatching.hxx>
#include <HatchGen_PointsOnElement.hxx>
#include <HatchGen_PointsOnHatching.hxx>

// template related includes
// ./opencascade/HatchGen_PointsOnElement.hxx
#include "NCollection.hxx"
// ./opencascade/HatchGen_PointsOnHatching.hxx
#include "NCollection.hxx"
// ./opencascade/HatchGen_Domains.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HatchGen_enums(py::module &main_module) {


py::module m = main_module.def_submodule("HatchGen", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<HatchGen_ErrorStatus>(m, "HatchGen_ErrorStatus",R"#(Error status.)#")
        .value("HatchGen_NoProblem",HatchGen_ErrorStatus::HatchGen_NoProblem)
        .value("HatchGen_TrimFailure",HatchGen_ErrorStatus::HatchGen_TrimFailure)
        .value("HatchGen_TransitionFailure",HatchGen_ErrorStatus::HatchGen_TransitionFailure)
        .value("HatchGen_IncoherentParity",HatchGen_ErrorStatus::HatchGen_IncoherentParity)
        .value("HatchGen_IncompatibleStates",HatchGen_ErrorStatus::HatchGen_IncompatibleStates).export_values();
    py::enum_<HatchGen_IntersectionType>(m, "HatchGen_IntersectionType",R"#(Intersection type between the hatching and the element.)#")
        .value("HatchGen_TRUE",HatchGen_IntersectionType::HatchGen_TRUE)
        .value("HatchGen_TOUCH",HatchGen_IntersectionType::HatchGen_TOUCH)
        .value("HatchGen_TANGENT",HatchGen_IntersectionType::HatchGen_TANGENT)
        .value("HatchGen_UNDETERMINED",HatchGen_IntersectionType::HatchGen_UNDETERMINED).export_values();

//Python trampoline classes
    class Py_HatchGen_IntersectionPoint : public HatchGen_IntersectionPoint{
    public:
        using HatchGen_IntersectionPoint::HatchGen_IntersectionPoint;
        
        // public pure virtual
        void Dump(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(void,HatchGen_IntersectionPoint,Dump,Index) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<HatchGen_IntersectionPoint ,std::unique_ptr<HatchGen_IntersectionPoint, py::nodelete> ,Py_HatchGen_IntersectionPoint >(m,"HatchGen_IntersectionPoint",R"#(None)#");
    py::class_<HatchGen_PointOnElement ,std::unique_ptr<HatchGen_PointOnElement>  , HatchGen_IntersectionPoint >(m,"HatchGen_PointOnElement",R"#(None)#");
    py::class_<HatchGen_Domain ,std::unique_ptr<HatchGen_Domain>  >(m,"HatchGen_Domain",R"#(None)#");
    py::class_<HatchGen_PointOnHatching ,std::unique_ptr<HatchGen_PointOnHatching>  , HatchGen_IntersectionPoint >(m,"HatchGen_PointOnHatching",R"#(None)#");

// pre-register typdefs
// ./opencascade/HatchGen_IntersectionPoint.hxx
// ./opencascade/HatchGen_PointsOnElement.hxx
    preregister_template_NCollection_Sequence<HatchGen_PointOnElement>(m,"HatchGen_PointsOnElement");  
// ./opencascade/HatchGen_PointsOnHatching.hxx
    preregister_template_NCollection_Sequence<HatchGen_PointOnHatching>(m,"HatchGen_PointsOnHatching");  
// ./opencascade/HatchGen_PointOnElement.hxx
// ./opencascade/HatchGen_PointOnHatching.hxx
// ./opencascade/HatchGen_Domain.hxx
// ./opencascade/HatchGen_ErrorStatus.hxx
// ./opencascade/HatchGen_IntersectionType.hxx
// ./opencascade/HatchGen_Domains.hxx
    preregister_template_NCollection_Sequence<HatchGen_Domain>(m,"HatchGen_Domains");  

};

// user-defined post-inclusion per module

// user-defined post
