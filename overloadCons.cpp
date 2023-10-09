#include <iostream>

class Pizza
{
public:
    std::string topping1;
    std::string topping2;

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    };
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    };
    Pizza()
    {
        this->topping1 = "Cheese";
    }
};

int main()
{
    Pizza pizza1("Pepperoni");
    std::cout << pizza1.topping1 << '\n';

    Pizza pizza2("Mushroom", "Peppers");
    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    Pizza plain;
    std::cout << plain.topping1 << '\n';

    return 0;
}
