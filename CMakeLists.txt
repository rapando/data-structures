cmake_minimum_required(VERSION 3.17)
project(data_structures C)

set(CMAKE_C_STANDARD 99)

add_executable(data_structures main.c linked-lists/linked-lists.c linked-lists/linked-lists.h stack/stack.c stack/stack.h)