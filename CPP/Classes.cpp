#include <iostream>
using namespace std;

class Person {
    public: // Access Specifier, public meaning the class attributes are accessible outside the class
        string name;
        int age;
        Person(string _name, int _age){  
            name = _name;
            age = _age;
        }
        // Class method that prints out the data of the instance
        void printPerson(){
            cout << "Name: " << name << "\nAge: " << age << "\n";
        }
        // Class method with parameters
        void say(string phrase){
            cout << name << " said: " << phrase << "\n"; 
        }
        void celebrate(); // Placeholder class method to be defined later
};

// Class method defined outside of the class
void Person::celebrate(){
    cout << "Yay!\n";
}

int main() {
    Person p1("John",18);

    p1.printPerson();
    p1.celebrate();
    p1.say("Yeah");

    return 0;
}

/* Access Specifiers
public - attributes accessible outside of class
private - attributes cannot be accessed outside of class
protected - attributes cannot be accessed outside of class, but can be accessed by inherited classes
*/