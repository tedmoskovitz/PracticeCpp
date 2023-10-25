/* A simple example illustrating the getline() function */
#include <iostream>

int main() {

  std::cout << "What is your name?\n";
  char name[40];
  std::cin.getline(name, 40);  // getline(var, max chars, [opt] end-of-input char)

  std::cout << "What is your quest?\n";
  char quest[40];
  std::cin.getline(quest, 40);

  std::cout << "What is your favorite color?\n";
  char color[20];
  std::cin.getline(color, 20);

  std::cout << "Name: " << name << ", Quest: " << quest << ", Color: " << color << "\n";
  return 0;
}