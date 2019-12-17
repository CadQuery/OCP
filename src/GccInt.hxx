#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_DomainError.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Elips2d.hxx>

// module includes
#include <GccInt_BLine.hxx>
#include <GccInt_Bisec.hxx>
#include <GccInt_BPoint.hxx>
#include <GccInt_BParab.hxx>
#include <GccInt_BElips.hxx>
#include <GccInt_BCirc.hxx>
#include <GccInt_BHyper.hxx>
#include <GccInt_IType.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/GccInt_BLine.hxx
// ./opencascade/GccInt_Bisec.hxx
// ./opencascade/GccInt_BPoint.hxx
// ./opencascade/GccInt_BParab.hxx
// ./opencascade/GccInt_BElips.hxx
// ./opencascade/GccInt_BCirc.hxx
// ./opencascade/GccInt_BHyper.hxx
// ./opencascade/GccInt_IType.hxx

// user-defined post
