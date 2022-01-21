#include <iostream>

int main()
{
	char a{};
	std::cin >> a;
	if ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u') || (a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U'))
		std::cout << "Is vowel. ";
	else
		std::cout << "Is consonant. ";
	return 0;
}