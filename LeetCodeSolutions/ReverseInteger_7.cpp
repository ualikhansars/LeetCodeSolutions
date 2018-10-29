#include <string>
#include <math.h>
#include <cmath>
#include <limits>

class ReverseInteger {
public:
	int reverse(int number) {
		int imin = std::numeric_limits<int>::min(); 
		int imax = std::numeric_limits<int>::max();
		if (number <= imin || number >= imax) {
			return 0;
		}
		std::string reverseStr = "";
		int intValue = std::abs(number);
		int remainder = 0;
		while (intValue != 0) {
			remainder = intValue % 10;
			reverseStr += std::to_string(remainder);
			intValue = floor(intValue / 10);
		}
		int reverseNum;
		try {
			reverseNum = std::stoi(reverseStr);
		}
		catch (...) {
			return 0;
		}
		
		if (number < 0) {
			reverseNum = -reverseNum;
		}
		return reverseNum;
	}
};