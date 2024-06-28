#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

// Function to check if a given string is a palindrome
bool isPalindrome(const std::string& str) {
    // Create a filtered string containing only alphanumeric characters and convert to lowercase
    std::string filteredStr;
    for (char ch : str) {
        if (std::isalnum(ch)) {
            filteredStr += std::tolower(ch);
        }
    }

    // Check if the filtered string is equal to its reverse
    std::string reversedStr = filteredStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return filteredStr == reversedStr;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

