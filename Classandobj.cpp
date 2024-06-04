#include <iostream>
using namespace std;

// Define a class called "Car"
class Car {
public:
    
    string brand;
    string model;
    int year;

    
    void start() {
        cout << "Starting the " << brand << " " << model << "...\n";
    }

    void accelerate() {
        cout << "Accelerating...\n";
    }
};

int main() 
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;

    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 2021;

    // Use the objects
    cout << "Car 1: " << car1.year << " " << car1.brand << " " << car1.model << endl;
    car1.start();
    car1.accelerate();

    cout << "\nCar 2: " << car2.year << " " << car2.brand << " " << car2.model << endl;
    car2.start();
    car2.accelerate();

    return 0;
}
