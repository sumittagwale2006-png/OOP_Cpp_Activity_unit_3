// Concept 4: Prefix and Postfix Increment Operator Overloading
// Aim: To overload prefix and postfix increment operators.

#include <iostream>

using namespace std;

// Create a Counter class
class Counter
{
private:
    // Store counter value
    int value;

public:
    // Constructor
    Counter(int initialValue = 0)
    {
        value = initialValue;
    }

    // Overload prefix increment operator
    Counter& operator++()
    {
        ++value;

        return *this;
    }

    // Overload postfix increment operator
    Counter operator++(int)
    {
        // Store old value
        Counter old = *this;

        // Increment current value
        ++value;

        // Return old value
        return old;
    }

    // Overload prefix decrement operator
    Counter& operator--()
    {
        --value;

        return *this;
    }

    // Overload postfix decrement operator
    Counter operator--(int)
    {
        // Store old value
        Counter old = *this;

        // Decrement current value
        --value;

        // Return old value
        return old;
    }

    // Display counter value
    void display() const
    {
        cout << value << endl;
    }
};

int main()
{
    // Create counter object
    Counter counter(5);

    // Prefix increment
    cout << "After prefix increment: ";
    ++counter;
    counter.display();

    // Postfix increment
    cout << "Value returned by postfix increment: ";
    Counter oldValue = counter++;
    oldValue.display();

    // Display value after postfix increment
    cout << "Counter after postfix increment: ";
    counter.display();

    // Prefix decrement
    cout << "After prefix decrement: ";
    --counter;
    counter.display();

    // Postfix decrement
    cout << "Value returned by postfix decrement: ";
    Counter oldDecrementValue = counter--;
    oldDecrementValue.display();

    // Display value after postfix decrement
    cout << "Counter after postfix decrement: ";
    counter.display();

    return 0;
}
