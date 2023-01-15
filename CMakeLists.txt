cmake_minimum_required( VERSION 3.17 )
project( OCP )

set( N_PROC 2 CACHE STRING "Number of processes used for generating code")

find_package(LLVM REQUIRED )
find_package(VTK REQUIRED )
find_package(RapidJSON REQUIRED )
find_package( Clang REQUIRED )

set( Python_FIND_VIRTUALENV FIRST )
find_package( Python COMPONENTS Interpreter REQUIRED )

get_target_property( LIBCLANG_PATH libclang IMPORTED_LOCATION_RELEASE )
get_target_property( VTK_INCLUDE_DIR VTK::CommonCore INTERFACE_INCLUDE_DIRECTORIES )

message( STATUS "${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}")

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(PLATFORM Windows)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    set(CXX_INCLUDES -i ${CLANG_INCLUDE_DIRS}/c++/v1/ )
    set(PLATFORM OSX)
else()
    set(PLATFORM Linux)
endif()

set(ENV{PYTHONPATH} ${CMAKE_SOURCE_DIR}/pywrap )

if( NOT EXISTS ${CMAKE_SOURCE_DIR}/OCP )
    message( STATUS "Running pywrap")
    execute_process(
        COMMAND
            ${Python_EXECUTABLE}
            -m bindgen
            -n ${N_PROC}
            -l ${LIBCLANG_PATH}
            -i ${CLANG_INCLUDE_DIRS}/
            -i ${VTK_INCLUDE_DIR}/
            -i ${CLANG_INSTALL_PREFIX}/lib/clang/${LLVM_VERSION}/include/
            ${CXX_INCLUDES}
            all ocp.toml ${PLATFORM}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        COMMAND_ECHO STDOUT
        RESULT_VARIABLE PYWRAP_RESULT
    )

    if( ${PYWRAP_RESULT} GREATER 0)
        message(FATAL_ERROR "Pywrap call failed")
    endif()

endif()

add_subdirectory( ${CMAKE_SOURCE_DIR}/OCP )
