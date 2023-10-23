/* A simple program illustrating nested for loops. */
#include <iostream>

int main() 
{
  // Get box width, box height, and character from user
  int width, height;
  char c;
  std::cout << "What width do you want?\n"; 
  std::cin >> width;
  std::cout << "What height do you want?\n"; 
  std::cin >> height;
  std::cout << "What character do you want to use?\n";
  std::cin >> c;

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      std::cout << c;
    }
    std::cout << "\n";
  }

  return 0;
}