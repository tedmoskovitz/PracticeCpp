/* A simple example illustrating constant pointers. */
#include <iostream>

int main()
{

  // const pointers
  const int *p_one;  // the value at address p_one is constant -- it can't change
  // so things like *p_one = 5; will fail
  // int * const p_two;  // the address held by this pointer is constant, so
  // things like p_two = &x; will fail
  // const int * const p_three;  // can't change the address or value

  /* If you declare a pointer as const, you can only pass it to const functions
     (remember - const functions can't change their arguments). */

  return 0;
}