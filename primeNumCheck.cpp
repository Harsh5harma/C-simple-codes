#include <iostream>
#include <cmath>
int main()
{
	int number{};
	std::cout << "Enter the number: ";
	std::cin >> number;

	for (int i{ 2 }; i <= sqrt(number); ++i)
	{
		if (number % i == 0)
		{
			std::cout << "Number is not prime.";
			return 0;
			break;
		}
		else
			continue;
		
	}
	std::cout << "Number is prime.";
	return 0;
}