#include <iostream>

int main()
{
	char x{};
	std::cin >> x;
	std::cout << "The ASCII value of char " << x << " is: " << static_cast<int>(x);
	return 0;
}