#include <iostream>

void printNum();
// Global vars
int myNum = 2;

int main()
{
    int myNum = 67;
    printNum();
    std::cout << myNum << "\n";

    return 0;
}

void printNum()
{
    int myNum = 888;
    std::cout << ::myNum << "\n"; // uses global ::
    std::cout << myNum << "\n";   // uses local
}