//Sum of N natural nums by recursion.

#include <iostream>

int sum(int n)
{
	int s{};
	s += n;
	if (n > 1)
	{
		s+= sum(n - 1);
		return s;
	}

	else
		return 1;
}

int main()
{
	int n{};
	std::cin >> n;
	std::cout << "Sum is: " << sum(n);
	return 0;
}