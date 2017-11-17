add_library(primesieve primesieve.cpp primesieve.hpp)



install (TARGETS primesieve DESTINATION bin)
install (FILES primesieve.hpp DESTINATION include)


