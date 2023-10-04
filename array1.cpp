#include <iostream>

int main()
{

    std::string model[] = {"Porsche", "Mercedes", "Ford"};
    std::string windows[3] = {};

    windows[0] = "Manual";
    windows[1] = "Electric";
    windows[2] = "Manual";

    model[2] = "Buick";

    for (int i = 0; i < sizeof(model) / sizeof(std::string); i++)
    {
        std::cout << model[i] << " " << windows[i] << '\n';
    }

    double prices[] = {1.12, 3.22, 9.12, 18.90, 178.23};

    for (int i = 0; i < sizeof(prices) / sizeof(double); i++)
    {
        std::cout << prices[i] << '\n';
    }

    // sizeOf(thing)
    double GPA = 2.5;
    std::string name = "Paul Thomas";
    char grade = 'a';
    bool isIt = false;
    char grades[] = {'a', 'B', 'c', 'D', 'e', 'F'};
    std::string students[] = {"Paul", "Rory", "Caitlin"};

    std::cout << sizeof(GPA) << " Bytes\n";
    std::cout << sizeof(name) << " Bytes\n";
    std::cout << sizeof(grade) << " Bytes\n";
    std::cout << sizeof(isIt) << " Bytes\n";
    std::cout << sizeof(grades) << " Bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " elements\n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";
    

    return 0;
}
