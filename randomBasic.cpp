#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class RB
{
public:
    void log(string s);
};

void RB::log(string s)
{
    std::cout << s << "\n";
}

int main()
{
    RB rb;
    srand(time(0));

    rb.log(to_string(rand() % 5 + 1));
    return 0;
}   
