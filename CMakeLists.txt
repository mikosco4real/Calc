cmake_minimum_required(VERSION 3.5)

# Set Variables (build type = Debug/Release)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# Give the Project name which is also the output file name
project(calc)

# Include Subdirectories and includes directories
include_directories(${PROJECT_SOURCE_DIR}/header)
# add_subdirectory(${PROJECT_SOURCE_DIR}/src)
 
# Add the Executable Files
add_executable(
    calc 
    src/main.cpp
    src/calc.cpp
)

## Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

## Adding GTest Dependencies and setting up my program for ctest

enable_testing()
include(GoogleTest)

add_executable(
    test_calc
    test/main.cpp
    src/calc.cpp
    test/testCalc.cpp
    )

target_link_libraries(test_calc ${GTEST_LIBRARIES} pthread)

gtest_add_tests(TARGET test_calc)
