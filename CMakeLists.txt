cmake_minimum_required (VERSION 2.6)

project (PGS)
set (PGS_VERSION_MAJOR 0)
set (PGS_VERSION_MINOR 0)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread ")

if (CMAKE_VERSION VERSION_LESS "3.1")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set (CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")
  endif ()
else ()
  set (CMAKE_CXX_STANDARD 11)
endif ()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__FILENAME__='\"$(subst ${CMAKE_SOURCE_DIR}/,,$(abspath $<))\"'")

configure_file (
  "${PROJECT_SOURCE_DIR}/PGSConfig.hpp.in"
  "${PROJECT_BINARY_DIR}/PGSConfig.hpp"
)
 
include_directories("${PROJECT_BINARY_DIR}")
include_directories ("${PROJECT_SOURCE_DIR}/src")

add_subdirectory (src) 

add_executable(PGS PGS.cpp)
target_link_libraries (PGS primesieve)


install (TARGETS PGS DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/PGSConfig.hpp" DESTINATION include)

