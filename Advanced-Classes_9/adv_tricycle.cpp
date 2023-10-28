/* A basic example illustrating properties of classes / encapsulation in C++. 
   See the associated header file for more complete description. */
#include <iostream>
#include "adv_tricycle.hpp"


// Constructor
Tricycle::Tricycle(int initial_speed, int wheel_diameter)
{
  set_speed(initial_speed);
  wheel.set_diameter(wheel_diameter);
  std::cout << "Initial speed: " << speed << ", Wheel diameter: " << wheel_diameter << "\n";
}

// Destructor
Tricycle::~Tricycle()
{
  // Do nothing. Equivalent to the default desctructor.
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
  set_speed(speed + wheel.get_diameter());
  std::cout << "Pedaling: speed is now " << speed << "\n";
}

// Brake (decrease speed)
void Tricycle::brake()
{
  set_speed(speed - wheel.get_diameter());
  std::cout << "Braking: speed is now " << speed << "\n";
}

int main() 
{
  Tricycle trike(0, 2);
  trike.pedal();
  trike.pedal();
  trike.brake();
  trike.brake();
  trike.brake();
  return 0;
}