// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Exercise 3.12 - Date Class
#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date dateBirth(5, 3, 1998);
    cout << "I was born on "; dateBirth.displayDate();

    cout << endl << "Update date of birth..." << endl;
    dateBirth.setMonth(21);
    dateBirth.setDay(9);
    dateBirth.setYear(2005);

    cout << "Month: " << dateBirth.getMonth() << endl;
    cout << "Day: " << dateBirth.getDay() << endl;
    cout << "Year: " << dateBirth.getYear() << endl << endl;


    cout << "I was born on "; dateBirth.displayDate();
}
