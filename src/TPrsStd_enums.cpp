
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDataXtd_Constraint.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Geometry.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <V3d_Viewer.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>

// module includes
#include <TPrsStd_AISPresentation.hxx>
#include <TPrsStd_AISViewer.hxx>
#include <TPrsStd_AxisDriver.hxx>
#include <TPrsStd_ConstraintDriver.hxx>
#include <TPrsStd_ConstraintTools.hxx>
#include <TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver.hxx>
#include <TPrsStd_DataMapOfGUIDDriver.hxx>
#include <TPrsStd_Driver.hxx>
#include <TPrsStd_DriverTable.hxx>
#include <TPrsStd_GeometryDriver.hxx>
#include <TPrsStd_NamedShapeDriver.hxx>
#include <TPrsStd_PlaneDriver.hxx>
#include <TPrsStd_PointDriver.hxx>

// template related includes
// ./opencascade/TPrsStd_DataMapOfGUIDDriver.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TPrsStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TPrsStd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_TPrsStd_Driver : public TPrsStd_Driver{
    public:
        using TPrsStd_Driver::TPrsStd_Driver;
        
        // public pure virtual
        Standard_Boolean Update(const TDF_Label & L,opencascade::handle<AIS_InteractiveObject> & ais) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TPrsStd_Driver,Update,L,ais) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<TPrsStd_AISPresentation ,opencascade::handle<TPrsStd_AISPresentation>  , TDF_Attribute >(m,"TPrsStd_AISPresentation",R"#(An attribute to associate an AIS_InteractiveObject to a label in an AIS viewer. This attribute works in collaboration with TPrsStd_AISViewer. Note that all the Set... and Unset... attribute methods as well as the query methods for visualization attributes and the HasOwn... test methods are shortcuts to the respective AIS_InteractiveObject settings.An attribute to associate an AIS_InteractiveObject to a label in an AIS viewer. This attribute works in collaboration with TPrsStd_AISViewer. Note that all the Set... and Unset... attribute methods as well as the query methods for visualization attributes and the HasOwn... test methods are shortcuts to the respective AIS_InteractiveObject settings.An attribute to associate an AIS_InteractiveObject to a label in an AIS viewer. This attribute works in collaboration with TPrsStd_AISViewer. Note that all the Set... and Unset... attribute methods as well as the query methods for visualization attributes and the HasOwn... test methods are shortcuts to the respective AIS_InteractiveObject settings.)#");
    py::class_<TPrsStd_AISViewer ,opencascade::handle<TPrsStd_AISViewer>  , TDF_Attribute >(m,"TPrsStd_AISViewer",R"#(The groundwork to define an interactive viewer attribute. This attribute stores an interactive context at the root label. You can only have one instance of this class per data framework.The groundwork to define an interactive viewer attribute. This attribute stores an interactive context at the root label. You can only have one instance of this class per data framework.The groundwork to define an interactive viewer attribute. This attribute stores an interactive context at the root label. You can only have one instance of this class per data framework.)#");
    py::class_<TPrsStd_ConstraintTools , shared_ptr<TPrsStd_ConstraintTools>  >(m,"TPrsStd_ConstraintTools",R"#(None)#");
    py::class_<TPrsStd_Driver ,opencascade::handle<TPrsStd_Driver> ,Py_TPrsStd_Driver , Standard_Transient >(m,"TPrsStd_Driver",R"#(Driver for AIS ============== An abstract class, which - in classes inheriting from it - allows you to update an AIS_InteractiveObject or create one if one does not already exist. For both creation and update, the interactive object is filled with information contained in attributes. These attributes are those found on the label given as an argument in the method Update. true is returned if the interactive object was modified by the update. This class provide an algorithm to Build with its default values (if Null) or Update (if !Null) an AIS_InteractiveObject . Resources are found in attributes associated to a given label.Driver for AIS ============== An abstract class, which - in classes inheriting from it - allows you to update an AIS_InteractiveObject or create one if one does not already exist. For both creation and update, the interactive object is filled with information contained in attributes. These attributes are those found on the label given as an argument in the method Update. true is returned if the interactive object was modified by the update. This class provide an algorithm to Build with its default values (if Null) or Update (if !Null) an AIS_InteractiveObject . Resources are found in attributes associated to a given label.Driver for AIS ============== An abstract class, which - in classes inheriting from it - allows you to update an AIS_InteractiveObject or create one if one does not already exist. For both creation and update, the interactive object is filled with information contained in attributes. These attributes are those found on the label given as an argument in the method Update. true is returned if the interactive object was modified by the update. This class provide an algorithm to Build with its default values (if Null) or Update (if !Null) an AIS_InteractiveObject . Resources are found in attributes associated to a given label.)#");
    py::class_<TPrsStd_DriverTable ,opencascade::handle<TPrsStd_DriverTable>  , Standard_Transient >(m,"TPrsStd_DriverTable",R"#(This class is a container to record (AddDriver) binding between GUID and TPrsStd_Driver. You create a new instance of TPrsStd_Driver and use the method AddDriver to load it into the driver table. the methodThis class is a container to record (AddDriver) binding between GUID and TPrsStd_Driver. You create a new instance of TPrsStd_Driver and use the method AddDriver to load it into the driver table. the methodThis class is a container to record (AddDriver) binding between GUID and TPrsStd_Driver. You create a new instance of TPrsStd_Driver and use the method AddDriver to load it into the driver table. the method)#");
    py::class_<TPrsStd_AxisDriver ,opencascade::handle<TPrsStd_AxisDriver>  , TPrsStd_Driver >(m,"TPrsStd_AxisDriver",R"#(An implementation of TPrsStd_Driver for axes.An implementation of TPrsStd_Driver for axes.An implementation of TPrsStd_Driver for axes.)#");
    py::class_<TPrsStd_ConstraintDriver ,opencascade::handle<TPrsStd_ConstraintDriver>  , TPrsStd_Driver >(m,"TPrsStd_ConstraintDriver",R"#(An implementation of TPrsStd_Driver for constraints.An implementation of TPrsStd_Driver for constraints.An implementation of TPrsStd_Driver for constraints.)#");
    py::class_<TPrsStd_GeometryDriver ,opencascade::handle<TPrsStd_GeometryDriver>  , TPrsStd_Driver >(m,"TPrsStd_GeometryDriver",R"#(This method is an implementation of TPrsStd_Driver for geometries.This method is an implementation of TPrsStd_Driver for geometries.This method is an implementation of TPrsStd_Driver for geometries.)#");
    py::class_<TPrsStd_NamedShapeDriver ,opencascade::handle<TPrsStd_NamedShapeDriver>  , TPrsStd_Driver >(m,"TPrsStd_NamedShapeDriver",R"#(An implementation of TPrsStd_Driver for named shapes.An implementation of TPrsStd_Driver for named shapes.An implementation of TPrsStd_Driver for named shapes.)#");
    py::class_<TPrsStd_PlaneDriver ,opencascade::handle<TPrsStd_PlaneDriver>  , TPrsStd_Driver >(m,"TPrsStd_PlaneDriver",R"#(An implementation of TPrsStd_Driver for planes.An implementation of TPrsStd_Driver for planes.An implementation of TPrsStd_Driver for planes.)#");
    py::class_<TPrsStd_PointDriver ,opencascade::handle<TPrsStd_PointDriver>  , TPrsStd_Driver >(m,"TPrsStd_PointDriver",R"#(An implementation of TPrsStd_Driver for points.An implementation of TPrsStd_Driver for points.An implementation of TPrsStd_Driver for points.)#");

};

// user-defined post-inclusion per module

// user-defined post
