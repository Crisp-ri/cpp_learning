#include <iostream>
#include <ctime>
#include <cstdlib>

int rand_range(int a, int b)
{
	return rand() % (b - a) + a;
}

int rand_range()
{
	return rand();
}

int search(int* arr, int lenght, int value)
{
	for(int i = 0; i < lenght; i++)
	{
		if(value == arr[i])
			return i;
	}

	return -1;
}

int binnary_search(int* arr, int lenght, int value)
{
	int right = lenght, left = 0;

	while(right > left)
	{
		std::cout << "Left: " << left << " Right: " << right << std::endl;
		int middle = (right + left) / 2;

		if(arr[middle] > value)
		{
			right = middle - 1;
		}
		else if(arr[middle] < value)
		{
			left = middle + 1;
		}
		else if(arr[middle] == value)
		{
			return middle;
		}
	}

	return -1;
}

void bubble_sort(int* arr, int lenght)
{
	for(int j = 0; j < lenght; j++)
        {
                bool sorted = true;
                for(int i = 0; i < lenght - j - 1; i++)
                {
                        if(arr[i] > arr[i + 1])
                        {
                                int a = 0;
                                a = arr[i];
                                arr[i] = arr[i + 1];
                                arr[i + 1] = a;
                                sorted = false;
                        }
                }

                if(sorted)
                        break;
        }
}



int main()
{
	srand((int)time(0));

	int n = 0;
	std::cin >> n;

	int* arr = new int[n];

	for(int i = 0; i < n; i++)
		arr[i] = rand_range(0, 101);

	for(int i = 0; i < n; i++)
		std::cout << arr[i] << "\t";

	std::cout << std::endl;
	

	bubble_sort(arr, n);

	for(int i = 0; i < n; i++)
                std::cout << arr[i] << "\t";

	std::cout << std::endl;

	int value = 0;
	std::cin >> value;
	
	std::cout << binnary_search(arr, n, value) << std::endl;

	std::cout << rand() << std::endl;
	delete[] arr;
	return 0;
}


/*
 * 1, 5, 2, 7, 2
 * 
 * 1, 2, 5, 2, 7
 *
 *
 * */
