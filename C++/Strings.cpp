#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    cout << "String: " << text << "\n";
    cout << "Has a length of: " << text.size() << "\n";
    cout << "Characters:\n";
    for(int i = 0; i < text.size(); i++){
        cout << text[i] << "\n";
    }

    return 0;
} 