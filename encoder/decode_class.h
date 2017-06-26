#ifndef DECODE_CLASS_H
#define DECODE_CLASS_H
#include <iostream>
#include <string>
#include <vector>
class Decode
{
public:
    std::vector<int> key;
    std::vector<int> encoded_message;
    std::string decode_message;
    int decode_func ();
    int parse (std::vector<int>& mes, std::string& message);
    int enter_mes ();

    Decode();
};

#endif // DECODE_CLASS_H
