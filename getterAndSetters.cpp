#include <iostream>

class Stove
{
private:
    int temp = 0;

public:
    Stove(int temp)
    {
        setTemp(temp);
    }

    void setTemp(int temp)
    {
        if (temp > 1000)
        {
            std::cout << "Too High\n";
            this->temp = -1;
            return;
        }
        else
        {
            this->temp = temp;
        }
    };
    int getTemp()
    {
        return this->temp;
    };
};

int main()
{
    Stove s(100);
    std::cout << s.getTemp() << '\n';

    return 0;
}
