
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <TColgp_Array1OfCirc2d.hxx>
#include <TColgp_Array1OfDir.hxx>
#include <TColgp_Array1OfDir2d.hxx>
#include <TColgp_Array1OfLin2d.hxx>
#include <TColgp_Array1OfPnt.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TColgp_Array1OfVec.hxx>
#include <TColgp_Array1OfVec2d.hxx>
#include <TColgp_Array1OfXY.hxx>
#include <TColgp_Array1OfXYZ.hxx>
#include <TColgp_Array2OfCirc2d.hxx>
#include <TColgp_Array2OfDir.hxx>
#include <TColgp_Array2OfDir2d.hxx>
#include <TColgp_Array2OfLin2d.hxx>
#include <TColgp_Array2OfPnt.hxx>
#include <TColgp_Array2OfPnt2d.hxx>
#include <TColgp_Array2OfVec.hxx>
#include <TColgp_Array2OfVec2d.hxx>
#include <TColgp_Array2OfXY.hxx>
#include <TColgp_Array2OfXYZ.hxx>
#include <TColgp_HArray1OfCirc2d.hxx>
#include <TColgp_HArray1OfDir.hxx>
#include <TColgp_HArray1OfDir2d.hxx>
#include <TColgp_HArray1OfLin2d.hxx>
#include <TColgp_HArray1OfPnt.hxx>
#include <TColgp_HArray1OfPnt2d.hxx>
#include <TColgp_HArray1OfVec.hxx>
#include <TColgp_HArray1OfVec2d.hxx>
#include <TColgp_HArray1OfXY.hxx>
#include <TColgp_HArray1OfXYZ.hxx>
#include <TColgp_HArray2OfCirc2d.hxx>
#include <TColgp_HArray2OfDir.hxx>
#include <TColgp_HArray2OfDir2d.hxx>
#include <TColgp_HArray2OfLin2d.hxx>
#include <TColgp_HArray2OfPnt.hxx>
#include <TColgp_HArray2OfPnt2d.hxx>
#include <TColgp_HArray2OfVec.hxx>
#include <TColgp_HArray2OfVec2d.hxx>
#include <TColgp_HArray2OfXY.hxx>
#include <TColgp_HArray2OfXYZ.hxx>
#include <TColgp_HSequenceOfDir.hxx>
#include <TColgp_HSequenceOfDir2d.hxx>
#include <TColgp_HSequenceOfPnt.hxx>
#include <TColgp_HSequenceOfPnt2d.hxx>
#include <TColgp_HSequenceOfVec.hxx>
#include <TColgp_HSequenceOfVec2d.hxx>
#include <TColgp_HSequenceOfXY.hxx>
#include <TColgp_HSequenceOfXYZ.hxx>
#include <TColgp_SequenceOfArray1OfPnt2d.hxx>
#include <TColgp_SequenceOfAx1.hxx>
#include <TColgp_SequenceOfDir.hxx>
#include <TColgp_SequenceOfDir2d.hxx>
#include <TColgp_SequenceOfPnt.hxx>
#include <TColgp_SequenceOfPnt2d.hxx>
#include <TColgp_SequenceOfVec.hxx>
#include <TColgp_SequenceOfVec2d.hxx>
#include <TColgp_SequenceOfXY.hxx>
#include <TColgp_SequenceOfXYZ.hxx>

