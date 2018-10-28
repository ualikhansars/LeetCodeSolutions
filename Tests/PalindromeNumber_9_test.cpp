#include "pch.h"
#include "PalindromeNumber_9.cpp"

PalindromeNumber palindromeNumber = PalindromeNumber();
TEST(PalindromeNumber, 888) {
	int number = 888;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), true);
}

TEST(PalindromeNumber, 156) {
	int number = 156;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), false);
}

TEST(PalindromeNumber, 1) {
	int number = 1;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), true);
}

TEST(PalindromeNumber, 0) {
	int number = 0;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), true);
}

TEST(PalindromeNumber, NegativeOne) {
	int number = -1;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), false);
}

TEST(PalindromeNumber, nagativeTen) {
	int number = -10;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), false);
}

TEST(PalindromeNumber, nagative555) {
	int number = -555;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), false);
}

TEST(PalindromeNumber, 19591) {
	int number = 19591;
	EXPECT_EQ(palindromeNumber.isPalindrome(number), true);
}