// Created on: 1993-11-09
// Created by: Laurent BOURESCHE
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _ChFi3d_HeaderFile
#define _ChFi3d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <TopAbs_Orientation.hxx>
#include <Standard_Boolean.hxx>
#include <ChFiDS_TypeOfConcavity.hxx>
#include <GeomAbs_Shape.hxx>
class BRepAdaptor_Surface;
class TopoDS_Edge;
class TopoDS_Face;


//! creation of spatial fillets on a solid.
class ChFi3d 
{
public:

  DEFINE_STANDARD_ALLOC

  //! Defines the type of concavity in the edge of connection of two faces
  Standard_EXPORT static ChFiDS_TypeOfConcavity DefineConnectType (const TopoDS_Edge&     E,
                                                                   const TopoDS_Face&     F1,
                                                                   const TopoDS_Face&     F2,
                                                                   const Standard_Real    SinTol,
                                                                   const Standard_Boolean CorrectPoint);

  //! Returns true if theEdge between theFace1 and theFace2 is tangent
  Standard_EXPORT static Standard_Boolean IsTangentFaces (const TopoDS_Edge& theEdge,
                                                          const TopoDS_Face& theFace1,
                                                          const TopoDS_Face& theFace2,
                                                          const GeomAbs_Shape Order = GeomAbs_G1);
