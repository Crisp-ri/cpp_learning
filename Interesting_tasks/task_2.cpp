#include <iostream>

void paskals_triangle(int n)
{
    for(size_t i = 0; i < n; i++)
    {
        int temp_num = 1;
        for (size_t j = 0; j < n + 1; j++)
        {
            std::cout << temp_num << ' ';
            temp_num = temp_num * (i - j) / (j + 1);
        }
        std::cout << std::endl;
    }
}


int main()
{
    int n = 1;
    std::cin >> n;
    paskals_triangle(n);
    return 0;
}