#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Enter a number and its digits: ";
	int n{}, sum{0}, dig{};
	std::cin >> n>> dig;
	int i{ 0 };
	int n_copy{ n };
	while (n > 0)
	{
		i = n % 10;
		sum += pow(i, dig);
		n /= 10;
	}
	std::cout <<"Sum of digits is: "<< sum << '\n';
	if (sum == n_copy)
		std::cout << "The number is an Armstrong number.";
	else
		std::cout << "The number isn't an Armstrong number.";
	return 0;
}