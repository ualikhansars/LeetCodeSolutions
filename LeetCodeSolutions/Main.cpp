#include <iostream>
#include "Temporary.h"

int main()
{
	Temporary temporary = Temporary();
	std::cout << "temporary function is " << temporary.functionReturn5() << std::endl;
	std::cout << "It works" << std::endl;
	std::cin.get();
	return 0;
}