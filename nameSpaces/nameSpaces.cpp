#include <iostream>

namespace first
{
    int x = 5;
}

namespace second
{
    int x = 2;
}

int main()
{

    // using std::cout;
    // using std::string;
    using namespace second;


    std::cout << x;

    // std::cout << first::x;
    // Output for this would be 5

    return 0;
}