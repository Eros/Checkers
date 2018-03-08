cmake_minimum_required(VERSION 3.6)
project(Checkers)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c game.h game.c)
add_executable(Checkers ${SOURCE_FILES} game.h)