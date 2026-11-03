#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    
    Point(int x=0, int y=0) : x{x}, y{y} {}

    Point operator+(Point p) {
        Point (x + p.x, y + p.y);
        return;
    }
   
    
    void show() {
        cout << x << "," << y << endl;
    }
};

int main() {
    Point p1(10, 20);
    Point p2(30, 40);
    
    Point p3 = p1 + p2;

    p3.show();


    return 0;
}