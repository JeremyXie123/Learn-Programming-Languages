#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Select a number between 1 and 4: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "You selected option 1";
            break;
        case 2:
            cout << "You selected option 2";
            break;
        case 3:
            cout << "You selected option 3";
            break;
        case 4:
            cout << "You selected option 4";
            break;
        default:
            cout << "You chose a number outside the range of 1-4.";
    }

    return 0;
} 