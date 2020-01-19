
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_DomainError.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Elips2d.hxx>

// module includes
#include <GccInt_BCirc.hxx>
#include <GccInt_BElips.hxx>
#include <GccInt_BHyper.hxx>
#include <GccInt_Bisec.hxx>
#include <GccInt_BLine.hxx>
#include <GccInt_BParab.hxx>
#include <GccInt_BPoint.hxx>
#include <GccInt_IType.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GccInt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GccInt", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<GccInt_IType>(m, "GccInt_IType",R"#(None)#")
        .value("GccInt_Lin",GccInt_IType::GccInt_Lin)
        .value("GccInt_Cir",GccInt_IType::GccInt_Cir)
        .value("GccInt_Ell",GccInt_IType::GccInt_Ell)
        .value("GccInt_Par",GccInt_IType::GccInt_Par)
        .value("GccInt_Hpr",GccInt_IType::GccInt_Hpr)
        .value("GccInt_Pnt",GccInt_IType::GccInt_Pnt).export_values();

//Python trampoline classes
    class Py_GccInt_Bisec : public GccInt_Bisec{
    public:
        using GccInt_Bisec::GccInt_Bisec;
        
        // public pure virtual
        GccInt_IType ArcType() const  override { PYBIND11_OVERLOAD_PURE(GccInt_IType,GccInt_Bisec,ArcType,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<GccInt_Bisec ,opencascade::handle<GccInt_Bisec> ,Py_GccInt_Bisec , Standard_Transient >(m,"GccInt_Bisec",R"#(The deferred class GccInt_Bisec is the root class for elementary bisecting loci between two simple geometric objects (i.e. circles, lines or points). Bisecting loci between two geometric objects are such that each of their points is at the same distance from the two geometric objects. It is typically a curve, such as a line, circle or conic. Generally there is more than one elementary object which is the solution to a bisecting loci problem: each solution is described with one elementary bisecting locus. For example, the bisectors of two secant straight lines are two perpendicular straight lines. The GccInt package provides concrete implementations of the following elementary derived bisecting loci: - lines, circles, ellipses, hyperbolas and parabolas, and - points (not used in this context). The GccAna package provides numerous algorithms for computing the bisecting loci between circles, lines or points, whose solutions are these types of elementary bisecting locus.The deferred class GccInt_Bisec is the root class for elementary bisecting loci between two simple geometric objects (i.e. circles, lines or points). Bisecting loci between two geometric objects are such that each of their points is at the same distance from the two geometric objects. It is typically a curve, such as a line, circle or conic. Generally there is more than one elementary object which is the solution to a bisecting loci problem: each solution is described with one elementary bisecting locus. For example, the bisectors of two secant straight lines are two perpendicular straight lines. The GccInt package provides concrete implementations of the following elementary derived bisecting loci: - lines, circles, ellipses, hyperbolas and parabolas, and - points (not used in this context). The GccAna package provides numerous algorithms for computing the bisecting loci between circles, lines or points, whose solutions are these types of elementary bisecting locus.The deferred class GccInt_Bisec is the root class for elementary bisecting loci between two simple geometric objects (i.e. circles, lines or points). Bisecting loci between two geometric objects are such that each of their points is at the same distance from the two geometric objects. It is typically a curve, such as a line, circle or conic. Generally there is more than one elementary object which is the solution to a bisecting loci problem: each solution is described with one elementary bisecting locus. For example, the bisectors of two secant straight lines are two perpendicular straight lines. The GccInt package provides concrete implementations of the following elementary derived bisecting loci: - lines, circles, ellipses, hyperbolas and parabolas, and - points (not used in this context). The GccAna package provides numerous algorithms for computing the bisecting loci between circles, lines or points, whose solutions are these types of elementary bisecting locus.)#");
    py::class_<GccInt_BCirc ,opencascade::handle<GccInt_BCirc>  , GccInt_Bisec >(m,"GccInt_BCirc",R"#(Describes a circle as a bisecting curve between two 2D geometric objects (such as circles or points).Describes a circle as a bisecting curve between two 2D geometric objects (such as circles or points).Describes a circle as a bisecting curve between two 2D geometric objects (such as circles or points).)#");
    py::class_<GccInt_BElips ,opencascade::handle<GccInt_BElips>  , GccInt_Bisec >(m,"GccInt_BElips",R"#(Describes an ellipse as a bisecting curve between two 2D geometric objects (such as circles or points).Describes an ellipse as a bisecting curve between two 2D geometric objects (such as circles or points).Describes an ellipse as a bisecting curve between two 2D geometric objects (such as circles or points).)#");
    py::class_<GccInt_BHyper ,opencascade::handle<GccInt_BHyper>  , GccInt_Bisec >(m,"GccInt_BHyper",R"#(Describes a hyperbola as a bisecting curve between two 2D geometric objects (such as circles or points).Describes a hyperbola as a bisecting curve between two 2D geometric objects (such as circles or points).Describes a hyperbola as a bisecting curve between two 2D geometric objects (such as circles or points).)#");
    py::class_<GccInt_BLine ,opencascade::handle<GccInt_BLine>  , GccInt_Bisec >(m,"GccInt_BLine",R"#(Describes a line as a bisecting curve between two 2D geometric objects (such as lines, circles or points).Describes a line as a bisecting curve between two 2D geometric objects (such as lines, circles or points).Describes a line as a bisecting curve between two 2D geometric objects (such as lines, circles or points).)#");
    py::class_<GccInt_BParab ,opencascade::handle<GccInt_BParab>  , GccInt_Bisec >(m,"GccInt_BParab",R"#(Describes a parabola as a bisecting curve between two 2D geometric objects (such as lines, circles or points).Describes a parabola as a bisecting curve between two 2D geometric objects (such as lines, circles or points).Describes a parabola as a bisecting curve between two 2D geometric objects (such as lines, circles or points).)#");
    py::class_<GccInt_BPoint ,opencascade::handle<GccInt_BPoint>  , GccInt_Bisec >(m,"GccInt_BPoint",R"#(Describes a point as a bisecting object between two 2D geometric objects.Describes a point as a bisecting object between two 2D geometric objects.Describes a point as a bisecting object between two 2D geometric objects.)#");

};

// user-defined post-inclusion per module

// user-defined post
