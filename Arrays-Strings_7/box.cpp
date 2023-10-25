/* A simple example illustrating array initialization. */
#include <iostream>

int main()
{
  int height = 4;
  int width = 3;
  int box[4][3] = {
    {5, 1, 2},
    {0, 0, 1},
    {9, 8, 4},
    {7, 5, 6}
  };

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      std::cout << box[row][col] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}