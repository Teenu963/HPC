//NAME:DHARAKESWARAN A
//ROLL NO:24011501003
//Matrix:16x16

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 16;
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE];

    // Input elements for the first matrix
    cout << "Enter elements of the first 16x16 matrix:" << endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second 16x16 matrix:" << endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Adding the two matrices
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum of the matrices
    cout << "Sum of the two matrices:" << endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
