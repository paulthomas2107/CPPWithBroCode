#include <iostream>
#include <string>

int main()
{

    int rt = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int i = 1; i < 11; i++)
        {
            std::cout << " " << i << '\n';
            rt++;
        }
    }

    std::cout << " " << rt << '\n';

    return 0;
}