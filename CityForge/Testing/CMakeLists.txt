cmake_minimum_required(VERSION 3.16)

project(CityForgeTest LANGUAGES CXX)

enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Safely pull Google Test for any OS
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

# 2. Scope the Windows-specific runtime fix strictly to the MSVC compiler
if (MSVC)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

FetchContent_MakeAvailable(googletest)

# --- Include Directories ---
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/..
    ${CMAKE_CURRENT_SOURCE_DIR}/../Building
)

add_executable(CityForgeTest
    main.cpp tst_building.cpp
    ${PROJECT_SOURCES}
)

# 3. Link the targets directly
target_link_libraries(CityForgeTest PRIVATE
    BuildingLib
    gtest
    gmock
)

add_test(NAME CityForgeTest COMMAND CityForgeTest)

include(GNUInstallDirs)
install(TARGETS CityForgeTest
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)