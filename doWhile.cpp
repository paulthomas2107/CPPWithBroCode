#include <iostream>
#include <string>

int main()
{

    std::string name;

    // While
    while (name.empty())
    {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
    }

    std::cout << name << "\n";

    // do..while

    do
    {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);

    } while (name.empty());

    std::cout << name << "...again...\n";

    return 0;
}