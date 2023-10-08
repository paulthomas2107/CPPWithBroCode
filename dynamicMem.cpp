#include <iostream>

int main()
{

    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;

    std::cout << "Address " << pNum << '\n';
    std::cout << "Value " << *pNum << '\n';

    // non array delete
    delete pNum;

    int size;
    std::cout << "How many grades: ";
    std::cin >> size;
    char *pGrades = NULL;
    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade # " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }
    std::cout << '\n';

    // Array delete
    delete[] pGrades;

    return 0;
}