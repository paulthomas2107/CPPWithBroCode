#include <iostream>

void sort(int array[], int size, bool sortMe);

int main()
{

    int temperatures[] = {20, 18, 16, 14, 12, 10, 8, 7, 6, 5, 4, 3, 2, 1};

    sort(temperatures, sizeof(temperatures) / sizeof(temperatures[0]), false);
    sort(temperatures, sizeof(temperatures) / sizeof(temperatures[0]), true);

    return 0;
}

void sort(int array[], int size, bool sortMe)
{

    if (sortMe)
    {
        int temp;
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}
