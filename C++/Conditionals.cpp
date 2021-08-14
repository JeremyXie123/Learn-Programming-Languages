#include <iostream> 
using namespace std; 

int main() {
    int inputNum;
    cin >> inputNum;
    cout << "You inputted: " << inputNum << "\n";
    
    if(inputNum <= 10){
        cout << "Your Number is less than or equal to 10.";    
    }
    else if(inputNum > 10){
        cout << "Your number is greater than 10.";
    }
} 
