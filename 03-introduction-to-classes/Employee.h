// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Employee Class
#include <string>


class Employee {
    public:
        Employee(std::string employeeFirstName, std::string employeeLastName, int employeeMonthlySalary)
        : firstName{employeeFirstName}, lastName{employeeLastName} {

            if (employeeMonthlySalary > 0) {
                monthlySalary = employeeMonthlySalary;
            }
        }
        
        int getAnnualSalary() const {
            return monthlySalary * 12;
        }

        std::string getFirstName() const {
            return firstName;
        }

        void setFirstName(std::string employeeFirstName) {
            firstName = employeeFirstName;
        }

        std::string getLastName() const {
            return lastName;
        }

        void setLastName(std::string employeeLastName) {
            lastName = employeeLastName;
        }

        int getMonthlySalary() const {
            return monthlySalary;
        }

        void setMonthlySalary(int employeeMonthlySalary) {
            monthlySalary = employeeMonthlySalary;
        }
    private:
        std::string firstName;
        std::string lastName;
        int monthlySalary{0};
};
