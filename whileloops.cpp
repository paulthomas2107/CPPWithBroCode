#include <iostream>
#include <string>

int main()
{

    std::string name;

    while (name.empty()) {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
    }

    std::cout << name << "\n";

    return 0;
}