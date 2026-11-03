//9. Time Class — Functions Defined Outside the Class

//Question: Update Program No. 4. The input() and show() functions should be defined outside the class.
// The input() function can assign value 0 to both variables if the user doesn't provide any value in
// the input function.
#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    void input(int h = 0, int m = 0, int s = 0);
    void show();
};

// Function defined outside the class
void Time::input(int h, int m, int s)
{
    hh = h;
    mm = m;
    ss = s;
}

// Function defined outside the class
void Time::show()
{
    cout << hh << ":" << mm << ":" << ss << endl;
}

int main()
{
    Time t1, t2;

    t1.input(10, 30, 45);
    t2.input();   // Default values: 0, 0, 0

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}