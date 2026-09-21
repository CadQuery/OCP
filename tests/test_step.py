from OCP import Interface
from OCP.collections import (
    HArray1_StepRepr_RepresentationItem as StepRepr_HArray1OfRepresentationItem,
)
from OCP.GeomToStep import GeomToStep_MakeAxis2Placement3d
from OCP.gp import gp_Ax2, gp_Pnt
from OCP.IFSelect import IFSelect_ReturnStatus
from OCP.STEPCAFControl import STEPCAFControl_Writer
from OCP.STEPConstruct import STEPConstruct
from OCP.STEPControl import STEPControl_StepModelType
from OCP.StepData import StepData_Factors

from OCP.StepRepr import (
    StepRepr_ConstructiveGeometryRepresentation,
    StepRepr_ConstructiveGeometryRepresentationRelationship,
)
from OCP.StepShape import StepShape_ShapeDefinitionRepresentation
from OCP.TCollection import (
    TCollection_ExtendedString,
    TCollection_HAsciiString,
)
from OCP.TDocStd import TDocStd_Document
from OCP.XCAFApp import XCAFApp_Application
from OCP.XCAFDoc import XCAFDoc_DocumentTool
from OCP.XmlXCAFDrivers import XmlXCAFDrivers
from OCP.XSControl import XSControl_WorkSession

from OCP.BRepBuilderAPI import BRepBuilderAPI_MakeVertex


def _step_with_supplemental_geom(path: str, loc_name: str,) -> None:

    # create a doc and add a dummy vertex shape
    app = XCAFApp_Application.GetApplication_s()
    XmlXCAFDrivers.DefineFormat_s(app)
    doc = TDocStd_Document(TCollection_ExtendedString("XmlXCAF"))
    app.InitDocument(doc)

    tool = XCAFDoc_DocumentTool.ShapeTool_s(doc.Main())
    tool.AddShape(BRepBuilderAPI_MakeVertex(gp_Pnt(0, 0, 0)).Vertex(), False, True)

    # transfer the model to a STEP model
    session = XSControl_WorkSession()
    writer = STEPCAFControl_Writer(session, False)
    writer.Transfer(doc, STEPControl_StepModelType.STEPControl_AsIs)

    model = session.Model()

    # add a extra named location
    for i in range(model.NbEntities()):
        ent = model.Value(i + 1)

        if isinstance(ent, StepShape_ShapeDefinitionRepresentation):
            sdr = ent
            break

    rep = sdr.UsedRepresentation()

    cs_array = StepRepr_HArray1OfRepresentationItem(1, 1)

    step_loc = GeomToStep_MakeAxis2Placement3d(gp_Ax2(), StepData_Factors()).Value()
    step_loc.SetName(TCollection_HAsciiString(loc_name))

    cs_array.SetValue(1, step_loc)

    cgr = StepRepr_ConstructiveGeometryRepresentation()
    cgr.Init(
        "Additional coordinate system", cs_array, rep.ContextOfItems(),
    )

    cgrr = StepRepr_ConstructiveGeometryRepresentationRelationship()
    cgrr.Init("", "", rep, cgr)

    model.AddWithRefs(cgrr)

    status = writer.Write(path)
    assert status == IFSelect_ReturnStatus.IFSelect_RetDone


def test_supplemental_geom():

    _step_with_supplemental_geom("supplemental.step", "supplemental location")

    with open("supplemental.step") as f:
        step = f.read()

    assert "supplemental location" in step
