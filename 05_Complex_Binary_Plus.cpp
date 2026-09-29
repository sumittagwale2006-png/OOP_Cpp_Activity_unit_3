// Concept 5: Binary + Operator Overloading for Complex Numbers
// Aim: To overload the binary + operator to add two complex numbers.

#include <iostream>

using namespace std;

// Create Complex class
class Complex
{
private:
    // Store real part
    int real;

    // Store imaginary part
    int imaginary;

public:
    // Constructor
    Complex(int realPart = 0, int imaginaryPart = 0)
    {
        real = realPart;
        imaginary = imaginaryPart;
    }

    // Overload binary + operator
    Complex operator+(const Complex& other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overload binary - operator
    Complex operator-(const Complex& other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Display complex number
    void display() const
    {
        cout << real;

        if (imaginary >= 0)
        {
            cout << " + ";
        }
        else
        {
            cout << " - ";
        }

        cout << (imaginary >= 0 ? imaginary : -imaginary) << "i" << endl;
    }
};

int main()
{
    // Create first complex number
    Complex first(2, 3);

    // Create second complex number
    Complex second(4, 5);

    // Add two complex numbers
    Complex sum = first + second;

    // Subtract two complex numbers
    Complex difference = first - second;

    // Display first number
    cout << "First complex number: ";
    first.display();

    // Display second number
    cout << "Second complex number: ";
    second.display();

    // Display sum
    cout << "Sum: ";
    sum.display();

    // Display difference
    cout << "Difference: ";
    difference.display();

    return 0;
}
