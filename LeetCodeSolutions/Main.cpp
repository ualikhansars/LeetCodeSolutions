#include <iostream>
#include "LongestSubstringWithoutRepeatingCharacters.cpp"

int main()
{
	std::string s = "abcabcbb";
	LongestSubstringWithoutRepeatingCharacters l = LongestSubstringWithoutRepeatingCharacters();
	std::cout << l.lengthOfLongestSubstring(s) << std::endl;
	std::cin.get();
	return 0;
}