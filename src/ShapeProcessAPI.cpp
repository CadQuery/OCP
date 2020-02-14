
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeProcess_ShapeContext.hxx>

// module includes
#include <ShapeProcessAPI_ApplySequence.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeProcessAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeProcessAPI"));


//Python trampoline classes

// classes


    static_cast<py::class_<ShapeProcessAPI_ApplySequence , shared_ptr<ShapeProcessAPI_ApplySequence>  >>(m.attr("ShapeProcessAPI_ApplySequence"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_CString >()  , py::arg("rscName"),  py::arg("seqName")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("Context",
             (opencascade::handle<ShapeProcess_ShapeContext> & (ShapeProcessAPI_ApplySequence::*)() ) static_cast<opencascade::handle<ShapeProcess_ShapeContext> & (ShapeProcessAPI_ApplySequence::*)() >(&ShapeProcessAPI_ApplySequence::Context),
             R"#(Returns object for managing resource file and sequence of operators.)#" )
        .def("PrepareShape",
             (TopoDS_Shape (ShapeProcessAPI_ApplySequence::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const TopAbs_ShapeEnum  ) ) static_cast<TopoDS_Shape (ShapeProcessAPI_ApplySequence::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const TopAbs_ShapeEnum  ) >(&ShapeProcessAPI_ApplySequence::PrepareShape),
             R"#(Performs sequence of operators stored in myRsc. If <fillmap> is True adds history "shape-shape" into myMap for shape and its subshapes until level <until> (included). If <until> is TopAbs_SHAPE, all the subshapes are considered.)#"  , py::arg("shape"),  py::arg("fillmap")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("until")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("ClearMap",
             (void (ShapeProcessAPI_ApplySequence::*)() ) static_cast<void (ShapeProcessAPI_ApplySequence::*)() >(&ShapeProcessAPI_ApplySequence::ClearMap),
             R"#(Clears myMap with accumulated history.)#" )
        .def("Map",
             (const TopTools_DataMapOfShapeShape & (ShapeProcessAPI_ApplySequence::*)() const) static_cast<const TopTools_DataMapOfShapeShape & (ShapeProcessAPI_ApplySequence::*)() const>(&ShapeProcessAPI_ApplySequence::Map),
             R"#(Returns myMap with accumulated history.)#" )
        .def("PrintPreparationResult",
             (void (ShapeProcessAPI_ApplySequence::*)() const) static_cast<void (ShapeProcessAPI_ApplySequence::*)() const>(&ShapeProcessAPI_ApplySequence::PrintPreparationResult),
             R"#(Prints result of preparation onto the messenger of the context. Note that results can be accumulated from previous preparations it method ClearMap was not called before PrepareShape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeProcessAPI_ApplySequence.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
