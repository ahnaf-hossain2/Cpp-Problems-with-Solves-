// Write a program that takes as input your gross salary and your total saving and uses another 
// function named taxCalculator() to calculate your tax. The taxCalculator() function takes as 
// parameters the gross salary as well as the total savings amount. The tax is calculated as follows:
// (a) The savings is deducted from the gross income to calculate the taxable income. The 
// maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.
// (b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 
// tax is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000 the net 
// tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income 
// exceeding 200,000 (Slab 2); if its more than 500,000, then the tax is tax from Slab 0, 
// Slab 1, Slab 2 and 30% of the amount exceeding 500,000.

/* Example:
Gross salary : 500,000
Total savings: 150,000 (But the maximum deduction is 100,000)
Taxable income = (Gross Salary - Deductible Savings) = 500,000 - 100,000 = 400,000
*/


#include <iostream>
using namespace std;

double TaxCalculator(double gross_salary, double total_savings) {
    if ( total_savings > 100000) {
        total_savings = 100000;
    }
    double Taxable_income = gross_salary - total_savings;
    double tax = 0;
    if (Taxable_income <= 100000) {
        tax = 0;
    } else if (Taxable_income > 100000 && Taxable_income <= 200000) {
        tax = 0 + 0.1 * (Taxable_income - 100000);
    }
}