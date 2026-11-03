#include <iostream>
using namespace std;

class Comp {
    int real, imag;
public:
    Comp(int r=0, int i=0){
        real=r; imag=i;
    }

    // For printing
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }

    // 1. Overload 5 + C2  => int + Comp
    // Must be friend function
    friend Comp operator+(int num, const Comp &c){
        return Comp(num + c.real, c.imag);
    }

    // 2. Overload ++C3  => Pre-increment
    Comp operator++(){
        ++real;
        ++imag;
        return *this;
    }

    // 3. Overload C3++  => Post-increment
    // int dummy argument is used to differentiate
    Comp operator++(int){
        Comp temp = *this;
        real++;
        imag++;
        return temp;
    }
};

int main(){
    Comp C2(2, 3);
    
    Comp C3 = 5 + C2;  // calls friend operator+
    cout << "C3 = "; C3.display(); // 7 + 3i

    Comp C4 = ++C3;    // pre-increment
    cout << "C4 = ++C3 = "; C4.display(); // 8 + 4i
    cout << "After ++, C3 = "; C3.display();

    Comp C5 = C3++;    // post-increment
    cout << "C5 = C3++ = "; C5.display(); // 8 + 4i
    cout << "After C3++, C3 = "; C3.display(); // 9 + 5i

    return 0;
}