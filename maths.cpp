#include <iostream>
#include <cmath>

int main()
{

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << '\n';

    z = std::min(x, y);
    std::cout << z << '\n';

    z = pow(2, 3);
    std::cout << z << '\n';

    z = sqrt(9);
    std::cout << z << '\n';

    z = abs(-10);
    std::cout << z << '\n';

    x = 3.14;
    z = round(x);
    std::cout << z << '\n';

    return 0;
}