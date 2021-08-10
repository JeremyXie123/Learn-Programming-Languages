#include <iostream>
using namespace std;

class Vehichle {
    public:
        string model;
        int year = 1908;

        Vehichle(string _model = "Ford Model T", int _year = 1908){
            model = _model;
            year = _year;
        }
        
        void horn(){
            cout << "honk honk\n";
        }
};

class Car: public Vehichle {
    public:
        bool tireBrand;
        Car(string _model, int _year, bool _tires): Vehichle(_model,_year) { // Inherited constructors are done as such, and call the super's constructor in this fassion
            tireBrand = _tires;
        }
};


int main() {
    Car c1("Toyota Corolla",1908,true);
    cout << c1.model << "\n";
    cout << c1.year << "\n";
    cout << c1.tireBrand << "\n";

    return 0;
}