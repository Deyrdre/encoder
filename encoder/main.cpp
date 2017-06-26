#include <string>
#include <iostream>
#include <vector>
#include "encoder11.h"
#include "decode_class.h"

char choosen_action; //переменная для хранения выбора пользователя (докидрование или декодирование)

char user_choose()
        {
            std::cout << "What are you want to do? Decode or Encode message? (d/e): " << std::endl;
            std::cin >> choosen_action;
            std::cin.clear(); //очистка буфера, так как он содержит /n
            std::cin.ignore();
            if  (choosen_action == 'd')
                {
                    return 'd';
                }
            else if (choosen_action == 'e')
                {
                    return 'e';
                }
            else
                {
                    std::cout << "Bad input. Choose only 'e' for encoding and 'd' for decoding message." << std::endl;
                    return user_choose();
                }
        }

void enc_or_dec(char action)
        {
             if (action == 'd')
                 {
                    Decode message_to_decode;
                    message_to_decode.enter_mes();
                    message_to_decode.decode_func();
                 }
             else if (action == 'e')
                 {
                    Encoded_message message_to_encode;
                    message_to_encode.start();
                 }
        }

int main()
{
    enc_or_dec(user_choose());

    return 0;
}
