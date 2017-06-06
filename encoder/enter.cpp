//#include "enter.h"
#include <string>
#include <iostream>

int enter(std::string *ptrmessage1)
{
    std::cout << "Enter message" << std::endl;
    std::getline(std::cin, *ptrmessage1);
    std::cout << "You entered - " << *ptrmessage1 << std::endl;
    return 0;
}
