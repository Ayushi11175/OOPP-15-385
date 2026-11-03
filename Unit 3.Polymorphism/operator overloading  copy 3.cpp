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

    // int + Comp
    friend Comp operator+(int x, Comp c);
};

// Definition of friend function
Comp operator+(int x, Comp c)
{
    return Comp(x + c.real, c.img);
}

int main()
{
    Comp c1(5, 20);
    int x = 10;

    cout << "Complex number: ";
    c1.show();

    Comp c3 = x + c1;

    cout << "After adding integer: ";
    c3.show();

    return 0;
}