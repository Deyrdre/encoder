#include <string>
#include <iostream>
#include <time.h>

int keyupdate()
{
    int random_value = rand() %100 + 1;
    return random_value;
}

int keygen(int message_length, std::string *key)
{
    srand(time(NULL));
    for (int i = 1; i <= message_length; ++i)
    {
       *key += std::to_string(keyupdate()) + " ";
    }
    std::cout << "Key is " << *key << std::endl;
    return 0;
}
