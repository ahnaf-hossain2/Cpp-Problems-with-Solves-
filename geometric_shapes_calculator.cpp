#include<iostream>
#include<cmath>
using namespace std;

float areaOfCircle(int radius) {
    return 3.14159 * pow(radius, 2);
}

float areaOfRectangle(int length, int width) {
    return length * width;
}

float areaOfTriangle(int base, int height) {
    return 0.5 * base * height;
}

float areaOfSquare(int side) {
    return pow(side, 2);
}

int main() {
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Calculate the Area of a Square" << endl;
    cout << "4. Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "The area of the circle is: " << areaOfCircle(radius) << endl;
            break;
        }
        case 2: {
            int length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "The area of the rectangle is: " << areaOfRectangle(length, width) << endl;
            break;
        }
        case 3: {
            int base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "The area of the triangle is: " << areaOfTriangle(base, height) << endl;
            break;
        }
        case 4: {
            int side;
            cout << "Enter the side of the square: ";
            cin >> side;
            cout << "The area of the square is: " << areaOfSquare(side) << endl;
            break;
        }
        case 5: {
            cout << "Goodbye!" << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
}
