#include <iostream>

int main()
{
	std::cout << "Enter a number: ";
	int number{};
	std::cin >> number;

	for (int i{ 1 }; i < number; ++i)
	{
		if (number % i == 0)
			std::cout << i << " is a factor of " << number<<'\n';
		else
			continue;
	}
	return 0;
}