// template related includes
// ./opencascade/TColgp_Array2OfDir2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfVec.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfPnt.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfVec.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfPnt.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfPnt.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfXYZ.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfXY.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfDir.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfXYZ.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfDir.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfVec.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfDir2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfCirc2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfLin2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfDir2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfLin2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfAx1.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfXYZ.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfArray1OfPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfXY.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfXY.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfDir.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfCirc2d.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColgp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TColgp", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array2<gp_Dir2d>(m,"TColgp_Array2OfDir2d");  
    preregister_template_NCollection_Array1<gp_Pnt2d>(m,"TColgp_Array1OfPnt2d");  
    preregister_template_NCollection_Sequence<gp_Vec2d>(m,"TColgp_SequenceOfVec2d");  
    preregister_template_NCollection_Array1<gp_Vec>(m,"TColgp_Array1OfVec");  
    preregister_template_NCollection_Array2<gp_Pnt>(m,"TColgp_Array2OfPnt");  
    preregister_template_NCollection_Sequence<gp_Vec>(m,"TColgp_SequenceOfVec");  
    preregister_template_NCollection_Array1<gp_Pnt>(m,"TColgp_Array1OfPnt");  
    preregister_template_NCollection_Sequence<gp_Pnt>(m,"TColgp_SequenceOfPnt");  
    preregister_template_NCollection_Array2<gp_Vec2d>(m,"TColgp_Array2OfVec2d");  
    preregister_template_NCollection_Array1<gp_XYZ>(m,"TColgp_Array1OfXYZ");  
    preregister_template_NCollection_Array2<gp_XY>(m,"TColgp_Array2OfXY");  
    preregister_template_NCollection_Array2<gp_Dir>(m,"TColgp_Array2OfDir");  
    preregister_template_NCollection_Array2<gp_XYZ>(m,"TColgp_Array2OfXYZ");  
    preregister_template_NCollection_Array1<gp_Dir>(m,"TColgp_Array1OfDir");  
    preregister_template_NCollection_Array2<gp_Vec>(m,"TColgp_Array2OfVec");  
    preregister_template_NCollection_Array1<gp_Dir2d>(m,"TColgp_Array1OfDir2d");  
    preregister_template_NCollection_Array1<gp_Vec2d>(m,"TColgp_Array1OfVec2d");  
    preregister_template_NCollection_Array2<gp_Pnt2d>(m,"TColgp_Array2OfPnt2d");  
    preregister_template_NCollection_Array1<gp_Circ2d>(m,"TColgp_Array1OfCirc2d");  
    preregister_template_NCollection_Array2<gp_Lin2d>(m,"TColgp_Array2OfLin2d");  
    preregister_template_NCollection_Sequence<gp_Dir2d>(m,"TColgp_SequenceOfDir2d");  
    preregister_template_NCollection_Array1<gp_Lin2d>(m,"TColgp_Array1OfLin2d");  
    preregister_template_NCollection_Sequence<gp_Ax1>(m,"TColgp_SequenceOfAx1");  
    preregister_template_NCollection_Sequence<gp_XYZ>(m,"TColgp_SequenceOfXYZ");  
    preregister_template_NCollection_Sequence<opencascade::handle<TColgp_HArray1OfPnt2d> >(m,"TColgp_SequenceOfArray1OfPnt2d");  
    preregister_template_NCollection_Sequence<gp_XY>(m,"TColgp_SequenceOfXY");  
    preregister_template_NCollection_Array1<gp_XY>(m,"TColgp_Array1OfXY");  
    preregister_template_NCollection_Sequence<gp_Dir>(m,"TColgp_SequenceOfDir");  
    preregister_template_NCollection_Sequence<gp_Pnt2d>(m,"TColgp_SequenceOfPnt2d");  
    preregister_template_NCollection_Array2<gp_Circ2d>(m,"TColgp_Array2OfCirc2d");  

