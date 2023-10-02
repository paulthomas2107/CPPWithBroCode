#include <iostream>

int main()
{
    int x = 5;
    int y = 6;
    int sum = x + y;
    int age = 21;
    int year = 2023;
    int days = 7;

    double price = 12.34;
    double GPA = 2.5;
    double temperature = 25.1;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << days << '\n';

    std::cout << price << '\n';
    std::cout << GPA << '\n';
    std::cout << temperature << '\n';

    char grade = 'A';
    char initial = 'B';
    char zero = '0';
    char currency = '$';

    std::cout << zero << '\n';
    std::cout << currency << '\n';

    bool isTrue = true;
    bool isFalse = false;

    std::cout << isFalse  << '\n';

    std::string name = "Paul Thomas";
    std::string pizza = "Pepperoni";

    std::cout << name << '\n';
    std::cout << pizza << '\n';

    std::cout << "Hello " << name << " welcome" << '\n';

    return 0;
}