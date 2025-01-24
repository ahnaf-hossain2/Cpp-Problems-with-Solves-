// A program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. You must use private properties and public methods for this class. The output should be as follows:
// Name        Year of joining        Address
// Robert        1994        64C- WallsStreat
// Sam        2000        68D- WallsStreat
// John        1999        26B- WallsStreat

#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int year;
        string address;
    public:
        void setInfo(string n, int y, string a) {
            name = n;
            year = y;
            address = a;
        }
        void getInfo() {
            cout << name << "\t" << year << "\t" << address << endl;
        }
};

int main()
{
    Employee e1, e2, e3;
    e1.setInfo("Robert", 1994, "64C- WallsStreat");
    e2.setInfo("Sam", 2000, "68D- WallsStreat");
    e3.setInfo("John", 1999, "26B- WallsStreat");
    cout << "Name\tYear of joining\tAddress" << endl;
    e1.getInfo();
    e2.getInfo();
    e3.getInfo();
    return 0;
}
