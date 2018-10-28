#include <string>
#include <math.h>

class PalindromeNumber {
public:
	bool isPalindrome(int x) 
	{
		std::string strNumber = std::to_string(x);
		int termination = floor(strNumber.length() / 2);
		int lastDigit = strNumber.length() - 1;
		for (int i = 0; i < termination; ++i) {
			if (strNumber[i] != strNumber[lastDigit - i]) {
				return false;
			}
		}
		return true;
	}
};