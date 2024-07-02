#include "pch.h"
#include "../Project6/Cal.cpp"

TEST(TestCaseName, Testz) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestSumSum) {
	Cal cal = Cal();

	EXPECT_EQ(cal.getSumSum(1, 2, 3), 6);
}