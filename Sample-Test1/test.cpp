#include "pch.h"
#include "../Project6/Cal.cpp"

TEST(TestCaseName, TestGetGop) {
	Cal cal;

	EXPECT_EQ(30, cal.getGop(5, 6));
}