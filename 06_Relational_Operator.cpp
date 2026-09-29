// Concept 6: Relational Operator Overloading
// Aim: To overload the > and == operators.

#include <iostream>

using namespace std;

// Create Distance class
class Distance
{
private:
    // Store distance in meters
    int meters;

public:
    // Constructor
    Distance(int value)
    {
        meters = value;
    }

    // Overload greater-than operator
    bool operator>(const Distance& other) const
    {
        return meters > other.meters;
    }

    // Overload equality operator
    bool operator==(const Distance& other) const
    {
        return meters == other.meters;
    }

    // Display distance
    void display() const
    {
        cout << meters << " meters" << endl;
    }
};

int main()
{
    // Create first distance
    Distance first(120);

    // Create second distance
    Distance second(90);

    // Display first distance
    cout << "First distance: ";
    first.display();

    // Display second distance
    cout << "Second distance: ";
    second.display();

    // Compare using >
    if (first > second)
    {
        cout << "First distance is greater" << endl;
    }
    else
    {
        cout << "Second distance is greater or equal" << endl;
    }

    // Compare using ==
    if (first == second)
    {
        cout << "Both distances are equal" << endl;
    }
    else
    {
        cout << "Distances are not equal" << endl;
    }

    return 0;
}
