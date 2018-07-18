cmake_minimum_required (VERSION 2.6)

set (PGS_VERSION_MAJOR 0)
set (PGS_VERSION_MINOR 1)

set (CMAKE_POSITION_INDEPENDENT_CODE ON)


#find_package(OpenCL)


#optimized
#-Ofast -ffast-math -finline-functions
set (CMAKE_C_FLAGS "-Ofast -ffast-math -finline-functions -g -Wall -pedantic -std=c99 ${CMAKE_C_FLAGS}")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__FILENAME__='\"$(subst ${CMAKE_SOURCE_DIR}/,,$(abspath $<))\"'")


#if (OpenCL_FOUND)
#    include_directories(${OpenCL_INCLUDE_DIRS})
#    add_definitions(-DHAVE_OPENCL)
#endif()


set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}")


configure_file (
  "${PROJECT_SOURCE_DIR}/pgsconfig.h.in"
  "${PROJECT_BINARY_DIR}/pgsconfig.h"
)

if (CMAKE_BUILD_TYPE MATCHES RELEASE)
    message("release mode")
else()
    message("dev mode")
    add_definitions(-DPGS_DEV)
endif()

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${CMAKE_SOURCE_DIR}/src")

add_subdirectory (src) 



install (FILES "${PROJECT_BINARY_DIR}/pgsconfig.h" DESTINATION include)

