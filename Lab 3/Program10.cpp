//10. Point Class — Inline Functions Defined Outside Class

//Question: Update Program No. 3. The input() and show() functions should be defined outside the class 
//as inline functions.
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    inline void input();
    inline void show();
};

// Inline function defined outside the class
inline void Point::input()
{
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;
}

// Inline function defined outside the class
inline void Point::show()
{
    cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
    Point p1, p2;

    cout << "Enter Point 1:\n";
    p1.input();

    cout << "\nEnter Point 2:\n";
    p2.input();

    cout << "\nPoint 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}