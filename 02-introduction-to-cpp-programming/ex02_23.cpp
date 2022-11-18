// Chapter 2 - Introduction to C++ Programming, Input/Output and Operators
// Exercise 2.23 - Largest and Smallest Integers
#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};
    int number3{0};
    int number4{0};
    int number5{0};

    int largest{0};
    int smallest{0};

    cout << "Enter five integers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    // Determine what is the largest number
    if (number1 > number2) {
        if (number1 > number3) {
            if (number1 > number4) {
                if (number1 > number5) {
                    largest = number1;
                }
            }
        }
    }

    if (number2 > number1) {
        if (number2 > number3) {
            if (number2 > number4) {
                if (number2 > number5) {
                    largest = number2;
                }
            }
        }
    }

    if (number3 > number1) {
        if (number3 > number2) {
            if (number3 > number4) {
                if (number3 > number5) {
                    largest = number3;
                }
            }
        }
    }

    if (number4 > number1) {
        if (number4 > number2) {
            if (number4 > number3) {
                if (number4 > number5) {
                    largest = number4;
                }
            }
        }
    }

    if (number5 > number1) {
        if (number5 > number2) {
            if (number5 > number3) {
                if (number5 > number4) {
                    largest = number5;
                }
            }
        }
    }

    // Determine what is the smallest number
    if (number1 < number2) {
        if (number1 < number3) {
            if (number1 < number4) {
                if (number1 < number5) {
                    smallest = number1;
                }
            }
        }
    }

    if (number2 < number1) {
        if (number2 < number3) {
            if (number2 < number4) {
                if (number2 < number5) {
                    smallest = number2;
                }
            }
        }
    }

    if (number3 < number1) {
        if (number3 < number2) {
            if (number3 < number4) {
                if (number3 < number5) {
                    smallest = number3;
                }
            }
        }
    }

    if (number4 < number1) {
        if (number4 < number2) {
            if (number4 < number3) {
                if (number4 < number5) {
                    smallest = number4;
                }
            }
        }
    }

    if (number5 < number1) {
        if (number5 < number2) {
            if (number5 < number3) {
                if (number5 < number4) {
                    smallest = number5;
                }
            }
        }
    }

    cout << "Largest is " << largest << endl;
    cout << "Smallest is " << smallest << endl;
}
