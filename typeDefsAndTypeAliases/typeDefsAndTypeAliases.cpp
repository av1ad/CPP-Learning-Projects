#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;

int main()
{

    // typedefs = reserved ketword used to create an additional name (alias) for another data type. - Think of nickname
    //  New identifier for an existing type
    //  This helps with readability and reduces typos


    // pairlist_t pairlist;

    text_t firstName = "Aviad";

    number_t age = 22;

    std::cout << firstName << " is " << age << " years old.";

    

    return 0;
}