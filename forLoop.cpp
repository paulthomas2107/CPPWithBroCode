#include <iostream>
#include <string>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Count 1 : " << i << '\n';
        for (int i = 10; i < 20; i++)
        {
            std::cout << "Count 2 : " << i << '\n';
            if (i == 13)
            {
                continue;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            continue; // skips
        }
        std::cout << "Count : " << i << '\n';
    }

    for (int i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            break; // stops
        }
        std::cout << "Count : " << i << '\n';
    }

    return 0;
}