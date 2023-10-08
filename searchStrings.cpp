#include <iostream>

int searchArray(std::string foods[], int size, std::string element);

int main()
{

    std::string foods[] = {"Pizza", "Hamburger", "Hotdog"};

    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Food ? " << '\n';
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if (index != -1)
    {
        std::cout << foods[index] << " found at index " << index << '\n';
    }
    else
    {
        std::cout << "Not found\n";
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
