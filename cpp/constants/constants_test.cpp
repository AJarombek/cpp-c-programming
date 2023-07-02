// Unit tests of the array.h and array.cpp files using Google Test
// Author: Andrew Jarombek
// Date: 7/2/2023

#include "array.h"
#include <gtest/gtest.h>

class ArrayTest: public ::testing::Test {
protected:
    Array<int, 3> array;

    void SetUp() override {
        array = {1, 2, 3};
    }
};

TEST_F(ArrayTest, GetSize) {
    EXPECT_EQ(array.size(), 3);
}

// Run all the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
