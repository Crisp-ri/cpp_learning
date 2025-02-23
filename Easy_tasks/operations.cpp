#include <iostream>

int main()
{
	int a, b;

	std::cout << "Enter a first num: ";
	std::cin >> a;
	std::cout << std::endl;

	std::cout << "Enter a second number: ";
	std::cin >> b;
	std::cout << std::endl;

	std::cout << "Sum: " << a + b << std::endl;
	std::cout << "Difference: " << a - b << std::endl;
	std::cout << "Product: " << a * b << std::endl;

	return 0;
}
