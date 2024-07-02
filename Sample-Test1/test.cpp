#include "pch.h"
#include "../Project6/Cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, getDivide) {
	Cal cal;
	EXPECT_EQ(cal.getDivide(2, 2), 1);
	EXPECT_EQ(cal.getDivide(1, 2), 0.5);
}