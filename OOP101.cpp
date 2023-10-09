#include <iostream>

class Human
{
private:
    std::string name;
    std::string occupation;
    int age;
    std::string status;

    void chew()
    {
        std::cout << "Chewing...." << '\n';
    }

    void snore()
    {
        std::cout << "Snoring...." << '\n';
    }

    Human(std::string aName, std::string aOccupation, int aAge, std::string aStatus)
    {
        Human::name = aName;
        Human::occupation = aOccupation;
        Human::age = aAge;
        Human::status = aStatus;
    }

public:
    Human(std::string aName, std::string aOccupation, int aAge) : Human(aName, aOccupation, aAge, "NEW"){};
    Human(std::string aStatus) : Human("DEF1", "DEF2", 99, aStatus){};

    void showDetails()
    {
        std::cout << Human::name << '\n';
        std::cout << Human::occupation << '\n';
        std::cout << Human::age << '\n';
        std::cout << Human::status << '\n';
    }

    void eat()
    {
        std::cout << "Eating\n";
        Human::chew();
    }

    void drink()
    {
        std::cout << "Drinking\n";
        Human::snore();
    }

    int getAge()
    {
        return age;
    }
};

int main()
{

    Human human2("Old Lad", "Musician", 47);
    human2.showDetails();

    Human test("TEST");
    test.showDetails();

    return 0;
}
