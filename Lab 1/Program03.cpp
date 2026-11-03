// 3. Point Class with Input and Show Methods

//Question: Create a class Point having x and y. Create two methods input() and show().
 //Input method should take values of x and y from keyboard and show method should print them.
 // Create any two objects in main and call input and show methods respectively.
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    void input()
    {
        cout << "Enter x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;
    }

    void show()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    Point p1, p2;

    cout << "Enter details of Point 1:\n";
    p1.input();

    cout << "\nEnter details of Point 2:\n";
    p2.input();

    cout << "\nPoint 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}