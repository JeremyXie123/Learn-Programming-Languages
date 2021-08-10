#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ofstream object initialization from path
    ofstream WFile("filename.txt");
    WFile << "abcdefghijklmnopqrstuvwxyz";
    WFile.close();

    string text;
    ifstream RFile("filename.txt");

    while(getline(RFile, text)){
        cout << text;
    }

    RFile.close();
} 