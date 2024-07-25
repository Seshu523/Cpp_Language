#include <iostream>

int main()
{
	unsigned short int a{};

	std::cout << "Enter your age: ";
	std::cin >> a;

	if (a < 18)
		std::cout << "You're Minor\n";
	else
		std::cout << "You're Major\n";

	return 0;
}

