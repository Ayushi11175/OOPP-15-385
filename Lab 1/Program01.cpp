// 1. Store details of any two students
// Question: Write a program to store details of any two students such as name, roll, branch.
//  Take input from user and show their details.
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void show()
    {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << roll;
        cout << "\nBranch: " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\n--- Student 1 Details ---";
    s1.show();

    cout << "\n--- Student 2 Details ---";
    s2.show();

    return 0;
}