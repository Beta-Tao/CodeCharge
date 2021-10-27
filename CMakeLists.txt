cmake_minimum_required(VERSION 2.9)
project(CodeCharge)

set(CMAKE_CXX_STANDARD 14)

add_executable(301_remove-invalid-parentheses leetcode/editor/cn/301_remove-invalid-parentheses.cpp)
set_target_properties(301_remove-invalid-parentheses PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
add_executable(1_two-sum leetcode/editor/cn/1_two-sum.cpp)
set_target_properties(1_two-sum PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")