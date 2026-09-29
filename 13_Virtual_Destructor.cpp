// Concept 13: Virtual Destructor
// Aim: To demonstrate correct destruction through a base pointer.

#include <iostream>

using namespace std;

// Create base class
class Base
{
public:
    // Virtual base destructor
    virtual ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

// Create derived class
class Derived : public Base
{
public:
    // Derived destructor
    ~Derived() override
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    // Create derived object dynamically through base pointer
    Base* pointer = new Derived();

    // Delete object using base pointer
    delete pointer;

    return 0;
}
