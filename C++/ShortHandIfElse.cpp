#include <iostream> 
using namespace std; 

int main() {
    int inputNum;
    cin >> inputNum;
    cout << "You inputted: " << inputNum << "\n";
    
    //                  statement       ?       if so, do                  if not, do
    string statement = (inputNum <= 10) ? "Less than or equal to 10" : "greater than 10";
    cout << statement;
} 
