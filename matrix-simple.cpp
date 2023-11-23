#include <iostream>

using namespace std;

int main() {
    int r, c;  // Declare variables for the number of rows and columns in the matrices

    // Input for the first matrix
    cout << "Enter the number of rows for the matrices: ";
    cin >> r;
    cout << "Enter the number of columns for the matrices: ";
    cin >> c;

    int a[r][c], b[r][c], mul[r][c];  // Declare matrices for the two input matrices and the result matrix

    // Input for the first matrix
    cout << "\nEnter the elements of the first matrix:" << endl;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout << "Enter value for a[" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];  // Read elements of the first matrix from the user
        }
    }

    // Input for the second matrix
    cout << "\nEnter the elements of the second matrix:" << endl;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout << "Enter value for b[" << i+1 << "][" << j+1 << "]: ";
            cin >> b[i][j];  // Read elements of the second matrix from the user
        }
    }

    // Matrix multiplication
    cout << "\nMultiplication of the matrices:" << endl;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            mul[i][j] = 0;  // Initialize the current element in the result matrix to 0
            for(int k = 0; k < c; ++k) {
                mul[i][j] += a[i][k] * b[k][j];  // Perform matrix multiplication
            }
        }
    }

    // Printing the result
    cout << "\nThe result matrix is:" << endl;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout << mul[i][j] << "\t";  // Print the elements of the result matrix
        }
        cout << endl;  // Move to the next line for the next row
    }

    return 0;  // Indicate successful completion to the operating system
}
