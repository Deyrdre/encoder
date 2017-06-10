#include <string>
#include <iostream>

int encoder(int *mass_message, int *mass_key, int message_length, int *final_message, std::string &final_final_message)
{
    for (int i = 0; i < message_length ; ++i)
    {
        *(final_message+i) = *(mass_message+i) * (*(mass_key+i));
        //std::cout << "Int Final message " << (*(final_message+i));
        final_final_message += std::to_string(*(final_message+i)) + " ";
    }
    std::cout << "Encoded message is - " << final_final_message << std::endl;
    return 0;
}
//есть месседже_код = 2132132
//есть ключ =         4 11
