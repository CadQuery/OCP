cmake_minimum_required( VERSION 3.16 )
project( OCP )

set( N_PROC 2 CACHE STRING "Number of processes used for generating code")

find_package(LLVM REQUIRED )
find_package(VTK REQUIRED )
find_package(RapidJSON REQUIRED )

message( STATUS "${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}")

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(WIN_PREFIX /Library)
    set(PLATFORM Windows)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    set(CXX_INCLUDES -i $ENV{CONDA_PREFIX}/include/c++/v1/ )
    set(PLATFORM OSX)
else()
    set(PLATFORM Linux)
endif()

set(ENV{PYTHONPATH} ${CMAKE_SOURCE_DIR}/pywrap )

if( NOT EXISTS ${CMAKE_SOURCE_DIR}/OCP )
    message( STATUS "Running pywrap")
    execute_process(
        COMMAND
            python
            -m bindgen
            -n ${N_PROC}
            -i $ENV{CONDA_PREFIX}${WIN_PREFIX}/include/
            -i $ENV{CONDA_PREFIX}${WIN_PREFIX}/include/vtk-${VTK_VERSION_MAJOR}.${VTK_VERSION_MINOR}/
            -i $ENV{CONDA_PREFIX}${WIN_PREFIX}/lib/clang/${LLVM_VERSION}/include/
            ${CXX_INCLUDES}
            all ocp.toml ${PLATFORM}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        COMMAND_ECHO STDOUT
    )
endif()

add_subdirectory( ${CMAKE_SOURCE_DIR}/OCP )
