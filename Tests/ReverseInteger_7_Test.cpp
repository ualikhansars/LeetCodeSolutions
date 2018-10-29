#include "pch.h"
#include "ReverseInteger_7.cpp"

ReverseInteger reverseInteger = ReverseInteger();
TEST(ReverseInteger, 123) {
	EXPECT_EQ(reverseInteger.reverse(123), 321);
}

TEST(ReverseInteger, 22) {
	EXPECT_EQ(reverseInteger.reverse(22), 22);
}

TEST(ReverseInteger, Negative123) {
	EXPECT_EQ(reverseInteger.reverse(-123), -321);
}

TEST(ReverseInteger, 120) {
	EXPECT_EQ(reverseInteger.reverse(120), 21);
}

TEST(ReverseInteger, 12000) {
	EXPECT_EQ(reverseInteger.reverse(12000), 21);
}

TEST(ReverseInteger, Negative120) {
	EXPECT_EQ(reverseInteger.reverse(-120), -21);
}

TEST(ReverseInteger, 0) {
	EXPECT_EQ(reverseInteger.reverse(0), 0);
}

TEST(ReverseInteger, Negative2147483648) {
	EXPECT_EQ(reverseInteger.reverse(-2147483648), 0);
}


