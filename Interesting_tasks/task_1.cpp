#include <iostream>

int square(int a)
{
	return a * a;
}

void get_pythagorean_triples(int n);

int main()
{
	get_pythagorean_triples(1000);
	return 0;
}

void get_pythagorean_triples(int n)
{
	for(int a = 1; a < n; ++a)
		for(int b = a; b < n; ++b)
			for(int c = b; c < n; c++)
				if(square(a) + square(b) == square(c))
					std::cout << a << ", " << b << ", " << c << std::endl;
}
