/* A simple example illustrating function overloading / polymorphism. */
#include <iostream>

int add(int x, int y, int z)
{
  return x + y + z;
}

int add(int x, int y)
{
  return x + y;
}

int main()
{
  std::cout << add(1, 2) << "\n";
  std::cout << add(1, 2, 3) << "\n";
  return 0;
}

