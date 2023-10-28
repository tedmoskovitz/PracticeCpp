/* Here, we've moved the class definition to a header file and made the 
   get_speed() function inline (so the compiler inserts the content of the 
   function inline rather than making a normal function call). We can also
   declare a function as const, which means it doesn't change the value of
   any member variables (it's good to declare it that way so clients/users
   know this and also so the compiler can catch any unintended side effects. )*/

class Wheel
{
public:
  // no constructor, so use default
  int get_diameter() const { return diameter; }
  void set_diameter(int new_diameter) { diameter = new_diameter; }

private:
  int diameter;
};


class Tricycle
{
// All class members under public are accessible by outside functions;
// by default, class members are private.
public:
  // Constructor. If not specified, the compiler makes a default constructor
  // which does nothing. 
  Tricycle(int initial_speed, int wheel_diameter);
  // Destructor (used to free up memory as needed). If not specified, the compiler
  // creates a "default" destructor which does nothing. 
  ~Tricycle();
  int get_speed() const { return speed; }
  int get_diameter() const { return wheel.get_diameter(); }
  void set_speed(int new_speed);
  void pedal();
  void brake();
private:
  int speed;
  Wheel wheel;
};