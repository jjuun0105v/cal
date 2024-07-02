#include "pch.h"
#include "../Project6/Cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestGetSum) {
	Cal* c = new Cal();

	EXPECT_EQ(c->getSum(1, 2), 3);
}