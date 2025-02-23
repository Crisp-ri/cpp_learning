#include <iostream> 

int main()
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

	return 0;
}
