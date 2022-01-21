#include <iostream>

int main()
{
	int year{};
	std::cout << "Enter a year: ";
	std::cin >> year;
	
	if (year % 4 == 0)
		std::cout << "It is a leap year.";
	else
		std::cout << "It is not a leap year.";
	return 0;
}