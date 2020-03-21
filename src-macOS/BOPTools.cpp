
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BOPTools_Set.hxx>
#include <TopoDS_Vertex.hxx>
#include <IntTools_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Solid.hxx>
#include <IntTools_Range.hxx>
#include <TopoDS_Shell.hxx>
#include <Message_Report.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Vec.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <IntTools_Context.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <BOPTools_AlgoTools.hxx>
#include <BOPTools_AlgoTools2D.hxx>
#include <BOPTools_AlgoTools3D.hxx>
#include <BOPTools_BoxSelector.hxx>
#include <BOPTools_BoxTree.hxx>
#include <BOPTools_ConnexityBlock.hxx>
#include <BOPTools_CoupleOfShape.hxx>
#include <BOPTools_IndexedDataMapOfSetShape.hxx>
#include <BOPTools_ListOfConnexityBlock.hxx>
#include <BOPTools_ListOfCoupleOfShape.hxx>
#include <BOPTools_MapOfSet.hxx>
#include <BOPTools_Parallel.hxx>
#include <BOPTools_Set.hxx>
#include <BOPTools_SetMapHasher.hxx>

// template related includes
// ./opencascade/BOPTools_MapOfSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools_tmpl.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools_tmpl.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BOPTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BOPTools"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BOPTools_AlgoTools , shared_ptr<BOPTools_AlgoTools>>(m,"BOPTools_AlgoTools");

    static_cast<py::class_<BOPTools_AlgoTools , shared_ptr<BOPTools_AlgoTools> >>(m.attr("BOPTools_AlgoTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_AlgoTools2D , shared_ptr<BOPTools_AlgoTools2D>>(m,"BOPTools_AlgoTools2D");

    static_cast<py::class_<BOPTools_AlgoTools2D , shared_ptr<BOPTools_AlgoTools2D> >>(m.attr("BOPTools_AlgoTools2D"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_AlgoTools3D , shared_ptr<BOPTools_AlgoTools3D>>(m,"BOPTools_AlgoTools3D");

    static_cast<py::class_<BOPTools_AlgoTools3D , shared_ptr<BOPTools_AlgoTools3D> >>(m.attr("BOPTools_AlgoTools3D"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPTools_ConnexityBlock , shared_ptr<BOPTools_ConnexityBlock> >>(m.attr("BOPTools_ConnexityBlock"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const) static_cast<const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const>(&BOPTools_ConnexityBlock::Shapes),
             R"#(None)#" )
        .def("ChangeShapes",
             (TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() ) static_cast<TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() >(&BOPTools_ConnexityBlock::ChangeShapes),
             R"#(None)#" )
        .def("SetRegular",
             (void (BOPTools_ConnexityBlock::*)( const Standard_Boolean ) ) static_cast<void (BOPTools_ConnexityBlock::*)( const Standard_Boolean ) >(&BOPTools_ConnexityBlock::SetRegular),
             R"#(None)#"  , py::arg("theFlag"))
        .def("IsRegular",
             (Standard_Boolean (BOPTools_ConnexityBlock::*)() const) static_cast<Standard_Boolean (BOPTools_ConnexityBlock::*)() const>(&BOPTools_ConnexityBlock::IsRegular),
             R"#(None)#" )
        .def("Loops",
             (const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const) static_cast<const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const>(&BOPTools_ConnexityBlock::Loops),
             R"#(None)#" )
        .def("ChangeLoops",
             (TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() ) static_cast<TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() >(&BOPTools_ConnexityBlock::ChangeLoops),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPTools_CoupleOfShape , shared_ptr<BOPTools_CoupleOfShape> >>(m.attr("BOPTools_CoupleOfShape"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetShape1",
             (void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape & ) ) static_cast<void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape & ) >(&BOPTools_CoupleOfShape::SetShape1),
             R"#(None)#"  , py::arg("theShape"))
        .def("Shape1",
             (const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const) static_cast<const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const>(&BOPTools_CoupleOfShape::Shape1),
             R"#(None)#" )
        .def("SetShape2",
             (void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape & ) ) static_cast<void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape & ) >(&BOPTools_CoupleOfShape::SetShape2),
             R"#(None)#"  , py::arg("theShape"))
        .def("Shape2",
             (const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const) static_cast<const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const>(&BOPTools_CoupleOfShape::Shape2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_Parallel , shared_ptr<BOPTools_Parallel>>(m,"BOPTools_Parallel");

    static_cast<py::class_<BOPTools_Parallel , shared_ptr<BOPTools_Parallel> >>(m.attr("BOPTools_Parallel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPTools_Set , shared_ptr<BOPTools_Set> >>(m.attr("BOPTools_Set"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_SetMapHasher , shared_ptr<BOPTools_SetMapHasher>>(m,"BOPTools_SetMapHasher");

    static_cast<py::class_<BOPTools_SetMapHasher , shared_ptr<BOPTools_SetMapHasher> >>(m.attr("BOPTools_SetMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const BOPTools_Set & , Standard_Integer ) ) static_cast<Standard_Integer (*)( const BOPTools_Set & , Standard_Integer ) >(&BOPTools_SetMapHasher::HashCode),
                    R"#(Computes a hash code for the given set, in the range [1, theUpperBound])#"  , py::arg("theSet"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const BOPTools_Set & , const BOPTools_Set & ) ) static_cast<Standard_Boolean (*)( const BOPTools_Set & , const BOPTools_Set & ) >(&BOPTools_SetMapHasher::IsEqual),
                    R"#(None)#"  , py::arg("aSet1"),  py::arg("aSet2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BOPTools_Set.hxx
// ./opencascade/BOPTools_MapOfSet.hxx
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
// ./opencascade/BOPTools_SetMapHasher.hxx
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
// ./opencascade/BOPTools_BoxSelector.hxx
// ./opencascade/BOPTools_Parallel.hxx
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
// ./opencascade/BOPTools_CoupleOfShape.hxx
// ./opencascade/BOPTools_ConnexityBlock.hxx
// ./opencascade/BOPTools_AlgoTools.hxx
// ./opencascade/BOPTools_AlgoTools2D.hxx
// ./opencascade/BOPTools_AlgoTools3D.hxx
// ./opencascade/BOPTools_BoxTree.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Map<BOPTools_Set, BOPTools_SetMapHasher>(m,"BOPTools_MapOfSet");
    register_template_NCollection_List<BOPTools_CoupleOfShape>(m,"BOPTools_ListOfCoupleOfShape");
    register_template_NCollection_List<BOPTools_ConnexityBlock>(m,"BOPTools_ListOfConnexityBlock");
    register_template_NCollection_IndexedDataMap<BOPTools_Set, TopoDS_Shape, BOPTools_SetMapHasher>(m,"BOPTools_IndexedDataMapOfSetShape");
    register_template_BOPTools_BoxSelector<2>(m,"BOPTools_Box2dTreeSelector");
    register_template_BOPTools_BoxSet<Standard_Real, 3, Standard_Integer>(m,"BOPTools_BoxTree");
    register_template_BOPTools_BoxSelector<3>(m,"BOPTools_BoxTreeSelector");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
