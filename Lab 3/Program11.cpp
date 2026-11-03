//11. Inline Functions, Default Arguments and Function Overloading

//Question: Implement a program to demonstrate:

//Inline functions
//Default arguments
//Function overloading
//for arithmetic operations.
#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b)
{
    return a + b;
}

// Function with default argument
int multiply(int a, int b = 1)
{
    return a * b;
}

// Function overloading
int calculate(int a, int b)
{
    return a - b;
}

double calculate(double a, double b)
{
    return a / b;
}

int main()
{
    int a = 20, b = 10;

    // Inline function
    cout << "Addition = " << add(a, b) << endl;

    // Default argument
    cout << "Multiplication = " << multiply(a) << endl;
    cout << "Multiplication = " << multiply(a, b) << endl;

    // Function overloading
    cout << "Subtraction = " << calculate(a, b) << endl;
    cout << "Division = " << calculate(20.0, 10.0) << endl;

    return 0;
}