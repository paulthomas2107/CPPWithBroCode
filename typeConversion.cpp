#include <iostream>

int main()
{

    double x = (int)3.14; // becomes 3
    char y = 100;         // d

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << (char) 100 << '\n'; // d

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;
    std::cout << score << '%' << '\n'; // d

    return 0;
}