#include <iostream>

double getTotal(double totals[], int size);

int main()
{

    double prices[] = {1.23,
                       2.34,
                       99.98,
                       111.12,
                       75,
                       1966.21};

    int size = sizeof(prices) / sizeof(prices[0]);

    double total = 0;
    for (double price : prices)
    {
        total += price;
    }

    std::cout << getTotal(prices, size) << '\n';


    return 0;
}

double getTotal(double totals[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += totals[i];
    }

    return total;
}
