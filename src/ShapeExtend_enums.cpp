
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <Message_Msg.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <ShapeExtend.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx>
#include <ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx>
#include <ShapeExtend_DataMapOfShapeListOfMsg.hxx>
#include <ShapeExtend_DataMapOfTransientListOfMsg.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_Parametrisation.hxx>
#include <ShapeExtend_Status.hxx>
#include <ShapeExtend_WireData.hxx>

// template related includes
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeExtend_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeExtend", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<ShapeExtend_Parametrisation>(m, "ShapeExtend_Parametrisation",R"#(Defines kind of global parametrisation on the composite surface each patch of the 1st row and column adds its range, Ui+1 = Ui + URange(i,1), etc. each patch gives range 1.: Ui = i-1, Vj = j-1 uniform parametrisation with global range [0,1])#")
        .value("ShapeExtend_Natural",ShapeExtend_Parametrisation::ShapeExtend_Natural)
        .value("ShapeExtend_Uniform",ShapeExtend_Parametrisation::ShapeExtend_Uniform)
        .value("ShapeExtend_Unitary",ShapeExtend_Parametrisation::ShapeExtend_Unitary).export_values();
    py::enum_<ShapeExtend_Status>(m, "ShapeExtend_Status",R"#(This enumeration is used in ShapeHealing toolkit for representing flags in the return statuses of class methods. The status is a field of the class which is set by one or several methods of that class. It is used for reporting about errors and other situations encountered during execution of the method. There are defined 8 values for DONE and 8 for FAIL flags: ShapeExtend_DONE1 ... ShapeExtend_DONE8, ShapeExtend_FAIL1 ... ShapeExtend_FAIL8 and also enumerations for representing combinations of flags: ShapeExtend_OK - no flags at all, ShapeExtend_DONE - any of flags DONEi, ShapeExtend_FAIL - any of flags FAILi. The class that uses statuses provides a method(s) which answers whether the flag corresponding to a given enumerative value is (are) set: Standard_Boolean Status(const ShapeExtend_Status test); Note that status can have several flags set simultaneously. Status(ShapeExtend_OK) gives True when no flags are set. Nothing done, everything OK Something was done, case 1 Something was done, case 2 Something was done, case 3 Something was done, case 4 Something was done, case 5 Something was done, case 6 Something was done, case 7 Something was done, case 8 Something was done (any of DONE#) The method failed, case 1 The method failed, case 2 The method failed, case 3 The method failed, case 4 The method failed, case 5 The method failed, case 6 The method failed, case 7 The method failed, case 8 The mathod failed (any of FAIL# occured))#")
        .value("ShapeExtend_OK",ShapeExtend_Status::ShapeExtend_OK)
        .value("ShapeExtend_DONE1",ShapeExtend_Status::ShapeExtend_DONE1)
        .value("ShapeExtend_DONE2",ShapeExtend_Status::ShapeExtend_DONE2)
        .value("ShapeExtend_DONE3",ShapeExtend_Status::ShapeExtend_DONE3)
        .value("ShapeExtend_DONE4",ShapeExtend_Status::ShapeExtend_DONE4)
        .value("ShapeExtend_DONE5",ShapeExtend_Status::ShapeExtend_DONE5)
        .value("ShapeExtend_DONE6",ShapeExtend_Status::ShapeExtend_DONE6)
        .value("ShapeExtend_DONE7",ShapeExtend_Status::ShapeExtend_DONE7)
        .value("ShapeExtend_DONE8",ShapeExtend_Status::ShapeExtend_DONE8)
        .value("ShapeExtend_DONE",ShapeExtend_Status::ShapeExtend_DONE)
        .value("ShapeExtend_FAIL1",ShapeExtend_Status::ShapeExtend_FAIL1)
        .value("ShapeExtend_FAIL2",ShapeExtend_Status::ShapeExtend_FAIL2)
        .value("ShapeExtend_FAIL3",ShapeExtend_Status::ShapeExtend_FAIL3)
        .value("ShapeExtend_FAIL4",ShapeExtend_Status::ShapeExtend_FAIL4)
        .value("ShapeExtend_FAIL5",ShapeExtend_Status::ShapeExtend_FAIL5)
        .value("ShapeExtend_FAIL6",ShapeExtend_Status::ShapeExtend_FAIL6)
        .value("ShapeExtend_FAIL7",ShapeExtend_Status::ShapeExtend_FAIL7)
        .value("ShapeExtend_FAIL8",ShapeExtend_Status::ShapeExtend_FAIL8)
        .value("ShapeExtend_FAIL",ShapeExtend_Status::ShapeExtend_FAIL).export_values();

