#include <iostream>

int main()
{
	int a{}, b{};
	std::cin >> a >> b;
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a is: " << a;
	std::cout << "\nb is: " << b;
	return 0;
}