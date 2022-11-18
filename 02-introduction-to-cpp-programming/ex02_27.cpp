// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.27 - Integer Equivalent of a Character
#include <iostream>

using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    cout << "Equivalent integer is " << static_cast<int>(character) << endl;
}
