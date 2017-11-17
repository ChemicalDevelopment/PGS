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


if(FIREBASE_SDK)
else()
  set (FIREBASE_SDK "${PROJECT_SOURCE_DIR}/resources/firebase_cpp_sdk")
endif()

if(APPLE)
    set (FLIB "darwin")
endif()

if(UNIX AND NOT APPLE)
    set (FLIB "linux")
endif()

if(WIN32)
    set (FLIB "windows")
endif()


set (FLIB "${FIREBASE_SDK}/libs/${FLIB}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__FILENAME__='\"$(subst ${CMAKE_SOURCE_DIR}/,,$(abspath $<))\"'")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I${FIREBASE_SDK}/include")


configure_file (
  "${PROJECT_SOURCE_DIR}/PGSConfig.hpp.in"
  "${PROJECT_BINARY_DIR}/PGSConfig.hpp"
)
 
include_directories("${PROJECT_BINARY_DIR}")
include_directories ("${PROJECT_SOURCE_DIR}/src")

add_subdirectory (src) 

add_executable(PGS PGS.cpp)
target_link_libraries (PGS src)


#add_subdirectory (${FLIB}) 
#add_library(app STATIC IMPORTED)
#set_property(TARGET app PROPERTY IMPORTED_LOCATION ${FLIB}/libapp.a)


target_link_libraries (PGS ${FLIB}/libapp.a)


install (TARGETS PGS DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/PGSConfig.hpp" DESTINATION include)

