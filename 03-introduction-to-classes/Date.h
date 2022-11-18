// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Date Class
#include <iostream>

class Date {
    public:
        Date(int dateMonth, int dateDay, int dateYear) {
            if (dateMonth > 1 && dateMonth < 13) {
                month = dateMonth;
            }

            if (dateDay > 1 && dateDay < 31) {
                day = dateDay;
            }

            if (dateYear > 1) {
                year = dateYear;
            }
        }

        void displayDate() {
            if (month < 10) {
                std::cout << 0;
            }

            std::cout << month << "/";

            if (day < 10) {
                std::cout << 0;
            }

            std::cout << day << "/" << year << std::endl;
        }

        int getMonth() const {
            return month;
        }

        void setMonth(int dateMonth) {
            month = dateMonth;
        }

        int getDay() const {
            return day;
        }

        void setDay(int dateDay) {
            day = dateDay;
        }

        int getYear() const {
            return year;
        }

        void setYear(int dateYear) {
            year = dateYear;
        }
    private:
        int month{1};
        int day{1};
        int year{1};
};
