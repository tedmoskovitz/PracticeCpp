/* A simple example showing how to access data members using pointers. */
#include <iostream>

class SimpleCat
{
public:
  // the "this" pointer is like "self" in Python; it's a pointer that automatically
  // gets handled by the Compiler; it's not actually necessary here, this is 
  // just an example
  SimpleCat()  { this->set_age(1); }
  ~SimpleCat() {}
  int get_age() { return this->age; }
  void set_age(int new_age)  { this->age = new_age; }
private:
  int age; 
};

int main()
{
  // Create a SimpleCat object on the heap
  SimpleCat *p_cat = new SimpleCat;
  // If we want to access the attributes of the actual object on the heap 
  // (rather than just the address), we can use the dereference operator
  std::cout << "age: " << (*p_cat).get_age() << "\n";
  // But to make this shorter to type, we can use the '->' operator
  p_cat->set_age(3);
  std::cout << "new age: " << p_cat->get_age() << "\n";
  // Clean up (even though it's not necessary here)
  delete p_cat;
  p_cat = nullptr; 

  return 0;
}