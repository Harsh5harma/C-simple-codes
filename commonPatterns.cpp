#include <iostream>

int main()
{
	//Solid Rectangular star
	for (int i{ 0 }; i < 3; ++i)
	{
		for (int j{ 0 }; j < 5; ++j)
			std::cout << '*';
		std::cout << '\n';
	}
	std::cout << '\n';

	//Hollow rectangular star
	for (int i{ 0 }; i < 3; ++i)
	{
		if (i == 1)
		{
			for (int j{ 0 }; j < 4; j++)
			{
				if ((j == 0) || (j == 3))
					std::cout << '*';
				else
					std::cout << ' ';
			}
		}
		else
		{
			for (int j{ 0 }; j < 5; ++j)
				std::cout << '*';
		}
		std::cout << '\n';
	}
	std::cout << '\n';

	//Half pyramid
	for (int i{ 0 }; i < 5; ++i)
	{
		for (int j{ 0 }; j <= i; ++j)
			std::cout << '*';
		std::cout << '\n';
	}
	std::cout << '\n';

	//Inverted half pyramid
	for (int i{ 0 }; i < 5; ++i)
	{
		for (int j{ 5 }; j > i; --j)
			std::cout << '*';
		std::cout << '\n';
	}
	std::cout << '\n';

	//full pyramid
	for (int i{ 0 }; i < 6; i++)
	{
		for (int j{ 6 }; j>i; --j)
		{
			std::cout << ' ';
		}

		for (int x{ 0 }; x <= (2 * i + 1); ++x)
		{
			if (x % 2 == 0)
				std::cout << '*';
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}
	std::cout << '\n';

	//Inverted full pyramid
	for (int i{ 0 }; i < 6; i++)
	{
		for (int j{ 0 }; j <i; ++j)
		{
			std::cout << ' ';
		}

		for (int x{ 11 -(2*i)}; x >= 0; --x)
		{
			if (x % 2 == 0)
				std::cout << '*';
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}
	std::cout << '\n';

	//hollow full pyramid star
	for (int i{ 0 }; i < 6; i++)
	{
		for (int j{ 6 }; j > i; --j)
		{
			std::cout << ' ';
		}

		if (i == 5)
		{
			for (int x{ 0 }; x <= 10; ++x)
				std::cout << '*';
		}
		else
		{
			for (int x{ 0 }; x <= ((i * 2)); ++x)
			{
				if ((x == 0) || (x == (2 * i)))
				{
					std::cout << '*';

				}
				else
					std::cout << ' ';

			}
		}
		std::cout << '\n';
	}
	std::cout << '\n';


	return 0;
}