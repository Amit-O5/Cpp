#include <iostream>
using namespace std;

int main() {
    int var = 42;       // Declare an integer variable
    int *ptr = &var;    // Declare a pointer to an integer and initialize it with the address of var
    int **dptr = &ptr;  // Declare a double pointer and initialize it with the address of ptr

    // Print the value of var
    cout << "Value of var: " << var << endl;

    // Print the address of var
    cout << "Address of var: " << &var << endl;

    // Print the value stored in ptr (which is the address of var)
    cout << "Value stored in ptr (address of var): " << ptr << endl;

    // Print the value pointed to by ptr (which is the value of var)
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Print the value stored in dptr (which is the address of ptr)
    cout << "Value stored in dptr (address of ptr): " << dptr << endl;

    // Print the value pointed to by dptr (which is the value of ptr, the address of var)
    cout << "Value pointed to by dptr (address of var): " << *dptr << endl;

    // Print the value pointed to by the pointer pointed to by dptr (which is the value of var)
    cout << "Value pointed to by the pointer pointed to by dptr: " << **dptr << endl;

    return 0;
}
