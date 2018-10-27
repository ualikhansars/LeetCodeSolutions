#include "pch.h"
#include "LongestSubstringWithoutRepeatingCharacters.cpp"

LongestSubstringWithoutRepeatingCharacters longestSubstring = LongestSubstringWithoutRepeatingCharacters();
TEST(LongestSubstringWithoutRepeatingCharactersTest, CheckEmptyString) {
	int length = longestSubstring.lengthOfLongestSubstring("");
	EXPECT_EQ(length, 0);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, Space) {
	int length = longestSubstring.lengthOfLongestSubstring(" ");
	EXPECT_EQ(length, 1);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, abcabcbb) {
	int length = longestSubstring.lengthOfLongestSubstring("abcabcbb");
	EXPECT_EQ(length, 3);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, bbbbb) {
	int length = longestSubstring.lengthOfLongestSubstring("bbbbb");
	EXPECT_EQ(length, 1);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, pwwkew) {
	int length = longestSubstring.lengthOfLongestSubstring("pwwkew");
	EXPECT_EQ(length, 3);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, dvdf) {
	int length = longestSubstring.lengthOfLongestSubstring("dvdf");
	EXPECT_EQ(length, 3);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, abca) {
	int length = longestSubstring.lengthOfLongestSubstring("abca");
	EXPECT_EQ(length, 3);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, lstlrv) {
	int length = longestSubstring.lengthOfLongestSubstring("lstlrv");
	EXPECT_EQ(length, 5);
}

