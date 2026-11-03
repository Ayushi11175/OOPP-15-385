// 4. Time Class with hh, mm, and ss

//Question: Create a class Time having hh, mm, and ss. Create an input method that takes values
// as parameters and sets the corresponding variables. Create another method show() that prints 
//the value in hh:mm:ss. Create any two objects in main and call input and show methods respectively.
#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    void input(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }

    void show()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main()
{
    Time t1, t2;

    t1.input(10, 30, 45);
    t2.input(12, 20, 35);

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}