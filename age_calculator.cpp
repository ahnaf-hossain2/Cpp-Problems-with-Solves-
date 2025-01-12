// Write a function that takes your date of birth in YYYY, MM and DD format 
// (separated by spaces) as input as well as the current date, in same format, and
// calculates your age in years, months and days. You must check for leap years also. 
// Write a separate function to check for leap year.

#include <iostream>
using namespace std;

bool Is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int Days_In_Month(int year, int month) {
    if (month == 2) {
        if ((Is_leap_year)(year))
        return 29;
        else
            return 28;
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

void Age_calculator(int y1, int y2, int m1, int m2, int d1, int d2) {
    if (y1 > y2 || (y1==y2 && m1>m2) || (y1==y2 && m1 == m2 && d1 > d2)) {
        cout << "Invalid date of birth." << endl;
    }

    int years = y2 - y1;
    int months = m2 - m1;
    int days = d2 - d1;

    // // Adjust for negative days
    // if (days < 0) {
    //     months -= 1;
    //     days += Days_In_Month(y2, (m2 == 1 ? 12 : m2 - 1));
    // }

    // // Adjust for negative months
    // if (months < 0) {
    //     years -= 1;
    //     months += 12;
    // }

    cout << "Your age is " << years << " years, " << months << " months, and " << days << " days." << endl;
}

int main () {
    int y1, y2, m1, m2, d1, d2;
    cout << "Enter your date of birth in YYYY MM DD format: ";
    cin >> y1 >> m1 >> d1;
    cout << "Enter the current date in YYYY MM DD format: ";
    cin >> y2 >> m2 >> d2;
    Age_calculator(y1, y2, m1, m2, d1, d2);
    
    
    if (Is_leap_year(y1)) {
        cout << y1 << " was a leap year." << endl;
    } else {
        cout << y1 << " was not a leap year." << endl;
    }

    if (Is_leap_year(y2)) {
        cout << y2 << " is a leap year." << endl;
    } else {
        cout << y2 << " is not a leap year." << endl;
    }

}