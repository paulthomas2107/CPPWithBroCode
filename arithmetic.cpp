#include <iostream>

int main()
{

    int students = 20;

    students++;
    students += 2;
    students--;
    students -= 2;

    students *= 2;
    students /= 2;


    std::cout << students << '\n';

    int remainder = students % 3;

    std::cout << remainder << '\n';

    return 0;
}