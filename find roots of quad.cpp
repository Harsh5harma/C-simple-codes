#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Enter coeffs: ";
	float a{}, b{}, c{};
	std::cin >> a >> b >> c;
	double D = (b * b) - 4 * a * c;

	if (D >= 0)
		std::cout << "Real roots of the equation are: " << ((-b) + sqrt(D)) / (2 * a) << " and " << ((-b) - sqrt(D)) / (2 * a);
	else
		std::cout << "Complex roots of the equation are: " << -b / (2 * a) << " + " << sqrt(-D) / (2 * a) << 'i' << " and "
		<< -b / (2 * a) << " - " << sqrt(-D) / (2 * a) << 'i';
	return 0;
}