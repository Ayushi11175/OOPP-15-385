#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    
    Point(int x, int y) : x{x}, y{y} {}

    
    friend Point operator+(Point p1, Point p2);

    
    void show() {
        cout << x << "," << y << endl;
    }
};


Point operator+(Point p1, Point p2) {
    Point temp(p1.x + p2.x, p1.y + p2.y);
    return temp;
}

int main() {
    Point p1(10, 20);
    Point p2(30, 40);

    Point p3 = p1 + p2;

    p3.show();

    return 0;
}