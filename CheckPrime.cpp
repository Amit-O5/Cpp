#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    // Handle special cases
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;

    // Check for divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
