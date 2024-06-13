#include<iostream>
#include<climits>  // For INT_MIN and INT_MAX

using namespace std;

int getMax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    cout << "Size of array is: ";
    cin >> size;

    // Ensure the size is positive and non-zero
    if (size <= 0 || size > 100) {
        cout << "Invalid size. Size must be a positive integer and less than or equal to 100." << endl;
        return 1;
    }

    int arr[100];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum number is " << getMax(arr, size) << endl;
    cout << "Minimum number is " << getMin(arr, size) << endl;

    return 0;
}
