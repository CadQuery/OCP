cmake_minimum_required( VERSION 3.16 )
project( OCP )

include(ProcessorCount)
ProcessorCount(N)
   
find_package(LLVM REQUIRED )
find_package(VTK REQUIRED )

MESSAGE( STATUS "Running pywrap")

execute_process(
    COMMAND pywrap -n ${N} -i $ENV{CONDA_PREFIX}/include/ -i $ENV{CONDA_PREFIX}/include/vtk-${VTK_VERSION_MAJOR}.${VTK_VERSION_MINOR}/ -i $ENV{CONDA_PREFIX}/lib/clang/${LLVM_VERSION}/include/ all ocp.toml Linux
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

add_subdirectory( ${CMAKE_SOURCE_DIR}/OCP )
