#include <iostream>

struct student
{
    std::string name;
    double GPA;
    bool enrolled;

    void showDetails()
    {
        std::cout << "Name:.... " << name << '\n';
        std::cout << "GPA:......" << GPA << '\n';
        std::cout << "Enrolled.." << std::boolalpha << enrolled << '\n';
    }
};

int main()
{
    student student1 = {"Rory Thomas", 4.8, true};
    student student2 = {"Caitlin Thomas", 5.2, true};
    
    student1.showDetails();
    student2.showDetails();

    return 0;
}
