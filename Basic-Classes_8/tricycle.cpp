/* A basic example illustrating properties of classes / encapsulation in C++. */
#include <iostream>

class Tricycle
{
// All class members under public are accessible by outside functions;
// by default, class members are private.
public:
  // Constructor. If not specified, the compiler makes a default constructor
  // which does nothing. 
  Tricycle(int initial_speed);
  // Destructor (used to free up memory as needed). If not specified, the compiler
  // creates a "default" destructor which does nothing. 
  ~Tricycle();
  int get_speed();
  void set_speed(int new_speed);
  void pedal();
  void brake();
private:
  int speed;
};


// Constructor
Tricycle::Tricycle(int initial_speed)
{
  set_speed(initial_speed);
  std::cout << "Initial speed: " << speed << "\n";
}

// Destructor
Tricycle::~Tricycle()
{
  // Do nothing. Equivalent to the default desctructor.
}

// Get speed
int Tricycle::get_speed()
{
  return speed;
}

// Set speed
void Tricycle::set_speed(int new_speed)
{
  if (new_speed >= 0) {
    speed = new_speed;
  }
}

// Pedal the tricycle (increase speed)
void Tricycle::pedal()
{
  set_speed(speed + 1);
  std::cout << "Pedaling: speed is now " << speed << "\n";
}

// Brake (decrease speed)
void Tricycle::brake()
{
  set_speed(speed - 1);
  std::cout << "Braking: speed is now " << speed << "\n";
}

int main() 
{
  Tricycle trike(0);
  trike.pedal();
  trike.pedal();
  trike.brake();
  trike.brake();
  trike.brake();
  return 0;
}