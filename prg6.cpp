#include<iostream>

using namespace std;
class point {
    private:
    int x,y;
    public:
    //  point() 
    // {
    //     x=y=0;
    // }
    //list intialization
    point() : x{0}, y{0} {
        cout<<"Default Constructor"<<endl;
    }
       
    point(int p=0, int q=0) : x{p}, y{q} {
         cout<<"Parametrized Constructor"<<endl;
    }

    //name list object creation
     point add(point p)
     {
        // point temp;
        // temp.x = x + p.x;
        // temp.y = y + p.y;
        // return temp;
        //OR
        return point(x + p.x, y + p.y);
     }
     void add(point p, point q)
{
    x = p.x + q.x;
    y = p.y + q.y;
}
    
    void show(){
        cout << x <<","<< y <<endl;
    }
    
};


int main(){
    point p, q(20,50);
    point r = q;
   //  p.show();
    q.show();
    // point r = p.add(q);
    r.show();
    // r.add(p,q);
    // r.show();

return 0;
}