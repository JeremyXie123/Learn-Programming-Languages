#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    while(counter < 10){
        cout << counter << "\n";
        counter++;
    }

    cout << "-----------\n";

    counter = 0;
    do{
        cout << counter << "\n";
        counter++;        
    }while(counter < 10);

    cout << "-----------\n";

    for(counter = 0; counter < 10; counter++){
        cout << counter << "\n";
    }

    return 0;
} 