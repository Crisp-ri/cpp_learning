#include <iostream>
#include <string>

void print_hello_world()
{
	std::cout << "Hello, World!\n";
}

void getting_a_name()
{
	std::cout << "Enter a name: ";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Hello, " << name << "!\n";
}

void calculating()
{
	int a = 0, b = 0;
	std::cout << "Write first number: ";
	std::cin >> a;
	std::cout << "Write second number: ";
	std::cin >> b;

	std::cout << "The sum: " << a + b << std::endl;
	std::cout << "The differnce: " << a - b << std::endl;
	std::cout << "The product: " << a * b << std::endl;
}

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

void area_of_a_parallelepiped()
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

void info_about_circle()
{
	const float pi = 3.14;

	int radius = 0;
	std::cout << "Enter a radius of the circle: ";
	std::cin >> radius;

	std::cout << "Area of the circle is " << pi * radius * radius << std::endl;
	std::cout << "The circle length is " << 2 * pi * radius << std::endl;
}

void interest_calculation()
{
	int period = 0;
	float sum = 0, rate = 0;

	std::cout << "Enter the period: ";
	std::cin >> period;
	std::cout << "Enter the sum: ";
	std::cin >> sum;
	std::cout << "Enter the rate: ";
	std::cin >> rate;

	std::cout << "Interest: " << (period * sum * rate) / 100 << std::endl;
}

int main()
{
	print_hello_world();

	getting_a_name();
	
	calculating();

	volume_of_the_parallelepiped();

	area_of_a_parallelepiped();

	info_about_circle();

	interest_calculation();

	return 0;
}