//Python trampoline classes
    class Py_ShapeExtend_ComplexCurve : public ShapeExtend_ComplexCurve{
    public:
        using ShapeExtend_ComplexCurve::ShapeExtend_ComplexCurve;
        
        // public pure virtual
        Standard_Integer NbCurves() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,ShapeExtend_ComplexCurve,NbCurves,) };
        const opencascade::handle<Geom_Curve> & Curve(const Standard_Integer index) const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Geom_Curve> &,ShapeExtend_ComplexCurve,Curve,index) };
        Standard_Integer LocateParameter(const Standard_Real U,Standard_Real & UOut) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,ShapeExtend_ComplexCurve,LocateParameter,U,UOut) };
        Standard_Real LocalToGlobal(const Standard_Integer index,const Standard_Real Ulocal) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,ShapeExtend_ComplexCurve,LocalToGlobal,index,Ulocal) };
        Standard_Real GetScaleFactor(const Standard_Integer ind) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,ShapeExtend_ComplexCurve,GetScaleFactor,ind) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<ShapeExtend_WireData ,opencascade::handle<ShapeExtend_WireData>  , Standard_Transient >(m,"ShapeExtend_WireData",R"#(This class provides a data structure necessary for work with the wire as with ordered list of edges, what is required for many algorithms. The advantage of this class is that it allows to work with wires which are not correct. The object of the class ShapeExtend_WireData can be initialized by TopoDS_Wire, and converted back to TopoDS_Wire. An edge in the wire is defined by its rank number. Operations of accessing, adding and removing edge at the given rank number are provided. On the whole wire, operations of circular permutation and reversing (both orientations of all edges and order of edges) are provided as well. This class also provides a method to check if the edge in the wire is a seam (if the wire lies on a face). This class is handled by reference. Such an approach gives the following advantages: 1. Sharing the object of this class strongly optimizes the processes of analysis and fixing performed in parallel on the wire stored in the form of this class. Fixing tool (e.g. ShapeFix_Wire) fixes problems one by one using analyzing tool (e.g. ShapeAnalysis_Wire). Sharing allows not to reinitialize each time the analyzing tool with modified ShapeExtend_WireData what consumes certain time. 2. No copying of contents. The object of ShapeExtend_WireData class has quite big size, returning it as a result of the function would cause additional copying of contents if this class were one handled by value. Moreover, this class is stored as a field in other classes which are they returned as results of functions, storing only a handle to ShapeExtend_WireData saves time and memory.This class provides a data structure necessary for work with the wire as with ordered list of edges, what is required for many algorithms. The advantage of this class is that it allows to work with wires which are not correct. The object of the class ShapeExtend_WireData can be initialized by TopoDS_Wire, and converted back to TopoDS_Wire. An edge in the wire is defined by its rank number. Operations of accessing, adding and removing edge at the given rank number are provided. On the whole wire, operations of circular permutation and reversing (both orientations of all edges and order of edges) are provided as well. This class also provides a method to check if the edge in the wire is a seam (if the wire lies on a face). This class is handled by reference. Such an approach gives the following advantages: 1. Sharing the object of this class strongly optimizes the processes of analysis and fixing performed in parallel on the wire stored in the form of this class. Fixing tool (e.g. ShapeFix_Wire) fixes problems one by one using analyzing tool (e.g. ShapeAnalysis_Wire). Sharing allows not to reinitialize each time the analyzing tool with modified ShapeExtend_WireData what consumes certain time. 2. No copying of contents. The object of ShapeExtend_WireData class has quite big size, returning it as a result of the function would cause additional copying of contents if this class were one handled by value. Moreover, this class is stored as a field in other classes which are they returned as results of functions, storing only a handle to ShapeExtend_WireData saves time and memory.This class provides a data structure necessary for work with the wire as with ordered list of edges, what is required for many algorithms. The advantage of this class is that it allows to work with wires which are not correct. The object of the class ShapeExtend_WireData can be initialized by TopoDS_Wire, and converted back to TopoDS_Wire. An edge in the wire is defined by its rank number. Operations of accessing, adding and removing edge at the given rank number are provided. On the whole wire, operations of circular permutation and reversing (both orientations of all edges and order of edges) are provided as well. This class also provides a method to check if the edge in the wire is a seam (if the wire lies on a face). This class is handled by reference. Such an approach gives the following advantages: 1. Sharing the object of this class strongly optimizes the processes of analysis and fixing performed in parallel on the wire stored in the form of this class. Fixing tool (e.g. ShapeFix_Wire) fixes problems one by one using analyzing tool (e.g. ShapeAnalysis_Wire). Sharing allows not to reinitialize each time the analyzing tool with modified ShapeExtend_WireData what consumes certain time. 2. No copying of contents. The object of ShapeExtend_WireData class has quite big size, returning it as a result of the function would cause additional copying of contents if this class were one handled by value. Moreover, this class is stored as a field in other classes which are they returned as results of functions, storing only a handle to ShapeExtend_WireData saves time and memory.)#");
    py::class_<ShapeExtend_CompositeSurface ,opencascade::handle<ShapeExtend_CompositeSurface>  , Geom_Surface >(m,"ShapeExtend_CompositeSurface",R"#(Composite surface is represented by a grid of surfaces (patches) connected geometrically. Patches may have different parametrisation ranges, but they should be parametrised in the same manner so that parameter of each patch (u,v) can be converted to global parameter on the whole surface (U,V) with help of linear transformation:Composite surface is represented by a grid of surfaces (patches) connected geometrically. Patches may have different parametrisation ranges, but they should be parametrised in the same manner so that parameter of each patch (u,v) can be converted to global parameter on the whole surface (U,V) with help of linear transformation:Composite surface is represented by a grid of surfaces (patches) connected geometrically. Patches may have different parametrisation ranges, but they should be parametrised in the same manner so that parameter of each patch (u,v) can be converted to global parameter on the whole surface (U,V) with help of linear transformation:)#");
    py::class_<ShapeExtend ,std::unique_ptr<ShapeExtend>  >(m,"ShapeExtend",R"#(This package provides general tools and data structures common for other packages in SHAPEWORKS and extending CAS.CADE structures. The following items are provided by this package: - enumeration Status used for coding status flags in methods inside the SHAPEWORKS - enumeration Parametrisation used for setting global parametrisation on the composite surface - class CompositeSurface representing a composite surface made of a grid of surface patches - class WireData representing a wire in the form of ordered list of edges - class MsgRegistrator for attaching messages to the objects - tools for exploring the shapes - tools for creating new shapes.)#");
    py::class_<ShapeExtend_Explorer ,std::unique_ptr<ShapeExtend_Explorer>  >(m,"ShapeExtend_Explorer",R"#(This class is intended to explore shapes and convert different representations (list, sequence, compound) of complex shapes. It provides tools for: - obtaining type of the shapes in context of TopoDS_Compound, - exploring shapes in context of TopoDS_Compound, - converting different representations of shapes (list, sequence, compound).)#");
    py::class_<ShapeExtend_ComplexCurve ,opencascade::handle<ShapeExtend_ComplexCurve> ,Py_ShapeExtend_ComplexCurve , Geom_Curve >(m,"ShapeExtend_ComplexCurve",R"#(Defines a curve which consists of several segments. Implements basic interface to it.Defines a curve which consists of several segments. Implements basic interface to it.Defines a curve which consists of several segments. Implements basic interface to it.)#");
    py::class_<ShapeExtend_BasicMsgRegistrator ,opencascade::handle<ShapeExtend_BasicMsgRegistrator>  , Standard_Transient >(m,"ShapeExtend_BasicMsgRegistrator",R"#(Abstract class that can be used for attaching messages to the objects (e.g. shapes). It is used by ShapeHealing algorithms to attach a message describing encountered case (e.g. removing small edge from a wire).Abstract class that can be used for attaching messages to the objects (e.g. shapes). It is used by ShapeHealing algorithms to attach a message describing encountered case (e.g. removing small edge from a wire).Abstract class that can be used for attaching messages to the objects (e.g. shapes). It is used by ShapeHealing algorithms to attach a message describing encountered case (e.g. removing small edge from a wire).)#");
    py::class_<ShapeExtend_MsgRegistrator ,opencascade::handle<ShapeExtend_MsgRegistrator>  , ShapeExtend_BasicMsgRegistrator >(m,"ShapeExtend_MsgRegistrator",R"#(Attaches messages to the objects (generic Transient or shape). The objects of this class are transmitted to the Shape Healing algorithms so that they could collect messages occurred during processing.Attaches messages to the objects (generic Transient or shape). The objects of this class are transmitted to the Shape Healing algorithms so that they could collect messages occurred during processing.Attaches messages to the objects (generic Transient or shape). The objects of this class are transmitted to the Shape Healing algorithms so that they could collect messages occurred during processing.)#");

// pre-register typdefs
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, Message_ListOfMsg, TopTools_ShapeMapHasher>(m,"ShapeExtend_DataMapOfShapeListOfMsg");  
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx
// ./opencascade/ShapeExtend_Parametrisation.hxx
// ./opencascade/ShapeExtend_WireData.hxx
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx
// ./opencascade/ShapeExtend_Explorer.hxx
// ./opencascade/ShapeExtend_MsgRegistrator.hxx
// ./opencascade/ShapeExtend_CompositeSurface.hxx
// ./opencascade/ShapeExtend_ComplexCurve.hxx
// ./opencascade/ShapeExtend.hxx
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
    preregister_template_NCollection_DataMap<opencascade::handle<Standard_Transient>, Message_ListOfMsg, TColStd_MapTransientHasher>(m,"ShapeExtend_DataMapOfTransientListOfMsg");  
// ./opencascade/ShapeExtend_Status.hxx
// ./opencascade/ShapeExtend_BasicMsgRegistrator.hxx

};

// user-defined post-inclusion per module

// user-defined post
