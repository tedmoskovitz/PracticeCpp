// Overloading the assignment operator (=) is a bit different
#include <iostream>

class Tricycle
{
public:
  Tricycle();
  // use default copy constructor and destructor
  int get_speed() const { return *speed; }
  void set_speed(int new_speed) { *speed = new_speed; }
  Tricycle operator=(const Tricycle&); 

private:
  int *speed;
};

Tricycle::Tricycle () 
{
  speed = new int; // create data on the heap
  *speed = 5; 
}

Tricycle Tricycle::operator=(const Tricycle& other)
{
  // need to account for self-assignment
  if (&other == this) {  // if the address is the same as this object's address
    return *this;  // in this case, just return own value
  }

  // otherwise, free up currently allocated memory on the heap
  delete speed;
  // and create a new speed variable (this is like a deep copy)
  speed = new int;
  *speed = other.get_speed();
  return *this; 
}

int main()
{
  Tricycle nyc;
  std::cout << "nyc = " << nyc.get_speed() << "\n";
  Tricycle london;
  london.set_speed(1);
  nyc = london;
  std::cout << "nyc = " << nyc.get_speed() << ", london = " << london.get_speed() << "\n";
  return 0;
}



