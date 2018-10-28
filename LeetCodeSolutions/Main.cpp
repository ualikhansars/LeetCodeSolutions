#include <iostream>
#include "PalindromeNumber_9.cpp"

int main()
{
	int number = 191;
	PalindromeNumber p = PalindromeNumber();
	bool isPalindrome = p.isPalindrome(number);
	std::cout << "isPalindrome " << isPalindrome << std::endl;
	std::cin.get();
	return 0;
}