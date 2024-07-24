#include <iostream>

int main()
{
	int a;

	std::cout << "Enter a value\n";
	std::cin >> a;

	if (a % 2)
		std::cout << "Odd Number\n";
	else
		std::cout << "Even Number\n";

	return 0;
}

