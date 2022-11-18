// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Exercise 3.13 - Removing Duplicated Code in the main Function
#include <iostream>
#include "Account.h"

using namespace std;

void displayAccount(Account accountToDisplay) {
    cout << accountToDisplay.getName() << " balance is $"
        << accountToDisplay.getBalance();
}

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: "; displayAccount(account1);

    cout << "\naccount2: "; displayAccount(account2);
    
    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: "; displayAccount(account1);
    cout << "\naccount2: "; displayAccount(account2);
    
    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);
    
    cout << "\n\naccount1: "; displayAccount(account1);
    cout << "\naccount2: "; displayAccount(account2);
    cout << endl;
}
