//07.Implement a program using static members and friend functions to illustrate shared data and 
//controlled access. 
#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    static int totalStudents;   // Shared by all objects

public:
    Student(int i)
    {
        id = i;
        totalStudents++;
    }

    // Friend function declaration
    friend void display(Student s);

    // Static member function
    static void showTotal()
    {
        cout << "Total Students: " << totalStudents << endl;
    }
};

// Static member initialization
int Student::totalStudents = 0;

// Friend function definition
void display(Student s)
{
    cout << "Student ID: " << s.id << endl;
}

int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);

    display(s1);
    display(s2);
    display(s3);

    Student::showTotal();

    return 0;
}