#include <iostream>

class Student
{
public:
    std::string name;
    int age;
    double GPA;
    std::string group;

    Student(std::string name, int age, double GPA)
    {
        this->name = name;
        this->age = age;
        this->GPA = GPA;
        group = "<G1>";
    }
};

int main()
{

    Student student1("Paul", 21, 5.9);
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.GPA << '\n';

    Student student2("Pappin", 40, 1.29);
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.GPA << '\n';
    std::cout << student2.group << '\n';

    return 0;
}
