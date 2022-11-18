// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Exercise 3.10 - Invoice Class
#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice hammer("43FG1936IW", "Hammer", 10, 7);
    Invoice drillMachine("AG4K8045LM", "Drill Machine", 2, 96);
    Invoice circularSaw("54E6TY58ND", "Circular Saw", 15, 120);
    Invoice crowbar("DHR75AH6E2", "Crowbar", 26, 42);

    cout << "* * * I N V O I C E * * *" << endl << endl;

    cout << "Part Number: " << hammer.getPartNumber() << endl;
    cout << "Part Description: " << hammer.getPartDescription() << endl;
    cout << "Quantity: " << hammer.getQuantity() << endl;
    cout << "Price: " << "$" << hammer.getPrice() << endl;
    cout << "Invoice amount: " <<"$" << hammer.getInvoiceAmount() << endl;

    cout << endl << endl;

    cout << "Part Number: " << drillMachine.getPartNumber() << endl;
    cout << "Part Description: " << drillMachine.getPartDescription() << endl;
    cout << "Quantity: " << drillMachine.getQuantity() << endl;
    cout << "Price: " << "$" << drillMachine.getPrice() << endl;
    cout << "Invoice amount: " <<"$" << drillMachine.getInvoiceAmount() << endl;

    cout << endl << endl;

    cout << "Part Number: " << circularSaw.getPartNumber() << endl;
    cout << "Part Description: " << circularSaw.getPartDescription() << endl;
    cout << "Quantity: " << circularSaw.getQuantity() << endl;
    cout << "Price: " << "$" << circularSaw.getPrice() << endl;
    cout << "Invoice amount: " <<"$" << circularSaw.getInvoiceAmount() << endl;

    cout << endl << endl;

    cout << "Part Number: " << crowbar.getPartNumber() << endl;
    cout << "Part Description: " << crowbar.getPartDescription() << endl;
    cout << "Quantity: " << crowbar.getQuantity() << endl;
    cout << "Price: " << "$" << crowbar.getPrice() << endl;
    cout << "Invoice amount: " <<"$" << crowbar.getInvoiceAmount() << endl;
}
