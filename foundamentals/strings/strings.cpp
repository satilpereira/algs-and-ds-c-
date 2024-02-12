#include <iostream>

int main(void)
{
  // Strings are sequences of characters
  // In C++, strings are objects of the class std::string
  std::string str = "Hello, World!";
  std::cout << str << std::endl
            << std::endl;

  // To get the length of a string, use the length() method
  std::cout << "The length of the string is " << str.length() << std::endl
            << std::endl;

  return 0;
}