// Question 3 — Complex Number and Operator Overloading
// Question:

// Write a complete C++ program that defines a class Complex with private data members real and imag of type double.

// Provide a parameterized constructor with default arguments (0.0, 0.0).
// Overload the binary + operator as a member function to add two Complex objects.
// Implement a member function display() to print the complex number in the form a + bi or a - bi if the imaginary part is negative.

// In main():

// Instantiate two objects: C1 = 3.5 + 2.5i and C2 = 1.2 + 4.3i.
// Compute their sum using the overloaded operator: C3 = C1 + C2.
// Display C1, C2, and C3.
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Parameterized constructor with default arguments
    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator+(const Complex& c) {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    // Display function
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {

    // Creating two Complex objects
    Complex C1(3.5, 2.5);
    Complex C2(1.2, 4.3);

    // Adding using overloaded + operator
    Complex C3 = C1 + C2;

    // Displaying results
    cout << "C1 = ";
    C1.display();

    cout << "C2 = ";
    C2.display();

    cout << "C3 = ";
    C3.display();

    return 0;
}