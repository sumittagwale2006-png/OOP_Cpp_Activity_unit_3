// Concept 9: Base Pointer With a Virtual Function
// Aim: To implement run-time polymorphism using a virtual function.

#include <iostream>

using namespace std;

// Create base Animal class
class Animal
{
public:
    // Virtual sound function
    virtual void sound() const
    {
        cout << "Animal makes a sound" << endl;
    }

    // Virtual destructor
    virtual ~Animal() = default;
};

// Create Dog class
class Dog : public Animal
{
public:
    // Override sound function
    void sound() const override
    {
        cout << "Dog barks" << endl;
    }
};

// Create Cat class
class Cat : public Animal
{
public:
    // Override sound function
    void sound() const override
    {
        cout << "Cat meows" << endl;
    }
};

// Create Cow class
class Cow : public Animal
{
public:
    // Override sound function
    void sound() const override
    {
        cout << "Cow moos" << endl;
    }
};

int main()
{
    // Create objects
    Dog dog;
    Cat cat;
    Cow cow;

    // Create base pointer pointing to dog
    Animal* animal = &dog;
    animal->sound();

    // Point to cat
    animal = &cat;
    animal->sound();

    // Point to cow
    animal = &cow;
    animal->sound();

    return 0;
}
