#include <iostream>


void countdown(int from)
{
    while (from > 0) 
    {
        std::cout << from << std::endl;
        --from;
    }
}
