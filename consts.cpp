#include <iostream>

int main() {

    // cannot be changed - constant !
    const double PI = 3.14159;
    double radius = 90;
    double circumference = 2 * PI * radius;

    std::cout << circumference << '\n';


    return 0;
}