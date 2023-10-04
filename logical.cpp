#include <iostream>
#include <string>

int main()
{

    bool hungry = false;

    if (hungry) {
        std::cout << "Hungry\n";
    }
    else
    {
        std::cout << "Full\n";
    }

    if (!hungry)
    {
        std::cout << "Full\n";
    }
    else
    {
        std::cout << "Hungry\n";
    }

    return 0;
}