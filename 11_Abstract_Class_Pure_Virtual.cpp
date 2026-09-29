// Concept 11: Abstract Class and Pure Virtual Function
// Aim: To create and use an abstract class.

#include <iostream>

using namespace std;

// Create abstract Shape class
class Shape
{
public:
    // Pure virtual function
    virtual double area() const = 0;

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

    // Implement pure virtual function
    double area() const override
    {
        return length * width;
    }
};

// Create Triangle class
class Triangle : public Shape
{
private:
    // Store base
    double base;

    // Store height
    double height;

public:
    // Constructor
    Triangle(double givenBase, double givenHeight)
    {
        base = givenBase;
        height = givenHeight;
    }

    // Implement pure virtual function
    double area() const override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    // Create rectangle object
    Rectangle rectangle(8.0, 4.0);

    // Create triangle object
    Triangle triangle(6.0, 4.0);

    // Display rectangle area
    cout << "Rectangle Area: " << rectangle.area() << endl;

    // Display triangle area
    cout << "Triangle Area: " << triangle.area() << endl;

    return 0;
}
