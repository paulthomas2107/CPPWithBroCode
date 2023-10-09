#include <iostream>

struct student
{

    std::string name;
    double GPA;
    bool enrolled;
    int usedCount;

    void showDetails()
    {
        std::cout << "Name:.... " << name << '\n';
        std::cout << "GPA:......" << GPA << '\n';
        std::cout << "Enrolled.." << std::boolalpha << enrolled << '\n';
        std::cout << "Useed....." << usedCount << '\n';
    }
};

void showStudent(student &student);

int main()
{
    student student1 = {"Rory Thomas", 4.8, true, 0};
    student student2 = {"Caitlin Thomas", 5.2, true, 0};

    student1.showDetails();
    showStudent(student2);
    showStudent(student2);
    showStudent(student2);

    return 0;
}

void showStudent(student &student)
{
    student.usedCount = student.usedCount + 1;
    student.showDetails();
}
