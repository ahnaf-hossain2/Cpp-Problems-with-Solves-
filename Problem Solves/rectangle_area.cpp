// Done using setter and getter methods
#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:

    float getLength() {
        return length;
    }
    float getBreadth() {
        return breadth;
    }
    void setLength(int l) {
        if(l>=0) {
            length = l;
        } else {
            length = 0;
        }
    }
    void setBreadth(int b) {
        if(b>=0) {
            breadth = b;
        } else {
            breadth = 0;
        }
    }
    float returnArea() {
        return length*breadth;
    }
};

int main() {
    Rectangle r;
    cout << "Enter length and breadth of rectangle: ";
    int l, b;
    cin >> l >> b;
    r.setLength(l);
    r.setBreadth(b);
    cout << r.getLength() << endl;
    cout << r.getBreadth() << endl;
    cout << r.returnArea() << endl;
    return 0;
}

