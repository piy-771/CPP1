#include <iostream>
using namespace std;


class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor" << endl;
    }
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor" << endl;
    }
    void start() {
        cout << "Car started" << endl;
    }
};

class ElectricCar : public Car {
public:
    ElectricCar() {
        cout << "ElectricCar constructor" << endl;
    }
    void start() {
        cout << "ElectricCar started" << endl;
    }
};
int main(){
ElectricCar obj;
}
