#include <iostream>
using namespace std;

class Comp
{
    int real, img;

public:

    // Constructor
    Comp(int r = 0, int i = 0) : real{r}, img{i} {}

    // Display function
    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }

    // Friend function for operator +
    friend Comp operator+(Comp c, Comp d);
};

// Definition of friend function
Comp operator+(Comp c, Comp d)
{
    return Comp(c.real + d.real, c.img + d.img);
}

int main()
{
    Comp c1(5, 20);
    Comp c2(15, 9);

    cout << "First complex number: ";
    c1.show();

    cout << "Second complex number: ";
    c2.show();

    // Adding two objects
    Comp c3 = c1 + c2;

    cout << "Sum: ";
    c3.show();

    return 0;
}