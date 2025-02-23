#include <iostream>

int main()
{
	const float pi = 3.14;

	int radius = 0;
	std::cout << "Enter a radius of the circle: ";
	std::cin >> radius;

	std::cout << "Area of the circle is " << pi * radius * radius << std::endl;
	std::cout << "The circle length is " << 2 * pi * radius << std::endl;

	return 0;
}
