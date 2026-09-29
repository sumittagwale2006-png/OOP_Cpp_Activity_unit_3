// Concept 8: Base Pointer Without a Virtual Function
// Aim: To observe static binding when a base function is not virtual.

#include <iostream>

using namespace std;

// Create base class
class Base
{
public:
    // Base display function
    void display() const
    {
        cout << "Base display function" << endl;
    }
};

// Create derived class
class Derived : public Base
{
public:
    // Derived display function
    void display() const
    {
        cout << "Derived display function" << endl;
    }
};

int main()
{
    // Create derived object
    Derived derivedObject;

    // Create base pointer pointing to derived object
    Base* basePointer = &derivedObject;

    // Call through base pointer
    cout << "Using base pointer: ";
    basePointer->display();

    // Direct call to derived function
    cout << "Using derived object: ";
    derivedObject.display();

    return 0;
}
