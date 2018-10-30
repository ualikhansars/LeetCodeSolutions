#include <iostream>
#include "ValidParentheses_20.cpp"

int main()
{
	ValidParentheses validParentheses = ValidParentheses();
	int isValid = validParentheses.isValid("[[]]{}");
	std::cout << "is valid " << isValid << std::endl;
	std::cin.get();
	return 0;
}