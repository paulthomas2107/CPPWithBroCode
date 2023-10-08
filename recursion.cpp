#include <iostream>

void walk(int steps);
void walkRecursive(int steps);
int factorialNorm(int num);
int factorialRecursive(int num);

int main()
{
    // walkRecursive(10);
    // std::cout << factorialNorm(10) << '\n';
    std::cout << factorialRecursive(10) << '\n';

    return 0;
}

void walk(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        std::cout << "Taking a step\n";
    }
}

void walkRecursive(int steps)
{
    if (steps > 0)
    {
        std::cout << "Taking a step: " << steps << '\n';
        walkRecursive(steps - 1);
    }
}

int factorialNorm(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int factorialRecursive(int num)
{
    if (num > 1)
    {
        return num * factorialRecursive(num - 1);
    }
    else
    {
        return 1;
    }
}