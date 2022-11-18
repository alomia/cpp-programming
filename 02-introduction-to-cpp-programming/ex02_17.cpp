// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.17 - Printing
#include <iostream>

using namespace std;

int main() {
    // Using one statement with one stream insertion operator.
    cout << 1234 << endl;

    // Using one statement with four stream insertion operators
    cout << 1 << 2 << 3 << 4 << endl;

    // Using four statements
    cout << 1;
    cout << 2;
    cout << 3;
    cout << 4;
    cout << endl;
}
