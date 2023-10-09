#include <iostream>

enum WEEKDAY
{
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6

};

enum FLAVOURS
{
    VANILLA,
    CHEESECAKE,
    STRAWBERRY,
};

int main()
{

    WEEKDAY today = THURSDAY;

    std::cout << WEEKDAY::THURSDAY << '\n';
    std::cout << FLAVOURS::STRAWBERRY << '\n';

    return 0;
}
