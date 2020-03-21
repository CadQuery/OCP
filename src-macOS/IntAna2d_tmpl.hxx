#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <IntAna2d_Conic.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_XY.hxx>
#include <gp_Ax2d.hxx>

// module includes
#include <IntAna2d_Outils.hxx>
#include <IntAna2d_AnaIntersection.hxx>
#include <IntAna2d_Conic.hxx>
#include <IntAna2d_IntPoint.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IntAna2d_Outils.hxx
// ./opencascade/IntAna2d_AnaIntersection.hxx
// ./opencascade/IntAna2d_Conic.hxx
// ./opencascade/IntAna2d_IntPoint.hxx

// user-defined post
