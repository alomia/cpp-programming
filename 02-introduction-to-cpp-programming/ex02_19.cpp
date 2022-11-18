// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.19 - Arithmetic, Smallest and Largest
#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};
    int number3{0};
    int smallest{0};
    int largest{0};

    cout << "Input three different integers: ";
    cin >> number1 >> number2 >> number3;

    if (number1 < number2 && number1 < number3) {
        smallest = number1;
    }
    else if (number2 < number1 && number2 < number3) {
        smallest = number2;
    }
    else {
        smallest = number3;
    }

    if (number1 > number2 && number1 > number3) {
        largest = number1;
    }
    else if (number2 > number1 && number2 > number3) {
        largest = number2;
    }
    else {
        largest = number3;
    }

    cout << "Sum is " << number1 + number2 + number3 << endl;
    cout << "Average is " << (number1 + number2 + number3) / 3 << endl;
    cout << "Product is " << number1 * number2 * number3 << endl;
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;
}
