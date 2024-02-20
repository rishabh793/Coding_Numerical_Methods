#include <iostream>
#include <fstream> // For file handling
using namespace std;

int main() {
    // Define a 3x3 matrix
    int matrix[3][3];

    // Input elements of the matrix
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "The entered 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Save the matrix to a file
    ofstream outFile("matrix.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                outFile << matrix[i][j] << " ";
            }
            outFile << endl;
        }
        outFile.close();
        cout << "Matrix saved to file 'matrix.txt'" << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    return 0;
}

