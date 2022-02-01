#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

TEST(Constructors, Stock) {
    Rectangle test;
    EXPECT_EQ(0, test.area());
    EXPECT_EQ(0, test.perimeter());
}

TEST(Constructors, ZeroParameter) {
    Rectangle test(0,0);
    EXPECT_EQ(0, test.area());
    EXPECT_EQ(0, test.perimeter());
}

TEST(Constructors, NormalParameters) {
    Rectangle test(2,3);
    EXPECT_EQ(6, test.area());
    EXPECT_EQ(10, test.perimeter());
}

TEST(Area, SingleZero) {
    Rectangle test(0,9);
    EXPECT_EQ(0, test.area());
}

TEST(Area, SingleNegative) {
    Rectangle test(-1,9);
    EXPECT_EQ(-9, test.area());
}

TEST(Area, DoubleNegative) {
    Rectangle test(-1,-1);
    EXPECT_EQ(1, test.area());
}

TEST(Perimeter, SingleZero) {
    Rectangle test(0,9);
    EXPECT_EQ(18, test.perimeter());
}

TEST(Perimeter, SingleNegative) {
    Rectangle test(-1,9);
    EXPECT_EQ(16, test.perimeter());
}

TEST(Perimeter, DoubleNegative) {
    Rectangle test(-1,-1);
    EXPECT_EQ(-4, test.perimeter());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
