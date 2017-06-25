#include <string>
#include <iostream>

int enter(std::string *ptrmessage)
{
    std::cout << "Enter message" << std::endl;
    std::getline(std::cin, *ptrmessage);
    return 0;
}
