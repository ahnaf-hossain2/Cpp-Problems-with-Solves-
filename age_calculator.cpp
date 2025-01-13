// Write a function that takes your date of birth in YYYY, MM and DD format 
// (separated by spaces) as input as well as the current date, in same format, and
// calculates your age in years, months and days. You must check for leap years also. 
// Write a separate function to check for leap year.


#include <iostream>
using namespace std;

void checkLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is not a leap year.\n";
    }
}

void ageCalculator(int year1, int month1, int day1, int year2, int month2, int day2) {
    int ageDay, ageMonth, ageYear = 0;

    // TODO: check for invalid input, not use &&, Don't do this mistake.
    if (day1 < 1 || day1 > 31 || day2 < 1 || day2 >31 || month1 < 1 || month1 > 12 || month2 < 1 || month2 > 12 || year1 < 0 && year2 < 0) {
        cout << "Invalid input. Please enter valid date, month & year." << endl;
    }
    else {
        ageYear = year2 - year1;
    }

    if (day1 > day2) {
        ageDay = (day2 + 30) - day1;
        --month2;
    } else {
        ageDay = day2 - day1;
    }

    if (month1 > month2) {
        ageMonth = (month2 + 12) - month1;
        --ageYear;
    } else {
        ageMonth = month2 - month1;
    }

    cout << "Your age is: " << ageYear << " years, " << ageMonth << " months and " << ageDay << " days." << endl;
}

int main( ) {
    int year1, year2, month1, month2, day1, day2;
    cout << "***********************************" << endl;
    cout << "*         Age Calculator          *" << endl;
    cout << "***********************************" << endl;
    cout << "Enter your date of birth (YYYY MM DD): ";
    cin >> year1 >> month1 >> day1;
    cout << "Enter the current date (YYYY MM DD): ";
    cin >> year2 >> month2 >> day2;
    ageCalculator(year1, month1, day1, year2, month2, day2);
    checkLeapYear(year1);
    checkLeapYear(year2);
    return 0;
}