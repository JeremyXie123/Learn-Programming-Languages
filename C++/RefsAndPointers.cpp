#include <iostream>
using namespace std;

int main() {
    string name = "John";
    string &alias = name; // Using the & character before a variable sets it as a reference
    
    // Referencing
    string* ptr = &name; // Pointer stores the address of name

    cout << "String: " << name << "\n"; // The name in question
    cout << "Reference: " << alias << "\n"; // A variable that references name
    cout << "PTR: " << ptr << "\n"; // Pointer to name's memory address
    
    // Dereferencing
    cout << "DeRef: " << *ptr << "\n"; // Dereferncing returns the value at a memory address specified by a pointer

    *ptr = "Jane"; // Reassignment of the memory ptr references to Jane

    cout << "Reassignment"; 

    cout << "PTR: " << *ptr << "\n"; // Pointer's contents are updated
    cout << "String: " << name << "\n"; // Name has also been updated as it represents the same block of memory

    return 0;
} 