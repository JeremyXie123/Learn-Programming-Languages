#include <iostream>
using namespace std;

class Animal  {
    public:
        void makeSound(){}
};

class Cat : public Animal {
    public:
        void makeSound() {
            cout << "Cat goes Meow\n";
        }
};

class Dog : public Animal {
    public:
        void makeSound() {
            cout << "Dog goes Woof\n";
        }
};

int main() {
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    myAnimal.makeSound();
    myCat.makeSound();
    myDog.makeSound();
    return 0;
}
