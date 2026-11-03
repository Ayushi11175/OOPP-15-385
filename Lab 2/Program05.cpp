// 5. Reference Variable – newSalary

//Question: Create a variable salary, assign some value, create another reference variable newSalary 
//that stores the reference of salary, update the salary by 10%, and show the value of salary from 
//the old variable.
#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;

    // Reference variable
    float &newSalary = salary;

    // Increase salary by 10%
    newSalary = newSalary + (newSalary * 10 / 100);

    cout << "Updated Salary = " << salary << endl;

    return 0;
}