//04. Write a program using modern C++ features such as auto and range-based for loop to traverse and 
 
 //display elements of a collection. 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a collection (vector) of integers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Range-based for loop using auto
    for (auto element : numbers) {
        cout << element << " ";
    }

    return 0;
}