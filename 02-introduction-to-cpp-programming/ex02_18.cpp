// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.18 - Comparing Integers
#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};

    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    if (number1 > number2) {
        cout << number1 << " is larger." << endl;
    }
    else if (number2 > number1) {
        cout << number2 << " is larger." << endl;
    }
    else {
        cout << "These numbers are equal." << endl;
    }
}
