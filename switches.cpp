#include <iostream>
#include <string>

int main()
{

    typedef std::string str;

    int month;
    std::cout << "Enter month (1/12): ";
    std::cin >> month;

    str message;

    switch (month)
    {
    case 1:
        message = "January\n";
        break;
    case 12:
        message = "December\n";
        break;

    default:
        message = "<Nothing>";
        break;
    }

    std::cout << message << "\n";

    return 0;
}