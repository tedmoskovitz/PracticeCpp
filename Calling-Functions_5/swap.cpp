/* A simple program illustrating that by default, function parameters are 
 pass-by-value---that is, modifications to the function arguments don't
 affect the original variables. Also, they can only return ≤1 value. */
#include <iostream>

void swap(int x, int y)
{
  int tmp;
  tmp = x;
  x = y;
  y = x;
}

int main()
{
  int x = 4, y = 10;
  std::cout << "Before: x = " << x << ", y = " << y << "\n";
  swap(x, y);
  std::cout << "After: x = " << x << ", y = " << y << "\n";
  return 0;
}

