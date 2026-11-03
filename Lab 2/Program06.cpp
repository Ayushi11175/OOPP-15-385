//6. Pointer – newSalary

//Question: Create a variable salary, assign some value, create a pointer newSalary to store the
// address of salary, update salary by 10% using newSalary, and show the value of salary from the
// old variable. 
#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;

    // Pointer stores address of salary
    float *newSalary = &salary;

    // Increase salary by 10% using pointer
    *newSalary = *newSalary + (*newSalary * 10 / 100);

    cout << "Updated Salary = " << salary << endl;

    return 0;
}