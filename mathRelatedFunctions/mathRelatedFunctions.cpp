#include <iostream>
#include <cmath>

int main()
{

    int age = 22;

    if (age > 24)
    {
        std::cout << pow(age, 2);
    } else {
        std::cout << ":(";
    }
    return 0;
}