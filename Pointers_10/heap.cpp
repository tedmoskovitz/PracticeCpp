/* A simple example illustrating pointers and the heap. */
#include <iostream>


int main()
{

  /* One nice use of pointers is to use them to allocate memory on the heap.
     Defining local variables within a function is nice and safe because
     once the function returns, the memory is automatically freed, but 
     you might also sometimes want access to that variable after returning.
     On the other hand, making global variables can be unsafe due to unforeseen
     usage/modifications in the code. The heap is another place you can store
     data, with the advantage that you can access anywhere in the program. 
     However, it has to be explicitly accessed through pointers and the 
     dereference * operator so it's very clear when it's used. The only 
     thing is that you have to be sure to delete the data from the heap when
     you're done with it--because the pointer is a local variable, if it gets
     deleted (e.g., when the function it's defined in returns), then you 
     can no longer access that part of the heap--this is called a memory
     leak. The leaked memory does get freed up once the program terminates, though. */

  // Allocate space on the heap with the new command; tell it how much with the type
  int *p_var = new int;
  // Set the value at that heap address
  *p_var = 97;
  // Delete the pointer / free up heap memory
  delete p_var;
  // Set pointer equal to nullptr so that accidentally referencing it later won't
  // crash the program
  p_var = nullptr;

  // Another way to get a memory leak is to reassign a pointer before deleting
  // the memory it's allocated from the heap. For example
  // int *leak = new int;
  // *leak = 7;
  // leak = new int;
  // *leak = 11;
  // The memory of the first pointer is leaked here--should always remember to 
  // delete before reassigning. 

  return 0;
}
