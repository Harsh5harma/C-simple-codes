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
	int largest = *array;
	for (int i{ 0 }; i < N; ++i)
	{
		if (array[i] > largest)
			largest = array[i];
	}
	std::cout << '\n' << "The largest element of the array is: " << largest;
	return 0;
}