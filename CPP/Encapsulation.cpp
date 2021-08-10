#include <iostream>
using namespace std;

class Wallet {
    private: 
        string owner;
        int balance;
    
    public:
        Wallet(string _owner, int _balance){
            owner = _owner;
            balance = _balance;
        }   
        void setBalance(int newBalance){
            balance = newBalance;
        } 
        int getBalance(){
            return balance;
        }
};

int main() {
    Wallet p1("John",100);

    cout << "Current Balance: " << p1.getBalance() << "\n";
    
    cout << "Enter a new balance: \n";
    int temp;
    cin >> temp;
    p1.setBalance(temp);

    cout << "New Balance: " << p1.getBalance() << "\n";

    return 0;
}
