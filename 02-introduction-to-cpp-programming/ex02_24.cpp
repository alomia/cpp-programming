// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.24 - Odd or Even
#include <iostream>

using namespace std;

int main() {
    int number{0};

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Is even" << endl;
    }

    if (number % 2 != 0) {
        cout << "Is odd" << endl;
    }
}
