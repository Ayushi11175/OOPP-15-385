// 7. Update and Print Value Using Function

//Question: Write program number 5 and 6 with the help of function. The function will update the
// value and print should be in the main() method.
#include <iostream>
using namespace std;

void updateSalary(float &salary)
{
    salary = salary + (salary * 10 / 100);
}

int main()
{
    float salary = 50000;

    updateSalary(salary);

    cout << "Updated Salary = " << salary << endl;

    return 0;
}