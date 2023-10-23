/* This program showcases some simple loops. */
#include <iostream>

int main()
{
  // while loop
  int i = 0;
  while (i < 5) {
    std::cout << i << "\n";
    i++; 
  }

  std::cout << "============\n";

  // basic for loop
  for (int i = 0; i < 5; i++) {
    std::cout << i << "\n";
  }

  std::cout << "============\n";

  // multi-variable for loop
  for (int i = 0, j = 0; i < 5; i++, j--) {
    std::cout << i << " " << j << "\n";
  }

  return 0;
}