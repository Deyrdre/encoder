#include <string>
#include <iostream>
#include "enter.h"
#include "key.h"
#include "ascii.h"
#include "encoder.h"
#include "string_to_int.h"

int main()
{
  std::string message;
  enter(&message);
  std::string key;
  //std::cout << "Lenght of the message is " << message.length() << std::endl;
  keygen(message.length(), &key);
  std::string message_code;
  symbol_code(message.length(), &message_code, message);
  std::string encoded_message;
  int mass_key[key.length()];
  int mass_message[message.length()];
  string_to_ints(message_code, &mass_message[0]);
  string_to_ints(key, &mass_key[0]);
  int final_message[message.length()];
  std::string final_final_message;
  encoder(&mass_message[0], &mass_key[0], message.length(), &final_message[0], final_final_message);
  std::getline(std::cin, message);
  return 0;
}
