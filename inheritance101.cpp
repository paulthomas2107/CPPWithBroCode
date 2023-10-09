#include <iostream>

class Shape
{
public:
    double area;
    double volume;
};

class Cube : public Shape
{
public:
    double side;
    Cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    };
};

class Sphere : public Shape
{
public:
    double radius;
    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    };
};

class Animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "Yum...\n";
    }
};

class Dog : public Animal
{
private:
    void ringBell()
    {
        std::cout << "Ding...\n";
    }

public:
    void eat()
    {
        std::cout << "Yum...a bone\n";
    }
    void bark()
    {
        std::cout << "Woof...\n";
        ringBell();
    }
};

class Cat : public Animal
{
public:
    void eat()
    {
        std::cout << "Yum...a fish\n";
    }
    void meow()
    {
        std::cout << "Meow...\n";
    }
};

int main()
{

    Dog dog;
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    Cat cat;
    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    Cube cube(10);
    std::cout << "Area " << cube.area << '\n';
    std::cout << "Volume " << cube.volume << '\n';

    Sphere sphere(5);
    std::cout << "Area " << sphere.area << '\n';
    std::cout << "Volume " << sphere.volume << '\n';

    return 0;
}
