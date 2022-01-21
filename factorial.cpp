#include <iostream>

int main()
{
	std::cout << "Enter number of terms:";
	int n{};
	std::cin >> n;
	int fact{ 1 };
	int t{ 1 };
	while (t <= n)
	{
		fact *= t;
		++t;
	}
	std::cout << "The factorial is: " << fact;
	return 0;

}