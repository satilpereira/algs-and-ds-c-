#include <iostream>

// Prototype
double sqrt(double x);

int main(void)
{
  const int i = 5;              // i is a named constant
  int var = 17;                 // var is not a constant
  const double sqv = sqrt(var); // sqv is a named constant, possibly computed at run time
  const auto sqv2 = sqrt(var);  // sqv2 is a named constant, possibly computed at run time, Its type is automatically deduced
}

double sqrt(double x)
{
  return x * x;
}

int sum(const int a, const int b)
{
  return a + b;
}