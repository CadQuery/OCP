
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
// ./opencascade/TColgp_Array1OfPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfPnt.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfVec.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfDir2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfXYZ.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfLin2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfDir.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfXY.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfXYZ.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfDir.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfXYZ.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfXY.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfDir2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfCirc2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfPnt.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfAx1.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfLin2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfDir.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfXY.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfVec.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfDir2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfVec.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfPnt.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array2OfPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfPnt2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_Array1OfVec2d.hxx
#include "NCollection.hxx"
// ./opencascade/TColgp_SequenceOfArray1OfPnt2d.hxx
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

// classes forward declarations only
    py::class_<TColgp_HArray1OfVec ,std::unique_ptr<TColgp_HArray1OfVec>  >(m,"TColgp_HArray1OfVec",R"#()#");
    py::class_<TColgp_HArray2OfDir2d ,std::unique_ptr<TColgp_HArray2OfDir2d>  >(m,"TColgp_HArray2OfDir2d",R"#()#");
    py::class_<TColgp_HSequenceOfDir ,std::unique_ptr<TColgp_HSequenceOfDir>  >(m,"TColgp_HSequenceOfDir",R"#()#");
    py::class_<TColgp_HArray1OfXY ,std::unique_ptr<TColgp_HArray1OfXY>  >(m,"TColgp_HArray1OfXY",R"#()#");
    py::class_<TColgp_HSequenceOfVec2d ,std::unique_ptr<TColgp_HSequenceOfVec2d>  >(m,"TColgp_HSequenceOfVec2d",R"#()#");
    py::class_<TColgp_HArray2OfDir ,std::unique_ptr<TColgp_HArray2OfDir>  >(m,"TColgp_HArray2OfDir",R"#()#");
    py::class_<TColgp_HArray2OfPnt2d ,std::unique_ptr<TColgp_HArray2OfPnt2d>  >(m,"TColgp_HArray2OfPnt2d",R"#()#");
    py::class_<TColgp_HArray2OfXY ,std::unique_ptr<TColgp_HArray2OfXY>  >(m,"TColgp_HArray2OfXY",R"#()#");
    py::class_<TColgp_HArray2OfVec2d ,std::unique_ptr<TColgp_HArray2OfVec2d>  >(m,"TColgp_HArray2OfVec2d",R"#()#");
    py::class_<TColgp_HArray1OfPnt2d ,std::unique_ptr<TColgp_HArray1OfPnt2d>  >(m,"TColgp_HArray1OfPnt2d",R"#()#");
    py::class_<TColgp_HArray2OfCirc2d ,std::unique_ptr<TColgp_HArray2OfCirc2d>  >(m,"TColgp_HArray2OfCirc2d",R"#()#");
    py::class_<TColgp_HArray1OfCirc2d ,std::unique_ptr<TColgp_HArray1OfCirc2d>  >(m,"TColgp_HArray1OfCirc2d",R"#()#");
    py::class_<TColgp_HSequenceOfVec ,std::unique_ptr<TColgp_HSequenceOfVec>  >(m,"TColgp_HSequenceOfVec",R"#()#");
    py::class_<TColgp_HSequenceOfXY ,std::unique_ptr<TColgp_HSequenceOfXY>  >(m,"TColgp_HSequenceOfXY",R"#()#");
    py::class_<TColgp_HArray1OfDir ,std::unique_ptr<TColgp_HArray1OfDir>  >(m,"TColgp_HArray1OfDir",R"#()#");
    py::class_<TColgp_HArray1OfDir2d ,std::unique_ptr<TColgp_HArray1OfDir2d>  >(m,"TColgp_HArray1OfDir2d",R"#()#");
    py::class_<TColgp_HArray1OfXYZ ,std::unique_ptr<TColgp_HArray1OfXYZ>  >(m,"TColgp_HArray1OfXYZ",R"#()#");
    py::class_<TColgp_HArray2OfXYZ ,std::unique_ptr<TColgp_HArray2OfXYZ>  >(m,"TColgp_HArray2OfXYZ",R"#()#");
    py::class_<TColgp_HArray1OfLin2d ,std::unique_ptr<TColgp_HArray1OfLin2d>  >(m,"TColgp_HArray1OfLin2d",R"#()#");
    py::class_<TColgp_HArray2OfLin2d ,std::unique_ptr<TColgp_HArray2OfLin2d>  >(m,"TColgp_HArray2OfLin2d",R"#()#");
    py::class_<TColgp_HArray2OfPnt ,std::unique_ptr<TColgp_HArray2OfPnt>  >(m,"TColgp_HArray2OfPnt",R"#()#");
    py::class_<TColgp_HSequenceOfPnt ,std::unique_ptr<TColgp_HSequenceOfPnt>  >(m,"TColgp_HSequenceOfPnt",R"#()#");
    py::class_<TColgp_HSequenceOfDir2d ,std::unique_ptr<TColgp_HSequenceOfDir2d>  >(m,"TColgp_HSequenceOfDir2d",R"#()#");
    py::class_<TColgp_HSequenceOfXYZ ,std::unique_ptr<TColgp_HSequenceOfXYZ>  >(m,"TColgp_HSequenceOfXYZ",R"#()#");
    py::class_<TColgp_HArray1OfVec2d ,std::unique_ptr<TColgp_HArray1OfVec2d>  >(m,"TColgp_HArray1OfVec2d",R"#()#");
    py::class_<TColgp_HSequenceOfPnt2d ,std::unique_ptr<TColgp_HSequenceOfPnt2d>  >(m,"TColgp_HSequenceOfPnt2d",R"#()#");
    py::class_<TColgp_HArray1OfPnt ,std::unique_ptr<TColgp_HArray1OfPnt>  >(m,"TColgp_HArray1OfPnt",R"#()#");
    py::class_<TColgp_HArray2OfVec ,std::unique_ptr<TColgp_HArray2OfVec>  >(m,"TColgp_HArray2OfVec",R"#()#");

