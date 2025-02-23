#include <iostream>

void volume_of_the_parallelepiped()
{
	int a = 0, b = 0, c = 0;
	std::cout << "Enter size of first side: ";
	std::cin >> a;
	std::cout << "Enter size of second side: ";
	std::cin >> b;
	std::cout << "Enter size of third side: ";
        std::cin >> c;

	std::cout << "The volume is " << a * b* c << std::endl;
}

void area_of_the_parallelepiped()
{
	int a = 0, b = 0, c = 0;
        std::cout << "Enter size of first side: ";
        std::cin >> a;
        std::cout << "Enter size of second side: ";
        std::cin >> b;
        std::cout << "Enter size of third side: ";
        std::cin >> c;

        std::cout << "The area is " << 2 * (a * b + b * c + c * a) << std::endl;

}

int main()
{
	return 0;
}
