#include <iostream>
using namespace std;

int main() {
    int var = 42;      // Declare an integer variable
    int *ptr;          // Declare a pointer to an integer

    ptr = &var;        // Store the address of var in the pointer ptr

    // Print the value of var
    cout << "Value of var: " << var << endl;

    // Print the address of var
    cout << "Address of var: " << &var << endl;

    // Print the value stored in ptr (which is the address of var)
    cout << "Value stored in ptr (address of var): " << ptr << endl;

    // Print the value pointed to by ptr (which is the value of var)
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Modify the value of var using the pointer
    *ptr = 100;
    cout << "New value of var after modification through ptr: " << var << endl;

    return 0;
}
