#include <iostream>
#include <ctime>
#include <string>
#include <chrono>
#include <ctime>

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
    int rndNum = rand() % 5 + 1;
    auto start = std::chrono::system_clock::now();
    std::time_t start_time = std::chrono::system_clock::to_time_t(start);
    std::cout << start_time << "\n";
    return 0;
}   
