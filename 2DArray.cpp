#include <iostream>
using namespace std;

void inputArray(int arr[][100], int rows, int cols) {
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[][100], int rows, int cols) {
    cout << "Array elements are:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Invalid dimensions. Rows and columns must be positive integers." << endl;
        return 1;
    }

    int arr[100][100]; // Assuming a maximum of 100x100 array

    inputArray(arr, rows, cols);
    printArray(arr, rows, cols);

    return 0;
}
