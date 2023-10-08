#include <iostream>

int main()
{

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Paul", "Sandy", "PPP", "aaa"};
    int grades[] = {65, 99, 33, 21, 11};
    double costs[] = {1.23, 4.56, -99.98};

    for (std::string student : students)
    {
        std::cout << student << '\n';
    }

    for (int grade : grades)
    {
        std::cout << grade << '\n';
    }

    for (double cost : costs)
    {
        std::cout << cost << '\n';
    }

    return 0;
} 
