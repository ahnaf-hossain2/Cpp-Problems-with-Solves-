// Write a program to print the circumference and area of a circle of radius entered by the user by defiing your own function.

#include <iostream>
#include <cmath>
using namespace std;

double Circumference(double r) {
    return 2 * 3.14159 * r;
}
double Area(double r) {
    return 3.14159 * pow(r,2);
}

int main() {
    double radius; 
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    if (radius <= 0) {
        cout << "Invalid radius. Radius should be greater than 0." << endl;
        return 1;
    }
    
    cout << "Circumference: " << Circumference(radius) << endl;
    cout << "Area: " << Area(radius) << endl;
    
    return 0;
}