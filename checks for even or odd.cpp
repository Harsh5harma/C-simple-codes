#include <iostream>

int main()
{
	int x{};
	std::cin >> x;
	if (x % 2 == 0)
		std::cout << "Is even";
	else
		std::cout << "Is odd";
	return 0;
}