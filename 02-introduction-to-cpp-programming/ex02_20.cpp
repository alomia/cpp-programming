// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.20 - Diameter, Circumference and Area of a Circle
#include <iostream>

using namespace std;

int main() {
    const double PI{3.14159};
    int radius{0};

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Diameter is " << radius * 2 << endl;
    cout << "Circumference is " << PI * (radius * 2) << endl;
    cout << "Area is " << PI * (radius * radius) << endl;
}
