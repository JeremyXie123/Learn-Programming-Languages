#include <iostream>
using namespace std;

int main() {
    string testArray[5] = {"Hi","I","Feel","Good","Today"};
    
    for(int i = 0; i < sizeof(testArray)/sizeof(testArray[0]); i++){ // Size of the array divided by the size of each index will tell you the number of items in the array
        cout << testArray[i] << " ";
    }

    return 0;
} 