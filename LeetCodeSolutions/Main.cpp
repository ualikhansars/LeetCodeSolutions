#include <iostream>
#include "ReverseInteger_7.cpp"

int main()
{
	ReverseInteger reverseInteger = ReverseInteger();
	int reversedInteger = reverseInteger.reverse(-321);
	std::cout << "reverse " << reversedInteger << std::endl;
	std::cin.get();
	return 0;
}