#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BRepClass3d_SolidExplorer.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Shell.hxx>
#include <IntCurvesFace_Intersector.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <gp_Lin.hxx>

// module includes
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_BndBoxTree.hxx>
#include <BRepClass3d_DataMapIteratorOfMapOfInter.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_MapOfInter.hxx>
#include <BRepClass3d.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\BRepClass3d_SClassifier.hxx
// ./opencascade\BRepClass3d_BndBoxTree.hxx
// ./opencascade\BRepClass3d_DataMapIteratorOfMapOfInter.hxx
// ./opencascade\BRepClass3d_SolidExplorer.hxx
// ./opencascade\BRepClass3d_MapOfInter.hxx
// ./opencascade\BRepClass3d.hxx
// ./opencascade\BRepClass3d_Intersector3d.hxx
// ./opencascade\BRepClass3d_SolidClassifier.hxx
// ./opencascade\BRepClass3d_SolidPassiveClassifier.hxx

// user-defined post
