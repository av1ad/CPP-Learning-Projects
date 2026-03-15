#include <iostream>
#include <string>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{

    using std::string;

    string firstName;
    int age;

    std::cout << "Enter your first name: " << "\n";
    std::cin >> firstName;

    std::cout << "Enter your age: " << "\n";
    std::cin >> age;

    std::cout << "User's first name is " << firstName << " and is " << age << " years old :)";

    return 0;
}