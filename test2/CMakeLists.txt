cmake_minimum_required(VERSION 3.14)
project(test2 C)
find_package (Threads)
set(CMAKE_C_STANDARD 99)

add_executable(test2 main.c)
target_link_libraries (test2 ${CMAKE_THREAD_LIBS_INIT})
