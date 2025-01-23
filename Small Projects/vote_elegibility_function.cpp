// A person is eligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is eligible to vote.

#include <iostream>
using namespace std;

int VoteEligibility(int x) {
    if ( x >= 18 ) {
        return 0;
    }
    else {
        return 1;
    }

}

int main() {
    int age;

    cout << "Enter the age here: ";
    cin >> age;
    int Check = VoteEligibility(age);

    if (Check == 0) // be aware of equal = and double equal == sign
        cout << "You are eligible to vote.";
    if (Check == 1)
        cout << "You are not eligible to vote.";
}