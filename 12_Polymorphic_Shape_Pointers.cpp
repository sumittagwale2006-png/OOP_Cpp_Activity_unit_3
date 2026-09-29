// Concept 12: Collection of Polymorphic Shape Pointers
// Aim: To process different derived objects through a common base interface.

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

// Create abstract Shape class
class Shape
{
public:
    // Pure virtual area function
    virtual double area() const = 0;

    // Pure virtual display function
    virtual void displayName() const = 0;

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

    // Calculate rectangle area
    double area() const override
    {
        return length * width;
    }

    // Display shape name
    void displayName() const override
    {
        cout << "Rectangle";
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

    // Calculate circle area
    double area() const override
    {
        const double PI = 3.141592653589793;

        return PI * radius * radius;
    }

    // Display shape name
    void displayName() const override
    {
        cout << "Circle";
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

    // Calculate triangle area
    double area() const override
    {
        return 0.5 * base * height;
    }

    // Display shape name
    void displayName() const override
    {
        cout << "Triangle";
    }
};

int main()
{
    // Create a vector of base-class unique pointers
    vector<unique_ptr<Shape>> shapes;

    // Add rectangle object
    shapes.push_back(make_unique<Rectangle>(5.0, 3.0));

    // Add circle object
    shapes.push_back(make_unique<Circle>(2.0));

    // Add triangle object
    shapes.push_back(make_unique<Triangle>(6.0, 4.0));

    // Process every shape
    for (const auto& shape : shapes)
    {
        // Display shape name
        shape->displayName();

        // Display shape area
        cout << " Area: " << shape->area() << endl;
    }

    return 0;
}
