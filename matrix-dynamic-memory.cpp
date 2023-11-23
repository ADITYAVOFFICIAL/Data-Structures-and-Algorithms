#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a_r, a_c, b_r, b_c;

again:
    // Prompt the user to enter the dimensions for the first matrix
    cout << "\nEnter rows and columns for matrix one: ";
    cin >> a_r >> a_c;

    // Prompt the user to enter the dimensions for the second matrix
    cout << "Enter rows and columns for matrix two: ";
    cin >> b_r >> b_c;

    // Check if the number of columns in the first matrix is equal to the number of rows in the second matrix
    // This is a requirement for matrix multiplication
    if (a_c != b_r) {
        cout << "\nCannot multiply matrices with these dimensions. Please try again.\n";
        goto again;
    }

    // Allocate memory for matrix one
    vector<vector<int>> a(a_r, vector<int>(a_c));

    // Allocate memory for matrix two
    vector<vector<int>> b(b_r, vector<int>(b_c));

    // Allocate memory for the product matrix
    vector<vector<int>> c(a_r, vector<int>(b_c, 0));

    // Prompt the user to enter the elements for the first matrix
    cout << "\nEnter matrix one " << a_r << " by " << a_c << "\n";
    for (int i = 0; i < a_r; ++i) {
        for (int j = 0; j < a_c; ++j) {
            cin >> a[i][j];
        }
    }

    // Prompt the user to enter the elements for the second matrix
    cout << "\nEnter matrix two " << b_r << " by " << b_c << "\n";
    for (int i = 0; i < b_r; ++i) {
        for (int j = 0; j < b_c; ++j) {
            cin >> b[i][j];
        }
    }

    // Initialize product matrix
    for (int i = 0; i < a_r; ++i) {
        for (int j = 0; j < a_c; ++j) {
            c[i][j] = 0;
        }
    }

    // Multiply matrix one and matrix two
    for (int i = 0; i < a_r; ++i) {
        for (int j = 0; j < a_c; ++j) {
            for (int k = 0; k < a_r; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    cout << "\nProduct of matrix one and two is\n";
    for (int i = 0; i < a_r; ++i) {
        for (int j = 0; j < b_c; ++j) {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
