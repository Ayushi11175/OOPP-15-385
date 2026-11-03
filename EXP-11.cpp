//11. Develop a program to demonstrate function overloading for performing operations on different data 
//types. 
#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function for adding integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function for adding floating-point numbers
    float add(float a, float b)
    {
        return a + b;
    }

    // Function for adding three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator c;

    cout << "Addition of two integers: "
         << c.add(30, 20) << endl;

    cout << "Addition of two floats: "
         << c.add(20.5f, 20.3f) << endl;

    cout << "Addition of three integers: "
         << c.add(50, 20, 30) << endl;

    return 0;
}