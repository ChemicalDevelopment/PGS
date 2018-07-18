
add_library(primelib primelib.c primelib.h)

add_executable(pgs    pgs.c utils.c   pgs.h utils.h)

target_link_libraries(pgs primelib)

install (TARGETS pgs DESTINATION bin)


