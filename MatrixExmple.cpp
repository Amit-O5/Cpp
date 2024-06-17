//EXAMPLE 1
//... ADDITION OF MATRIX...

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
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int arr1[][100], int arr2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
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

    int arr1[100][100], arr2[100][100], result[100][100];

    cout << "Input first matrix:" << endl;
    inputArray(arr1, rows, cols);
    
    cout << "Input second matrix:" << endl;
    inputArray(arr2, rows, cols);

    addMatrices(arr1, arr2, result, rows, cols);

    cout << "Resultant matrix after addition:" << endl;
    printArray(result, rows, cols);

    return 0;
}

// //EXAMPLE 2
// //...MULTIPLICATION OF MATRIX...
// #include <iostream>
// using namespace std;

// void inputArray(int arr[][100], int rows, int cols) {
//     cout << "Enter elements of the array:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }
// }

// void printArray(int arr[][100], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void multiplyMatrices(int arr1[][100], int arr2[][100], int result[][100], int rows1, int cols1, int cols2) {
//     for (int i = 0; i < rows1; i++) {
//         for (int j = 0; j < cols2; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < cols1; k++) {
//                 result[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//     }
// }

// int main() {
//     int rows1, cols1, rows2, cols2;
//     cout << "Enter number of rows and columns for the first matrix: ";
//     cin >> rows1 >> cols1;

//     cout << "Enter number of rows and columns for the second matrix: ";
//     cin >> rows2 >> cols2;

//     if (cols1 != rows2) {
//         cout << "Invalid dimensions for matrix multiplication." << endl;
//         return 1;
//     }

//     int arr1[100][100], arr2[100][100], result[100][100];

//     cout << "Input first matrix:" << endl;
//     inputArray(arr1, rows1, cols1);
    
//     cout << "Input second matrix:" << endl;
//     inputArray(arr2, rows2, cols2);

//     multiplyMatrices(arr1, arr2, result, rows1, cols1, cols2);

//     cout << "Resultant matrix after multiplication:" << endl;
//     printArray(result, rows1, cols2);

//     return 0;
// }

// //Example 3
// //....TRANSPOSE OF METRIX....
// #include <iostream>
// using namespace std;

// void inputArray(int arr[][100], int rows, int cols) {
//     cout << "Enter elements of the array:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }
// }

// void printArray(int arr[][100], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void transposeMatrix(int arr[][100], int transpose[][100], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             transpose[j][i] = arr[i][j];
//         }
//     }
// }

// int main() {
//     int rows, cols;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> cols;

//     if (rows <= 0 || cols <= 0) {
//         cout << "Invalid dimensions. Rows and columns must be positive integers." << endl;
//         return 1;
//     }

//     int arr[100][100], transpose[100][100];

//     inputArray(arr, rows, cols);

//     transposeMatrix(arr, transpose, rows, cols);

//     cout << "Transposed matrix:" << endl;
//     printArray(transpose, cols, rows);

//     return 0;
// }

