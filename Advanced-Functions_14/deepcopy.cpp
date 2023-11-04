/* When you pass an object by value, the compiler uses a default "copy
   constructor" to make a copy of all the member data. However, if some of the 
   member variables are pointers to objects on the heap, the default copy
   constructor only copies the pointers, not the objects on the heap. This means
   that the original pointer(s) and the copied pointer(s) will both point to 
   the original object's data on the heap. The default copy constructor 
   creates what's called a shallow copy. This is a problem because the shallow
   copy can modify the original heap data uninentionally, and even worse, 
   when the copied pointer goes out of scope and the copied object is deleted,
   the shallow copy's destructor is called, which deletes the original object's
   data on the heap, so that the original can't access it any more. To prevent
   this, we can instead create a *deep copy*, which also makes a copy of the 
   original object's heap data. */
#include <iostream>

class Tricycle
{
public:
  Tricycle();
  // To make the deep copy, we make our own custom copy constructor (which takes
  // a constrant reference to an object of the same class--the original--as input)
  Tricycle(const Tricycle&);
  ~Tricycle();
  int get_speed() const { return *speed; }
  void set_speed(int new_speed) { *speed = new_speed; } 
private:
  int *speed;
};

Tricycle::Tricycle()
{
  speed = new int; // new pointer on the heap
  *speed = 100;
}

Tricycle::Tricycle(const Tricycle& r_original) // take reference to original obj
{
  speed = new int;  // create a new object on the heap, rather than point to orig
  *speed = r_original.get_speed(); // set its value equal to the original's
}

Tricycle::~Tricycle()
{
  // since we have stuff on the heap, make sure to free memory
  delete speed;
  speed = NULL;
}

int main()
{
  Tricycle nyc;  // original object
  std::cout << "original's speed = " << nyc.get_speed() << "\n";
  Tricycle london(nyc);  // copy of nyc
  london.set_speed(1);  // set a new speed for london--it shouldn't change nyc's
  std::cout << "copy's speed = " << london.get_speed() << "\n";
  std::cout << "original's speed = " << nyc.get_speed() << "\n";

  return 0;
}



