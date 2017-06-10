#include <string>
#include <iostream>

int symbol_code(int message_length, std::string *message_code, std::string &message)
{
    for (int i = 1; i <= message_length; ++i)
   //получать код каждого сомвола строки
   //записывать код каждого символа в новый стринг
        *message_code += std::to_string(static_cast<int> (message[i-1])) + " ";
    //std::cout << "ASCII code of message is " << *message_code << std::endl;
    return 0;
}
