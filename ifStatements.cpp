#include <iostream>

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome !\n";
    }
    else if (age < 0)
    {
        std::cout << "Not born !\n";
    }
    else 
    {
        std::cout << "Not old enough !\n";
    }

    return 0;
}