include( FindPackageHandleStandardArgs )

SET(OCCT_INCLUDE_PATH "" CACHE PATH "OCCT include path")
SET(OCCT_LIBRARY_PATH "" CACHE PATH "OCCT library path")

find_path(
    OPENCASCADE_INCLUDE_DIR Standard.hxx PATHS
    $ENV{CONDA_PREFIX}/include/opencascade
    $ENV{CONDA_PREFIX}/Library/include/opencascade
    ${OCCT_INCLUDE_PATH}
)

set ( OCCT_MODULES
    TKMath
    TKernel
    TKG2d
    TKG3d
    TKGeomBase
    TKBRep
    TKGeomAlgo
    TKTopAlgo
    TKPrim
    TKShHealing
    TKHLR
    TKBO
    TKBool
    TKFeat
    TKOffset
    TKFillet
    TKMesh
    TKXMesh
    TKXSBase
    TKService
    TKV3d
    TKOpenGl
    TKMeshVS
    TKBin
    TKBinL
    TKBinTObj
    TKCAF
    TKCDF
    TKLCAF
    TKStd
    TKStdL
    TKTObj
    TKVCAF
    TKXml
    TKXmlL
    TKXmlTObj
    TKIGES
    TKSTEP
    TKSTEP209
    TKSTEPAttr
    TKSTEPBase
    TKSTL
    TKXDESTEP
    TKXCAF
    TKBinXCAF
    TKXmlXCAF
    TKVRML
    TKRWMesh
    TKIVtk
    TKDE)


add_library( OPENCASCADE INTERFACE )

foreach( MOD ${OCCT_MODULES})

     find_library(
         OPENCASCADE_LIB_${MOD} NAMES ${MOD} PATHS
         ${OCCT_LIBRARY_PATH}
         $ENV{CONDA_PREFIX}/lib
         $ENV{CONDA_PREFIX}/Library/lib
     )

     add_library( OPENCASCADE_${MOD} UNKNOWN IMPORTED)
     set_target_properties( OPENCASCADE_${MOD}
                            PROPERTIES
                            IMPORTED_LOCATION "${OPENCASCADE_LIB_${MOD}}" )

     target_link_libraries( OPENCASCADE INTERFACE OPENCASCADE_${MOD} )

     list( APPEND OPENCASCADE_LIBRARIES ${OPENCASCADE_LIB_${MOD}} )

endforeach()

target_include_directories( OPENCASCADE INTERFACE ${OPENCASCADE_INCLUDE_DIR})

find_package_handle_standard_args( OPENCASCADE DEFAULT_MSG OPENCASCADE_LIBRARIES OPENCASCADE_INCLUDE_DIR )
