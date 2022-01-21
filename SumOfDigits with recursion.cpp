#include <iostream>

int getDigSum(int n);
int main()
{
	std::cout << "Enter the integer: ";
	int n{};
	std::cin >> n;

	std::cout << "Sum of digits is: " << getDigSum(n);

	return 0;
}

int getDigSum(int n)
{
	int sum{};
	int dig = n % 10;
	sum += dig;

	if (n / 10 != 0)
		sum += getDigSum(n / 10);
	else
		return sum;
	
}