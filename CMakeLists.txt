cmake_minimum_required(VERSION 4.0)
project(filesys C)

set(CMAKE_C_STANDARD 23)

add_executable(filesys main.c
        config.c
        config.h)
