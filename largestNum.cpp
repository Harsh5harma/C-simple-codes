#include <iostream>

int main()
{
	int a{}, b{}, c{};
	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;
	int largest = ((a > b) && (a > c)) ? a : (((b > a) && (b > c)) ? b : c);
	std::cout << "largest number is: " << largest;
	return 0;
}