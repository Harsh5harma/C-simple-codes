#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Enter a number you want to reverse and the number of digits it has: ";
	int num{}, rnum{ 0 }, x{};
	std::cin >> num>>x;
	
	while (num > 0)
	{
		rnum += pow(10,x-1)*(num % 10);
		num /= 10;
		--x;
	}
	std::cout << "The reversed number is: " << rnum;
	return 0;
}