// 8. Call by Value, Reference and Address

// Question: Develop a program to demonstrate parameter passing techniques (call by value,
// reference, and address) and analyze their effects on variable modification.
#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call By Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call By Reference: " << x << endl;
}

// Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call By Address: " << *x << endl;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Before Call By Value: " << a << endl;
    callByValue(a);
    cout << "After Call By Value: " << a << endl;

    cout << "\nBefore Call By Reference: " << b << endl;
    callByReference(b);
    cout << "After Call By Reference: " << b << endl;

    cout << "\nBefore Call By Address: " << c << endl;
    callByAddress(&c);
    cout << "After Call By Address: " << c << endl;

    return 0;
}