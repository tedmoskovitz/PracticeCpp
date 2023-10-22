/* A simple exmaple illustrating an inline function. In general, there's 
   overhead incurred by jumping to wherever a function is in memory. If the 
   function is small, you can possibly save some time by directly copying the
   code into place in the program, avoiding the need to jump. This is what the 
   `inline` marker does---the compiler copies the code within the function 
   directly into place. However, each time it's called, the compiler re-copies
   it, so if it's called a lot, it's probably not worth it. Also, modern 
   compilers will sometimes ignore `inline` if it won't actually provide a 
   speedup. This is like a lambda function in Python. */


inline int add(int x, int y);

int add(int x, int y)
{
  return x + y;
}