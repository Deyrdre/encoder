#include <string>
#include <iostream>
#include "enter.h"
#include "key.h"
#include "ascii.h"

int main()
{
  std::string message;
  enter(&message);
  std::string key;
  std::cout << "Lenght of the message is " << message.length() << std::endl;
  keygen(message.length(), &key);
  std::string message_code;
  symbol_code(message.length(), &message_code, message);
}
