cmake_minimum_required( VERSION 3.16 )
project( OCP )

set( N_PROC 2 CACHE STRING "Number of processes used for generating code")

find_package(LLVM REQUIRED )
find_package(VTK REQUIRED )
find_package(RapidJSON REQUIRED )

message( STATUS "${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}")
message( STATUS "Running pywrap")

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(WIN_PREFIX /Library)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    set(CXX_INCLUDES -i $ENV{CONDA_PREFIX}/include/c++/v1/ )
endif()

set(ENV{PYTHONPATH} ${CMAKE_SOURCE_DIR}/pywrap )

execute_process(
    COMMAND
        pywrap
        -n ${N_PROC}
        -i $ENV{CONDA_PREFIX}${WIN_PREFIX}/include/
        -i $ENV{CONDA_PREFIX}${WIN_PREFIX}/include/vtk-${VTK_VERSION_MAJOR}.${VTK_VERSION_MINOR}/
        -i $ENV{CONDA_PREFIX}${WIN_PREFIX}/lib/clang/${LLVM_VERSION}/include/
        ${CXX_INCLUDES}
        all ocp.toml Linux
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND_ECHO STDOUT
)

add_subdirectory( ${CMAKE_SOURCE_DIR}/OCP )
