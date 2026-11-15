"""Exercise STEP kinematics entities through the ordinary STEP exchange API."""

import pytest

from OCP.GeomToStep import GeomToStep_MakeAxis2Placement3d
from OCP.BRepBuilderAPI import BRepBuilderAPI_MakeVertex
from OCP.gp import gp_Ax2, gp_Pnt
from OCP.IFSelect import IFSelect_ReturnStatus
from OCP.STEPControl import STEPControl_Reader, STEPControl_Writer, STEPControl_AsIs
from OCP.StepData import StepData_Factors
from OCP.StepKinematics import (
    StepKinematics_GearPair,
    StepKinematics_KinematicJoint,
    StepKinematics_KinematicLink,
    StepKinematics_RevolutePair,
)
from OCP.TCollection import TCollection_HAsciiString


def test_kinematics_entity_round_trip(tmp_path):
    """Preserve concrete types, link references and pair parameters.

    This tests entity exchange, not a complete geometry-bound mechanism or
    a kinematic solver.
    """
    first = StepKinematics_KinematicLink()
    first.Init(TCollection_HAsciiString("first link"))
    second = StepKinematics_KinematicLink()
    second.Init(TCollection_HAsciiString("second link"))
    joint = StepKinematics_KinematicJoint()
    joint.Init(TCollection_HAsciiString("shaft joint"), first, second)

    frame = GeomToStep_MakeAxis2Placement3d(gp_Ax2(), StepData_Factors()).Value()
    common = (
        TCollection_HAsciiString("pair"),
        TCollection_HAsciiString("placement"),
        False,
        TCollection_HAsciiString(""),
        frame,
        frame,
        joint,
    )
    revolute = StepKinematics_RevolutePair()
    revolute.Init(*common, False, False, False, False, False, True)
    gear = StepKinematics_GearPair()
    gear.Init(*common, 10.0, 20.0, 0.0, 0.0, 2.0)

    writer = STEPControl_Writer()
    assert writer.Transfer(BRepBuilderAPI_MakeVertex(gp_Pnt()).Vertex(), STEPControl_AsIs) == IFSelect_ReturnStatus.IFSelect_RetDone
    model = writer.Model()
    model.AddWithRefs(revolute)
    model.AddWithRefs(gear)
    path = str(tmp_path / "kinematics.step")
    assert writer.Write(path) == IFSelect_ReturnStatus.IFSelect_RetDone

    reader = STEPControl_Reader()
    assert reader.ReadFile(path) == IFSelect_ReturnStatus.IFSelect_RetDone
    loaded = reader.StepModel()
    entities = [loaded.Value(i) for i in range(1, loaded.NbEntities() + 1)]
    restored_revolute, = [
        e for e in entities if isinstance(e, StepKinematics_RevolutePair)
    ]
    restored_gear, = [
        e for e in entities if isinstance(e, StepKinematics_GearPair)
    ]
    assert restored_revolute.RZ()
    assert not restored_revolute.TZ()
    assert restored_gear.GearRatio() == pytest.approx(2.0)
    assert restored_gear.RadiusFirstLink() == pytest.approx(10.0)
    assert restored_gear.RadiusSecondLink() == pytest.approx(20.0)
    assert restored_revolute.Joint().EdgeStart().Name().ToCString() == "first link"
    assert restored_gear.Joint().EdgeEnd().Name().ToCString() == "second link"
