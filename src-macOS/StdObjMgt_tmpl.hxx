#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdObjMgt_Persistent.hxx>
#include <StdObjMgt_ReadData.hxx>
#include <StdObjMgt_WriteData.hxx>
#include <TDocStd_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>

// module includes
#include <StdObjMgt_TransientPersistentMap.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <StdObjMgt_ReadData.hxx>
#include <StdObjMgt_Attribute.hxx>
#include <StdObjMgt_WriteData.hxx>
#include <StdObjMgt_SharedObject.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StdObjMgt_TransientPersistentMap.hxx
// ./opencascade/StdObjMgt_Persistent.hxx
// ./opencascade/StdObjMgt_ReadData.hxx
// ./opencascade/StdObjMgt_Attribute.hxx

template <typename Transient>
void preregister_template_StdObjMgt_Attribute(py::object &m, const char *name){
    py::class_<StdObjMgt_Attribute<Transient> , shared_ptr<StdObjMgt_Attribute<Transient>> >(m,name,R"#(Root class for a temporary persistent object corresponding to an attribute.)#");
}

template <typename Transient>
void register_template_StdObjMgt_Attribute(py::object &m, const char *name){
    static_cast<py::class_<StdObjMgt_Attribute<Transient> , shared_ptr<StdObjMgt_Attribute<Transient>> >>(m.attr(name))
    ;
};
// ./opencascade/StdObjMgt_WriteData.hxx
// ./opencascade/StdObjMgt_SharedObject.hxx
// ./opencascade/StdObjMgt_MapOfInstantiators.hxx

// user-defined post
