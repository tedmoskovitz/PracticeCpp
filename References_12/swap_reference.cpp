/* A simple example showing how references can be used to pass inputs by 
   reference to functions. */
#include <iostream>

void swap_r(int &x, int &y)  // references are initialized with an '&'
{
  int tmp = x;
  x = y;
  y = tmp;
}

void swap_p(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int main()
{

  int x = 3, y = 5;

  std::cout << "x = " << x << ", y = " << y << "\n";

  /*
  There are two ways you can pass variables by reference. The first is using pointers.
  You can pass the addresses to a swap function that then uses the dereference
  operator * to exchange the values at those addresses.
  */

  swap_p(&x, &y);

  std::cout << "x = " << x << ", y = " << y << "\n";

  /*
  However, this is kind of lame because from the client/user-side, you don't 
  want to have to know anything about how the swap function works, but you do 
  in this case, because you have to pass the addresses of the variables. Also,
  the notation in swap_p is awkward. The alternative approach is to use
  *references*. While a pointer is a separate variable that contains the address
  of a variable of interest, a reference is literally just an alias for an 
  object--its value is the same as the object value, and its address is the same
  as the object address. The implementation of swap_r is much simpler. 
  */

  swap_r(x, y);

  std::cout << "x = " << x << ", y = " << y << "\n";

  return 0;
}