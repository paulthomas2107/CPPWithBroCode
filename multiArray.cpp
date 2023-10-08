#include <iostream>

int main()
{
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                             {"Corvette", "Equinox", "Silveradoo"},
                             {"Challenger", "Durango", "Ram 1500"}};

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        for (int j = 0; j < sizeof(cars[0]) / sizeof(cars[0][0]); j++)
        {
            std::cout << cars[i][j] << " ";
        }       

        std::cout << '\n';
    }
    
    return 0;
}