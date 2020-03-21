
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_ProgressIndicator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Standard_Mutex.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopTools_ShapeSet.hxx>

// module includes
#include <TopTools.hxx>
#include <TopTools_Array1OfListOfShape.hxx>
#include <TopTools_Array1OfShape.hxx>
#include <TopTools_Array2OfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfIntegerShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfOrientedShapeInteger.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeInteger.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeReal.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#include <TopTools_DataMapOfIntegerListOfShape.hxx>
#include <TopTools_DataMapOfIntegerShape.hxx>
#include <TopTools_DataMapOfOrientedShapeInteger.hxx>
#include <TopTools_DataMapOfOrientedShapeShape.hxx>
#include <TopTools_DataMapOfShapeBox.hxx>
#include <TopTools_DataMapOfShapeInteger.hxx>
#include <TopTools_DataMapOfShapeListOfInteger.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapOfShapeReal.hxx>
#include <TopTools_DataMapOfShapeSequenceOfShape.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <TopTools_HArray1OfListOfShape.hxx>
#include <TopTools_HArray1OfShape.hxx>
#include <TopTools_HArray2OfShape.hxx>
#include <TopTools_HSequenceOfShape.hxx>
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <TopTools_IndexedDataMapOfShapeReal.hxx>
#include <TopTools_IndexedDataMapOfShapeShape.hxx>
#include <TopTools_IndexedMapOfOrientedShape.hxx>
#include <TopTools_IndexedMapOfShape.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>
#include <TopTools_ListOfListOfShape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopTools_LocationSetPtr.hxx>
#include <TopTools_MapIteratorOfMapOfOrientedShape.hxx>
#include <TopTools_MapIteratorOfMapOfShape.hxx>
#include <TopTools_MapOfOrientedShape.hxx>
#include <TopTools_MapOfShape.hxx>
#include <TopTools_MutexForShapeProvider.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_SequenceOfShape.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopTools_ShapeSet.hxx>

