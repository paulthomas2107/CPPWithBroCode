#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza();
    bakePizza("Pepperoni");
    bakePizza("Pepperoni", "Extra Cheese");

    return 0;
}

void bakePizza()
{
    std::cout << "Here is the pizza\n";
}

void bakePizza(std::string topping1)
{
    std::cout << "Here is the pizza with " << topping1 << "\n";
}

void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is the pizza with " << topping1 << " and " << topping2 << "\n";
}