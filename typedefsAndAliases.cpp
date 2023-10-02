#include <iostream>
#include <vector>
#include <string>

// typedef std::vector<std::pair<std::string, int>> pairList_t;
//  alias for string
typedef std::string text_t;
typedef int number_t;

int main()
{   

    // a string
    text_t name = "Paul";
    std::cout << name << '\n';

    number_t age = 217;
    std::cout << age << '\n';

    return 0;
}   