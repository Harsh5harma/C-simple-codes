#include <iostream>

int main()
{
	std::cout << "How large do you want your array to be: ";
	int N{},sum{0};
	std::cin >> N;

	int* array{ new int[N] };

	for (auto i{ array }; i != (array + N); ++i)
	{
		std::cin >> *i;
		sum += *i;
	}
	float average = sum / N;
	for (int i{ 0 }; i < N; ++i)
	{
		std::cout << array[i]<<' ';
	}
	std::cout << '\n' << "The average of the array is: " << average;
	return 0;
}