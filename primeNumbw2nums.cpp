#include <iostream>
#include <cmath>
int main()
{
	int number1{}, number2{};
	std::cout << "Enter two numbers: ";
	std::cin >> number1>>number2;

	for (int j{ number1 }; j <= number2; ++j)
	{
		bool isbreak{ false };
		for (int i{ 2 }; i <= sqrt(number2); ++i)
		{
			if ((j % i == 0)&&(j!=i))
			{
				isbreak =true ;
				break;
			}
			else
				continue;

		}
		if ((!isbreak)&&(j!=1))
		{
			std::cout << j << ' ';
		}
	}

	return 0;
}