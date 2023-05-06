# Make the C++ project to run the Classes program.
# Author: Andrew Jarombek
# Date: 5/5/2023

cmake_minimum_required(VERSION 3.9)
project(classes)

set(CMAKE_CXX_STANDARD 17)

add_executable(classes account.cpp account.h)