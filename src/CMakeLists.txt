
add_library(primelib primelib.c primelib.h)

add_executable(pgs    pgs.c utils.c poly.c compute.c  compute/basic.c  pgs.h utils.h poly.h compute.h)

target_link_libraries(pgs primelib)

install (TARGETS pgs DESTINATION bin)


