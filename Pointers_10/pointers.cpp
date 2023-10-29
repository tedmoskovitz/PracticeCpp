/*
Pointers hold the addresses of variables. 

*/
#include <iostream>

int main()
{

  // Pointers hold the addresses of variables. 
  int age = 28;
  // if you don't know which address you're going to point to, use nullptr
  // the int in front says that the pointer is going to point to an int
  int *p_age = nullptr;
  p_age = &age; // then you can set it like this; & = addressof()
  std::cout << "age = " << age << ", p_age = " << p_age << "\n";
  // important point: p_age is a variable which holds the address of age;
  // it's not at that address, it's like an int whose value == the memory address
  // where age lives
  // you can also just set it directly equal to the address at init
  // like this: int *p_age = &age;
  // if you want to access the value held at that address again, you use *, 
  // called the indirection or dereference operator
  int other_age = *p_age;  // other_age will be 28
  std::cout << "other_age = " << other_age << "\n";
  // you can also reset the value at the address
  *p_age = 29; // (which will change the value of age)
  std::cout << "age = " << age << "\n"; 

  /* This is a dumb/illustrative example, but in practice, pointers have 3
     main uses
     1. managing data on the heap
     2. accessing class member data and functions
     3. passing variables by reference to functions */
  

  return 0;
}