// pre-register typdefs
// ./opencascade/TColgp_HArray1OfVec.hxx
// ./opencascade/TColgp_Array1OfPnt2d.hxx
    preregister_template_NCollection_Array1<gp_Pnt2d>(m,"TColgp_Array1OfPnt2d");  
// ./opencascade/TColgp_Array2OfPnt.hxx
    preregister_template_NCollection_Array2<gp_Pnt>(m,"TColgp_Array2OfPnt");  
// ./opencascade/TColgp_HArray1OfDir.hxx
// ./opencascade/TColgp_Array2OfVec.hxx
    preregister_template_NCollection_Array2<gp_Vec>(m,"TColgp_Array2OfVec");  
// ./opencascade/TColgp_SequenceOfDir2d.hxx
    preregister_template_NCollection_Sequence<gp_Dir2d>(m,"TColgp_SequenceOfDir2d");  
// ./opencascade/TColgp_SequenceOfXYZ.hxx
    preregister_template_NCollection_Sequence<gp_XYZ>(m,"TColgp_SequenceOfXYZ");  
// ./opencascade/TColgp_HArray2OfDir2d.hxx
// ./opencascade/TColgp_HSequenceOfPnt.hxx
// ./opencascade/TColgp_Array1OfLin2d.hxx
    preregister_template_NCollection_Array1<gp_Lin2d>(m,"TColgp_Array1OfLin2d");  
// ./opencascade/TColgp_HSequenceOfDir.hxx
// ./opencascade/TColgp_HArray1OfDir2d.hxx
// ./opencascade/TColgp_SequenceOfDir.hxx
    preregister_template_NCollection_Sequence<gp_Dir>(m,"TColgp_SequenceOfDir");  
// ./opencascade/TColgp_Array2OfXY.hxx
    preregister_template_NCollection_Array2<gp_XY>(m,"TColgp_Array2OfXY");  
// ./opencascade/TColgp_HArray1OfXY.hxx
// ./opencascade/TColgp_Array2OfXYZ.hxx
    preregister_template_NCollection_Array2<gp_XYZ>(m,"TColgp_Array2OfXYZ");  
// ./opencascade/TColgp_HSequenceOfPnt2d.hxx
// ./opencascade/TColgp_HSequenceOfVec2d.hxx
// ./opencascade/TColgp_Array1OfDir.hxx
    preregister_template_NCollection_Array1<gp_Dir>(m,"TColgp_Array1OfDir");  
// ./opencascade/TColgp_Array1OfXYZ.hxx
    preregister_template_NCollection_Array1<gp_XYZ>(m,"TColgp_Array1OfXYZ");  
// ./opencascade/TColgp_Array1OfXY.hxx
    preregister_template_NCollection_Array1<gp_XY>(m,"TColgp_Array1OfXY");  
// ./opencascade/TColgp_HArray1OfXYZ.hxx
// ./opencascade/TColgp_Array2OfDir2d.hxx
    preregister_template_NCollection_Array2<gp_Dir2d>(m,"TColgp_Array2OfDir2d");  
