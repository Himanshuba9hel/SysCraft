cmake_minimum_required(VERSION 3.16)

project(CityForge LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Create a library for your shared source code and headers
add_library(BuildingLib
    Building/building.h Building/building.cpp
)

add_library(EntityLib
    Entity/entity.h Entity/entity.cpp
)
# 2. Add your main executable and link the library to it
add_executable(CityForge main.cpp)
target_link_libraries(CityForge PRIVATE BuildingLib)

include(GNUInstallDirs)
install(TARGETS CityForge
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

enable_testing()
add_subdirectory(Testing)
