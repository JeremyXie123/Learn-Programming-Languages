#include <iostream> 
using namespace std; 

int main() {
    // Type Name = Value
    int a = 1;
    int b = 4;
    double c = 2.0;
    double d = 3.0;

    cout << "Integer Operations: " << "\n";
    cout << "Addition: " << a << " + " << b << " = " << a + b << "\n";
    cout << "Subtraction: " << a << " - " << b << " = " << a - b << "\n";
    cout << "Multiplication: " << a << " * " << b << " = " << a * b << "\n";
    cout << "Division (Int): " << a << " / " << b << " = " << a / b << "\n"; // Integer division does not have a decimal component

    cout << "Float Operations: " << "\n";
    cout << "Addition: " << c << " + " << d << " = " << c + d << "\n";
    cout << "Subtraction: " << c << " - " << d << " = " << c - d << "\n";
    cout << "Multiplication: " << c << " * " << d << " = " << c * d << "\n";
    cout << "Division (Flt): " << c << " / " << d << " = " << c / d << "\n"; // "Normal" division
} 