// classes forward declarations only
    py::class_<TColgp_HArray1OfCirc2d ,opencascade::handle<TColgp_HArray1OfCirc2d>  , TColgp_Array1OfCirc2d , Standard_Transient >(m,"TColgp_HArray1OfCirc2d",R"#()#");
    py::class_<TColgp_HArray1OfDir ,opencascade::handle<TColgp_HArray1OfDir>  , TColgp_Array1OfDir , Standard_Transient >(m,"TColgp_HArray1OfDir",R"#()#");
    py::class_<TColgp_HArray1OfDir2d ,opencascade::handle<TColgp_HArray1OfDir2d>  , TColgp_Array1OfDir2d , Standard_Transient >(m,"TColgp_HArray1OfDir2d",R"#()#");
    py::class_<TColgp_HArray1OfLin2d ,opencascade::handle<TColgp_HArray1OfLin2d>  , TColgp_Array1OfLin2d , Standard_Transient >(m,"TColgp_HArray1OfLin2d",R"#()#");
    py::class_<TColgp_HArray1OfPnt ,opencascade::handle<TColgp_HArray1OfPnt>  , TColgp_Array1OfPnt , Standard_Transient >(m,"TColgp_HArray1OfPnt",R"#()#");
    py::class_<TColgp_HArray1OfPnt2d ,opencascade::handle<TColgp_HArray1OfPnt2d>  , TColgp_Array1OfPnt2d , Standard_Transient >(m,"TColgp_HArray1OfPnt2d",R"#()#");
    py::class_<TColgp_HArray1OfVec ,opencascade::handle<TColgp_HArray1OfVec>  , TColgp_Array1OfVec , Standard_Transient >(m,"TColgp_HArray1OfVec",R"#()#");
    py::class_<TColgp_HArray1OfVec2d ,opencascade::handle<TColgp_HArray1OfVec2d>  , TColgp_Array1OfVec2d , Standard_Transient >(m,"TColgp_HArray1OfVec2d",R"#()#");
    py::class_<TColgp_HArray1OfXY ,opencascade::handle<TColgp_HArray1OfXY>  , TColgp_Array1OfXY , Standard_Transient >(m,"TColgp_HArray1OfXY",R"#()#");
    py::class_<TColgp_HArray1OfXYZ ,opencascade::handle<TColgp_HArray1OfXYZ>  , TColgp_Array1OfXYZ , Standard_Transient >(m,"TColgp_HArray1OfXYZ",R"#()#");
    py::class_<TColgp_HArray2OfCirc2d ,opencascade::handle<TColgp_HArray2OfCirc2d>  , TColgp_Array2OfCirc2d , Standard_Transient >(m,"TColgp_HArray2OfCirc2d",R"#()#");
    py::class_<TColgp_HArray2OfDir ,opencascade::handle<TColgp_HArray2OfDir>  , TColgp_Array2OfDir , Standard_Transient >(m,"TColgp_HArray2OfDir",R"#()#");
    py::class_<TColgp_HArray2OfDir2d ,opencascade::handle<TColgp_HArray2OfDir2d>  , TColgp_Array2OfDir2d , Standard_Transient >(m,"TColgp_HArray2OfDir2d",R"#()#");
    py::class_<TColgp_HArray2OfLin2d ,opencascade::handle<TColgp_HArray2OfLin2d>  , TColgp_Array2OfLin2d , Standard_Transient >(m,"TColgp_HArray2OfLin2d",R"#()#");
    py::class_<TColgp_HArray2OfPnt ,opencascade::handle<TColgp_HArray2OfPnt>  , TColgp_Array2OfPnt , Standard_Transient >(m,"TColgp_HArray2OfPnt",R"#()#");
    py::class_<TColgp_HArray2OfPnt2d ,opencascade::handle<TColgp_HArray2OfPnt2d>  , TColgp_Array2OfPnt2d , Standard_Transient >(m,"TColgp_HArray2OfPnt2d",R"#()#");
    py::class_<TColgp_HArray2OfVec ,opencascade::handle<TColgp_HArray2OfVec>  , TColgp_Array2OfVec , Standard_Transient >(m,"TColgp_HArray2OfVec",R"#()#");
    py::class_<TColgp_HArray2OfVec2d ,opencascade::handle<TColgp_HArray2OfVec2d>  , TColgp_Array2OfVec2d , Standard_Transient >(m,"TColgp_HArray2OfVec2d",R"#()#");
    py::class_<TColgp_HArray2OfXY ,opencascade::handle<TColgp_HArray2OfXY>  , TColgp_Array2OfXY , Standard_Transient >(m,"TColgp_HArray2OfXY",R"#()#");
    py::class_<TColgp_HArray2OfXYZ ,opencascade::handle<TColgp_HArray2OfXYZ>  , TColgp_Array2OfXYZ , Standard_Transient >(m,"TColgp_HArray2OfXYZ",R"#()#");
    py::class_<TColgp_HSequenceOfDir ,opencascade::handle<TColgp_HSequenceOfDir>  , TColgp_SequenceOfDir , Standard_Transient >(m,"TColgp_HSequenceOfDir",R"#()#");
    py::class_<TColgp_HSequenceOfDir2d ,opencascade::handle<TColgp_HSequenceOfDir2d>  , TColgp_SequenceOfDir2d , Standard_Transient >(m,"TColgp_HSequenceOfDir2d",R"#()#");
    py::class_<TColgp_HSequenceOfPnt ,opencascade::handle<TColgp_HSequenceOfPnt>  , TColgp_SequenceOfPnt , Standard_Transient >(m,"TColgp_HSequenceOfPnt",R"#()#");
    py::class_<TColgp_HSequenceOfPnt2d ,opencascade::handle<TColgp_HSequenceOfPnt2d>  , TColgp_SequenceOfPnt2d , Standard_Transient >(m,"TColgp_HSequenceOfPnt2d",R"#()#");
    py::class_<TColgp_HSequenceOfVec ,opencascade::handle<TColgp_HSequenceOfVec>  , TColgp_SequenceOfVec , Standard_Transient >(m,"TColgp_HSequenceOfVec",R"#()#");
    py::class_<TColgp_HSequenceOfVec2d ,opencascade::handle<TColgp_HSequenceOfVec2d>  , TColgp_SequenceOfVec2d , Standard_Transient >(m,"TColgp_HSequenceOfVec2d",R"#()#");
    py::class_<TColgp_HSequenceOfXY ,opencascade::handle<TColgp_HSequenceOfXY>  , TColgp_SequenceOfXY , Standard_Transient >(m,"TColgp_HSequenceOfXY",R"#()#");
    py::class_<TColgp_HSequenceOfXYZ ,opencascade::handle<TColgp_HSequenceOfXYZ>  , TColgp_SequenceOfXYZ , Standard_Transient >(m,"TColgp_HSequenceOfXYZ",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
