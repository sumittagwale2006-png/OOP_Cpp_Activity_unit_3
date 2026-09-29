// Concept 3: Unary Minus Operator Overloading
// Aim: To overload the unary minus operator for a user-defined class.

#include <iostream>

using namespace std;

// Create a Number class
class Number
{
private:
    // Store the number
    int value;

public:
    // Constructor to initialize the value
    Number(int givenValue)
    {
        value = givenValue;
    }

    // Overload unary minus operator
    Number operator-() const
    {
        return Number(-value);
    }

    // Function to display the value
    void display() const
    {
        cout << value << endl;
    }
};

int main()
{
    // Create the first object
    Number first(25);

    // Apply unary minus operator
    Number second = -first;

    // Display original value
    cout << "Original value: ";
    first.display();

    // Display negative value
    cout << "Negated value: ";
    second.display();

    return 0;
}
