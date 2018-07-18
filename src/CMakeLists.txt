
add_library(primelib primelib.c primelib.h)

add_executable(pgs    pgs.c    pgs.h)

target_link_libraries(pgs primelib)

install (TARGETS pgs DESTINATION bin)


