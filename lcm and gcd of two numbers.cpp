#include <iostream>

int main()
{
	std::cout << "Enter two numbers: ";
	int a{}, b{}, gcd{}, lcm{};
	std::cin >> a >> b;
	std::cout << "GCD is: ";
	
	int large = (a > b) ? a : b;

	for (int i{ 1 }; i <= large; ++i)
	{
		if ((a % i == 0) && (b % i == 0))
			gcd = i;
	}
	std::cout << gcd << '\n';
	lcm = (a * b) / gcd;
	std::cout << "Lcm of " << a << " and " << b << " is: " << lcm;
	return 0;
}