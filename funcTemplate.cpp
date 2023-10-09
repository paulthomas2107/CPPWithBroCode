#include <iostream>

template <typename T, typename U>
auto max(T x, U y) -> decltype(T(x), U(y))
{
    return (x > y) ? x : y;
}

template <typename T, typename U>
auto min(T x, U y) -> decltype(T(x), U(y))
{
    return (x < y) ? x : y;
}

int main()
{

    std::cout << max(10, 20) << '\n';
    std::cout << max(10.12, 20.34) << '\n';
    std::cout << max('a', 'z') << '\n';
    std::cout << max("333", "222") << '\n';
    std::cout << max(111.23, 2.2) << '\n';
    std::cout << min(111.23, 2.2) << '\n';

    return 0;
}
