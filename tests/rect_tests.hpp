#ifndef __RECT_TESTS_HPP__
#define __RECT_TESTS_HPP__

#include "gtest/gtest.h"

#include "../src/rectangle.cpp"

TEST(Constructor, DefaultConstructor) {
	Rectangle* test = new Rectangle(0,0);
	EXPECT_EQ(test -> get_width(), 0);
	EXPECT_EQ(test -> get_height(),0);
}

TEST(Constructor, DefaultConstructorWidth) {
        Rectangle* test = new Rectangle(0,0);
        EXPECT_EQ(test -> get_width(), 0);
}

TEST(Constructor, DefaultConstructorHeight) {
        Rectangle* test = new Rectangle(0,0);
        EXPECT_EQ(test -> get_height(),0);
}

TEST(Constructor, DefaultConstructorDiffNums) {
        Rectangle* test = new Rectangle(1,2);
        EXPECT_EQ(test -> get_width(), 1);
        EXPECT_EQ(test -> get_height(),2);
}

TEST(Area, AreaZero) {
        Rectangle* test = new Rectangle(0,0);
        EXPECT_EQ(test -> area(),0);
}

TEST(Area, AreaNum) {
        Rectangle* test = new Rectangle(3,2);
        EXPECT_EQ(test -> area(),6);
}

TEST(Area, AreaBig) {
        Rectangle* test = new Rectangle(300,200);
        EXPECT_EQ(test -> area(),60000);
}

TEST(Perimeter, PerimeterZero) {
        Rectangle* test = new Rectangle(0,0);
        EXPECT_EQ(test -> perimeter(),0);
}

TEST(Perimeter, PerimeterNum) {
        Rectangle* test = new Rectangle(3,4);
        EXPECT_EQ(test -> perimeter(),14);
}

TEST(Perimeter, PerimeterBig) {
        Rectangle* test = new Rectangle(4000,5000);
        EXPECT_EQ(test -> perimeter(),18000);
}
#endif
