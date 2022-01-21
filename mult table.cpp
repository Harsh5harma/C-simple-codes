#include <iostream>

int main()
{
	std::cout << "Enter the number: ";
	int n{};
	std::cin >> n;
	
	for (int i{ 1 }; i <= 10; ++i)
	{
		std::cout << n << " x " << i << " = " << n * i<<'\n';
	}
	return 0;
}