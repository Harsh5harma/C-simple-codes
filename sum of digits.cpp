#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Enter a number you want to find the sum of digits of: ";
	int num{}, sum{0};
	std::cin >> num;
	
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	std::cout << "The sum of the digits is:  " << sum;
	return 0;
}