// template related includes
// ./opencascade\TopTools_IndexedDataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_SequenceOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_IndexedMapOfOrientedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_Array2OfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_ListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_IndexedMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfOrientedShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfOrientedShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_MapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_MapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfIntegerListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfIntegerListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeSequenceOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeSequenceOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_IndexedDataMapOfShapeAddress.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_MapOfOrientedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_MapOfOrientedShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfOrientedShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfOrientedShapeInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_ListOfListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfShapeBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_Array1OfListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_Array1OfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_DataMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_IndexedDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopTools_IndexedDataMapOfShapeReal.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopTools"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TopTools , shared_ptr<TopTools>>(m,"TopTools");

    static_cast<py::class_<TopTools , shared_ptr<TopTools> >>(m.attr("TopTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Dump_s",
                    (void (*)( const TopoDS_Shape & , std::ostream & ) ) static_cast<void (*)( const TopoDS_Shape & , std::ostream & ) >(&TopTools::Dump),
                    R"#(A set of Shapes. Can be dump, wrote or read. Dumps the topological structure of <Sh> on the stream <S>.)#"  , py::arg("Sh"),  py::arg("S"))
        .def_static("Dummy_s",
                    (void (*)( const Standard_Integer ) ) static_cast<void (*)( const Standard_Integer ) >(&TopTools::Dummy),
                    R"#(This is to bypass an extraction bug. It will force the inclusion of Standard_Integer.hxx itself including Standard_OStream.hxx at the correct position.)#"  , py::arg("I"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTools_HArray1OfListOfShape ,opencascade::handle<TopTools_HArray1OfListOfShape> , TopTools_Array1OfListOfShape, Standard_Transient>>(m.attr("TopTools_HArray1OfListOfShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_List<TopoDS_Shape> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TopTools_ListOfShape> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TopTools_Array1OfListOfShape & (TopTools_HArray1OfListOfShape::*)() const) static_cast<const TopTools_Array1OfListOfShape & (TopTools_HArray1OfListOfShape::*)() const>(&TopTools_HArray1OfListOfShape::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TopTools_Array1OfListOfShape & (TopTools_HArray1OfListOfShape::*)() ) static_cast<TopTools_Array1OfListOfShape & (TopTools_HArray1OfListOfShape::*)() >(&TopTools_HArray1OfListOfShape::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopTools_HArray1OfListOfShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopTools_HArray1OfListOfShape::*)() const>(&TopTools_HArray1OfListOfShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopTools_HArray1OfListOfShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopTools_HArray1OfListOfShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTools_HArray1OfShape ,opencascade::handle<TopTools_HArray1OfShape> , TopTools_Array1OfShape, Standard_Transient>>(m.attr("TopTools_HArray1OfShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const TopoDS_Shape & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TopoDS_Shape> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TopTools_Array1OfShape & (TopTools_HArray1OfShape::*)() const) static_cast<const TopTools_Array1OfShape & (TopTools_HArray1OfShape::*)() const>(&TopTools_HArray1OfShape::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TopTools_Array1OfShape & (TopTools_HArray1OfShape::*)() ) static_cast<TopTools_Array1OfShape & (TopTools_HArray1OfShape::*)() >(&TopTools_HArray1OfShape::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopTools_HArray1OfShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopTools_HArray1OfShape::*)() const>(&TopTools_HArray1OfShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopTools_HArray1OfShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopTools_HArray1OfShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTools_HArray2OfShape ,opencascade::handle<TopTools_HArray2OfShape> , TopTools_Array2OfShape, Standard_Transient>>(m.attr("TopTools_HArray2OfShape"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const TopoDS_Shape & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<TopoDS_Shape> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TopTools_Array2OfShape & (TopTools_HArray2OfShape::*)() const) static_cast<const TopTools_Array2OfShape & (TopTools_HArray2OfShape::*)() const>(&TopTools_HArray2OfShape::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TopTools_Array2OfShape & (TopTools_HArray2OfShape::*)() ) static_cast<TopTools_Array2OfShape & (TopTools_HArray2OfShape::*)() >(&TopTools_HArray2OfShape::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopTools_HArray2OfShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopTools_HArray2OfShape::*)() const>(&TopTools_HArray2OfShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopTools_HArray2OfShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopTools_HArray2OfShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTools_HSequenceOfShape ,opencascade::handle<TopTools_HSequenceOfShape> , TopTools_SequenceOfShape, Standard_Transient>>(m.attr("TopTools_HSequenceOfShape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<TopoDS_Shape> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TopTools_SequenceOfShape & (TopTools_HSequenceOfShape::*)() const) static_cast<const TopTools_SequenceOfShape & (TopTools_HSequenceOfShape::*)() const>(&TopTools_HSequenceOfShape::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TopTools_HSequenceOfShape::*)(  const TopoDS_Shape & ) ) static_cast<void (TopTools_HSequenceOfShape::*)(  const TopoDS_Shape & ) >(&TopTools_HSequenceOfShape::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TopTools_HSequenceOfShape::*)( NCollection_Sequence<TopoDS_Shape> & ) ) static_cast<void (TopTools_HSequenceOfShape::*)( NCollection_Sequence<TopoDS_Shape> & ) >(&TopTools_HSequenceOfShape::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TopTools_SequenceOfShape & (TopTools_HSequenceOfShape::*)() ) static_cast<TopTools_SequenceOfShape & (TopTools_HSequenceOfShape::*)() >(&TopTools_HSequenceOfShape::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopTools_HSequenceOfShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopTools_HSequenceOfShape::*)() const>(&TopTools_HSequenceOfShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopTools_HSequenceOfShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopTools_HSequenceOfShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTools_LocationSet , shared_ptr<TopTools_LocationSet> >>(m.attr("TopTools_LocationSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TopTools_LocationSet::*)() ) static_cast<void (TopTools_LocationSet::*)() >(&TopTools_LocationSet::Clear),
             R"#(Clears the content of the set.)#" )
        .def("Add",
             (Standard_Integer (TopTools_LocationSet::*)( const TopLoc_Location & ) ) static_cast<Standard_Integer (TopTools_LocationSet::*)( const TopLoc_Location & ) >(&TopTools_LocationSet::Add),
             R"#(Incorporate a new Location in the set and returns its index.)#"  , py::arg("L"))
        .def("Location",
             (const TopLoc_Location & (TopTools_LocationSet::*)( const Standard_Integer ) const) static_cast<const TopLoc_Location & (TopTools_LocationSet::*)( const Standard_Integer ) const>(&TopTools_LocationSet::Location),
             R"#(Returns the location of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopTools_LocationSet::*)( const TopLoc_Location & ) const) static_cast<Standard_Integer (TopTools_LocationSet::*)( const TopLoc_Location & ) const>(&TopTools_LocationSet::Index),
             R"#(Returns the index of <L>.)#"  , py::arg("L"))
        .def("Dump",
             (void (TopTools_LocationSet::*)( std::ostream & ) const) static_cast<void (TopTools_LocationSet::*)( std::ostream & ) const>(&TopTools_LocationSet::Dump),
             R"#(Dumps the content of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("Write",
             (void (TopTools_LocationSet::*)( std::ostream & ) const) static_cast<void (TopTools_LocationSet::*)( std::ostream & ) const>(&TopTools_LocationSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (TopTools_LocationSet::*)( std::istream & ) ) static_cast<void (TopTools_LocationSet::*)( std::istream & ) >(&TopTools_LocationSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def("SetProgress",
             (void (TopTools_LocationSet::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<void (TopTools_LocationSet::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&TopTools_LocationSet::SetProgress),
             R"#(None)#"  , py::arg("PR"))
        .def("GetProgress",
             (opencascade::handle<Message_ProgressIndicator> (TopTools_LocationSet::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (TopTools_LocationSet::*)() const>(&TopTools_LocationSet::GetProgress),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTools_MutexForShapeProvider , shared_ptr<TopTools_MutexForShapeProvider> >>(m.attr("TopTools_MutexForShapeProvider"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CreateMutexesForSubShapes",
             (void (TopTools_MutexForShapeProvider::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<void (TopTools_MutexForShapeProvider::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&TopTools_MutexForShapeProvider::CreateMutexesForSubShapes),
             R"#(Creates and associates mutexes with each sub-shape of type theType in theShape.)#"  , py::arg("theShape"),  py::arg("theType"))
        .def("CreateMutexForShape",
             (void (TopTools_MutexForShapeProvider::*)( const TopoDS_Shape & ) ) static_cast<void (TopTools_MutexForShapeProvider::*)( const TopoDS_Shape & ) >(&TopTools_MutexForShapeProvider::CreateMutexForShape),
             R"#(Creates and associates mutex with theShape)#"  , py::arg("theShape"))
        .def("GetMutex",
             (Standard_Mutex * (TopTools_MutexForShapeProvider::*)( const TopoDS_Shape & ) const) static_cast<Standard_Mutex * (TopTools_MutexForShapeProvider::*)( const TopoDS_Shape & ) const>(&TopTools_MutexForShapeProvider::GetMutex),
             R"#(Returns pointer to mutex associated with theShape. In case when mutex not found returns NULL.)#"  , py::arg("theShape"))
        .def("RemoveAllMutexes",
             (void (TopTools_MutexForShapeProvider::*)() ) static_cast<void (TopTools_MutexForShapeProvider::*)() >(&TopTools_MutexForShapeProvider::RemoveAllMutexes),
             R"#(Removes all mutexes)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopTools_OrientedShapeMapHasher , shared_ptr<TopTools_OrientedShapeMapHasher>>(m,"TopTools_OrientedShapeMapHasher");

    static_cast<py::class_<TopTools_OrientedShapeMapHasher , shared_ptr<TopTools_OrientedShapeMapHasher> >>(m.attr("TopTools_OrientedShapeMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TopoDS_Shape & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape & , const Standard_Integer ) >(&TopTools_OrientedShapeMapHasher::HashCode),
                    R"#(Computes a hash code for the given shape, in the range [1, theUpperBound])#"  , py::arg("theShape"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopTools_OrientedShapeMapHasher::IsEqual),
                    R"#(Returns True when the two keys are equal. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("S1"),  py::arg("S2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopTools_ShapeMapHasher , shared_ptr<TopTools_ShapeMapHasher>>(m,"TopTools_ShapeMapHasher");

    static_cast<py::class_<TopTools_ShapeMapHasher , shared_ptr<TopTools_ShapeMapHasher> >>(m.attr("TopTools_ShapeMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TopoDS_Shape & , Standard_Integer ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape & , Standard_Integer ) >(&TopTools_ShapeMapHasher::HashCode),
                    R"#(Computes a hash code for the given shape, in the range [1, theUpperBound])#"  , py::arg("theShape"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopTools_ShapeMapHasher::IsEqual),
                    R"#(Returns True when the two keys are the same. Two same keys must have the same hashcode, the contrary is not necessary.)#"  , py::arg("S1"),  py::arg("S2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTools_ShapeSet , shared_ptr<TopTools_ShapeSet> >>(m.attr("TopTools_ShapeSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetFormatNb",
             (void (TopTools_ShapeSet::*)( const Standard_Integer ) ) static_cast<void (TopTools_ShapeSet::*)( const Standard_Integer ) >(&TopTools_ShapeSet::SetFormatNb),
             R"#(None)#"  , py::arg("theFormatNb"))
        .def("FormatNb",
             (Standard_Integer (TopTools_ShapeSet::*)() const) static_cast<Standard_Integer (TopTools_ShapeSet::*)() const>(&TopTools_ShapeSet::FormatNb),
             R"#(two formats available for the moment: First: does not write CurveOnSurface UV Points into the file on reading calls Check() method. Second: stores CurveOnSurface UV Points. On reading format is recognized from Version string.)#" )
        .def("Clear",
             (void (TopTools_ShapeSet::*)() ) static_cast<void (TopTools_ShapeSet::*)() >(&TopTools_ShapeSet::Clear),
             R"#(Clears the content of the set. This method can be redefined.)#" )
        .def("Add",
             (Standard_Integer (TopTools_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<Standard_Integer (TopTools_ShapeSet::*)( const TopoDS_Shape & ) >(&TopTools_ShapeSet::Add),
             R"#(Stores <S> and its sub-shape. Returns the index of <S>. The method AddGeometry is called on each sub-shape.)#"  , py::arg("S"))
        .def("Shape",
             (const TopoDS_Shape & (TopTools_ShapeSet::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopTools_ShapeSet::*)( const Standard_Integer ) const>(&TopTools_ShapeSet::Shape),
             R"#(Returns the sub-shape of index <I>.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopTools_ShapeSet::*)( const TopoDS_Shape & ) const) static_cast<Standard_Integer (TopTools_ShapeSet::*)( const TopoDS_Shape & ) const>(&TopTools_ShapeSet::Index),
             R"#(Returns the index of <S>.)#"  , py::arg("S"))
        .def("Locations",
             (const TopTools_LocationSet & (TopTools_ShapeSet::*)() const) static_cast<const TopTools_LocationSet & (TopTools_ShapeSet::*)() const>(&TopTools_ShapeSet::Locations),
             R"#(None)#" )
        .def("ChangeLocations",
             (TopTools_LocationSet & (TopTools_ShapeSet::*)() ) static_cast<TopTools_LocationSet & (TopTools_ShapeSet::*)() >(&TopTools_ShapeSet::ChangeLocations),
             R"#(None)#" )
        .def("DumpExtent",
             (Standard_OStream & (TopTools_ShapeSet::*)( std::ostream & ) const) static_cast<Standard_OStream & (TopTools_ShapeSet::*)( std::ostream & ) const>(&TopTools_ShapeSet::DumpExtent),
             R"#(Dumps the number of objects in me on the stream <OS>. (Number of shapes of each type))#"  , py::arg("OS"))
        .def("DumpExtent",
             (void (TopTools_ShapeSet::*)( TCollection_AsciiString & ) const) static_cast<void (TopTools_ShapeSet::*)( TCollection_AsciiString & ) const>(&TopTools_ShapeSet::DumpExtent),
             R"#(Dumps the number of objects in me in the string S (Number of shapes of each type))#"  , py::arg("S"))
        .def("Dump",
             (void (TopTools_ShapeSet::*)( std::ostream & ) const) static_cast<void (TopTools_ShapeSet::*)( std::ostream & ) const>(&TopTools_ShapeSet::Dump),
             R"#(Dumps the content of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("Write",
             (void (TopTools_ShapeSet::*)( std::ostream & ) ) static_cast<void (TopTools_ShapeSet::*)( std::ostream & ) >(&TopTools_ShapeSet::Write),
             R"#(Writes the content of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("Read",
             (void (TopTools_ShapeSet::*)( std::istream & ) ) static_cast<void (TopTools_ShapeSet::*)( std::istream & ) >(&TopTools_ShapeSet::Read),
             R"#(Reads the content of me from the stream <IS>. me is first cleared.)#"  , py::arg("IS"))
        .def("Dump",
             (void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&TopTools_ShapeSet::Dump),
             R"#(Dumps on <OS> the shape <S>. Dumps the orientation, the index of the TShape and the index of the Location.)#"  , py::arg("S"),  py::arg("OS"))
        .def("Write",
             (void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&TopTools_ShapeSet::Write),
             R"#(Writes on <OS> the shape <S>. Writes the orientation, the index of the TShape and the index of the Location.)#"  , py::arg("S"),  py::arg("OS"))
        .def("Read",
             (void (TopTools_ShapeSet::*)( TopoDS_Shape & , std::istream & ) const) static_cast<void (TopTools_ShapeSet::*)( TopoDS_Shape & , std::istream & ) const>(&TopTools_ShapeSet::Read),
             R"#(Reads from <IS> a shape and returns it in S.)#"  , py::arg("S"),  py::arg("IS"))
        .def("AddGeometry",
             (void (TopTools_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopTools_ShapeSet::*)( const TopoDS_Shape & ) >(&TopTools_ShapeSet::AddGeometry),
             R"#(Stores the geometry of <S>.)#"  , py::arg("S"))
        .def("DumpGeometry",
             (void (TopTools_ShapeSet::*)( std::ostream & ) const) static_cast<void (TopTools_ShapeSet::*)( std::ostream & ) const>(&TopTools_ShapeSet::DumpGeometry),
             R"#(Dumps the geometry of me on the stream <OS>.)#"  , py::arg("OS"))
        .def("WriteGeometry",
             (void (TopTools_ShapeSet::*)( std::ostream & ) ) static_cast<void (TopTools_ShapeSet::*)( std::ostream & ) >(&TopTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of me on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("OS"))
        .def("ReadGeometry",
             (void (TopTools_ShapeSet::*)( std::istream & ) ) static_cast<void (TopTools_ShapeSet::*)( std::istream & ) >(&TopTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of me from the stream <IS>.)#"  , py::arg("IS"))
        .def("DumpGeometry",
             (void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&TopTools_ShapeSet::DumpGeometry),
             R"#(Dumps the geometry of <S> on the stream <OS>.)#"  , py::arg("S"),  py::arg("OS"))
        .def("WriteGeometry",
             (void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const) static_cast<void (TopTools_ShapeSet::*)( const TopoDS_Shape & , std::ostream & ) const>(&TopTools_ShapeSet::WriteGeometry),
             R"#(Writes the geometry of <S> on the stream <OS> in a format that can be read back by Read.)#"  , py::arg("S"),  py::arg("OS"))
        .def("ReadGeometry",
             (void (TopTools_ShapeSet::*)( const TopAbs_ShapeEnum , std::istream & , TopoDS_Shape & ) ) static_cast<void (TopTools_ShapeSet::*)( const TopAbs_ShapeEnum , std::istream & , TopoDS_Shape & ) >(&TopTools_ShapeSet::ReadGeometry),
             R"#(Reads the geometry of a shape of type <T> from the stream <IS> and returns it in <S>.)#"  , py::arg("T"),  py::arg("IS"),  py::arg("S"))
        .def("AddShapes",
             (void (TopTools_ShapeSet::*)( TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopTools_ShapeSet::*)( TopoDS_Shape & , const TopoDS_Shape & ) >(&TopTools_ShapeSet::AddShapes),
             R"#(Inserts the shape <S2> in the shape <S1>. This method must be redefined to use the correct builder.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Check",
             (void (TopTools_ShapeSet::*)( const TopAbs_ShapeEnum , TopoDS_Shape & ) ) static_cast<void (TopTools_ShapeSet::*)( const TopAbs_ShapeEnum , TopoDS_Shape & ) >(&TopTools_ShapeSet::Check),
             R"#(This method is called after each new completed shape. <T> is the type. <S> is the shape. In this class it does nothing, but it gives the opportunity in derived classes to perform extra treatment on shapes.)#"  , py::arg("T"),  py::arg("S"))
        .def("NbShapes",
             (Standard_Integer (TopTools_ShapeSet::*)() const) static_cast<Standard_Integer (TopTools_ShapeSet::*)() const>(&TopTools_ShapeSet::NbShapes),
             R"#(Returns number of shapes read from file.)#" )
        .def("SetProgress",
             (void (TopTools_ShapeSet::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<void (TopTools_ShapeSet::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&TopTools_ShapeSet::SetProgress),
             R"#(None)#"  , py::arg("PR"))
        .def("GetProgress",
             (opencascade::handle<Message_ProgressIndicator> (TopTools_ShapeSet::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (TopTools_ShapeSet::*)() const>(&TopTools_ShapeSet::GetProgress),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\TopTools_OrientedShapeMapHasher.hxx
// ./opencascade\TopTools_HArray1OfListOfShape.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape.hxx
// ./opencascade\TopTools_IndexedDataMapOfShapeShape.hxx
// ./opencascade\TopTools_DataMapOfShapeListOfShape.hxx
// ./opencascade\TopTools_SequenceOfShape.hxx
// ./opencascade\TopTools_IndexedMapOfOrientedShape.hxx
// ./opencascade\TopTools_MapIteratorOfMapOfShape.hxx
// ./opencascade\TopTools_HArray2OfShape.hxx
// ./opencascade\TopTools_MapIteratorOfMapOfOrientedShape.hxx
// ./opencascade\TopTools_ShapeSet.hxx
// ./opencascade\TopTools_ListIteratorOfListOfShape.hxx
// ./opencascade\TopTools_Array2OfShape.hxx
// ./opencascade\TopTools_DataMapOfShapeShape.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape.hxx
// ./opencascade\TopTools_ListOfShape.hxx
// ./opencascade\TopTools_IndexedMapOfShape.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfIntegerShape.hxx
// ./opencascade\TopTools_DataMapOfOrientedShapeShape.hxx
// ./opencascade\TopTools_MapOfShape.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfOrientedShapeInteger.hxx
// ./opencascade\TopTools_DataMapOfShapeInteger.hxx
// ./opencascade\TopTools_DataMapOfShapeListOfInteger.hxx
// ./opencascade\TopTools_LocationSet.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx
// ./opencascade\TopTools_DataMapOfIntegerListOfShape.hxx
// ./opencascade\TopTools_DataMapOfShapeSequenceOfShape.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.hxx
// ./opencascade\TopTools_ShapeMapHasher.hxx
// ./opencascade\TopTools_MutexForShapeProvider.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx
// ./opencascade\TopTools_HArray1OfShape.hxx
// ./opencascade\TopTools_IndexedDataMapOfShapeAddress.hxx
// ./opencascade\TopTools_HSequenceOfShape.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfShapeReal.hxx
// ./opencascade\TopTools_LocationSetPtr.hxx
// ./opencascade\TopTools_MapOfOrientedShape.hxx
// ./opencascade\TopTools_DataMapOfOrientedShapeInteger.hxx
// ./opencascade\TopTools.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfShapeInteger.hxx
// ./opencascade\TopTools_ListOfListOfShape.hxx
// ./opencascade\TopTools_DataMapOfShapeReal.hxx
// ./opencascade\TopTools_DataMapOfShapeBox.hxx
// ./opencascade\TopTools_Array1OfListOfShape.hxx
// ./opencascade\TopTools_Array1OfShape.hxx
// ./opencascade\TopTools_DataMapOfIntegerShape.hxx
// ./opencascade\TopTools_IndexedDataMapOfShapeListOfShape.hxx
// ./opencascade\TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape.hxx
// ./opencascade\TopTools_IndexedDataMapOfShapeReal.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeListOfShape");
    register_template_NCollection_Sequence<TopoDS_Shape>(m,"TopTools_SequenceOfShape");
    register_template_NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher>(m,"TopTools_IndexedMapOfOrientedShape");
    register_template_NCollection_Array2<TopoDS_Shape>(m,"TopTools_Array2OfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeShape");
    register_template_NCollection_List<TopoDS_Shape>(m,"TopTools_ListOfShape");
    register_template_NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_IndexedMapOfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_OrientedShapeMapHasher>(m,"TopTools_DataMapOfOrientedShapeShape");
    register_template_NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher>(m,"TopTools_MapOfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeInteger");
    register_template_NCollection_DataMap<TopoDS_Shape, TColStd_ListOfInteger, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeListOfInteger");
    register_template_NCollection_DataMap<Standard_Integer, TopTools_ListOfShape, TColStd_MapIntegerHasher>(m,"TopTools_DataMapOfIntegerListOfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_SequenceOfShape, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeSequenceOfShape");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, Standard_Address, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeAddress");
    register_template_NCollection_Map<TopoDS_Shape, TopTools_OrientedShapeMapHasher>(m,"TopTools_MapOfOrientedShape");
    register_template_NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher>(m,"TopTools_DataMapOfOrientedShapeInteger");
    register_template_NCollection_List<TopTools_ListOfShape>(m,"TopTools_ListOfListOfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, Standard_Real, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeReal");
    register_template_NCollection_DataMap<TopoDS_Shape, Bnd_Box, TopTools_ShapeMapHasher>(m,"TopTools_DataMapOfShapeBox");
    register_template_NCollection_Array1<TopTools_ListOfShape>(m,"TopTools_Array1OfListOfShape");
    register_template_NCollection_Array1<TopoDS_Shape>(m,"TopTools_Array1OfShape");
    register_template_NCollection_DataMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher>(m,"TopTools_DataMapOfIntegerShape");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeListOfShape");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, Standard_Real, TopTools_ShapeMapHasher>(m,"TopTools_IndexedDataMapOfShapeReal");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
