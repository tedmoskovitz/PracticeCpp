#include <iostream>


float computeArea(float width, float height)
{
  return width * height; 
}

int main()
{
  float width = 2.3;
  float height = 1.2;

  float area = computeArea(width, height);

  std::cout << "The area is " << area << "\n";
}