#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    
    Point(int x, int y) : x{x}, y{y} {}

    
    friend Point operator+(Point p1, Point p2);

    
    friend ostream& operator<<(ostream& os, Point p);
};

Point operator+(Point p1, Point p2) {
    Point temp(p1.x + p2.x, p1.y + p2.y);
    return temp;
}


ostream& operator<<(ostream& os, Point p) {
    os << p.x << "," << p.y;
    return os;
}

int main() {
    Point p1(10, 20);
    Point p2(30, 40);

    Point p3 = p1 + p2;

    cout << p3 << endl;

    return 0;
}