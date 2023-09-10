// Unit tests of the memory_arena.h and memory_arena.cpp files using Google Test
// Author: Andrew Jarombek
// Date: 9/9/2023

#include "memory_arena.h"
#include <gtest/gtest.h>

class MemoryArenaTest: public ::testing::Test {};

// Run all the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
