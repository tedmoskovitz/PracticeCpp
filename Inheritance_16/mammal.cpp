/* A simple example of class inheritance and function overriding. */
#include <iostream>

enum BREED { LAB, RETRIEVER }; 

class Mammal
{
public:
    Mammal() { std::cout << "Mammal constructor\n"; }
    ~Mammal() {std::cout << "Mammal destructor\n"; }
    int get_weight() const { return weight; }
    void set_weight(int new_weight) { weight = new_weight; }
    int get_age() const {return age; }
    void set_age(int new_age) { age = new_age; }
    void speak() const { std::cout << "I'm a mammal\n"; }

protected: // protected variables are accessible by derived classes, unlike private
    int age;
    int weight;
};


class Dog : Mammal  // dog inherits from (is a type of) mammal
{
public:
    Dog() { breed = LAB; std::cout << "Dog constructor\n"; }
    ~Dog() { std::cout << "Dog destructor\n"; }
    // override the mammal "speak" function; must habe the same signature as original
    void speak() const { std::cout << "Woof\n"; }
    BREED get_breed() const { return breed; }
    void set_breed(BREED new_breed) { breed = new_breed; }

private:
    BREED breed;
};

int main()
{
    Mammal m = Mammal(); 
    m.speak();
    Dog d = Dog();
    d.speak();

    /*
    One potential issue is if the super-class's original function is also overloaded, you make the 
    versions that you don't override hard to access. You can get around it, though (see pgs 247-8).
    */

    return 0;
}

