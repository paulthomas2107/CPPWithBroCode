#include <iostream>
#include <sstream>
#include <iomanip>

int main()
{
    // & (Address-Of Operator)

    std::string name = "Paul";
    int age = 21;
    bool student = false;

    std::cout << "name: " << &name << '\n';
    std::cout << "age: " << &age << '\n';
    std::cout << "student: " << &student << '\n';


    return 0;
}