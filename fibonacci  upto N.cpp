#include <iostream>

int main()
{
	std::cout << "Enter number of terms: ";
	int n{};
	std::cin >> n;
	int b{ 0 }, c{ 1 };
	std::cout << 0 << ' ';
	for (int i{ 0 }; i < n; ++i)
	{
		b = b + c;
		std::cout << b << ' ';
		c = b + c;
		std::cout << c << ' ';
	}
	return 0;
}