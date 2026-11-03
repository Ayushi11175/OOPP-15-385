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

    //for Comp c3 = c1+c2;
    //c3.show();
    // Comp operator+(Comp c)
    // {
    //     return Comp(real + c.real, img + c.img);
                //or//

        //int r = this real +c.real;
        //int i = this img +c.img;
        //comp t(r,i);
        //return t;
               //or//
        //return Comp(this->real + c.real, this->img + c.img);  

       
        

};   


int main()
{
    // Comp c1{3, 4};
    // Comp c2{2, 5};

    // Comp c3 = c1 + c2;

    // cout << "First complex number: ";
    // c1.show();

    // cout << "Second complex number: ";
    // c2.show();

    // cout << "Sum: ";
    // c3.show();

    // return 0;
     Comp c1(5,20);
     Comp c2(15,9); 
     c1.show();
     c2.show();
     //error Comp c3=c1+c2;
        //c3.show();


}