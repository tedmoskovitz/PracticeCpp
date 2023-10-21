// A simple example illustrating the difference between prefix-ing or postfix-ing
// the increment/decrement operator(s).
#include <iostream>

int main()
{
  int x = 5;
  int y = ++x;
  std::cout << "Using increment ++ as a prefix adds 1 before the LHS is computed: x = " << x << ", y = " << y << "\n"; 

  x = 5;
  y = x++;
  std::cout << "But using it as a postfix completes assignment then adds 1: x = " << x << ", y = " << y << "\n";
}
