// Question 2 — Basic to Class and Class to Basic Conversion
// Question:

// Design a C++ class Currency:

// Implement a conversion constructor to perform Basic-to-Class conversion that initializes rupees and paise from a float value.
// Example: 125.75f → 125 rupees and 75 paise.
// Implement an overloaded casting operator operator float() to perform Class-to-Basic conversion, returning the combined monetary value as a single floating-point number.
#include <iostream>
using namespace std;

class Currency {
private:
    int rupees;
    int paise;

public:

    // Conversion constructor: Basic to Class
    Currency(float amount) {
        rupees = (int)amount;
        paise = (int)((amount - rupees) * 100 + 0.5);
    }

    // Class to Basic conversion
    operator float() {
        return rupees + paise / 100.0f;
    }

    void display() {
        cout << "Rupees: " << rupees << endl;
        cout << "Paise: " << paise << endl;
    }
};

int main() {

    // Basic to Class conversion
    float amount = 125.75f;

    Currency c = amount;

    cout << "Currency Object:" << endl;
    c.display();

    // Class to Basic conversion
    float value = c;

    cout << "\nConverted Float Value: " << value << endl;

    return 0;
}