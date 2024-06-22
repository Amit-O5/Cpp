#include <iostream>
#include <cmath>

bool isArmstrong(int number) {
    // Calculate the number of digits
    int originalNumber = number;
    int numDigits = 0;
    while (originalNumber != 0) {
        originalNumber /= 10;
        numDigits++;
    }
    
    // Reset the originalNumber
    originalNumber = number;
    int sumOfPowers = 0;
    
    // Sum each digit raised to the power of numDigits
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sumOfPowers += std::pow(digit, numDigits);
        originalNumber /= 10;
    }
    
    // Check if the sum of the powers is equal to the original number
    return sumOfPowers == number;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isArmstrong(number)) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
