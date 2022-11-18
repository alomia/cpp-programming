// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.28 - Digits of an Integer
#include <iostream>

using namespace std;

int main() {
    int number{0};

    int first_digit{0};
    int second_digit{0};
    int third_digit{0};
    int fourth_digit{0};

    cout << "Enter a five-digit integer: ";
    cin >> number;

    first_digit = number / 10000;
    number = number % 10000;

    second_digit = number / 1000;
    number = number % 1000;

    third_digit = number / 100;
    number = number % 100;

    fourth_digit = number / 10;
    number = number % 10;

    cout << first_digit << " " << second_digit << " " << third_digit << " " << fourth_digit << " " << number << endl;
}
