#include <iostream>

int getFactorial(int n)
{

	if (n == 1)
		return 1; //base Condition
	else
		return n * getFactorial(n - 1);
}

int main()
{
	std::cout << "Enter number of terms: ";
	int n{};
	std::cin >> n;

	std::cout<<getFactorial(n);
	return 0;
}