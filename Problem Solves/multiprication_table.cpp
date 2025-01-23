// Print the multiplication table of 15 using function


#include <iostream>
using namespace std;

void MultiplicationTable(int number) {
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int number = 15;
    MultiplicationTable(number);
    
}