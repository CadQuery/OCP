cmake_minimum_required( VERSION 3.16 )
project( OCP
         LANGUAGES CXX )

list( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR} )

if(WIN32)
  set( PYTHON_EXECUTABLE "$ENV{CONDA_PREFIX}/python.exe" )
  add_compile_definitions( _hypot=hypot _AMD64_ _WINDOWS)
  execute_process(COMMAND ${PYTHON_EXECUTABLE} -c "from sys import version_info as vi; print(f'{vi.major}{vi.minor}')"
                  OUTPUT_VARIABLE PYTHON_VER )
  string(STRIP ${PYTHON_VER} PYTHON_VER)
  set( PYTHON_LIBRARY $ENV{CONDA_PREFIX}/libs/python${PYTHON_VER}.lib )
else()
  set( PYTHON_EXECUTABLE "$ENV{CONDA_PREFIX}/bin/python" )
endif()

find_package( pybind11 REQUIRED )
find_package( OpenCascade REQUIRED COMPONENTS OPENCASCADE )

include_directories( ${PROJECT_SOURCE_DIR} )
file( GLOB CPP_FILES ${PROJECT_SOURCE_DIR}/*.cpp )

add_library( OCP MODULE ${CPP_FILES} )

target_link_libraries( OCP PRIVATE OPENCASCADE pybind11::module )
set_target_properties( OCP
                       PROPERTIES
                       CXX_STANDARD 17
                       INTERPROCEDURAL_OPTIMIZATION FALSE
                       PREFIX "${PYTHON_MODULE_PREFIX}"
                       SUFFIX "${PYTHON_MODULE_EXTENSION}" )

if(WIN32)
  target_compile_options( OCP PRIVATE /bigobj )
  target_link_libraries( OCP PRIVATE opengl32 )
else()
  set_target_properties( OCP
                         PROPERTIES
                         CMAKE_CXX_FLAGS_RELEASE "-O3 "
                         COMPILE_FLAGS "-fpermissive -fvisibility=hidden -fvisibility-inlines-hidden" )
endif()

if(APPLE)
  #target_link_libraries( OCP PRIVATE "-undefined warning" )
endif()