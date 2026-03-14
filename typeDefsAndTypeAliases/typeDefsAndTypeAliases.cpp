#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string; // Better to use
using number_t = int; // Better to use

int main()
{

    // typedefs = reserved ketword used to create an additional name (alias) for another data type. - Think of nickname
    //  New identifier for an existing type
    //  This helps with readability and reduces typos
    // Use when there is a clear benefit only for either typedef/using
    // Replaced with the 'using' keyword (works better w/templates)

    // pairlist_t pairlist;

    text_t firstName = "Aviad";

    number_t age = 22;

    std::cout << firstName << " is " << age << " years old.";

        return 0;
}