#include <iostream>
#include <string>

int main()
{

    bool hungry = false;
    int temp = 34;

    if (!hungry && temp > 33)
    { // (AND) !NOT or vice versa
        std::cout << "Hungry and temp above norm\n";
    }
    else
    {
        std::cout << "Full\n";
    }

    if (!hungry || temp > 99) // (OR) checks 1 or the other
    {
        std::cout << "Hungry and temp above norm\n";
    }
    else
    {
        std::cout << "Full\n";
    }

    return 0;
}