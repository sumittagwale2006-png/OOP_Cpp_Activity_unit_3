// Concept 10: Base Reference With a Virtual Function
// Aim: To use a base-class reference for run-time polymorphism.

#include <iostream>

using namespace std;

// Create abstract-like base Shape class
class Shape
{
public:
    // Virtual area function
    virtual double area() const
    {
        return 0.0;
    }

    // Virtual destructor
    virtual ~Shape() = default;
};

// Create Rectangle class
class Rectangle : public Shape
{
private:
    // Store length
    double length;

    // Store width
    double width;

public:
    // Constructor
    Rectangle(double givenLength, double givenWidth)
    {
        length = givenLength;
        width = givenWidth;
    }

    // Override area function
    double area() const override
    {
        return length * width;
    }
};

// Create Circle class
class Circle : public Shape
{
private:
    // Store radius
    double radius;

public:
    // Constructor
    Circle(double givenRadius)
    {
        radius = givenRadius;
    }

    // Override area function
    double area() const override
    {
        const double PI = 3.141592653589793;

        return PI * radius * radius;
    }
};

// Function accepting base-class reference
void printArea(const Shape& shape)
{
    cout << "Area: " << shape.area() << endl;
}

int main()
{
    // Create rectangle object
    Rectangle rectangle(5.0, 3.0);

    // Create circle object
    Circle circle(2.0);

    // Pass rectangle by base reference
    printArea(rectangle);

    // Pass circle by base reference
    printArea(circle);

    return 0;
}
