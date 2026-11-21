cmake_minimum_required(VERSION 3.20)
project(AcronousExecutor VERSION 0.1.0 LANGUAGES CXX)

include(FetchContent)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LUAU_BUILD_CLI OFF CACHE BOOL "" FORCE)
set(LUAU_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(LUAU_BUILD_WEB OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
    luau
    GIT_REPOSITORY https://github.com/luau-lang/luau.git
    GIT_TAG 0.685
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(luau)

add_library(acronous_core src/runtime.cpp)
target_include_directories(acronous_core PUBLIC include)
target_link_libraries(acronous_core PUBLIC Luau.Compiler Luau.VM)
target_compile_features(acronous_core PUBLIC cxx_std_17)

add_executable(acronous src/main.cpp)
target_link_libraries(acronous PRIVATE acronous_core)

include(CTest)
if(BUILD_TESTING)
    add_executable(acronous_tests tests/runtime_tests.cpp)
    target_link_libraries(acronous_tests PRIVATE acronous_core)
    add_test(NAME acronous_runtime_tests COMMAND acronous_tests)
endif()
