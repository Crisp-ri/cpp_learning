#include <iostream>

void pairs_of_numbers(int min_num);
bool is_prime(int n);

int main()
{
	pairs_of_numbers(100);

	return 0;
}

void pairs_of_numbers(int n)
{
	std::cout << "Pairs of prime number: " << std::endl;
	

	for(int i = n; i < 2 * n - 2; i++)
	{
		if(is_prime(i) && is_prime(i + 2))
		{
			std::cout << i << ", " << i + 2 << std::endl;
		}
	}
}

bool is_prime(int n)
{
	if(n < 2)
		return false;
	for(int i = 2; i * i < n; i++)
		if(n % i == 0)
			return false;
	return true;
}

