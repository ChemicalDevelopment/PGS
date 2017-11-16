add_library(src compute.cpp)



install (TARGETS src DESTINATION bin)
install (FILES compute.hpp DESTINATION include)


