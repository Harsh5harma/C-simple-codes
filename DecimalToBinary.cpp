#include <iostream>
#include <cmath>
int convert(int number)
{
	int count{ 0 };
	int rem{}, sum{0};

	while (number > 0)
	{
		rem = number % 2;
		sum += pow(10, count) * rem;
		++count;
		number/=2;
	}
	return sum;
}
int main()
{
	std::cout << "Enter the number you want to convert to binary: ";
	int number{};
	std::cin >> number;
	int binary{ convert(number) };
	std::cout << "Number in binary is: " << binary;
	return 0;

}