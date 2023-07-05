// Unit tests of the references.h and references.cpp files using Google Test
// Author: Andrew Jarombek
// Date: 7/4/2023

#include "references.h"
#include <gtest/gtest.h>

// Test fixture for Array<int>
class ReferencesTest: public ::testing::Test {};

// Test case to verify how lvalue references work
TEST_F(ReferencesTest, LValueReferences) {
    int x = 1;
    int& y = {x};
    int z = y;

    EXPECT_EQ(x, 1);
    EXPECT_EQ(y, 1);
    EXPECT_EQ(z, 1);

    y = 2;

    EXPECT_EQ(x, 2);
    EXPECT_EQ(y, 2);
    EXPECT_EQ(z, 1);
}

// Test case to verify the times() function
TEST_F(ReferencesTest, TimesAltersVector) {
    std::vector<double> v {1.1, 2.2, 3.3};
    times(v, 3);

    EXPECT_EQ(v[0], 3.3);
    EXPECT_EQ(v[1], 6.6);
    EXPECT_EQ(v[2], 9.9);
}

// Run all the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
