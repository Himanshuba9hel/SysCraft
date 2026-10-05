cmake_minimum_required(VERSION 3.16)

project(CityForge LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CityForge main.cpp
    Building/building.h Building/building.cpp)

include(GNUInstallDirs)
install(TARGETS CityForge
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

enable_testing()
add_subdirectory(Testing)
