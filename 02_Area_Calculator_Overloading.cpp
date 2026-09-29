// Concept 2: Area Calculator Using Function Overloading
// Aim: To calculate areas of different shapes using overloaded functions.

#include <iostream>

using namespace std;

// Function to calculate square area
int calculateArea(int side)
{
    return side * side;
}

// Function to calculate rectangle area
int calculateArea(int length, int width)
{
    return length * width;
}

// Function to calculate circle area
double calculateArea(double radius)
{
    const double PI = 3.141592653589793;

    return PI * radius * radius;
}

// Function to calculate triangle area
double calculateArea(double base, double height)
{
    return 0.5 * base * height;
}

int main()
{
    // Calculate square area
    cout << "Square Area: " << calculateArea(5) << endl;

    // Calculate rectangle area
    cout << "Rectangle Area: " << calculateArea(6, 4) << endl;

    // Calculate circle area
    cout << "Circle Area: " << calculateArea(2.0) << endl;

    // Calculate triangle area
    cout << "Triangle Area: " << calculateArea(6.0, 4.0) << endl;

    return 0;
}
