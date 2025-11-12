cmake_minimum_required(VERSION 3.16)

project(h2_b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2_b main.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS h2_b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
