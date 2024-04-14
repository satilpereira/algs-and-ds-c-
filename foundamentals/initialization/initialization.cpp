#include <iostream>

int main(void)
{
  // C style initialization (avoid)
  int i1 = 5;

  // C++ style initialization (preferred)
  int i2(5);

  // Uniform initialization (C++11)
  int i3{5};

  // Uniform initialization (C++11) with direct initialization (preferred)
  // Preferred because it avoids narrowing conversions
  // A narrowing conversion is a conversion that loses information
  // For example, converting a double to an int
  int i4 = {5};

  // auto keyword (C++11)
  // The auto keyword is used to automatically deduce the type of a variable
  // With auto, we tend to use the = because there is no potential troublesome type conversion
  auto i5 = 5;

  printf("i1: %d\n", i1);
  printf("i2: %d\n", i2);
  printf("i3: %d\n", i3);
  printf("i4: %d\n", i4);
  printf("i5: %d, type is %s\n", i5, typeid(i5).name());
}