#include <string>
#include <iostream>
#include <vector>
#include "encoder11.h"

char choosen_action; //переменная для хранения выбора пользователя (докидрование или декодирование)

char user_choose()
        {
            std::cout << "What are you want to do? Decode or Encode message? (d/e): " << std::endl;
            std::cin >> choosen_action;
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
                    user_choose();
                }
        }

void enc_or_dec(action)
        {
             if (action == 'd')
                 {

                 }
             else if (action == 'e')
                 {
                    Encoded_message message;
                    message.start();
                 }
             else
        }

int main()
{
    enc_or_dec(user_choose());

    return 0;
}
