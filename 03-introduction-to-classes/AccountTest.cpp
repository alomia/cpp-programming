#include <iostream>
#include "Account.h"


using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Brown", -7};

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;

    cout << endl << "Enter deposit amount for account1: ";
    int depositAmount;
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
        << account2.getBalance() << endl;
}
