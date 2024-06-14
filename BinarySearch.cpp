#include<iostream>
using namespace std;

void binarysearch(int arr[], int size, int element) {
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == element) {
            cout << "Element found at index " << mid << endl;
            return;
        } else if (arr[mid] > element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "Element not found" << endl;
}

int main() {
    int size;
    cout << "Size of Array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size. Size must be a positive integer." << endl;
        return 1;
    }

    int arr[size];
    cout << "Enter elements of the array in sorted order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    int element;
    cin >> element;

    binarysearch(arr, size, element);

    return 0;
}
