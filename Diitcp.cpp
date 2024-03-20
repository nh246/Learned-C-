#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a class for the transport system
class TransportSystem {
private:
    string vehicleType;
    string vehicleNumber;
    string driverName;
    vector<string> destinations;

public:
    // Constructor
    TransportSystem(string type, string number, string driver) {
        vehicleType = type;
        vehicleNumber = number;
        driverName = driver;
    }

    // Function to add destinations
    void addDestination(string destination) {
        destinations.push_back(destination);
    }

    // Function to display information
    void displayInfo() {
        cout << "Vehicle Type: " << vehicleType << endl;
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Driver Name: " << driverName << endl;
        cout << "Destinations: " << endl;
        for (string dest : destinations) {
            cout << "- " << dest << endl;
        }
    }
};

int main() {
    // Create an instance of TransportSystem
    TransportSystem bus("Bus", "DH-1234", "John Doe");

    // Add destinations
    bus.addDestination("Campus A");
    bus.addDestination("Campus B");
    bus.addDestination("Campus C");

    // Display information
    bus.displayInfo();

    return 0;
}
