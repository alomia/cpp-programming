// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.16 - Arithmetic
#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};

    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    cout << "Sum is " << number1 + number2 << endl;
    cout << "Product is " << number1 * number2 << endl;
    cout << "Difference is " << number1 - number2 << endl;
    cout << "Quotient is " << number1 / number2 << endl;
}
