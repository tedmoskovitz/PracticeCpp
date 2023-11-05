/* Operator overloading = defining operators like +,-,++, etc. for classes. */
#include <iostream>

class Counter
{
public:
  Counter() { value = 0; }
  Counter(int initial_value) { value = initial_value; }
  ~Counter() {}
  int get_value() const { return value; }
  void set_value(int new_value) { value = new_value; }
  const Counter& operator++();  // prefix ++
  const Counter operator++(int);  // postfix ++
  const Counter operator+(const Counter&);  // addition

private:
  int value;
};

// prefix increment
const Counter& Counter::operator++()
{
  ++value;
  return *this; 
}

// postfix increment
const Counter Counter::operator++(int) // int is not used; just distinguishes from prefix
{
  // postfixing a = c++; sets the LHS = to the original c value then increments
  // therefore, create a copy of the original (by value)
  Counter temp(*this);
  // increment the actual original's value
  ++value;
  // and return the copy of the original (with the original value)
  return temp;
}

// addition
const Counter Counter::operator+(const Counter &other)
{
  return Counter(value + other.get_value());
}

int main()
{
  Counter c;
  std::cout << "c = " << c.get_value() << "\n";
  ++c;
  std::cout << "c = " << c.get_value() << "\n";
  c++;
  std::cout << "c = " << c.get_value() << "\n";
  Counter a = ++c;
  std::cout << "c = " << c.get_value() << ", a = " << a.get_value() << "\n";
  a = c++; // set a = c then increment c
  std::cout << "c = " << c.get_value() << ", a = " << a.get_value() << "\n";
  Counter d = a + c; 
  std::cout << "d = " << d.get_value() << "\n";


  return 0;
}

