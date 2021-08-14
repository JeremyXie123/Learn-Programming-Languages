#include <iostream>
using namespace std;

double safeDiv(double a, double b){
    if(b == 0){
        throw "ERROR: Division by zero";
    }   
    return a/b;  
}

int main() {
    int num1;
    int num2;

    cout << "Enter the numerator: ";
    cin >> num1;

    cout << "Enter the denominator: ";
    cin >> num2;

    try {
        double result = safeDiv(num1,num2);
        cout << num1 << " / " << num2 << " = " << result << "\n";        
    }
    catch(const char* errMsg){
        cerr << errMsg << "\n";
    }
    
    return 0;
}