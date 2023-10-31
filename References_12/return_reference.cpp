/* A simple example illustrating how to effectively get >1 return value
   from a function by passing by reference. */
#include <iostream>

enum ERR_CODE { SUCCESS, ERROR };

ERR_CODE factor(int, int&, int&);

int main()
{

  int number, squared, cubed;
  ERR_CODE result;

  std::cout << "Enter a number (0-20)\n";
  std::cin >> number;

  result = factor(number, squared, cubed);

  if (result == SUCCESS) {
    std::cout << "n = " << number << ", n^2 = " << squared << ", n^3 = " << cubed << "\n";
  }
  else {
    std::cout << "Error!!\n";
  }

  return 0;
}

ERR_CODE factor(int number, int &r_squared, int &r_cubed)
{
  if ((number > 20) || (number < 0)) {
    return ERROR; 
  }
  else {
    r_squared = number * number;
    r_cubed = r_squared * number; 
    return SUCCESS;
  }
}
