#include <iostream>

int main()
{
    // & address-of operator
    // * dereference operator

    std::string name = "Paul";
    std::string *pName = &name;

    int age = 21;
    int *pAge = &age;

    double price = 1.24;
    double *pPrice = &price;

    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << '\n';
    std::cout << *pName << '\n';

    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';

    std::cout << pPrice << '\n';
    std::cout << *pPrice << '\n';

    std::cout << freePizzas << '\n';
    std::cout << *freePizzas << '\n';
    std::cout << &freePizzas << '\n';

    return 0;
}