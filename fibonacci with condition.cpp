#include <iostream>

int main()
{
	std::cout << "Enter number of terms and Limit: ";
	int n{}, end{};
	std::cin >> n >> end;
	int b{ 0 }, c{ 1 },i{0};
	std::cout << 0 << ' ';
	while (i < n)
	{
		b = b + c;
		if (b >= end)
			break;
		std::cout << b << ' ';
		c = b + c;
		if (c >= end)
			break;
		std::cout << c << ' ';
		++i;
	}
		
	
	return 0;
}