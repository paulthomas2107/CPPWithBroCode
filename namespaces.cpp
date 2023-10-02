#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 3;
    char initial = 'p';
}

int main()
{

    using namespace first;
    std::cout << first::x << '\n';

    // on it's own - not in a namespace
    int x = 2;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << second::initial << '\n';

    // Use string and cout
    using std::cout;
    using std::string;

    string xx = "XX";
    cout << xx << '\n';
    cout << second::initial << '\n';

    return 0;
}