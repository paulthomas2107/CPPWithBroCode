#include <iostream>

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Adr not set\n";
        // std::cout << *pointer << '\n';
    }
    else
    {
        std::cout << "Adr was set " << pointer << '\n';
        std::cout << *pointer << '\n';
    }

    return 0;
}