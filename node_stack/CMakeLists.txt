cmake_minimum_required(VERSION 3.9)
project(node_stack)

set(CMAKE_CXX_STANDARD 11)

add_executable(node_stack main.cpp int_node.cpp int_node.h basic_int_stack.cpp basic_int_stack.h)