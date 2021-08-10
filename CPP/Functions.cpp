#include <iostream>
using namespace std;

void greet(string name = "Unknown", int age = 18){
    cout << "Hello, " << name << "\n";
    cout << "Your age is: " << age << "\n";
}

int f(int x){
    return x * x;
}

int f(int x, int y){
    return x + y;
}

void setAsEmpty(string &s){
    s = "";
}

int main() {
    int age;
    string myName;
    cout << "Enter your name: ";
    cin >> myName;
    cout << "Enter your age: ";
    cin >> age;

    greet(myName, age); // Function with multiple parameters

    cout << "Null Data \n";

    greet(); // Default parameters

    cout << "f(x) = x^2 \n";

    cout << "f(2) = " << f(2) << "\n";

    cout << "f(3) = " << f(3) << "\n";

    setAsEmpty(myName); // Setting myName to an empty string by reference

    cout << "Updated name: " << myName << "\n";

    cout << "f(x,y) = x+y \n";

    cout << "f(1,2) = " << f(1,2) << "\n";

    return 0;
} 