#include <iostream>

int main()
{
	for (int i{ 0 }; i < 4; ++i)
	{
		for (int j{ 3 }; j >= i; --j)
		{
			std::cout << ' ';
		}

		for (int k{ 1 }; k <= i + 1; ++k)
			std::cout << k;
		
		for (int m{ i }; m > 0; --m)
			std::cout << m;

		std::cout << '\n';
	}
	return 0;
}