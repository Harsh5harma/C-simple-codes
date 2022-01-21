#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Enter number and the number of digits it has: ";
	int num{}, dig{};
	std::cin >> num >> dig;
	int rnum{ 0 },i{dig};
	int num_copy{ num };
	while (num > 0)
	{
		rnum += pow(10,i-1) * (num % 10);
		num /= 10;
		--i;
	}
	std::cout << rnum << '\n';
	if (rnum == num_copy)
		std::cout << "The number is a palindrome. ";
	else
		std::cout << "The number is not a palindrome. ";
	return 0;
}