#include <iostream>

int main(void)
{
  std::cout << "Assignment operators for x = 5, assigning 3." << std::endl
            << std::endl;
  // OR assignment
  int x = 5;
  x |= 3;
  std::cout << "OR assignment: " << x << std::endl;
  // Explanation
  std::cout << "5 in binary: 101" << std::endl;
  std::cout << "3 in binary: 011" << std::endl;
  std::cout << "OR operation: 111" << std::endl
            << std::endl;

  // AND assignment
  x = 5;
  x &= 3;
  std::cout << "AND assignment: " << x << std::endl;
  // Explanation
  std::cout << "5 in binary: 101" << std::endl;
  std::cout << "3 in binary: 011" << std::endl;
  std::cout << "AND operation: 001" << std::endl
            << std::endl;

  // XOR assignment
  x = 5;
  x ^= 3;
  std::cout << "XOR assignment: " << x << std::endl;
  // Explanation
  std::cout << "5 in binary: 101" << std::endl;
  std::cout << "3 in binary: 011" << std::endl;
  std::cout << "XOR operation: 110" << std::endl
            << std::endl;

  // Left shift assignment
  x = 5;
  x <<= 3;
  std::cout << "Left shift assignment: " << x << std::endl;
  // Explanation
  std::cout << "5 in binary: 101" << std::endl;
  std::cout << "Left shift by 3: 101000" << std::endl
            << std::endl;

  // Right shift assignment
  x = 5;
  x >>= 3;
  std::cout << "Right shift assignment: " << x << std::endl;
  // Explanation
  std::cout << "5 in binary: 101" << std::endl;
  std::cout << "Right shift by 3: 000" << std::endl
            << std::endl;

  // About the shift operators
  std::cout << "The shift operators are used to shift the bits of a number to the left or right." << std::endl;
  std::cout << "The left shift operator (<<) shifts the bits to the left by a specified number of positions." << std::endl;
  std::cout << "The right shift operator (>>) shifts the bits to the right by a specified number of positions." << std::endl;
  // What if it's a negative number?
  std::cout << "If the number is negative, the left shift operator will fill the empty positions with 1s and the right shift operator will fill the empty positions with 0s." << std::endl;
  // What if the number is larger than the size of the data type?
  std::cout << "If the number is larger than the size of the data type, the bits that are shifted out of the data type are lost." << std::endl;

  return 0;
}