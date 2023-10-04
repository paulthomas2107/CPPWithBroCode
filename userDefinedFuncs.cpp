#include <iostream>

void happyBD(std::string, int age);
double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);

int main()
{
    happyBD("Paul", 24);

    double area = square(9);
    std::cout << area << '\n';

    double volume = cube(9);
    std::cout << volume << '\n';

    std::string first = "Paul";
    std::string last = "Thomas";
    std::string fullName = concatStrings(first, last);
    std::cout << fullName << '\n';

    return 0;
}

void happyBD(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << "! your age is " << age << "\n";
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}