// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.25 - Multiples
#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};

    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    if (number1 % number2 == 0) {
        cout << number1 << " is a multiple of " << number2 << endl;
    }

    if (number1 % number2 != 0) {
        cout << number1 << " is not a multiple of " << number2 << endl;
    }
}
