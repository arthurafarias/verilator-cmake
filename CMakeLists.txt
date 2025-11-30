cmake_minimum_required(VERSION 3.16)
project(my-verilog-test-suite LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMakeModules")

find_package(Verilator REQUIRED)

# ============================================================
# EXAMPLE: Your testbench
# ============================================================

add_verilated_testbench_custom(
    TARGET shift
    CPP_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/shift-tb.cpp
    CPP_INCLUDE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    VERILOG_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/shift.v
)