// ./opencascade/TColgp_HArray2OfDir.hxx
// ./opencascade/TColgp_HSequenceOfDir2d.hxx
// ./opencascade/TColgp_SequenceOfVec2d.hxx
    preregister_template_NCollection_Sequence<gp_Vec2d>(m,"TColgp_SequenceOfVec2d");  
// ./opencascade/TColgp_HArray2OfPnt2d.hxx
// ./opencascade/TColgp_HArray2OfXYZ.hxx
// ./opencascade/TColgp_Array1OfCirc2d.hxx
    preregister_template_NCollection_Array1<gp_Circ2d>(m,"TColgp_Array1OfCirc2d");  
// ./opencascade/TColgp_HArray2OfXY.hxx
// ./opencascade/TColgp_SequenceOfPnt.hxx
    preregister_template_NCollection_Sequence<gp_Pnt>(m,"TColgp_SequenceOfPnt");  
// ./opencascade/TColgp_SequenceOfAx1.hxx
    preregister_template_NCollection_Sequence<gp_Ax1>(m,"TColgp_SequenceOfAx1");  
// ./opencascade/TColgp_HArray2OfVec.hxx
// ./opencascade/TColgp_HArray2OfVec2d.hxx
// ./opencascade/TColgp_HArray1OfLin2d.hxx
// ./opencascade/TColgp_HArray1OfPnt2d.hxx
// ./opencascade/TColgp_Array2OfLin2d.hxx
    preregister_template_NCollection_Array2<gp_Lin2d>(m,"TColgp_Array2OfLin2d");  
// ./opencascade/TColgp_HSequenceOfXYZ.hxx
// ./opencascade/TColgp_Array2OfDir.hxx
    preregister_template_NCollection_Array2<gp_Dir>(m,"TColgp_Array2OfDir");  
// ./opencascade/TColgp_SequenceOfXY.hxx
    preregister_template_NCollection_Sequence<gp_XY>(m,"TColgp_SequenceOfXY");  
// ./opencascade/TColgp_Array1OfVec.hxx
    preregister_template_NCollection_Array1<gp_Vec>(m,"TColgp_Array1OfVec");  
// ./opencascade/TColgp_Array2OfVec2d.hxx
    preregister_template_NCollection_Array2<gp_Vec2d>(m,"TColgp_Array2OfVec2d");  
// ./opencascade/TColgp_HArray2OfCirc2d.hxx
// ./opencascade/TColgp_HArray2OfLin2d.hxx
// ./opencascade/TColgp_Array1OfDir2d.hxx
    preregister_template_NCollection_Array1<gp_Dir2d>(m,"TColgp_Array1OfDir2d");  
// ./opencascade/TColgp_HArray1OfCirc2d.hxx
// ./opencascade/TColgp_HArray1OfPnt.hxx
// ./opencascade/TColgp_HSequenceOfVec.hxx
// ./opencascade/TColgp_SequenceOfVec.hxx
    preregister_template_NCollection_Sequence<gp_Vec>(m,"TColgp_SequenceOfVec");  
// ./opencascade/TColgp_Array1OfPnt.hxx
    preregister_template_NCollection_Array1<gp_Pnt>(m,"TColgp_Array1OfPnt");  
// ./opencascade/TColgp_Array2OfPnt2d.hxx
    preregister_template_NCollection_Array2<gp_Pnt2d>(m,"TColgp_Array2OfPnt2d");  
// ./opencascade/TColgp_HArray2OfPnt.hxx
// ./opencascade/TColgp_SequenceOfPnt2d.hxx
    preregister_template_NCollection_Sequence<gp_Pnt2d>(m,"TColgp_SequenceOfPnt2d");  
// ./opencascade/TColgp_Array1OfVec2d.hxx
    preregister_template_NCollection_Array1<gp_Vec2d>(m,"TColgp_Array1OfVec2d");  
// ./opencascade/TColgp_SequenceOfArray1OfPnt2d.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<TColgp_HArray1OfPnt2d> >(m,"TColgp_SequenceOfArray1OfPnt2d");  
// ./opencascade/TColgp_HSequenceOfXY.hxx
// ./opencascade/TColgp_Array2OfCirc2d.hxx
    preregister_template_NCollection_Array2<gp_Circ2d>(m,"TColgp_Array2OfCirc2d");  
// ./opencascade/TColgp_HArray1OfVec2d.hxx

};

// user-defined post-inclusion per module

// user-defined post
