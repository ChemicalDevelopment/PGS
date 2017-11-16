cmake_minimum_required (VERSION 2.6)
project (PGS)
set (PGS_VERSION_MAJOR 0)
set (PGS_VERSION_MINOR 0)
 

configure_file (
  "${PROJECT_SOURCE_DIR}/PGSConfig.hpp.in"
  "${PROJECT_BINARY_DIR}/PGSConfig.hpp"
  )
 
include_directories("${PROJECT_BINARY_DIR}")


include_directories ("${PROJECT_SOURCE_DIR}/src")
add_subdirectory (src) 
 
# add the executable
add_executable(PGS PGS.cpp)
target_link_libraries (PGS src)


install (TARGETS PGS DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/PGSConfig.hpp" DESTINATION include)

