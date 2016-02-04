#include <iostream>
#include <stdio.h>

/*
 * lesson: Base class destructor must always be virtual
 *         otherwise, the derived class destructor won't
 *         be called. Hence, memeory leakage
 */
class Base 
{
  public:
    Base() {std::cout << "base constructor" << std::endl;}
    virtual ~Base() {std::cout << "base destructor" << std::endl;}
  protected:
};

class Derived: public Base
{
  public:
    Derived() {std::cout << "derived constructor" << std::endl;}
    virtual ~Derived() {std::cout << "derived destructor" << std::endl;}
  private:

};

int main ()
{
  Base* A = new Derived();
  delete A;
}
