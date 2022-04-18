cmake_minimum_required(VERSION 3.21)
project(Linked_List_Bubblesort C)

set(CMAKE_C_STANDARD 23)

add_executable(Linked_List_Bubblesort main.c List_library.c List_library.h Sort_code.c Sort_code.h Test_set.c Test_set.h)
