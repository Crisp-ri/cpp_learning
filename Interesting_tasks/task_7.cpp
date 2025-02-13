#include <iostream>

void pairs_of_numbers(int min_num);

int main()
{
	pairs_of_numbers(100);

	return 0;
}

void pairs_of_numbers(int n)
{
	std::cout << "Pairs of number: " << std::endl;

	int max_num = n * 2;

	for(int i = 0; i < n; i++)
	{
		int min_num = n;
		for(int j = 0; j < n; j++)
		{
			if(max_num - min_num == 2)
			{
				std::cout << max_num << " " << min_num << std::endl;
				min_num++;
			}	
			else if(max_num - min_num != 2)
				min_num++;
		}
		max_num--;
	}
}
