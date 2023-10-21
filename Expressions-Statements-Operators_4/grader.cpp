// A simple example illustrating std::cin and conditionals.
#include <iostream>


int main()
{
  int grade;
  std::cout << "Enter your grade (1-100)\n";
  std::cin >> grade;

  if (grade >= 60)
  {
    if (grade >= 90)
    {
      std::cout << "You crushed it!\n";
      return 0;
    }
    std::cout << "You passed!\n";
    return 0;
  }
  else
    std::cout << "You failed :(\n";

  return 0;
}