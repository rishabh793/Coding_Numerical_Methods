#include <iostream>
#include <fstream> // For file handling
using namespace std;

int main() {
    // Define a 3x3 matrix
    int matrix[3][3];

    // Open the file
    ifstream inFile("matrix.txt");
    if (inFile.is_open()) {
        // Read the matrix from the file
        for (int i = 1; i <= 3; ++i) {
            for (int j = 1; j <= 3; ++j) {
                inFile >> matrix[i][j];
            }
        }
        inFile.close();

        // Display the matrix
        cout << "The read 3x3 matrix is:" << endl;
        for (int i = 1; i <= 3; ++i) {
            for (int j = 1; j <= 3; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}

