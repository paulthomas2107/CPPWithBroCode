#include <iostream>
#include <string>

int main()
{

    typedef std::string str;
    str name = "Paul Alan Thomas";
    // str name = "";
    // str name = "Paul Alan Thomas Paul Alan Thomas Paul Alan Thomas";

    str title = ", OBE";

    if (name.empty()) {
        std::cout << "Name missing...\n";
    } 
    else if (name.length() > 30)
    {
        std::cout << "Must be <= 30\n";       
    } else {
        std::cout << "Welcome, " << name << "\n";
    }


    std::cout << "Welcome, " << name << title << "\n";
    title.clear();
    std::cout << "Welcome, " << name << title << "\n";

    std::cout << name.at(0) << "\n";
    std::cout << name.at(name.length() - 1) << "\n";
    std::cout << name.find("u") << "\n";
    name.erase(1, 3);
    std::cout << name << "\n";

    return 0;
}