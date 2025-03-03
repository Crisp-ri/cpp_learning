#include <iostream>


void sieve_of_eratosthenes(int max_num)
{
	for(int i = 2;  i < max_num; i++)
	{
		bool is_prime = true;
		for(int j = 2; j * j <= i; ++j)
		{
			if(i % j == 0)
			{
				is_prime = false;
			}
		}
		if(is_prime)
			std::cout << i << "\t";
	}

	std::cout << std::endl;
}


int main()
{
	sieve_of_eratosthenes(1000);
	return 0;
};
