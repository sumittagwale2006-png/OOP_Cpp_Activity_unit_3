// Concept 1: Function Overloading
// Aim: To implement compile-time polymorphism using function overloading.

#include <iostream>
#include <string>

using namespace std;

// Function to add two integers
int add(int first, int second)
{
    return first + second;
}

// Overloaded function to add two double values
double add(double first, double second)
{
    return first + second;
}

// Overloaded function to add three integers
int add(int first, int second, int third)
{
    return first + second + third;
}

// Overloaded function to join two strings
string add(string first, string second)
{
    return first + second;
}

int main()
{
    // Calling the integer version
    cout << "Sum of two integers: " << add(10, 20) << endl;

    // Calling the double version
    cout << "Sum of two doubles: " << add(2.5, 3.7) << endl;

    // Calling the three-integer version
    cout << "Sum of three integers: " << add(10, 20, 30) << endl;

    // Calling the string version
    cout << "Joined strings: " << add(string("Hello "), string("World")) << endl;

    return 0;
}
