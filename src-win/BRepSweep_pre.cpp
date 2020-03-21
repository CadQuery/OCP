
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoMoreObject.hxx>

// module includes
#include <BRepSweep_Builder.hxx>
#include <BRepSweep_Iterator.hxx>
#include <BRepSweep_NumLinearRegularSweep.hxx>
#include <BRepSweep_Prism.hxx>
#include <BRepSweep_Revol.hxx>
#include <BRepSweep_Rotation.hxx>
#include <BRepSweep_Tool.hxx>
#include <BRepSweep_Translation.hxx>
#include <BRepSweep_Trsf.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepSweep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepSweep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_BRepSweep_NumLinearRegularSweep : public BRepSweep_NumLinearRegularSweep{
    public:
        using BRepSweep_NumLinearRegularSweep::BRepSweep_NumLinearRegularSweep;


        // public pure virtual
        TopoDS_Shape MakeEmptyVertex(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyVertex,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyDirectingEdge(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyDirectingEdge,aGenV,aDirE) };
        TopoDS_Shape MakeEmptyGeneratingEdge(const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyGeneratingEdge,aGenE,aDirV) };
        void SetParameters(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetParameters,aNewFace,aNewVertex,aGenF,aGenV,aDirV) };
        void SetDirectingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetDirectingParameter,aNewEdge,aNewVertex,aGenV,aDirE,aDirV) };
        void SetGeneratingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetGeneratingParameter,aNewEdge,aNewVertex,aGenE,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyFace(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_NumLinearRegularSweep,MakeEmptyFace,aGenS,aDirS) };
        void SetPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetPCurve,aNewFace,aNewEdge,aGenF,aGenE,aDirV,orien) };
        void SetGeneratingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetGeneratingPCurve,aNewFace,aNewEdge,aGenE,aDirE,aDirV,orien) };
        void SetDirectingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetDirectingPCurve,aNewFace,aNewEdge,aGenE,aGenV,aDirE,orien) };
        TopAbs_Orientation DirectSolid(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopAbs_Orientation,BRepSweep_NumLinearRegularSweep,DirectSolid,aGenS,aDirS) };
        Standard_Boolean GGDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,GGDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        Standard_Boolean GDDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS,const Sweep_NumShape & aSubDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,GDDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aDirS,aSubDirS) };
        Standard_Boolean SeparatedWires(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,SeparatedWires,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        void SetContinuity(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_NumLinearRegularSweep,SetContinuity,aGenS,aDirS) };
        Standard_Boolean HasShape(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,HasShape,aGenS,aDirS) };
        Standard_Boolean IsInvariant(const TopoDS_Shape & aGenS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_NumLinearRegularSweep,IsInvariant,aGenS) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_BRepSweep_Trsf : public BRepSweep_Trsf{
    public:
        using BRepSweep_Trsf::BRepSweep_Trsf;


        // public pure virtual
        TopoDS_Shape MakeEmptyVertex(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyVertex,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyDirectingEdge(const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyDirectingEdge,aGenV,aDirE) };
        TopoDS_Shape MakeEmptyGeneratingEdge(const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyGeneratingEdge,aGenE,aDirV) };
        void SetParameters(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetParameters,aNewFace,aNewVertex,aGenF,aGenV,aDirV) };
        void SetDirectingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetDirectingParameter,aNewEdge,aNewVertex,aGenV,aDirE,aDirV) };
        void SetGeneratingParameter(const TopoDS_Shape & aNewEdge,TopoDS_Shape & aNewVertex,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirV) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetGeneratingParameter,aNewEdge,aNewVertex,aGenE,aGenV,aDirV) };
        TopoDS_Shape MakeEmptyFace(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopoDS_Shape,BRepSweep_Trsf,MakeEmptyFace,aGenS,aDirS) };
        void SetPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenF,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetPCurve,aNewFace,aNewEdge,aGenF,aGenE,aDirV,orien) };
        void SetGeneratingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const Sweep_NumShape & aDirE,const Sweep_NumShape & aDirV,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetGeneratingPCurve,aNewFace,aNewEdge,aGenE,aDirE,aDirV,orien) };
        void SetDirectingPCurve(const TopoDS_Shape & aNewFace,TopoDS_Shape & aNewEdge,const TopoDS_Shape & aGenE,const TopoDS_Shape & aGenV,const Sweep_NumShape & aDirE,const TopAbs_Orientation orien) override { PYBIND11_OVERLOAD_PURE(void,BRepSweep_Trsf,SetDirectingPCurve,aNewFace,aNewEdge,aGenE,aGenV,aDirE,orien) };
        Standard_Boolean GGDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,GGDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        Standard_Boolean GDDShapeIsToAdd(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS,const Sweep_NumShape & aSubDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,GDDShapeIsToAdd,aNewShape,aNewSubShape,aGenS,aDirS,aSubDirS) };
        Standard_Boolean SeparatedWires(const TopoDS_Shape & aNewShape,const TopoDS_Shape & aNewSubShape,const TopoDS_Shape & aGenS,const TopoDS_Shape & aSubGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,SeparatedWires,aNewShape,aNewSubShape,aGenS,aSubGenS,aDirS) };
        Standard_Boolean HasShape(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,HasShape,aGenS,aDirS) };
        Standard_Boolean IsInvariant(const TopoDS_Shape & aGenS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepSweep_Trsf,IsInvariant,aGenS) };

        TopAbs_Orientation DirectSolid(const TopoDS_Shape & aGenS,const Sweep_NumShape & aDirS) override { PYBIND11_OVERLOAD_PURE(TopAbs_Orientation,BRepSweep_NumLinearRegularSweep,DirectSolid,aGenS,aDirS) };

        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepSweep_Builder , shared_ptr<BRepSweep_Builder> >(m,"BRepSweep_Builder",R"#(implements the abstract Builder with the BRep Builder)#");
    py::class_<BRepSweep_Iterator , shared_ptr<BRepSweep_Iterator> >(m,"BRepSweep_Iterator",R"#(This class provides iteration services required by the Generating Line (TopoDS Shape) of a BRepSweep. This tool is used to iterate on the direct sub-shapes of a Shape.)#");
    py::class_<BRepSweep_NumLinearRegularSweep , shared_ptr<BRepSweep_NumLinearRegularSweep>,Py_BRepSweep_NumLinearRegularSweep >(m,"BRepSweep_NumLinearRegularSweep",R"#(This a generic class is used to build Sweept primitives with a generating "shape" and a directing "line".)#");
    py::class_<BRepSweep_Prism , shared_ptr<BRepSweep_Prism> >(m,"BRepSweep_Prism",R"#(Provides natural constructors to build BRepSweep translated swept Primitives.)#");
    py::class_<BRepSweep_Revol , shared_ptr<BRepSweep_Revol> >(m,"BRepSweep_Revol",R"#(Provides natural constructors to build BRepSweep rotated swept Primitives.)#");
    py::class_<BRepSweep_Tool , shared_ptr<BRepSweep_Tool> >(m,"BRepSweep_Tool",R"#(Provides the indexation and type analysis services required by the TopoDS generating Shape of BRepSweep.)#");
    py::class_<BRepSweep_Trsf , shared_ptr<BRepSweep_Trsf>,Py_BRepSweep_Trsf , BRepSweep_NumLinearRegularSweep>(m,"BRepSweep_Trsf",R"#(This class is inherited from NumLinearRegularSweep to implement the simple swept primitives built moving a Shape with a Trsf. It often is possible to build the constructed subshapes by a simple move of the generating subshapes (shared topology and geometry). So two ways of construction are proposed :)#");
    py::class_<BRepSweep_Rotation , shared_ptr<BRepSweep_Rotation> , BRepSweep_Trsf>(m,"BRepSweep_Rotation",R"#(Provides an algorithm to build object by Rotation sweep.)#");
    py::class_<BRepSweep_Translation , shared_ptr<BRepSweep_Translation> , BRepSweep_Trsf>(m,"BRepSweep_Translation",R"#(Provides an algorithm to build object by translation sweep.)#");

};

// user-defined post-inclusion per module

// user-defined post
