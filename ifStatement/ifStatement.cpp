#include <iostream>

int main()
{

    // If statement = do something if a condition is true; otherwise then don't do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are allowed to continue."<< std::endl;
    } else if (age <= 0){
        std::cout << "You aren't born yet." << std::endl;
    }
    else {
        std::cout << "You are under the age, you may not continue" << std::endl;
    }

    return 0;
}