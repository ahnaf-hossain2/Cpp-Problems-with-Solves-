/*
1. Initialize a matrix of minimum 3x4 (row x column) size. Output its transpose matrix.
For example,

Original Matrix:
1 6 7 9
2 4 8 5
3 1 9 4

Transpose:
1 2 3
6 4 1
7 8 9
9 5 4
*/

#include <iostream>
using namespace std;

int main() {
    // Initialize the matrix
    int matrix[3][4] = {
        {1, 6, 7, 9},
        {2, 4, 8, 5},
        {3, 1, 9, 4}
    };

    //Print the original matrix
    cout << "Original Matrix: " << endl;
    for (int row = 0; row < 3; ++row) 
    {
        for (int col = 0; col < 4; ++col) {
            cout << matrix[row][col] << " ";
        }
        //Must give this endl to get a ordered row output.
        cout << endl;
    }

    // Transpose the matrix
}