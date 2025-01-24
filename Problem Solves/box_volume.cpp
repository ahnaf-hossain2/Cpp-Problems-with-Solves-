// Problem: Write a class Box that has three private data members length, breadth and height. The class should have the following public member functions also use setter getter methods:
#include <iostream>
using namespace std;

class Box {
    private:
        int length;
        int breadth;
        int height;
    public:

    float getLength() {
        return length;
    }
    float getBreadth() {
        return breadth;
    }
    float getHeight() {
        return height;
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
    void setHeight(int h) {
        if(h>=0) {
            height = h;
        } else {
            height = 0;
        }
    }
    float returnVolume() {
        return length*breadth*height;
    }
};

int main() {
    Box b;
    cout << "Enter length, breadth and height of box: ";
    float l, c, h;
    cin >> l >> c >> h;
    b.setLength(l);
    b.setBreadth(c);
    b.setHeight(h);
    cout << b.getLength() << endl;
    cout << b.getBreadth() << endl;
    cout << b.getHeight() << endl;
    cout << b.returnVolume() << endl;
    return 0;
}
