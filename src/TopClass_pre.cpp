
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <TopClass_SolidExplorer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopClass_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopClass", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_TopClass_SolidExplorer : public TopClass_SolidExplorer{
    public:
        using TopClass_SolidExplorer::TopClass_SolidExplorer;
        
        
        // public pure virtual
        Standard_Boolean Reject(const gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,Reject,P) };
        void InitShell() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,InitShell,) };
        Standard_Boolean MoreShells() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,MoreShells,) };
        void NextShell() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,NextShell,) };
        Standard_Boolean RejectShell(const gp_Lin & L,const Standard_Real Par) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,RejectShell,L,Par) };
        void InitFace() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,InitFace,) };
        Standard_Boolean MoreFaces() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,MoreFaces,) };
        void NextFace() override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,NextFace,) };
        TopoDS_Face CurrentFace() const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,TopClass_SolidExplorer,CurrentFace,) };
        Standard_Boolean RejectFace(const gp_Lin & L,const Standard_Real Par) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopClass_SolidExplorer,RejectFace,L,Par) };
        void Segment(const gp_Pnt & P,gp_Lin & L,Standard_Real & Par) override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,Segment,P,L,Par) };
        void OtherSegment(const gp_Pnt & P,gp_Lin & L,Standard_Real & Par) override { PYBIND11_OVERLOAD_PURE(void,TopClass_SolidExplorer,OtherSegment,P,L,Par) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<TopClass_SolidExplorer , shared_ptr<TopClass_SolidExplorer> ,Py_TopClass_SolidExplorer >(m,"TopClass_SolidExplorer",R"#(Provide an exploration of a BRep Shape for the classification. Defines the description of a solid for the SolidClassifier.)#");

};

// user-defined post-inclusion per module

// user-defined post
