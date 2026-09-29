// Concept 7: Friend / Non-Member Operator Overloading
// Aim: To overload an operator using a friend non-member function.

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

    // Declare friend addition operator
    friend Complex operator+(int value, const Complex& number);

    // Declare friend subtraction operator
    friend Complex operator-(int value, const Complex& number);

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

// Define friend addition operator
Complex operator+(int value, const Complex& number)
{
    return Complex(value + number.real, number.imaginary);
}

// Define friend subtraction operator
Complex operator-(int value, const Complex& number)
{
    return Complex(value - number.real, -number.imaginary);
}

int main()
{
    // Create complex number
    Complex number(2, 3);

    // Add integer to complex number
    Complex result = 10 + number;

    // Subtract complex number from integer
    Complex subtractionResult = 10 - number;

    // Display addition result
    cout << "Result of 10 + complexNumber: ";
    result.display();

    // Display subtraction result
    cout << "Result of 10 - complexNumber: ";
    subtractionResult.display();

    return 0;
}
