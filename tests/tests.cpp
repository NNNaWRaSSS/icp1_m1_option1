#include "gtest/gtest.h"

extern "C" {
    #include "../src/myprogram.c"
}

TEST(RectanglePerimeterTest, PositiveValues) {
    ASSERT_EQ(10, rectangle_perimeter(2, 3));
    ASSERT_EQ(14, rectangle_perimeter(4, 3));
    ASSERT_EQ(18, rectangle_perimeter(6, 3));
}

TEST(RectanglePerimeterTest, ZeroValues) {
    ASSERT_EQ(0, rectangle_perimeter(0, 0));
    ASSERT_EQ(6, rectangle_perimeter(0, 3));
    ASSERT_EQ(8, rectangle_perimeter(4, 0));
}

TEST(RectanglePerimeterTest, NegativeValues) {
    ASSERT_EQ(-1, rectangle_perimeter(-2, -3));
    ASSERT_EQ(-1, rectangle_perimeter(-4, -3));
    ASSERT_EQ(-1, rectangle_perimeter(-6, -3));
}

TEST(RectanglePerimeterTest, MixedValues) {
    ASSERT_EQ(-1, rectangle_perimeter(-2, 3));
    ASSERT_EQ(-1, rectangle_perimeter(4, -3));
    ASSERT_EQ(-1, rectangle_perimeter(-6, 3));
}

TEST(RectangleAreaTest, PositiveValues) {
    ASSERT_EQ(6, rectangle_area(2, 3));
    ASSERT_EQ(12, rectangle_area(4, 3));
    ASSERT_EQ(18, rectangle_area(6, 3));
}

TEST(RectangleAreaTest, ZeroValues) {
    ASSERT_EQ(0, rectangle_area(0, 0));
    ASSERT_EQ(0, rectangle_area(0, 3));
    ASSERT_EQ(0, rectangle_area(4, 0));
}

TEST(RectangleAreaTest, NegativeValues) {
    ASSERT_EQ(-1, rectangle_area(-2, -3));
    ASSERT_EQ(-1, rectangle_area(-4, -3));
    ASSERT_EQ(-1, rectangle_area(-6, -3));
}

TEST(RectangleAreaTest, MixedValues) {
    ASSERT_EQ(-1, rectangle_area(-2, 3));
    ASSERT_EQ(-1, rectangle_area(4, -3));
    ASSERT_EQ(-1, rectangle_area(-6, 3));
}

TEST(CirclePerimeterTest, PositiveValues) {
    ASSERT_NEAR(6.28318, circle_perimeter(1), 0.01);
    ASSERT_NEAR(12.56636, circle_perimeter(2), 0.01);
    ASSERT_NEAR(18.84954, circle_perimeter(3), 0.01);
}

TEST(CirclePerimeterTest, ZeroValues) {
    ASSERT_EQ(0, circle_perimeter(0));
}

TEST(CirclePerimeterTest, NegativeValues) {
    ASSERT_EQ(-1, circle_perimeter(-1));
    ASSERT_EQ(-1, circle_perimeter(-2));
    ASSERT_EQ(-1, circle_perimeter(-3));
}

TEST(CirclePerimeterTest, MixedValues) {
    ASSERT_EQ(-1, circle_perimeter(-1));
    ASSERT_NEAR(12.56636, circle_perimeter(2),0.01);
    ASSERT_EQ(-1, circle_perimeter(-3));
}

TEST(CircleAreaTest, PositiveValues) {
    ASSERT_NEAR(3.14159, circle_area(1), 0.01);
    ASSERT_NEAR(12.56636, circle_area(2),0.01);
    ASSERT_NEAR(28.27431, circle_area(3),0.01);
}

TEST(CircleAreaTest, ZeroValues) {
    ASSERT_EQ(0, circle_area(0));
}

TEST(CircleAreaTest, NegativeValues) {
    ASSERT_EQ(-1, circle_area(-1));
    ASSERT_EQ(-1, circle_area(-2));
    ASSERT_EQ(-1, circle_area(-3));
}

TEST(CircleAreaTest, MixedValues) {
    ASSERT_EQ(-1, circle_area(-1));
    ASSERT_EQ(12.56636, circle_area(2));
    ASSERT_EQ(-1, circle_area(-3));
}

TEST(TrianglePerimeterTest, PositiveValues) {
    ASSERT_EQ(6, triangle_perimeter(1, 2, 3));
    ASSERT_EQ(9, triangle_perimeter(2, 3, 4));
    ASSERT_EQ(12, triangle_perimeter(3, 4, 5));
}

TEST(TrianglePerimeterTest, ZeroValues) {
    ASSERT_EQ(-1, triangle_perimeter(0, 0, 0));
    ASSERT_EQ(-1, triangle_perimeter(0, 3, 4));
    ASSERT_EQ(-1, triangle_perimeter(2, 0, 4));
    ASSERT_EQ(-1, triangle_perimeter(2, 3, 0));
}

TEST(TrianglePerimeterTest, NegativeValues) {
    ASSERT_EQ(-1, triangle_perimeter(-1, -2, -3));
    ASSERT_EQ(-1, triangle_perimeter(-2, -3, -4));
    ASSERT_EQ(-1, triangle_perimeter(-3, -4, -5));
}

TEST(TrianglePerimeterTest, MixedValues) {
    ASSERT_EQ(-1, triangle_perimeter(-1, 2, 3));
    ASSERT_EQ(-1, triangle_perimeter(2, -3, 4));
    ASSERT_EQ(-1, triangle_perimeter(3, 4, -5));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}