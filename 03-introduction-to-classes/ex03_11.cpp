// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Exercise 3.11 - Employee Class
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    int salary{0};

    Employee christopher("Christopher", "Hart", 5400);
    Employee daenerys("Daenerys", "Targaryen", 7380);

    cout << "* * * E M P L O Y E E S * * *" << endl << endl;
    cout << "First Name: " << christopher.getFirstName() << endl;
    cout << "Last Name: " << christopher.getLastName() << endl;
    cout << "Monthly salary: " << "$" << christopher.getMonthlySalary() << endl;
    cout << "Annual salary: " << "$" << christopher.getAnnualSalary() << endl;

    cout << endl << endl;

    cout << "First Name: " << daenerys.getFirstName() << endl;
    cout << "Last Name: " << daenerys.getLastName() << endl;
    cout << "Monthly salary: " << "$" << daenerys.getMonthlySalary() << endl;
    cout << "Annual salary: " << "$" << daenerys.getAnnualSalary() << endl;

    cout << endl << "* * * 10\% S A L A R Y   I N C R E A S E   F O R   E M P L O Y E E S * * *" << endl << endl;

    salary = christopher.getMonthlySalary();
    christopher.setMonthlySalary(salary + (salary * 10 / 100));
    
    cout << "First Name: " << christopher.getFirstName() << endl;
    cout << "Last Name: " << christopher.getLastName() << endl;
    cout << "Monthly salary: " << "$" << christopher.getMonthlySalary() << endl;
    cout << "Annual salary: " << "$" << christopher.getAnnualSalary() << endl;

    cout << endl << endl;

    salary = daenerys.getMonthlySalary();
    daenerys.setMonthlySalary(salary + (salary * 10 / 100));

    cout << "First Name: " << daenerys.getFirstName() << endl;
    cout << "Last Name: " << daenerys.getLastName() << endl;
    cout << "Monthly salary: " << "$" << daenerys.getMonthlySalary() << endl;
    cout << "Annual salary: " << "$" << daenerys.getAnnualSalary() << endl;
}
