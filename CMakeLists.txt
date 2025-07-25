cmake_minimum_required( VERSION 3.17 )
project( OCP )

set( N_PROC 2 CACHE STRING "Number of processes used for generating code")


find_package( LLVM REQUIRED )
find_package( VTK REQUIRED
  COMPONENTS
    CommonCore
    WrappingPythonCore
    RenderingCore
    RenderingOpenGL2
    CommonDataModel
    CommonExecutionModel
    freetype
)

message(STATUS "VTK ${VTK_VERSION} found")

find_package( RapidJSON REQUIRED )
find_package( Clang REQUIRED )

set( Python_FIND_VIRTUALENV FIRST )
find_package( Python 3.9 COMPONENTS Interpreter Development REQUIRED )

# find OCCT and dump symbols
if(OCCT_LIB_DIR)
    file(GLOB occt_libs LIST_DIRECTORIES false ${OCCT_LIB_DIR} )
else()
    find_package( OpenCASCADE REQUIRED )

    foreach(target ${OpenCASCADE_LIBRARIES} )
        get_target_property(loc ${target} IMPORTED_LOCATION_RELEASE)
        list( APPEND occt_libs ${loc} )
    endforeach()
endif()

execute_process(
    COMMAND
    ${Python_EXECUTABLE}
    ${CMAKE_SOURCE_DIR}/dump_symbols.py
    "${occt_libs}"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

get_target_property( LIBCLANG_PATH libclang IMPORTED_LOCATION_RELEASE )
get_target_property( VTK_INCLUDE_DIR VTK::CommonCore INTERFACE_INCLUDE_DIRECTORIES )

# for some reason I get multiple generator expressions
string(REPLACE ">" ">;" VTK_INCLUDE_DIR ${VTK_INCLUDE_DIR})
list(GET VTK_INCLUDE_DIR 0 VTK_INCLUDE_DIR)

message( STATUS "Include dirs: ${VTK_INCLUDE_DIR}")
message( STATUS "Include dirs: ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}")

if(NOT ${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    foreach( inc IN LISTS CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES)
        list( APPEND CXX_INCLUDES -i ${inc}/ )
    endforeach()
else()
    list( APPEND CXX_INCLUDES -i /opt/usr/local/include/c++/v1/ -i /opt/usr/local/include/ )
endif()

if(PLATFORM)
    message( STATUS "Requested platform: ${PLATFORM}")
else()
    message( STATUS "Platform not specified.")

    if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
        set(PLATFORM Windows)
    elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
        set(PLATFORM OSX)
    else()
        set(PLATFORM Linux)
    endif()
endif()

set(ENV{PYTHONPATH} ${CMAKE_SOURCE_DIR}/pywrap )

add_custom_command(
    OUTPUT ${CMAKE_SOURCE_DIR}/OCP/CMakeLists.txt
    COMMAND
        ${CMAKE_COMMAND} -E env "PYTHONPATH=${CMAKE_SOURCE_DIR}/pywrap"
        ${Python_EXECUTABLE}
        -m bindgen
        -n ${N_PROC}
        -l ${LIBCLANG_PATH}
        -i ${CLANG_INCLUDE_DIRS}/
        -i ${VTK_INCLUDE_DIR}/
        -i ${CLANG_INSTALL_PREFIX}/lib/clang/${LLVM_VERSION_MAJOR}/include/
        -p ${CMAKE_SOURCE_DIR}
        ${CXX_INCLUDES}
        -i ${CMAKE_SOURCE_DIR}/extern/include
        all ${CMAKE_SOURCE_DIR}/ocp.toml ${PLATFORM}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    DEPENDS ${CMAKE_SOURCE_DIR}/ocp.toml
    USES_TERMINAL
    COMMENT "Running pywrap"
)

add_custom_target(pywrap ALL DEPENDS ${CMAKE_SOURCE_DIR}/OCP/CMakeLists.txt)
