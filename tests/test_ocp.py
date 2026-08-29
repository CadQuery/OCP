# tests based on pyOCCT test suite
from pytest import fixture, approx

from OCP.BRepPrimAPI import BRepPrimAPI_MakeBox
from OCP.TopoDS import TopoDS_Shape
from OCP.collections import List_TopoDS_Shape

# %% TopoDS_Shape


def test_hash():

    s1 = BRepPrimAPI_MakeBox(1, 1, 1).Shape()
    s2 = BRepPrimAPI_MakeBox(1, 1, 1).Shape()
    s3 = BRepPrimAPI_MakeBox(1, 1, 1).Shape()

    assert len({s1, s2, s3}) == 3
    assert len({s1, s1, s3}) == 2


def test_iter():

    s1 = TopoDS_Shape()
    s2 = TopoDS_Shape()
    s3 = TopoDS_Shape()

    shape_list = List_TopoDS_Shape()
    shape_list.Append(s1)
    shape_list.Append(s2)
    shape_list.Append(s3)

    assert shape_list.Size() == 3

    for s in shape_list:
        assert isinstance(s, TopoDS_Shape)


# %% primitive

from OCP.BRepPrimAPI import BRepPrimAPI_MakeBox, BRepPrimAPI_MakeCylinder
from OCP.TopoDS import TopoDS_Solid, TopoDS_Shell, TopoDS_Shape


@fixture
def bldr():

    return BRepPrimAPI_MakeCylinder(1, 1)


def test_shell(bldr):

    assert isinstance(bldr.Shell(), TopoDS_Shell)


def test_solid(bldr):

    assert isinstance(bldr.Solid(), TopoDS_Solid)


def test_shape(bldr):

    assert isinstance(bldr.Shape(), TopoDS_Shape)


# %% algo

from OCP.BRepAlgoAPI import BRepAlgoAPI_Fuse, BRepAlgoAPI_Cut, BRepAlgoAPI_Common
from OCP.TopAbs import TopAbs_ShapeEnum


@fixture
def sphere():

    return BRepPrimAPI_MakeSphere(25.4).Shape()


@fixture
def box():
    return BRepPrimAPI_MakeBox(1, 2, 3).Shape()


def test_fuse(sphere, box):

    res = BRepAlgoAPI_Fuse(box, sphere).Shape()

    assert res.ShapeType() == TopAbs_ShapeEnum.TopAbs_COMPOUND


def test_cut(sphere, box):

    res = BRepAlgoAPI_Cut(box, sphere).Shape()

    assert res.ShapeType() == TopAbs_ShapeEnum.TopAbs_COMPOUND


def test_common(sphere, box):

    res = BRepAlgoAPI_Common(box, sphere).Shape()

    assert res.ShapeType() == TopAbs_ShapeEnum.TopAbs_COMPOUND


# %% roundtrip
from OCP.BinTools import BinTools
from OCP.BRepPrimAPI import BRepPrimAPI_MakeBox, BRepPrimAPI_MakeSphere
from OCP.BRepAlgoAPI import BRepAlgoAPI_Fuse
from OCP.TopoDS import TopoDS_Shape

import io


def test_roundtrip():
    box = BRepPrimAPI_MakeBox(
        8.189314010683498, 46.85954928498498, 14.39317846913498
    ).Shape()

    sphere = BRepPrimAPI_MakeSphere(18.12601828498498).Shape()
    shape = BRepAlgoAPI_Fuse(box, sphere).Shape()

    BinTools.Write_s(shape, "shape.brep")

    with open("shape.brep", "rb") as f:
        data = f.read()

    buf = io.BytesIO(data)
    result = TopoDS_Shape()

    BinTools.Read_s(result, buf)

    assert result.ShapeType() == TopAbs_ShapeEnum.TopAbs_COMPOUND


# %% edges to wires

from OCP.BRepBuilderAPI import BRepBuilderAPI_MakeEdge
from OCP.ShapeAnalysis import ShapeAnalysis_FreeBounds
from OCP.collections import HSequence_TopoDS_Shape
from OCP.gp import gp_Pnt


def test_edges2wire():

    p1 = gp_Pnt()
    p2 = gp_Pnt(1, 0, 0)
    e1 = BRepBuilderAPI_MakeEdge(p1, p2).Edge()

    p3 = gp_Pnt(1, 1, 0)
    e2 = BRepBuilderAPI_MakeEdge(p2, p3).Edge()

    seq = HSequence_TopoDS_Shape()
    seq.Append(e1)
    seq.Append(e2)

    wires = HSequence_TopoDS_Shape()

    ShapeAnalysis_FreeBounds.ConnectEdgesToWires_s(seq, 1.0e-6, False, wires)

    assert not wires.IsEmpty()
    assert wires.Length() == 1


# %% geom

from OCP.Geom import Geom_SphericalSurface
from OCP.gp import gp_Pnt, gp_Ax3, gp_Dir, gp_Sphere

import math


@fixture
def surf():

    p = gp_Pnt()
    v = gp_Dir(0, 0, 1)
    a = gp_Ax3(p, v)
    s = gp_Sphere(a, 1.0)

    return Geom_SphericalSurface(s)


def test_bounds(surf):

    u1, u2, v1, v2 = surf.Bounds()

    u1 == approx(0.0)
    u2 == approx(2.0 * math.pi)
    v1 == approx(-0.5 * math.pi)
    v2 == approx(0.5 * math.pi)


# %% attributes based on from OCP.XCAFDoc import XCAFDoc_VisMaterialPBR

from OCP.XCAFDoc import XCAFDoc_VisMaterialPBR
from OCP.Quantity import Quantity_ColorRGBA


def test_attributes():

    pbr = XCAFDoc_VisMaterialPBR()

    assert isinstance(pbr.BaseColor, Quantity_ColorRGBA)
    assert isinstance(pbr.Metallic, float)

    assert pbr.Metallic == 1.0
    pbr.Metallic = 0.0
    assert pbr.Metallic == 0.0
