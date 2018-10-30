#include "pch.h"
#include "ValidParentheses_20.cpp"

ValidParentheses validParentheses = ValidParentheses();
TEST(ValidParentheses, LongExpression) {
	EXPECT_EQ(validParentheses.isValid("[]{{()}}"), true);
}


TEST(ValidParentheses, LongExpressionInvalid) {
	EXPECT_EQ(validParentheses.isValid("[]{{(}}"), false);
}


TEST(ValidParentheses, 2PairValid) {
	EXPECT_EQ(validParentheses.isValid("{[]}"), true);
}



TEST(ValidParentheses, OnePairValid) {
	EXPECT_EQ(validParentheses.isValid("()"), true);
}

TEST(ValidParentheses, 3PairValid) {
	EXPECT_EQ(validParentheses.isValid("()[]{}"), true);
}

TEST(ValidParentheses, PairInvalid) {
	EXPECT_EQ(validParentheses.isValid("(]"), false);
}

TEST(ValidParentheses, TwoPairsInvalid) {
	EXPECT_EQ(validParentheses.isValid("([)]"), false);
}

TEST(ValidParentheses, NoPair) {
	EXPECT_EQ(validParentheses.isValid("("), false);
}

TEST(ValidParentheses, NoPairReverse) {
	EXPECT_EQ(validParentheses.isValid(")"), false);
}

