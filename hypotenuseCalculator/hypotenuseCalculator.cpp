#include <iostream>
#include <cmath>

int main()
{

    double a;
    double b;
    double c;

    std::cout << "Enter a value for a:" << std::endl;
    std::cin >> a;

    std::cout << "Enter a value for b:" << std::endl;
    std::cin >> b;

    c = hypot(a, b);

    std::cout << "c = " << c << '\n';

    return 0;
}