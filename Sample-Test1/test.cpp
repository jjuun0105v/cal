#include "pch.h"
#include "../Project6/Cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestZegop) {
	Cal cal;
	EXPECT_EQ(cal.getZegop(2), 4);
	EXPECT_EQ(cal.getZegop(-1), 1);
	EXPECT_EQ(cal.getZegop(4), 16);
	EXPECT_EQ(cal.getZegop(cal.getZegop(3)), 81);
}