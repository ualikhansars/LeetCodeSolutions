#include <string>

class LongestSubstringWithoutRepeatingCharacters
{
public:
	int lengthOfLongestSubstring(const std::string& str) {
		std::string longest = "";
		std::string current = "";

		for (int i = 0; i < str.length(); ++i) {
			current += str[i];
			for (int j = i + 1; j < str.length(); ++j) {
				if (current.find(str[j]) == std::string::npos) {
					current += str[j];
				}
				else {
					break;
				}
			}
			if (current.length() > longest.length()) {
				longest = current;
			}
			current = "";
		}
		
		return longest.length();
	}
};