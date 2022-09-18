# Make the C project to run the Data Alignment program.
# Author: Andrew Jarombek
# Date: 9/18/2022

cmake_minimum_required(VERSION 3.9)
project(c C)

set(CMAKE_C_STANDARD 99)

add_executable(c data_alignment.c)