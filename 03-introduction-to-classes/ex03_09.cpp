// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Exercise 3.9 - Modified Account Class
#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    int depositAmount;
    int withdrawAmmount;

    Account account1{"Jane Green", 50};
    Account account2{"John Brown", -7};

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;

    cout << endl << "Enter deposit amount for account1: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance" << endl << endl;
    account1.deposit(depositAmount);

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;
    
    cout << endl << "Enter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance" << endl << endl;
    account2.deposit(depositAmount);

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl << endl;
    
    cout << "Enter withdraw amount for account1: ";
    cin >> withdrawAmmount;
    cout << "deduction " << withdrawAmmount << " to account1 balance" << endl;
    account1.withdraw(withdrawAmmount);
    cout << endl;

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl << endl;
    
    cout << "Enter withdraw amount for account2: ";
    cin >> withdrawAmmount;
    cout << "deduction " << withdrawAmmount << " to account2 balance" << endl;
    account2.withdraw(withdrawAmmount);
    cout << endl;

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl << endl;
}
