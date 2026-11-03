//12. Function Overloading — Calculate Area

//Question: Implement function overloading as given specifications:

//Calculate the area of:

//Circle
//Rectangle
//Square
//Triangle
#include <iostream>
using namespace std;

class Area
{
public:

    // Area of Circle
    double area(double radius)
    {
        return 3.14159 * radius * radius;
    }

    // Area of Rectangle
    double area(double length, double width)
    {
        return length * width;
    }

    // Area of Square
    int area(int side)
    {
        return side * side;
    }

    // Area of Triangle
    double area(double base, double height, bool triangle)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Area a;

    double radius;
    double length, width;
    int side;
    double base, height;

    cout << "Enter radius of Circle: ";
    cin >> radius;

    cout << "Area of Circle = "
         << a.area(radius) << endl;


    cout << "\nEnter length and width of Rectangle: ";
    cin >> length >> width;

    cout << "Area of Rectangle = "
         << a.area(length, width) << endl;


    cout << "\nEnter side of Square: ";
    cin >> side;

    cout << "Area of Square = "
         << a.area(side) << endl;


    cout << "\nEnter base and height of Triangle: ";
    cin >> base >> height;

    cout << "Area of Triangle = "
         << a.area(base, height, true) << endl;

    return 0;
}