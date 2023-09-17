#include <iostream>

class DB;

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    friend DM addDistances(const DM& dm, const DB& db);
    friend void displayDistance(const DM& dm);
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    friend DM addDistances(const DM& dm, const DB& db);
    friend void displayDistance(const DM& dm);
};

DM addDistances(const DM& dm, const DB& db) {
    int totalMeters = dm.meters;
    int totalCentimeters = dm.centimeters;

    // Convert DB to DM
    totalMeters += db.feet * 0.3048;  // 1 foot = 0.3048 meters
    totalCentimeters += db.inches * 2.54;  // 1 inch = 2.54 centimeters

    // Adjust the totalMeters and totalCentimeters if necessary
    if (totalCentimeters >= 100) {
        int extraMeters = totalCentimeters / 100;
        totalMeters += extraMeters;
        totalCentimeters %= 100;
    }

    return DM(totalMeters, totalCentimeters);
}

void displayDistance(const DM& dm) {
    std::cout << "Distance: " << dm.meters << " meters, " << dm.centimeters << " centimeters" << std::endl;
}

int main() {
    int m, cm, ft, in;

    std::cout << "Enter distance in meters and centimeters: ";
    std::cin >> m >> cm;
    DM dm1(m, cm);

    std::cout << "Enter distance in feet and inches: ";
    std::cin >> ft >> in;
    DB db1(ft, in);

    DM result = addDistances(dm1, db1);
    displayDistance(result);

    return 0;
}
