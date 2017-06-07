#include <string>
#include <iostream>
#include "enter.h"
#include "key.h"

int main()
{
// std::string *ptrmessage1;
  std::string message1;
  enter(&message1);
  std::string key;
  std::cout << "Lenght of the message is " << message1.length() << std::endl;
  keygen(message1.length(), &key);
}
