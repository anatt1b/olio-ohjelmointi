cmake_minimum_required(VERSION 3.16)

project(h3_a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h3_a main.cpp
    Chef.h Chef.cpp
    ItalianChef.h ItalianChef.cpp)

include(GNUInstallDirs)
install(TARGETS h3_a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
