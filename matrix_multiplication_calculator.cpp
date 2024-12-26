// Create a program that performs matrix multiplication for two user-input matrices.

#include <iostream>
using namespace std;

int main() {
    int row1, row2, col1, col2;

    // Input dimensions for Matrix A & Matrix B
    cout << "Enter  matrix 1 size row and col: ";
    cin >> row1 >> col1;
    cout << "Enter  matrix 2 size row and col: ";
    cin >> row2 >> col2;

    // Ensure the matrices can be multiplied
    if ( col1 != row2 ) {
        cout << "Matrices can't be multiplied! Try again. "<< endl;
    }

    int matrixA[row1][col1], matrixB[row2][col2], matrixC[row1][col2] = {};

    // Taking inputs for matrix A
    cout << "Enter elements of matrix A: " << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cout << "ROW[" << i << "] Col[" << j <<"] :" ;
            cin >> matrixA[i][j];
        }
    }
    cout << endl;

    // Taking inputs for matrix B
    cout << "Enter elements of matrix B: " << endl;
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << "ROW[" << i << "] Col[" << j <<"] :";
            cin >> matrixB[i][j];
        }
    }

    // Multiplying the matrices
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Printing the resulting matrix
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }
}