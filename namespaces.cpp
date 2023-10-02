#include <iostream>

namespace first{
    int x = 1;
}

namespace second
{
    int x = 3;
    char initial = 'p';
}

int main()
{

    int x = 2;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << second::initial << '\n';

    return 0;
}