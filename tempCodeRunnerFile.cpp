 //04. Write a program using modern C++ features such as auto and range-based for loop to traverse and 
 
 //display elements of a collection. 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of Vector:" << endl;

    // Range-Based For Loop with auto
    for (auto num : numbers)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}