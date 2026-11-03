// 2. Student Record System using Classes and Objects

// Question: Design a program to convert a procedural implementation of a student record system
// into an object-oriented approach using classes and objects.
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float marks;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n--- Student Record ---";
        cout << "\nName: " << name;
        cout << "\nRoll No: " << roll;
        cout << "\nMarks: " << marks << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\nStudent 1:";
    s1.display();

    cout << "\nStudent 2:";
    s2.display();

    return 0;
}