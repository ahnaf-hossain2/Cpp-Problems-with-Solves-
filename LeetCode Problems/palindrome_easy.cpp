#include <iostream>
using namespace std;

class Solution {
public:
    int  reverse(int x) {
        int rightDigit, reverseNum = 0;
        while (x != 0) {
            rightDigit = x % 10;
            x = x / 10;
            reverseNum = reverseNum * 10 + rightDigit;
        }
        return reverseNum;
    }
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int reversed = reverse(x);
        return reversed == x; // it returns the boolean value if x is palindrome or not
    }
};

int main(){
    int x;
    cout << "Input x: ";
    cin >> x;
    Solution sol;
    cout << sol.reverse(x)<< endl;
    cout << sol.isPalindrome(x); // called isPalindrome to use it.
}
