// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Exercise 3.14 - C++11 List Initializers
#include <string>

class Account {
    public:
        Account(unsigned int accountNumber, std::string accountFirstName, std::string accountLastName, double accountBalance)
            : accountNumber{accountNumber}, firstName{accountFirstName}, lastName{accountLastName}, balance{accountBalance} {

        }

        unsigned int getAccountNumber() const {
            return accountNumber;
        }
        
        void setAccountNumber(unsigned int numberAccount) {
            accountNumber = numberAccount;
        }

        std::string getFirstName() const {
            return firstName;
        }

        void setFirstName(std::string accountFirstName) {
            firstName = accountFirstName;
        }

        std::string getLastName() const {
            return lastName;
        }

        void setLastName(std::string accountLastName) {
            lastName = accountLastName;
        }

        double getBalance() const {
            return balance;
        }

        void setBalance( double accountBalance) {
            balance = accountBalance;
        }
    private:
        unsigned int accountNumber{0};
        std::string firstName;
        std::string lastName;
        double balance{0};
};
