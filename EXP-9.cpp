//09. Design a program using pointers to objects and arrays of objects to manage dynamic data
// structures. 
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic array of objects
    Student* students = new Student[n];

    // Input using pointer to objects
    Student* ptr = students;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        (ptr + i)->input();
    }

    cout << "\n===== Student Details =====\n";

    for (int i = 0; i < n; i++) {
        (ptr + i)->display();
    }

    // Free dynamically allocated memory
    delete[] students;

    return 0;
}