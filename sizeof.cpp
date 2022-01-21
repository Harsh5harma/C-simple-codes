#include <iostream>

int main()
{
	char c{};
	double d{};
	float f{};
	int i{};

	std::cout << "The size of int is: " << sizeof(i)<<'\n';
	std::cout << "The size of char is: " << sizeof(c) << '\n';
	std::cout << "The size of double is: " << sizeof(d) << '\n';
	std::cout << "The size of float is: " << sizeof(f);
	return 0;
	
}