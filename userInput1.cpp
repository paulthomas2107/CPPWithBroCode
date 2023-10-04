#include <iostream>

int main()
{

    std::string name;
    int age;

    std::cout << "What's your age ? ";
    std::cin >> age;

    std::cout << "What's your name ? ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << "Paul is the best !" <<  "\n";

    std::cout << "Hello " << name << " age " << age << "\n";

    return 0;
}