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
  std::cout << "Lenght of the message is " << message.length() << std::endl;
  keygen(message.length(), &key);
  std::string message_code;
  symbol_code(message.length(), &message_code, message);
  std::string encoded_message;
  int mass_key[key.length()];
  int mass_message[message.length()];
  //encoder(message_code, key, message.length());
  string_to_ints(message_code, &mass_message[0]);
  string_to_ints(key, &mass_key[0]);
  return 0;
}
