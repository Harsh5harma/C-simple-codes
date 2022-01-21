#include <iostream>
#include <cmath>
int convert(int binary)
{
	int count{ 0 };
	int rem{}, sum{ 0 };

	while (binary > 0)
	{
		rem = binary % 10;
		sum += pow(2, count) * rem;
		++count;
		binary /= 10;
	}
	return sum;
}
int main()
{
	std::cout << "Enter the number you want to convert to decimal: ";
	int binary{};
	std::cin >> binary;
	int decimal{ convert(binary) };
	std::cout << "Number in decimal is: " << decimal;
	return 0;

}