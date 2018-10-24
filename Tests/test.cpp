#include "pch.h"
#include "Temporary.cpp"

TEST(TestCaseName, TestName) {
	Temporary temporary = Temporary();
	int a = temporary.functionReturn5();
	EXPECT_EQ(a, 5);
	EXPECT_EQ(temporary.print10(), 10);
	EXPECT_EQ(6, 6);
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}