#include <iostream>

int main()
{
    const int FOOD_SIZE = 30;

    std::string foods[FOOD_SIZE];

    fill(foods, foods + FOOD_SIZE / 3, "Pizza");
    fill(foods + FOOD_SIZE / 3, foods + (FOOD_SIZE / 3) * 2, "Burgers");
    fill(foods + (FOOD_SIZE / 3) * 2, foods + FOOD_SIZE, "Hot Dogs");

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}
