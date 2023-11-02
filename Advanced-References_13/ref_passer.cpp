#include <iostream>

/*
Passing by value can be really inefficient if you're passing in a big object,
because then the function has to create a copy (calling the constructor and
allocating more memory), run its code, and then call the copied object's 
destructor, which can also be expensive if there's a lot of memory to free up. 
It's therefore preferable in these situations to pass by reference, but that
carries the danger of modifying the original object in ways you don't anticipate.
To prevent this, you can declare functions as const, so that way the compiler
will check that the inputs don't get changed--you can also do this with pointers,
but it's a bit simpler with references. 
*/


class SimpleCat
{
public:
  SimpleCat();
  SimpleCat(SimpleCat&);  // copy constructor; makes a copy of the input obj ref
  ~SimpleCat();

  int get_age() const { return age; }
  void set_age(int new_age) { age = new_age; }

private:
  int age; 
};

SimpleCat::SimpleCat()
{
  std::cout << "SimpleCat constructor\n";
  age = 1; 
}

SimpleCat::SimpleCat(SimpleCat& cat)
{
  std::cout << "SimpleCat copy constructor\n";
}

SimpleCat::~SimpleCat()
{
  std::cout << "SimpleCat destructor\n";
}

// function takes in a reference to a constant SimpleCat object
const SimpleCat & FunctionTwo(const SimpleCat & cat)
{
  std::cout << "Function Two...\n";
  std::cout << "Cat is " << cat.get_age() << "\n";
  // function is const so can't call cat.set_age() here. 
  return cat; 
}

int main() 
{
  SimpleCat wilson;
  wilson.set_age(5);
  FunctionTwo(wilson); 
  return 0;
}



