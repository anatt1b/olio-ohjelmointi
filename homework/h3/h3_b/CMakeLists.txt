cmake_minimum_required(VERSION 3.16)

project(h3_b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h3_b main.cpp
    animal.h animal.cpp
    dog.h dog.cpp
    README.md)

include(GNUInstallDirs)
install(TARGETS h3_b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
