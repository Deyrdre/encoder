#include <string>
#include <iostream>

int string_to_ints (std::string &message_code, int *mass)
{
    int i = 0;
    std::string pointer (" ");
    size_t pos = 0;
    //std::cout << "string message code is " << message_code << std::endl;
    while ((pos = message_code.find(pointer)) != std::string::npos)
    {
        std::string token;
        token = message_code.substr(0, pos);
        std::cout << "Token - " << token << std::endl;
        message_code.erase(0, pos + pointer.length());
        *(mass+i) = std::stoi(token);
        ++i;
    }
    std::cout << "Massive with message/key is " << std::endl;
    for (int j = 0; j < i; ++j)
    {
        std::cout << *(mass+j) << std::endl;
    }
    return 0;
}
