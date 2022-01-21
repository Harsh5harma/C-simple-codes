#include <iostream>

int main()
{
	std::cout << "Enter number of terms: ";
	int n{};
	std::cin >> n;
	int sum{};
	for (int i{ 0 }; i <= n; ++i)
		sum += i;
	std::cout << "Sum is: " << sum;
	return 0;
}