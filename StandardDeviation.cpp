#include <iostream>
#include <cmath>
double stdDeviation(int average, int* array, int N)
{
	double sum2{};
	for (auto i{array}; i != (array+N); ++i)
	{
		sum2 +=   (*i - average)*(*i-average);
	}
	double average2 = sum2 / N;
	double deviation = sqrt(average2);
	return deviation;
}


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
	std::cout << '\n' << "The standard deviation is: " << stdDeviation(average,array,N);
	return 0;
}