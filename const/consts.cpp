#include <iostream>

int main()
{

    // When making a const in cpp - best practice is to use all uppercase and/or snake case for naming conventions

    const double PI = 3.14159;
    double radius = 7;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";


    const int BIRTH_YEAR = 2004;

    return 0;
}