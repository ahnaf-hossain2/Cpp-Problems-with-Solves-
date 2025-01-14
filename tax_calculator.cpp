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

#include<iostream>
using namespace std;

void taxCalculator (float grossSalary, float totalSavings)
{
    float taxableIncome;
    float totalTax = 0;

    // Calculate taxable income after considering maximum deductible savings
    if (totalSavings > 100000)
    {
        taxableIncome = grossSalary - 100000;
    } else {
        taxableIncome = grossSalary - totalSavings;
    }

    // Calculate tax for income above 500,000 at 30%
    if (taxableIncome > 500000) {
        totalTax += (taxableIncome - 500000) * 0.3; // Slab 3
        taxableIncome = 500000;
    }

    // Calculate tax for income above 200,000 and up to 500,000 at 20%
    if (taxableIncome > 200000) {
        totalTax += (taxableIncome - 200000) * 0.2; // Slab 2
        taxableIncome = 200000;
    }

    // Calculate tax for income above 100,000 and up to 200,000 at 10%
    if (taxableIncome > 100000) {
        totalTax += (taxableIncome - 100000) * 0.1; // Slab 1
        taxableIncome = 100000;
    }

    cout << "Total tax to be paid: " << totalTax << endl;
}

int main()
{
    float grossSalary, totalSavings;
    cout << "Enter your gross salary: ";
    cin >> grossSalary;
    cout << "Enter your total savings: ";
    cin >> totalSavings;
    taxCalculator(grossSalary, totalSavings);
    return 0;
}


/* Another way here:
// Tax slab calculations
    if (taxableIncome <= 100000) {
        tax = 0; // Slab 0
    } else if (taxableIncome <= 200000) {
        tax = 0.1 * (taxableIncome - 100000); // Slab 1
    } else if (taxableIncome <= 500000) {
        tax = 0.1 * 100000 + 0.2 * (taxableIncome - 200000); // Slab 2
    } else {
        tax = 0.1 * 100000 + 0.2 * 300000 + 0.3 * (taxableIncome - 500000); // Slab 3
    }
    return tax;
*/

/* Wrong way here:
float slab0 = 0, slab1 = 0, slab2 = 0, slab3 = 0;
    float totalTax = 0;
    if (taxableIncome <= 100000)
    {
        slab0 = 0; // Slab 0
    }
    if (taxableIncome > 100000 && taxableIncome <= 200000)
    {
        slab1 = ( taxableIncome - 100000 ) * 0.1; // Slab 1 = 10%
    }
    if (taxableIncome > 200000 && taxableIncome <= 500000)
    {
        slab2 = ( taxableIncome - 200000 ) * 0.2; // Slab 2 = 20%
    }
    if (taxableIncome > 500000 )
    {
        slab3 = ( taxableIncome - 500000 ) * 0.3; // 30%
    }
    totalTax = slab1 + slab2 + slab3;
*/