#include <iostream>

int main()
{

    // Arithmetic operators = returns the results of a speciifc
    // Arithmetic operation (+ - * /)
    // Modulus ( % )

    int students = 20;

    // // double students = 20;

    // // students++;

    // students--;

    // students += 3;

    // students*=3;

    // students /= 5;

    int remainder = students % 3;

    std::cout << remainder;

    // If output is a decimal change to a double instead of an int because int truncates the decimal portion

    return 0;
}