// Concept 14: Object Slicing Demonstration
// Aim: To understand object slicing and avoid it using references.

#include <iostream>

using namespace std;

// Create base class
class Base
{
public:
    // Virtual display function
    virtual void display() const
    {
        cout << "Base object" << endl;
    }

    // Virtual destructor
    virtual ~Base() = default;
};

// Create derived class
class Derived : public Base
{
public:
    // Override display function
    void display() const override
    {
        cout << "Derived object" << endl;
    }
};

// Function receiving Base object by value
void displayByValue(Base object)
{
    object.display();
}

// Function receiving Base object by reference
void displayByReference(const Base& object)
{
    object.display();
}

// Function receiving Base pointer
void displayByPointer(const Base* object)
{
    object->display();
}

int main()
{
    // Create derived object
    Derived derived;

    // Passing derived object by value causes slicing
    cout << "Passing by value: ";
    displayByValue(derived);

    // Passing by reference preserves derived object
    cout << "Passing by reference: ";
    displayByReference(derived);

    // Passing by pointer preserves derived object
    cout << "Passing by pointer: ";
    displayByPointer(&derived);

    return 0;
}
