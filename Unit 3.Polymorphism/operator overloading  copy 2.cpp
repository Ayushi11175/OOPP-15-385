#include <iostream>
using namespace std;

class Comp
{
    int real, img;

public:

    Comp(int r = 0, int i = 0) : real{r}, img{i} {}

    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }

    // Comp + int
    friend Comp operator+(Comp c, int x);
};

// Definition
Comp operator+(Comp c, int x)
{
    return Comp(c.real + x, c.img);
}

int main()
{
    Comp c1(5, 20);
    int x = 10;

    cout << "Complex number: ";
    c1.show();

    Comp c3 = c1 + x;

    cout << "After adding integer: ";
    c3.show();

    return 0;
}